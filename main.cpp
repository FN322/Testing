#include <iostream>
#include <fstream>
#include <string>
#include "ArgumentManager.h"
using namespace std;


int main(int argc, char* argv[]) {
	if (argc < 2) {
		cout << "Usage: main \"A=<file>;C=<file>\"" << endl;
		return -1;
	}

	// get input and output file names from arguments
	ArgumentManager am(argc, argv);
	string infilename = am.get("A");
	string outfilename = am.get("C");

	cout << "File name for matrix A: " << infilename << endl
		<< "File name for matrix C: " << outfilename << endl;

	// read parameters from input file
	string line;
	ifstream ifs(infilename);


	// write to output file
	ofstream ofs(outfilename);

	ofs.close();
	return 0;
}