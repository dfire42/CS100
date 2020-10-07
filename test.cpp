#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, Number) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "6";
	EXPECT_EQ("6", echo(2, test_val));
}
TEST(EchoTest, SingleChar) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "b"; test_val[2] = "i";
	EXPECT_EQ("b i", echo(3, test_val));
}

TEST(EchoTest, NumberChar) {
	 char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "b"; test_val[2] = "3";
	 EXPECT_EQ("b 3", echo(3, test_val));
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
