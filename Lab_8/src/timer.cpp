#include "../inc/timer.h"

// Uruchamia pomiar czasu
void Timer::Start()
{
	ftime(&t_start);
}

// Zapisuje Wartosc stopera
void Timer::Stop()
{

	timeb t_now;
	ftime(&t_now);
	value = (float)(t_now.time - t_start.time) * 1000.0f + (float)(t_now.millitm - t_start.millitm);
}
// Zwraca czas od ostatniego wywolania funkcji Start()
float Timer::Show()
{
    return value;
}


Timer::Timer()
{
	Start();
}
