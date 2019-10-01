#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, first, second, result;
    int length, sum1 =0, sum2 =0;

    cin >> input;
    length = input.size();

    //divide
    first = input.substr(0,length/2);
    second = input.substr(length/2, length/2);

    //calculate rotation value
    for(int i=0; i< first.size(); i++){
        sum1 += first[i] - 'A';
    }
    for(int i=0; i< second.size(); i++){
        sum2 += second[i] - 'A';
    }

    sum1 = sum1 % 26;
    sum2 = sum2 % 26;
    //rotate

    for(int i=0; i< first.size(); i++){

        first[i] += sum1;
        if (first[i]> 'Z')
            first[i] -= 26;
    }



     for(int i=0; i< second.size(); i++){
       second[i] += sum2;
        if (second[i]> 'Z')
            second[i] -= 26;

    }


    //merge


    for(int i = 0; i<first.size(); i++){
        first[i] = first [i] + second[i] - 'A';
        if (first[i]> 'Z')
            first[i] -= 26;
    }

    cout << first;
    return 0;
}
