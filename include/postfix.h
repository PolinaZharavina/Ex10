// Copyright 2021 PollylluZh
#ifndef INCLUDE_POSTFIX_H_
#define INCLUDE_POSTFIX_H_
#include <string>
#include <iostream>

std::string infix2postfix(std::string infix);
bool isOperator(char a);
int getPriority(char str);

#endif  // INCLUDE_POSTFIX_H_
