#include "data.h"


bool could_Logged_in(string user_id, string pass, pNode pUser)
{
	pNode pCur = pUser;
	while (pCur->pNext != nullptr)
	{
		if (user_id == pCur->info->studentId)
			if (pass == pCur->info->password) return true;
		pCur = pCur->pNext;
	}
	return false;
}

void menu_loggedin();

