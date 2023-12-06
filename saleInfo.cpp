#include <iostream>
#include "saleInfo.h"
using namespace std;

void SaleInfo::PrintMonthSales() {
	cout << salesByMonth << endl;
}//end PrintMonthSales

void SaleInfo::PrintDaySales() {
	cout << "Here are the sales for the day: " << salesByDay << endl;
}//end PrintDaySales

// ***** Ethan and Gabe *****
void SaleInfo::PrintWeekBySales() {
    cout << "Sales for this week: " << salesByWeek << endl;
}//end PrintWeekBySales

void SaleInfo::PrintMonthBySales() {
    cout << "Sales for this month: " << salesByMonth << endl;
}//end PrintMonthBySales
// ***** Ethan and Gabe *****
