static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",   /* after initialization */
	[INPUT] =  "#001122",   /* during input */
	[FAILED] = "#220011",   /* wrong password */
};

/* do not treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Enter password";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
