#include <iostream>
#include <vector>
using namespace std;

int n,k;

int main() {
    cin >> n;
    cin >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i]; 
    }
    int cutoff = a[k-1];
    int count =0;

    for(int i=0; i<n; i++) {
        if(a[i] >= cutoff && a[i]>0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}