#include "./Geometry.h"
#include <iostream>
#include <stdexcept>

/*
* TODO:
*	Area and Perimeter of:
*	- Rectangle
*	- Triangle
*	- Circle
*   - Square
*   - Parallelogram
*   - Trapezoid
*   - Ellipse
*
* Volume and Surface Area of:
*	- Rectangular Prism (corresponding to Rectangle)
*	- Triangular Prism (corresponding to Triangle)
*	- Cylinder (corresponding to Circle)
*   - Cube (corresponding to Square)
*   - Parallelepiped (corresponding to Parallelogram)
*   - Trapezoidal Prism (corresponding to Trapezoid)
*   - Ellipsoid (corresponding to Ellipse)
*   - Pyramid
*	- Cone
*	- Sphere
*	- Torus
* 
* - Pythagorean Theorem
*/


const double pi = 3.14159265359;

// Area and Perimeter of:
// Rectangle
double areaRectangle(double length, double width) { return length * width;}

double perimeterRectangle(double length, double width) { return (length + width) * 2; }

// Triangle
double areaTriangle(double base, double height) { return (base * height) / 2; }

double perimeterTriangle(double side1, double side2, double side3) { return side1 + side2 + side3; }

// Circle
double areaCircle(double radius) { return pi * (radius * radius); }

double circumferenceCircle(double radius) { return 2 * pi * radius; }

// Square
double areaSquare(double side) { return side * side; }

double perimeterSquare(double side) { return side * 4; }

// Parallelogram
double areaParallelogram(double base, double height) { return base * height; }

double perimeterParallelogram(double base, double side) { return (base + side) * 2; }

// Trapezoid
double areaTrapezoid(double base1, double base2, double height) { return ((base1 + base2) / 2) * height; }

double perimeterTrapezoid(double side1, double side2, double base1, double base2) { return side1 + side2 + base1 + base2; }

// Ellipse
double areaEllipse(double majorAxis, double minorAxis) { return pi * majorAxis * minorAxis; }


// for ellipse circumference calculations
// Function for the integrand of the elliptic integral of the second kind
double integrand(double theta, double e) {
	return sqrt(1 - e * e * sin(theta) * sin(theta));
}

// Function to compute the complete elliptic integral of the second kind
double ellipticIntegral(double e) {
	double a = 0;
	double b = pi / 2;
	int n = 1000;
	double h = (b - a) / n;

	double integral = (integrand(a, e) + integrand(b, e)) / 2.0;
	for (int i = 1; i < n; ++i) {
		integral += integrand(a + i * h, e);
	}
	integral *= h;
	return integral;
}


double circumferenceEllipse(double majorAxis, double minorAxis)
{
	/*
	* note: idk what I am getting myself into [7/16/2024]
	* the exact formula is C = 4aE(e) where
	* 
	* a = length of major axis
	* b = length of minor axis
	* e = the eccentricity of the ellipse, given by e = sqrt(1 - (b^2/a^2))
	* E(e) = the complete elliptic integral of the second kind
	* 
	* the entire integral is = E(k) = integral with the upper bound of pi/2 and the lower bound of 0 multiplied by the
	* square root of 1 - k^2 * sine^2 theta d(Theta)
	*/

	double a = majorAxis;
	double b = minorAxis;
	double e = sqrt(1 - (b * b) / (a * a));

	double ellipticIntegralValue = ellipticIntegral(e);

	return 4 * a * ellipticIntegralValue;
}

// Volume and Surface Area of:
// Rectangular Prism
double volumeRectangularPrism(double length, double width, double height)
{
	return 0;
}

double surfaceAreaRectangularPrism(double length, double width, double height)
{
	return 0;
}

// Triangular Prism
double volumeTriangularPrism(double base, double height, double length)
{
	return 0;
}

double surfaceAreaTriangularPrism(double base, double height, double length)
{
	return 0;
}

// Cylinder
double volumeCylinder(double radius, double height)
{
	return 0;
}

double surfaceAreaCylinder(double radius, double height)
{
	return 0;
}

// Cube
double volumeCube(double side)
{
	return 0;
}

double surfaceAreaCube(double side)
{
	return 0;
}

// Parallelepiped
double volumeParallelepiped(double length, double width, double height)
{
	return 0;
}

double surfaceAreaParallelepiped(double length, double width, double height)
{
	return 0;
}

// Trapezoidal Prism
double volumeTrapezoidalPrism(double base1, double base2, double height, double length)
{
	return 0;
}

double surfaceAreaTrapezoidalPrism(double base1, double base2, double height, double length)
{
	return 0;
}

// Ellipsoid
double volumeEllipsoid(double majorAxis, double minorAxis, double intermediateAxis)
{
	return 0;
}

double surfaceAreaEllipsoid(double majorAxis, double minorAxis, double intermediateAxis)
{
	return 0;
}

// Pyramid
double volumePyramid(double baseArea, double height)
{
	return 0;
}

double surfaceAreaPyramid(double basePerimeter, double baseArea, double slantHeight)
{
	return 0;
}

// Cone
double volumeCone(double radius, double height)
{
	return 0;
}

double surfaceAreaCone(double radius, double slantHeight)
{
	return 0;
}

// Sphere
double volumeSphere(double radius)
{
	return 0;
}

double surfaceAreaSphere(double radius)
{
	return 0;
}

// Torus
double volumeTorus(double majorRadius, double minorRadius)
{
	return 0;
}

double surfaceAreaTorus(double majorRadius, double minorRadius)
{
	return 0;
}

// Pythagorean Theorem
double pythagoreanTheorem(double a, double b)
{
	return 0;
}

double handleGeometry()
{
	return 0;
}