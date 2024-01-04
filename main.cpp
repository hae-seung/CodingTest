#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Car {
private:
	int gasolineGauge;
public:
	Car(int n) : gasolineGauge(n) {}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(int n, int k) : Car(n), electricGauge(k) {}
	int GetElecGauge()
	{
		return electricGauge;
	}
};


class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar(int i, int j, int k) : HybridCar(i, j), waterGauge(k) {}
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°:" << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®:" << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®:" << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar Tesla(10, 20, 30);
	Tesla.ShowCurrentGauge();

	return 0;
};