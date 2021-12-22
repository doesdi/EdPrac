#include "DLL.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

void writeToFile2(const vector<string>& vector) 
{
	
    ifstream fs("../1.txt");//Открытие файла на чтение
    ofstream out;
    out.open("../2.csv");//Открытие файла на запись
    string buffer;
    getline(fs, buffer);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            out << buffer.substr(j + 10 * i, 1) << ";"; // Запись в csv файл
        }
        out << buffer.substr(9 + 10 * i, 1) << endl;
    }
    SetFileAttributesW(L"../2.csv", FILE_ATTRIBUTE_READONLY);// Файл только для чтения
    out.close();

}