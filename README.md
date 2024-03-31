# ObjectArx
This project is dedicated to various ObjectARX practice assignments, providing a collection of different projects that showcase the application of ObjectARX in AutoCAD development. Each assignment within this repository focuses on a specific aspect of ObjectARX programming, offering hands-on experience and practical insights.

## Files
**Define a Custom Command.cpp**: Defines the initialization routines for the DLL.

**arxHeaders.h**: Header file containing necessary declarations.

**framework.h**: Header file containing framework declarations.

**pch.h**: Precompiled header file.

## Implementation Details
* The MyCommand function displays a simple greeting message "Hello User" when invoked.
* The Greetings function displays a message "Hello AU2024!!!" when invoked.
* The acrxEntryPoint function serves as the entry point for the ObjectARX application. It registers the custom commands during initialization and unregisters them during unloading.
* Load DLL: Load the DLL into AutoCAD using the NETLOAD command.

## Exercise 1 - 3: Create a New Project, Compile and Load ObjectARX Project and Define a Custom Command
* Invoke Commands: Use the MYCOMMAND and First commands to display the respective messages.

## Exercise 4: Add Line to Space Model
* The CreateLine function creates a line entity with specified start and end points and adds it to the model space of the current drawing.
* Invoke Command: Use the AddLine command to add a line to the drawing.

## Exercise 5: Create New Layer
* The makeLayer function checks if a layer named "OBJ" exists in the drawing. If not, it creates a new layer with the name "OBJ" and sets its color to cyan.
* Invoke Command: Use the MakeLayer command to create the "OBJ" layer with a cyan color.

## Exercise 6: Step through All Objects in Database
* The listObjects function retrieves the current drawing database and space object. It then iterates through each object in the space and displays the class name of each object in the AutoCAD Text Window.
* Invoke Command: Use the ListObjects command to list all objects present in the drawing space.

## Exercise 7: Add Line Using User Input
* The inputLine function prompts the user to input two points and creates a line entity between them in the current drawing space.
* Invoke Command: Use the InputLine command to input two points and create a line between them in the drawing.

## Exercise 8: Select Objects and Request Keyword
* The changeColor function prompts the user to select objects and then prompts for a color option. Based on the user's input, it changes the color of the selected objects.
* Invoke Command: Use the ChangeColor command to select objects and change their color.

## Exercise 11: Work with System Variables and Use Commands
* The commandAndSysVar function retrieves the current value of the CIRCLERAD system variable and prints it. It then creates a circle using the CIRCLE command, pauses for user input, and resets the CIRCLERAD variable to its previous value.
* Invoke Command: Use the CommandAndSysVar command to execute the demonstration.

## Exercise 12: Work with Input and Single Line Text Objects
* The acrxEntryPoint function serves as the entry point for the ObjectARX application. It registers the custom command during initialization and unregisters it during unloading.
* Invoke Command: Use the UserInfo command to execute the demonstration. Follow the prompts to enter your age, name, and specify the insertion point for the text entities.

## Exercise 13: Defining AutoLISP Functions
* The project defines several utility functions such as Dtr (Degrees to Radians), Rtd (Radians to Degrees), tangent, and Ex_Alert (Extended Alert). These functions are defined using the acedDefun function to make them accessible from AutoLISP.
* The funcload function loads all the defined functions into AutoCAD's AutoLISP environment.
* Each utility function performs a specific mathematical or messaging operation and returns the result to AutoLISP.
* Use AutoLISP Functions: The defined AutoLISP functions (Dtr, Rtd, Tan, Ex_Alert) can now be used in AutoCAD's AutoLISP environment.
