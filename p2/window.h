#ifndef WINDOW_H
#define WINDOW_H
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QtGui>
#include <QTCore>
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QPlainTextEdit>
#include <QString>
#include <QtGui>
#include <QHBoxLayout>
#include <QString>

class Window: public QWidget
{
public:
	Window(QWidget *parent=NULL);
	~Window();


private:
	QWidget* window;
    QPushButton *yesButton;
    QPushButton *noButton;
    QGridLayout *layout;

};

#endif