#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int num;
  cin >> num;
  double passwords[num];
  double output = 0;
  string password = "";
  double percent;
  
  for(int i=0; i<num; i++)
    {
      cin >> password;
      cin >> percent;
      passwords[i]= percent;     
  }
  
  sort(passwords, passwords+num);
  int j =1;
  for(int i=num-1; i>=0; i--){
    output += j * passwords[i];
    j++;
   }

  if(num == 1)
    cout << 1 << endl;
  else
    printf("%.5f",output);
  
  return 0;
}
