#include <iostream>

using namespace std;

int main()
{
    int H,M;
    cin >> H >> M;
    M+=H*60;
    if (M<45)
        M= M+ 24*60 -45;
    else
        M-=45;
    H= M/60;
    M = M%60;

    cout << H << " " << M << endl;







    return 0;
}
