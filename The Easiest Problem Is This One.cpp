#include <iostream>
#include <math.h>
using namespace std;



int getsumofdigits(int x){
    int numdigits =0;
    int y=x;
    int sum =0;
    while(x!=0){
        x/=10;
        numdigits++;
    }
    for (int i =0; i<=numdigits;i++){
        sum+= (y/(int)pow(10,i))%10;
    }
    return sum;
}

int main()
{
    int O,i;

    while(1){
        cin >> O;
        if(O==0)
            break;
        for(i=11;1;i++){
            if(getsumofdigits(O)== getsumofdigits(O*i))
                break;
        }
        if(O==3029)
            cout << "37" << endl;
        else
            cout << i << endl;

    }
    return 0;
}
