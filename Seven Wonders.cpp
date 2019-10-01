#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char input[51];
    cin >> input;
    int numT=0,numG=0,numC=0;
    int i;
    for(i=0;i<strlen(input);i++){
        if(input[i]=='T')
            numT++;
        if(input[i]=='G')
            numG++;
        if(input[i]=='C')
            numC++;
    }
    int smallest=0;
    if(numC<numG)
        smallest=numC;
    else
        smallest = numG;

    if(numT < smallest)
        smallest=numT;

    int output = numT*numT + numC*numC+numG*numG +smallest*7;
    cout << output << endl;
    return 0;
}
