#include <iostream>
#include "customer.h"
using namespace std;

void findInterestedCustomers(){
   
   cout << "Interested Customers:" << endl;
   for(int index = 0; index < vecCustomers.size(); index++){
      cout << "Name: " << name.at(index) << endl;
      cout << "Email: " << emailAddress.at(index) << endl;
      cout << "Phone Number: " << phoneNumber.at(index) << endl;
      cout << "Interested Vehicle: " << interestedVehicle.at(index) << endl;
      cout << "Interested Model: " << interestedModel.at(index) << endl << endl;
   }//end for
   
}//end findInterestedCustomers()