#pragma once
#ifndef LIBRARY_CONSOLE_H
#define LIBRARY_CONSOLE_H

#include <string>

class Console {
 public:
  static void Clear(void);
  static void SetTitle(std::string title);
  static void SetWindowSize(const int cols, const int lines);
  static void SetCsrPos(const int x, const int y);
  static int GetKey(void);
  static int CatchKey(void);
};

#endif  // LIBRARY_CONSOLE_H
