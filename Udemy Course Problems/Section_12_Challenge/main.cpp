#include <iostream>

using namespace std;
int *apply_all(int *array1, size_t size1, int *array2, size_t size2)
{
    int *new_array = new int[size1 * size2];
    for (int i = 0; i < size2; i++)
        for (int k = 0; k < size1; k++)
            new_array[size1 * i + k] = array2[i] * array1[k];
    return new_array;

}

void print(int *array, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }

}
int main() {

    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    int *results = apply_all(array1, 5, array2, 3);
    print(results, 15);
    cout<<endl;
    delete [] results;

    return 0;
}