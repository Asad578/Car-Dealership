
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;


class Dealers
{
private:
	string Dealer_Name;

public:
	Dealers()		// DEAFULT CONSTRUCTOR
	{
		Dealer_Name = " ";
	}
	virtual void Info()			// VIRTUAL FUNCTION
	{
		cout<<"\t\t------------------------\n"
			<<"\t\t|   Dealer Selection   |\n"
			<<"\t\t------------------------\n"
			<<"1: BAJWA Auto-Mart\n2: AQEEL Auto-Mart\n3: NIAZI-Puncture Mart ";
	}
	void Set_Dealer(string dealer_name)			// MUTATORS
	{
		Dealer_Name = dealer_name;
	}
	string Get_Dealer()			// ACCESSORS
	{
		return Dealer_Name;
	}

	~Dealers()			// DESTRUCTOR
	{

	}
};

class Vehicles
{
protected:

	Dealers d2;			// AGGREGATION IMPLEMENTED ||  DEALERS CLASS OBJECT ADDED IN VEHICLE CLASS

	string Vehicle;
	double Vehicle_Price;

	string Vehicle_Type;

	string Transmission;

	string Variant;
	double Variant_Price;

	string Color;

	string Extras;
	double Extras_Price;

public:
	Vehicles()			// DEAFULT CONSTRUCTOR
	{
		Vehicle = " ";
		Variant = " ";
		Extras = " ";
	}
	void Set_Dealer_Through_Vehicle_Class(string dealer_name)
	{
		d2.Set_Dealer(dealer_name);
	}
	void Set_Vehicle(string vehicle)
	{
		Vehicle = vehicle;
	}
	void Set_Vehicle_Price(double vehicle_price)
	{
		Vehicle_Price = vehicle_price;
	}
	void Set_Vehicle_Type(string vehicle_type)
	{
		Vehicle_Type = vehicle_type;
	}
	void Set_Transmission(string transmission)
	{
		Transmission = transmission;
	}
	void Set_Variant(string variant)
	{
		Variant = variant;
	}
	void Set_Variant_Price(double variant_price)
	{
		Variant_Price = variant_price;
	}
	void Set_Color(string color)
	{
		Color = color;
	}
	void Set_Extras(string extras)
	{
		Extras = extras;
	}
	void Set_Extras_Price(double extras_price)
	{
		Extras_Price = extras_price;
	}
	string Get_Dealer()
	{
		return d2.Get_Dealer();
	}
	string Get_Vehicle()
	{
		return Vehicle;
	}
	double Get_Vehicle_Price()
	{
		return Vehicle_Price;
	}
	string Get_Vehicle_Type()
	{
		return Vehicle_Type;
	}
	string Get_Transmission()
	{
		return Transmission;
	}
	string Get_Variant()
	{
		return Variant;
	}
	double Get_Variant_Price()
	{
		return Variant_Price;
	}
	string Get_Color()
	{
		return Color;
	}
	string Get_Extras()
	{
		return Extras;
	}
	double Get_Extras_Price()
	{
		return Extras_Price;
	}

	void Info()				// VIRTUAL FUNCTION
	{
		cout<<"\t------------------\n"
			<<"\t|     Sedans     |\n"
			<<"\t------------------\n"
			<<"1: Honda Civic\n2: Toyota Corolla\n3: Toyota MarkX\n\n";
		cout<<"\t------------------\n"
			<<"\t|   CrossOvers   |\n"
			<<"\t------------------\n"
			<<"4: Honda Vezel\n5: Toyota CH-R\n\n";
		cout<<"\t------------------\n"
			<<"\t|      SUVs      |\n"
			<<"\t------------------\n"
			<<"6: Toyota Land Criuser\n7: Toyota Lexux LX\n8: Toyota Fortuner\n\n";
		cout<<"\t------------------\n"
			<<"\t|    PickUps     |\n"
			<<"\t------------------\n"
			<<"9: Ford Raptor\n10:Toyota Hilux Revo\n\n";
	}

