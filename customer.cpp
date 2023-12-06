#include "customer.h"
#include <iostream>
using namespace std;

// Written by: BC & CM
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

// Written by: CM
int Customer::FindCustomerIndex(const string& nameToFind, const vector<Customer>& vecCustomers) const {

   int index;
   
   for (index = 0; index < vecCustomers.size(); ++index) {
      if (nameToFind == vecCustomers.at(index).name) {
         return index;
      } // End if   
   } // End for
   
   cout << "Customer not found, no index returned" << endl;
  
   return -1; // If customer not found
} // End FindCustomerIndex()