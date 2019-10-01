#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

    int n;
    cin >>n;
    int previous =0, currentMumble =0, curr;
    int total =0, expectedTot =0;
    string input;
    for(int i=0; i<n; i++){
        cin >> input;
        if(input != "mumble"){
            curr = atoi(input.c_str());
        }
        else{
            currentMumble += 1;
            curr = previous + 1;
        }

        total+=curr;
        previous = curr;
    }

    for(int i=1; i<=n; i++)
        expectedTot += i;

    if(total == expectedTot)
        cout << "makes sense";
    else
        cout << "something is fishy";

    return 0;
}
