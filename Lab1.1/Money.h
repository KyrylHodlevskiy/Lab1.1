#pragma once
class Money
{
	int first, second;
public:
	bool Init(int, int);
	void Read();
	void Display() const;
	double summa() const;

};