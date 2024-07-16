#include <gtest/gtest.h>

// Example test case
TEST(SimpleCMakeProjectTests, ExampleTest) {
    ASSERT_TRUE(true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
