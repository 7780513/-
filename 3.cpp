#include <iostream>
#include <vector>
using namespace std;

class MyClass
{
public:
    void fun(vector<int>& arr)
    {
        if (arr.empty()) return;
        int minIndex = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] < arr[minIndex])
            {
                minIndex = i;
            }
        }
        swap(arr[minIndex], arr.back());
    }
};

int main()
{
    int n;
    cout << "请输入数组长度：";
    cin >> n;
    vector<int> arr(n);
    cout << "请输入数组数据：";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "交换前：";
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << endl;
    MyClass obj;
    obj.fun(arr);
    cout << "交换后：";
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
