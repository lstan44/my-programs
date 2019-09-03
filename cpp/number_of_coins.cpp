/* calculate how many coins needed for any amount in cents
using the us monetary system : 1c, 5c, 10c, 25c
*/


#include<iostream>
using namespace std;

int n_coins(int value){

int cents[4]={1,5,10,25};

int ncoins = 0;

int v = value;

if(v<=0){
	return 0;
}
while(v!= 0){
	if(v >= cents[3]){
		v %=cents[3];
		ncoins +=v%cents[3];
	}
	else if(v>= cents[2]){
		v %=cents[2];
		ncoins +=v%cents[2];

	}
	else if(v>= cents[1]){
		v %=cents[1];
		ncoins +=v%cents[1];

	}
	else{
		v %=cents[0];
		ncoins +=v%cents[0];

	}
}
return ncoins;
}

int main(){


int v = 90;
cout<<n_coins(v)<<endl;

	
}