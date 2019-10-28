#include <iostream>
#include "redd.h"
using namespace std;

int main()
{
    int broj, izbor;
    cout << endl<<"Obaj program demnstrira rad sa redom!" << endl<<endl;
    do{
        do{
            cout<<endl<<"1-Upisivanje podatka u red"<<endl;
            cout<<"2-Citanje podatka iz reda"<<endl;
            cout<<"vas izbor je ";
            cin>>izbor;
        }while(izbor!=1&&izbor!=2);
        if(izbor==1){
            cout<<endl<<"Unesite jedan ceo broj";
            cin>>broj;
            uPUR(broj);
        }
        else
            cout<<pPIR();

        cout<<endl<<endl;
        cout<<"Da li zelis jos da radis sa redom? (1-Da, 0-Ne)" << endl;
        cin>>izbor;
    }while(izbor==1);
    return 0;
}
