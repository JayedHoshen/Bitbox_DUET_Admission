// Write a program to find out the second max element
// in an array without using library function

#include <stdio.h>

int main()
{
    int n, i, j, temp = 0;

    printf("Enter array size = ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array element: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("Second maximum number = %d\n", arr[n-2]);

    for (i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}
