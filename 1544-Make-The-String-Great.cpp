class Solution {
public:
    string makeGood(string s) {
        stack<char> asd;
        for (int i = 0; i < s.length(); i++) {
            if (asd.empty())
                asd.push(s[i]);
            else if ((int)s[i] + (int)asd.top() -(2 * (int)min(s[i], asd.top())) ==int('a' - 'A')){
                asd.pop();
            }
            else{
                asd.push(s[i]);
            }
        }
        s = "";
        cout << s << endl;
        while (!asd.empty()) {
            s = asd.top() + s;
            asd.pop();
        }
        return s;
    }
};