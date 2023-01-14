#include <gtest/gtest.h>

#include "integer_to_roman.h"

using namespace std;

TEST(integerToRomanTest, PositiveInput) {
    vector<pair<int, string>> intToRomanMappings{
        make_pair(1, "I"),
        make_pair(2, "II"),
        make_pair(3, "III"),
        make_pair(4, "IV"),
        make_pair(5, "V"),
        make_pair(6, "VI"),
        make_pair(10, "X"),
        make_pair(24, "XXIV"),
        make_pair(40, "XL"),
        make_pair(50, "L"),
        make_pair(51, "LI"),
        make_pair(73, "LXXIII"),
        make_pair(90, "XC"),
        make_pair(100, "C"),
        make_pair(400, "CD"),
        make_pair(500, "D"),
        make_pair(537, "DXXXVII"),
        make_pair(900, "CM"),
        make_pair(999, "CMXCIX"),
        make_pair(1000, "M"),
        make_pair(2018, "MMXVIII"),
        make_pair(3497, "MMMCDXCVII"),
    };

    for (auto &p: intToRomanMappings) {
        EXPECT_EQ(p.second, intToRoman(p.first)) << "Converting " << p.first;
    }
}