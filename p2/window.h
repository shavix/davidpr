#ifndef WINDOW_H
#define WINDOW_H
#include <QApplication>
#include <QWidget>
#include <QTextEdit>
#include <QCloseEvent>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>

class Window: public QMainWindow
{
	Q_OBJECT
public:
	Window(QWidget *parent=0);
	~Window();
	
	
public slots:
	void loginPage();
	void newAccountPage();
	void mainPage();

private:
	QWidget* window;
    QPushButton *yesButton;
    QPushButton *noButton;
    QGridLayout *layout;
    
  	QLineEdit *enterUsername;

};

#endif
