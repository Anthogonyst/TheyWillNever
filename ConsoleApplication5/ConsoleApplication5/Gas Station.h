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

	// Adds gas to main tank
	static void fill_tank(double);

	// Returns total gas in main tank
	static double show_tank();

	// Refills tank when it runs out automatically
	static void refill_tank();

	// Logs activity to a personal file
	static void log();

private:
	double cost;
	double gallons;
	double bill;
	double revenue;
	static double tank;
	static string logname[20];
};
