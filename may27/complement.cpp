#include <fstream>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // int n, new_name, mask, complement;
    int n, new_name, mask, complement;
    if(n == 0){return 1;}
    // cin>>n; for local not for the leetcode
    new_name = log2(n) + 1;
    mask = (1 << new_name) - 1;
    complement = (~n) & mask;
    return complement;
    // cout << new_name;
}
