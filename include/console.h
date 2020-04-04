#pragma once
#ifndef LIBRARY_CONSOLE_H
#define LIBRARY_CONSOLE_H

#include <string>

#define ARROW_UP 72
#define ARROW_DOWN 80
#define ARROW_LEFT 75
#define ARROW_RIGHT 77
#define ESC 27
#define SPACE 32
#define RETURN 13

namespace Console {

void Clear(void);
void SetTitle(std::string title);
void SetWindowSize(const int cols, const int lines);
void SetCsrPos(const int x, const int y);
char GetKey(void);
char CatchKey(void);

}  // namespace Console

#endif  // LIBRARY_CONSOLE_H
