#include <stdio.h>

int main()
{
    int marks[3][3];
    int sum = 0;
    float avg = 0;
    int count1 = 0;
    int count2 = 0;
    int X;

    while (count1 < 3)
    {
        while (count2 < 3)
        {
            printf("Enter the marks of subject %d of student %d :", count2 + 1, count1 + 1);
            scanf("%d", &X);
            marks[count1][count2] = X;
            count2++;

            sum = sum + X;
        }

        avg = sum / 3.0;
        printf("Average=%f", avg);
        count1++;
    }
}