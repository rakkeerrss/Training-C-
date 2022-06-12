#include <iostream>
#include <cmath> // для функции fabs()
 
// Возвращаем true, если разница между a и b в пределах процента эпсилона 
bool approximatelyEqual(double a, double b, double epsilon)
{
	return fabs(a - b) <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}
 
int main()
{
	// Значение a очень близко к 1.0, но, из-за ошибок округления, чуть меньше 1.0
	double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
 
	// Во-первых, давайте сравним значение a (почти 1.0) с 1.0
	std::cout << approximatelyEqual(a, 1.0, 1e-8) << "\n";
 
	// Во-вторых, давайте сравним значение a - 1.0 (почти 0.0) с 0.0
	std::cout << approximatelyEqual(a - 1.0, 0.0, 1e-8) << "\n";
}