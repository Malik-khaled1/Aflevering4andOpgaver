/*
 2 * Returns the smallest of the first n values in list
 3 * Pre: n>0, list[0...n-1] is defined
 4 */
 #include<assert.h>
 #include<stdio.h>

 int main(void){

// Complete the testing on Thursday

 } 
 
 
 
 
 
 
 
 
 
 int get_min( int list[], int n) {

 assert(n>0); // Tjekker om input opfylder pre-betingelse
 int current_element;
 int smallest_n = list[0]; // smallest_n er det 0'lte element i arrayet
 int i; // tællervariabel 

 // Computation: Searching for the smallest number
 for(i = 1; i < n; i++){
    // Invariant: Før denne iteration er smallest_n det mindste ele i list[0..i-1]
    current_element = list[i];
    if(smallest_n > current_element){
        smallest_n = current_element;
        // Invariant: smallest_n er det mindste ele i list[0..i]
    }
 }
 //Invariant: Efter løkken er smallest_n det mindste ele i list[0..i-1]
 //post-betingelse
 return smallest_n; // Returns the smallest number in list[n]

  }


