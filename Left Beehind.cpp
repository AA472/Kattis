#include <iostream>

using namespace std;

int main()
{

    int x,y;
    while(1)
    {
        cin >> x >> y;
        if(x==0 && y==0)
            break;

        if(x + y == 13)
            cout << "Never speak again." << endl;
        else if(x == y)
            cout << "Undecided." << endl;
        else{
            if(x > y)
                cout << "To the convention." << endl;
            if(x < y)
                cout << "Left beehind." << endl;
        }
    }
    return 0;
}
