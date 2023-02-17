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
	{
		int size = 0;
		int min = 100;
		int max = 500;
		int step = 100;
		while (size < max/min){
			if Bubble == true{	
				int* ar = new int[step*(size+1)];
				randomFill(ar, size * 100 + step, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				bubbleSort(ar, size * 100 + step);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << size * 100 << '\t' << diff.count() << '\t' << std::endl;
				if (diff.count() > 60){
					Bubble = false;
					break;
				}	
			}

			if Selection == true{	
				int* ar = new int[step*(size+1)];
				randomFill(ar, size * 100 + step, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				selectionSort(ar, size * 100 + step);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << size * 100 << '\t' << diff.count() << '\t' << std::endl;
				if (diff.count() > 60){
					Selection = false;
					break;
				}	
			}

			if Count == true{	
				int* ar = new int[step*(size+1)];
				randomFill(ar, size * 100 + step, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				quickSort(ar, size * 100 + step);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << size * 100 << '\t' << diff.count() << '\t' << std::endl;
				if (diff.count() > 60){
					Count = false;
					break;
				}	
			}

			if Insertion == true{	
				int* ar = new int[step*(size+1)];
				randomFill(ar, size * 100 + step, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				insertionSort(ar, size * 100 + step);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << size * 100 << '\t' << diff.count() << '\t' << std::endl;
				if (diff.count() > 60){
					Insertion = false;
					break;
				}	
			}

			if Quick == true{	
				int* ar = new int[step*(size+1)];
				randomFill(ar, size * 100 + step, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				quickSort(ar, size * 100 + step);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << size * 100 << '\t' << diff.count() << '\t' << std::endl;
				if (diff.count() > 60){
					Quick = false;
					break;
				}	
			}

			if Merge == true{	
				int* ar = new int[step*(size+1)];
				randomFill(ar, size * 100 + step, minel, maxel);

				std::chrono::time_point<std::chrono::high_resolution_clock> start;
				start = std::chrono::high_resolution_clock::now();

				mergeSort(ar, size * 100 + step);
				delete [] ar;
			
			        std::chrono::time_point<std::chrono::high_resolution_clock> end;
        			end = std::chrono::high_resolution_clock::now();
        			std::chrono::duration<double> diff = end - start;
        			std::cout << size * 100 << '\t' << diff.count() << '\t' << std::endl;
				if (diff.count() > 60){
					Merge = false;
					break;
				}	
			}

		}
	}

	if (flag == true){
	{
                int size = 0;
                int min = 500;
                int max = 1000;
                int step = 250;
                while (size < max/min){
                        int* ar = new int[step*(size+2)];
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        start = std::chrono::high_resolution_clock::now();

                        randomFill(ar, size * 100 + step, minel, maxel);
                        bubbleSort(ar, size * 100 + step);
                        delete [] ar;
                        size++;

                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double> diff = end - start;
                        std::cout << (size+1) * 250 << '\t' << diff.count() << '\t' << std::endl;
			if (diff.count() > 60){
                                flag = false;
				break;
                        }
		}
        }
	}
	if (flag == true){
	{
                int size = 0;
                int min = 1000;
                int max = 10000;
                int step = 1000;
                while (size < max/min){
                        int* ar = new int[step*(size+1)];
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        start = std::chrono::high_resolution_clock::now();

                        randomFill(ar, size * 100 + step, minel, maxel);
                        bubbleSort(ar, size * 100 + step);
                        delete [] ar;
                        size++;

                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double> diff = end - start;
                        std::cout << (size) * 1000 << '\t' << diff.count() << '\t' << std::endl;
			if (diff.count() > 60){
                                flag = false;
				break;
                        }

                }
        }
	}
	if (flag == true){
	{
                int size = 0;
                int min = 10000;
                int max = 100000;
                int step = 5000;
                while (size < (max-min)/step){
                        int* ar = new int[step*(size+2)];
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        start = std::chrono::high_resolution_clock::now();

                        randomFill(ar, size * 100 + step, minel, maxel);
                        bubbleSort(ar, size * 100 + step);
                        delete [] ar;
                        size++;

                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double> diff = end - start;
                        std::cout << (size+1) * step << '\t' << diff.count() << '\t' << std::endl;
                        if (diff.count() > 60){
                                flag = false;
				break;
                        }

		}
        }
	}
	if (flag == true){
	{
                int size = 0;
                int min = 100000;
                int max = 200000;
                int step = 10000;
                while (size < (max-min)/step){
                        int* ar = new int[step*(size+10)];
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        start = std::chrono::high_resolution_clock::now();

                        randomFill(ar, size * 100 + step, minel, maxel);
                        bubbleSort(ar, size * 100 + step);
                        delete [] ar;
                        size++;

                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double> diff = end - start;
                        std::cout << (size+9) * step << '\t' << diff.count() << '\t' << std::endl;
                        if (diff.count() > 60){
                                flag = false;
				break;
                        }
		}
        }
	}
	if (flag == true){
	{
                int size = 0;
                int min = 200000;
                int max = 1000000;
                int step = 100000;
                while (size < (max-min)/step){
                        int* ar = new int[step*(size+2)];
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        start = std::chrono::high_resolution_clock::now();

                        randomFill(ar, size * 100 + step, minel, maxel);
                        bubbleSort(ar, size * 100 + step);
                        delete [] ar;
                        size++;

                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double> diff = end - start;
                        std::cout << (size+1) * step << '\t' << diff.count() << '\t' << std::endl;
			if (diff.count() > 60){
                                flag = false;
				break;
                        }

		}
        }
	}
	if (flag == true){
	{
                int size = 0;
                int min = 1000000;
                int max = 10000000;
                int step = 1000000;
                while (size < max/min){
                        int* ar = new int[step*(size+1)];
                        std::chrono::time_point<std::chrono::high_resolution_clock> start;
                        start = std::chrono::high_resolution_clock::now();

                        randomFill(ar, size * 100 + step, minel, maxel);
                        bubbleSort(ar, size * 100 + step);
                        delete [] ar;
                        size++;

                        std::chrono::time_point<std::chrono::high_resolution_clock> end;
                        end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double> diff = end - start;
                        std::cout << size * step << '\t' << diff.count() << '\t' << std::endl;
			if (diff.count() > 60){
                                flag = false;
				break;
                        }

		}
        }
	}
}
