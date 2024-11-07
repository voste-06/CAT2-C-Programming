#include <stdio.h>

int main(){
    int duration, overtime, tax_rate1, tax_rate2;
    float hourly_wage, tax1, tax2, total_wage, payable1, payable2, gross_pay;

    printf("Enter the hours worked in a week ");
    scanf("%d", &duration);
    printf("Enter the hourly wage ");
    scanf("%f", &hourly_wage);

    if (duration > 40) {
        duration = duration * 1.5;
    }
    else{
        duration = duration;
    }

    total_wage = duration * hourly_wage;

    if(total_wage<=600){
        gross_pay = 0.85 * total_wage;
    }
    else{
        payable1 = 600;
        tax1 = payable1 * 0.15;
        payable2 = total_wage - payable1;
        tax2 = payable2 * 0.2;
        payable1 = payable1 * 0.85;
        payable2 = payable2 * 0.80;
        gross_pay = payable1 + payable2;
    }

    printf("Gross Pay: %.2f\n", gross_pay);
    printf("Tax1: %.2f\n", tax1);
    printf("Tax2: %.2f\n", tax2);
    printf("Gross Pay: %.2f\n", gross_pay);
        
}