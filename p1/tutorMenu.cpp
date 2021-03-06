#include "tutorMenu.h"


TutorMenu::TutorMenu(vector<string> *universities, QWidget *parent): QWidget(parent)
{
	_universities=universities;
}

TutorMenu::~TutorMenu()
{

}

void TutorMenu::tutorMenuPage()
{
	//new window
	window = new QWidget;
	
	//labels
	labelText = new QLabel("Tutor [username]'s TutorCompass");
	
	
	//layout
	vLayout = new QVBoxLayout;


	//layout setup
	vLayout->addWidget(labelText);
	
	
	//window setup
	window->setStyleSheet("WebPageWindow { border: 7px solid black; background color: white;}");
	window->setWindowTitle("TutorCompass");
	
	window->setLayout(vLayout);
		
	window->show();
}
