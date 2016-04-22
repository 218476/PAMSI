#ifndef TIMER_H
#define TIMER_H

#include <sys/timeb.h>

// Klasa sluzaca do pomiaru czasu w ms.
class Timer
{
private:
	 timeb t_start;
	 float value;
public:
	void Start();
	void Stop ();
	float Show();
	Timer     ();
};


#endif
