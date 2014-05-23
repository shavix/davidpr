#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <vector>
#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include "studentMenu.h"
#include "tutorMenu.h"

using namespace std;

class Login: public QWidget
{
	Q_OBJECT
public:
	Login(vector<string> *universities, QWidget *parent=0);
	~Login();

public slots:
	void loginPage();

private:
	StudentMenu *studentMenuObj;
	
	TutorMenu *tutorMenuObj;
	
	vector<string> *_universities;
	
	QWidget *window;
	
	QVBoxLayout *vLayout;
	
	QLabel *labelText;
	
	QPushButton *studentButton;
	QPushButton *tutorButton;
	QPushButton *logoutButton;
};


#endif
