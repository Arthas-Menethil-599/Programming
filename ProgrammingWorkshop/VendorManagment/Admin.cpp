#include <iostream>
#include "Admin.h"
using namespace std;


Admin::Admin()
{
	setAdminPassword(0);
	setAdminUserName("");
	setEnteredPassword(0);
	setEnteredUserName("");
}
Admin::~Admin()
{
	
}
void Admin::setAdminUserName(string _adminUserName)
{
	adminUserName=_adminUserName;
}
void Admin::setAdminPassword(int _adminPassword)
{
	adminPassword=_adminPassword;
}
void Admin::setEnteredUserName(string _enteredUserName)
{
	enteredUserName=_enteredUserName;
}
void Admin::setEnteredPassword(int _enteredPassword)
{
	enteredPassword=_enteredPassword;
}
string Admin::getAdminUserName()
{
	return adminUserName;
}
int Admin::getAdminPassword()
{
	return adminPassword;
}
string Admin::getEnteredUserName()
{
	return enteredUserName;
}
int Admin::getEnteredPassword()
{
	return enteredPassword;
}
void Admin::loginScreen()
{
	system("Cls");
	cout<<"\tPlease enter your user name: ";
	cin>>enteredUserName;
	cout<<endl<<"\tPlease enter your password: ";
	cin>>enteredPassword;
	
	
}
int Admin::adminSquery()
{
	//take user name and password from database
	
	if (enteredUserName==adminUserName)
	{
		if(enteredPassword==adminPassword)
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















