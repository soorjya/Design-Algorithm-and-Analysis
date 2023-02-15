// code for linear serch in c++
#include <iostream>
using namespace std;
// void Linear(int [],int,int);
void Linear(int b[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
        if (b[i] == x)
        {
            cout << x << " present in location: " << i + 1 << endl;
            cout << "No. of comparisions: " << count;
            exit(1);
        }
    }
    if (count == n)
    {
        cout << "element not found" << endl;
        cout << "No. of comparisions: " << count;
    }
}

int main()
{
    int a[20], i, n, item;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the search element: " << endl;
    cin >> item;
    Linear(a, n, item);
    return 0;
}
