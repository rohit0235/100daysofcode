#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num; 
     
     while (num--){
		  int n;
		  cin>>n;

		  vector<long long >s(n,0);

          for(long long i=0;i<n;i++){
			 cin>>s[i];
		  }
		  int c=0;
		  long long result=0;
          long long number =s[0];
		  long long same =0;
		  long long hf=s[0];
          for(int i=0;i<n;i++){
			 hf= __gcd(hf, s[i]);
			 if (s[i]==1){
				 c++;
			 }
			 if (s[i]==number){
				same++;
			 }
		  }
        
		 if (same==n){
			 cout<<0<<endl;
		 }
         else if (hf>1) {
			 cout<<1<<endl;
		 }
		 else{
			cout<<n-c<<endl;
		 }

	 }

}
