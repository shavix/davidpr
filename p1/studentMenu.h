#ifndef STUDENTMENU_H
#define STUDENTMENU_H
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

class StudentMenu: public QWidget
{
	Q_OBJECT
public:
	StudentMenu(vector<string> *universities, QWidget *parent=0);
	~StudentMenu();

public slots:
	void studentMenuPage();
	void favoritesPage();
	void campusPage();
	void settingsPage();

private:
	vector<string> *_universities;

	QWidget* window;
	
	QPushButton* favorites;
	QPushButton* campus;
	QPushButton* settings;
	QPushButton* goBack;
	
	QHBoxLayout* hLayout;
	QVBoxLayout* vLayout;
	
	QLabel* labelText;
	QLabel* labelText2;
	
	QListWidget* list;
	
	QListWidgetItem* listItem;
	
};


#endif
