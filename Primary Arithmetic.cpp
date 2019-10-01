#include <iostream>

using namespace std;

int main()
{
    unsigned long long int num1;
    unsigned long long int num2;
    int carry =0;
    int total;
    bool test;
    while(1){
        cin >> num1 >> num2;
        total =0;
        if(num1 ==0 && num2 ==0)
            break;
        carry =0;
        for(int i=0; i<12; i++){
            if((num1%10 + num2%10 + carry) >=10){
                carry = (num1%10 + num2%10 + carry)/10;
                total +=1;
            }
            else 
                carry =0;
            num1/=10;
            num2/=10;

        }


        if(total ==0)
            cout << "No carry operation." << endl;
        else if(total == 1)
            cout << "1 carry operation." << endl;
        else
            cout << total <<  " carry operations." << endl;

    }
        return 0;
}
