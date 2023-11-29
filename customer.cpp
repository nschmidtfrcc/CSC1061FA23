#include <iostream>
#include "customer.h"
using namespace std;

void Customer::PrintPotentialCustomerInfo(){
   
   for(int index = 0; index < vecCustomers.size(); index++){
      if(vecCustomers.at(index)->isInterested == true){
         cout << "Name: " << vecCustomers.at(index)->name << endl;
         cout << "Email: " << vecCustomers.at(index)->emailAddress << endl;
         cout << "Phone Number: " << vecCustomers.at(index)->phoneNumber << endl;
         cout << "Interested Vehicle: " << vecCustomers.at(index)->interestedVehicle << endl;
         cout << "Interested Model: " << vecCustomers.at(index)->interestedModel << endl << endl;
      }//end if
   }//end for
   
}//end PrintPotentialCustomerInfo()