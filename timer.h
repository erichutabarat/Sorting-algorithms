#ifndef __TIMER
#define __TIMER

#include <iostream>
#include <chrono>

using namespace std;
using Clock = chrono::high_resolution_clock;
using TimePoint = chrono::time_point<Clock>;

// Deklarasi object timer
class Timer{
	public:
		TimePoint *Start = new TimePoint();
		TimePoint *End = new TimePoint();
		double durasiend;
		
	void Mulai(){
		*Start = Clock::now();
	}
	
	void Selesai(){
		*End = Clock::now();
		chrono::duration<double> durasi = *End - *Start;
		this->durasiend = durasi.count();
	}
	
};

#endif