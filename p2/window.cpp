#include <QTextEdit>
#include <QMainWindow>
#include <QString>
#include <string>
#include <QScrollArea>
#include <QCloseEvent>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
#include "window.h"

using namespace std;

Window::Window(QWidget *parent) : QMainWindow(parent)
{
	//window
	window = new QWidget;
	//window->setMinimumWidth(200);
	//window->setMinimumHeight(200);

	//layout
    layout = new QGridLayout;
    
    //title
    QLabel *titleText = new QLabel("Welcome to Chubbie Games!\nDo you already have an account?");
    //buttons
    yesButton = new QPushButton("Yes");
    noButton = new QPushButton("No");

	//layout setup
	layout->addWidget(titleText);
    layout->addWidget(yesButton);
    layout->addWidget(noButton);

	//window setup
    window->setLayout(layout);
    window->setWindowTitle("Chubbie Games");
    
    //connections
    QObject::connect(yesButton,SIGNAL(clicked()),this,SLOT(loginPage()));
    QObject::connect(noButton,SIGNAL(clicked()),this,SLOT(newAccountPage()));
    
    //show window
    window->show();
}

Window::~Window()
{
	
}

void Window::loginPage()
{
	//window
	window = new QWidget;
	//window->setMinimumWidth(200);
	//window->setMinimumHeight(200);
	
	//main layout
	QVBoxLayout *loginLayout = new QVBoxLayout;
	QLabel *titleText=new QLabel("Login Page");
	
	//enter username
	QHBoxLayout *hLayout = new QHBoxLayout;
	enterUsername = new QLineEdit;
	QLabel *usernameTitle = new QLabel("Enter username:");
	
	hLayout->addWidget(usernameTitle);
	hLayout->addWidget(enterUsername);
	
	//enter password
	QHBoxLayout *hLayout2 = new QHBoxLayout;
	QLineEdit *enterPassword = new QLineEdit();
	QLabel *passwordTitle = new QLabel("Enter password:");
	QPushButton *goButton = new QPushButton("Go");
	
	hLayout2->addWidget(passwordTitle);
	hLayout2->addWidget(enterPassword);
	hLayout2->addWidget(goButton);
	
	loginLayout->addWidget(titleText);
	loginLayout->addLayout(hLayout);
	loginLayout->addLayout(hLayout2);
	
	window->setLayout(loginLayout);
	window->setWindowTitle("Chubbie Games");
	
	//connections
	QObject::connect(goButton,SIGNAL(clicked()),this,SLOT(mainPage()));
	
	window->show();
}



void Window::mainPage()
{
	window = new QWidget;
	
	QHBoxLayout *hLayout = new QHBoxLayout;
	
	QString username = enterUsername->text();
	QLabel *usernameShow = new QLabel("Welcome ");
	QLabel *usernameShow2 = new QLabel(username);
	
	hLayout->addWidget(usernameShow);
	hLayout->addWidget(usernameShow2);
	
	
	window->setLayout(hLayout);
	
	window->show();

}




void Window::newAccountPage()
{
	//window
	window = new QWidget;
	//window->setMinimumWidth(200);
	//window->setMinimumHeight(200);
	
	//main layout
	QVBoxLayout *loginLayout = new QVBoxLayout;
	QLabel *titleText=new QLabel("New Account Page");
	
	//enter username
	QHBoxLayout *hLayout = new QHBoxLayout;
	QLineEdit *enterUsername = new QLineEdit();
	QLabel *usernameTitle = new QLabel("Enter desired username:");
	
	hLayout->addWidget(usernameTitle);
	hLayout->addWidget(enterUsername);
	
	//enter password
	QHBoxLayout *hLayout2 = new QHBoxLayout;
	QLineEdit *enterPassword = new QLineEdit();
	QLabel *passwordTitle = new QLabel("Enter password:");
	
	hLayout2->addWidget(passwordTitle);
	hLayout2->addWidget(enterPassword);
	
	//enter password confirmation
	QHBoxLayout *hLayout3 = new QHBoxLayout;
	QLineEdit *reEnterPassword = new QLineEdit();
	QLabel *confirmTitle = new QLabel("Re-enter password:");
	QPushButton *goButton = new QPushButton("Go");
	
	hLayout3->addWidget(confirmTitle);
	hLayout3->addWidget(reEnterPassword);
	hLayout3->addWidget(goButton);
	
	loginLayout->addWidget(titleText);
	loginLayout->addLayout(hLayout);
	loginLayout->addLayout(hLayout2);
	loginLayout->addLayout(hLayout3);
	
	window->setLayout(loginLayout);
	window->setWindowTitle("Chubbie Games");
	
	//connections
	QObject::connect(goButton,SIGNAL(clicked()),this,SLOT(mainPage()));
	
	window->show();
}





