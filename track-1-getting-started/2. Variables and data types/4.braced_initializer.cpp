#include <iostream>

using std::cout;
using std::endl;

int main() {

    int balance{500};
    int withdraw{361};
    int current_balance{balance - withdraw};

    cout << "Bank balance:= $" << balance << endl;
    cout << "Bank withdraw:= $" << withdraw << endl;
    cout << "Curret bank balance:= $" << current_balance << endl;

    return 0;
}