#include <iostream>
#include "gk.h"

using namespace std;

int main()
{
    cout <<endl<< "Ilustracija generickih funkcija" << endl;
    int a=15,b=25;
    cout<<"Veci broj od "<<a<<" i "<<b<<" je broj "<<veci(a,b)<<endl;
    float c=12.5,d=4.8;
    cout<<"Veci broj od "<<c<<" i "<<d<<" je broj "<<veci(c,d)<<endl;
    double e=18.3,f=18.3;
    cout<<"Veci broj od "<<e<<" i "<<f<<" je broj "<<veci(e,f)<<endl;
    char g='t',h='E';
    cout<<"Veci broj od "<<g<<" i "<<h<<" je broj "<<veci(g,h)<<endl;
    return 0;
}
