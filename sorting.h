#ifndef __SORTING
#define __SORTING

#include <iostream>
#include <string>
#include "timer.h"

using namespace std;

class Sorting{
	public:
		int* arr;
		int size;
		double durasisort;
		// Constructor Sorting Object
		Sorting(int* arr, int size){
			this->arr = arr;
			this->size = size;
		}
		
		// Menampilkan Array
		void show(){
			for(int i=0; i<Sorting::size; i++){
				cout << *(arr+i) << ", ";
				if(i%10==9){
					cout<<endl;
				}
			}	
		}
		
		// Sorting array dengan Bubble Sort Logic
		void Bubble(){
			Timer timing;
			int temp;
			timing.Mulai();
			for(int i=1; i<=Sorting::size; i++){
				for(int j=0; j<Sorting::size; j++){
					if( *(arr+j) > *(arr+j+1) ){
						temp = *(arr+j);
						*(arr+j) = *(arr+j+1);
						*(arr+j+1) = temp;
					}
				}
			}
			timing.Selesai();
			this->durasisort = timing.durasiend;
		}
		
		// Sorting array dengan Quick Sort Logic
		void Selection(){
			Timer timing;
			int temp, maks;
			timing.Mulai();
			for(int i=this->size - 1; i>0; i--){
				maks = 0;
				for(int j=1; j<=i; j++){
					if( *(arr+j) > *(arr+maks)){
						maks = j;
					}
				}
				temp = *(arr+i);
				*(arr+i) = *(arr+maks);
				*(arr+maks) = temp;
			}
			timing.Selesai();
			this->durasisort = timing.durasiend;
		}
};

#endif