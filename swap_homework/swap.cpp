#include <iostream>
using namespace std;

class MyClass {
public:
    void fun(int arr[], int n) {
        if (n <= 1) return;
        int minIndex = 0;
        for (int i = 1; i < n; ++i) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[n - 1];
        arr[n - 1] = temp;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore(100, ',');

    int arr[100];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        cin.ignore(100, ',');
    }

    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << endl;

    MyClass obj;
    obj.fun(arr, n);

    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << endl;

    return 0;
}

