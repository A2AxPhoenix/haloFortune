/* 
 * Purpose: A simple program to initiate a quote upon execution. Similar to the UNIX program "fortune"
 * File: haloFortune.cc
 * Author: A2AxPhoenix
 * Version 0.2 3/24/22
 * This program is open source, feel free to modify how you want.
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

// Holds quotes for ease of access
// TODO: Get this to work for conversational quotes between 2 or 3 people
vector<string> haloQuotes;

// Call this to generate the random quote
string genHaloQuote(int quote) {
	return haloQuotes.at(quote);
}

int main() {
	// Change this if you want a custom file.
	// Everyone has access to the file I am modifying
	// TODO: Maybe ask if they have other files?
	string fileName = "haloQuotes.txt";
	ifstream file(fileName);
	// Error Check -- Make sure you have the quotes.
	if (!file) throw runtime_error("The file name does not exist!\n");
	while (file) {
		string s; // Reads a line at a time from the file into this variable
		getline(file, s);
		stringstream read(s); // Parse string. This can be used if you have conversational quotes between multiple people
		string quote; // Holds the actual sentence (quote)
		getline(read, quote);
		if (!file) break; // If we reach end of file, break from the loop
		haloQuotes.push_back(quote);
	}
	srand(time(NULL)); // TODO: Make randomizer more random.
	int whichQuote = rand() % haloQuotes.size();
	cout << genHaloQuote(whichQuote) << endl;
}
