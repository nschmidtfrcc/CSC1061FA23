#include <iostream>
#include "saleInfo.h"
using namespace std;

void SaleInfo::PrintDayBySales() {
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
