// FILE: newpoint.h 
// CLASS PROVIDED: point (an ADT for a point on a two-dimensional plane)
//
// CONSTRUCTOR for the point class:
//   point(double initial_x = 0.0, double initial_y = 0.0)
//     Postcondition: The point has been set to (initial_x, initial_y).
//
// MODIFICATION MEMBER FUNCTIONS for the point class:
//   void shift(double x_amount, double y_amount)
//     Postcondition: The point has been moved by x_amount along the x axis
//     and by y_amount along the y axis.
//
//   void rotate90( )
//     Postcondition: The point has been rotated clockwise 90 degrees.
//
// CONSTANT MEMBER FUNCTIONS for the point class:
//   double get_x( ) const
//     Postcondition: The value returned is the x coordinate of the point.
//
//   double get_y( ) const
//     Postcondition: The value returned is the y coordinate of the point.
//
// NONMEMBER FUNCTIONS for the point class:
//   double distance(const point& p1, const point& p2)
//     Postcondition: The value returned is the distance between p1 and p2.
//
//   point middle(const point& p1, const point& p2)
//     Postcondition: The point returned is halfway between p1 and p2.
//
//   

#ifndef MAIN_SAVITCH_NEWPOINT_H   
#define MAIN_SAVITCH_NEWPOINT_H  
#include <iostream> // Provides ostream and istream

         
    class point
    {
    public:
        // CONSTRUCTOR
        point(double initial_x = 0.0, double initial_y = 0.0);
        // MODIFICATION MEMBER FUNCTIONS
        void shift(double x_amount, double y_amount);
        void rotate90( );
        // CONSTANT MEMBER FUNCTIONS
        double get_x( ) const { return x; } 
        double get_y( ) const { return y; }
    private:
        double x, y; // x and y coordinates of this point
    };

    // NONMEMBER FUNCTIONS for the point class 
    double distance(const point& p1, const point& p2);
    point middle(const point& p1, const point& p2);
    


#endif 
