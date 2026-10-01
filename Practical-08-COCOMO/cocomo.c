#include <stdio.h>
#include <math.h>

int main()
{
    float kloc, costPerPM;
    float a, b, c, d;
    float effort, time, staff, cost;
    int mode;

    printf("COCOMO Software Cost Estimation\n");
    printf("--------------------------------\n");

    printf("Enter project size in KLOC: ");
    scanf("%f", &kloc);

    printf("\nSelect Project Mode:\n");
    printf("1. Organic\n");
    printf("2. Semi-Detached\n");
    printf("3. Embedded\n");
    printf("Enter your choice: ");
    scanf("%d", &mode);

    switch(mode)
    {
        case 1:
            a = 2.4;
            b = 1.05;
            c = 2.5;
            d = 0.38;
            break;

        case 2:
            a = 3.0;
            b = 1.12;
            c = 2.5;
            d = 0.35;
            break;

        case 3:
            a = 3.6;
            b = 1.20;
            c = 2.5;
            d = 0.32;
            break;

        default:
            printf("Invalid project mode!\n");
            return 0;
    }

    printf("Enter cost per person-month: ");
    scanf("%f", &costPerPM);

    // COCOMO calculations
    effort = a * pow(kloc, b);
    time = c * pow(effort, d);
    staff = effort / time;
    cost = effort * costPerPM;

    printf("\n----- COCOMO ESTIMATION -----\n");
    printf("Project Size       : %.2f KLOC\n", kloc);
    printf("Effort             : %.2f Person-Months\n", effort);
    printf("Development Time   : %.2f Months\n", time);
    printf("Average Staff      : %.2f Persons\n", staff);
    printf("Estimated Cost     : %.2f\n", cost);

    return 0;
}
