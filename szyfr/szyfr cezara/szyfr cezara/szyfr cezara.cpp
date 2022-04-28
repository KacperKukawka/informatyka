// a b c d e f g h i j k l m n o p q r s t u v w x y z


#include <iostream>
#include <cstring>
using namespace std;

void funkcja(char tab[], int klucz);

int main()
{
	
	int klucz;

	cout << "podaj klucz: ";
	cin >> klucz;

	char tab[1000];
	cout << "podaj wyraz: ";
	cin >> tab;

	funkcja(tab, klucz);
	cout << tab << endl;

	funkcja(tab, -klucz);
	cout << tab << endl;
}  

	void funkcja(char tab[], int klucz) {

		int dl;
		dl = strlen(tab);			//k1
	
			if (!(klucz >= -26 && klucz <= 26)) {  //k2
				return;
			}
			if (klucz >= 0) {			//k3

				for (int i = 0; i < dl; i++) {

					if (tab[i] + klucz <= 'z') {		//k5
						tab[i] += klucz;
					}
					else {
						tab[i] = tab[i] + klucz - 26;
					}


				}
			}
			else{           //k6
					for (int i = 0; i < dl; i++) {
						
					
						if (tab[i] + klucz >= 'a') {
							tab[i] += klucz;
						}
					else {
					tab[i] = tab[i] + klucz + 26;
					}

				}
			}
		

	}
