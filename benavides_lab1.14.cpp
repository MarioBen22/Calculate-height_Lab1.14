// This program calculates the height of a basketball player.
#include <iostream>
using namespace std;

int main()
{
	double feet, inches;
		
	feet = 74 / 12; //calculate the feet.
	
	inches = 74 % 12; //calculate the remaining inches.
	
	cout << "A 74 inch tall basketball player is " << feet << " feet " << inches << " inches tall." << endl; //Display the feet and inches.
	return 0;
}
