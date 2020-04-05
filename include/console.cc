#include "console.h"

#include <Windows.h>
#include <conio.h>

// 清屏
void Console::Clear(void) { system("cls||clear"); }

// 设置窗口标题
void Console::SetTitle(std::string title) {
  title = "title " + title;
  system(title.c_str());
}

// 设置窗口大小
// cols 按全角符号计算
void Console::SetWindowSize(const int cols, const int lines) {
  // cols * 2 设置为全角宽度
  std::string setSize = "mode con cols=" + std::to_string(cols * 2) +
                        " lines=" + std::to_string(lines);

  system(setSize.c_str());
}

// 设置光标位置
// x 按全角符号计算
void Console::SetCsrPos(const int x, const int y) {
  COORD pos;

  // x * 2 设置为全角宽度
  pos.X = x * 2;

  pos.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 获取按键值（阻塞）
char Console::GetKey(void) {
  char key = getch();

  // 部分控制按键会输入两个 char，只强调代表实际意义的第二个输入
  if (key == -32 || key == 0) {
    key = getch();
  }

  return key;
}

// 获取按键值（非阻塞）
char Console::CatchKey(void) {
  // kbhit() 为非阻塞函数
  if (!kbhit()) {
    return 0;
  }

  return Console::GetKey();
}
