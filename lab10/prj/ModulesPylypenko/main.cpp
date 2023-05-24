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
		cout << "Неможливо відкрити файл для редагування\a" << endl;
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
               << " Виконавець:         Пилипенко Вікторія Сергіївна" << endl
               << " Рік розробки:       2023" << endl
               << " Місто/Країна:       Кропивницький/Україна" << endl
               << " ВНЗ:                Центральний Національний Технічний Університет" << endl
               << "====================================================================" << endl << endl;
    outputFile.close();
    return true;
}

int vowelsCountInFile(string outputFileName, string ukrWord); {
    std::ifstream inputFile(outputFileName);

    if (!inputFile) {
        std::cerr << "Не вдалося відкрити файл." << std::endl;
        return 1;
    }

    inputFile.seekg(0, std::ios::end);
    std::streampos fileSize = inputFile.tellg();
    inputFile.close();

    std::cout << "Кількість символів у файлі: " << fileSize << std::endl;

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
        if (word == "програма") {
            programCount++;
        } else if (word == "студент") {
            studentCount++;
        } else if (word == "модуль") {
            moduleCount++;
        } else if (word == "програміст") {
            itCount++;
    }

    outputFileName.close();

    std::cout << "Кількість слова 'програма': " << programCount << std::endl;
    std::cout << "Кількість слова 'студент': " << studentCount << std::endl;
    std::cout << "Кількість слова 'модуль': " << moduleCount << std::endl;
    std::cout << "Кількість слова 'програміст': " << itCount << std::endl;

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

    std::ofstream outputFile("output.txt");  // Замените "output.txt" на путь к вашему выходному файлу

    if (!outputFile) {
        std::cerr << "Не вдалося відкрити фацл." << std::endl;
        return 1;
    }

    outputFile << "Кількість цифр: " << digitCount << std::endl;

    outputFile.close();

    return 0;
}
}

bool timestampInFile(string inputFileName)
{
    ofstream inputFile(inputFileName, ios::app);
    time_t rawtime;
    time(&rawtime);
    inputFile << "Дата та час дозапису інформаціїї: " << ctime(&rawtime) << endl << endl;
    inputFile.close();
    return true;
}

double sCalculationResInFile(string outputFileName, float x, float y, float z)
{
    ofstream outputFile("prjOutputFile.txt", ios::app);
    outputFile << "Результат виконання s_calculation: " << s_calculation(x, y, z) << endl << endl;
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
    outputFile << "Двійкове представлення числа " << number << " : ";
    for(i = i - 1; i >= 0; i--) {
        outputFile << binaryCels[i];
    }
    outputFile << endl << endl;
    outputFile.close();
    return true;
}
