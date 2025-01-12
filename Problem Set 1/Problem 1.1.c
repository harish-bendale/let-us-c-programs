// Ramesh’s basic salary is input through the keyboard. His dearness 
// allowance is 40% of basic salary, and house rent allowance is 20% of 
// basic salary. Write a program to calculate his gross salary.
#include<stdio.h>

void calculateGrossSalary(double base_salary) {
    double allowance = (base_salary * 0.4);
    double house_rent = (base_salary * 0.2);
    printf("Dearness allowance of Ramesh is %.2f\n", allowance);
    printf("House rent allowance of Ramesh is %.2f\n", house_rent);
    printf("Gross salary of Ramesh is %.2f\n", (base_salary + allowance + house_rent));
}

int main() {
    double base_salary;
    printf("Enter the base salary: ");
    scanf("%lf", &base_salary);
    calculateGrossSalary(base_salary);
    return 0;
}
