#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LIST_SIZE 100


int sum_odd_array(int list[LIST_SIZE]){


for (int j = 0; j < LIST_SIZE; j++)
{
    list[j] = 1 + rand() % 100;
}


int sum_odd = 0;

for (int i = 0; i < LIST_SIZE; i++)
{
    if (list[i] % 2 != 0)
    {
        sum_odd += list[i];
    }
    
}

return sum_odd;

}

int main(void){

srand(time(0));
int list[LIST_SIZE];

printf("Sum of all numbers is list is sum = %d\n" , sum_odd_array(list));




return 0;
}







/* #include <stdio.h>
#define LIST_SIZE 6  // Antal elementer i eksemplet

int sum_odd_array(int list[LIST_SIZE]) {
    int sum_odd = 0;

    // Gennemløber arrayet og summerer ulige tal
    for (int i = 0; i < LIST_SIZE; i++) {
        if (list[i] % 2 != 0) {  // Tjekker om tallet er ulige
            sum_odd += list[i];  // Lægger ulige tal til summen
        }
    }

    return sum_odd;
}

int main(void) {
    int list[LIST_SIZE] = {30, 12, 51, 17, 45, 62};  // Eksempelværdier fra opgaven

    // Udskriver summen af de ulige tal i arrayet
    printf("Summen af alle ulige tal i arrayet er %d\n", sum_odd_array(list));

    return 0;
}
 */