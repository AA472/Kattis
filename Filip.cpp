#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

using namespace std;
int reverser(int x);
int main()
{
    int A,B;
    cin >> A >> B;
    if (reverser(A) > reverser(B)){
        cout << reverser(A) << endl;
    }
    else
        cout << reverser(B) << endl;
    return 0;
}

int reverser(int x){
    stringstream G;
    G << x%10;
    x=x/10;
    G << x%10;
    x=x/10;
    G << x;
    G >> x;
    return x;
}
