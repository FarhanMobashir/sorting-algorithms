#include <stdio.h>

/* Here i & j for loop counters, temp for swapping,
    count for total number of elements, number[] to
     store the input numbers in array. You can increase
     or decrease the size of number array as per requirement
    */

int main(void)

{
    int i, j, count, temp, number[25];

    printf("How many elements you wanna sort: ");
    scanf("%d", &count);

    printf("Enter the %d elements: ", count);
    for (i = 0; i < count; i++)
    {
        scanf("%d", &number[i]);
    }

    // logic for sorting algorithms

    for (i = 0; i < count; i++)
    {
        temp = number[i];
        j = j - 1;

        while (temp < number[j] && number[j] >= 0)
        {
            number[j + 1] = number[j];
            j = j - 1;
        }
        number[j + 1] = temp;
    }

    printf("Sorted Elements");
    for (i = 0; i < count; i++)
        printf("%d", number[i]);
}
