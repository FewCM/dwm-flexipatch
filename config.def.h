/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx       = 3;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const int swallowfloating         = 0;   /* 1 means swallow floating windows by default */
<<<<<<< HEAD
static const int usealtbar               = 1;        /* 1 means use non-dwm status bar */
static const char *altbarclass           = "Polybar"; /* Alternate bar class name */
static const char *altbarcmd             = "$HOME/bar.sh"; /* Alternate bar launch command */
=======
#endif // SWALLOW_PATCH
#if NO_MOD_BUTTONS_PATCH
static int nomodbuttons                  = 1;   /* allow client mouse button bindings that have no modifier */
#endif // NO_MOD_BUTTONS_PATCH
#if VANITYGAPS_PATCH
static const unsigned int gappih         = 0;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 0;  /* vert inner gap between windows */
static const unsigned int gappoh         = 0;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 0;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
#endif // VANITYGAPS_PATCH
#if AUTOSTART_PATCH
static const char autostartblocksh[]     = "autostart_blocking.sh";
static const char autostartsh[]          = "autostart.sh";
static const char dwmdir[]               = "dwm";
static const char localshare[]           = ".local/share";
#endif // AUTOSTART_PATCH
#if BAR_ANYBAR_PATCH
static const int usealtbar               = 0;        /* 1 means use non-dwm status bar */
static const char *altbarclass           = "Polybar"; /* Alternate bar class name */
static const char *altbarcmd             = "$HOME/.local/bin/dwm/dwmbar"; /* Alternate bar launch command */
#endif // BAR_ANYBAR_PATCH
#if BAR_HOLDBAR_PATCH
static const int showbar                 = 0;   /* 0 means no bar */
#else
>>>>>>> 1f23200
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int focusonwheel            = 0;
static int floatposgrid_x                = 5;  /* float grid columns */
static int floatposgrid_y                = 5;  /* float grid rows */
/* Status is to be shown on: -1 (all monitors), 0 (a specific monitor by index), 'A' (active monitor) */
static const int statusmon               = -1;
static const char buttonbar[]            = "";
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */
static const char ptagf[] = "[%s:%s]";          /* format of a tag label */
static const char etagf[] = "%s";             /* format of an empty tag */
static const int lcaselbl = 1;                  /* 1 means make tag label lowercase */
static const unsigned int ulinepad = 3;         /* horizontal padding between the underline and tag */
static const unsigned int ulinestroke  = 3;     /* thickness / height of the underline */
static const unsigned int ulinevoffset = 0;     /* how far above the bottom of the bar the line should appear */
static const int ulineall = 0;                  /* 1 to show underline on all tags, 0 for just the active ones */

/* Indicators: see patch/bar_indicators.h for options */
/* INDICATOR_TOP_LEFT_SQUARE,	
 * INDICATOR_TOP_LEFT_LARGER_SQUARE,	
 * INDICATOR_TOP_BAR,	
 * INDICATOR_TOP_BAR_SLIM,	
 * INDICATOR_BOTTOM_BAR,	
 * INDICATOR_BOTTOM_BAR_SLIM,
 * INDICATOR_BOX,	
 * INDICATOR_BOX_WIDER,	
 * INDICATOR_BOX_FULL,	
 * INDICATOR_CLIENT_DOTS,	
 * INDICATOR_RIGHT_TAGS, 
 * INDICATOR_PLUS, 
 * INDICATOR_PLUS_AND_SQUARE, 
 * INDICATOR_PLUS_AND_LARGER_SQUARE,*/
static int tagindicatortype              = INDICATOR_BOTTOM_BAR;
static int tiledindicatortype            = INDICATOR_BOTTOM_BAR;
static int floatindicatortype            = INDICATOR_TOP_LEFT_LARGER_SQUARE;
static const char *fonts[]               = { "Siji:style=Regular:size=16",
																						"JetBrains Mono:style=Regular:pixelsize=15;antialias=true:autohint=true",
																						"Material Design Icons Desktop:style=Regular:size=14:antialias=true:autohint=true",
																						"WenQuanYi Zen Hei Sharp:style=Regular:size=8;antialias=true:autohint=true", 
																						};
static const char dmenufont[]            = "monospace:size=10";

static char c000000[]                    = "#000000"; // placeholder value

static char normfgcolor[]                = "#bbbbbb";
static char normbgcolor[]                = "#222222";
static char normbordercolor[]            = "#444444";
static char normfloatcolor[]             = "#db8fd9";

static char selfgcolor[]                 = "#eeeeee";
static char selbgcolor[]                 = "#005577";
static char selbordercolor[]             = "#005577";
static char selfloatcolor[]              = "#005577";

static char titlenormfgcolor[]           = "#bbbbbb";
static char titlenormbgcolor[]           = "#222222";
static char titlenormbordercolor[]       = "#444444";
static char titlenormfloatcolor[]        = "#db8fd9";

static char titleselfgcolor[]            = "#eeeeee";
static char titleselbgcolor[]            = "#005577";
static char titleselbordercolor[]        = "#005577";
static char titleselfloatcolor[]         = "#005577";

