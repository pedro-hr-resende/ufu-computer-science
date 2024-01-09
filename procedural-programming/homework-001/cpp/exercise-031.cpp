/* Student: Pedro Henrique Resende Ribeiro
 * Description: Predecessor and successor of a number
 * Date: 2024-01-09 - Time: 00:40
 */

#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Enter an integer number: ";
    cin >> number;

    cout << "Predecessor: " << number - 1 << endl;
    cout << "Successor: " << number + 1 << endl;

    return 0;

}
