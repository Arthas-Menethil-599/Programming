#include<iostream>
#include "Admin.h"
#include "User.h"
#include "Warehouse.h"
#include "Producers.h"
#include "Sales.h"

#include<mysql.h>
#include <mysqld_error.h>

using namespace std;


int main()
{
	int userType;
	int adminMove;
	int userMove;
	cout<<"\n\n\n\t\t\t ************************************";
	cout<<    "\n\t\t\t **WELCOME VENDOR MANAGEMENT SYSTEM**";
	cout<<    "\n\t\t\t ************************************";
	cout<<"\n\t\t\t\t  Devoleped by \n\t\t\tOzlem Oztok-Muhammet Dogukan Bedir-David Baimurzayev"<<endl<<endl<<"\n\t";
	
	
	
	
	
	system("pause");
	mainMenu:
	system("Cls");
	
	
	cout<<("\n\t1-Admin")<<endl<<("\t2-User")<<endl;
	cout<<endl<<("\tPlease choose your login type: ");
	cin>>userType;
	
	if(userType==1)
	{
		Admin myAdmin;
		myAdmin.loginScreen();
		myAdmin.adminSquery();
		adminMenu:
		system("Cls");
		cout<<("\n\t1-Add product")<<endl;
		cout<<("\n\t2-Change product")<<endl;
		cout<<("\n\t3-Delete product")<<endl;
		cout<<("\n\t4-Show warehouse")<<endl;
		cout<<("\n\t5-Producers information")<<endl;
		cout<<("\n\t6-Prediction");
		cout<<endl<<("\n\tPlease select the action you want to do: ");
		cin>>adminMove;
		
		Warehouse myWarehouse;
		if(adminMove == 1)
		{
			myWarehouse.addProduct();
			goto adminMenu;
		}
		else if(adminMove == 2)
		{
			myWarehouse.showProduct();
			myWarehouse.changeProduct();
			goto adminMenu;
		}
		else if(adminMove == 3)
		{
			myWarehouse.showProduct();
			myWarehouse.deleteProduct();
			goto adminMenu;
		}
		else if(adminMove == 4)
		{
			myWarehouse.showProduct();
			cout<<endl<<endl<<"\t";
			system("pause");
			goto adminMenu;
		}
		else if(adminMove == 5)
		{
			
		}
		else
		{
			cout<<endl<<("\tYou entered invalid number")<<endl<<("\n\t");
			system("pause");
			goto adminMenu;
		}
		
	}
	else if(userType==2)
	{
		User myUser;
		myUser.loginScreen();
		myUser.userSquery();
		userMenu:
		system("Cls");
		cout<<("\n\t1-Buy product")<<endl;
		cout<<("\n\t2-Sales History")<<endl;
		cout<<endl<<("\n\tPlease select the action you want to do: ");
		cin>>userMove;
		
		if(userMove==1)
		{
			
		}
		else
		{
			cout<<endl<<("\tYou entered invalid number")<<endl<<("\n\t");
			system("pause");
			goto userMenu;
		}
	}
	else 
	{
		cout<<("\tYou entered invalid number")<<endl<<("\n\t");
		system("pause");
		goto mainMenu;
		
	}
	

	
	
	
	
	
	
	
	
	
	
	return 0;
}
