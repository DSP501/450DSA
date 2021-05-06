//	Write a C function to return minimum and maximum in an array. 
//	Your program should make the minimum number of comparisons. 


#include<bits/stdc++.h>
using namespace std;

pair<int, int> getMinMax(vector<int> v, pair<int, int> p) {
    // p.first --> Large ele
    // p.second --> Small ele
    
    p.first = v.front();
    p.second = v.front();
    
    if(v.size() == 1) {
        
        return p;
    }
    
    for(auto it : v){
        if(it > p.first) 
            p.first = it;
        if(it < p.second)
            p.second = it;
    }
    
    return p;
}



int main() {
	pair<int, int>p, q ;
	vector<int>v;
	int n, i=0,data;
	cin >> n;
	while(i!=n){
	    cin >> data;
	    v.push_back(data);
	    i++;
	}
	q = getMinMax(v, p);
	cout << q.first << "\t" << q.second;
}
