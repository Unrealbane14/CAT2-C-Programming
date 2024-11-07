#include <stdio.h>

int main() {
	
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;
    const float overtime_rate = 1.5;
    const float tax_rate_1 = 0.15;
    const float tax_rate_2 = 0.20;
    const float tax_threshold = 600.0;

    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        float regular_pay = 40 * hourly_wage;
        float overtime_hours = hours_worked - 40;
        float overtime_pay = overtime_hours * (hourly_wage * overtime_rate);
        gross_pay = regular_pay + overtime_pay;
    }

    
    if (gross_pay <= tax_threshold) {
        taxes = gross_pay * tax_rate_1;
    } else {
        taxes = (tax_threshold * tax_rate_1) + ((gross_pay - tax_threshold) * tax_rate_2);
    }

    
    net_pay = gross_pay - taxes;

    
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}