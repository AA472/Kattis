#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    char stuff [300];
    cin >> stuff;
    int counter =0;
    int i;

    if (stuff[0]!='P')
        counter++;
    for(i=1;i<strlen(stuff);i++){

        if(i%3==0 && (!strchr("P",stuff[i])))
            counter++;

        if(i%3==1 && (!strchr("E",stuff[i])))
            counter++;

        if(i%3==2 && (!strchr("R",stuff[i])))
            counter++;
    }
    cout << counter << endl;
    return 0;

}
