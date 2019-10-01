#include <iostream>

using namespace std;

int main()
{
    int r,n;
    cin >>r >>n;
    int rooms[r];
    int theroom;
    for(int i=0; i<r; i++){
        rooms[i]= 0;
    }
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        rooms[k-1]=1;
    }
    if(r == n){
        cout << "too late" << endl;
    }
    else{
        for(int i=0;i<r;i++)
            if(rooms[i]==0){
                theroom=i+1;
                break;
    }
    cout << theroom << endl;
    }

    return 0;
}
