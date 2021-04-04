#include "data.h"

void main()
{
	string user_id;
	string pass;
	pNode pUser = new Node();
	pUser->info->studentId = "20127005";
	pUser->info->password = "19112002";
	pUser->pNext = nullptr;
	pUser->pPre = nullptr;
	cout << "Username: ";
	cin >> user_id;
	system("cls");
	cout << "Password: ";
	cin >> pass;
	system("cls");
	int detect;
	if (could_Logged_in(user_id, pass, pUser) == true) detect = 1;
	else  detect = 0;
	switch (detect)
	{
	case 1:
		menu_loggedin;
		break;
	case 0:
		cout << "Login Failed. Please check User ID and Password again";
	}
}