#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string upper(string word1){
	for(int i=0;i<word1.length();i++){
		word1[i]=toupper(word1[i]);
		//word1[i]=tolower(word1[i]);
	}
	return word1;
}

int main(int argc, char** argv) {
	
	string word;
	cout<<"Type \n";
	getline(cin,word);
	cout<<upper(word);
	
	
	
	
	return 0;
}
