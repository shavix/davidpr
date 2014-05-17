#include "window.h"

Window::Window(QWidget *parent)
:QWidget(parent)
{
	window = new QWidget;

    yesButton = new QPushButton("Yes");
    noButton = new QPushButton("No");
    layout = new QGridLayout;

    layout->addWidget(yesButton);
    layout->addWidget(noButton);

    window->show();
}

Window::~Window()
{

}