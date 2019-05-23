#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::string;
bool fun(string str, string s1, string s2) {
	if (string::npos == str.find(s1, 0))
		return false;
	int k = str.find(s1, 0);
	k += s1.size();
	if (string::npos == str.find(s2, k))
		return false;
	return true;
}
string revers(string str){
	string result = str;
	int len = str.size();
	char temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = result[i];
		result[i] = result[len-1-i];
		result[len - 1 - i] = temp;
	}
	return result;
}
int main()
{
	string str, s1, s2;
	while (cin >> str >> s1 >>s2)
	{
		bool forward = false, back = false;
		forward = fun(str, s1, s2);
		string _str = revers(str);
		back = fun(_str, s1, s2);
		if (forward && !back)
			cout << "forward" << endl;
		else if (!forward && back)
			cout << "backward" << endl;
		else if (forward && back)
			cout << "both" << endl;
		else
			cout << "invalid" << endl;
	}
	return 0;
}
