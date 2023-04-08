//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "sh ~/scripts/bin/sb-tasks",     10, 26},
    {"", "sh ~/scripts/bin/sb-pacpackages", 10, 26},
    {"", "sh ~/scripts/bin/sb-news",        0, 6},
    {"",  "sh ~/scripts/bin/sb-battery", 5, 3},
    {"",  "sh ~/scripts/bin/sb-internet", 5, 4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
