#include <iostream>

using std::cout;
using std::endl;

int main() {

    // int score = 50.025;

    // b. using function notation
    // int score(50.025);

    // c. using braced initializer
    int score{50.025};

    // output will be truncated
    cout << "Curret bank balance:= $" << score << endl;

    return 0;
}