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

void Clear(void);                                     // 清屏
void SetTitle(std::string title);                     // 设置窗口标题
void SetWindowSize(const int cols, const int lines);  // 设置窗口大小
void SetCsrPos(const int x, const int y);             // 设置光标位置
char GetKey(void);    // 获取按键值（阻塞）
char CatchKey(void);  // 获取按键值（非阻塞）

}  // namespace Console

#endif  // LIBRARY_CONSOLE_H
