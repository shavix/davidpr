#ifndef WINDOW_H
#define WINDOW_H
#include <QApplication>
#include <QWidget>
#include <QTextEdit>
#include <QCloseEvent>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QVBoxLayout>
#include <QPushButton>
#include <QGridLayout>

class Window: public QMainWindow
{
	Q_OBJECT
public:
	Window(QWidget *parent=0);
	~Window();

private:
	QPushButton    * btnGen;
	QPushButton    * btnAbout;
	QPlainTextEdit * txtWordsInput;
	QVBoxLayout    * winLayout;
	QHBoxLayout    * genLayout;
	QWidget        * centerWidget;
	/*QWidget* window;
    QPushButton *yesButton;
    QPushButton *noButton;
    QGridLayout *layout;*/

};

#endif