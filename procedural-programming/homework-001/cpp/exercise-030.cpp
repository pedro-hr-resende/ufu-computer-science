/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from real to dollar
 * Date: 2024-01-06 - Time: 15:20
 */

#include <iostream>

using namespace std;

int main() {

    double real, dollar, rate;

    cout << "Enter a value in real: ";
    cin >> real;

    cout << "Enter the exchange rate: ";
    cin >> rate;

    dollar = real * rate;

    cout << "The value in dollar is " << dollar << endl;

    return 0;

}
