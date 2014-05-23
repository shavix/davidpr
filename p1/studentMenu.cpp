#include "studentMenu.h"

using namespace std;

StudentMenu::StudentMenu(vector<string> *universities, QWidget *parent) : QWidget(parent)
{
	_universities=universities;
}


StudentMenu::~StudentMenu()
{
}

void StudentMenu::studentMenuPage()
{	
	//new window
	window = new QWidget;
	
	
	//buttons
	favorites = new QPushButton("Favorite Tutors");
	campus = new QPushButton("Select Campus");
	settings = new QPushButton("Settings");
	goBack = new QPushButton("Go Back");
	
	
	//labels
	labelText = new QLabel("Student [username]'s TutorCompass");
	
	
	//layout
	vLayout = new QVBoxLayout;
	
	
	//layout setup
	vLayout->addWidget(labelText);
	vLayout->addWidget(favorites);
	vLayout->addWidget(campus);
	vLayout->addWidget(settings);
	vLayout->addWidget(goBack);

	
	//window setup
	window->setStyleSheet("WebPageWindow { border: 7px solid black; background color: white;}");
	window->setWindowTitle("TutorCompass");
	
	window->setLayout(vLayout);
	
	QObject::connect(favorites, SIGNAL(clicked()), this, SLOT(favoritesPage()));
	QObject::connect(campus, SIGNAL(clicked()), this, SLOT(campusPage()));	
	QObject::connect(settings, SIGNAL(clicked()), this, SLOT(settingsPage()));
		
	window->show();
}


void StudentMenu::favoritesPage()
{
	//new window
	window = new QWidget;
	
	
	//labels
	labelText = new QLabel("[username]'s TutorCompass");
	labelText2 = new QLabel("Select a tutor from the list below");
	
	
	//layout
	vLayout = new QVBoxLayout;
	
	
	//list box
	list = new QListWidget;
	
	
	//layout setup
	vLayout->addWidget(labelText);
	vLayout->addWidget(labelText2);
	vLayout->addWidget(list);
	
	
	//window setup
	window->setWindowTitle("TutorCompass");
	window->setLayout(vLayout);
	
	window->show();
}

void StudentMenu::campusPage()
{	
	//new window
	window = new QWidget;
	
	
	//labels
	labelText = new QLabel("[username]'s TutorCompass");
	labelText2 = new QLabel("Select a campus from the list below");
	
	
	//layout
	vLayout = new QVBoxLayout;
	
	
	//list box
	list = new QListWidget;
	

	//list items
	for(unsigned int i=0;i<_universities->size();i++)
	{
		QString qstr = QString::fromStdString(_universities->at(i));
		listItem = new QListWidgetItem(qstr);
		list->addItem(listItem);
	}
	
	
	//layout setup
	vLayout->addWidget(labelText);
	vLayout->addWidget(labelText2);
	vLayout->addWidget(list);
	
	
	//window setup
	window->setWindowTitle("TutorCompass");
	window->setLayout(vLayout);

	window->show();
}


void StudentMenu::settingsPage()
{
	//new window
	window = new QWidget;
	
	
	//labels
	labelText = new QLabel("[username]'s TutorCompass");
	labelText2 = new QLabel("Select an option from the list below");
	
	
	//layout
	vLayout = new QVBoxLayout;
	
	
	//list box
	list = new QListWidget;
	
	
	//configure list
	list->addItem("Profile");
	list->addItem("Preferences");
	
	
	//layout setup
	vLayout->addWidget(labelText);
	vLayout->addWidget(labelText2);
	vLayout->addWidget(list);
	
	
	//window setup
	window->setWindowTitle("TutorCompass");
	window->setLayout(vLayout);
	
	window->show();
}


