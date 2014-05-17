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

	winLayout     = new QVBoxLayout;
	genLayout     = new QHBoxLayout;
	txtWordsInput = new QPlainTextEdit;
	btnGen        = new QPushButton("&Generate Buttons");
	btnAbout      = new QPushButton("&About");

	// setup the grid layout and make it fill the window
	centerWidget  = new QWidget(this);
	centerWidget->setLayout(winLayout);
	this->setCentralWidget(centerWidget);

	// add all widgets to the layout
	// redo the following 4 lines to customize the layout
	winLayout->addWidget(txtWordsInput, 0);
	winLayout->addLayout(genLayout,     1);
	winLayout->addWidget(btnAbout,      2);
/*
	window = new QWidget;

    layout = new QGridLayout;
    yesButton = new QPushButton("Yes");
    noButton = new QPushButton("No");

    layout->addWidget(yesButton);

    window->setLayout(layout);
    window->show();*/
}

Window::~Window()
{
	
}