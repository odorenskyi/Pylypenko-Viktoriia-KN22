#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <Windows.h>

#include "../ModulesPylypenko.h"
#include "../ModulesKucher.h"
#include "../ModulesSkok.h"
#include "../struct_type_project_12.h"

using namespace std;

int main()
{
    vector <Benefits> note;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Benefits notes;  // ��������� ���� ��������� Benefits ��� ���������� ����� � �����

    ifstream file("dividnuk.txt");  // ³������� ����� "dividnuk.txt" ��� ����������
    if (file.is_open()) {  // ��������, �� �������� ����� ������� ������
        string line;  // ����� ��� ���������� ����� ��������� � �����
        while (std::getline(file, line)) {  // ����, ���� ����� ����� � ����� �� ������

            std::stringstream ss(line);  // ��������� ������ stringstream ��� ���������� �������� ����� �� ����� �������
            string item;  // ����� ��� ���������� ������� ������ �����
            std::getline(ss, item, ',');  // �������� ����� �� ��������� ',' �� ���������� � ���������� ����� ������� � ����� item
            notes.code_ben = std::stoi(item);  // ������������ ����� item � ��������� ���� � ���� ����� � ���������� � ���� code_ben ��������� notes

            std::getline(ss, notes.content_ben, ',');
            std::getline(ss, notes.document_ben, ',');
            std::getline(ss, notes.num_doc_ben, ',');
            std::getline(ss, notes.date_doc_ben, ',');
            std::getline(ss, notes.date_start_ben, ',');
            std::getline(ss, notes.date_end_ben, ',');
            std::getline(ss, notes.destination_sign_ben, ',');
            std::getline(ss, notes.coment_ben, ',');

            note.push_back(notes);// ��������� ��������� notes �� ������� note
        }
        file.close();
    } else {
        cout << "���� �� ��������.\n";
        return 1;
    }

    int choice;
    do {
        std::cout << "������ �����:\n";
        std::cout << "1. ����� �� ���� �����\n";
        std::cout << "2. ��������� ������ ��������\n";
        std::cout << "3. ������� ������ ������ � �������\n";
        std::cout << "4. ��������� ������ � ��������\n";
        std::cout << "5. ���������� ������ �� ����� ����� � ����\n";
        std::cin >> choice;


        switch (choice) {
            case 1:
                int code;
                cout << "������ ��� �����: ";
                cin >> code;
                poshuk_kod(note, code);
                break;
            case 2:
                cout <<"�������� 0(����� ������� � ����) �� 1(�� �����)";
                int button;
                cin>> button;
                if(button == 0){
                    cout <<"������ ��� � ���� ���� ������ �������� �������";
                    string filename;
                    cin >> filename;
                    filename = filename+".txt";
                    File(note,filename);
                }
                else if (button ==1){
                    Screen(note);
                }

                break;
            case 3:
                add_new_data(note, "dividnuk.txt");
                break;
            case 4:
                delete_data(note, "dividnuk.txt");
                break;
            case 5:
                end_file(note, "dividnuk.txt");
                break;
            default:
                cout << "����������� �����. ��������� �����.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
