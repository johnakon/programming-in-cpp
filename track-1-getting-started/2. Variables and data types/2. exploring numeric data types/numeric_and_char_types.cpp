#include <iostream>

using std::cout;
using std::endl;


int main() {

    cout << " Size of int is : " << sizeof(int) << " bytes." << endl;

    int positive_int_extreme = 2147483647;
    int negative_int_extreme = -2147483648;

    cout << "Signed int value can range between: " << positive_int_extreme << " to " << negative_int_extreme <<endl;

    return 0;
}