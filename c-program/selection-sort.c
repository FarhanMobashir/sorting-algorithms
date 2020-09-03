#include <stdio.h>

int main(void)

{
    int i,j,count,temp,number[25];

    printf("How many number you want to sort: ");
    scanf("%d", &count);

    printf("Enter %d elements: ", count);

    // Loop to get elemnts in unsorted array

    for(int i = 0; i < count; i++) {
        scanf("%d", &number[i]);
    }

    // logic for selection  sort

    for(i = 0; i < count; i++) {
        for(int j =i +1; j < count; j++) {
            if(number[j] < number[i]) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i = 0; i < count; i++) {
        printf("%d", number[i]);
    }
    return 0;
}