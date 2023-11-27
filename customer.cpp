#include "customer.h"
#include <iostream>
using namespace std;

void Customer::PrintCustomersWhoBoughtCar() const{
   int index;
   
   for(index = 0; index < vecCustomers.size(); index++){
      if(vecCustomers.at(index)->boughtCar == true){
         cout << vecCustomers.at(index)->name << endl;
         cout << vecCustomers.at(index)->emailAddress << endl;
         cout << vecCustomers.at(index)->phoneNumber << endl;
      }//end if 
   }//end for

}//endprintcustomershwoboughtcar