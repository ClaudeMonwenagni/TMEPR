//============================================================================
// Name        : TME0.cpp
// Author      : Claude MONWENAGNI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define Affiche(x) cout <<x<< endl;
using namespace std;

int main() {
	int const taille(10);
	int tab[taille];

	//===========Question 4=============================================================
	/*cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


	for(int i = 0; i<10; i++)
	{
		tab[i] = i;
	}


	for(int i = 0; i<10; i++)
	{
		//cout <<tab[i]<< endl;
		Affiche(tab[i]);
	}*/

	//============Question 5================================================================
	for (size_t i=9; i >= 0 ; i--) {
	if (tab[i] - tab[i-1] != 1) {

	cout << "probleme !";
	}
	}
	return 0;
}
