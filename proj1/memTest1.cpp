#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
    HWND hwnd = FindWindowA(NULL, "Calculator");
    if (hwnd == NULL)
    {
        cout << "Cannot find window" << endl;
        Sleep(3000);
        exit(-1);
    }
    else 
    {
        cout << "Found Window" << endl;
        DWORD procID;
        GetWindowThreadProcessId(hwnd, &procID);
        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);

        if (procID = 0)
        {
            cout << "Cannot find pocid" << endl;
            Sleep(3000);
            exit(-1);  
        } 
        else 
        {
            cout << &procID << endl;
        }
    }

    return 0;
}
