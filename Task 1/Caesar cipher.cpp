// Caesar cipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void encrypt(char* inputMessage, char* codedMessage) {
	int i = 0;

	while (inputMessage[i] != '\0') {
		if ((inputMessage[i] >= 'A' && inputMessage[i] <= 'V') ||
			(inputMessage[i] >= 'a' && inputMessage[i] <= 'v')) {

			codedMessage[i] = inputMessage[i] + 3;
		}
		else if ((inputMessage[i] >= 'W' && inputMessage[i] <= 'Z') ||
			(inputMessage[i] >= 'w' && inputMessage[i] <= 'z')) {

			codedMessage[i] = inputMessage[i] - 23;
		}
		else {
			codedMessage[i] = inputMessage[i];
		}
		i++;
	}
	codedMessage[i] = '\0';
}


int main()
{
	char inputMessage[200] = { 0 };
	char codedMessage[200] = { 0 };
	cout << "Enter a message you want to encode: ";
	cin.getline(inputMessage, 199);

	encrypt(inputMessage, codedMessage);

	//[0],[1]

	cout << "Encoded Message: " << codedMessage << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

