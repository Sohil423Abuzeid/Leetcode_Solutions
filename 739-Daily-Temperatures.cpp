class Solution {
public:
\tvector<int> dailyTemperatures(vector<int>& temperatures) {
\t\tstack<int> asd;
\t\tvector<int> asd2(temperatures.size(),0);
\t\tfor (int i = 0;  i < temperatures.size();  i++)
\t\t{
\t\t\twhile (!asd.empty()&&temperatures[i] > temperatures[asd.top()])
\t\t\t{
\t\t\t\tasd2[asd.top()] = i - asd.top();
\t\t\t\tasd.pop();
\t\t\t}
\t\t\tasd.push(i);
\t\t}
\t\treturn asd2;
\t}
};
