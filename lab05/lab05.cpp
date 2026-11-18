

#include <iostream>
#include <iomanip>
using namespace std;
  

//Zad 1. Napisz program, który pozwala u¿ytkownikowi na wprowadzenie do tablicy 10 liczb ca³kowitych, a
//nastêpnie wyœwietla je w odwrotnej kolejnoœci


void zadanie1() {
    int tab[10];
    cout << "WprowadŸ 10 liczb ca³kowitych: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }
    cout << "Liczby w odwrotnej kolejnosci: " << endl;
    for (int i = 9; i >= 0; i--) {
        cout << tab[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

}
//Zad 2. Napisz program, który zerowemu elementowi tablicy przypisze wartoœæ zero, a pierwszemu elementowi
//tablicy przypisze wartoœæ jeden(tab[0] = 0, tab[1] = 1), nastêpnie wyznaczy kolejne liczby Fibonacciego.Niech
//u¿ytkownik okreœli ile kolejnych liczb chce wyznaczyæ

void zadanie2() {   

    int n;
    cout << "Podaj ile liczb Fibonacciego wyznaczyc: ";
    cin >> n;

    int* tab = new int[n];
	tab[0] = 0;
    tab[1] = 1;
    for (int i = 2; i < n; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
	}
    cout << "ciag fibonacciego: " << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << ", ";
        
       
	}
    cout << endl;
    cout << endl;
    cout << endl;
   
   

   
}
//Zad 5. Napisz program, który wype³ni 10 - elementow¹ tablicê liczbami pseudolosowymi z przedzia³u od 0 do 10.
//Nastêpnie, program losuje ”szczêœliw¹ liczbê” z tego samego przedzia³u i sprawdza ile razy wylosowana liczba
//wystêpuje w tablicy

void zadanie5() {

	srand(time(NULL));
    int tab[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = rand() % 11;
        cout << " " << tab[i];
        
       
	}
    cout << endl;
    int szczesliwa = rand() % 11;
    int licznik = 0;

    for (int i = 0; i < 10; i++) {
        if (tab[i] == szczesliwa) {
            licznik++;

        }
    }
    cout << "szczesliwa: " << szczesliwa << endl;
    cout << "wystepuje " << licznik << " razy" << endl;

}
//Zad 6. Napisz program dodawania macierzy kwadratowych(wykorzystaj tablice dwuwymiarowe

void zadanie6() {
    int tab1[2][2] = {{1, 2}, {3, 4}};
	int tab2[2][2] = {{5, 6},{7, 8}};
    int tab3[2][2];
    for (int i = 0; i <2; i++){
        for (int j = 0; j < 2; j++) {
            tab3[i][j] = tab1[i][j] + tab2[i][j];
            cout << tab3[i][j] << " ";
		} cout << endl;
	}	
	
}
//Zad 7. Napisz program mno¿enia macierzy kwadratowych(wykorzystaj tablice dwuwymiarowe).

void zadanie7() {
    int tab1[2][2] = { {1, 2}, {3, 4} };
    int tab2[2][2] = { {5, 6},{7, 8} };
    int tab3[2][2];
	
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            tab3[i][j] = tab1[i][j] * tab2[i][j];
            for (int k = 0; k < 2; k++) {
                tab3[i][j] = tab1[i][k] * tab2[k][j];

               
            }
        }
			 
        }
		cout << endl;

    }



    int main() {

       /* zadanie1();*/
        /*zadanie2();
        zadanie5();*/
        /*zadanie6();*/
        zadanie7();


}
    
    





