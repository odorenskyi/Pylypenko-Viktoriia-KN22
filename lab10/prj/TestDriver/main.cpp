#include <iostream>
#include <cstring>
#include <conio.h>
#include "windows.h"
#include <iomanip>

#include "ModulesPylypenko.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const string inputWordsArray[5] = { "��������", "�������", "������", "���������" };
    const int countWordsInFile[5] = {2, 2, 3, 2, 2};
    const int consonantsCount[5] = {3, 2, 4, 3, 3};

    const float sCalcX[5] = { 6.9, 3.65, 10, 0.2, 39 };
    const float sCalcY[5] = { 3, -5, 0.3, -0.3, 9 };
    const float sCalcZ[5] = { -0.8, 0.8, 0, 4, -4 };
    const unsigned int naturalDigit[5] = {0, 23, 42, 100, 699 };
    const double expectedResult[5] = { 6.01205, 5.546188, 7.877115, 4.087077, 14.469048 };

    for(int i = 0; i < 5; i++) {
        abilityToEdit("prjOutputFile.txt", "prjInputFile.txt");
        cout << boolalpha
             << "10.1(1) - ����� ��������� ���������� �� ��������� �����: \t\t\t\t\t"
             << authorInfo("prjOutputFile.txt")
             << endl;
        cout << boolalpha
             << "10.1(2) - ʳ������ ������� � ����: \t\t"
             << (countWordsInFile("prjOutputFile.txt", inputWordsArray[i]) == countWordsInFile[i])
             << endl;
        cout << boolalpha
             << "10.1(3) - ��������� ������ ����� �� ������� �� ��������� �����: \t\t\t\t"
             << findWordInPoem("prjOutputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "10.2(1) - ��������� ������� ����: \t"
             << (consonantsCountInFile("prjInputFile.txt", inputWordsArray[i]) == consonantsCount[i])
             << endl;
        cout << boolalpha
             << "10.2(2) - ������ ���� ����������� ����� �� �������� �����: \t\t\t\t\t"
             << timestampInFile("prjInputFile.txt")
             << endl;
        cout << boolalpha
             << "10.3(1) - ������� ���������� ������� s_calculation �� ��������� �����: \t\t\t\t"
             << (sCalculationResInFile("prjOutputFile.txt", sCalcX[i], sCalcY[i], sCalcZ[i]) <= expectedResult[i] + 0.005)
             << endl;
        cout << boolalpha
             << "10.3(1) - ��������� ������������� ����������� ����� � ������� �� ������� �� ��������� �����: \t"
             << decimalToBinary("prjOutputFile.txt", naturalDigit[i])
             << endl << endl << endl;

        _getch();
    }

    return 0;
}
