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






std::string convertToRomNum(int t_num)
{
	std::string ans = "";
	int romanNum = t_num;

	int thousandDigit = 0;
	thousandDigit = romanNum / 1000;
	romanNum = romanNum % 1000;
	std::string thousandNumerals[] = {"M", "MM", "MMM"};
	if (thousandDigit >=1 && thousandDigit <= 3)
		ans = ans + thousandNumerals[thousandDigit-1];

	int hundredDigit = 0;
	hundredDigit = romanNum / 100;
	romanNum = romanNum % 100;
	std::string hundredNumerals[] = { "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
	if (hundredDigit >= 1 && hundredDigit <= 9)
		ans = ans + hundredNumerals[hundredDigit - 1];

	int X = 0;
	X = romanNum / 10;
	romanNum = romanNum % 10;
	if (X == 1)
	{
		ans = ans + "X";
	}
	else if (X == 2)
	{
		ans = ans + "XX";
	}
	else if (X == 3)
	{
		ans = ans + "XXX";
	}
	else if (X == 4)
	{
		ans = ans + "XL";
	}
	else if (X == 5)
	{
		ans = ans + "L";
	}
	else if (X == 6)
	{
		ans = ans + "LX";
	}
	else if (X == 7)
	{
		ans = ans + "LXX";
	}
	else if (X == 8)
	{
		ans = ans + "LXXX";
	}
	else if (X == 9)
	{
		ans = ans + "XC";
	}




	int I = 0;
	I = romanNum / 1;
	romanNum = romanNum % 1;
	if (I == 1)
	{
		ans = ans + "I";
	}
	else if (I == 2)
	{
		ans = ans + "II";
	}
	else if (I == 3)
	{
		ans = ans + "III";
	}
	else if (I == 4)
	{
		ans = ans + "IV";
	}
	else if (I == 5)
	{
		ans = ans + "V";
	}
	else if (I == 6)
	{
		ans = ans + "VI";
	}
	else if (I == 7)
	{
		ans = ans + "VII";
	}
	else if (I == 8)
	{
		ans = ans + "VIII";
	}
	else if (I == 9)
	{
		ans = ans + "IX";
	}

	return ans;
}