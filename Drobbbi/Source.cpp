#include "Header.h"
class TDrob
{
private:
    int num;
    int denum;


public:
    TDrob(int ch = 0, int zn = 1)
    {
        num = ch;
        if (zn == 0)
        {
            cout << "Знаменатель не должен равняться '0' " << endl;
        }
        else
        {
            denum = zn;
        }
    }
    TDrob(const TDrob& h);

    int getNum()
    {
        return num;
    }
    int getDenum()
    {
        return denum;
    }
    int setNum(unsigned ch)
    {
        num = ch;
    }
    int setDenum(unsigned zn)
    {
        if (zn == 0)
        {
            cout << "Знаменатель не должен равняться '0' " << endl;
        }
        else
        {
            this->denum = zn;
        }
        return denum;
    }


};
TDrob::TDrob(const TDrob& h)
{
    num = h.num + 1;
    denum = h.denum + 1;
};
void TDrob::print()
{
    cout << "Дробь -> " << num << "/" << denum << "\n";
}
TDrob TDrob::operator+(TDrob& drb)
{
    int ch = num * drb.denum + denum * drb.num;
    int zn = denum * drb.denum;
    return TDrob(ch, zn);
}
TDrob TDrob::operator-(TDrob& drb)
{
    int ch = num * drb.denum - denum * drb.num;
    int zn = denum * drb.denum;
    return TDrob(ch, zn);
}
TDrob TDrob::operator*(TDrob& drb)
{
    int ch = num * drb.num;
    int zn = denum * drb.denum;
    return TDrob(ch, zn);
}
TDrob TDrob::operator/(TDrob& drb)
{
    int ch = num * drb.denum;
    int zn = denum * drb.num;
    return TDrob(ch, zn);
}