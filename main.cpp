#include <iostream>
#include <cstdlib>
#include <limits>
#include "converter.h"
using namespace std;

class convert{
    int a;
    public:
    void input(){
        cout<<"ENter value : ";
        cin>>a;
    }
};

class Weight:public convert{
    public:
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
                gmTokg();
                break;
            
            default:
                break;
            }
        } while (sub_choice!=5);   
    }
    void gmTokg(){
        cout<<"In building"<<endl;
    }
};
int main()
{
    system("cls");
    int choice;
    convert c;
    cout << "Welcome To Unit converter" << endl;
    do
    {
        cout<<iam<<endl;
        cout << "1. Weight " << endl;
        cout << "2. length " << endl;
        cout << "3. Numbers " << endl;
        cout << "4. Currency " << endl;
        cout << "5. volume " << endl;
        cout << "6. speed " << endl;
        cout << "7. time " << endl;
        cout << "8. Exit " << endl;
        cin >> choice;
        while (true)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a valid chhoice : ";
            }
            else{
                break;
            }
        }
        switch (choice)
        {
        case 1:
            cout<<"gm"<<endl;
            break;
        
        default:
            break;
        }
    } while (choice != 8);
    
    return 0;
}