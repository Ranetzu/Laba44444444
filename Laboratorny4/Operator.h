#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace System;
using namespace System::Collections::Generic;


public ref class Household
{
private:
	String^ name;
	int SellofElectric;
	int SellofWater;


public:
	Household();
	Household(String^, int t);
	Household(String^ n, int t, int traf);
	~Household() { ; }

	
	property double SummaDolga {
			double get() {	
				return SellofElectric + SellofWater;
			}
	}

	property int sellOfWater {
		int get() { return SellofWater; }
		void set(int n) {SellofWater = n; }
	}
	
	property int sellofElectric {
		int get() { return SellofElectric; }
		void set(int n) { SellofElectric = n; }
	}
	property String^ Name {
		String^ get() { return name; }
		void set(String^ n) { name = n; }
	}
	
	void changeInformation(String^ newName, int newSellofElectric, int newSellofWater);
};



