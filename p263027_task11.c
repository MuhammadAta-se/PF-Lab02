#include<stdio.h>
int main(){
     int teaQty = 3;
     int samosaQty = 4;
     int rollQty = 2;
     double teaPrice = 60.00;
     double samosaPrice = 40.50;
     double rollPrice = 120.00;
     double teaSubtotal;
     double samosaSubtotal;
     double rollSubtotal;
     double subTotal;
     double gst;
     double total;
     teaSubtotal = teaQty * teaPrice ;
     samosaSubtotal = samosaQty * samosaPrice;
     rollSubtotal = rollQty * rollPrice;
     subTotal = teaSubtotal + samosaSubtotal + rollSubtotal ;
     gst = 0.16 * subTotal;
     total = subTotal + gst;
     printf("========FAST CAFETERIA RECEIPT========");
     printf("Item  Qty  Unit Price (PKR)  Subtotal(PKR)\n");
     printf("--------------------------------------");
     printf("Tea          %d    %.2f              %.2f\n",teaQty,teaPrice,teaSubtotal);
     printf("Samosa       %d    %.2f              %.2f\n",samosaQty,samosaPrice,samosaSubtotal);
     printf("Chikenroll   %d    %.2f              %.2f\n",rollQty,rollPrice,rollSubtotal);
     printf("--------------------------------------");
     printf("Subtotal: PKR %.2f\n",subTotal);
     printf("GST (16%%): PKR %.2f\n",gst);
     printf("--------------------------------------");
     printf("Grand Total: PKR %.2f\n",total);
     printf("========THANKS FOR YOUR VISIT========");  
     return 0;} 
