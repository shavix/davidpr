#include <QTextEdit>
#include <QMainWindow>
#include <QString>
#include <string>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QCloseEvent>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
#include <QVBoxLayout>
#include "window.h"

Window::Window(QWidget *parent) : QMainWindow(parent)
{
	//window
	window = new QWidget;

	//layout
    layout = new QGridLayout;
    
    //title
    QLabel *titleText = new QLabel("Welcome to Education Land!\nDo you already have an account?");
    //buttons
    yesButton = new QPushButton("Yes");
    noButton = new QPushButton("No");

	//layout setup
	layout->addWidget(titleText);
    layout->addWidget(yesButton);
    layout->addWidget(noButton);

	//window setup
    window->setLayout(layout);
    window->setWindowTitle("Education Land");
    window->showNormal();
}

Window::~Window()
{
	
}
