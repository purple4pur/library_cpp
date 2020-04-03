#include "point.h"

#include <iostream>

void Point::Info(void) {
  std::cout << "(" << this->X_ << ", " << this->Y_ << ")" << std::endl;
}

bool Point::operator==(const Point& p) {
  return this->X_ == p.X_ && this->Y_ == p.Y_;
}

Point Point::operator+(const Point& p) {
  return Point(this->X_ + p.X_, this->Y_ + p.Y_);
}

void Point::operator+=(const Point& p) {
  this->X_ += p.X_;
  this->Y_ += p.Y_;
}
