#include "statarray.hpp"

using namespace std;

я бы все эти функции поместил бы в arraywork

int getMinEl(int* ar, int size){
	функция работает верно но можно чуть короче...
		к примеру так
		int indMin = ar[0];
		for (int i = 1; i < size; i++) {
			indMin = ar[i] < ar[indMin] ? i : indMin;	
		}

		return 0;

        int res = ar[0];
        int ind = 0;
        for(int i = 0; i < size; i++){
                if(ar[i] < res){
                        res = ar[i];
                        ind = i;
                }
        }
        return ind;
}

аналогично и для этой функции...
как-то было задание написать рекурсивный поиск максимума и минимума....
там использовалось два указателя!
можно и здесь так же попробовать даже без рекурсии...

надо будет проверить эту функцию!!!
int getMaxEl(int* ar, int size){
	int left = 0;
	int right = size - 1;
	while (left < right) {
		if (ar[left] < ar[right]) {
			right--;
			continue;
		}
		left++;
	}
	return left;
}

        int res = ar[0];
        int ind = 0;
        for(int i = 0; i < size; i++){
                if(ar[i] > res){
                        res = ar[i];
                        ind = i;
                }
        }
        return ind;
}

int typeSort(int* ar, int size){
        int count = 0;
        for (int i = 0; i < (size - 1); i++){
                if (ar[i] < ar[i+1]){
                        count += 1;
                }
                if (ar[i] > ar[i+1]){
                        count += 2;
                }
        }
        if (count == size-1){
                return 1;
        }
        if (count == (size-1) * 2){
                return 2;
        }
        return 0;
}

