#include <iostream>
#include <QApplication>
#include "interface.h"
#include "window.h"

using namespace std;

int main(int argc, char* argv[])
{
	if(argc<1)
	{
		cout<<"Not enough arguments"<<endl;
	}

	QApplication app(argc, argv);

	Interface interface;

	interface.signIn();

	interface.menu();

	return app.exec();
}