static char tagsnormfgcolor[]            = "#bbbbbb";
static char tagsnormbgcolor[]            = "#222222";
static char tagsnormbordercolor[]        = "#444444";
static char tagsnormfloatcolor[]         = "#db8fd9";

static char tagsselfgcolor[]             = "#eeeeee";
static char tagsselbgcolor[]             = "#005577";
static char tagsselbordercolor[]         = "#005577";
static char tagsselfloatcolor[]          = "#005577";

static char hidnormfgcolor[]             = "#005577";
static char hidselfgcolor[]              = "#227799";
static char hidnormbgcolor[]             = "#222222";
static char hidselbgcolor[]              = "#222222";

static char urgfgcolor[]                 = "#bbbbbb";
static char urgbgcolor[]                 = "#222222";
static char urgbordercolor[]             = "#ff0000";
static char urgfloatcolor[]              = "#db8fd9";

static char Red_Color[] = "#ea6962";
static char Green_Color[] = "#a9b665";
static char Yellow_Color[] = "#d8a657";
static char Blue_Color[] = "#7daea3";
static char Purple_Color[] = "#d3869b";
static char Aqua_Color[] = "#89b482";
static char Orange_Color[] = "#e78a4e";

/*
static char Alt_Red_Color[] = "#ae5858";
static char Alt_Green_Color[] = "#6f8352";
static char Alt_Yellow_Color[] = "#b4730e";
static char Alt_Blue_Color[] = "#266b79";
static char Alt_Purple_Color[] = "#924f79";
static char Alt_Aqua_Color[] = "#477a5b";
static char Alt_Orange_Color[] = "#f28534"; 
*/

static char Alt_Red_Color[] = "#fb4934";
static char Alt_Green_Color[] = "#427b58";
static char Alt_Yellow_Color[] = "#fabd2f";
static char Alt_Blue_Color[] = "#458588";
static char Alt_Purple_Color[] = "#b16286";
static char Alt_Aqua_Color[] = "#83a598";
static char Alt_Orange_Color[] = "#d79921";

static char normTTBbgcolor[]             = "#330000";
static char normLTRbgcolor[]             = "#330033";
static char normMONObgcolor[]            = "#000033";
static char normGRIDbgcolor[]            = "#003300";
static char normGRD1bgcolor[]            = "#003300";
static char normGRD2bgcolor[]            = "#003300";
static char normGRDMbgcolor[]            = "#506600";
static char normHGRDbgcolor[]            = "#b96600";
static char normDWDLbgcolor[]            = "#003333";
static char normSPRLbgcolor[]            = "#333300";
static char normfloatbgcolor[]           = "#115577";
static char actTTBbgcolor[]              = "#440000";
static char actLTRbgcolor[]              = "#440044";
static char actMONObgcolor[]             = "#000044";
static char actGRIDbgcolor[]             = "#004400";
static char actGRD1bgcolor[]             = "#004400";
static char actGRD2bgcolor[]             = "#004400";
static char actGRDMbgcolor[]             = "#507711";
static char actHGRDbgcolor[]             = "#b97711";
static char actDWDLbgcolor[]             = "#004444";
static char actSPRLbgcolor[]             = "#444400";
static char actfloatbgcolor[]            = "#116688";
static char selTTBbgcolor[]              = "#550000";
static char selLTRbgcolor[]              = "#550055";
static char selMONObgcolor[]             = "#212171";
static char selGRIDbgcolor[]             = "#005500";
static char selGRD1bgcolor[]             = "#005500";
static char selGRD2bgcolor[]             = "#005500";
static char selGRDMbgcolor[]             = "#508822";
static char selHGRDbgcolor[]             = "#b98822";
static char selDWDLbgcolor[]             = "#005555";
static char selSPRLbgcolor[]             = "#555500";
static char selfloatbgcolor[]            = "#117799";


static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNormA] = {Red_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormB] = {Green_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormC] = {Yellow_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormD] = {Blue_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormE] = {Purple_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormF] = {Aqua_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormG] = {Orange_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormH] = {Alt_Aqua_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsNormI] = {Alt_Red_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},

	[SchemeTagsSelA] = {Red_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelB] = {Green_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelC] = {Yellow_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelD] = {Blue_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelE] = {Purple_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelF] = {Aqua_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelG] = {Orange_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelH] = {Alt_Aqua_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeTagsSelI] = {Alt_Red_Color, tagsnormbgcolor, tagsnormbordercolor, tagsnormfloatcolor},
	[SchemeHidNorm] = {hidnormfgcolor, hidnormbgcolor, c000000, c000000},
	[SchemeHidSel] = {hidselfgcolor, hidselbgcolor, c000000, c000000},
	[SchemeUrg] = {urgfgcolor, urgbgcolor, urgbordercolor, urgfloatcolor},
  [SchemeFlexActTTB] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActLTR] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActMONO] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActGRID] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActGRD1] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActGRD2] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActGRDM] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActHGRD] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActDWDL] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActSPRL] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexActFloat] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaTTB] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaLTR] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaMONO] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaGRID] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaGRD1] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaGRD2] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaGRDM] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaHGRD] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaDWDL] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaSPRL] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexInaFloat] = {titlenormfgcolor, titleselbgcolor, titlenormbordercolor, c000000},
  [SchemeFlexSelTTB] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelLTR] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelMONO] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelGRID] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelGRD1] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelGRD2] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelGRDM] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelHGRD] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelDWDL] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelSPRL] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
  [SchemeFlexSelFloat] = {titleselfgcolor, titleselbgcolor, titleselbordercolor, c000000},
};



