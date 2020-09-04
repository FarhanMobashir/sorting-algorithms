#include <stdio.h>

int main(void)
{
    int i, j, count, temp, number[25];

    printf("How many numbers u are going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   // Loop to get the elements stored in array
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

    // logic for bubble sorting

    for(i = 0; i < count; i++) {
        for(j = 0; j < count - i -1; j++) {
            if(number[j] > number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i = 0 ; i < count; i++){
        printf("%d", number[i]);
    }
    return 0;
}
