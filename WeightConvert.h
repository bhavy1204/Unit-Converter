#include <iostream>
#include <math.h>
#include "utility.h"

using namespace std;

class Weight
{
    double a;

public:
    void input()
    {
        cout << "ENter value : ";
        cin >> a;
    }
    int ConvertFrom()
    {
        int ConvertFrom;
        do
        {
            cout << " --- CONVERT FROM --- " << endl;
            cout << "1. carat to " << endl;
            cout << "2. miligram to " << endl;
            cout << "3. centigram to " << endl;
            cout << "4. decigram to " << endl;
            cout << "5. grams to " << endl;
            cout << "6. decagrams to " << endl;
            cout << "7. Hectograms to " << endl;
            cout << "8. kilograms to " << endl;
            cout << "9. metric tonnes to " << endl;
            cout << "10. Ounces to " << endl;
            cout << "11. Pounds to " << endl;
            cout << "12. Stone to " << endl;
            cout << "13. Short tons(US) to " << endl;
            cout << "14. Exit " << endl;
            cin>>ConvertFrom;
        } while (ConvertFrom != 14);
        return ConvertFrom;
    }
    int ConvertTo(){
        int ConvertTo;
        do
        {
            cout << " --- CONVERT To --- " << endl;
            cout << "1. carat " << endl;
            cout << "2. miligram " << endl;
            cout << "3. centigram " << endl;
            cout << "4. decigram " << endl;
            cout << "5. grams " << endl;
            cout << "6. decagrams " << endl;
            cout << "7. Hectograms " << endl;
            cout << "8. kilograms " << endl;
            cout << "9. metric tonnes " << endl;
            cout << "10. Ounces " << endl;
            cout << "11. Pounds " << endl;
            cout << "12. Stone " << endl;
            cout << "13. Short tons(US) " << endl;
            cout << "14. Exit " << endl;
            cin >> ConvertTo;
        } while (ConvertTo != 14);
        return ConvertTo;      
    }
    void menu()
    {
        int sub_choice;
        do
        {
            ConvertFrom();
            input();
            ConvertTo();
            cin >> sub_choice;
        } while (sub_choice != 5);
    }
};