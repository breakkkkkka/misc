
#include <Windows.h>
#include <stdio.h>
bool CheckProg()
{

	HANDLE  g_Handle = CreateMutex(NULL, FALSE, L"hello");
	BOOL Reset = GetLastError();

	if (g_Handle)
	{
		if (Reset == ERROR_ALREADY_EXISTS)
		{

			return true;
		}

	}
	
	
		return false;
	

}
int main()
{


	if(CheckProg())
	{
		return 0;
	}
	

	getchar();


}