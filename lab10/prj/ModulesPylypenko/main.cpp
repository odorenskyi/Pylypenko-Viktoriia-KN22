#include <cmath>
#include <iostream>
#include <fstream>
#include <cmath>
#include <bitset>
#include <sstream>
#include <cstring>
#include <ctime>

using namespace std;

const float pi = 3.14159;

float s_calculation(float x, float y, float z){
    return pow((x + y + z), 2) - 2 * pi * sqrt((1/3) * z);
}

void abilityToEdit(string outputFileName, string inputFileName)
{
    ofstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
		cout << "��������� ������� ���� ��� �����������\a" << endl;
        inputFile.close();
        outputFile.close();
		exit(1);
	}
	inputFile.close();
	outputFile.close();
}

bool fillInputTxtFile(string inputFileName, string ukrWord)
{
    ofstream inputFile(inputFileName, ios::out);
	inputFile << ukrWord << endl << endl;
	inputFile.close();
	return true;
}

bool authorInfo(string outputFileName)
{
    ofstream outputFile(outputFileName, ios::out);
	outputFile << "====================================================================" << endl
               << " ����������:         ��������� ³����� ���㳿���" << endl
               << " г� ��������:       2023" << endl
               << " ̳���/�����:       �������������/������" << endl
               << " ���:                ����������� ������������ �������� ����������" << endl
               << "====================================================================" << endl << endl;
    outputFile.close();
    return true;
}

int vowelsCountInFile(string outputFileName, string ukrWord); {
    std::ifstream inputFile(outputFileName);

    if (!inputFile) {
        std::cerr << "�� ������� ������� ����." << std::endl;
        return 1;
    }

    inputFile.seekg(0, std::ios::end);
    std::streampos fileSize = inputFile.tellg();
    inputFile.close();

    std::cout << "ʳ������ ������� � ����: " << fileSize << std::endl;

    return 0;
}

bool findWordInPoem(string outputFileName, string ukrWord)
{

std::string word;
    int programCount = 0;
    int studentCount = 0;
    int moduleCount = 0;
    int itCount = 0;

    while (outputFileName>> word) {
        if (word == "��������") {
            programCount++;
        } else if (word == "�������") {
            studentCount++;
        } else if (word == "������") {
            moduleCount++;
        } else if (word == "���������") {
            itCount++;
    }

    outputFileName.close();

    std::cout << "ʳ������ ����� '��������': " << programCount << std::endl;
    std::cout << "ʳ������ ����� '�������': " << studentCount << std::endl;
    std::cout << "ʳ������ ����� '������': " << moduleCount << std::endl;
    std::cout << "ʳ������ ����� '���������': " << itCount << std::endl;

    return 0;
}
}

int consonantsCountInFile(string inputFileName, string ukrWord)
{
    std::string line;
    int digitCount = 0;

    while (std::getline(inputFile, line)) {
        for (char c : line) {
            if (std::isdigit(c)) {
                digitCount++;
            }
        }
    }

    inputFile.close();

    std::ofstream outputFile("output.txt");  // �������� "output.txt" �� ���� � ������ ��������� �����

    if (!outputFile) {
        std::cerr << "�� ������� ������� ����." << std::endl;
        return 1;
    }

    outputFile << "ʳ������ ����: " << digitCount << std::endl;

    outputFile.close();

    return 0;
}
}

bool timestampInFile(string inputFileName)
{
    ofstream inputFile(inputFileName, ios::app);
    time_t rawtime;
    time(&rawtime);
    inputFile << "���� �� ��� �������� �����������: " << ctime(&rawtime) << endl << endl;
    inputFile.close();
    return true;
}

double sCalculationResInFile(string outputFileName, float x, float y, float z)
{
    ofstream outputFile("prjOutputFile.txt", ios::app);
    outputFile << "��������� ��������� s_calculation: " << s_calculation(x, y, z) << endl << endl;
    outputFile.close();
    return s_calculation(x, y, z);
}

bool decimalToBinary(string outputFileName, unsigned int number)
{
    if (number <= 0) {
        return false;
    }
    ofstream outputFile(outputFileName, ios::app);
    int binaryCels[32];
    int i;
    unsigned int convertedNum = number;

    for(i = 0; convertedNum > 0; i++) {
        binaryCels[i] = convertedNum % 2;
        convertedNum = convertedNum / 2;
    }
    outputFile << "������� ������������� ����� " << number << " : ";
    for(i = i - 1; i >= 0; i--) {
        outputFile << binaryCels[i];
    }
    outputFile << endl << endl;
    outputFile.close();
    return true;
}
