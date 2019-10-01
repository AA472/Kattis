#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char A[500];
    char B[500];
    int i,j;

    for(j=0;j<n;j++){
        cin >> A >> B;
        cout << A << endl;
        cout << B << endl;
        for(i=0;i<strlen(A);i++){
            if(A[i]==B[i])
                cout <<".";
            else
                cout << "*";
        }
        cout << endl << endl;
    }
    return 0;
}
