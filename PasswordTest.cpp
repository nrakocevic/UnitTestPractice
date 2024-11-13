/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, double_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("BB");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, empty_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}

TEST(PasswordTest, leading_space_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("   bab2");
	ASSERT_EQ(3, actual);
}

TEST(PasswordTest, nonconsecutive_repeating_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aba");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, trailing_repeating_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("bacccc");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, shooting_star_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("****");
	ASSERT_EQ(4, actual);
}
