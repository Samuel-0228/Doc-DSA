#include <iostream>
#include <stack>
#include <string>

bool isMatchingPair(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isBalanced(const std::string &s)
{
    std::stack<char> st;

    for (char ch : s)
    {
        // If it's an opening bracket, push it
        if (ch == '(' || ch == '[' || ch == '{')
        {
            st.push(ch);
        }
        // If it's a closing bracket, check the stack
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (st.empty())
            {
                return false; // no matching opening
            }
            char top = st.top();
            st.pop();
            if (!isMatchingPair(top, ch))
            {
                return false; // mismatched pair
            }
        }
        // Any other character (letters, digits, operators) is ignored
    }

    // If stack is empty, all openings were matched
    return st.empty();
}

int main()
{
    std::string input;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, input);

    if (isBalanced(input))
    {
        std::cout << "Valid/Balanced\n";
    }
    else
    {
        std::cout << "Invalid/Unbalanced\n";
    }

    return 0;
}