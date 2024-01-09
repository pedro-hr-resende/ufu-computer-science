/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print an employee's new salary
 * Date: 2024-01-09 - Time: 01:50
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    double salary, increase, newSalary;

    cout << "Enter the employee's salary: ";
    cin >> salary;

    increase = 0.25;
    newSalary = salary * (1 + increase);

    cout << fixed << setprecision(2);
    cout << "The new salary is " << newSalary << endl;

    return 0;

}
