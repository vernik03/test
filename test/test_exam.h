#pragma once
#include <iostream>

struct tCheck {
	int t = 0;
	int t_without_e = 0;
};

tCheck countAllT(const std::string& word) {
	tCheck result;
	for (int i = 0; i < word.size() - 1; i++)
	{
		if (word[i] == 't') {
			result.t++;
			if (word[i + 1] != 'e')
			{
				result.t_without_e++;
			}
		}
	}
	if (*(--word.end()) == 't') {
		result.t++;
		result.t_without_e++;
	}
	return result;
}

std::ostream& operator<<(std::ostream& os, const tCheck& t_info)
{
	os << "t: " << t_info.t << "\tt without e: " << t_info.t_without_e;
	return os;
}

bool operator==(const tCheck& t_info_1, const tCheck& t_info_2) {
	return t_info_1.t == t_info_2.t && t_info_1.t_without_e == t_info_2.t_without_e;
}