#include <iostream>

static bool sub_str(const char* p1, const char* p2)
{
	int i = 0;
	bool equal = false;
	while (*(p1 + i) != '\0' && !equal)
	{
		if (*(p1 + i) == *p2)
		{
			int j = 1;
			equal = true;
			while (*(p2 + j) != '\0' && equal)
			{
				if (*(p1 + i + j) != *(p2 + j))
				{
					equal = false;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return equal;
}

int main()
{
	setlocale(LC_ALL, "RU_ru");
	const char* a = "Hello world";
	const char* b = "wor";
	const char* c = "banana";
	
	if (sub_str(a, b))
		std::cout << "Result of string comparation '" << a << "' and '" << b << "' is TRUE\n";
	else
		std::cout << "Result of string comparation '" << a << "' and '" << b << "' is FALSE\n";

	if (sub_str(a, c))
		std::cout << "Result of string comparation '" << a << "' and '" << c << "' TRUE\n";
	else
		std::cout << "Result of string comparation '" << a << "' and '" << c << "' FALSE\n";

}