static const char *const autostart[] = {
	"sh", "-c", "$HOME/.local/bin/monitors.sh", NULL,
	"sh", "-c", "$HOME/.local/bin/dwm/dwmstatusbar", NULL,
	//"sh", "-c", "$HOME/.local/bin/dwm/dwmbar", NULL,
	NULL /* terminate */
};

const char *spcmd1[] = {"st", "-n", "spterm", "-g", "120x34", NULL};
const char *spcmd2[] = {"st", "-g", "150x35", "-c", "spcal", "-n", "spcal", "-e", "calcurse", NULL};
static Sp scratchpads[] = {
  /* name          cmd  */
  {"spterm", spcmd1},
  {"spcal", spcmd2},
};

/* Tags
 * In a traditional dwm the number of tags in use can be changed simply by changing the number
 * of strings in the tags array. This build does things a bit different which has some added
 * benefits. If you need to change the number of tags here then change the NUMTAGS macro in dwm.c.
 *
 * Examples:
 *
 *  1) static char *tagicons[][NUMTAGS*2] = {
 *         [DEFAULT_TAGS] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 *     }
 *
 *  2) static char *tagicons[][1] = {
 *         [DEFAULT_TAGS] = { "•" },
 *     }
 *
 * The first example would result in the tags on the first monitor to be 1 through 9, while the
 * tags for the second monitor would be named A through I. A third monitor would start again at
 * 1 through 9 while the tags on a fourth monitor would also be named A through I. Note the tags
 * count of NUMTAGS*2 in the array initialiser which defines how many tag text / icon exists in
 * the array. This can be changed to *3 to add separate icons for a third monitor.
 *
 * For the second example each tag would be represented as a bullet point. Both cases work the
 * same from a technical standpoint - the icon index is derived from the tag index and the monitor
 * index. If the icon index is is greater than the number of tag icons then it will wrap around
 * until it an icon matches. Similarly if there are two tag icons then it would alternate between
 * them. This works seamlessly with alternative tags and alttagsdecoration patches.
 */
/* static char *tagicons[][NUMTAGS] = {
 * [DEFAULT_TAGS]        = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },
 * [ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 * [ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
 */
static char *tagicons[][NUMTAGS*2] = {
  [DEFAULT_TAGS] = {"󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯"},
  //[DEFAULT_TAGS] = { "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯", "󰮯" },
  [ALTERNATIVE_TAGS] = {"<1:󰆍>", "<2:󰊯>", "<3:󰇩>", "<4:󰝰>", "<5:󰷈>", "<6:󰟡>", "<7:󰄧>", "<8:󰑈>", "<9:󰢬>", "<A:󰆍>", "<B:󰊯>", "<C:󰇩>", "<D:󰝰>", "<E:󰷈>", "<F:󰟡>", "<G:󰄧>", "<H:󰑈>", "<I:󰢬>"},
  //[ALT_TAGS_DECORATION] = { "<1:󰆍>", "<2:󰊯>", "<3:󰇩>", "<4:󰝰>", "<5:󰷈>", "<6:󰟡>", "<7:󰄧>", "<8:󰑈>", "<9:󰢬>", "<A:󰆍>", "<B:󰊯>", "<C:󰇩>", "<D:󰝰>", "<E:󰷈>", "<F:󰟡>", "<G:󰄧>", "<H:󰑈>", "<I:󰢬>" },
  [ALT_TAGS_DECORATION] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I"},
};


