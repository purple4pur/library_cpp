#pragma once
#ifndef LIBRARY_POINT_H
#define LIBRARY_POINT_H

class Point {
 private:
  int X_, Y_;

 public:
  Point(int x = 0, int y = 0) : X_(x), Y_(y) {}
  void Info(void);

  bool operator==(const Point& p);
  Point operator+(const Point& p);
  void operator+=(const Point& p);
};

#endif  // LIBRARY_POINT_H
