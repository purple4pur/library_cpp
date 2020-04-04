#include "console.h"

#include <Windows.h>
#include <conio.h>

void Console::Clear(void) { system("cls||clear"); }

void Console::SetTitle(std::string title) {
  title = "title " + title;
  system(title.c_str());
}

void Console::SetWindowSize(const int cols, const int lines) {
  std::string setSize = "mode con cols=" + std::to_string(cols * 2) +
                        " lines=" + std::to_string(lines);
  system(setSize.c_str());
}

void Console::SetCsrPos(const int x, const int y) {
  COORD pos;
  pos.X = x * 2;
  pos.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

char Console::GetKey(void) {
  char key = getch();
  if (key == -32) {
    key = getch();
  }
  return key;
}

char Console::CatchKey(void) {
  if (!kbhit()) {
    return 0;
  }
  char key = getch();
  if (key == -32) {
    key = getch();
  }
  return key;
}