	void Display_Variants(int vehicle)			// DISPLAYS VARIANT ACCORDING TO VEHICLE SELECTED
	{
		switch(vehicle)
		{
			case 1:
			{
				cout<< "1: 1.8\n2: 1.8 Oriel\n3: 1.5 Turbo ";
				break;
			}
			case 2:
			{
				cout<< "1: Altis 1.6\n2: Altis 1.8 Grande ";
				break;
			}
			case 3:
			{
				cout<< "1: 250 G\n2: 300 G Premium ";
				break;
			}
			case 4:
			{
				cout<< "1: X Hybrid\n2: Z Hybrid ";
				break;
			}
			case 5:
			{
				cout<< "1: 1.2 Trubo\n2: 1.8 Hybrid ";
				break;
			}
			case 6:
			{
				cout<< "1: ZX\n2: AX ";
				break;
			}
			case 7:
			{
				cout<< "1: LX 470\n2: LX 570 ";
				break;
			}
			case 8:
			{
				cout<< "1: 2.7 Petrol\n2: 2.8 Sigma 4 ";
				break;
			}
			case 9:
			{
				cout<< "1: 3.5 Eco Boost\n2: 5.0 Petrol ";
				break;
			}
			case 10:
			{
				cout<< "1: G 2.8\n2: V 3.0 ";
				break;
			}
		
		}
	}
	void Display_Colors(int vehicle)			// DISPLAYS COLOR ACCORDING TO VEHICLE SELECTED
	{
		switch(vehicle)
		{
			case 1:
			{
				cout<< "1: Pearl White\n2: Midnight Black\n3: Cherry Red\n4: Navy Blue ";
				break;
			}
			case 2:
			{
				cout<< "1: Super White\n2: Graphite Grey\n3: Mistic Blue ";
				break;
			}
			case 3:
			{
				cout<< "1: Burgendy\n2: Pearl White\n3: Silky Silver ";
				break;
			}
			case 4:
			{
				cout<< "1: Racing Green\n2: Maroon\n3: Pearl Black ";
				break;
			}
			case 5:
			{
				cout<< "1: Pearl White\n2: Metallic Black ";
				break;
			}
			case 6:
			{
				cout<< "1: Satin White\n2: Jet Black ";
				break;
			}
			case 7:
			{
				cout<< "1: Super White\n2: Pearl Black ";
				break;
			}
			case 8:
			{
				cout<< "1: Super White\n2: Pearl Black\n3: Gun Metallic ";
				break;
			}
			case 9:
			{
				cout<< "1: Sapphire Blue\n2: Racing Red ";
				break;
			}
			case 10:
			{
				cout<< "1: Matte Black\n2: Nardo Grey ";
				break;
			}
		}
	}
	void Display_Extras(int vehicle)			// DISPLAYS EXTRAS ACCORDING TO VEHICLE SELECTED
	{
		switch(vehicle)
		{
			case 1:
			{
				cout<< "1: Cruise Control\n2: Alloy Rims\n3: Sun - Roof ";
				break;
			}
			case 2:
			{
				cout<< "1: Fog - Lamps\n2: Leather Seats\n3: LCDs ";
				break;
			}
			case 3:
			{
				cout<< "1: Adjustable Headlamps\n2: Rain Sensing Vipers ";
				break;
			}
			case 4:
			{
				cout<< "1: Parking Sensors\n2: Radar Cruise Control\n3: Heated Seats ";
				break;
			}
			case 5:
			{
				cout<< "1: TRD BodyKit\n2: Paddle Shifters ";
				break;
			}
			case 6:
			{
				cout<< "1: Cool Box\n2: Off - Road Pack ";
				break;
			}
			case 7:
			{
				cout<< "1: 7 - Seat Packcage\n2: Automotic Tail Gate\n3: Soft Close Doors ";
				break;
			}
			case 8:
			{
				cout<< "1: Leather Seats\n2: Tinted Windows\n3: Infotainment Display ";
				break;
			}
			case 9:
			{
				cout<< "1: Tow Package\n2: LED Roof - Light\n3: All - Terrain Tyres ";
				break;
			}
			case 10:
			{
				cout<< "1: Roof Air Intake\n2: Trunk Cover\n3: Front Bull Bar ";
				break;
			}
		}
	}

	~Vehicles()			// DESTRUCTOR
	{

	}
};


