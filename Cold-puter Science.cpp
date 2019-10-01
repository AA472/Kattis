#include <iostream>

using namespace std;

int main()
{

    int num_temp;
    cin >> num_temp;
    int num_days_neg = 0;
    int temp;

    for(int i=1; i<= num_temp; i++){
        cin >> temp;
        if (temp<0)
            num_days_neg ++;
    }

    cout << num_days_neg<<endl;


    return 0;
}
