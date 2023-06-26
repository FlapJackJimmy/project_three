/*
File: SNHU Project Three
Name: Jacob Rickert
Date: 06/18/2023
*/

#include <iostream>
#include <fstream>
#include <map>

using namespace std;

class MapList {
private:
    map<string, int> frequencyMap;

public:
    MapList() {}

    // read input file and store frequency in the map
    void readInputFile(string fileName) {
        ifstream inputFile(fileName);
        string item;
        while (inputFile >> item) {
            frequencyMap[item]++;
        }
        inputFile.close();
    }

    // print frequency of specific item
    void printItemFrequency(string item) {
        if (frequencyMap.count(item) > 0) {
            cout << item << " was purchased " << frequencyMap[item] << " times." << endl;
        }
        else {
            cout << item << " was not purchased." << endl;
        }
    }

    // print frequency of all items
    void printAllFrequencies() {
        for (auto itr = frequencyMap.begin(); itr != frequencyMap.end(); itr++) {
            cout << itr -> first << " was purchased " << itr -> second << " times." << endl;
        }
    }

    // print frequency of all items as histogram
    void printHistogram() {
        for (auto itr = frequencyMap.begin(); itr != frequencyMap.end(); itr++) {
            cout << itr->first << "\r" << "\t\t";
            for (int i = 0; i < itr -> second; i++) {
                cout << "#";
            }
            cout << endl;
        }
    }

    // write the frequency map to backup file
    void writeFrequencyFile(string fileName) {
        ofstream frequencyFile(fileName);
        for (auto itr = frequencyMap.begin(); itr != frequencyMap.end(); itr++) {
            frequencyFile << itr -> first << " " << itr -> second << endl;
        }
        frequencyFile.close();
    }
};

int main() {
    MapList tracker;
    tracker.readInputFile("CS210_Project_Three_Input_File.txt");
    bool caseLoop = true;

    int input;
    
    do {
        cout << "___________________________________________" << endl;
        cout << "\nMenu:" << endl;
        cout << "Enter your choice (1-4):" << endl;
        cout << "1. Search for an item." << endl;
        cout << "2. Print frequency of all items." << endl;
        cout << "3. Print histogram of all items." << endl;
        cout << "4. Exit program. \n" << endl;
        cout << "___________________________________________" << endl;
        cin >> input;
        cout << "___________________________________________" << endl;


        switch (input) {

        case 1: { // case to call printItemFrequency if 1 is pressed
            string item;
            cout << "Enter an item to search for: ";
            cin >> item;
            tracker.printItemFrequency(item);
            break;
        }

        case 2: { // case to call printAllFrequencies if 2 is pressed
            tracker.printAllFrequencies();
            break;
        }

        case 3: { // case to call printHistogram if 3 is pressed
            tracker.printHistogram();
            break;
        }

        case 4: { // case to write a .dat file when the program closes
            tracker.writeFrequencyFile("frequency.dat");
            cout << "Exiting program." << endl;
            caseLoop = false;
            break;
        }
        default: { // If not 1 - 4 end program
                cout << "Enter a number between 1 and 4." << endl;
                caseLoop = false;
                break;
        }
        }
    }
    while (caseLoop);

    return 0;
}