class Owner :public Vehicles			// INHERITENCE IMPLEMENTED || VEHICLES CLASS MEMBERS INHERITED IN OWNER CLASS
{
private:
	string Name;
	int Booking_ID;

public:
	Owner()			// DEAFULT CONSTRUCTOR
	{
		Name = " ";
		Booking_ID =0;
	}
	Owner(string name, int booking_id)			// PARAMETERIZED CONSTRUCTOR
	{
		Name = name;
		Booking_ID =0;
	}
	void Set_Name(string name)
	{
		Name = name;
	}
	void Set_Order_Number(int booking_id)
	{
		Booking_ID = booking_id;
	}
	void Set_Dealer_Through_Owner_Class(string dealer_name)
	{
		Set_Dealer_Through_Vehicle_Class(dealer_name);
	}
	void Set_Vehicle_Through_Owner_Class(string vehicle)
	{
		Set_Vehicle(vehicle);
	}
	void Set_Vehicle_Type_Through_Owner_Class(string vehicle_type)
	{
		Set_Vehicle_Type(vehicle_type);
	}
	void Set_Transmission_Through_Owner_Class(string transmission)
	{
		Set_Transmission(transmission);
	}
	void Set_Variant_Through_Owner_Class(string variant)
	{
		Set_Variant(variant);
	}
	void Set_Color_Through_Owner_Class(string color)
	{
		Set_Color(color);
	}
	void Set_Extras_Through_Owner_Class(string extras)
	{
		Set_Extras(extras);
	}
	string Get_Name()
	{
		return Name;
	}
	int Get_Order_Number()
	{
		return Booking_ID;
	}
	

	void Info()			// VIRTUAL FUNCTION 
	{
		cout<< "\t-------------------";
		cout<< "\n\t|  Dealer'sInfo   |\n";
		cout<< "\t-------------------";
		cout<< "\nDealer'sName :	" <<Get_Dealer();

		cout<< "\n\n\n\t------------------";
		cout<< "\n\t|  Owner'sInfo   |\n";
		cout<< "\t------------------";
		cout<< "\nOwner'sName :	" << Name;
		cout<< "\nBooking ID :	" <<Booking_ID<<endl;

		ofstream Own_file("Data.txt", ios::app);
		Own_file<<"Dealer's Name:		"<<Get_Dealer();
		Own_file<<"\n\nOwner's Name:		"<<Name;
		Own_file<<"\nBooking ID:			"<<Booking_ID;
		Own_file.close();

	}

	friend void show(Owner O);			// FRIEND FUNCTION PROTOTYPE

	~Owner()		// DESTRUCTOR
	{

	}
};

void show(Owner O)			// FRIEND FUNCTION DEFINITION
{
	cout<< "\n\n\t--------------------";
	cout<< "\n\t|  Vehicle's Info  |\n";
	cout<< "\t--------------------";
	cout<< "\nVehicle Name :		" <<O.Get_Vehicle();
	cout<< "\nVehicle Type :		" <<O.Get_Vehicle_Type();
	cout<< "\nTransmission Type :	" <<O.Get_Transmission();
	cout<< "\nVariant :		" <<O.Get_Variant();
	cout<< "\nVehicle's Color :	" <<O.Get_Color();
	cout<< "\nExtras Included :	" <<O.Get_Extras();

	ofstream Veh_file("Data.txt" , ios::app);
	Veh_file<< "\n\nVehicle Name :		" <<O.Get_Vehicle();
	Veh_file<< "\nVehicle Type :		" <<O.Get_Vehicle_Type();
	Veh_file<< "\nTransmission Type :	" <<O.Get_Transmission();
	Veh_file<< "\nVariant :			" <<O.Get_Variant();
	Veh_file<< "\nVehicle's Color :		" <<O.Get_Color();
	Veh_file<< "\nExtras Included :		" <<O.Get_Extras();
	Veh_file.close();

}


