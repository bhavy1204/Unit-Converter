#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

class convert{
    public:
    class Weight{
        public:
        int kgTOgm(int a){
            return a*1000;
        }
    };
    class Length{
        public:

    };
    class Number{
        public:

    };
    class Currency{
        public:

    };
    class Volume{
        public:

    };
    class Speed{
        public:

    };
    class Time{
        public:

    };
};

int main()
{
    system("cls");
    int choice;
    convert c;
    cout << "Welcome To Unit converter" << endl;
    do
    {
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
            convert::Weight w;
            cout<<w.kgTOgm(1)<<"gm"<<endl;
            break;
        
        default:
            break;
        }
    } while (choice != 8);
    
    return 0;
}