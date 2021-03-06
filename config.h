/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0x66;
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]		= { "#cbe2ef", "#000000" },
	[SchemeSel]		= { "#282c34", "#61afef" },
	[SchemeSelHighlight]	= { "#e06c75", "#61afef" },
	[SchemeNormHighlight]	= { "#e06c75", "#000000" },
	[SchemeOut]		= { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm]		= { OPAQUE, alpha },
	[SchemeSel]		= { alpha, OPAQUE },
	[SchemeSelHighlight]	= { OPAQUE, OPAQUE },
	[SchemeNormHighlight]	= { OPAQUE, alpha },
	[SchemeOut]		= { OPAQUE, OPAQUE },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
