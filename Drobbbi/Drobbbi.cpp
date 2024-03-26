#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include<Windows.h>
#include "Drobb.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "1251");
    int a, b, a1, b1;
    TDrob drb;
    TDrob DRB1;
    TDrob DRB2;
    TDrob DRB4;

    printf(" Класс дроби '+' '-' '/' '*' \n");
    printf(" Введите занчение дробей где [1] - Числитель [2] - Знаменатель \n");
    printf(" Первая дробь\n");
    printf(" [1] -> ");
    cin >> a;
    printf(" [2] -> ");
    cin >> b;
    try
    {
        DRB1.setNum(a);
        DRB1.setDenum(b);
    }
    catch (const string error_message)
    {
        cout << error_message;
    }
    DRB1.setNum(a);
    DRB1.setDenum(b);


    printf(" Вторая дробь\n");
    printf(" [1] -> ");
    cin >> a1;
    printf(" [2] -> ");
    cin >> b1;
    try
    {
        DRB2.setNum(a1);
        DRB2.setDenum(b1);
    }
    catch (const string error_message)
    {

        cout << error_message;
    }
    

    DRB1.print();
    DRB2.print();


    cout << "\n\n-------------------------------" << endl;
    cout << "\nОператор[ + ]" << endl;
    drb = DRB1+DRB2;
    drb.print();

    cout << "\n\n-------------------------------" << endl;
    cout << "\nОператор[ * ]" << endl;
    drb = DRB1.operator*(DRB2);
    drb.print();

    cout << "\n\n-------------------------------" << endl;
    cout << "\nОператор[ / ]" << endl;
    drb = DRB1 / DRB2;
    drb.print();

    cout << "\n\n-------------------------------" << endl;
    cout << "\nОператор[ - ]" << endl;
    drb = DRB1 - DRB2;
    drb.print();

    cout << "\n\n-------------------------------" << endl;
    cout << "Копирование класса с увиличением дроби -> " << endl;
    TDrob DRB3{ DRB1 };
    DRB3.print();

    cout << "\n\n-------------------------------" << endl;
    cout << "Арифметическое выражение с дробью -> " << endl;
    //drb = (DRB3 + DRB1 * DRB2)*(1 / 3);
    cout << " (C + A * B) / 3 = " << "(" << DRB3 << " + " << DRB1 << " * " << DRB2 << ") / 3 =" << drb << endl;
    cout << "Преобразование дроби в десятичную -> " << endl;
    drb.print_operator();


    cout << "-------------------------------" << endl;
    drb = DRB1.operator+(DRB2);
    drb.print_operator();

    cout << "-------------------------------" << endl;
    cin >> DRB4;
    
    cout << DRB4.getNum() <<"/" << DRB4.getDenum();
    double buf = DRB4 + 25;
    cout << "\n" << buf;
    double z{ DRB4 };

    cout << "\n" << z;
    system("pause");
    return 0;
}
