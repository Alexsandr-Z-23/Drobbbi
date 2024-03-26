#include <iostream>
#include "Drobb.h"

using namespace std;

TDrob::TDrob(int ch, int zn)
{
    num = ch;
    if (zn == 0)
    {
        throw (string)"Знаменатель не должен равняться '0' "; 
       
    }
    this-> denum = zn;
  
    
    reduce();
}

int TDrob::getNum() const
{
    return num;
}
int TDrob::getDenum() const
{
    return denum;
}

void TDrob::setNum(int ch)
{
    num = ch;
}
void TDrob::setDenum(int zn)
{
    if (zn == 0)
    {
        throw (string)"Знаменатель не должен равняться '0' ";

    }
    denum = zn;
}

TDrob::operator double()const
{
    double ch = getNum();
    double zn = getDenum();
    double temp = (ch / zn);
    return (double)temp;
}

TDrob::TDrob(const TDrob& h)
{
    num = h.num + 3;
    denum = h.denum + 2;
}

void TDrob::print()const
{
    cout << "Дробь -> (" << num << "/" << denum << ")\n";
}
void TDrob::print_operator()
{


    cout << "Дробь -> " << ((double)num / denum) << "\n";
}


int TDrob::gcd(int a, int b)
{
    while (b)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}
void TDrob::reduce()
{
    int rez_gcd = gcd(abs(num), denum);
    num = num / rez_gcd;
    denum = denum / rez_gcd;
    if (denum < 0 && num < 0)
    {
        denum *= -1;
        num *= -1;
    }
}

TDrob TDrob::operator+(const TDrob& drb) const
{
    int ch = num * drb.denum + denum * drb.num;
    int zn = denum * drb.denum;
    return TDrob(ch, zn);

}

TDrob TDrob::operator-(const TDrob& drb) const
{
    int ch = num * drb.denum - denum * drb.num;
    int zn = denum * drb.denum;
    return TDrob(ch, zn);
}
TDrob TDrob::operator*(const TDrob& drb) const
{
    int ch = num * drb.num;
    int zn = denum * drb.denum;

    return TDrob(ch, zn);
}
TDrob TDrob::operator/(const TDrob& drb) const
{
    int ch = num * drb.denum;
    int zn = denum * drb.num;
    return TDrob(ch, zn);

}

double operator +(const TDrob& drb,int number)
{
    TDrob temp ;
    temp.setNum(number);
    temp.setDenum(1);
    int ch = temp.num * drb.denum + temp.denum * drb.num;
    int zn = temp.denum * drb.denum;
    return TDrob(ch, zn);
}

std::ostream& operator<<(std::ostream& out, TDrob drb)
{
    out << '(' << drb.getNum() << '/' << drb.getDenum() << ')';
    return out;
}

std::istream& operator>>(std::istream& in, TDrob& drb)
{
    int ch, zn;
    in >> ch >> zn;
    drb.setNum(ch);
    drb.setDenum(zn);
    return in;
}




