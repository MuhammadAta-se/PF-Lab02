#include<stdio.h>
int main(){
    int time = 3 ;
    double interest ;
    double totalAmount;
    double monthlyInstallment;
    double princpal;
    double rate;
    interest = (princpal * rate * time)/100.0;
    totalAmount = princpal + interest;
    monthlyInstallment = totalAmount /(time * 12.0);
    printf("========BANK LOAN INTEREST SUMMERY========");
    printf("Principal Amount: PKR %.2f\n",princpal);
    printf("Annual Interest Rate:%.2f\n",rate);
    printf("Loan duration: %d Years(%d Months)\n",time,time*12);
    printf("------------------------------------------");
    printf("Total Interest: PKR %.2f\n",interest);
    printf("Total Payable Amount: PKR %.2f\n",totalAmount);
    printf("Monthly Installment: PKR %.2f\n",monthlyInstallment);
    printf("===========================================");
    return 0;}
    
    