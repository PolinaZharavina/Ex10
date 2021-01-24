// Copyright 2021 PollyllyZh
#include "MyStack.h"
#include "postfix.h"

bool isOperator(char a) {
  return (a == "+" || a == "-" || a == "*" || a == "/");
}
int getPriority(char str) {
      if (str == '-' || str == '+')
        return 1;
    else if (str == '*' || str == '/')
        return 2;
    else if (str == '^')
        return 3;
    return 0;
}
std::string infix2postfix(std::string inf) {
	inf = '(' + inf + ')';
    MyStack<char> stack(inf.size());
    std::string str_out;
    for (int i = 0; i < inf.size(); i++) {
        if (inf[i] != ' ') {
            if (isdigit(inf[i])) {
                str_out += inf[i];
                str_out += " ";
            } else if (inf[i] == '.') {
                str_out = str_out.substr(0, str_out.size() - 1);
                str_out += inf[i];
            } else if (str_out[str_out.size()] == '.') {
                str_out += inf[i];
                str_out += " ";
            } else if (inf[i] == '(') {
                char_stack.push('(');
            } else if (inf[i] == ')') {
                while (char_stack.get() != '(') {
                    str_out += char_stack.get();
                    str_out += " ";
                    char_stack.pop();
                }
                char_stack.pop();
            } else {
                if (isOperator(char_stack.get())) {
                    while (getPriority(inf[i])
                        <= getPriority(char_stack.get())) {
                        str_out += char_stack.get();
                        str_out += " ";
                        char_stack.pop();
                    }
                    char_stack.push(inf[i]);
                }
            }
        }
    }
    str_out = str_out.substr(0, str_out.size() - 1);
    return str_out;
}