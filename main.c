#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3;
    float total,average;

    printf("please enter your mathematics marks(out of 100):",m1);
    scanf("%f",&m1);
    printf("please enter your science marks(out of 100):",m2);
    scanf("%f",&m2);
    printf("please enter your english marks(out of 100):",m3);
    scanf("%f",&m3);

    total = m1+m2+m3;
    average = total / 3.0;

    printf("Total:%.2f\n",total);
    printf("Average:%.2f\n",average);

    if (average >= 80 && average <= 100)
{
    printf("Grade: A\n");
}
else if (average >= 70 && average < 80)
{
    printf("Grade: B\n");
}
else if (average >= 60 && average < 70)
{
    printf("Grade: C\n");
}
else if (average >= 50 && average < 60)
{
    printf("Grade: D\n");
}
else
{
    printf("Grade: F");

}    //pass/fail Rule
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
    {
        printf("Result: PASS\n");
    }
    else
    {
        printf("Result: FAIL\n");
    }

    return 0;
}

