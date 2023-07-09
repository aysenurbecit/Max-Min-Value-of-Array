/**
* \brief bu program kullan�c�dan diledi�i kadar say� al�r ve bunlar� diziye atay�p max-min de�erlerini bulur.
*/
#include <iostream>
using namespace std;
/**
* \brief bu fonksiyon dizideki en b�y�k eleman� bulur.
* \param array: i�lem yap�lacak dizi
* \param size: dizinin boyutu
* \return en b�y�k say�
*/
int MaxNumber(const int* array, int size) {
    int maxNumber = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] > maxNumber) 
            maxNumber = array[i];
    }
    return maxNumber;
}
/**
* \brief bu fonksiyon dizideki en k���k eleman� bulur.
* \param array: i�lem yap�lacak dizi
* \param size: dizinin boyutu
* \return en k���k say�
*/
int MinNumber(const int* array, int size) {
    int minNumber = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < minNumber)
            minNumber = array[i];
    }
    return minNumber;
}
// fonksiyon tan�mlamalar�
int MaxNumber(const int* array, int size);
int MinNumber(const int* array, int size);


int main() {
    int process;
    //dizi boyutu al�n�r
	int maxSize;
    cout << "Enter the size of the array: ";
    cin >> maxSize;

    int* array = new int[maxSize]; //belle�i verimli kullanmak ve kullan�c�y� k�s�tlamamak ad�na new anahtar kelimesiyle bir diziye i�aret edildi.
    
    //dizi elemanlar� al�n�r
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < maxSize; i++) {
        cin >> array[i]; //enter tu�u ile i�lemi devam ettirin
    }
    //yap�lmak istenen i�lem se�ilir
    cout << "1: Find the maximum number " << endl << "2: Find the minimum number" << endl;
    cin >> process;
    if (process == 1) {
        cout << MaxNumber(array, maxSize);
    }
    else if (process == 2) {
        cout << MinNumber(array, maxSize);
    }
    else
        cout << "Incorrect entry!";

    delete[] array; // bellek a��m�n� �nlemek i�in ilgili yeri serbest b�rakt�k.

	return 0;
}
