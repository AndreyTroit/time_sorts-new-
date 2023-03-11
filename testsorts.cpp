#include <iostream>
#include <chrono>
#include "testsorts.hpp"
#include "arraywork.hpp"
#include "sorts.hpp"
#include "statarray.hpp"

bool Bubble = true;
bool Selection = true;
bool Count = true;
bool Insertion = true;
bool Quick = true;
bool Merge = true;

void testTime(){
	int minel = 0;
	int maxel = 999;
	int ar[] = {};
	FILE* f;                                                                    
        f = fopen("steps.txt", "r");                                                
        for (int i = 0; i < 7; i++){                                                
          int size = 0;                                                           
          int min, max, step;                                                     
          int temp = fscanf(f, "%d\t%d\t%d\t", &step, &min, &max);
		while (size < (max-min)/step){
			int size_ar = (size + (min/step)) * step ;
			std::cout << size_ar;
			if (size_ar != 10000000){
				std::cout << '\t';
			}

			if (Bubble == true){	
				int* ar = new int[size_ar];
				randomFill(ar, size_ar, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				bubbleSort(ar, size_ar);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << diff.count() << '\t';
				if (diff.count() > 60){
					Bubble = false;
				}	
			}
			else {
				std::cout << "time_limit" << '\t';
			}

			if (Selection == true){	
				int* ar = new int[size_ar];
				randomFill(ar, size_ar, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				selectionSort(ar, size_ar);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << diff.count() << '\t';
				if (diff.count() > 60){
					Selection = false;
				}	
			}
			else {
				std::cout << "time_limit" << '\t';
			}

			if (Count == true){	
				int* ar = new int[size_ar];
				randomFill(ar, size_ar, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				countSort(ar, size_ar, minel, maxel);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << diff.count() << '\t';
				if (diff.count() > 60){
					Count = false;
				}	
			}
			else {
				std::cout << "time_limit" << '\t';
			}

			if (Insertion == true){	
				int* ar = new int[size_ar];
				randomFill(ar, size_ar, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				insertionSort(ar, size_ar);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << diff.count() << '\t';
				if (diff.count() > 60){
					Insertion = false;
				}	
			}
			else {
				std::cout << "time_limit" << '\t';
			}

			if (Quick == true){	
				int* ar = new int[size_ar];
				randomFill(ar, size_ar, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				quickSort(ar, size_ar);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << diff.count() << '\t';
				if (diff.count() > 60){
					Quick = false;
				}	
			}
			else {
				std::cout << "time_limit" << '\t';
			}

			if (Merge == true){	
				int* ar = new int[size_ar];
				randomFill(ar, size_ar, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				mergeSort(ar, size_ar);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << diff.count() << '\t';
				if (diff.count() > 60){
					Merge = false;
				}	
			}
			else {
				std::cout << "time_limit" << '\t';
			}

			size++;
			std::cout << std::endl;

		}
	}
	fclose(f);
}
