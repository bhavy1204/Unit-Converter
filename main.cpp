#include <iostream>
#include <cstdlib>
#include <limits>
//COnversion files
#include "CurrencyConvert.h"
#include "NumberConvert.h"
#include "LengthConvert.h"
#include "SpeedConvert.h"
#include "TimeConvert.h"
#include "VolumeConvert.h"
#include "WeightConvert.h"
//Utility files
// #include "utility.h"

using namespace std;
int main()
{
    system("cls");
    int choice;
    cout << "Welcome To Unit converter" << endl;
    do
    {
        //Menu for choosing nature of conversion
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
        //Function for valid user input
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
        case 4:
            currency c;
            break;
        default:
            break;
        }
    } while (choice != 8);
    
    return 0;
}