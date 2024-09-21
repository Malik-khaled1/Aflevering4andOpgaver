/*
* Returns the average of an array
* Pre: n>0, list[0...n-1] is defined
*/
double average( int list[], int n) {

assert(n>0);
double sum_array = 0; // Summen af ele i arrayet

// Gennemløb arrayet
for(int i = 0; i < n; i++)
{
    // Adder elementerne
    sum_array += list[i]; 
}
// Beregn gennemsnittet
double arr_average = sum_array / n;
// Retuner gennemsnittet
return arr_average;

}

