#include<iostream>
using namespace std;

class ENERGY_METER
{
	private:
		int CMR,PMR,Meter_number,Total_charges;
		float cost_per_unit,units_consumed;
	public:
		void set_data()
		{
			cout << "Enter the Meter Number : ";
			cin >> Meter_number;
			cout << "Current Month Reading : ";
			cin >> CMR;
			cout << "Previous Month Reading : ";
			cin >> PMR;
		}
		void Calculate()
		{
			units_consumed = CMR-PMR;
			if(units_consumed < 100)
			{
				cost_per_unit = 5.00;
			}
			else if(units_consumed == 100)
			{
				cost_per_unit = 7.00;
			}
			else if(units_consumed > 100)
			{
				cost_per_unit = 10.00;
			}
			
			Total_charges = units_consumed*cost_per_unit;
			
			
		}
		
		void show_data()
		{
			cout << "\nHey User, " << Meter_number << " Your total charges are " << Total_charges << "/-" << endl;
			cout << "Cost per unit is " << cost_per_unit << "/-";
		}
	
};

int main()
{
	ENERGY_METER meter1;
	meter1.set_data();
	meter1.Calculate();
	meter1.show_data();
	return 0;
}
