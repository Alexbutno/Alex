#include "mathFunctions.h"
#include <iostream>


using namespace calculator;

double calculator::sqrt(const double number) {
	if (number < 0) {
		throw "Mistake";
	}
	return pow(number, 0.5);
};

double calculator::rt(const double number, const int deg) {
	if (deg % 2 == 0 && number < 0) {
		throw "Mistake";
	}
	return pow(number, static_cast<double>(1) / deg);
};

double calculator::logarithm(const double number, const double base) {
	return (log(number) / log(base));
};

double calculator::reciprocalFunction(const double number) {
	return (static_cast<double>(1) / number);
};

long long calculator::factorial(const long long number) {
	if (number < 0) {
		throw "Mistake";
	}
	else {
		return (number <= 1) ? 1 : number * calculator::factorial(number - 1);
	}
}
double calculator::module(const double a){
	if(a >= 0)
		return a;
	else
	return -a;
}
double calculator::sinus(double degree){
	double temp = degree;
	while (module(temp) >= 180) {
		temp = module(temp) - 180;
	}
	double rad = temp * 3.1415926 / 180;
	double res = 0;
	for (int i = 0; i <= 20; i++) {            // но есть проблема со знаком после (-180,180)
		res += (pow(-1, i) * pow(rad, 2 * i + 1)) / factorial(2 * i + 1);
	}
	
	return res;
}
double calculator::cosinus(double degree){
	double temp = degree;
	while (module(temp) >= 180)               // но есть проблема со знаком после (-180,180)
		temp = module(temp) - 180;
	double rad = temp * 3.1415926 / 180;                                     
	double res = 0;
	for (int i = 0; i <= 20; i++) {
		res += (pow(-1, i) * pow(rad, 2 * i + 1)) / factorial(2 * i + 1);
	}
	return res;
}
