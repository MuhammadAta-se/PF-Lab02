#include<stdio.h>
int main (){
     double gross;
     double medical;
     double hra ;
     double basicSalary;
     double tax;
     double net;
     medical = 0.10 * basicSalary;
     gross = basicSalary + hra + medical;
     tax = 0.05 *gross;
     net = gross - tax;
     printf("========SLIP OF MONTHLY SALARY========="\n); 
     printf("Basic Salary :PKR %.2f\n",basicSalary); 
     printf("House Rent Allowance (20%%): PKR %.2f\n",hra); 
     printf("Medical Allowance (10%%): PKR %.2f\n",medical);  
     printf("Gross Salary : %.2f\n",gross);
     printf("Tax Deduction (5%%) :PKR %.2f\n",tax); 
     printf("----------------------------------------"\n); 
     printf("Net Payable Salary : PKR %.2f\n", net); 
     printf("======================================="\n);
     return 0; 
     }