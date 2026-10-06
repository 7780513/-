#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 9)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << "×" << i << "=";
            if (j*i < 10)
                cout << " ";
            cout << j*i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
