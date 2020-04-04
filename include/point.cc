#include "point.h"

#include <iostream>
#include <string>

#include "console.h"

void Point::Info(void) {
  std::cout << "(" << this->X_ << ", " << this->Y_ << ")" << std::endl;
}

int Point::GetX(void) { return this->X_; };

int Point::GetY(void) { return this->Y_; };

void Point::Dot(const std::string& s) {
  Console::SetCsrPos(this->GetX(), this->GetY());
  std::cout << s;
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
