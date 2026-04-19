#include <stdio.h>
int main()
{
    int days;
    printf("Enter the number of days to track: ");
    scanf("%d", &days);
    int steps[days];
    float calories[days];
    float water[days];
    int stepgoal;
    printf("Enter your daily step goal: ");
    scanf("%d", &stepgoal);
    float totalcalories = 0;
    int totalsteps = 0;
    int maxsteps = 0;
    int bestday = 0;
    int gmt = 0;
    for(int i = 0; i < days; i++)
    {
        printf("\nDay %d", i + 1);
        printf("\nSteps walked today: ");
        scanf("%d", &steps[i]);
        printf("Calories burned: ");
        scanf("%f", &calories[i]);
        printf("Water intake in litres: ");
        scanf("%f", &water[i]);
        totalsteps += steps[i];
        totalcalories += calories[i];
        if(steps[i] > maxsteps)
        {
            maxsteps = steps[i];
            bestday = i + 1;
        }
        if(steps[i] >= stepgoal)
        {
            gmt++;
        }
    }
    printf("\n------ Fitness Summary ------");
    printf("\nTotal Steps Walked: %d", totalsteps);
    printf("\nTotal Calories Burned in %d Days: %.2f", days, totalcalories);
    printf("\nAverage Calories Burned Per Day: %.2f", totalcalories / days);
    printf("\nMaximum Steps Walked: %d", maxsteps);
    printf("\nBest Day: Day %d", bestday);
    printf("\n\nStep Goal Results:");
    for(int i = 0; i < days; i++)
    {
        if(steps[i] >= stepgoal)
            printf("\nDay %d: Goal met", i + 1);
        else
            printf("\nDay %d: Goal not met", i + 1);
    }
    printf("\n\nTotal Days Goal Achieved: %d out of %d", gmt, days);
    printf("\nDays with low water intake (<2L): ");
    for(int i = 0; i < days; i++)
    {
        if(water[i] < 2)
            printf("\nDay %d", i + 1);
    }
    // BMI Calculator
    float height, weight, bmi;
    printf("\n\n----- BMI Calculator -----\n");
    printf("Enter your height (in meters): ");
    scanf("%f", &height);
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    if(bmi < 18.5)
        printf("Category: Underweight\n");
    else if(bmi < 24.9)
        printf("Category: Normal weight\n");
    else if(bmi < 29.9)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");
    return 0;
}