#include <iostream>
#include "employee.h"
#include <fstream>
#include <windows.h>
/*
int main() {
    std::cout << "Employee Management" << std::endl;
    Employee myEmployee;
    myEmployee.setSalary(1000);
    myEmployee.increaseSalary(5.77f);
    std::cout << myEmployee.getSalary() << std::endl;

    return 0;
}
*/

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nShowCmd) {
    const wchar_t* mytext = L"Test de texte avec des accents et autres charactères:\n²&é-èçà$^£¤*ù%µ!§:/;.,?#~|`{'__^^}";
    const wchar_t* title = L"Test de texte UNICODE";
    MessageBoxW(NULL,  mytext, title, MB_ICONASTERISK);
    return 0;
}