#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
for(int a = 0; a<=30; a++){ // keeping it to a val 30 to not miss any test cases
    int ans = pow(2,a);
    if(ans == n){
        return true;
    }
  }
  return false;
}
