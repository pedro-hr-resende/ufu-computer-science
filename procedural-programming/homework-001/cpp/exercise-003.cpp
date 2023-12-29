/* Student: Pedro Henrique Resende Ribeiro
 * Description: Sum of three numbers
 * Date: 2023-12-28 - Time: 02:20
 */

#include <iostream>

using namespace std;

int main() {

    double number1, number2, number3, sum;

    cout << "Enter the 1st number: ";
    cin >> number1;

    cout << "Enter the 2nd number: ";
    cin >> number2;
    
    cout << "Enter the 3rd number: ";
    cin >> number3;

    sum = number1 + number2 + number3;

    cout << "The sum is " << sum << endl;

    return 0;

}
