#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int target; cin >> target;
    string multiples[4] = {"trash","single ","double ","triple "};
    int i,j,k,a,b,c;

    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            for(c=1;c<4;c++){
                for(k=0;k<21;k++){
                    for(j=0;j<21;j++){
                        for(i=0;i<21;i++){
                            if(i*c+j*b+k*a == target){
                                if(b==0)
                                    cout << multiples[c] << i << endl;
                                else{
                                    if(a==0){
                                        cout << multiples[c] << i << endl;
                                        cout << multiples[b] << j << endl;
                                    }
                                    else{
                                        cout << multiples[c] << i << endl;
                                        cout << multiples[b] << j << endl;
                                        cout << multiples[a] << k << endl;
                                    }
                                }
                                    return 0;
                            }

                        }
                    }
                }
            }
        }
    }

    cout << "impossible" << endl;
    return 0;
}
