//	Write a program to reverse an array or string
//	Expected Time Complexity: O(|S|).
//	Expected Auxiliary Space: O(1).
//	Constraints:
//	1 <= |s| <= 10000


#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    
    int i = 0, j = str.length() -1;
    while(i < j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << reverseWord(s)<<endl;
	}
}



