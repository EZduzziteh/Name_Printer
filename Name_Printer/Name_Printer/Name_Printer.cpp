/* LA 1.1
Write a program that asks the user to enter their name, then prints a greeting using their name.
1.	Print the following message: “What is your name?”
2.	Read the name the user enters.
3.	Print the following message: “What is your age?”
4.	Read the user’s age as an integer.
5.	Print a greeting in the following format: “Hello NAME (AGE)!”. Replace NAME and AGE with the values retrieved from the user.
 */

#include<iostream>
#include < string >
using namespace std;
//initial variables to make sure it is obvious if the program runs into any errors.
string userName = "VoidName";
int userAge = -1;


int main() {



	//ask for name input and get that name input and display it back to the user.
	cout << "What is your name?\n";
	cin >> userName;
	cout << "\nYou Entered: " + userName + ".";

	//ask for age input, get that name input and display it back to the user.
	cout << "\n\nAnd what is your age?\n";
	cin >> userAge;
	cout << "\nYou Entered: " + to_string(userAge);

	//Display a welcome message using the users name and age
	cout << "\n\nHello " + userName + "(" + to_string(userAge) + ")!"<<endl<<endl;







}