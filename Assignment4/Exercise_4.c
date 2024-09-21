/*
* Returns the index in list of the logest sequence of zeros in list,-1
if no zeros in list
* pre: n>0, list[0...n-1] is defined
*/
#include<stdio.h>
#include<assert.h>
int longest_seq(int list[], int n){

//Pre-condition: n > 0
assert(n>0);

int count = 0; // Tæller antallet af nuller
int current = 0; // Den længste sekvens af nuller
int index = -1; // Nuværende index 
int best_index = -1; // Index til længste sekvens af nuller

// Gennemløb alle elementer i list[] fra 0 til n-1
for (int i = 0; i < n; i++)
{
    if (list[i] == 0) //Hvis et element er 0 
    {
        // Hvis vi er ved første element af arrayet eller det forrige element ikke er 0
        if (i == 0 || list[i-1] != 0)
        {
            index = i; // Så er start indexet i
        }
    count++; // Tæller antal nuller op for hver ny sekvens

    }else // Hvis elementet ikke er 0
    {   
        // Sammenlign sekvenserne af nuller
        if (current < count)
        {
            current = count; // Initialiser den længste sekvens til den nuværende
            best_index = index; // Opdater indekset til den længste sekvens af nuller
        }
    
    count = 0; // Nultstil optælling
    }

}
// Check om den sidste sekvens er større end den nuværende
if (current < count)
{
    current = count; // Initialiser den længste sekvens til den nuværende
    best_index = index;//Opdater indekset til den længste sekvens af nuller 
}

return best_index; // Retuner det indexet af den længste sekvens

}

int main(void)

 {
    
int a[13] = { 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 11, 0, 0 };
int b[5] = {1, 2, 3, 4, 5};
printf ("The longest sequence of zeros start index is %d\n",
longest_seq(a,13));
printf ("The longest sequence of zeros start index is %d\n",
longest_seq(b,5));

return 0; 
 
 }
