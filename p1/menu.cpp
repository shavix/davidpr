#include "menu.h"

Menu::Menu(vector<string> *universities, QWidget *parent) : QWidget(parent)
{
	_universities=universities;
	mainMenu();
}


Menu::~Menu()
{

}


void Menu::mainMenu()
{
	//new window
	window = new QWidget;
	
	
	//window layout
	hLayout = new QHBoxLayout;
	hLayout1 = new QHBoxLayout;
	hLayout2 = new QHBoxLayout;
	hLayout3 = new QHBoxLayout;
	vLayout = new QVBoxLayout;
	
	
	//buttons
	signIn = new QPushButton("Go");
	signUp = new QPushButton("Sign up");
	
	
	//text
	labelText = new QLabel("Enter username:");
	labelText1 = new QLabel("Enter password:");
	labelText2 = new QLabel("Don't have an account?");
	labelText3 = new QLabel("Welcome to TutorCompass!\nPlease sign in below");
	
	
	//line edits
	lineEdit = new QLineEdit;
	lineEdit1 = new QLineEdit;
		
	
	//initial layout setup
	hLayout3->addWidget(labelText3);
	
	hLayout->addWidget(labelText);
	hLayout->addWidget(lineEdit);

	hLayout1->addWidget(labelText1);
	hLayout1->addWidget(lineEdit1);
	hLayout1->addWidget(signIn);
	
	hLayout2->addWidget(labelText2);
	hLayout2->addWidget(signUp);
	
	
	//layout setup
	vLayout->addLayout(hLayout3);
	vLayout->addLayout(hLayout);
	vLayout->addLayout(hLayout1);
	vLayout->addLayout(hLayout2);
	
	
	//window setup
	window->setLayout(vLayout);
	
	window->setStyleSheet("WebPageWindow { border: 7px solid black; background color: white;}");
	window->setWindowTitle("TutorCompass");
	
	loginObj = new Login(_universities);
	QObject::connect(signUp, SIGNAL(clicked()), this, SLOT(newAccountPage()));
	QObject::connect(signIn, SIGNAL(clicked()), loginObj, SLOT(loginPage()));
	
	window->show();
}


void Menu::newAccountPage()
{
	//new window
	window = new QWidget;
	
	
	//window layout
	hLayout = new QHBoxLayout;
	hLayout1 = new QHBoxLayout;
	hLayout2 = new QHBoxLayout;
	hLayout3 = new QHBoxLayout;
	vLayout = new QVBoxLayout;
	
	
	//buttons
	signUp = new QPushButton("Sign up");
	
	
	//text
	labelText = new QLabel("Create an account below");
	labelText1 = new QLabel("Enter desired username:");
	labelText2 = new QLabel("Enter desired password:");	
	labelText3 = new QLabel("Re-enter desired password:");
	
		
	//line edits
	lineEdit = new QLineEdit;
	lineEdit1 = new QLineEdit;
	lineEdit2 = new QLineEdit;
		
	
	//initial layout setup
	hLayout->addWidget(labelText);
	
	hLayout1->addWidget(labelText1);
	hLayout1->addWidget(lineEdit);

	hLayout2->addWidget(labelText2);
	hLayout2->addWidget(lineEdit1);
	
	hLayout3->addWidget(labelText3);
	hLayout3->addWidget(lineEdit2);
	hLayout3->addWidget(signUp);
	
	
	//layout setup
	vLayout->addLayout(hLayout);
	vLayout->addLayout(hLayout1);
	vLayout->addLayout(hLayout2);
	vLayout->addLayout(hLayout3);
	
	
	//window setup
	window->setLayout(vLayout);
	
	window->setStyleSheet("WebPageWindow { border: 7px solid black; background color: white;}");
	window->setWindowTitle("TutorCompass");
	
	QObject::connect(signUp, SIGNAL(clicked()), this, SLOT(mainMenu()));
	
	window->show();
}