class Cost
{
private:
	double Total_Cost;
	Vehicles v2;			// COMPOSITION IMPLEMENTED || VEHICLE CLASS OBJECT ADDED IN COST CLASS

public:
	Cost()			// DEFAULT CONSTRUCTOR
	{
		Total_Cost = 0.0;
	}
	void Set_Vehicle_Price_Through_Cost_Class(double vehicle_price)
	{
		v2.Set_Vehicle_Price(vehicle_price);
	}
	void Set_Variant_Price_Through_Cost_Class(double variant_price)
	{
		v2.Set_Variant_Price(variant_price);
	}
	void Set_Extras_Price_Through_Cost_Class(double extras_price)
	{
		v2.Set_Extras_Price(extras_price);
	}
	double Get_Vehicle_Price_From_Vehicles_Class()
	{
		return v2.Get_Vehicle_Price();
	}
	double Get_Variant_Price_From_Vehicles_Class()
	{
		return v2.Get_Variant_Price();
	}
	double Get_Extras_Price_From_Vehicles_Class()
	{
		return v2.Get_Extras_Price();
	}
	void Info()			// VIRTUAL FUNCTION
	{
		cout<< "\n\n\t---------------";
		cout<< "\n\t|  Cost Info  |\n";
		cout<< "\t---------------";
		cout<< "\nVehicle's Cost :	" <<Get_Vehicle_Price_From_Vehicles_Class() << " Lakh\n";
		cout<< "Variant's Cost :	" <<Get_Variant_Price_From_Vehicles_Class() << " Lakh\n";
		cout<< "Extras Cost :		" <<Get_Extras_Price_From_Vehicles_Class() << " Lakh";

		ofstream Cost_file("Data.txt" , ios::app);
		Cost_file<< "\n\nVehicle's Cost :		" <<Get_Vehicle_Price_From_Vehicles_Class() << " Lakh\n";
		Cost_file<< "Variant's Cost :		" <<Get_Variant_Price_From_Vehicles_Class() << " Lakh\n";
		Cost_file<< "Extras Cost :		" <<Get_Extras_Price_From_Vehicles_Class() << " Lakh";
		Cost_file.close();

		Total_Cost = Get_Vehicle_Price_From_Vehicles_Class() + Get_Variant_Price_From_Vehicles_Class() + Get_Extras_Price_From_Vehicles_Class();

		if (Total_Cost< 100)			// FOR TOTAL COST LESS THAN CRORE
		{
			cout<< "\n\n--------------------------------------------";
			cout<< "\n| Total Amount = " <<Total_Cost<< " Lakh (including.gst) |\n";
			cout<< "--------------------------------------------\n\n\n";

			ofstream Ttl_file("Data.txt" , ios::app);
			Ttl_file<< "\n\n------------------------------------------";
			Ttl_file<< "\n| Total Amount = " <<Total_Cost<< " Lakh (including.gst) |\n";
			Ttl_file<< "------------------------------------------\n\n";
			Ttl_file.close();

		}
		else if (Total_Cost>= 100)			// FOR TOTAL COST GREATER THAN CRORE
		{
			Total_Cost = Total_Cost / 100;
			cout<< "\n\n----------------------------------------------";
			cout<< "\n| Total Amount = " <<Total_Cost<< " Crore (inclucinggst)   |\n";
			cout<< "----------------------------------------------\n\n\n";

			ofstream Ttl2_file("Data.txt" , ios::app);
			Ttl2_file<< "\n\n----------------------------------------------";
			Ttl2_file<< "\n| Total Amount = " <<Total_Cost<< " Crore (inclucinggst)   |\n";
			Ttl2_file<< "----------------------------------------------\n\n";
			Ttl2_file.close();

		}

		cout<< "-----------------------------------\n";
		cout<< "|Date: " << __DATE__ << "| Time: " << __TIME__ << "|\n";		// DISPLAYS CURRENT DATE AND TIME
		cout<< "-----------------------------------\n\n";

		ofstream DATE_file("Data.txt" , ios::app);
		DATE_file<< "-----------------------------------\n";
		DATE_file<< "|Date: " << __DATE__ << "| Time: " << __TIME__ << "|\n";		// DISPLAYS CURRENT DATE AND TIME
		DATE_file<< "-----------------------------------\n\n\n\n\n\n\n";
		DATE_file.close();

		_getch();
	}

	~Cost()			// DESTRUCTOR
	{

	}
};


