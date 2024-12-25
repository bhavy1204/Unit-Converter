#include <iostream>
#include <cstdlib>
#include <limits>
#include "CurrencyConvert.h"
#include "NumberConvert.h"
#include "LengthConvert.h"
#include "SpeedConvert.h"
#include "TimeConvert.h"
#include "VolumeConvert.h"
#include "WeightConvert.h"

using namespace std;
int main()
{
    system("cls");
    int choice;
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
            Weight w;
            w.menu();
            break;
        
        default:
            break;
        }
    } while (choice != 8);
    
    return 0;
}