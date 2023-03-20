#include <iostream>
#include <string>
#include <vector>
using namespace std;

/// <summary>
/// Проверка на крастность строки.
/// </summary>
/// <param name="text"> Строка.</param>
/// <param name="substringLength"> Длина подстроки.</param>
/// <returns> True если строка кратна, false если нет.</returns>
bool IsKPeriodic(string text, int substringLength)
{
	string s1 = "";

	vector<string> strings;
	for (int i = 0; i < text.length(); i++)
	{
		s1 += text[i];

		if (s1.length() == substringLength)
		{
			strings.push_back(s1);
			s1 = "";
		}
	}

	bool result = false;

	for (int i = 0; i < strings.size() - 1; ++i)
	{
		if (strings[i] == strings[i + 1])
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}

	return result;
}

int main()
{
	string text = "abcabcabcabc";
	int substringLength = 3;
	
	cout << IsKPeriodic(text, substringLength)<<endl;

	text = "vtvtvtrt";
	substringLength = 2;

	cout << IsKPeriodic(text, substringLength) << endl;
}

