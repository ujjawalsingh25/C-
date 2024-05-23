#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
using namespace std;

class Employee {
public:
    char name[25];
    int emp_code;
    float sal;
    void get();
    void disp();
    void getModify();
};

void Employee::get() {
    cout << "\nEnter Name:";
    cin >> name;
    cout << "\nEnter Code:";
    cin >> emp_code;
    cout << "\nEnter Salary:";
    cin >> sal;
}

void Employee::disp() {
    cout << "\nName is: " << name;
    cout << "\nCode is: " << emp_code;
    cout << "\nSalary is: " << sal;
}

void Employee::getModify() {
    cout << "\nEnter Name:";
    cin >> name;
    cout << "\nEnter Code:";
    cin >> emp_code;
    cout << "\nEnter Salary:";
    cin >> sal;
}

Employee e1;
fstream fp;

void add();
void disp();
void search();
void modify();
void del();

int main() {
    int ch;
    while (true) {
        system("cls");
        cout << "\nPress 1 for Adding Record!";
        cout << "\nPress 2 for Displaying All Records!";
        cout << "\nPress 3 for Searching Specific Record!";
        cout << "\nPress 4 for Modifying Record!";
        cout << "\nPress 5 for Deleting Record!";
        cout << "\nPress 6 for Exit!";
        cout << "\nEnter Your Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                add();
                break;
            case 2:
                disp();
                break;
            case 3:
                search();
                break;
            case 4:
                modify();
                break;
            case 5:
                del();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "\nWrong Choice! Please Enter Correct Choice!";
        }
    }
    return 0;
}

void add() {
    fp.open("emp.txt", ios::app);
    e1.get();
    fp.write((char*)&e1, sizeof(e1));
    cout << "\nWritten";
    fp.close();
    getch();
}

void disp() {
    fp.open("emp.txt", ios::in);
    while (fp.read((char*)&e1, sizeof(e1))) {
        e1.disp();
    }
    getch();
    fp.close();
}

void search() {
    int scode = 0;
    int f = 0;
    fp.open("emp.txt", ios::in);
    cout << "Enter searching code: ";
    cin >> scode;
    while (fp.read((char*)&e1, sizeof(e1))) {
        if (e1.emp_code == scode) {
            e1.disp();
            f = 1;
        }
    }
    if (f == 0)
        cout << "Record not found";
    getch();
    fp.close();
}

void modify() {
    int mcode, f = 0, c;
    cout << "Enter code to modify: ";
    cin >> mcode;
    fstream fp;
    fp.open("emp.txt", ios::in | ios::out);
    while (fp.read((char*)&e1, sizeof(e1))) {
        if (e1.emp_code == mcode) {
            c = fp.tellg();
            c = c - sizeof(e1);
            fp.seekp(c);
            e1.getModify();
            fp.write((char*)&e1, sizeof(e1));
            cout << "Modified";
            getch();
            fp.close();
        }
    }
}

void del() {
    fstream fp1;
    int dcode;
    cout << "Enter code to delete: ";
    cin >> dcode;
    fp.open("emp.txt", ios::in);
    fp1.open("temp.txt", ios::out);
    while (fp.read((char*)&e1, sizeof(e1))) {
        if (e1.emp_code != dcode) {
            fp1.write((char*)&e1, sizeof(e1));
        }
    }
    fp.close();
    fp1.close();
    remove("emp.txt");
    rename("temp.txt", "emp.txt");
    cout << "Deleted";
    getch();
}
