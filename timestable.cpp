#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
std::ofstream myfile("timestable.txt");
int main(){
	int i,j;
	for (i=1;i<11;i++){
		for (j=1;j<11;j++){
			myfile<<setw(4)<<i*j<<" ";
			
		}
		myfile<<"\n\n\n\n";
	}
	return 0;
}
