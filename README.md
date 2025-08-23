Infix to Postfix Converter<br>
This project is a command-line utility that converts mathematical expressions from infix notation to postfix (Reverse Polish) notation.<br>

Infix notation is the standard way of writing mathematical expressions, with operators placed between the operands (e.g., 2 + 3). Postfix notation, on the other hand, places the operators after the operands (e.g., 2 3 +).<br> The primary purpose of this conversion is to make expression evaluation more straightforward for a computer. Postfix expressions are evaluated using a stack and eliminate the need for parentheses and complex operator precedence rules.

Features<br>
Handles standard arithmetic operators: +, -, *, /, ^ (exponentiation).<br>
Respects operator precedence (*, /, ^ have higher precedence than +, -).<br>
Correctly processes nested parentheses.<br>
Built using a stack-based algorithm.<br><br>
Technologies used<br>
Language: C++<br>
Data Structure: Stack<br>
