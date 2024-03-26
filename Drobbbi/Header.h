#pragma once

using namespace std;
class TDrob
{
private:
    int num;
    int denum;


public:
    TDrob(int ch = 0, int zn = 1);
    TDrob(const TDrob& h);

    int getNum();
    int getDenum();

    int setNum(unsigned ch);
    int setDenum(unsigned zn);

    void print();

    TDrob  operator+(const TDrob& drb) const;
    TDrob  operator-(const TDrob& drb) const;
    TDrob  operator*(const TDrob& drb) const;
    TDrob  operator/(const TDrob& drb) const;
    

    

    

    
};
