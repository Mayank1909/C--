#include <bits/stdc++.h >
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name, dept, line;
    int salary, num;
    cout << "Number of employee" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Employee Name:";
        cin >> name;
        cout << "Enter Employee department" << endl;
        cin >> dept;
        cout << "Enter the employee salary" << endl;
        cin >> salary;
        ofstream fout("edata.txt", ios::app);

        fout << name << "\t" << dept << "\t" << salary << "\t" << endl;
        fout.close();
        cout << endl;
    }
    ifstream fin("edata.txt");
    while (fin)
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();

    return 0;
}