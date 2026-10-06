#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "×" << i << "=";
            if (j*i < 10)
                cout << " ";
            cout << j*i << " ";
        }
        cout << endl;
    }
    return 0;
}
