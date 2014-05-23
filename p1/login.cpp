#include "login.h"

using namespace std;

Login::Login(vector<string> *universities, QWidget *parent) : QWidget(parent)
{
	_universities = universities;
}

Login::~Login()
{

}

void Login::loginPage()
{
	//new window
	window = new QWidget;
	
	
	//layout
	vLayout = new QVBoxLayout;
	
	
	//buttons
	studentButton = new QPushButton("Student");
	tutorButton = new QPushButton("Tutor");
	logoutButton = new QPushButton("Logout");
	
	
	//label text
	labelText = new QLabel("Welcome [username]!\nWould you like to sign in as a student or tutor?");
	
	
	//layout setup
	vLayout->addWidget(labelText);
	vLayout->addWidget(studentButton);
	vLayout->addWidget(tutorButton);
	vLayout->addWidget(logoutButton);
	
	
	//window setup
	window->setLayout(vLayout);
	window->setWindowTitle("TutorCompass");
	
	studentMenuObj = new StudentMenu(_universities);
	tutorMenuObj = new TutorMenu(_universities);
	QObject::connect(studentButton, SIGNAL(clicked()), studentMenuObj, SLOT(studentMenuPage()));
	QObject::connect(tutorButton, SIGNAL(clicked()), tutorMenuObj, SLOT(tutorMenuPage()));
	
	window->show();
}
