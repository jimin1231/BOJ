#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int v;
    cin >> v;
    cout << count(a.begin(), a.end(), v) << endl;
}