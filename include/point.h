#pragma once
#ifndef LIBRARY_POINT_H
#define LIBRARY_POINT_H

#include <string>

class Point {
 public:
  Point(int x = 0, int y = 0) : X_(x), Y_(y) {}
  int GetX(void);
  int GetY(void);
  void Info(void);
  void Dot(const std::string& s);

  bool operator==(const Point& p);
  Point operator+(const Point& p);
  void operator+=(const Point& p);

 private:
  int X_, Y_;
};

#endif  // LIBRARY_POINT_H
