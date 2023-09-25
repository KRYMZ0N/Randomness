
#include <iostream>

using namespace std;

class first {
public:
    int num;
    string myString;

};

int main() {
    first First;
    First.myString = "everything";
    First.num = 12;

    cout << First.myString << " and " << First.num;
}

