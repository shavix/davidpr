#include <iostream>
#include <QApplication>
#include "window.cpp"

using namespace std;

int main(int argc, char* argv[])
{
	
	QApplication app(argc, argv);

	Window window;

	window.show();

/*	Interface interface;

	interface.signIn();

	interface.menu();
*/
	return app.exec();
}