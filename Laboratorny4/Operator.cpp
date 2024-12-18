#include "Operator.h"



Household::Household() {};
Household::Household(String^ n, int t) : name(n), SellofElectric(t), SellofWater(0) { };
Household::Household(String^ n, int t, int traf) : name(n), SellofElectric(t), SellofWater(traf) { };
void Household::changeInformation(String^ newName, int newSellofElectric, int newSellofWater) {
	name = newName;
	SellofElectric = newSellofElectric;
	SellofWater = newSellofWater;
}