/* There are two options when it comes to per-client rules:
 *  - a typical struct table or
 *  - using the RULE macro
 *
 * A traditional struct table looks like this:
 *    // class      instance  title  wintype  tags mask  isfloating  monitor
 *    { "Gimp",     NULL,     NULL,  NULL,    1 << 4,    0,          -1 },
 *    { "Firefox",  NULL,     NULL,  NULL,    1 << 7,    0,          -1 },
 *
 * The RULE macro has the default values set for each field allowing you to only
 * specify the values that are relevant for your rule, e.g.
 *
 *    RULE(.class = "Gimp", .tags = 1 << 4)
 *    RULE(.class = "Firefox", .tags = 1 << 7)
 *
 * Refer to the Rule struct definition for the list of available fields depending on
 * the patches you enable.
 */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
	RULE(.wintype = WTYPE "DIALOG", .isfloating = 1)
  RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype = WTYPE "SPLASH", .isfloating = 1)
	RULE(.class = "Nemo", .instance = "file_progress", .isfloating = 1)
	RULE(.class = "GParted", .tags = 1, .iscentered = 1, .isfloating = 1, .floatpos = "50% 50% 1133W 485H")
	RULE(.class = "Event Tester", .isfloating = 1)
	RULE(.class = "Google-chrome", .tags = 1 << 1, .switchtag = 1)
	RULE(.class = "Microsoft-edge-dev", .tags = 1 << 2, .switchtag = 1)
	RULE(.class = "Skype", .role = "browser-window", .tags = 1 << 5, .switchtag = 1, .isfloating = 1, .floatpos = "50% 50% 934W 971H")
	RULE(.title = "untitled - Geany (new instance)", .tags = 1 << 4, .switchtag = 3)
	RULE(.class = "ranger", .isfloating = 1, .isterminal = 1, .floatpos = "50% 50% 800W 560H")
	RULE(.class = "lf", .isfloating = 1, .isterminal = 1, .floatpos = "50% 50% 800W 560H")
	RULE(.class = "feh", .isfloating = 1)
	RULE(.class = "Nemo", .tags = 1 << 3, .switchtag = 1)
	RULE(.class = "Code", .tags = 1 << 4, .switchtag = 1)
	RULE(.title = "Picture in picture", .isfloating = 1)
	RULE(.class = "vlc", .tags = 1 << 7, .switchtag = 3)
	RULE(.class = "Thunar", .tags = 1 << 8, .switchtag = 3)
	RULE(.instance = "czkawka-gui", .tags = 1 << 6, .switchtag = 3)
	RULE(.title = "Czkawka Progress Window", .tags = 1 << 6, .switchtag = 3, .isfloating = 1, .floatpos = "50% 50% 934W 971H")
	RULE(.instance = "font-manager", .class = "Font-manager", .tags = 1 << 6, .switchtag = 2, .isfloating = 1, .floatpos = "50% 0% 50% 50%")
	RULE(.instance = "spotify", .class = "Spotify", .tags = 1 << 5, .switchtag = 1)
  RULE(.instance = "spterm", .tags = SPTAG(0), .isfloating = 1, .isterminal = 1)
  RULE(.instance = "spcal", .tags = SPTAG(1), .isfloating = 1, .isterminal = 1)
};

static const MonitorRule monrules[] = {
	/* monitor  tag   layout  mfact  nmaster  showbar  topbar */
	//{  1,       -1,   2,      -1,    -1,      -1,      -1     }, // use a different layout for the second monitor
	//{  -1,      -1,   0,      -1,    -1,      -1,      -1     }, // default
	{   -1,       1,   0,      -1,    -1,      -1,      -1    }, // mon#0 tag#1 : default
    {   -1,       2,   0,      -1,    -1,      -1,      -1     }, // mon#0 tag#2 : default
    {   -1,       3,   0,      -1,    -1,      -1,     -1     }, // mon#0 tag#3 : default
    {   -1,       4,   0,      -1,    -1,      -1,      1     }, // mon#0 tag#4 : default
    {   -1,       5,   0,      -1,    -1,      -1,      1     }, // mon#0 tag#5 : default
    {   -1,       6,   0,      -1,    -1,      -1,      -1     }, // mon#0 tag#6 : default
    {   -1,       7,   0,      -1,    -1,      -1,      -1     }, // mon#0 tag#7 : default
    {   -1,       8,   0,      -1,    -1,      -1,      -1     }, // mon#0 tag#8 : default
    {   -1,       9,   0,      -1,    -1,      -1,      -1     }, // mon#0 tag#9 : default
    {   -1,       0,   9,      -1,    -1,      -1,      -1     }, // mon#0 tag#0 : grid layout (#9) - nice for winview

    {   1,       1,   0,      -1,    -1,      -1,      -1     }, // mon#1 tag#1 : default
    {   1,       2,   0,      -1,    -1,      -1,      -1     }, // mon#1 tag#2 : default
    {   1,       3,   0,      -1,    -1,      -1,      -1     }, // mon#1 tag#3 : default
    {   1,       4,   0,      -1,    -1,      -1,      -1     }, // mon#1 tag#4 : default
    {   1,       5,   0,      -1,    -1,      0,      -1     }, // mon#1 tag#5 : default
    {   1,       6,   0,      -1,    -1,      0,      -1     }, // mon#1 tag#6 : default
    {   1,       7,   0,      -1,    -1,      0,      -1     }, // mon#1 tag#7 : default
    {   1,       8,   0,      -1,    -1,      0,      -1     }, // mon#1 tag#8 : default
    {   1,       9,   0,      -1,    -1,      -1,      -1     }, // mon#1 tag#9 : default
    {   1,       0,   9,      -1,    -1,      -1,      -1     }, // mon#1 tag#0 : grid layout (#9) - nice for winview
};


/* Bar rules allow you to configure what is shown where on the bar, as well as
 * introducing your own bar modules.
 *
 *    monitor:
 *      -1  show on all monitors
 *       0  show on monitor 0
 *      'A' show on active monitor (i.e. focused / selected) (or just -1 for active?)
 *    bar - bar index, 0 is default, 1 is extrabar
 *    alignment - how the module is aligned compared to other modules
 *    widthfunc, drawfunc, clickfunc - providing bar module width, draw and click functions
 *    name - does nothing, intended for visual clue and for logging / debugging
 */
