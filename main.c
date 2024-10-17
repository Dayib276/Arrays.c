#include <stdio.h>

void calculateBill(int customerID, char customerName[], int unitsConsumed) {
    float chargePerUnit, totalBill, surcharge = 0.0;
if (unitsConsumed<=199){
    chargePerUnit=1.20;
}else if(unitsConsumed>=200&&unitsConsumed<400){
chargePerUnit=1.50;
}else if (unitsConsumed>=400&&unitsConsumed<600){
   chargePerUnit=1.80;
   }else {
   chargePerUnit=2.00;
   }
   totalBill=unitsConsumed*chargePerUnit;
    if (totalBill>400) {
        surcharge=totalBill*0.15;
        totalBill+=surcharge;
   }     if (totalBill<100) {
            totalBill=100;

        }
    printf("Customer ID:%d \n",customerID);
    printf("Customer Name: %s \n",customerName);
    printf("Units Consumed:%d \n",unitsConsumed);
    printf("Charge Per Units %.2f \n",chargePerUnit);
    printf("Total Amount to Pay:%.2f \n",totalBill);

    }
    int main()  {
    int customerID,unitsConsumed;
     char customerName[100];
     printf("Enter Customer ID :");
     scanf("%d",&customerID);
     printf("Enter Customer Name:");
     scanf("%s",customerName);
     printf("Enter Units Consumed:");
     scanf("%d",&unitsConsumed);
 calculateBill(customerID,customerName,unitsConsumed);
     return 0;
}
