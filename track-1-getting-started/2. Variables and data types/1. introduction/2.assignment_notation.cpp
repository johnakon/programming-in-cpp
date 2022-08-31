#include <iostream>

using std::cout;
using std::endl;

int main(){

    int balance = 1000;
    int withdrawal = 200;
    int current_balance = balance - withdrawal;

    cout << "Bank balance:= $" << balance << endl;
    cout << "Bank withdraw:= $" << withdrawal << endl;
    cout << "Curret bank balance:= $" << current_balance << endl;

    return 0;
}