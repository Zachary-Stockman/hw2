/*
Zachary Stockman
COP2000 6:35-9:00pm
10-03-17
Description: HW2A
basically a menu that has different formulas for area inside it used to calculate different problems
such as finding the area of a round room by inputing the radius.
*/
#include <iostream>																			//main library
#include <iomanip>																			//needed for fixed point notation
#include <cstdio>																			//needed for exit(0);

using namespace std;

int main()																					//main function
{
	while (true)																			//this is here because for continue to work it must be inside a loop
	{
		const double Math_Pie = 3.141592653589793;											//constant for pie (used in math)
		float Length_of_Room,																//variable placeholders
			  Width_of_Room,
			  Radius_of_Room,
			  Area_of_Room;
		int First_menu_input;																// an int bc switch needs intergers only for the experession
		bool is_not_number;																	//bool variable to hold the info thats held in variable as true or false and is set by line 37

		cout << "Harvey's Room Calculator: " << endl										//the menu
			 << "************************* " << endl
			 << "1. Square Room" << endl
			 << "2. Retangular Room" << endl
			 << "3. Round Room" << endl
			 << "4. Quit" << endl
			 << endl << "Please enter a menu item(1-4) > ";
		cin >> First_menu_input;															//menu item input
		cout << endl << endl;																//spacing
		
		is_not_number = cin.fail();															//checks to see if cin fails aka types in a letter then the variable is set to true
		
		if (is_not_number == true)															//tests if variable is_not_number true or not if so it executes statements inside brackets
		{
			cout << "Letters are not allowed to be entered, please try again. "				//outputs try again
				 << endl << endl;															//spacing
			system("pause");																//pauses and waits for a keypress
			exit(0);																		//exits program
		}
		else																				//if the menu choice isnt a letter than it continues on with the program
		{

			switch (First_menu_input)														//menu categories below
			{

				case 1:																		//menu item 1
				{
					cout << endl << "---Square Room---" << endl << endl						//ouputed text
					 	 << "Please enter the Width of the room > ";						//outputted question
					cin >> Width_of_Room;													//input width to be used in math below
					is_not_number = cin.fail();												//checks to see if cin fails aka types in a letter then the variable is set to true
					
					if (Width_of_Room < 0)													//testing if the input was a real number
					{
						cout << endl << "Not a real number, please try again."				//outputs try again
							 << endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);

					}
					
					else if (is_not_number == true)											//tests if variable is_not_number true or not if so it executes statements inside brackets
					{
						cout << "Letters are not allowed to be entered, please try again. "	//outputs try again
							<< endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);															//exits program
					}
					Area_of_Room = Width_of_Room * Width_of_Room;							//math for area
					system("CLS");															//clears the screen after pressing enter on the input but displays whats below only
					cout << setprecision(2) << fixed										//gives the output a fixed point notation of 2
				 		 << "Area of room = " << Area_of_Room << " sq/ft" << endl << endl;	//outputted formula
					break;																	//used to break out of the function when finished to then return 0 aka go toward the bottom
				}

				case 2:																		//menu item 2
				{
					cout << endl << "---Retangular Room---" << endl << endl					//outputted text
					 	 << "Please enter the length of the room > ";						//outputted question
					cin >> Length_of_Room;													//input length used in math below
					cout << endl << endl;													//spacing
					is_not_number = cin.fail();												//checks to see if cin fails aka types in a letter then the variable is set to true

					if (Length_of_Room < 0)													//testing if the input was a real number
					{
						cout << endl << "Not a real number, please try again."				//outputs try again
							 << endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);
					}

					else if (is_not_number == true)											//tests if variable is_not_number true or not if so it executes statements inside brackets
					{
						cout << "Letters are not allowed to be entered, please try again. "	//outputs try again
							<< endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);															//exits program
					}
					cout << "Please enter the width of the room > ";						//outputted question
					cin >> Width_of_Room;													//input width used in formula below
					cout << endl << endl;													//more spacing
					
					if (Width_of_Room < 0)													//testing if the input was a real number
					{
						cout << endl << "Not a real number, please try again."				//outputs try again
							 << endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);
					}

					else if (is_not_number == true)											//tests if variable is_not_number true or not if so it executes statements inside brackets
					{
						cout << "Letters are not allowed to be entered, please try again. "	//outputs try again
							<< endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);															//exits program
					}
					system("CLS");															//clears screen after last input to make screen look nice with the outputted formula below
					Area_of_Room = Length_of_Room * Width_of_Room;							//math
					cout << setprecision(2) << fixed										//gives the output a fixed point notation of 2
					 	<< "Area of room = " << Area_of_Room << " sq/ft" << endl << endl;	//outputted formula
					break;																	//break out of function
				}

				case 3:																		//menu item 3
				{
					cout << endl << "---Round Room---" << endl								//outputted text
						 << endl << "Please enter the radius of the room > ";				//outputted question
					cin >> Radius_of_Room;													//input radius used in formula
					cout << endl << endl;													//spacing
					is_not_number = cin.fail();												//checks to see if cin fails aka types in a letter then the variable is set to true
					
					if (Radius_of_Room < 0)													//testing if the input was a real number
					{
						cout << "Not a real number, please try again."						//outputs try again
							 << endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);
					}

					else if (is_not_number == true)											//tests if variable is_not_number true or not if so it executes statements inside brackets
					{
						cout << "Letters are not allowed to be entered, please try again. "	//outputs try again
							<< endl << endl;												//spacing
						system("pause");													//pauses and waits for a keypress
						exit(0);															//exits program
					}
					system("CLS");															//clears screen for the formula to be outputted afterwards
					Area_of_Room = (Math_Pie * (Radius_of_Room * Radius_of_Room));			//math using pie time radius squared
					cout << setprecision(2) << fixed										//gives the output a fixed point notation of 2
						 << "Area of Room = " << Area_of_Room << " sq/ft" << endl << endl;	//outputted formula
					break;																	//another way of breaking out of function

				}

				case 4:																		//menu item 4
				{
					system("CLS");															//clears the menu off screen
					cout << "	Thank you for using Haverly's Room Calculator!"				//outputs the thank you for using program
						 << endl << endl;													//spacing
					system("pause");														//pauses so it doesnt close instantly
					exit(0);																//then exits onces enter is pressed cstdio library needed
					break;																	//another break out of function
				}

				default:																	//if any thing else is entered (catch all else) then the function starts here
				{

					cout << "Invalid Choice please try again. "								//outputs try again
						 << endl << endl;													//spacing
					system("pause");														//pauses and waits for a keypress
					system("CLS");															//clears text so when continued afterwards the try again text isnt stuck ontop
					continue;																//after the pause the function will start over creating the outputted menu (basically restarting program)
				}

			}
		}
		cout << "	Thank you for using Haverly's Room Calculator!"							//where the breaks end up with outputted thank you
			 << endl << endl;
		system("pause");																	//pause so it dont end instantly
		return 0;																			//ends program when done
	}
}