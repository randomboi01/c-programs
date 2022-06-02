#include <stdio.h>
#include <string.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

void arrayRev(int array[]){
    for (int i = 0; i < 3; i++)
    {
        /* code */
        swap(&array[i], &array[6-i]);
    }
    
    return;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    /*swap(&arr[0], &arr[6]);
    swap(&arr[1], &arr[5]);
    swap(&arr[2], &arr[4]);*/
    arrayRev(arr);

    for (int i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    }
    

    return 0;
}