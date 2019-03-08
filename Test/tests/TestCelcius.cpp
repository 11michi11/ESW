#include "CppUTest/TestHarness.h"
#include "library.h"

TEST_GROUP(Celcius) {

};

TEST(Celcius, FirstTest) {
    int x = 0;
    int fahr = 100;
    int celcius = 485;
    LONGS_EQUAL(celcius, convertFahrToCelcius(fahr));
}
