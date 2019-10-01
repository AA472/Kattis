#include <iostream>

using namespace std;

int main()
{
    int x,y,z,i;
    cin >> x >> y >> z;
    for(i=1; i<=z; i++){
        if(i%x==0 && i%y== 0){
            cout << "FizzBuzz" << endl;
        }
        else if(i%x==0 && i%y!=0){
            cout << "Fizz" << endl;
        }
        else if(i%y==0 && i%x!=0){
            cout << "Buzz" << endl;
        }
        else
            cout << i<<endl;
    }




    return 0;
}
