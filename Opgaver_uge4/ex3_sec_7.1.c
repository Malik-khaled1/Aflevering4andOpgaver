#include<stdio.h>
#include<math.h>
// Pre-condition
// n > 0
int main(void){

int n = 11;
double sqrt_n[11];
int cube[11];
for(int i = 0; i < n; i++)
{
    sqrt_n[i] = sqrt(i);
}


for (int j = 0; j < n; j++)
{
    cube[j] = pow(j, 3);
}

//Post-Condtion:
// sqrt_n stores the sqroots of the numbers from [0;10]
// cube stores the cubes for the integers from 0 through 10
return 0;

}