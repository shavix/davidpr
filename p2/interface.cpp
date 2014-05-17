#include <iostream>
#include "interface.h"

using namespace std;

Interface::Interface()
{
	cout<<"Welcome to Education Land!"<<endl;
	cout<<"Do you already have an account? (y/n)"<<endl;
}

Interface::~Interface()
{

}

string Interface::signIn()
{
	char ans;
	cin>>ans;
	if(ans=='y')
	{
		cout<<"Please enter your username:"<<endl;
		cin>>username;
	}
	else if(ans=='n')
	{
		cout<<"Please enter a username of your choice: "<<endl;
		cin>>username;
	}
	else
	{
		cout<<"Please enter a valid response (y/n)"<<endl;
		signIn();
	}

	cout<<endl<<"Welcome "<<username<<"! Please select an option from the menu below:"<<endl;

	return username;
}

void Interface::menu()
{
	char ans;
	cout<<"(1) Play a game"<<endl;
	cout<<"(2) View high scores"<<endl;
	cout<<"(3) Exit"<<endl;
	cin>>ans;

	if(ans=='1')
	{
		play();
	}
	else if(ans=='2')
	{
		highscores();
	}
	else if(ans=='3')
	{
		return;
	}
	else
	{
		cout<<"Please enter a valid input (1/2/3)"<<endl;
		menu();
	}
}


void Interface::play()
{

}


void Interface::highscores()
{

}



