#pragma once
#ifndef GEOMETRY_H
#define GEOMETRY_H


// Function declarations for Area and Perimeter of:
// Rectangle
double areaRectangle(double length, double width);
double perimeterRectangle(double length, double width);

// Triangle
double areaTriangle(double base, double height);
double perimeterTriangle(double side1, double side2, double side3);

// Circle
double areaCircle(double radius);
double circumferenceCircle(double radius);

// Square
double areaSquare(double side);
double perimeterSquare(double side);

// Parallelogram
double areaParallelogram(double base, double height);
double perimeterParallelogram(double base, double side);

// Trapezoid
double areaTrapezoid(double base1, double base2, double height);
double perimeterTrapezoid(double side1, double side2, double base1, double base2);

// Ellipse

double integrand(double theta, double e);
double ellipticIntegral(double e);

double areaEllipse(double majorAxis, double minorAxis);
double circumferenceEllipse(double majorAxis, double minorAxis);

// Function declarations for Volume and Surface Area of:
// Rectangular Prism
double volumeRectangularPrism(double length, double width, double height);
double surfaceAreaRectangularPrism(double length, double width, double height);

// Triangular Prism
double volumeTriangularPrism(double base, double height, double length);
double surfaceAreaTriangularPrism(double base, double height, double length);

// Cylinder
double volumeCylinder(double radius, double height);
double surfaceAreaCylinder(double radius, double height);

// Cube
double volumeCube(double side);
double surfaceAreaCube(double side);

// Parallelepiped
double volumeParallelepiped(double length, double width, double height);
double surfaceAreaParallelepiped(double length, double width, double height);

// Trapezoidal Prism
double volumeTrapezoidalPrism(double base1, double base2, double height, double length);
double surfaceAreaTrapezoidalPrism(double base1, double base2, double height, double length);

// Ellipsoid
double volumeEllipsoid(double majorAxis, double minorAxis, double intermediateAxis);
double surfaceAreaEllipsoid(double majorAxis, double minorAxis, double intermediateAxis);

// Pyramid
double volumePyramid(double baseArea, double height);
double surfaceAreaPyramid(double basePerimeter, double baseArea, double slantHeight);

// Cone
double volumeCone(double radius, double height);
double surfaceAreaCone(double radius, double slantHeight);

// Sphere
double volumeSphere(double radius);
double surfaceAreaSphere(double radius);

// Torus
double volumeTorus(double majorRadius, double minorRadius);
double surfaceAreaTorus(double majorRadius, double minorRadius);

// Pythagorean Theorem
double pythagoreanTheorem(double a, double b);

double handleGeometry();

#endif // GEOMETRY_H
