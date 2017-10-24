// April Shin
// CSIS 137 Wed Night Class
// Homework Three
// Partnering with Jonah Moon

#pragma once
#define FEETINCHES_H
#include <string>
using namespace std;

class FeetInches
{
	friend ostream& operator<<(ostream&, const FeetInches&);
	friend istream& operator>>(istream&, FeetInches&);

private:
	double feet;
	double inches;
	void simplify(double, double);

public:

	FeetInches();
	FeetInches(double,double);
	void setFeet(double);
	void setInches(double);
	double getFeet() const;
	double getInches() const;
	double decConversion();
	void printDecConversion();
	FeetInches operator+(const FeetInches&) const;
	FeetInches operator-(const FeetInches&) const;
	bool operator==(const FeetInches&) const;
	bool operator!=(const FeetInches&) const;
	bool operator<(const FeetInches&) const;
	bool operator>(const FeetInches&) const;
	bool operator<=(const FeetInches&) const;
	bool operator>=(const FeetInches&) const;

};