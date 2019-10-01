#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int W,H,N;
    cin >> N >> W >> H;
    int matches [N];
    int i;
    int capacity = sqrt(W*W + H*H);
    for (int i=0;i<N;i++){
        cin>>matches[i];
        if(matches[i]<=capacity)
            cout << "DA" <<endl;
        else
            cout << "NE" <<endl;
    }






    return 0;
}
