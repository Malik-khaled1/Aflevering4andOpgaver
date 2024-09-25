#include<stdio.h>
# define LIST_SIZE 6

/*
Pre-condition:
- Arrayet `list` har mindst LIST_SIZE elementer.
- Arrayet `list` indeholder heltal.

Post-condition:
- Funktionen returnerer summen af alle elementer, der er placeret på lige indekser (0, 2, 4, ...).
*/

int sum_even_num(int list[LIST_SIZE]) {

    int sum_even = 0;  // Initialiserer summen til 0

    // Løkken går gennem alle elementer i arrayet fra 0 til LIST_SIZE - 1
    for (int i = 0; i < LIST_SIZE; i++)
    {
        // Tjekker om indekset i er lige (dvs. et heltal der kan deles med 2)
        if (i % 2 == 0)
        {
            // Hvis indekset er lige, lægges værdien af list[i] til summen
            sum_even += list[i];
        }
    }
    
    // Returnerer summen af elementerne på lige indekser
    return sum_even;

}

int main(void) {
    
    // Definerer et array med 6 elementer
    int list[LIST_SIZE] = {30, 12, 51, 17, 45, 62};

    // Udskriver summen af elementerne på lige indekser (0, 2, 4, ...)
    printf("The sum of even-indexed numbers in list is sum = %d\n", sum_even_num(list));
    
    return 0;  // Program afsluttes succesfuldt
    
}
