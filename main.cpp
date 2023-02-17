#include <iostream>
#include <chrono>
#include "sorts.hpp"
#include "arraywork.hpp"
#include "statarray.hpp"
#include "testsorts.hpp"


int main(){
//	std::chrono::time_point<std::chrono::high_resolution_clock> start;
//	start = std::chrono::high_resolution_clock::now();
	std::cout << "time\tbubbleSort\tselectionSort\tcountSort\tinsertionSort\tquickSort\tmergeSort" << std::endl;
	testTime();

//	std::chrono::time_point<std::chrono::high_resolution_clock> end;
//	end = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double> diff = end - start;
//	std::cout << diff.count() << std::endl;
	return 0;

}
