/*
* Level_3 Exercise 2.3.2:
* Header file for Points in two dimensions
* Change Distance() function so that it passes the input point �by reference� so that no copy is made. 
* And do constructor experiments
*
* @file Point.hpp
* @author Chunyu Yuan
* @version 1.3 02/09/2021
*
*/


#ifndef Point_HPP //checks whether the Point_HPP has been defined
#define Point_HPP //define Point_HPP

#include <iostream> // Standard Input / Output Streams Library

//point Class declaration
class Point
{

	//private members
private:
	double m_x; // X coordinate
	double m_y; // Y coordinate

	//public functionality
public:
	// Constructors and destructor
	Point();								// Default constructor
	Point(double newX, double newY);		// constructor with x coordinate and y coordinate
	Point(const Point& point);                //copy Constructor
	~Point();   // Destructor

	//Selectors
	double GetX() const;					// Access the x value
	double GetY() const;					// Access the y value

	// Modifiers
	void SetX(double newX);                // Set the x value
	void SetY(double newY);                // Set the y value

	std::string ToString() const;          //ToString() that returns a string description of the point

	double DistanceOrigin() const;         // Calculate the distance to the origin (0, 0)
	//double Distance(Point p) const;        // Calculate the distance between two points
	double Distance(const Point& p) const; // The input point is changed by reference and calculate the distance between two points

	
};

#endif // end of if statement for Point_HPP