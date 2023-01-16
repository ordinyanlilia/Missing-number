#include <iostream>
using namespace std;

int getmissingnum(int array[], int n)
{
    int b = 0;
    int sumofprogress = ((1 + n + 1) * (n + 1)) / 2;
    int sumofarray = 0;
    for (int i = 0; i < n; i++)
    {
        sumofarray += array[i];
    }
    b = sumofprogress - sumofarray;
    return b;
}




int main()
{

    int n;
    cout << "Input n(size of array)" << endl;
    cin >> n;
    int arr[50];
    cout << "Input array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "In array the missing number is " << getmissingnum(arr, n) << endl;
}

