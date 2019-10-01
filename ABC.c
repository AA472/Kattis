
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> nums;
    vector <char> letters;
    int num;
    char letter;

    cin >> num;
    nums.push_back(num);
    cin >> num;
    nums.push_back(num);
    cin >> num;
    nums.push_back(num);

    cin >> letter;
    letters.push_back(letter);
    cin >> letter;
    letters.push_back(letter);
    cin >> letter;
    letters.push_back(letter);

    sort(nums.begin(),nums.end());

    for(int i = 0; i <3; i++)
    {
        if(letters[i] == 'A')
            cout << nums[0];
        else if(letters[i] == 'B')
            cout << nums[1];
        else if(letters[i] == 'C')
            cout << nums[2];

        if(i!=2)
            cout << " ";
    }



    return 0;
}
