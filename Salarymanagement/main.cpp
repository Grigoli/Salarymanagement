#include <iostream>
#include <list>

using namespace std;

#include "Employee.h"
#include "Owner.h"
#include "Waiter.h"
#include "Chef.h"

int main()
{
    Employee * ptr;
    list<Employee*> empList;

    double monthsProfit = 60000,
    tipW1 = 1000,
    tipW2 = 1500,
    tipW3 = 1700;

    ptr = new Owner(1, "Sweta", "Sarkar", "O", monthsProfit);
    empList.push_back(ptr);

    ptr = new Waiter(2, "Vashakidze", "Giga", "W", 3, tipW1);
    empList.push_back(ptr);

    ptr = new Waiter(3, "Smith", "Mary", "W", 5,tipW2);
    empList.push_back(ptr);

    ptr = new Waiter(4, "Smith", "Mary", "W", 7,tipW3);
    empList.push_back(ptr);

    ptr = new Chef(5, "Smith", "Mary", "C", "Italian", monthsProfit);
    empList.push_back(ptr);

    ptr = new Chef(6, "Smith", "Mary", "C", "French", monthsProfit);
    empList.push_back(ptr);

    for (list<Employee*>::iterator it = empList.begin();
        it!= empList.end(); it++)
    {
        ptr = *it;
        cout << *ptr << endl;
    }
}
