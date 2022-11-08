#include <iostream>

#include "User.h"
using namespace std;

User::User()
{
	setUserName(0);
	setPassword(0);
}
User::~User()
{
	
}
void User::setUserName(string _userName)
{
	userName =_userName;
}
void User::setPassword(int _password)
{
	password=_password;
}
string User::getUserName()
{
	return userName;
}
int User::getPassword()
{
	return password;
}
int User::userSquery()
{
	//take user name and password from database
	
	if (enteredUserName==userName)
	{
		if(enteredPassword==password)
		{
			return 1;
		}
		else
		{
			cout<<"You entered wrong password";
			return 0;
		}
	}
	else
	{
		cout<<"You entered wrong user name and password";
		return 0;
	}
	
}
