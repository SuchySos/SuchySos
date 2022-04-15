#include <iostream>
#include <Windows.h>

using namespace std;

bool isNr(string str) {
	for (int i = 0; i < str.length(); i++)
    	if (isdigit(str[i]) == false)
        return false;
    return true;
}

int main(){
	
	bool R = true;
	
	while(R){
		
		string menu;
		
		cout << "To process application type <RUN>" << endl;
		cout << "To exit type <QUIT>" << endl;
		getline(cin, menu);
		
		
		if(menu == "RUN"){
			
			system("cls");
			string mfancestr;
			int mfance;
			int resoults[1];
			int Square = 0;
			int SquareCompare;
			int a = 1;
			int b;
			
			cout << "How many meters of fence is available" << endl;
			cin >> mfancestr;
			
			if(isNr(mfancestr)){
				
				mfance = stoi(mfancestr);
				b = mfance - (2*a);
				
				while(b >= 1){
				
					SquareCompare = a * b;
					
					if(SquareCompare > Square){
						Square = SquareCompare;
						resoults[0] = a;
						resoults[1] = b;
					}
					a ++;
					b = mfance - (2*a);
				}
				
				cout << "The largest number of square meters will be given by the combination of a=" << resoults[0] << " and b=" << resoults[1] << endl;
				cout << "The maximum number of square meters is " << Square << endl;
				
			} else{
				system("cls");
				cout << "Input is not a number" << endl;
			}
			
		} else if(menu == "QUIT"){
			R = false;
			
		} else if(menu != "RUN" || "QUIT"){
			system("cls");
			cout << "Wrong order" << endl;
		}
	}	
	return 0;
}