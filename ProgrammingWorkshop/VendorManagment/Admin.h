#ifndef ADMIN_H
#define	ADMIN_H

#include <string>
using namespace std;

class Admin
{
	public:
		Admin();
		~Admin();
		void setAdminPassword(int _adminPassword);
		void setAdminUserName(string _adminUserName);
		void setEnteredPassword(int _enteredPassword);
		void setEnteredUserName(string _enteredUserName);
		int getAdminPassword();
		string getAdminUserName();
		string getEnteredUserName();
		int getEnteredPassword();
		void loginScreen();
		int adminSquery();
		
	protected:
		string enteredUserName;
		int enteredPassword;
	
	
	
	private:
		string adminUserName;
		int adminPassword;
			
};

#endif

