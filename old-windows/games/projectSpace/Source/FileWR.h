#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>

using namespace std;

int size;

int fileReadWrite();
string checkLines(string);
vector<string> read(int, string);
/*string write(string, string, string);*/

/*int fileReadWrite () {
	
	int size;
	size = checkLines();
	//cout << size;
	
	if () {
		
		vector<string> fIn (size);
		fIn = read(size); 
		
		for (int i = 0; i <= size; i++) {
			
			cout << fOut [i] << endl;
			
		}
	
	string s1 = "hello";
	string s2 = "Hell";
	string s3 = "Hi";
	
	write(s1, s2, s3);
	
	system("pause");
}*/

string checkLines (string fileName) {
	
	int size = 0;
    string line;
    ifstream myfile("textexample.txt");

    while (getline(myfile, line)) {
        ++size;
	}
	
	read(size, fileName);
	
    //return size;
	
}

vector<string> read(int size, string fileName) {
	
	fstream fileR;
	
	vector<string> fileI (50);
	
	fileR.open ("textexample.txt");
	
	for (int i = 0; i <= size; i++) {
		
		fileR >> fileI [i];
		cout << fileI [i];
		
	}
	
	fileR.close();
	
	return fileI; 
}

/*string write(string s1, string s2, string s3) {
	
	fstream fileW;
	
	vector<string> fileO = {s1, s2, s3};
	
	fileW.open ("/Saves/textexample.txt");
	
	for (int i = 0; i <= fileO.size() - 1; i++) {
		
		fileW << fileO [i] << endl;
		
	}
	
	//fileW << endl;
	fileW.close();
	
	//return fileI; 
}*/