// a program for quick sort using divide nad conquire
#include <iostream>
using namespace std;
int count = 0;
int partition(int a[], int l, int u)
{
    int v, i, j, temp;
    v = a[l];
    i = l;
    j = u + 1;

    do
    {
        do
            i++;

        while (a[i] < v && i <= u);

        do
            j--;
        while (v < a[j]);

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    a[l] = a[j];
    a[j] = v;
    return (j);
}

int quick_sort(int a[], int l, int u)
{
    count++;
    if (l < u)
    {
        int j = partition(a, l, u);
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, u);
    }
}
int main()
{
    int a[50], n, i;
    cout << "Enter size: ";
    cin >> n;
    cout << "\nEnter array elements: ";

    for (i = 0; i < n; i++)
        cin >> a[i];

    quick_sort(a, 0, n - 1);
    cout << "\nSorted array: ";

    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\nNo of comparision: " << count;
    return 0;
}
