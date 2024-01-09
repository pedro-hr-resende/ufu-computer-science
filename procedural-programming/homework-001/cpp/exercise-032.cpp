/* Student: Pedro Henrique Resende Ribeiro
 * Descriptiion: Sum of successor and predecessor
 * Date: 2024-01-09 - Time: 00:50
 */

#include <iostream>

using namespace std;

int main() {

    int number, predecessor, successor;

    cout << "Enter an integer number: ";
    cin >> number;

    predecessor = (number * 2) - 1;
    successor = (number * 3) + 1;

    cout << "The sum is " << predecessor + successor << endl;

    return 0;

}
