#ifndef USER_H
#define USER_H

#include <string>
#include "Admin.h"
using namespace std;

class User : public Admin
{
	public:
		User();
		~User();
		void setUserName(string _userName);
		void setPassword(int _passworrd);
		string getUserName();
		int getPassword();
		int userSquery();
		
	private:
		string userName;
		int password;
	
};

#endif
