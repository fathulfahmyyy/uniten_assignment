#include <iostream>

#define size 5

using namespace std;

class Receipt
{
public:
    void printReceipt(MyStruct fruit[size])
    {
        float sum = 0;
        cout << "------------------" << endl
             << "Receipt" << endl;
        for (int i = 0; i < size; i++)
        {
            if (fruit[i].weight != 0)
                cout << fruit[i].name << " RM " << (fruit[i].weight * fruit[i].price) << endl;
            sum += (fruit[i].weight * fruit[i].price);
        }
        cout << "TOTAL = RM " << sum << endl
             << "------------------" << endl;
    }
};