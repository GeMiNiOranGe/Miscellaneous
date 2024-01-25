#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

int priority(char);
std::string convert_infix_to_postfix(std::string);
int evaluate_postfix(std::string);

int main() {
	std::string infix;
	getline(std::cin, infix);
	std::cout << evaluate_postfix(convert_infix_to_postfix(infix));
	return 0;
}

int priority(char _operator) {
	if (_operator == '+' || _operator == '-')
		return 1;
	if (_operator == '*' || _operator == '/')
		return 2;
	if (_operator == '^')
		return 3;
	return 0;
}

std::string convert_infix_to_postfix(std::string infix) {
	std::stack<char> stack_operator;
	std::string postfix = "";
	for (int i = 0; i < infix.size(); i++) {
		for (; infix[i] == ' '; i++);
		if (isalnum(infix[i])) {
			while (isalnum(infix[i])) {
				postfix.push_back(infix[i]);
				i++;
				if (i == infix.size())
					break;
			}
			postfix.push_back(' ');
			i--;
		}
		else if (infix[i] == '(')
			stack_operator.push('(');
		else if (infix[i] == ')') {
			while (stack_operator.top() != '(') {
				postfix.push_back(stack_operator.top());
				postfix.push_back(' ');
				stack_operator.pop();
			}
			stack_operator.pop();
		}
		else {
			while (!stack_operator.empty() && priority(infix[i]) <= priority(stack_operator.top())) {
				postfix = postfix + stack_operator.top() + ' ';
				stack_operator.pop();
			}
			stack_operator.push(infix[i]);
		}
	}
	while (!stack_operator.empty()) {
		postfix.push_back(stack_operator.top());
		postfix.push_back(' ');
		stack_operator.pop();
	}
	postfix.pop_back();
	return postfix;
}
int evaluate_postfix(std::string postfix) {
	std::stack<int> stack_evaluate;
	for (int i = 0; i < postfix.size(); i++) {
		for (; postfix[i] == ' '; i++);
		if (isdigit(postfix[i])) {
			int number = 0;
			for (; isdigit(postfix[i]); i++)
				number = number * 10 + (postfix[i] - '0');
			stack_evaluate.push(number);
		}
		else {
			int od1 = stack_evaluate.top();
			stack_evaluate.pop();
			int od2 = stack_evaluate.top();
			stack_evaluate.pop();
			switch (postfix[i]) {
			case '+':
				stack_evaluate.push(od2 + od1);
				break;
			case '-':
				stack_evaluate.push(od2 - od1);
				break;
			case '*':
				stack_evaluate.push(od2 * od1);
				break;
			case '/':
				stack_evaluate.push(od2 / od1);
				break;
			case '^':
				stack_evaluate.push(pow(od2, od1));
				break;
			}
		}
	}
	return stack_evaluate.top();
}
