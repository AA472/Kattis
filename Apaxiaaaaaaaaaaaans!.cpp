#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char input[251];
    char output[251];
    cin >> input ;
    char a[2];
    a[1] = '\0';
    output[0] = input[0];
    output[1] = '\0';
    int i;
    for (i=1;i<strlen(input);i++){
        if(input[i]!=input[i-1]){
            a[0] = input[i];

            strcat(output,a);
        }
    }
    cout << output <<endl;


    return 0;
}
