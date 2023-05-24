#ifndef MODULESPYLYPENKO_H_INCLUDED
#define MODULESPYLYPENKO_H_INCLUDED

using namespace std;

float s_calculation(float x, float y,float z);

void abilityToEdit(string outputFileName, string inputFileName);
bool fillInputTxtFile(string inputFileName, string ukrWord);
bool authorInfo(string outputFileName);
int vowelsCountInFile(string outputFileName, string ukrWord);
bool findWordInPoem(string outputFileName, string ukrWord);
int consonantsCountInFile(string inputFileName, string ukrWord);
bool timestampInFile(string inputFileName);
double sCalculationResInFile(string outputFileName, float x, float y, float z);
bool decimalToBinary(string outputFileName, unsigned int number);

#endif // MODULESPYLYPENKO_H_INCLUDED
