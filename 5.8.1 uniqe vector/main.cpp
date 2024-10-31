#include<iostream>
#include <vector>
#include<algorithm>


template<class T>
void remove_duplicates(T& conteiner)
{
	std::sort(conteiner.begin(), conteiner.end());
	auto it = std::unique(conteiner.begin(), conteiner.end());
	conteiner.erase(it, conteiner.end());
}

int main()
{
	std::vector<int> v{ 1,2,1,4,1,6,3,2 };

	remove_duplicates(v);

	for (auto it = v.cbegin(); it != v.cend(); ++it)
	{
		std::cout << *it;
		if (std::next(it) != v.cend())
		{
			std::cout << ", ";
		}
	}

	return 0;
}