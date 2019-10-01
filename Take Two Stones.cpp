#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num_stones;

    while(1){
        while(!(cin >> num_stones)){
            cout << "Must be a number:" << flush;
            cin.clear();
            cin.ignore(100, '\n');
        }
        if (num_stones >= 1 && num_stones <= 10000000)
            break;
        cout << "Must be between 1 and 10000000" << endl;
    }

    if (num_stones%2 == 1)
        cout<< "Alice" << flush;
    else
        cout<< "Bob" << flush;
    return 0;
}
