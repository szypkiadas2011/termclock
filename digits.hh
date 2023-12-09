#pragma once
#include <string>

constexpr int DIGIT_HEIGHT = 7;

constexpr int COLON_POS = 10;

static std::string DIGITS[11][DIGIT_HEIGHT] = {
		{
				" ### ",
				"#   #",
				"#  ##",
				"# # #",
				"##  #",
				"#   #",
				" ### "
		},

		{
				"  #  ",
				" ##  ",
				"  #  ",
				"  #  ",
				"  #  ",
				"  #  ",
				" ### "
		},

		{
				" ### ",
				"#   #",
				"    #",
				"   # ",
				"  #  ",
				" #   ",
				"#####"
		},

		{
				"#####",
				"    #",
				"   # ",
				"  ## ",
				"    #",
				"#   #",
				" ### "
		},

		{
				"   # ",
				"  ## ",
				" # # ",
				"#  #",
				"#####",
				"   # ",
				"   # "
		},

		{
				"#####",
				"#    ",
				"#### ",
				"    #",
				"    #",
				"#   #",
				" ### "
		},

		{
				" ### ",
				"#   #",
				"#    ",
				"#### ",
				"#   #",
				"#   #",
				" ### "
		},

		{
				"#####",
				"    #",
				"   # ",
				"  #  ",
				" #   ",
				" #   ",
				" #   "
		},

		{
				" ### ",
				"#   #",
				"#   #",
				" ### ",
				"#   #",
				"#   #",
				" ### "
		},

		{
				" ### ",
				"#   #",
				"#   #",
				" ####",
				"    #",
				"#   #",
				" ### "
		},

		{
				"     ",
				"     ",
				"  #  ",
				"     ",
				"  #  ",
				"     ",
				"     "
		}
};
