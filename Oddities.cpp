#include <iostream>

using namespace std;

int main()
{

    int num;
    int numbers[20];
    cin >> num;
    int i;
    for(i=0; i<num ;i++){
        cin >> numbers[i];
    }
    for(i=0;i<num;i++){
        if(numbers[i]%2 == 0)
            cout << numbers[i] << " is even" << endl;
       else
            cout << numbers[i] << " is odd" << endl;
    }


    return 0;
}
