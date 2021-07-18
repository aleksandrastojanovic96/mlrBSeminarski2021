#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int obim_velikog_kruga;
	int poluprecnik=0, povrsina=0;
  
	cin >> obim_velikog_kruga;
	
	poluprecnik = obim_velikog_kruga/2;
	
	povrsina=4*pow(poluprecnik,2);

	cout << povrsina << endl;


	return 0;
}