#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string word;

	cout<<"Type \n";
	getline(cin,word);

	
	for(int i=0;i<sizeof(word);i++){
		
		if(word[i]>=65&&word[i]<=90){ ///////Upper
			word[i]=word[i]+32;
		}
		else if(97<=word[i]&&word[i]<=122){/////Lower
			word[i]=word[i]-32;
		}

		cout<<word[i];
	
	}
	
	return 0;
}
