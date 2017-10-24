// April Shin
// CSIS 137 Wed Night Class
// Homework Three
// Partnering with Jonah Moon

#include "FeetInches.h"
#include <iostream>
#include <iomanip>
using namespace std;

ostream& operator<<(ostream& output, const FeetInches& number)
{
	output << number.feet << " feet, " << number.inches << " inches";
	return output;
}

istream& operator>>(istream& input, FeetInches& number)
{
	input >> number.feet;
	input.ignore(4);
	input >> number.inches;
	return input;
}

FeetInches::FeetInches()
{
	setFeet(0);
	setInches(0);
}

FeetInches::FeetInches(double ft, double in)
{
	if (ft >= 0 && in >= 0)
	{
		simplify(ft, in);
	}

	else if (ft < 0)
	{
			setFeet(0);

			if (in < 0)
				setInches(0);
			else
				setInches(in);
	}

	else if (in < 0)
	{
		setInches(0);

		if (ft < 0)
			setFeet(0);
		else
			setFeet(ft);
	}
}

void FeetInches::simplify(double ft, double in)
{
	if (in == 12)
	{
		setFeet(ft + 1);
		setInches(0);
	}
	else
	{
		setFeet(ft);
		setInches(in);
	}
}

void FeetInches::setFeet(double ft)
{
	this->feet = ft;
}

void FeetInches::setInches(double in)
{
	this->inches = in;
}

double FeetInches::getFeet() const
{
	return feet;
}

double FeetInches::getInches() const
{
	return inches;
}

double FeetInches::decConversion()
{
	return getFeet() + getInches()/12;
}

void FeetInches::printDecConversion()
{
	cout << "Test 8: " << decConversion() << " feet" << endl;
}

FeetInches FeetInches::operator+(const FeetInches& number) const
{
	FeetInches sum;
	sum.feet = this->feet + number.feet;
	sum.feet = this->inches + number.inches;
	return sum;
}

FeetInches FeetInches::operator-(const FeetInches& number) const
{
	FeetInches difference;
	difference.feet = this->feet - number.feet;
	difference.inches = this->inches - number.inches;
	return difference;
}

bool FeetInches::operator==(const FeetInches& number) const
{
	if (this->feet == number.feet && this->inches == number.inches)
		return true;
	else
		return false;
}

bool FeetInches::operator!=(const FeetInches& number) const
{
	if (this->feet != number.feet && this->inches != number.inches)
		return true;
	else
		return false;
}

bool FeetInches::operator<(const FeetInches& number) const
{
	if (this->feet < number.feet && this->inches < number.inches)
		return true;
	else
		return false;
}

bool FeetInches::operator>(const FeetInches& number) const
{
	if (this->feet > number.feet && this->inches > number.inches)
		return true;
	else
		return false;
}

bool FeetInches::operator>=(const FeetInches& number) const
{
	if (this->feet >= number.feet && this->inches >= number.inches)
		return true;
	else
		return false;
}

bool FeetInches::operator<=(const FeetInches& number) const
{
	if (this->feet <= number.feet && this->inches <= number.inches)
		return true;
	else
		return false;
}