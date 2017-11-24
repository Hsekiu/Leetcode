class Solution {
public:
    bool isValid(string s) {
        std::stack <char> paren;

        //Empty string input.
        if(s.length() == 0) {
            return true;
        }
        
        //Go through each element and either put them on stack or check if opposite element
        //is on the stack.
        for(int i = 0; i < s.length(); i++) {
            char ele = s.at(i);

            if(ele == '(' || ele == '{' || ele == '[') {
                paren.push(ele);
            } else {
                if(paren.size() > 0) {
                    if(ele == ')' && paren.top() == '(') {
                    } else if (ele == '}' && paren.top() == '{') {
                    } else if (ele == ']' && paren.top() == '[') {
                    } else {
                        return false;
                    }
                    paren.pop();
                } else {
                    return false;
                }
            }
        }

        //Stack has unmatched elements.
        if(paren.size() > 0) {
            return false;
        }
        
        return true;
    }
};