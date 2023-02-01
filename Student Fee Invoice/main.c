#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D, E;
    float CLS1, CLS2, TTL;



    printf("Enter the Students id:\n\t");
    scanf("%d", &A);
    printf("Enter crn/credit hours for first course (like 5665/3)\n\t");
    scanf("%d/%d", &B, &D);
    printf("Enter crn/credit hours for Second course (like 5665/3)\n\t");
    scanf("%d/%d", &C, &E);
    printf("\nThank you!\n\n");
    CLS1 = D * 120.25;
    CLS2 = E * 120.25;
    TTL = (CLS1 + CLS2) + 35.00;

    printf("\t\tVALENCE COMMUNITY COLLEGE \n\t\tORLANDO FL 10101\n");
    printf("\t\t*************************\n");
    printf("\n\t\tFee Invoice Prepared for Student V%d\n", A);
    printf("\n\t\t1 Credit Hour = $120.25\n");
    printf("\n\t\tCRN\t   CREDIT HOURS\n");
    printf("\n\t\t%d\t   %d\t\t\t$%.2f\n", B, D, CLS1);
    printf("\n\t\t%d\t   %d\t\t\t$%.2f\n", C, E, CLS2);
    printf("\n\t\t\t    Health & id fees \t$35.00\n\n");
    printf("\t\t------------------------------------------\n");
    printf("\n\t\t\t    Total payments \t$%.2f\n", TTL);
    // Created by Ryan Carlson 9/12/19, 2 class Student fee invoice prgm.



    return 0;
}