static const BarRule barrules[] = {
	/* monitor   bar    alignment         widthfunc                drawfunc                clickfunc                name */
	{ -1,        0,     BAR_ALIGN_LEFT,   width_stbutton,          draw_stbutton,          click_stbutton,          "statusbutton" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_taglabels,         draw_taglabels,         click_taglabels,         "taglabels" },
	{  0,        0,     BAR_ALIGN_RIGHT,  width_systray,           draw_systray,           click_systray,           "systray" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_ltsymbol,          draw_ltsymbol,          click_ltsymbol,          "layout" },
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status2d,          draw_status2d,          click_status2d,          "status2d" },
	{ -1,        0,     BAR_ALIGN_NONE,   width_flexwintitle,      draw_flexwintitle,      click_flexwintitle,      "flexwintitle" },
};

/* layout(s) */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */



static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "󰕮",      tile },    /* first entry is default */
	{ "󰕬",      centeredmaster },
	{ "󰕰",      gaplessgrid },
	{ "󰀽",      NULL },    /* no layout function means floating behavior */
	{ NULL,       NULL },
};

#include <X11/XF86keysym.h>
/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      comboview,      {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      combotag,       {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
	{ MODKEY|Mod1Mask,              KEY,      tagnextmon,     {.ui = 1 << TAG} }, \
	{ MODKEY|Mod1Mask|ControlMask,  KEY,      tagprevmon,     {.ui = 1 << TAG} },



/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-fn", dmenufont,
	"-nb", normbgcolor,
	"-nf", normfgcolor,
	"-sb", selbgcolor,
	"-sf", selfgcolor,
	NULL
};
static const char *termcmd[]  = { "st", NULL };



static Key keys[] = {
	/* modifier                     key            function                argument */
	{ MODKEY,                       XK_backslash,  spawn,                  SHCMD("$HOME/.local/bin/dwm/dwmreload") },
	//music control
	{ 0,                       			XF86XK_AudioPrev,  spawn,              SHCMD("playerctl previous") },
	{ 0,                       			XF86XK_AudioPrev,  spawn,              SHCMD("playerctl next") },
	{ 0,                       			XF86XK_AudioPrev,  spawn,              SHCMD("playerctl play-pause") },
	{ 0,                       			XF86XK_AudioMute,  spawn,              SHCMD("$HOME/.local/bin/pulseaudio-control togmute") },
	{ 0,                       			XF86XK_AudioLowerVolume,  spawn,       SHCMD("$HOME/.local/bin/pulseaudio-control down") },
	{ 0,                       			XF86XK_AudioRaiseVolume,  spawn,       SHCMD("$HOME/.local/bin/pulseaudio-control up") },
	{ Mod1Mask,                     XK_F12,  					 spawn,       			 SHCMD("$HOME/.local/bin/pulseaudio-control next-sink") },
	//apps
	{ MODKEY,                     	XK_e,  					   spawn,       			 SHCMD("geany") },
	{ MODKEY,                     	XK_v,  					   spawn,       			 SHCMD("code") },
	{ MODKEY,                     	XK_f,  					   spawn,       			 SHCMD("nemo") },
	{ MODKEY,                     	XK_m,  					   spawn,       			 SHCMD("spotify") },
	{ MODKEY,                     	XK_g,  					   spawn,       			 SHCMD("google-chrome-stable") },
	{ MODKEY,                     	XK_b,  					   spawn,       			 SHCMD("microsoft-edge-stable") },
	{ MODKEY,                     	XK_t,  					   spawn,       			 SHCMD("$HOME/.local/bin/dwm/dwmterm") },
	{ MODKEY,                     	XK_a,  					   spawn,       			 SHCMD("$HOME/.local/bin/greenclip_dmenu.sh") },
	//rofi
	{ MODKEY,                     	XK_l,  					   spawn,       			 SHCMD("$HOME/.config/rofi/bin/launcher.sh") },
	{ MODKEY,                     	XK_x,  					   spawn,       			 SHCMD("$HOME/.config/rofi/bin/powermenu.sh") },
	{ MODKEY,                     	XK_r,  					   spawn,       			 SHCMD("$HOME/.config/rofi/bin/asroot.sh") },
	{ MODKEY,                     	XK_n,  					   spawn,       			 SHCMD("$HOME/.config/rofi/bin/network.sh") },
	{ MODKEY,                     	XK_w,  					   spawn,       			 SHCMD("$HOME/.config/rofi/bin/windows.sh") },
	{ MODKEY|ControlMask, 					XK_Left, 				placedir, 							{.i = 0}},  // left
  { MODKEY|ControlMask, 					XK_Right,				placedir, 							{.i = 1}}, // right
  { MODKEY|ControlMask, 					XK_Up,					placedir, 							{.i = 2}},    // up
  { MODKEY|ControlMask, 					XK_Down, 				placedir, 							{.i = 3}},  // down
	{ MODKEY,                       XK_p,          spawn,                  {.v = dmenucmd } },
	{ MODKEY,             					XK_Return,     spawn,                  {.v = termcmd } },
	//{ MODKEY,                       XK_b,          togglebar,              {0} },
	{ MODKEY|ControlMask,           XK_space,      focusmaster,            {0} },
	{ MODKEY,                       XK_Left,       focusstack,             {.i = +1 } }, // left
	{ MODKEY,                       XK_Right,      focusstack,             {.i = -1 } }, // right
	{ MODKEY,                       XK_Up,         focusstack,             {.i = +2 } }, // up
	{ MODKEY,                       XK_Down,       focusstack,             {.i = -2 } }, // down
<<<<<<< HEAD
	{ MODKEY,                       XK_i,          incnmaster,             {.i = +1 } },
	{ MODKEY,                       XK_d,          incnmaster,             {.i = -1 } },
	{ MODKEY,                       XK_h,          setmfact,               {.f = -0.05} },
	{ MODKEY,                       XK_l,          setmfact,               {.f = +0.05} },
=======
	#endif // STACKER_PATCH
	#if FOCUSDIR_PATCH
	{ MODKEY,                       XK_Left,       focusdir,               {.i = 0 } }, // left
	{ MODKEY,                       XK_Right,      focusdir,               {.i = 1 } }, // right
	{ MODKEY,                       XK_Up,         focusdir,               {.i = 2 } }, // up
	{ MODKEY,                       XK_Down,       focusdir,               {.i = 3 } }, // down
	#endif // FOCUSDIR_PATCH
	#if SWAPFOCUS_PATCH && PERTAG_PATCH
	{ MODKEY,                       XK_s,          swapfocus,              {.i = -1 } },
	#endif // SWAPFOCUS_PATCH
	#if SWITCHCOL_PATCH
	{ MODKEY,                       XK_v,          switchcol,              {0} },
	#endif // SWITCHCOL_PATCH
	#if ROTATESTACK_PATCH
	{ MODKEY|Mod4Mask,              XK_j,          rotatestack,            {.i = +1 } },
	{ MODKEY|Mod4Mask,              XK_k,          rotatestack,            {.i = -1 } },
	#endif // ROTATESTACK_PATCH
	#if INPLACEROTATE_PATCH
	{ MODKEY|Mod4Mask,              XK_j,          inplacerotate,          {.i = +2 } }, // same as rotatestack
	{ MODKEY|Mod4Mask,              XK_k,          inplacerotate,          {.i = -2 } }, // same as reotatestack
	{ MODKEY|Mod4Mask|ShiftMask,    XK_j,          inplacerotate,          {.i = +1} },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_k,          inplacerotate,          {.i = -1} },
	#endif // INPLACEROTATE_PATCH
	#if PUSH_PATCH || PUSH_NO_MASTER_PATCH
	{ MODKEY|ControlMask,           XK_j,          pushdown,               {0} },
	{ MODKEY|ControlMask,           XK_k,          pushup,                 {0} },
	#endif // PUSH_PATCH / PUSH_NO_MASTER_PATCH
	{ Mod1Mask,                       XK_i,          incnmaster,             {.i = +1 } },
	{ Mod1Mask,                       XK_d,          incnmaster,             {.i = -1 } },
	#if FLEXTILE_DELUXE_LAYOUT
	{ MODKEY|ControlMask,           XK_i,          incnstack,              {.i = +1 } },
	{ MODKEY|ControlMask,           XK_u,          incnstack,              {.i = -1 } },
	#endif // FLEXTILE_DELUXE_LAYOUT
	{ Mod1Mask,                       XK_comma,          setmfact,               {.f = -0.05} },
	{ Mod1Mask,                       XK_period,          setmfact,               {.f = +0.05} },
	#if CFACTS_PATCH
>>>>>>> 1f23200
	{ MODKEY|ShiftMask,             XK_h,          setcfact,               {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,          setcfact,               {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,          setcfact,               {0} },
	{ Mod1Mask,              				XK_Down,       moveresize,             {.v = "0x 25y 0w 0h" } },
	{ Mod1Mask,              				XK_Up,         moveresize,             {.v = "0x -25y 0w 0h" } },
	{ Mod1Mask,              				XK_Right,      moveresize,             {.v = "25x 0y 0w 0h" } },
	{ Mod1Mask,              				XK_Left,       moveresize,             {.v = "-25x 0y 0w 0h" } },
	{ Mod1Mask|ShiftMask,    				XK_Down,       moveresize,             {.v = "0x 0y 0w 25h" } },
	{ Mod1Mask|ShiftMask,    				XK_Up,         moveresize,             {.v = "0x 0y 0w -25h" } },
	{ Mod1Mask|ShiftMask,    				XK_Right,      moveresize,             {.v = "0x 0y 25w 0h" } },
	{ Mod1Mask|ShiftMask,    				XK_Left,       moveresize,             {.v = "0x 0y -25w 0h" } },
	{ MODKEY,                       XK_Return,     zoom,                   {0} },
	{ MODKEY,                       XK_Tab,        view,                   {0} },
	{ MODKEY,           						XK_z,          showhideclient,         {0} },
	{ MODKEY,             					XK_c,          killclient,             {0} },
	{ MODKEY|ShiftMask,             XK_q,          quit,                   {0} },
	{ MODKEY,												XK_q,          quit,                   {1} },
	{ MODKEY,                       XK_u,          focusurgent,            {0} },
	{ MODKEY|ShiftMask,             XK_F5,         xrdb,                   {.v = NULL } },
	{ Mod1Mask,                     XK_F1,         setlayout,              {.v = &layouts[0]} },
	{ Mod1Mask,                     XK_F2,         setlayout,              {.v = &layouts[1]} },
	{ Mod1Mask,                     XK_F3,         setlayout,              {.v = &layouts[2]} },
	{ Mod1Mask,                     XK_F4,         setlayout,              {.v = &layouts[2]} },
	//{ MODKEY,                       XK_space,      setlayout,              {0} },
	//{ MODKEY|ShiftMask,             XK_space,      togglefloating,         {0} },
	{ MODKEY,                       XK_grave,      togglescratch,          {.ui = 0 } },
	{ MODKEY,                       XK_F1,      	 togglescratch,          {.ui = 0 } },
	{ MODKEY,                       XK_F2,      	 togglescratch,          {.ui = 1 } },
	{ MODKEY,                       XK_F3,      	 togglescratch,          {.ui = 2 } },
	{ MODKEY|ControlMask,           XK_grave,      setscratch,             {.ui = 0 } },
	{ MODKEY|ShiftMask,             XK_grave,      removescratch,          {.ui = 0 } },
	{ MODKEY|ShiftMask,             XK_s,          togglesticky,           {0} },
	{ MODKEY,                       XK_0,          view,                   {.ui = ~SPTAGMASK } },
	{ MODKEY|ShiftMask,             XK_0,          tag,                    {.ui = ~SPTAGMASK } },
	{ MODKEY,                       XK_comma,      focusmon,               {.i = -1 } },
	{ MODKEY,                       XK_period,     focusmon,               {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,      tagmon,                 {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,     tagmon,                 {.i = +1 } },
	/* Note that due to key limitations the below example kybindings are defined with a Mod3Mask,
	 * which is not always readily available. Refer to the patch wiki for more details. */
	/* Client position is limited to monitor window area */
	{ Mod3Mask,                     XK_u,            floatpos,               {.v = "-26x -26y" } }, // ↖
	{ Mod3Mask,                     XK_i,            floatpos,               {.v = "  0x -26y" } }, // ↑
	{ Mod3Mask,                     XK_o,            floatpos,               {.v = " 26x -26y" } }, // ↗
	{ Mod3Mask,                     XK_j,            floatpos,               {.v = "-26x   0y" } }, // ←
	{ Mod3Mask,                     XK_l,            floatpos,               {.v = " 26x   0y" } }, // →
	{ Mod3Mask,                     XK_m,            floatpos,               {.v = "-26x  26y" } }, // ↙
	{ Mod3Mask,                     XK_comma,        floatpos,               {.v = "  0x  26y" } }, // ↓
	{ Mod3Mask,                     XK_period,       floatpos,               {.v = " 26x  26y" } }, // ↘
	/* Absolute positioning (allows moving windows between monitors) */
	{ Mod3Mask|ControlMask,         XK_u,            floatpos,               {.v = "-26a -26a" } }, // ↖
	{ Mod3Mask|ControlMask,         XK_i,            floatpos,               {.v = "  0a -26a" } }, // ↑
	{ Mod3Mask|ControlMask,         XK_o,            floatpos,               {.v = " 26a -26a" } }, // ↗
	{ Mod3Mask|ControlMask,         XK_j,            floatpos,               {.v = "-26a   0a" } }, // ←
	{ Mod3Mask|ControlMask,         XK_l,            floatpos,               {.v = " 26a   0a" } }, // →
	{ Mod3Mask|ControlMask,         XK_m,            floatpos,               {.v = "-26a  26a" } }, // ↙
	{ Mod3Mask|ControlMask,         XK_comma,        floatpos,               {.v = "  0a  26a" } }, // ↓
	{ Mod3Mask|ControlMask,         XK_period,       floatpos,               {.v = " 26a  26a" } }, // ↘
	/* Resize client, client center position is fixed which means that client expands in all directions */
	{ Mod3Mask|ShiftMask,           XK_u,            floatpos,               {.v = "-26w -26h" } }, // ↖
	{ Mod3Mask|ShiftMask,           XK_i,            floatpos,               {.v = "  0w -26h" } }, // ↑
	{ Mod3Mask|ShiftMask,           XK_o,            floatpos,               {.v = " 26w -26h" } }, // ↗
	{ Mod3Mask|ShiftMask,           XK_j,            floatpos,               {.v = "-26w   0h" } }, // ←
	{ Mod3Mask|ShiftMask,           XK_k,            floatpos,               {.v = "800W 800H" } }, // ·
	{ Mod3Mask|ShiftMask,           XK_l,            floatpos,               {.v = " 26w   0h" } }, // →
	{ Mod3Mask|ShiftMask,           XK_m,            floatpos,               {.v = "-26w  26h" } }, // ↙
	{ Mod3Mask|ShiftMask,           XK_comma,        floatpos,               {.v = "  0w  26h" } }, // ↓
	{ Mod3Mask|ShiftMask,           XK_period,       floatpos,               {.v = " 26w  26h" } }, // ↘
	/* Client is positioned in a floating grid, movement is relative to client's current position */
	{ Mod3Mask|Mod1Mask,            XK_u,            floatpos,               {.v = "-1p -1p" } }, // ↖
	{ Mod3Mask|Mod1Mask,            XK_i,            floatpos,               {.v = " 0p -1p" } }, // ↑
	{ Mod3Mask|Mod1Mask,            XK_o,            floatpos,               {.v = " 1p -1p" } }, // ↗
	{ Mod3Mask|Mod1Mask,            XK_j,            floatpos,               {.v = "-1p  0p" } }, // ←
	{ Mod3Mask|Mod1Mask,            XK_k,            floatpos,               {.v = " 0p  0p" } }, // ·
	{ Mod3Mask|Mod1Mask,            XK_l,            floatpos,               {.v = " 1p  0p" } }, // →
	{ Mod3Mask|Mod1Mask,            XK_m,            floatpos,               {.v = "-1p  1p" } }, // ↙
	{ Mod3Mask|Mod1Mask,            XK_comma,        floatpos,               {.v = " 0p  1p" } }, // ↓
	{ Mod3Mask|Mod1Mask,            XK_period,       floatpos,               {.v = " 1p  1p" } }, // ↘
	//{ MODKEY|ControlMask,           XK_comma,      cyclelayout,            {.i = -1 } },
	//{ MODKEY|ControlMask,           XK_period,     cyclelayout,            {.i = +1 } },
	TAGKEYS(                        XK_1,                                  0)
	TAGKEYS(                        XK_2,                                  1)
	TAGKEYS(                        XK_3,                                  2)
	TAGKEYS(                        XK_4,                                  3)
	TAGKEYS(                        XK_5,                                  4)
	TAGKEYS(                        XK_6,                                  5)
	TAGKEYS(                        XK_7,                                  6)
	TAGKEYS(                        XK_8,                                  7)
	TAGKEYS(                        XK_9,                                  8)

	TAGKEYS(                        XK_KP_End,                             0)
	TAGKEYS(                        XK_KP_Down,                            1)
	TAGKEYS(                        XK_KP_Page_Down,                       2)
	TAGKEYS(                        XK_KP_Left,                            3)
	TAGKEYS(                        XK_KP_Begin,                           4)
	TAGKEYS(                        XK_KP_Right,                           5)
	TAGKEYS(                        XK_KP_Home,                            6)
	TAGKEYS(                        XK_KP_Up,                              7)
	TAGKEYS(                        XK_KP_Page_Up,                         8)
};


/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkButton,            0,                   Button1,        spawn,          SHCMD("$HOME/.config/rofi/bin/launcher.sh")},
	{ ClkButton,            0,                   Button3,        spawn,          SHCMD("$HOME/.config/rofi/bin/powermenu.sh")},
	{ ClkLtSymbol,          0,                   Button1,        spawn,      		 {0} },
	{ ClkLtSymbol,          0,                   Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkLtSymbol,          0,                   Button1,        cyclelayout,    {1} },
	{ ClkWinTitle,          0,                   Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,                   Button3,        showhideclient, {0} },
	{ ClkWinTitle,          0,                   Button2,        killclient, 		 {0} },
	{ ClkWinTitle,          MODKEY,              Button1,        togglefloating, {0} },
	{ ClkWinTitle,          MODKEY,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,              Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};

/* signal definitions */
/* signum must be greater than 0 */
/* trigger signals using `xsetroot -name "fsignal:<signame> [<type> <value>]"` */
static Signal signals[] = {
	/* signum                    function */
	{ "focusstack",              focusstack },
	{ "setmfact",                setmfact },
	{ "togglebar",               togglebar },
	{ "incnmaster",              incnmaster },
	{ "togglefloating",          togglefloating },
	{ "focusmon",                focusmon },
	{ "focusurgent",             focusurgent },
	{ "setcfact",                setcfact },
	{ "tagmon",                  tagmon },
	{ "zoom",                    zoom },
	{ "view",                    view },
	{ "viewall",                 viewallex },
	{ "viewex",                  viewex },
	{ "toggleview",              toggleview },
	{ "togglesticky",            togglesticky },
	{ "cyclelayout",             cyclelayout },
	{ "toggleviewex",            toggleviewex },
	{ "tag",                     tag },
	{ "tagall",                  tagallex },
	{ "tagex",                   tagex },
	{ "toggletag",               toggletag },
	{ "toggletagex",             toggletagex },
	{ "togglescratch",           togglescratch },
	{ "killclient",              killclient },
	{ "xrdb",                    xrdb },
	{ "tagnextmonex",            tagnextmonex },
	{ "tagprevmonex",            tagprevmonex },
	{ "quit",                    quit },
	{ "setlayout",               setlayout },
	{ "setlayoutex",             setlayoutex },
};

static const char *ipcsockpath = "/tmp/dwm.sock";
static IPCCommand ipccommands[] = {
	IPCCOMMAND( focusmon, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( focusstack, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incnmaster, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( killclient, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( quit, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setlayoutsafe, 1, {ARG_TYPE_PTR} ),
	IPCCOMMAND( setmfact, 1, {ARG_TYPE_FLOAT} ),
	IPCCOMMAND( setstatus, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( tag, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( tagmon, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( togglebar, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( togglefloating, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( toggletag, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( toggleview, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( view, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( zoom, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setcfact, 1, {ARG_TYPE_FLOAT} ),
	IPCCOMMAND( cyclelayout, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( floatpos, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( focusurgent, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( moveresize, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( togglescratch, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( togglesticky, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( tagnextmonex, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( tagprevmonex, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( xrdb, 1, {ARG_TYPE_NONE} ),
};

