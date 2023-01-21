#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse1(int array[], int j, int i = 0)
{
    if (i >= j)
        return;
    swap(&array[i], &array[j]);
    reverse1(array, j - 1, i + 1);
}

void reverse2(int array[], int size, int i = 0)
{
    if (i >= (size / 2))
        return;
    swap(&array[i], &array[size - 1 - i]);
    reverse2(array, size, i + 1);
}
int main()
{
    cout << "Enter size of the array:";
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at index " << i << ":";
        cin >> array[i];
    }

    cout << "Reversed array will be ";
    reverse1(array, size - 1);

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << "Original array was ";
    reverse2(array, size);
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}