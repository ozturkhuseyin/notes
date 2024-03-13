#include <stdio.h>

void print_arr(const int* arr, size_t size)
{
    for (int i = 0; i < size; i++)
    {   
        //arr[i]++;   // sentax error -> it protects programmer from logical mistakes
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}

int main()
{   
    // C has implicit type conversion for int to const int 
    // but C++ doesnt have this so C++ pop an syntax error for this
    
    // for C++
    // const int arr[] = {1 , 2, 3, 4, 5, 6};
    int arr[] = {1 , 2, 3, 4, 5, 6};
    print_arr(arr, sizeof(arr) / sizeof(int));

    return 0;
}

