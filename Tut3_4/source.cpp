#include <cstdlib> // random numbers header file//
#include <ctime> // used to get date and time information
#include <iostream>
using namespace std;

int main()
{
	//Declare vairables to store values needed
	int roll = 0; 
	int timesroll = 0;
	int numberof6 = 0;
	int choice = 1;
	int totalrolls = 0;

	while (choice > 0)
	{
		//reset roll and timesroll values
		roll = 0;
		timesroll = 0;

		//roll the dice until we get a 6 and add one every attempt to a counter "timesroll"
		while (roll != 6)
		{
			srand(time(0)); //initialise random num generator using time
			roll = rand() % 6 + 1; // generate a random number between 1 and 6
			timesroll += 1;
		}

		totalrolls += timesroll;

		//Store the number of 6's in "numberof6"
		numberof6 += 1;


		//output the number of rolls to get a 6
		cout << "It took " << timesroll << " rolls to get a 6." << endl;

		//Ask user if they would like to continue
		cout << "If you would like to continue please enter a positive number or to view the results and exit enter 0: ";
		cin >> choice;
		cout << endl;
	}

	//Caclulate average rolls and display it to the screen with the number of 6's

	totalrolls = totalrolls / numberof6;
	cout << "The average amount of rolls to get " << numberof6 << " six's was: " << totalrolls << endl;


	return 0;
	
}