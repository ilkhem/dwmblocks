//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",    "sb-spotify",   1, 11},
	/* {"",	"sb-cpu",   	2,	18}, */
	{"",	"sb-memory",	10,	14},
    {"",    "sb-mail",      180, 12},
    {"",    "sb-updates",   1800, 8},
    {"",	"sb-volume",	0,	10},
	{"",	"sb-battery",	250,	3},
    {"",    "sb-kbselect",  0,  30},
    {"",	"sb-net",	5,	4},
	{"",	"sb-clock",	    60,	1},
	{"",	"sb-powerbutton", 0, 15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
