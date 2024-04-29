#pragma once
class ControlUnit
{
	float clock;

public:
	ControlUnit(float=0);

	float getclock() const;
	void setClock(float value);
};

