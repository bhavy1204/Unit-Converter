#include <iostream>
using namespace std;

class Weight{
    int a;
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
            cout<<"3. mg to kg"<<endl;
            cout<<"4. kg to mg"<<endl;
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
};