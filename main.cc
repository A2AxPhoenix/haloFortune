#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> haloQuotes;
string genHaloQuote(int x) {
	return "";
}

int main() {
	string fileName = "HaloQuotes.txt";
	ifstream file(fileName);
	if (!file) throw runtime_error("The file name does not exist!\n");
	while (file) {
	}
}
