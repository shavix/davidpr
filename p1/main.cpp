#include <iostream>
#include <fstream>
#include <vector>
#include <QApplication>
#include "menu.cpp"

using namespace std;

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	vector<string> universities;
	string line;
	ifstream ifile("universityList.txt");
	
	while(getline(ifile,line))
	{
		universities.push_back(line);
	}

	Menu menu(&universities);
	

	app.exec();

	return 0;
}
