#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i =0; i<n; i++) {
	    cin >> a[i];
	}
	
	int i = 0, j = 0;
    
    for(i; i<n; i++) {
        if(a[i] < 0)
            if(i != j) {
                swap(a[i], a[j]);
                j++;
            }
    }
	
	for(int i = 0; i<n; i++)
	    cout << a[i] << "  ";
}
