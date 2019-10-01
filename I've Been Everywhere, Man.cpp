#include <iostream>

using namespace std;

int main()
{
    int k,i,n,j,p,counter=0;
    int distinct =0;
    cin >> k ;
    for(i=0;i<k;i++){
        cin >> n;
        string cities[n];
        for(j=0,distinct=0;j<n;j++){
            cin >>cities[j];
            for(p=j,counter=0;p>-1;p--){
                if(cities[j]!=cities[p])
                    counter++;
            }
            if(counter==j)
                distinct++;
        }
        cout << distinct <<endl;;
    }

    return 0;
}
