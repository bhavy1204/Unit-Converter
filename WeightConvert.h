#include <iostream>
#include <math.h>
using namespace std;

class Weight{
    double a;
    public:
    void input(){
        cout<<"ENter value : ";
        cin>>a;
    }
    void menu(){
        int sub_choice;
        do
        {
            cout<<"1. kg to gm"<<endl;
            cout<<"2. gm to kg"<<endl;
            cout<<"3. kg to lbs"<<endl;
            cout<<"4. lbs to kg"<<endl;
            cout<<"5. Exit "<<endl;
            cin>>sub_choice;
            switch (sub_choice)
            {
            case 1:
                input();
                gmTokg();
                break;
            
            default:
                break;
            }
        } while (sub_choice!=5);   
    }
    void gmTokg(){
        cout<<a*1000<<"gm"<<endl;
    }
    void KgTogm(){
        cout<<a/1000<<"gm"<<endl;
    }
    void lbsTOkg(){
        cout<<a/2.204<<"lb"<<endl;
    }
    void KgTOlbs(){
        cout<<a*2.204<<"lb"<<endl;
    }
};