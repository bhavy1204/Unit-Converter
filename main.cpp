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
        // cout.width(15);
        cout << "1. Weight ";
        cout.width(15);
        cout << "2. length ";
        cout.width(15);
        cout << "3. Numbers ";
        cout.width(15);
        cout << "4. Currency ";
        cout.width(15);
        cout << "\n5. volume ";
        cout.width(15);
        cout << "6. speed ";
        cout.width(15);
        cout << "7. time";
        cout.width(15);
        cout << "8. Exit \n>>";
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