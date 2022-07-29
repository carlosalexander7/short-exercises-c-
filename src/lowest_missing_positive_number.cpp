/**
 * Binary search exercise:
 * Return the lowest missing positive number from a given sequence.
 * eg. input [7 8 9 11 12] | output: 10
 */
#include <iostream>

using namespace std;

void print_array(int arr[], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

/**
 * Binary search to find the lowest positive number
 * Check if the midle value in the array is equial to the midle value
 * of the range defined from [init_array_value...... end_array_value]
 * If True then the missing value is in the right half part of the array
 * Otherwise it is in the left half part of the array.
 */
int get_lowest_positive_value(int arr[], int init_idx, int end_idx)
{
    if (arr[init_idx] != init_idx)
    {
        return init_idx;
    }
    int mid_idx = (init_idx + end_idx) / 2;
    if (arr[mid_idx] == mid_idx)
    {
        return get_lowest_positive_value(arr, mid_idx + 1, end_idx);
    }
    return get_lowest_positive_value(arr, init_idx + 1, mid_idx);
}

int main()
{
    int arr_size;
    int offset = 0;
    cout << "Inset the amount of numbers to check: ";
    cin >> arr_size;
    // Declare array according the specified size
    int arr[arr_size];
    cout << "Insert the number sequence: ";
    // Read the given sequence
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    int arr_lenght = sizeof(arr) / sizeof(arr)[0];
    cout << "Given sequence is: ";
    print_array(arr, arr_lenght);
    // If the given array does not start with 0 then
    // remove the offset so it starts with 0 like the index
    if (arr[0] != 0)
    {
        offset = arr[0];
        for (int i = 0; i < arr_lenght; i++)
        {
            arr[i] = arr[i] - offset;
        }
    }
    cout << "The lowest missing positive value is: ";
    cout << get_lowest_positive_value(arr, 0, arr_lenght - 1) + offset << endl;
    return 0;
}