#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include "login.h"


class Menu: public QWidget
{
	Q_OBJECT
	
public:
	Menu(vector<string> *universities, QWidget *parent=0);
	~Menu();
	
public slots:
	void mainMenu();
	void newAccountPage();

private:
	Login* loginObj;
	
	vector<string> *_universities;

	QWidget* window;
	
	QPushButton* signIn;
	QPushButton* signUp;
	
	QHBoxLayout* hLayout;
	QHBoxLayout* hLayout1;
	QHBoxLayout* hLayout2;
	QHBoxLayout* hLayout3;
	QVBoxLayout* vLayout;
	
	QLabel* labelText;
	QLabel* labelText1;
	QLabel* labelText2;
	QLabel* labelText3;
	
	QLineEdit* lineEdit;
	QLineEdit* lineEdit1;
	QLineEdit* lineEdit2;
	
};

#endif
