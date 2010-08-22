/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (tcpcapinfo_opts.c)
 *  
 *  It has been AutoGen-ed  August 22, 2010 at 02:45:24 PM by AutoGen 5.9.9
 *  From the definitions    tcpcapinfo_opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 32:2:7 templates.
 */

/*
 *  This file was produced by an AutoOpts template.  AutoOpts is a
 *  copyrighted work.  This source file is not encumbered by AutoOpts
 *  licensing, but is provided under the licensing terms chosen by the
 *  tcpcapinfo author or copyright holder.  AutoOpts is licensed under
 *  the terms of the LGPL.  The redistributable library (``libopts'') is
 *  licensed under the terms of either the LGPL or, at the users discretion,
 *  the BSD license.  See the AutoOpts and/or libopts sources for details.
 *
 * This source file is copyrighted and licensed under the following terms:
 *
 * tcpcapinfo copyright (c) 2000-2010 Aaron Turner - all rights reserved
 *
 * tcpcapinfo is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * tcpcapinfo is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <sys/types.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
extern FILE * option_usage_fp;
#define OPTION_CODE_COMPILE 1
#include "tcpcapinfo_opts.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* TRANSLATORS: choose the translation for option names wisely because you
                cannot ever change your mind. */
tSCC zCopyright[] =
       "tcpcapinfo copyright (c) 2000-2010 Aaron Turner, all rights reserved";
tSCC zCopyrightNotice[608] =
"tcpcapinfo is free software: you can redistribute it and/or modify it under the\n\
terms of the GNU General Public License as published by the Free Software\n\
Foundation, either version 3 of the License, or (at your option) any later\n\
version.\n\n\
tcpcapinfo is distributed in the hope that it will be useful, but WITHOUT ANY\n\
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A\n\
PARTICULAR PURPOSE.  See the GNU General Public License for more details.\n\n\
You should have received a copy of the GNU General Public License along with\n\
this program.  If not, see <http://www.gnu.org/licenses/>.";

extern tUsageProc optionUsage;

/*
 *  global included definitions
 */
#include "defines.h"
#include "common.h"
#include "config.h"


#ifndef NULL
#  define NULL 0
#endif
#ifndef EXIT_SUCCESS
#  define  EXIT_SUCCESS 0
#endif
#ifndef EXIT_FAILURE
#  define  EXIT_FAILURE 1
#endif
/*
 *  Dbug option description:
 */
#ifdef DEBUG
tSCC    zDbugText[] =
        "Enable debugging output";
tSCC    zDbug_NAME[]               = "DBUG";
tSCC    zDbug_Name[]               = "dbug";
#define zDbugDefaultArg              ((char const*)0)
#define DBUG_FLAGS       (OPTST_DISABLED | OPTST_IMM \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

#else   /* disable Dbug */
#define VALUE_OPT_DBUG NO_EQUIVALENT
#define DBUG_FLAGS       (OPTST_OMITTED | OPTST_NO_INIT)
#define zDbugDefaultArg NULL
#define zDbugText       NULL
#define zDbug_NAME      NULL
#define zDbug_Name      NULL
#endif  /* DEBUG */

/*
 *  Version option description:
 */
tSCC    zVersionText[] =
        "Print version information";
tSCC    zVersion_NAME[]            = "VERSION";
tSCC    zVersion_Name[]            = "version";
#define VERSION_FLAGS       (OPTST_DISABLED)

/*
 *  Help/More_Help option descriptions:
 */
tSCC zHelpText[]          = "Display usage information and exit";
tSCC zHelp_Name[]         = "help";
tSCC zMore_HelpText[]     = "Extended usage information passed thru pager";
tSCC zMore_Help_Name[]    = "more-help";
/*
 *  Declare option callback procedures
 */
#ifdef DEBUG
  static tOptProc doOptDbug;
#else /* not DEBUG */
# define doOptDbug NULL
#endif /* def/not DEBUG */
extern tOptProc
    optionPagedUsage;
static tOptProc
    doOptVersion, doUsageOpt;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the Tcpcapinfo Option Descriptions.
 */
static tOptDesc optDesc[ OPTION_CT ] = {
  {  /* entry idx, value */ 0, VALUE_OPT_DBUG,
     /* equiv idx, value */ 0, VALUE_OPT_DBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DBUG_FLAGS, 0,
     /* last opt argumnt */ { zDbugDefaultArg },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptDbug,
     /* desc, NAME, name */ zDbugText, zDbug_NAME, zDbug_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_VERSION,
     /* equiv idx, value */ 1, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VERSION_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptVersion,
     /* desc, NAME, name */ zVersionText, zVersion_NAME, zVersion_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, 0,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ zHelpText, NULL, zHelp_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, 0,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ zMore_HelpText, NULL, zMore_Help_Name,
     /* disablement strs */ NULL, NULL }
};

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the Tcpcapinfo Option Environment
 */
tSCC   zPROGNAME[]   = "TCPCAPINFO";
tSCC   zUsageTitle[] =
"tcpcapinfo (Tcpreplay Suite) - Pcap file dissector for debugging broken pcap files\n\
USAGE:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... <pcap_file(s)>\n";
#define zRcName     NULL
#define apzHomeList NULL

