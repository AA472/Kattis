#include <iostream>

using namespace std;

int main()
{
    int num;
    while(!(cin >> num)){
        cout << "Error. Please enter a valid number." << endl;
        cin.clear();
        cin.ignore();
    }


    int i;

    for(i=1; i<= num; i++){
        cout << i << " Abracadabra" << endl;
    }

    return 0;
}
