#include "pch.h"
std::string convertToRomNum(int t_num);

TEST(TestCaseName1, TestName1)
{
	EXPECT_EQ(convertToRomNum(1), "I");
}

TEST(TestCaseName2, TestName2)
{
	EXPECT_EQ(convertToRomNum(2), "II");
}

TEST(TestCaseName3, TestName3)
{
	EXPECT_EQ(convertToRomNum(3), "III");
}

TEST(TestCaseName4, TestName4)
{
	EXPECT_EQ(convertToRomNum(4), "IV");
}

TEST(TestCaseName5, TestName5)
{
	EXPECT_EQ(convertToRomNum(5), "V");
}

TEST(TestCaseName8, TestName8)
{
	EXPECT_EQ(convertToRomNum(8), "VIII");
}

TEST(TestCaseName9, TestName9)
{
	EXPECT_EQ(convertToRomNum(9), "IX");
}

TEST(TestCaseName10, TestName10)
{
	EXPECT_EQ(convertToRomNum(10), "X");
}

TEST(TestCaseName12, TestName12)
{
	EXPECT_EQ(convertToRomNum(12), "XII");
}

TEST(TestCaseName19, TestName19)
{
	EXPECT_EQ(convertToRomNum(19), "XIX");
}

TEST(TestCaseName20, TestName20)
{
	EXPECT_EQ(convertToRomNum(20), "XX");
}

TEST(TestCaseName34, TestName34)
{
	EXPECT_EQ(convertToRomNum(34), "XXXIV");
}

TEST(TestCaseName40, TestName40)
{
	EXPECT_EQ(convertToRomNum(40), "XL");
}

TEST(TestCaseName49, TestName49)
{
	EXPECT_EQ(convertToRomNum(49), "XLIX");
}

TEST(TestCaseName50, TestName50)
{
	EXPECT_EQ(convertToRomNum(50), "L");
}

TEST(TestCaseName100, TestName100)
{
	EXPECT_EQ(convertToRomNum(100), "C");
}

TEST(TestCaseName399, TestName399)
{
	EXPECT_EQ(convertToRomNum(399), "CCCXCIX");
}

TEST(TestCaseName500, TestName500)
{
	EXPECT_EQ(convertToRomNum(500), "D");
}

TEST(TestCaseName888, TestName888)
{
	EXPECT_EQ(convertToRomNum(888), "DCCCLXXXVIII");
}

TEST(TestCaseName1000, TestName1000)
{
	EXPECT_EQ(convertToRomNum(1000), "M");
}

TEST(TestCaseName1888, TestName1888)
{
	EXPECT_EQ(convertToRomNum(1888), "MDCCCLXXXVIII");
}

TEST(TestCaseName2444, TestName2444)
{
	EXPECT_EQ(convertToRomNum(2444), "MMCDXLIV");
}

TEST(TestCaseName3999, TestName3999)
{
	EXPECT_EQ(convertToRomNum(3999), "MMMCMXCIX");
}




std::string digitToNumeral(int digit, std::string numerals[]) {
	return digit == 0 ? "" : numerals[digit - 1];
}

std::string convertToRomNum(int t_num)
{
	std::string ans = "";
	int numberRemaining = t_num;

	int positions[] = { 1000, 100, 10, 1 };
	std::string numerals[][9] = {
		{ "M", "MM", "MMM", "",   "",  "",   "",    "",     ""   },
		{ "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
		{ "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
		{ "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" }
	};

	for (int i = 0; i < 4;i++) {
		int digit = numberRemaining / positions[i];
		numberRemaining = numberRemaining % positions[i];
		ans += digitToNumeral(digit, numerals[i]);
	}

	return ans;
}