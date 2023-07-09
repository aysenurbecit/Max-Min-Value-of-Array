/**
* \brief bu program kullanýcýdan dilediði kadar sayý alýr ve bunlarý diziye atayýp max-min deðerlerini bulur.
*/
#include <iostream>
using namespace std;
/**
* \brief bu fonksiyon dizideki en büyük elemaný bulur.
* \param array: iþlem yapýlacak dizi
* \param size: dizinin boyutu
* \return en büyük sayý
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
* \brief bu fonksiyon dizideki en küçük elemaný bulur.
* \param array: iþlem yapýlacak dizi
* \param size: dizinin boyutu
* \return en küçük sayý
*/
int MinNumber(const int* array, int size) {
    int minNumber = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < minNumber)
            minNumber = array[i];
    }
    return minNumber;
}
// fonksiyon tanýmlamalarý
int MaxNumber(const int* array, int size);
int MinNumber(const int* array, int size);


int main() {
    int process;
    //dizi boyutu alýnýr
	int maxSize;
    cout << "Enter the size of the array: ";
    cin >> maxSize;

    int* array = new int[maxSize]; //belleði verimli kullanmak ve kullanýcýyý kýsýtlamamak adýna new anahtar kelimesiyle bir diziye iþaret edildi.
    
    //dizi elemanlarý alýnýr
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < maxSize; i++) {
        cin >> array[i]; //enter tuþu ile iþlemi devam ettirin
    }
    //yapýlmak istenen iþlem seçilir
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

    delete[] array; // bellek aþýmýný önlemek için ilgili yeri serbest býraktýk.

	return 0;
}
