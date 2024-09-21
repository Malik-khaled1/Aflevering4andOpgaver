/*
* Returns in rev_array the elements of list in reversed order
* Pre: n>0, list[0...n-1] is defined*/

void reverse( int list[], int rev_array[], int n) {
// pre-condition
assert(n>0);


for(int i = 0; i < n; i++){
//post-condition
rev_array[i] = list[n-1-i]; // Assigns the n-1-i element of list to the i element in rev_array

}

 }
 



void reverse( int list[], int rev_array[], int n) {

assert(n>0);

for(int i = n - 1, j = 0; i >= 0, j < n; i--, j++){

        rev_array[j] = list[i];
    }