void main()
{
	int Dealer;
	int Vehicle;
	int Transmission;
	int Variant;
	int Color;
	int Extras;
	char name[40]=" ";
	int ID;

	Dealers d1;
	Vehicles v1;
	Owner o1;
	Cost c1;

	cout<<"\t\t----------------------------\n"
		<<"\t\t|    Owner's Information   |\n"
		<<"\t\t----------------------------\n\n";
	cout<<"Owner's Name:	";
	cin.get(name,40);
	cout<<"Booking ID:	";
	cin>>ID;
	cout<<"\n\n";

	o1.Set_Name(name);
	o1.Set_Order_Number(ID);

	d1.Info();			// DISPLAYS LIST OF DEALERS

	cout<< "\n\nSelect a Dealer : ";
	cin>> Dealer;

	cout<<"\n\n";

	while (Dealer > 3 || Dealer < 1)			// FOR INPUT VALIDATION
	{
		cout<< "Invalid Input... Choose Between 1-3 " <<endl;
		cin>> Dealer;
	}
	switch(Dealer)
	{
		case 1:
		{
			o1.Set_Dealer_Through_Owner_Class("BAJWA Auto-Mart");
			break;
		}
		case 2:
		{
			o1.Set_Dealer_Through_Owner_Class("AQEEL Auto-Mart");
			break;
		}
		case 3:
		{
			o1.Set_Dealer_Through_Owner_Class("NIAZI-Puncture Mart");
			break;
		}
	}

	v1.Info();			// DISPLAYS LIST OF VEHICLES

	cout<< "\n\nSelect a Vehicle : ";
	cin>> Vehicle;

	while (Vehicle > 10 || Vehicle < 1)			
	{
		cout<< "Invalid Input... Choose Between 1-10 " <<endl;
		cin>> Vehicle;
	}

	switch(Vehicle)
	{
		case 1:
		{
			o1.Set_Vehicle_Through_Owner_Class("Honda Civic");
			o1.Set_Vehicle_Type_Through_Owner_Class("Sedan");
			c1.Set_Vehicle_Price_Through_Cost_Class(35);
			break;
		}
		case 2:
		{
			o1.Set_Vehicle_Through_Owner_Class("Toyota Corolla");
			o1.Set_Vehicle_Type_Through_Owner_Class("Sedan");
			c1.Set_Vehicle_Price_Through_Cost_Class(30);
			break;
		}
		case 3:
		{
			o1.Set_Vehicle_Through_Owner_Class("Toyota MarkX");
			o1.Set_Vehicle_Type_Through_Owner_Class("Sedan");
			c1.Set_Vehicle_Price_Through_Cost_Class(25);
			break;
		}
		case 4:
		{
			o1.Set_Vehicle_Through_Owner_Class("Honda Vezel");
			o1.Set_Vehicle_Type_Through_Owner_Class("CrossOver");
			c1.Set_Vehicle_Price_Through_Cost_Class(40);
			break;
		}
		case 5:
		{
			o1.Set_Vehicle_Through_Owner_Class("Toyota CH-R");
			o1.Set_Vehicle_Type_Through_Owner_Class("CrossOver");
			c1.Set_Vehicle_Price_Through_Cost_Class(50);
			break;
		}
		case 6:
		{
			o1.Set_Vehicle_Through_Owner_Class("Toyota Land Cruiser");
			o1.Set_Vehicle_Type_Through_Owner_Class("SUV");
			c1.Set_Vehicle_Price_Through_Cost_Class(300);
			break;
		}
		case 7:
		{
			o1.Set_Vehicle_Through_Owner_Class("Toyota Lexux LX");
			o1.Set_Vehicle_Type_Through_Owner_Class("SUV");
			c1.Set_Vehicle_Price_Through_Cost_Class(400);
			break;
		}
		case 8:
		{
			o1.Set_Vehicle_Through_Owner_Class("Toyota Fortuner");
			o1.Set_Vehicle_Type_Through_Owner_Class("SUV");
			c1.Set_Vehicle_Price_Through_Cost_Class(80);
			break;
		}
		case 9:
		{
			o1.Set_Vehicle_Through_Owner_Class("Ford Raptor");
			o1.Set_Vehicle_Type_Through_Owner_Class("PickUp");
			c1.Set_Vehicle_Price_Through_Cost_Class(100);
			break;
		}
		case 10:
		{
			o1.Set_Vehicle_Through_Owner_Class("Toyota Hilux Revo");
			o1.Set_Vehicle_Type_Through_Owner_Class("PickUp");
			c1.Set_Vehicle_Price_Through_Cost_Class(50);
			break;
		}
	}

	cout<<"\n\n-----------------------\n"
		<<"| Select Transmission |\n"
		<<"-----------------------\n"
		<<"1: Manual\n2: Auto \n";
	cin>> Transmission;

	while (Transmission > 2 || Transmission < 1)			
	{
		cout<< "Invalid Input... Choose Either 1 Or 2 " <<endl;
		cin>> Transmission;
	}
	switch(Transmission)
	{
		case 1:
		{
			o1.Set_Transmission_Through_Owner_Class("Manual");
			break;
		}
		case 2:
		{
			o1.Set_Transmission_Through_Owner_Class("Auto");
			break;
		}
	}

	cout<<"\n\n------------------------\n"
		<<"|   Select A Variant   |\n"
		<<"------------------------\n";

	v1.Display_Variants(Vehicle);			// DISPLAYS VARIANTS ACCORDING TO VEHICLE SELECTED

	switch(Vehicle)
	{
		case 1:
		{
			cin>> Variant;
			while (Variant > 3 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("1.8");
					c1.Set_Variant_Price_Through_Cost_Class(3);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("1.8 Oriel");
					c1.Set_Variant_Price_Through_Cost_Class(5);
					break;
				}
				case 3:
				{
					o1.Set_Variant_Through_Owner_Class("1.5 Turbo");
					c1.Set_Variant_Price_Through_Cost_Class(8);
					break;
				}
			}
			break;
		}

		case 2:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)	
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("Altis 1.6");
					c1.Set_Variant_Price_Through_Cost_Class(3);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("Altis 1.8 Grande");
					c1.Set_Variant_Price_Through_Cost_Class(8);
					break;
				}
			}
			break;
		}

		case 3:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("250 G");
					c1.Set_Variant_Price_Through_Cost_Class(4);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("300 G Premium");
					c1.Set_Variant_Price_Through_Cost_Class(10);
					break;
				}
			}
			break;
		}

		case 4:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("X Hybrid");
					c1.Set_Variant_Price_Through_Cost_Class(3);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("Z Hybrid");
					c1.Set_Variant_Price_Through_Cost_Class(6);
					break;
				}
			}
			break;
		}

		case 5:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("1.2 Trubo");
					c1.Set_Variant_Price_Through_Cost_Class(3);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("1.8 Hybrid");
					c1.Set_Variant_Price_Through_Cost_Class(5);
					break;
				}
			}
			break;
		}

		case 6:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("ZX");
					c1.Set_Variant_Price_Through_Cost_Class(100);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("AX");
					c1.Set_Variant_Price_Through_Cost_Class(50);
					break;
				}
			}
			break;
		}

		case 7:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
			case 1:
				{
					o1.Set_Variant_Through_Owner_Class("LX 470");
					c1.Set_Variant_Price_Through_Cost_Class(50);
					break;
				}
			case 2:
				{
					o1.Set_Variant_Through_Owner_Class("LX 570");
					c1.Set_Variant_Price_Through_Cost_Class(100);
					break;
				}
			}
			break;
		}

		case 8:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("2.7 Petrol");
					c1.Set_Variant_Price_Through_Cost_Class(5);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("2.8 Sigma 4");
					c1.Set_Variant_Price_Through_Cost_Class(9);
					break;
				}
			}
			break;
		}

		case 9:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("3.5 Eco Boost");
					c1.Set_Variant_Price_Through_Cost_Class(5);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("5.0 Petrol");
					c1.Set_Variant_Price_Through_Cost_Class(15);
					break;
				}
			}
			break;
		}

		case 10:
		{
			cin>> Variant;
			while (Variant > 2 || Variant < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Variant;
			}
			switch(Variant)
			{
				case 1:
				{
					o1.Set_Variant_Through_Owner_Class("G 2.8");
					c1.Set_Variant_Price_Through_Cost_Class(3);
					break;
				}
				case 2:
				{
					o1.Set_Variant_Through_Owner_Class("V 3.0");
					c1.Set_Variant_Price_Through_Cost_Class(8);
					break;
				}
			}
			break;
		}

	}

	cout<<"\n\n---------------------\n"
		<<"|   Select A Color  |\n"
		<<"---------------------\n";

	v1.Display_Colors(Vehicle);			// DISPLAYS COLOR ACCORDING TO VEHICLE SELECTED
	
	switch(Vehicle)
	{
		case 1:
		{
			cin>> Color;
			while (Color > 4 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-4 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Pearl White");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Midnight Black");
					break;
				}
				case 3:
				{
					o1.Set_Color_Through_Owner_Class("Cherry Red");
					break;
				}
				case 4:
				{
					o1.Set_Color_Through_Owner_Class("Navy Blue");
					break;
				}
			}
			break;
		}
		case 2:
		{
			cin>> Color;
			while (Color > 3 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Super White");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Graphite Grey");
					break;
				}
				case 3:
				{
					o1.Set_Color_Through_Owner_Class("Mistic Blue");
					break;
				}
			}
			break;
		}
		case 3:
		{
			cin>> Color;
			while (Color > 3 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Burgendy");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Pearl White");
					break;
				}
				case 3:
				{
					o1.Set_Color_Through_Owner_Class("Silky Silver");
					break;
				}
			}
			break;
		}
		case 4:
		{
			cin>> Color;
			while (Color > 3 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Racing Green");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Maroon");
					break;
				}
				case 3:
				{
					o1.Set_Color_Through_Owner_Class("Pearl Black");
					break;
				}
			}
			break;
		}
		case 5:
		{
			cin>> Color;
			while (Color > 2 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Pearl White");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Metallic Black");
					break;
				}
			}
			break;
		}
		case 6:
		{
			cin>> Color;
			while (Color > 2 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Satin White");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Jet Black");
					break;
				}
			}
			break;
		}
		case 7:
		{
			cin>> Color;
			while (Color > 2 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Super White");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Pearl Black");
					break;
				}
			}
			break;
		}
		case 8:
		{
			cin>> Color;
			while (Color > 3 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Super White");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Pearl Black");
					break;
				}
				case 3:
				{
					o1.Set_Color_Through_Owner_Class("Gun Metallic");
					break;
				}
			}
			break;
		}
		case 9:
		{
			cin>> Color;
			while (Color > 2 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Sapphire Blue");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Racing Red");
					break;
				}
			}
			break;
		}
		case 10:
		{
			cin>> Color;
			while (Color > 2 || Color < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Color;
			}
			switch(Color)
			{
				case 1:
				{
					o1.Set_Color_Through_Owner_Class("Matte Black");
					break;
				}
				case 2:
				{
					o1.Set_Color_Through_Owner_Class("Nardo Grey");
					break;
				}
			}
			break;
		}
	}

	cout<<"\n\n-------------------\n"
		<<"|  Select Extras  |\n"
		<<"-------------------\n";

	v1.Display_Extras(Vehicle);			// DISPLAYS EXTRAS ACCORDING TO VEHICLE SELECTED
	
	switch(Vehicle)
	{
		case 1:
		{
			cin>> Extras;
			while (Extras > 3 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Cruise Control");
					c1.Set_Extras_Price_Through_Cost_Class(0.6);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Alloy Rims");
					c1.Set_Extras_Price_Through_Cost_Class(0.4);
					break;
				}
				case 3:
				{
					o1.Set_Extras_Through_Owner_Class("Sun - Roof");
					c1.Set_Extras_Price_Through_Cost_Class(1.5);
					break;
				}
			}
			break;
		}

		case 2:
		{
			cin>> Extras;
			while (Extras > 3 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Fog - Lamps");
					c1.Set_Extras_Price_Through_Cost_Class(0.1);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Leather Seats");
					c1.Set_Extras_Price_Through_Cost_Class(0.3);
					break;
				}
				case 3:
				{
					o1.Set_Extras_Through_Owner_Class("LCDs");
					c1.Set_Extras_Price_Through_Cost_Class(0.2);
					break;
				}
			}
			break;
		}

		case 3:
		{
			cin>> Extras;
			while (Extras > 2 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Adjustable Headlamps");
					c1.Set_Extras_Price_Through_Cost_Class(0.4);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Rain Sensing Vipers");
					c1.Set_Extras_Price_Through_Cost_Class(0.3);
					break;
				}
			}
			break;
		}

		case 4:
		{
			cin>> Extras;
			while (Extras > 3 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Parking Sensors");
					c1.Set_Extras_Price_Through_Cost_Class(0.7);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Radar Cruise Control");
					c1.Set_Extras_Price_Through_Cost_Class(2);
					break;
				}
				case 3:
				{
					o1.Set_Extras_Through_Owner_Class("Heated Seats");
					c1.Set_Extras_Price_Through_Cost_Class(0.3);
					break;
				}
			}
			break;
		}

		case 5:
		{
			cin>> Extras;
			while (Extras > 2 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("TRD BodyKit");
					c1.Set_Extras_Price_Through_Cost_Class(0.8);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Paddle Shifters");
					c1.Set_Extras_Price_Through_Cost_Class(0.5);
					break;
				}
			}
			break;
		}

		case 6:
		{
			cin>> Extras;
			while (Extras > 2 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-2 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Cool Box");
					c1.Set_Extras_Price_Through_Cost_Class(1);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Off - Road Pack");
					c1.Set_Extras_Price_Through_Cost_Class(5);
					break;
				}
			}
			break;
		}

		case 7:
		{
			cin>> Extras;
			while (Extras > 3 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("7 - Seat Packcage");
					c1.Set_Extras_Price_Through_Cost_Class(3);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Automotic Tail Gate");
					c1.Set_Extras_Price_Through_Cost_Class(1);
					break;
				}
				case 3:
				{
					o1.Set_Extras_Through_Owner_Class("Soft Close Doors");
					c1.Set_Extras_Price_Through_Cost_Class(2);
					break;
				}
			}
			break;
		}

		case 8:
		{
			cin>> Extras;
			while (Extras > 3 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Leather Seats");
					c1.Set_Extras_Price_Through_Cost_Class(0.4);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Tinted Windows");
					c1.Set_Extras_Price_Through_Cost_Class(0.1);
					break;
				}
				case 3:
				{
					o1.Set_Extras_Through_Owner_Class("Infotainment Display");
					c1.Set_Extras_Price_Through_Cost_Class(0.3);
					break;
				}
			}
			break;
		}

		case 9:
		{
			cin>> Extras;
			while (Extras > 3 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Tow Package");
					c1.Set_Extras_Price_Through_Cost_Class(1);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("LED Roof - Light");
					c1.Set_Extras_Price_Through_Cost_Class(1);
					break;
				}
				case 3:
				{
					o1.Set_Extras_Through_Owner_Class("All - Terrain Tyres");
					c1.Set_Extras_Price_Through_Cost_Class(1);
					break;
				}
			}
			break;
		}

		case 10:
		{
			cin>> Extras;
			while (Extras > 3 || Extras < 1)			
			{
				cout<< "Invalid Input... Choose Between 1-3 " <<endl;
				cin>> Extras;
			}
			switch(Extras)
			{
				case 1:
				{
					o1.Set_Extras_Through_Owner_Class("Roof Air Intake");
					c1.Set_Extras_Price_Through_Cost_Class(0.3);
					break;
				}
				case 2:
				{
					o1.Set_Extras_Through_Owner_Class("Trunk Cover");
					c1.Set_Extras_Price_Through_Cost_Class(0.2);
					break;
				}
				case 3:
				{
					o1.Set_Extras_Through_Owner_Class("Front Bull Bar");
					c1.Set_Extras_Price_Through_Cost_Class(0.6);
					break;
				}
			}
			break;
		}
		
	}

	system("CLS");			// CLEAR SCREEN

	o1.Info();			// DISPLAYS DELAER AND OWNER INFO

	show(o1);			// DISPLAYS VEHICLE INFO

	c1.Info();			// DISPLAYS COST INFO


	cout<<"\n\n";
	system("pause");
}

