#include <stdio.h>

int main() {
    float hra, basicsalary, grosssalary, otherAllowances;

    printf("Enter the basic salary: ");
    scanf("%f", &basicsalary);

    printf("Enter the house rent allowance (HRA): ");
    scanf("%f", &hra);

    printf("Enter other allowances: ");
    scanf("%f", &otherAllowances);

    grosssalary = basicsalary + hra + otherAllowances;
    printf("Gross salary is %f\n", grosssalary);

    return 0;
}