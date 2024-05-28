#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans;
    while (n!=0) {
        int digit = n % 10;
        ans = ( ans * 100 ) + digit;
        n /= 10;
    }
    cout << ans;
}
