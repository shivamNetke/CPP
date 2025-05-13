#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void encryptfunction();
void decryptfunction();
void changedatafunction();

char str[100];
fstream fs;

int main()
{
    int firstChoice, choice;

    do 
    {
        fs.open("E:\\F-H-E-D.txt", ios::in);
        if (fs.is_open() == false)
        {
            cerr << "Error in opening F-H-E-D.txt file in read mode." << endl;
            return 0;
        }

        cout << "opened F-H-E-D.txt file in read mode." << endl;

        fs.getline(str, 100);
        cout << "\nCurrent file data: " << str << endl;
        fs.close();

        cout << "\nChoose an option:\n"
             << "1. Encrypt file\n"
             << "2. Decrypt file\n"
             << "3. Change file data\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        cin >> firstChoice;

        switch (firstChoice)
        {
            case 1:
                encryptfunction();
                break;
            case 2:
                decryptfunction();
                break;
            case 3:
                changedatafunction();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid input!" << endl;
        }

        cout<<"continue = 1\n close program = 2\nenter your choice : ";
        cin>>choice;
    }while(choice == 1);
}

void encryptfunction()
{
    fs.open("E:\\F-H-E-D.txt", ios::in);
    if (fs.is_open() == false)
    {
        cerr << "Error opening file for reading during encryption." << endl;
        return;
    }

    cout << "opened F-H-E-D.txt file in read mode." << endl;

    fs.getline(str, 100);
    fs.close();

    for (int iCounter = 0; str[iCounter] != '\0'; iCounter++)
    {
        str[iCounter] = str[iCounter] + 1;
    }

    fs.open("E:\\F-H-E-D.txt", ios::out);
    if (fs.is_open() == false)
    {
        cerr << "Error opening file for writing encrypted data." << endl;
        return;
    }

    cout << "opened F-H-E-D.txt file in writing mode." << endl;

    fs << str;
    fs.close();

    cout << "Encrypted and saved: " << str << endl;
}

void decryptfunction()
{
    fs.open("E:\\F-H-E-D.txt", ios::in);
    if (fs.is_open() == false)
    {
        cerr << "Error opening file for reading during decryption." << endl;
        return;
    }

    cout << "opened F-H-E-D.txt file in read mode." << endl;

    fs.getline(str, 100);
    fs.close();

    for (int iCounter = 0; str[iCounter] != '\0'; iCounter++)
    {
        str[iCounter] = str[iCounter] - 1;
    }

    fs.open("E:\\F-H-E-D.txt", ios::out);
    if (fs.is_open() == false)
    {
        cerr << "Error opening file for writing decrypted data." << endl;
        return;
    }

    cout << "opened F-H-E-D.txt file in write mode." << endl;

    fs << str;
    fs.close();

    cout << "Decrypted and saved: " << str << endl;
}

void changedatafunction()
{
    cout << "Enter new data to replace file content: ";
    cin.ignore(); // clear input buffer
    cin.getline(str, 100);

    fs.open("E:\\F-H-E-D.txt", ios::out);
    if (fs.is_open() == false)
    {
        cerr << "Error opening file to change data." << endl;
        return;
    }

    fs << str;
    fs.close();

    cout << "File data successfully changed to: " << str << endl;
}
