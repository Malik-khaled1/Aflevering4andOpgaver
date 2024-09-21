#include<stdio.h>
#include<math.h>

/* Pre-condition:
loanAmount > 0, interestRate > 0, loanDuration > 0*/
double calculateMonthlyPayment(double loanAmount, double interestRate, int loanDuration) {



 // Calculate monthly interest rate
 double monthlyInterestRate = interestRate / 12;


 //Post-condition:
 // Calculate and returns monthly payment
 // mothlyPayment > 0
 double monthlyPayment = loanAmount * (monthlyInterestRate / (1- pow(1 + monthlyInterestRate,-loanDuration)));
 
 return monthlyPayment;
}


void displayRepaymentPlan(void) {
 
 /* Pre-condition:
 loanAmount > 0, interestRate > 0, loanDuration > 0*/
 double loanAmount;
 double interestRate;  // Annual interest rate (as a decimal)
 int loanDuration;
  // Get user input
 printf("Enter the loan amount: ");
 scanf("%lf", &loanAmount);
 printf("Enter the annual interest rate (as a decimal): ");
 scanf("%lf", &interestRate);
 printf("Enter the loan duration in months: ");
 scanf("%d", &loanDuration);
  

 
 printf("\nRepayment Plan:\n");
 printf("Month\tPrincipal\tInterest\tTotal Payment\n");
 
 double monthlyInterestRate = interestRate / 12;
 double monthlyPayment = calculateMonthlyPayment(loanAmount, interestRate, loanDuration);

 double remainingBalance = loanAmount;
 double interestPayment = 0;
 double principalPayment = 0;
 int month = 1;

 for(month = 1; month <= loanDuration && remainingBalance > 0.001; month++)
 {

  interestPayment = remainingBalance * monthlyInterestRate;
  principalPayment = monthlyPayment - interestPayment;

  remainingBalance -= principalPayment;
 //Post-condition:
 // Displays a tabel for the monthly repaymentPlan
 printf("%d\t%.2lf\t\t%.2lf\t\t%.2lf\n", month, principalPayment, interestPayment, monthlyPayment);

}



}


int main(void){

displayRepaymentPlan();



}