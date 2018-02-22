// Header file for Gasoline class

class Gasoline {
public:
	// Default price constructor
	Gasoline();

	// Constructor with new price
	Gasoline(double);

	// Outputs total gas dispensed into car to console
	void capacity();

	// Outputs total cost of gas in car to console
	void receipt();

	// Outputs the cost of gas per gallon to console
	void price();

	// Adjusts price of gas station
	void adjust(double);

	// Clears and resets bill data when car leaves
	void reset();

	// Pumps gas until stopped
	void pump();

	// Pumps gas until desired price is reached
	void pump(double);

	// Outputs sales revenue to console
	void sales();

private:
	double cost;
	double gallons;
	double bill;
	double revenue;
};