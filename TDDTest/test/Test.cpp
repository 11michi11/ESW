#include "CppUTest/TestHarness.h"
#include "CppUTest/TestHarness_c.h"

extern "C" {
    #include "string_utils.h"
#include "some_header.h"
}

TEST_GROUP(String_Utils) {

};

TEST(String_Utils, FirstTest) {
    char* test = "TEST";
    CHECK_EQUAL(-1, my_strdiff(test, "TEST"));

}
