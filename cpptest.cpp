#include<iostream>
#include<memory>

using namespace std;

struct Data
{
    int a{};
    int b{};
    int c{};
    double d{};
};

void printer(Data& d)
{
    cout << d.a << ' ' <<
        d.b << ' ' <<
        d.c << ' ' <<
        d.d << '\n';
}

int main()
{
    Data data{};
    Data* pdata = new Data();
    auto pudata = make_unique<Data>();
    auto pp = pudata;

    printer(data);
    printer(*pdata);
    printer(*pudata);
    return 0;
}