#pragma once

#include "osci_Shape.h"
#include "osci_Point.h"

namespace osci {
class Line : public Shape {
public:
	Line(double x1, double y1, double x2, double y2);
	Line(double x1, double y1, double z1, double x2, double y2, double z2);
	Line(Point p1, Point p2);

	Point nextVector(double drawingProgress) override;
	void scale(double x, double y, double z) override;
	void translate(double x, double y, double z) override;
	static double length(double x1, double y1, double z1, double x2, double y2, double z2);
	double length() override;
	std::unique_ptr<Shape> clone() override;
	std::string type() override;
	Line& operator=(const Line& other);

	double x1, y1, z1, x2, y2, z2;
	
};
} // namespace osci