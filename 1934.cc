#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int get_gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}

int get_lcm(int a, int b, int c){
    return a*b/c;
}

int main(){
    int T;
    cin >> T;
    
    while(T--){
        int a, b;
        cin >> a >> b;
        
        int gcd = get_gcd(a,b);
        int lcm = get_lcm(a,b,gcd);
        
        cout << lcm << '\n';
    }
}