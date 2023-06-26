# project_three


This program needs to meet many different criteria. This program needs to be able to count the number of specific iterations found in the text file, determine the frequency of every item as a list, determine the frequency of every item as a histogram, an exit program option, and create a DAT file upon exiting the program. 
The first thing that needed to be done was to make a frequency map. This will allow the program to read and store elements inside the text file for future use. Next the program reads the input from the file and creates strings with item names in a frequency map as it progresses through the file. The program then looks for input from the user to perform many more functions.
Function one will allow the program to look at the map and compare it to the user input. The program then counts the number of iterations it finds within the text file. After the program has the number of iterations counted it will output the number of times it has found a match. If there are no such items in the text file, the program will inform the user of this before looping back to allow for another input.
Function two will output the frequency of all items. Starting at the beginning of the text file, the program will count how many of each specific matching text it has found. After compiling the number of iterations, the program will output the text and how many iterations there are. Once the text has been printed the program will loop back to the menu and allow for another user input.
Function three will do the same as function two with the exception that instead of giving a numeric value, the program will give a histogram graphical representation of how many iterations were counted. 
Function four will offer a dual purpose. First and foremost, this option will allow the user to end the program. As a secondary result, ending the program in this manner will cause a backup .DAT file to be written for the frequency map. 
Lastly, a default case will be written for when the user inputs a number or letter that is not 1, 2, 3, or 4. When this happens the program will notify the user that an improper input has been entered and will terminate the program. This form of termination does not generate a .DAT file.



