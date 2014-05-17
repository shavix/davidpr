#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
public:
	Interface();

	~Interface();

	//return username
	std::string signIn();

	void menu();

	void play();

	void highscores();

private:
	std::string username;
	

};

#endif