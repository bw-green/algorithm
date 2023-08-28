#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int last=0;
		int pos=0,neg=0;
		int first;
		cin>>first;
		last=first;
		n--;
		while(n--){
			long long int temp;
			cin>>temp;
			if(last<=0){
				if(temp<=0){
					last+=temp;
				}
				else{
					if(last+temp>0){
						last+=temp;
					}else{
						last=temp;
						neg++;
					}
				}
			}
			else{
				if(temp>0){
					last=temp;
					pos++;
				}else{
					if(last+temp>0){
						last+=temp;
					}else{
						last=temp;
						pos++;
					}
				}
			}
		}
		if(last<=0)neg++;
		else if(last>0) pos++;
		if(pos>neg)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}