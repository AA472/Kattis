#include <iostream>

using namespace std;

int main()
{
    int num_distinct=0;
    int weirdThing [10];
    int num;
    int i,j,counter;

    for(i=0;i<10;i++){
        cin >> num;
        weirdThing[i] = num %42;
        for (j=i, counter=0; j>-1;j--){
            if(weirdThing[i]!=weirdThing[j])
                counter++;
        }
        if(counter==i){
            num_distinct++;
        }
    }

    cout << num_distinct;






    return 0;
}
