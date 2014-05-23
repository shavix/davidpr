#ifndef TUTORMENU_H
#define TUTORMENU_H
#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QListWidgetItem>
#include <QString>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class TutorMenu: public QWidget
{
	Q_OBJECT
public:
	TutorMenu(vector<string> *universities, QWidget *parent=0);
	~TutorMenu();

public slots:
	void tutorMenuPage();

private:
	vector<string> *_universities;
	
	QWidget *window;
	
	QLabel *labelText;
	
	QVBoxLayout *vLayout;
};

#endif
