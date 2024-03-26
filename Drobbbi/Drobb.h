class TDrob
{
private:
    int num;
    int denum;
    int gcd(int a, int b);
    void reduce();

public:
    TDrob(int ch = 0, int zn = 1);
    TDrob(const TDrob& h);
 

    int  getNum() const;
    int getDenum() const;

    void setNum(int ch);
    void setDenum(int zn);
    operator double()const;
    TDrob operator+(const TDrob& drb) const;
    TDrob operator-(const TDrob& drb) const;
    TDrob operator*(const TDrob& drb) const;
    TDrob operator/(const TDrob& drb) const;
    friend double operator+(const TDrob& drb,int number);


    friend std::ostream& operator<<(std::ostream& out, const TDrob point);
    friend std::istream& operator>>(std::istream& in,  TDrob& point);
    void print() const;
    void print_operator();



};