tSCC   zBugsAddr[]    = "tcpreplay-users@lists.sourceforge.net";
tSCC   zExplain[]     = "\n\
tcpcapinfo is a tool for decoding the structure of a pcap(3) file with\n\
a focus on finding broken pcap files and determining how two related\n\
pcap files might differ.\n";
tSCC    zDetail[]     = "\n\
tcpcapinfo will first print out the pcap_file_header_t in human\n\
readable form followed by a per-packet summary including the pcap_pkthdr_t\n\
and simple checksum value of the packet.\n";
#define zFullVersion    NULL
/* extracted from /usr/local/share/autogen/optcode.tpl near line 501 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */


#define tcpcapinfo_full_usage NULL
#define tcpcapinfo_short_usage NULL
tOptions tcpcapinfoOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_ARGS_REQ
    + OPTPROC_GNUUSAGE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zCopyrightNotice,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage,       /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    4 /* full option count */, 2 /* user option count */,
    tcpcapinfo_full_usage, tcpcapinfo_short_usage,
    NULL, NULL
};

/*
 *  Create the static procedure(s) declared above.
 */
static void
doUsageOpt(
    tOptions*   pOptions,
    tOptDesc*   pOptDesc )
{
    (void)pOptions;
    USAGE( EXIT_SUCCESS );
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   For the dbug option, when DEBUG is #define-d.
 */
#ifdef DEBUG
static void
doOptDbug(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static const struct {long const rmin, rmax;} rng[1] = {
        { 0, 5 } };
    long val;
    int  ix;
    char * pzEnd;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;

    errno = 0;
    val = strtol(pOptDesc->optArg.argString, &pzEnd, 0);
    if ((pOptDesc->optArg.argString == pzEnd) || (errno != 0))
        goto bad_value;

    if (*pzEnd != '\0')
        goto bad_value;
    for (ix = 0; ix < 1; ix++) {
        if (val < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (val == rng[ix].rmin)
            goto valid_return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (val <= rng[ix].rmax)
            goto valid_return;
    }

  bad_value:

    option_usage_fp = stderr;

  emit_ranges:
    optionShowRange(pOptions, pOptDesc, (void *)rng, 1);
    return;

  valid_return:
    if ((pOptDesc->fOptState & OPTST_ALLOC_ARG) != 0) {
        free((void *)pOptDesc->optArg.argString);
        pOptDesc->fOptState &= ~OPTST_ALLOC_ARG;
    }
    pOptDesc->optArg.argInt = val;
}
#endif /* defined DEBUG */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   For the version option.
 */
static void
doOptVersion(tOptions* pOptions, tOptDesc* pOptDesc)
{
    /* extracted from tcpcapinfo_opts.def, line 96 */

    fprintf(stderr, "tcpcapinfo version: %s (build %s)", VERSION, svn_version());
#ifdef DEBUG
    fprintf(stderr, " (debug)");
#endif
    fprintf(stderr, "\n");
    fprintf(stderr, "Copyright 2000-2010 by Aaron Turner <aturner at synfin dot net>\n");
    fprintf(stderr, "The entire Tcpreplay Suite is licensed under the GPLv3\n");
    exit(0);

}
/* extracted from /usr/local/share/autogen/optcode.tpl near line 633 */

#if ENABLE_NLS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <autoopts/usage-txt.h>

static char* AO_gettext( char const* pz );
static void  coerce_it(void** s);

static char*
AO_gettext( char const* pz )
{
    char* pzRes;
    if (pz == NULL)
        return NULL;
    pzRes = _(pz);
    if (pzRes == pz)
        return pzRes;
    pzRes = strdup( pzRes );
    if (pzRes == NULL) {
        fputs( _("No memory for duping translated strings\n"), stderr );
        exit( EXIT_FAILURE );
    }
    return pzRes;
}

static void coerce_it(void** s) { *s = AO_gettext(*s); }
#define COERSION(_f) \
  coerce_it((void*)&(tcpcapinfoOptions._f))

/*
 *  This invokes the translation code (e.g. gettext(3)).
 */
static void
translate_option_strings( void )
{
    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_usage_text.field_ct != 0) {

        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        tOptDesc* pOD = tcpcapinfoOptions.pOptDesc;
        char**    ppz = (char**)(void*)&(option_usage_text);
        int       ix  = option_usage_text.field_ct;

        do {
            ppz++;
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);

        COERSION(pzCopyright);
        COERSION(pzCopyNotice);
        COERSION(pzFullVersion);
        COERSION(pzUsageTitle);
        COERSION(pzExplain);
        COERSION(pzDetail);
        option_usage_text.field_ct = 0;

        for (ix = tcpcapinfoOptions.optCt; ix > 0; ix--, pOD++)
            coerce_it((void*)&(pOD->pzText));
    }

    if ((tcpcapinfoOptions.fOptSet & OPTPROC_NXLAT_OPT_CFG) == 0) {
        tOptDesc* pOD = tcpcapinfoOptions.pOptDesc;
        int       ix;

        for (ix = tcpcapinfoOptions.optCt; ix > 0; ix--, pOD++) {
            coerce_it((void*)&(pOD->pz_Name));
            coerce_it((void*)&(pOD->pz_DisableName));
            coerce_it((void*)&(pOD->pz_DisablePfx));
        }
        /* prevent re-translation */
        tcpcapinfoOptions.fOptSet |= OPTPROC_NXLAT_OPT_CFG | OPTPROC_NXLAT_OPT;
    }
}

#endif /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
/* tcpcapinfo_opts.c ends here */
