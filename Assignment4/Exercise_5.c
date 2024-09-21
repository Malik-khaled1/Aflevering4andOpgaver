#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*

* pre: a contains numbers between 1..20
* post: count[i] is equal to the numers af i+1 in a
*/
void count_1_to_20(int a[100][150], int count[20]) {


for (int i = 0; i < 20; i++) // Gennemløb count array
{
    count[i] = 0;// Initialiser det i'ne element til 0
}


srand(time(0)); // Initialiser generatoren

//Gennemløb rækker og kolloner og indsæt tilfældige værdier mellem 1 og 20 inklusiv
for (int row = 0; row < 100; row++)
{
    for (int col = 0; col < 150; col++)
    {
        a[row][col] = 1 + rand() % 20;
    }
    
}

// Gennemløb rækkerne
for (int  row = 0; row < 100; row++)
{
    for (int col = 0; col < 150; col++)// Gennemløb kollonerne
    {
        count[a[row][col] - 1]++; // Opdater den rigtige tæller
    }
}

for (int k = 0; k < 20; k++)
{
    printf("Tal: %d\t Forekomster: %d\n", k+1, count[k]);
}

}


int main(void){

int a[100][150];
int count[20];

count_1_to_20(a, count);

    return 0;
}
        
/*



if (a[row][col] == 1)
        {
            count[0] += 1;
        }else if (a[row][col] == 2)
        {
            count[1] += 1;
        }else if (a[row][col] == 3)
        {
            count[2] += 1;
        }else if (a[row][col] == 4)
        {
            count[3] += 1;
        }else if (a[row][col] == 5)
        {
            count[4] += 1;
        }else if (a[row][col] == 6)
        {
            count[5] += 1;
        }else if (a[row][col] == 7)
        {
            count[6] += 1;
        }else if (/* condition )

*/
