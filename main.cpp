#include <iostream>
#include <chrono>
#include "sorts.hpp"
#include "arraywork.hpp"
#include "statarray.hpp"
#include "testsorts.hpp"


int main(){
	кажется уже писал... комментированный код в репозитории плохо!!!

//	std::chrono::time_point<std::chrono::high_resolution_clock> start;
//	start = std::chrono::high_resolution_clock::now();
	std::cout << "time\tbubbleSort\tselectionSort\tcountSort\tinsertionSort\tquickSort\tmergeSort" << std::endl;
	testTime();	-- очень хорошо что всё поместил сюда!, но логика работы не прослеживается, поэтому лучше всё таки писать основные функции, которые исполняются здесь, а вот if и прочие конструкции стараться прятать в функции
//	std::chrono::time_point<std::chrono::high_resolution_clock> end;
//	end = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double> diff = end - start;
//	std::cout << diff.count() << std::endl;
	return 0;

}
