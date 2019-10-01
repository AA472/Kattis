#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    int N,M;
    int mostcommon[1000];
    cin >> N;
    cin >> M;

    int difference = N-M;
    difference = abs(difference);
    int bigger;
    if(N>M)
        bigger = N;
    else
        bigger = M;

    for(int i= bigger - (difference - 1); i<= bigger + 1; i++)
        cout << i << endl;




    return 0;
}
