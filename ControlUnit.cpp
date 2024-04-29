#include "ControlUnit.h"

ControlUnit::ControlUnit(float clock) : clock(clock) {}

float ControlUnit::getclock() const
{
	return clock;
}

void ControlUnit::setClock(float value)
{
	clock = value;
}