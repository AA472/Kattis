#include <iostream>
#include<string>
#include<string.h>
#include <locale>
#include <stdio.h>
 using namespace std;

int main()
{
    double numSmall = 0;
    double numBig = 0;
    double numSymbols = 0;
    double numWhite = 0;
    int i;
    string input;
    cin >> input;
    for(i=0; i<input.length(); i++){
        if(isalpha(input[i]))
            if(isupper(input[i]))
                numBig++;
            else
                numSmall++;
        else if(input[i]== '_')
            numWhite++;
        else
            numSymbols++;
    }

    double total = numBig + numSmall +numSymbols + numWhite;

    numSmall = numSmall/total;
    numBig = numBig/total;
    numWhite = numWhite/total;
    numSymbols = numSymbols/total;

    cout << numWhite << endl << numSmall << endl << numBig << endl << numSymbols;

    return 0;
}
