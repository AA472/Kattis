#include <iostream>

using namespace std;

int main()
{
    int megaPerMonth;
    cin >> megaPerMonth;
    int num;
    cin >> num;
    int spent[num];
    int left =megaPerMonth;
    int i;
    for(i=0; i<num ;i++){
        cin >> spent[i];
        left= left + (megaPerMonth - spent[i]);
    }
    cout << left << flush;

    return 0;
}
