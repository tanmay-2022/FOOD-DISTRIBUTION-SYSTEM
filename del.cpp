#include <iostream>
using namespace std;

int main() {
	int testcases;
	cin>>testcases;
	
	while(testcases--){
	    int p;
	    cin>>p;
	    
	    if(p%100 + p/100 >10){
	        cout<<-1<<endl;
	    }else{
	        cout<<p%100+p/100<<endl;
	    }
	    
	}
	return 0;
}
