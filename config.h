/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int fuzzy = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static char font[] = "luximono 15";
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *location = "tl";
static const char *colors[SchemeLast][2] = {
	/*                            fg         bg       */
	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemePrompt]        = { "#eeeeee", "#005577" },
	[SchemeInput]         = { "#bbbbbb", "#222222" },
	[SchemeSel]           = { "#eeeeee", "#005577" },
	[SchemeSelHighlight]  = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut]           = { "#000000", "#00ffff" },
	[SchemeHp]            = { "#bbbbbb", "#333333" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* static unsigned int location   = 1; */
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */
static unsigned int padding = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
