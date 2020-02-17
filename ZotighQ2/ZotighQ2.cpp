// ZotighQ2.cpp
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: 2/17/2020
// Purpose: Quiz #2

#include <iostream>

using namespace std;

int main()
{
// Declaired Variables
	int daysGone;
	int weather;
	int temp;
	int i = 1;

	// Header/Greeting cout's
	cout << "Lance Zotigh" << endl;
	cout << "Quiz #2 Vacation Planner" << endl;
	cout << "\nObjective: A C++ program that will help a person going on vacation to the ocean to determine whether they should to go to the beach or visit the tourist spots." << endl;
	cout << "Welcome!" << endl;

	// cout's to get the user input
	cout << "\nHow many days will you be gone?: " << endl;
	cin >> daysGone;
	do {
	// cout's to get the users input on the temp
		cout << "\nWhat is the tempature predicted to be on day " << i << "?" << endl;
		cin >> temp;

	//Cout's to get the users input for type of weather in that day
		cout << "\nFor Day " << i << ", what is the weather predicted to be?:" << endl
			<< "Please enter the coresponding number: " << endl;
		cout << "1. Sunny" << endl;
		cout << "2. Rainy" << endl;
		cout << "3. Cloudy" << endl;
		cin >> weather;

	// Loops to handle to displayed 
		if (weather == 3 && temp <= 75) {
			cout << "On day " << i << ", it will be cloudy, but still beach weather!" << endl;
		}
		else if (weather == 1 && temp <= 75) {
			cout << "On day " << i << ", it should be a perfect day at the beach, but take a big beach umbrella!" << endl;
		}
		else if (weather == 2) {
			cout << "On day " << i << ", it will be a great day to visit the local museum!" << endl;
		}
		else {
			cout << "On day " << i << ", it might be a bit cool for the beach.  Bring a sweater!" << endl;
		}

	//increments i
	    i++;

	} while (i <= daysGone);
}