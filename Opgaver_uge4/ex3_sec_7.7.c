#include<stdio.h>
#define EMPLOYEES 10


int main(void){

int work_hours[EMPLOYEES];
int pay_rates[EMPLOYEES];

for (int i = 0; i < EMPLOYEES; i++)
{
    printf("Enter work hours please: ");
    scanf("%d", &work_hours[i]);

    printf("Enter hourly pay rate: ");
    scanf("%d", &pay_rates[i]);

}


    return 0;
}


