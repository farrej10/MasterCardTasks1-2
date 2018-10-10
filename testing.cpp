#define CATCH_CONFIG_MAIN
#include </home/james/MastercardInternship/Taskapplications/catch.hpp>
#include </home/james/MastercardInternship/Taskapplications/reverseString.hpp>
#include </home/james/MastercardInternship/Taskapplications/intFrequency.hpp>


TEST_CASE("Strings Are Reversed Iteratively","[string]")
{
    std::string reversedString;
    reverseIteratively("Hello",reversedString);
    REQUIRE(reversedString== "olleH");
    reversedString.clear();
    reverseIteratively("My Name is James",reversedString);
    REQUIRE(reversedString== "semaJ si emaN yM");
    reversedString.clear();
    reverseIteratively("This is my Test",reversedString);
    REQUIRE(reversedString== "tseT ym si sihT");
}

TEST_CASE("Strings Are Reversed Recursively","[string]")
{
    std::string reversedString;
    reverseRecursively("Hello",reversedString);
    REQUIRE(reversedString== "olleH");
    reversedString.clear();
    reverseRecursively("My Name is James",reversedString);
    REQUIRE(reversedString== "semaJ si emaN yM");
    reversedString.clear();
    reverseRecursively("This is my Test",reversedString);
    REQUIRE(reversedString== "tseT ym si sihT");
}

TEST_CASE("Most Frequent int found","[int]")
{   

    int array[] = {1,1,1,1,1,1,1,1,1,5,8,7,7,7,156455,7};
    REQUIRE(findMostFrequent(array,(sizeof(array)/sizeof(int))) == 1);

    SECTION("small array")
    {
        int array[] = {1,1,1,1,1,1,1,1,1,5,8,7,7,7,156455,7};
        REQUIRE(findMostFrequent(array,(sizeof(array)/sizeof(int))) == 1);
    }
    
    SECTION("large array")
    {
        int array[] = {1,1,1,1,1,1,1,1,1,5,8,7,7,7,156455,7,5,23,6,3453,234234,6456456,234234,645654645,345345,23,4234,3425,345,3452,34,245,6,456,7,7,7,7,7,7,7,7,7,7,7};
        REQUIRE(findMostFrequent(array,(sizeof(array)/sizeof(int))) == 7);
    }
    
}