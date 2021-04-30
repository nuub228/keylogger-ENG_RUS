#include <windows.h>
#include <Lmcons.h>
#include <iostream>

using namespace std;

int main() {

	char username[UNLEN + 1];
	DWORD username_len = UNLEN + 1;
	GetUserNameA(username, &username_len);
	cout << username;
}