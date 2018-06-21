<pre>
			   WELCOME TO TVPLUS

   ======================================================================
   Copyright Robert Hazeltine and Rachel Polanskis 1995
   ======================================================================


   TVPlus is the C++ Turbo Vision FAQ.

   The FAQ is divided into the following headings:

	   Ralp Nader takes an interest in Win95
	   The Guide
	   The Epilogue

   =======================================================================
				 THE NEWS
   =======================================================================

   This heading outlines the changes made since 1995.07.13.

   1.  The TVPlus home page was amended to include an item of general 
   import that Ralph Nader has put Win95 under scrutiny (see Appendix A). 

   2.  Under the heading, TVPlus ftp site, it was noted that 
   Eric Woodruff has supplied a replacement for the message 
   input box (MIBX20.ZIP), new module for colour syntax highlighting 
   (CSH100.ZIP) and a new version of TV Virtual Memory Editor 
   (TVME30.ZIP).
   
   3.  The URL for the Verona University, Italy has been 
   included in the list of general sites of interest to TV programmers.

   =======================================================================
				  THE GUIDE
   =======================================================================

   About TVPlus
   About Turbo Vision
   Books and journals
   Software resources
   The discussion list
   UseNet newsgroups
   Handy FTP sites
   Web pages to peruse
   Selected answers on programming
   Applications written with Turbo Vision
   Acknowledgements


   ----------------------------------------------------------------------
			  About TVPlus
   ----------------------------------------------------------------------

   Objectives
   Wanted!
   Availability of TVPlus
   Style conventions
   Maintainers of TVPlus
   Distribution rights


   ----------------------------------------------------------------------
   OBJECTIVES
   ----------------------------------------------------------------------

   The object of TVPlus is to provide an answer book on Turbo Vision and to
   make access to it by its users as easy as possible.

   The emphasis during the early development is to identify various
   resources that can be commonly used in the development of TV programmes.
   Consolidating various references on the Internet into one document is
   the basic requirement, we believe, to finding what you need to use the
   TV library to full advantage - and to cut the time necessary to become
   productive.

   From this basis, we can manage the development of the FAQ more orderly
   while, at the same time, answering perhaps the most frequently asked of
   questions: "Where is ... ?" or "Where can I get ... ?"

   There has, however, been several aspects to this early emphasis. First,
   to find the resources that directly affect the use of the TV framework
   such as patches, extensions to the TV classes and the like. Secondly,
   keeping the context in which TV was developed and is used to the fore -
   thus providing leads to relevant resources such as compiler patches,
   porting to other platforms and the like. Thirdly, a little self
   indulgence in identifying and promoting applications based on Turbo
   Vision.

   ----------------------------------------------------------------------
   INFORMATION WANTED
   ----------------------------------------------------------------------

   Have you information you think others might be interested in?


   CONTRIBUTIONS

   If you have the basis of a contribution that others might find
   interesting, please polish it up for TVPlus.

   There is plenty of scope for useful articles in the pages of TVPlus,
   especially the sections that make up the chapter on Selected answers on
   programming or the chapter about Dead Parrots.

   Contributors can submit their material to us via

	   email at <mailto:grove@zeta.org.au>; or
	   anonymous ftp at <ftp://ftp.zeta.org.au/home/grove/>.


   MIRROR SITES

   TVPlus would like to establish mirror sites in the other parts of the
   world, especially in the US and Europe. By doing so we expect that
   response times for international users will be radically improved. Use
   of mirror sites will also help to eliminate the bandwidth hit on
   zeta.org.au's relatively narrow network link.

   Please contact us, the co-maintainers of TVPlus, for more information
   about becoming a mirror site for TVPlus.

   APPLICATIONS

   You can use TVPlus to publicise any software you may have written
   using Turbo Vision C++. An outline is presented in the chapter
   'Applications written with Turbo Vision' to help you prepare
   information about your application.

   ABOUT TVPLUS ITSELF

   We appreciate feedback on anything that you consider relevant -
   performance, arrangement, layout, ease of comprehension, etc.

   Anyone interested in lending a hand with these tasks?


   -----------------------------------------------------------------------
   AVAILABILITY
   -----------------------------------------------------------------------

   Notifications about TVPlus are posted periodically on the Turbo Vision
   discussion list.

   THE TEXT/PLAIN FORMAT OF TVPLUS

   The ASCII format of TVPlus is posted each calendar month to
   <mailto:turbvis@vtvm1.cc.vt.edu> and to *.answers with changes (if any)
   since being posted the previous month.

   Since TVPlus has been approved by the *.answers moderators, a copy of
   this FAQ may be downloaded from ftp://rtfm.mit.edu/pub/ or from
   our TVPlus ftp site.

   THE TEXT/HTML FORMAT OF TVPLUS

   Available on the World Wide Web at

		   <http://www.zeta.org.au/~grove/tvhome.html>,

   the Web format of TVPlus has advantages over its ASCII counterpart
   because of its

   1.  currency (material is added as the opportunity arises);
   2.  primacy (the ASCII version is derived from this one); and
   3.  flexibility (the links with other documents on line).

   If you want to download a copy of the Web version of TVPlus, you may do
   so by using our TVPlus ftp site.

   TVPlus offline

   The downloaded Web files have the extension of *.htm and can be viewed
   using any WWW browser offline. We recommend DOSLYNX for this purpose.

   DOSLYNX, which is available through ARCHIE under the the file name of
   DLX0_8A.EXE, is a creation of the University of Kansas. Enquiries
   regarding DOSLYNX should be sent there.

   To set up DOSLYNX for offline browsing use the command line options:
   DOSLYNX /nno You can configure tvhome.htm to be the home page.

   You should be able to view the downloaded ASCII version with any text
   editor as each file making up the FAQ is less than 64k.

   TVPlus mirrored privately

   Some people may prefer to access the FAQ from a local directory or from
   their shell account rather than accessing zeta.org.au directly. External
   links are operative whether access is from zeta or from a local
   directory where you have downloaded the FAQ - provided that you are
   connected to the Internet in the first place.

   If you want to use TVPlus from your local host, remember to keep your
   copy up to date or you will miss links to new files or you will be
   unaware that our files have been updated.

   So, offline or online you can use TVPlus loaded to your local directory.

   Most browers will allow you access to the source document which will
   provide quite specific URLs needed for ftpm or navigating the TVPlus'
   ftp site. They also provide bookmarks which can be used to advantage.


   ----------------------------------------------------------------------
   STYLE CONVENTIONS
   ----------------------------------------------------------------------

   This chapter outlines the style conventions used in TVPlus.

   Countries
	   ISO 3166-1981 Codes for the representation of names of countries:
	   any country name abbreviation will the same as the country
	   identification in a domain name - for example, zeta.org.au

   Currencies
	   ISO 4217-1978 Codes for the representation of currencies and
	   funds.

   Dates and time
	   ISO 2014-1976 Writing of calendar dates in all-numeric form:
	   dates are, therefore, expressed as, say, 2001.01.01 avoiding
	   ambiguity as to which country convention has been used.

   General
	   To minimise waiting time while data transfers, file sizes are, in
	   the main, < 4K and graphics use is minimal.

   HTML protocol
	   ISO 8879-1986 "Information Processing Text and Office Systems;
	   Standard Generalised Markup Language (SGML)"; HTML 2.0 is an
	   expression of this standard.

   Uniform Resource Locator (URL)
	   RFC1738 "Uniform Resource Locators": URLs used to access resources
	   on the Internet are cited, with or without delimiters, as
	   <scheme://host:port/url-path> where scheme is one of file, http,
	   news, gopher, telnet or wais and where the colon followed by the
	   TCP port number is optional; the syntatic wrapper, URL: is not
	   generally prefixed to a URL in this document.


   -----------------------------------------------------------------------
   MAINTAINERS OF TVPLUS
   -----------------------------------------------------------------------

   TVPlus is maintained by Robert Hazeltine and Rachel Polanskis from
   Sydney, Australia through our computer host, Zeta Microcomputer
   Software. This FAQ has no connection with Borland and they, in turn, do
   not contribute to the support of this service.


   -----------------------------------------------------------------------
   DISTRIBUTION RIGHTS
   -----------------------------------------------------------------------

   This FAQ may be posted to any USENET newsgroup, on-line service,
   or BBS as long as it is posted in its entirety and includes the
   copyright statement.

   This FAQ may not be distributed for financial gain.

   This FAQ may not be included in commercial collections or
   compilations without express permission from the authors.  No such
   permission has yet been given.


   -----------------------------------------------------------------------
			  About Turbo Vision
   -----------------------------------------------------------------------

   What is TV
   TV history
   TV as DLL
   TV bugs
   TV mixed and matched
   TV ports
   TV and MS-Windows
   Learning TV

   -----------------------------------------------------------------------
   WHAT IS TV
   -----------------------------------------------------------------------

   Turbo Vision is a C++ library that provides an application framework.
   It is a product of Borland International, Inc.

   -----------------------------------------------------------------------
   TV HISTORY
   -----------------------------------------------------------------------

   There are [three] versions of Turbo Vision:

   TV1.0
	 This version of the application frameworks came with BC++ 3.0;

   TV1.03
	 This version cam with BC++ 3.1:
	 .  its TV.H containing a #define _TV_VERSION which is not
		present in the earlier version; and

   TV2.0
	 This is part of the Power Pack for DOS designed for use with BC
	 4.x:
	 .  it may be used with the 16 and 32 bit DOS DPMI extenders;
	 .  it includes TInputLine validators such as TFilterValidator,
		TRangeValidator, TStringLookupValidator and TPXPictureValidator;
	 .  there is a new TMultiCheckBoxes object that is like the regular
		TCheckBoxes object but each check box can have multiple values;
		and
	 .  a new TOutline class has been added for outline views (for
		example a directory tree) with expandable and collapsible nodes.

   -----------------------------------------------------------------------
   TV as DLL
   -----------------------------------------------------------------------

   Part 1: The original proposal on making TV as DLL
   Part 2: Additional material on making TV as DLL
   Part 3: Additional comment on making TV as DLL

   -----------------------------------------------------------------------
From: grove@zeta.org.au (Rachel Polanskis)
Newsgroups: comp.os.msdos.programmer.turbovision,comp.answers,news.answers
Subject: C++ Turbo Vision FAQ, part1/3
Followup-To: poster
Approved: news-answers-request@mit.edu 
Summary: This article is a compilation of information on the use of, 
	 and resources for, Turbo Vision for C++ (Borland's application 
	 framework).

Archive-name: C++-faq/turbovision/tvplus/part1
Posting-Frequency: monthly
Last-modified: 1995/08/14
Version: 1.8
URL: http://www.zeta.org.au/~grove/tvhome.html




			   WELCOME TO TVPLUS

   ======================================================================
   Copyright Robert Hazeltine and Rachel Polanskis 1995
   ======================================================================


   TVPlus is the C++ Turbo Vision FAQ.

   The FAQ is divided into the following headings:

	   Ralp Nader takes an interest in Win95
	   The Guide
	   The Epilogue

   =======================================================================
				 THE NEWS
   =======================================================================

   This heading outlines the changes made since 1995.07.13.

   1.  The TVPlus home page was amended to include an item of general 
   import that Ralph Nader has put Win95 under scrutiny (see Appendix A). 

   2.  Under the heading, TVPlus ftp site, it was noted that 
   Eric Woodruff has supplied a replacement for the message 
   input box (MIBX20.ZIP), new module for colour syntax highlighting 
   (CSH100.ZIP) and a new version of TV Virtual Memory Editor 
   (TVME30.ZIP).
   
   3.  The URL for the Verona University, Italy has been 
   included in the list of general sites of interest to TV programmers.

   =======================================================================
				  THE GUIDE
   =======================================================================

   About TVPlus
   About Turbo Vision
   Books and journals
   Software resources
   The discussion list
   UseNet newsgroups
   Handy FTP sites
   Web pages to peruse
   Selected answers on programming
   Applications written with Turbo Vision
   Acknowledgements


   ----------------------------------------------------------------------
			  About TVPlus
   ----------------------------------------------------------------------

   Objectives
   Wanted!
   Availability of TVPlus
   Style conventions
   Maintainers of TVPlus
   Distribution rights


   ----------------------------------------------------------------------
   OBJECTIVES
   ----------------------------------------------------------------------

   The object of TVPlus is to provide an answer book on Turbo Vision and to
   make access to it by its users as easy as possible.

   The emphasis during the early development is to identify various
   resources that can be commonly used in the development of TV programmes.
   Consolidating various references on the Internet into one document is
   the basic requirement, we believe, to finding what you need to use the
   TV library to full advantage - and to cut the time necessary to become
   productive.

   From this basis, we can manage the development of the FAQ more orderly
   while, at the same time, answering perhaps the most frequently asked of
   questions: "Where is ... ?" or "Where can I get ... ?"

   There has, however, been several aspects to this early emphasis. First,
   to find the resources that directly affect the use of the TV framework
   such as patches, extensions to the TV classes and the like. Secondly,
   keeping the context in which TV was developed and is used to the fore -
   thus providing leads to relevant resources such as compiler patches,
   porting to other platforms and the like. Thirdly, a little self
   indulgence in identifying and promoting applications based on Turbo
   Vision.

   ----------------------------------------------------------------------
   INFORMATION WANTED
   ----------------------------------------------------------------------

   Have you information you think others might be interested in?


   CONTRIBUTIONS

   If you have the basis of a contribution that others might find
   interesting, please polish it up for TVPlus.

   There is plenty of scope for useful articles in the pages of TVPlus,
   especially the sections that make up the chapter on Selected answers on
   programming or the chapter about Dead Parrots.

   Contributors can submit their material to us via

	   email at <mailto:grove@zeta.org.au>; or
	   anonymous ftp at <ftp://ftp.zeta.org.au/home/grove/>.


   MIRROR SITES

   TVPlus would like to establish mirror sites in the other parts of the
   world, especially in the US and Europe. By doing so we expect that
   response times for international users will be radically improved. Use
   of mirror sites will also help to eliminate the bandwidth hit on
   zeta.org.au's relatively narrow network link.

   Please contact us, the co-maintainers of TVPlus, for more information
   about becoming a mirror site for TVPlus.

   APPLICATIONS

   You can use TVPlus to publicise any software you may have written
   using Turbo Vision C++. An outline is presented in the chapter
   'Applications written with Turbo Vision' to help you prepare
   information about your application.

   ABOUT TVPLUS ITSELF

   We appreciate feedback on anything that you consider relevant -
   performance, arrangement, layout, ease of comprehension, etc.

   Anyone interested in lending a hand with these tasks?


   -----------------------------------------------------------------------
   AVAILABILITY
   -----------------------------------------------------------------------

   Notifications about TVPlus are posted periodically on the Turbo Vision
   discussion list.

   THE TEXT/PLAIN FORMAT OF TVPLUS

   The ASCII format of TVPlus is posted each calendar month to
   <mailto:turbvis@vtvm1.cc.vt.edu> and to *.answers with changes (if any)
   since being posted the previous month.

   Since TVPlus has been approved by the *.answers moderators, a copy of
   this FAQ may be downloaded from ftp://rtfm.mit.edu/pub/ or from
   our TVPlus ftp site.

   THE TEXT/HTML FORMAT OF TVPLUS

   Available on the World Wide Web at

		   <http://www.zeta.org.au/~grove/tvhome.html>,

   the Web format of TVPlus has advantages over its ASCII counterpart
   because of its

   1.  currency (material is added as the opportunity arises);
   2.  primacy (the ASCII version is derived from this one); and
   3.  flexibility (the links with other documents on line).

   If you want to download a copy of the Web version of TVPlus, you may do
   so by using our TVPlus ftp site.

   TVPlus offline

   The downloaded Web files have the extension of *.htm and can be viewed
   using any WWW browser offline. We recommend DOSLYNX for this purpose.

   DOSLYNX, which is available through ARCHIE under the the file name of
   DLX0_8A.EXE, is a creation of the University of Kansas. Enquiries
   regarding DOSLYNX should be sent there.

   To set up DOSLYNX for offline browsing use the command line options:
   DOSLYNX /nno You can configure tvhome.htm to be the home page.

   You should be able to view the downloaded ASCII version with any text
   editor as each file making up the FAQ is less than 64k.

   TVPlus mirrored privately

   Some people may prefer to access the FAQ from a local directory or from
   their shell account rather than accessing zeta.org.au directly. External
   links are operative whether access is from zeta or from a local
   directory where you have downloaded the FAQ - provided that you are
   connected to the Internet in the first place.

   If you want to use TVPlus from your local host, remember to keep your
   copy up to date or you will miss links to new files or you will be
   unaware that our files have been updated.

   So, offline or online you can use TVPlus loaded to your local directory.

   Most browers will allow you access to the source document which will
   provide quite specific URLs needed for ftpm or navigating the TVPlus'
   ftp site. They also provide bookmarks which can be used to advantage.


   ----------------------------------------------------------------------
   STYLE CONVENTIONS
   ----------------------------------------------------------------------

   This chapter outlines the style conventions used in TVPlus.

   Countries
	   ISO 3166-1981 Codes for the representation of names of countries:
	   any country name abbreviation will the same as the country
	   identification in a domain name - for example, zeta.org.au

   Currencies
	   ISO 4217-1978 Codes for the representation of currencies and
	   funds.

   Dates and time
	   ISO 2014-1976 Writing of calendar dates in all-numeric form:
	   dates are, therefore, expressed as, say, 2001.01.01 avoiding
	   ambiguity as to which country convention has been used.

   General
	   To minimise waiting time while data transfers, file sizes are, in
	   the main, < 4K and graphics use is minimal.

   HTML protocol
	   ISO 8879-1986 "Information Processing Text and Office Systems;
	   Standard Generalised Markup Language (SGML)"; HTML 2.0 is an
	   expression of this standard.

   Uniform Resource Locator (URL)
	   RFC1738 "Uniform Resource Locators": URLs used to access resources
	   on the Internet are cited, with or without delimiters, as
	   <scheme://host:port/url-path> where scheme is one of file, http,
	   news, gopher, telnet or wais and where the colon followed by the
	   TCP port number is optional; the syntatic wrapper, URL: is not
	   generally prefixed to a URL in this document.


   -----------------------------------------------------------------------
   MAINTAINERS OF TVPLUS
   -----------------------------------------------------------------------

   TVPlus is maintained by Robert Hazeltine and Rachel Polanskis from
   Sydney, Australia through our computer host, Zeta Microcomputer
   Software. This FAQ has no connection with Borland and they, in turn, do
   not contribute to the support of this service.


   -----------------------------------------------------------------------
   DISTRIBUTION RIGHTS
   -----------------------------------------------------------------------

   This FAQ may be posted to any USENET newsgroup, on-line service,
   or BBS as long as it is posted in its entirety and includes the
   copyright statement.

   This FAQ may not be distributed for financial gain.

   This FAQ may not be included in commercial collections or
   compilations without express permission from the authors.  No such
   permission has yet been given.


   -----------------------------------------------------------------------
			  About Turbo Vision
   -----------------------------------------------------------------------

   What is TV
   TV history
   TV as DLL
   TV bugs
   TV mixed and matched
   TV ports
   TV and MS-Windows
   Learning TV

   -----------------------------------------------------------------------
   WHAT IS TV
   -----------------------------------------------------------------------

   Turbo Vision is a C++ library that provides an application framework.
   It is a product of Borland International, Inc.

   -----------------------------------------------------------------------
   TV HISTORY
   -----------------------------------------------------------------------

   There are [three] versions of Turbo Vision:

   TV1.0
	 This version of the application frameworks came with BC++ 3.0;

   TV1.03
	 This version cam with BC++ 3.1:
	 .  its TV.H containing a #define _TV_VERSION which is not
		present in the earlier version; and

   TV2.0
	 This is part of the Power Pack for DOS designed for use with BC
	 4.x:
	 .  it may be used with the 16 and 32 bit DOS DPMI extenders;
	 .  it includes TInputLine validators such as TFilterValidator,
		TRangeValidator, TStringLookupValidator and TPXPictureValidator;
	 .  there is a new TMultiCheckBoxes object that is like the regular
		TCheckBoxes object but each check box can have multiple values;
		and
	 .  a new TOutline class has been added for outline views (for
		example a directory tree) with expandable and collapsible nodes.

   -----------------------------------------------------------------------
   TV as DLL
   -----------------------------------------------------------------------

   Part 1: The original proposal on making TV as DLL
   Part 2: Additional material on making TV as DLL
   Part 3: Additional comment on making TV as DLL

   -----------------------------------------------------------------------

   TV AS DLL - PART 1

   Introduction
   Header File Changes
   Source File Changes
   Building the DLL
   Using the DLL
   Problems with the Borland RTL DLL
   Feedback

   -----------------------------------------------------------------------

   Contents

   This section shows how to convert TV 2.0 to a 32 bit DLL for use with BC
   4.02 and the Power Pack. The information was provided by the author,
   Eddie Stassen.

   Introduction

   This section lists the changes required to compile TV2.0 as a 32bit DLL.
   Please note that the DLL has not been tested extensively and, as I am no
   expert on DLL's, some changes may well be superfluous and there may be
   some omissions.

   I also do not make use of streamable objects in my applications, so my
   knowledge is a bit shaky there and I cannot say whether the streaming
   stuff will work (although the standard TVDEMO program does manage to
   save and retrieve the desktop). The bottom line here is that it works
   for me at this stage and I have gone through enough rebuilding cycles to
   last me quite a while.

   The changes are in essence very simple but, as they involve virtually
   every header file and a large number of the source files, I am not going
   to give a file by file description here - just general instructions on
   what to change.

   In order to keep the files compatible with the static libraries, use is
   made of macros and compile time definitions. When compiling the DLL you
   should define MAKEDLL. When compiling an application to use the DLL,
   define USEDLL. If neither of these macros are defined, the header files
   should look identical to the original ones.

   Note that section 3.2.3 describes an omission in the source code that I
   discovered while making the changes. The DLL will not compile without
   it.

   -----------------------------------------------------------------------

   Header file Changes

   2.1 Start with TV.H and add the following lines at the beginning of the
   file (around line 16):

   #if defined(MAKEDLL)
	 #define _EXPTVCLASS __export
	 #define _EXPTVFUNC __export
	 #define _EXPTVDATA __export
   #elif defined(USEDLL)
	 #define _EXPTVCLASS __import
	 #define _EXPTVFUNC __import
	 #define _EXPTVDATA __import
   #else
	 #define _EXPTVCLASS
	 #define _EXPTVFUNC
	 #define _EXPTVDATA
   #endif

   A few lines down, change the lines:

   #if defined( _RTLDLL )
   #error TV must use the RTL in static form only
   #endif

   to:

   #if !defined( MAKEDLL ) && !defined( USEDLL)
   #if defined( _RTLDLL )
   #error TV must use the RTL in static form only
   #endif
   #endif

   2.2 Now the major work starts: In all the TV header files change ALL the
   class declarations from "class Txxxx" to "class _EXPTVCLASS Txxx" e.g.
   the first few lines in APP.H:
 
   class _FAR TRect;

   class TBackground : public TView {

   will change to:

   class _EXPTVCLASS _FAR TRect;

   class _EXPTVCLASS TBackground : public TView {

   etc.

   2.3 Add the _EXPTVFUNC macro to all the global function declarations,
   e.g. in COLORSEL.H line 37 change:

   TColorItem& operator + ( TColorItem& i1, TColorItem& i2 );

   to:

   TColorItem& _EXPTVFUNC operator + ( TColorItem& i1, TColorItem& i2 );

   Inline functions defined in the header files do not have to be changed.
   Here is a list of the files and functions that need to be changed:

   File :  COLORSEL.H

   TColorItem& _EXPTVFUNC operator + ( TColorItem& i1, TColorItem& i2 );
   TColorGroup& _EXPTVFUNC operator + ( TColorGroup& g, TColorItem& i );
   TColorGroup& _EXPTVFUNC operator + ( TColorGroup& g1, TColorGroup& g2 );

   File :  MENUS.H

   TSubMenu& _EXPTVFUNC operator + ( TSubMenu& s, TMenuItem& i );
   TSubMenu& _EXPTVFUNC operator + ( TSubMenu& s1, TSubMenu& s2 );
   TStatusDef& _EXPTVFUNC operator + ( TStatusDef& s1, TStatusItem& s2 );
   TStatusDef& _EXPTVFUNC operator + ( TStatusDef& s1, TStatusDef& s2 );

   File :  MSGBOX.H

   ushort _EXPTVFUNC messageBox( const char *msg, ushort aOptions );
   ushort _EXPTVFUNC messageBox( unsigned aOptions, const char *msg, ... );
   ushort _EXPTVFUNC messageBoxRect( const TRect &r, const char *msg, ushort
	 aOptions );
   ushort _EXPTVFUNC messageBoxRect( const TRect &r, ushort aOptions, const
	 char *msg, ... );
   ushort _EXPTVFUNC inputBox( const char *Title, const char *aLabel, char *s,
	 uchar limit );
   ushort _EXPTVFUNC inputBoxRect( const TRect &bounds, const char *title,

   File :  UTIL.H

   void _EXPTVFUNC fexpand( char * );
   char _EXPTVFUNC hotKey( const char *s );
   ushort _EXPTVFUNC ctrlToArrow( ushort );
   char _EXPTVFUNC getAltChar( ushort keyCode );
   ushort _EXPTVFUNC getAltCode( char ch );
   char _EXPTVFUNC getCtrlChar(ushort);
   ushort _EXPTVFUNC getCtrlCode(uchar);
   ushort _EXPTVFUNC historyCount( uchar id );
   const char * _EXPTVFUNC historyStr( uchar id, int index );
   void _EXPTVFUNC historyAdd( uchar id, const char * );
   int _EXPTVFUNC cstrlen( const char * );
   void * _EXPTVFUNC message( TView *receiver, ushort what, ushort command, void
	 *infoPtr );
   Boolean _EXPTVFUNC lowMemory();
   char * _EXPTVFUNC newStr( const char * );
   Boolean _EXPTVFUNC driveValid( char drive );
   Boolean _EXPTVFUNC isDir( const char *str );
   Boolean _EXPTVFUNC pathValid( const char *path );
   Boolean _EXPTVFUNC validFileName( const char *fileName );
   void _EXPTVFUNC getCurDir( char *dir );
   Boolean _EXPTVFUNC isWild( const char *f );

   2.4 Here come the shaky bits

   File : TOBJSTRM.H

   Change line 31:

   #ifdef __DLL__

   to:

   #if defined(__DLL__) && !defined (__FLAT__)

   Note: The above change is not entirely correct, but it works. I do not
   quite know why that #ifdef is there anyway.

   The __link() macro in line 51 was changed to:

   #define __link( s )             \
   extern _EXPTVDATA TStreamableClass s;    \
   static fLink force ## s =     \
	 { (fLink _NEAR *)&force ## s, (TStreamableClass _NEAR *)&s };

   I am not too sure about the above change and I suspect one might need a
   separate macro for your own classes.

   That concludes the changes to the header files.

   -----------------------------------------------------------------------

   Source file changes

   ASM Files

   Unfortunately the assembler files need to be rebuilt to make the
   functions exportable (although I suspect you could bypass this with an
   appropriate DEF file). In my case I changed all the PUBLIC declarations
   to PUBLICDLL and re-assembled.

   CPP Files

   3.2.1 Add the _EXPTVFUNC macro to all the global non-member function
   definitions. The affected files are:

   File :  COLORSEL.CPP

   TColorItem& _EXPTVFUNC operator + ( TColorItem& i1, TColorItem& i2 )
   TColorGroup& _EXPTVFUNC operator + ( TColorGroup& g, TColorItem& i )
   TColorGroup& _EXPTVFUNC operator + ( TColorGroup& g1, TColorGroup& g2 )

   File :  MENU.CPP

   TSubMenu& _EXPTVFUNC operator + ( TSubMenu& s, TMenuItem& i )
   TSubMenu& _EXPTVFUNC operator + ( TSubMenu& s1, TSubMenu& s2 )
   TStatusDef& _EXPTVFUNC operator + ( TStatusDef& s1, TStatusItem& s2 )
   TStatusDef& _EXPTVFUNC operator + ( TStatusDef& s1, TStatusDef& s2 )

   File :  MISC.CPP

   void *_EXPTVFUNC message( TView *receiver, ushort what, ushort command,
	  void *infoPtr)
   Boolean _EXPTVFUNC lowMemory()

   File :  NEW.CPP

   void * _EXPTVFUNC operator new[] ( size_t sz )
   void * _EXPTVFUNC operator new ( size_t sz )
   void _EXPTVFUNC operator delete ( void *blk )
   void _EXPTVFUNC operator delete[] ( void *blk )

   File :  NEWSTR.CPP

   char *_EXPTVFUNC newStr( const char *s )

   File :  TCMDSET.CPP

   TCommandSet _EXPTVFUNC operator & ( const TCommandSet& tc1, const
	   TCommandSet& tc2 )
   TCommandSet _EXPTVFUNC operator | ( const TCommandSet& tc1, const
	   TCommandSet& tc2 )
   int _EXPTVFUNC operator == ( const TCommandSet& tc1, const
	   TCommandSet& tc2 )

   File :  TOBJSTRM.CPP

   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, char &ch )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, signed char &ch )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, unsigned char &ch )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, signed short &sh )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, unsigned short &sh )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, signed int &i )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, unsigned int &i )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, signed long &l )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, unsigned long &l )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, float &f )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, double &d )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, long double &ld )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, TStreamable& t )
   ipstream& _EXPTVFUNC operator >> ( ipstream& ps, void *&t )
   opstream& _EXPTVFUNC operator << ( opstream& ps, char ch )
   opstream& _EXPTVFUNC operator << ( opstream& ps, signed char ch )
   opstream& _EXPTVFUNC operator << ( opstream& ps, unsigned char ch )
   opstream& _EXPTVFUNC operator << ( opstream& ps, signed short sh )
   opstream& _EXPTVFUNC operator << ( opstream& ps, unsigned short sh )
   opstream& _EXPTVFUNC operator << ( opstream& ps, signed int i )
   opstream& _EXPTVFUNC operator << ( opstream& ps, unsigned int i )
   opstream& _EXPTVFUNC operator << ( opstream& ps, signed long l )
   opstream& _EXPTVFUNC operator << ( opstream& ps, unsigned long l )
   opstream& _EXPTVFUNC operator << ( opstream& ps, float f )
   opstream& _EXPTVFUNC operator << ( opstream& ps, double d )
   opstream& _EXPTVFUNC operator << ( opstream& ps, long double ld )
   opstream& _EXPTVFUNC operator << ( opstream& ps, TStreamable& t )
   opstream& _EXPTVFUNC operator << ( opstream& ps, TStreamable *t )

   File :  TPOINT.CPP

   TPoint _EXPTVFUNC operator - ( const TPoint& one, const TPoint& two )
   TPoint _EXPTVFUNC operator + ( const TPoint& one, const TPoint& two )
   int _EXPTVFUNC operator == ( const TPoint& one, const TPoint& two )
   int _EXPTVFUNC operator!= ( const TPoint& one, const TPoint& two )

   3.2.2 Add the _EXPTVDATA macro to global data. The following files are
   affected:

   File :  HELPBASE.CPP

   line 57:
   TCrossRefHandler _EXPTVDATA crossRefHandler = notAssigned;

   File :  TGROUP.CPP

   line 24-25:
   TView *_EXPTVDATA TheTopView = 0;
   TGroup* _EXPTVDATA ownerGroup = 0;

   File : TPROGRAM.CPP

   line 39:
   extern TPoint _EXPTVDATA shadowSize;

   File :  TVIEW.CPP

   line 34-35:
   TPoint _EXPTVDATA shadowSize = {2,1};
   uchar _EXPTVDATA shadowAttr = 0x08;

   line 40:
   extern TView *_EXPTVDATA TheTopView;

   3.2.3 Omission from the source (BUG)

   The following function is declared but not defined anywhere in the
   source:

	TStreamable *TSortedListBox::build()

   Add the following lines to STDDLG.CPP just before the #endif right at
   the end of the file:

   TStreamable *TSortedListBox::build() {
	  return new TSortedListBox( streamableInit );
	  }

   3.2.4 The streaming stuff again.

   I [sic] all those S*.CPP files (SBUTTON.CPP, SVIEW.CPP, etc) where the
   registration objects are defined (RButton, RView etc), change the
   definitions from:

   TStreamableClass RSomeClass( TSomeClass::name,
   to:
   TStreamableClass _EXPTVDATA RSomeClass( TSomeClass::name,

   -----------------------------------------------------------------------


   Building the DLL

   I used the IDE to compile the DLL as scratching around in the makefile
   seemed like just too much effort. If you plan to use the IDE, set up
   your project as follows:

	   In the New Project Dialog, name your project TV32 and select
	   Target Type as Dynamic Library and DOS (32bit DPMI) as the platform.

	   De-select Turbo Vision and Class Library in the Standard Libraries
	   section.

	   Select Dynamic for the Run Time Library.

	   Add all the .CPP and .ASM files in the source\tvision directory to the
	   project.

	   Under Edit Local Options|Compiler|Defines add MAKEDLL (_RTLDLL should
	   already be there).

   For each of the .ASM files under Edit Local Options|Tool, change the
	   line to read $TASM /D__FLAT__ /m2 /ml

   When you make the project (go for lunch) an import library (TV32.LIB)
   will automatically be created. I suggest you rename this to TV32i.LIB to
   avoid confusion with the static library.

   -----------------------------------------------------------------------

   Using the DLL

   Existing applications can be converted to use the DLL as follows:

   Add TV32i.LIB to the project.

   At the top level define USEDLL in Edit Local Options|Compiler|Defines.
   Go to Target Expert and switch OFF Turbo Vision under standard Libaries.

   Select Dynamic Runtime Library.

   BUILD the project.

   Your EXE file should be much smaller than before. (The TVDemo
   application compiles to about 34K). When running your application
   TV32.DLL should be in the local directory or in the path.

   -----------------------------------------------------------------------

   Problems with the Borland RTL DLL

   This problem is not directly TV related but may surface if you use the
   DLL.

   When you use certain RTL functions (biosprint, inport, etc.), the linker
   will fail with an undefined symbol: _ostype. The problem is that the
   abovementiond functions force linking of the function
   __disallowDPMI32onWin32 (in DPMI32.LIB) which in turn references _ostype
   which is not exported from the C RTL DLL (CW3211.DLL).

   To get around the problem you can extract the module PLATFORM.OBJ from
   CW32.DLL and link it with your application:

   TLIB CW32.DLL *PLATFORM

   Alternatively you can just define _ostype some where in your
   application:

   unsigned int _ostype = 2;    // 2 == DOS32

   The second method is not all that safe since it assumes you are not
   running on a Win32 platform.

   -----------------------------------------------------------------------

   Feedback

   The author would appreciate any feedback on this material explaining how
   to compile TV as a DLL.

   Send email to <stasseed@telkom11.telkom.co.za>

   -----------------------------------------------------------------------

   TV AS DLL - PART 2

   Abstract
   The module definition file
	   tvdll16.dff
   Modifications to the headers
	   tvision/tv.h
	   other header files
   Modifications to the assembler files
   General modifications
	   tvwrite.asm
   Modifications to the source files
	   tscreen.cpp
	   system.h
   Miscellaneous modifications
	   Missing TSortedListBox:::build
	   Redundant tmenupop.cpp
   Conclusions

   -----------------------------------------------------------------------

   Abstract

   This section provides comment on producing Turbo Vision 2.0 as a DLL in
   either 16 or 32-bit mode under BC 4.5 as outlined in TV as DLL - Part 1
   and adds further insight of the reviewer. The reviewer is Vincent Van
   Den Berghe.

   -----------------------------------------------------------------------

   The module definition file

   For the 16-bit TV DLL, you need a module definition file to ensure that
   some critical routines always remain in memory and are never swapped
   out. To make such a file called tvdll16.def


   LIBRARY     TVDLL16

   DESCRIPTION 'TVDLL16.DLL'

   CODE PRELOAD MOVEABLE DISCARDABLE
   DATA PRELOAD MOVEABLE MULTIPLE
   SEGMENTS sysint_TEXT PRELOAD FIXED NONDISCARDABLE
						SYSERR_TEXT PRELOAD FIXED NONDISCARDABLE
						swapst_TEXT PRELOAD FIXED NONDISCARDABLE
						DRIVERS_TEXT PRELOAD FIXED NONDISCARDABLE
						DRIVERS2_TEXT PRELOAD FIXED NONDISCARDABLE
						hardware_TEXT PRELOAD FIXED NONDISCARDABLE
						TSCREEN_TEXT PRELOAD FIXED NONDISCARDABLE
						TEVENT_TEXT PRELOAD FIXED NONDISCARDABLE

   This .def file is not needed for the 32-bit DLL.

   -----------------------------------------------------------------------

   Modifications to the headers

   The most extensive work to do is to modify the header files. Do not
   worry if you forget some modifications. The compiler or linker will tell
   you what you have missed. The linker will report "undefined symbols",
   the compiler will complain with "cannot derive a huge class from a far
   base" or vice-versa.

   Basically, the aim is to qualify every exportable class, function and
   data with the correct keyword and to continue using Turbo Vision as a
   static library.

   In order to do this, two macros need to be defined to tell the compiler
   what to do, namely:

	 _BUILDTVDLL                 // defined if we are building TV as a DLL
	 _TVDLL                      // defined if we are using TV as a DLL

   If neither is defined, we are building or using TV as a static library.

   tvision/tv.h

   In order to access classes in a DLL, they must be exported. A series of
   macros put at the start of tvision/tv.h (before line 16) set things up:

	 #if defined(__FLAT__) // 32-bits
	 #if defined(_BUILDTVDLL) // building 32-bits TV DLL
	 #define _EXPTVCLASS  __export
	 #define _EXPTVDATA   __export
	 #define _EXPTVFUNC   __export
	 #elif defined(_TVDLL) // using the 32-bits TV DLL
	 #define _EXPTVCLASS  __import
	 #define _EXPTVDATA   __import
	 #define _EXPTVFUNC   __import
	 #else // building or using 32-bits static library
	 #define _EXPTVCLASS
	 #define _EXPTVDATA
	 #define _EXPTVFUNC
	 #endif
	 #elif defined(_BUILDTVDLL) // we are now compiling in 16-bit
	 // building the 16-bit TV DLL
	 #define _EXPTVCLASS        __export
	 #define _EXPTVDATA __export
	 #define _EXPTVFUNC         __export
	 #elif defined(_TVDLL) // using the 16-bit TV DLL
	 #define _EXPTVCLASS __export
	 #define _EXPTVDATA
	 #define _EXPTVFUNC
	 #else // using the static TV libary
	 #define _EXPTVCLASS        __far
	 #define _EXPTVDATA __near
	 #define _EXPTVFUNC
	 #endif

	 _EXPTVCLASS will be the export qualifier for classes
	 _EXPTVDATA will be the export qualifier for (global) data
	 _EXPTVFUNC will be the export qualifier for (global) functions

   Define the macro _BUILDTVDLL if we are building the library as a DLL;
   _TVDLL if we use the TV library as a DLL; or nothing if we are making or
   using TV as the static library. These definitions will be at the command
   line options. The rules are similar to those which are needed when using
   Borland's CLASSLIB or OWL as a DLL.

   Since we change the rules, change
	 #if defined( _RTLDLL )
	 #error TV must use the RTL in static form only
	 #endif
   to
	 #if defined( _RTLDLL ) && !defined(_BUILDTVDLL) && !defined(_TVDLL)
	 #error TV must use the RTL in static form only
	 #endif
   in tvision/tv.h

   Other header files

   Class declarations

   Basically, you must change all instances of class xxxx or class _FAR
   xxxx to class _EXPTVCLASS xxxx in all header files.

   Please note the following:

   Do not forget special cases - incomplete type specifications, friend
	   classes, etc.
   If you want to have the class available, it should be qualified for
	   export.
   class and struct are equivalent for these purposes, so do not forget
	   them.
   It is not necessary to qualify a class or a struct which has no member
	   functions.

   Functions declarations

   All global functions must have the _EXPTVFUNC attribute. This includes
   the overloaded operators and the friend functions. Note that it is not
   necessary to modify the function definition (i.e. the .cpp file), unlike
   the data declarations in the following section.

   Data declarations

   These declarations are sufficient:
	 In File APP.H:
			  static TProgram * _EXPTVDATA application;
			  static TStatusLine * _EXPTVDATA statusLine;
			  static TMenuBar * _EXPTVDATA menuBar;
			  static TDeskTop * _EXPTVDATA deskTop;
			  static int _EXPTVDATA appPalette;
			  static TEvent _EXPTVDATA pending;

   Here, it is necessary to modify the data definition in the source file.
   For example, in tprogram.cpp:
	 TStatusLine * _EXPTVDATA TProgram::statusLine = 0;
	 TMenuBar * _EXPTVDATA TProgram::menuBar = 0;
	 TDeskTop * _EXPTVDATA TProgram::deskTop = 0;
	 TProgram * _EXPTVDATA TProgram::application = 0;
	 int _EXPTVDATA TProgram::appPalette = apColor;
	 TEvent _EXPTVDATA TProgram::pending;

   -----------------------------------------------------------------------

   Modifications to the assembler files

   General modifications

   There are 3 reasons why the assembler files must be modified:

	  Symbolic references to class members in assembler files are different;
	  Public symbols that define member functions in assembler files are
		 different; and
	  Assembly language functions may require prolog/epilog code to load DS
		 with the DLL data segment (this procedure destroys AX).

   The first 2 reasons have one common cause: the compiler "mangles" class
   members differently if the class is flagged as exported/exportable. For
   example, the member TScreen::screenBuffer has as mangled name

			@TScreen@screenBuffer

   if TScreen is an "ordinary" class, but

			@TScreen@0screenBuffer

   if TScreen has the __export or __import attribute in 16-bit DPMI (i.e.
   the model is not __FLAT__).

   We define the macro __DLL__ to indicate that the assembler file is
   compiled for a DLL. A series of ifdef/endif constructs define the proper
   constructions.

   The changes may be grouped into 4 categories:

   Category 1: Public symbols

   All symbols declared PUBLIC at the start of the assembler file must be
   changed to PUBLICDLL (so that they can be exported). In addition, all
   public symbols that are of the form

				@classname@functionname$arguments

   must be changed to:

				@classname@0functionname$arguments

   Note the numeric 0 if the model is not __FLAT__

   This change is needed because the mangling of exported member names is
   different from the non-exported ones. The insertion of an extra 0 is the
   only thing different.

   Category 2: External symbols

   All symbols declared EXTRN at the start of the assembler file which are
   of the form @classname@functionname$arguments must change as described
   in category 1.

   Category 3: Proc declarations

   The proc declaration of public symbols in assembler files must change as
   described in category 1. In addition, a language modifier must be added.

   For example,
	 ifndef __FLAT__
	 @TView@writeStr$qssnxcuc PROC
	 else
	 @TView@writeStr$qsspxcuc PROC
	 endif
   this is changed to:
	 ifndef __FLAT__
	 ifdef __DLL__
	 @TView@0writeStr$qssnxcuc PROC WINDOWS
	 else
	 @TView@writeStr$qssnxcuc PROC
	 endif
	 else
	 ifdef __DLL__
	 @TView@writeStr$qsspxcuc PROC WINDOWS
	 else
	 @TView@writeStr$qsspxcuc PROC
	 endif
	 endif

   Do not forget to do the same thing if the proc name is specified as part
   of an ENDP statement at the end of the proc definition.

   Note that @TView@writeView$qv (defined in tvision/tvwrite.asm) does not
   need the WINDOWS language modifier since this is an internal function
   that receives its arguments through registers. Internal functions and
   protected mode thunks do not need the WINDOWS language modifier.

   Category 4: Call and usage statements

   If the EXTRN declarations are renamed, so must their uses. For example,
   affected call statements change from:

				  Call    @TDisplay@getCrtMode$qv

   to:

	ifdef __DLL__
				  Call    @TDisplay@0getCrtMode$qv
	 else
				  Call    @TDisplay@getCrtMode$qv
	 endif

   Example of a modified assembler declaration

   The file tvcursor.asm started with:

				  PUBLIC  @TView@resetCursor$qv

				  EXTRN   @TDisplay@isEGAorVGA$qv : FAR
				  EXTRN   @TScreen@cursorLines : WORD

	 IFDEF __FLAT__
				  EXTRN   @THardwareInfo@setCaretSize$qus : NEAR
				  EXTRN   @THardwareInfo@setCaretPosition$qusus : NEAR
	 ELSE
				  EXTRN   @TDisplay@getCrtMode$qv : FAR       ; For monochrome
															  ; check.
	 ENDIF

   This is changed to:
	 ifdef __DLL__
	 ; DLL-declarations

	 ifdef __FLAT__
						PUBLICDLL  @TView@resetCursor$qv

						EXTRN           @TDisplay@isEGAorVGA$qv : FAR
						EXTRN           @TScreen@cursorLines : WORD
	 else
						PUBLICDLL  @TView@0resetCursor$qv

						EXTRN           @TDisplay@0isEGAorVGA$qv : FAR
						EXTRN           @TScreen@0cursorLines : WORD
	 ; by using EQUates, we avoid having to modify the use of these
	 ; routines in  the body of the code
	 @TDisplay@isEGAorVGA$qv    EQU             @TDisplay@0isEGAorVGA$qv
	 @TScreen@cursorLines       EQU             @TScreen@0cursorLines
	 endif

	 IFDEF __FLAT__
						EXTRN   @THardwareInfo@setCaretSize$qus : NEAR
						EXTRN   @THardwareInfo@setCaretPosition$qusus :
	 NEAR
	 ELSE
						EXTRN @TDisplay@0getCrtMode$qv : FAR  ; For monochrome
															  ; check.
	 @TDisplay@getCrtMode$qv    EQU     @TDisplay@0getCrtMode$qv
	 ENDIF

	 else
	 ; - Original declarations
				  PUBLIC  @TView@resetCursor$qv

				  EXTRN   @TDisplay@isEGAorVGA$qv : FAR
				  EXTRN   @TScreen@cursorLines : WORD

	 IFDEF __FLAT__
				  EXTRN   @THardwareInfo@setCaretSize$qus : NEAR
				  EXTRN   @THardwareInfo@setCaretPosition$qusus : NEAR
	 ELSE
				  EXTRN   @TDisplay@getCrtMode$qv : FAR       ; For monochrome
 check.
	 ENDIF
	 endif

   tvwrite.asm

   In tvision/tvwrite.asm, the routine @TView@writeView$qv calls
   @THWMouse@hide$qv and @THWMouse@show$qv to hide (resp. show) the mouse
   cursor if drawing over it.

   The code assumes that AX is preserved across calls. Since
   THWMouse::hide() and THWMouse::show() are exported functions, they have
   a prolog code that destroy AX.

   You, therefore, should change:

				  CALL    @THWMouse@hide$qv
				  CALL    @@50
				  CALL    @THWMouse@show$qv
   to
				  push ax
				  CALL    @THWMouse@hide$qv
				  pop ax
				  CALL    @@50
				  push ax
				  CALL    @THWMouse@show$qv
				  pop ax

   As an aside, there are EXTRN definitions for TView::mapColor and
   THardwareInfo::screenWrite, but they are never used and may be
   eliminated if you want.

   -----------------------------------------------------------------------

   Modifications to the source files

   The designers of Turbo Vision chose to use a mixture of assembly
   language and C++ for low-level features, like accessing the video
   memory, keyboard and other bios functions.

   Although it seems logical to do this, among other things, for writing to
   the screen, there is no rational explanation why functions like video
   detection (see tvision/tscreen.cpp) has to be in such a mix of language.

   For example, this routine is defined in tvision/tscreen.cpp:
	 void TDisplay::videoInt()
	 {
	 I   PUSH    BP
	 I   PUSH    ES
	 I   INT     10h
	 I   POP     ES
	 I   POP     BP
	 }
   The routine directly calls int 10 (the video bios interrupt) and assumes
   all the proper registers will be set up.

   When compiling for DLL, all exported functions (including the static
   member functions of exported classes, like videoInt() ) get a prolog
   that begins by loading the DLL's data segment in the AX register. As a
   result, the AX register are destroyed by the time the int 10 is
   executed. It so happens that AX (more specifically AH) holds the
   subfunction to be executed. The result is wrong!

   The only reliable way to solve this is to get rid of videoInt() and to
   substitute the body of the function directly at each call site. Do not
   use int86 calls! Some of the code is called within static constructors
   and int86 is unreliable at that time .

   This should yield a working tvision/tscreen.cpp

   -----------------------------------------------------------------------

   Miscellaneous modifications

   As reported by Eric Stassen, there is indeed a missing member function
   which should be added to stddlg.cpp:

	 TStreamable *TSortedListBox::build()
	 {
		 return new TSortedListBox( streamableInit );
	 }

   Failure to do this causes an "undefined symbol TStreamable
   *TSortedListBox::build" error when attempting to link the Turbo Vision
   DLL. The reason for such an error message when TV is linked as a static
   library is that references to TSortedListBox::build are only pulled in
   if streaminig is actually used. If it is not used (and it usually is
   not), the reference is not pulled in and the linker does not sees it.

   A DLL is linked as a "complete" program, meaning that there must be no
   unresolved symbols. Hence, the error.

   Redundant tmenupop.cpp

   There is a redundant file called tvision/tmenupop.cpp which cannot
   compile. It is supposed to implement the class TMenuPopup defined in
   tvision/menu.h. Get rid of it.

   -----------------------------------------------------------------------

   Conclusions

   It can be done. The reviewer reports he has a 16- and 32-bit Turbo
   Vision Library in a DLL, and it works like a charm!

   The ideal thing would be to incorporate Eric Woodruff's patches with the
   DLL changes so that everyone could benefit. If you try it on your own,
   however, prepare for a few hours work.


   -----------------------------------------------------------------------

   ADDITIONAL COMMENT ON MAKING TV AS A DLL

   1. My application does not clear the screen when I exit. It seems that
   the destructors for TScreen etc are not being called.

   Borland C++ 4.02 has known problems when generating DLL's containing
   static objects with destructors. The "static destructor in DLL" problem
   has been fixed in 4.5.

   2. BC 4.02 creates garbage code when trying to access byte- or word-wide
   exported static member data, e.g. TScreen::screenMode. This seems to be
   a compiler bug. Perhaps somebody with BC4.5 can verify if this problem
   has been fixed.

   I have Borland C++ 4.5 and have not encountered this problem.

   The moral of the story is: do not use Borland C++ between versions 4.0
   and 4.02 included. Upgrade to 4.5 (in fact, 4.51, since the upgrade is
   supposed to be available).


   -----------------------------------------------------------------------   -----------------------------------------------------------------------
   TV BUGS
   -----------------------------------------------------------------------

   TV 1.x has several bugs. People have offered fixes and workarounds that
   make TV 1.x run more efficiently. Patches may also be obtained from Phar
   Lap if you want to use their product with TV.

   TV 2 fixed most of the bugs found in the earlier version. Eric Woodruff
   is maintaining a bug list and has released a consolidation of patches
   for TV 2, the latest of which is available from the TVPlus ftp site.

   Any substantiated bugs for TV 2 - and just not coding errors - may be
   sent to Eric Woodruff at <mailto:72134.1150@compuserve.com>.


   -----------------------------------------------------------------------
   TV MIXED AND MATCHED
   -----------------------------------------------------------------------

   It is feasible to compile TV code with different BC versions provided
   that you follow three simple steps

   1. ensure that the old version of TV will not interfere with the new
   one and, if applicable, that the second version of the compiler is
   out of the way;

   2. revise the TV source code to conform with the compiler you will
   use; and

   3. build the new TV library.

   The specifics will change depending on which version of the compiler and
   of Turbo Vision you intend to use. More information follows.


   TV 1.x AND BC4.x

   In this case, the Turbo Vision library must be re-compiled with BC4x.
   The reasons for doing so are the differences in debug format, symbol
   length and the runtime library.

   For particulars on how to do this, read TI1752 and TI1753.


   TV 2.0 AND BC 3.1

   You can compile the TV2.0 source code with BC3.1. Doing so does not
   allow you to generate protected mode applications or link BC4x libraries
   but it does retain the advantage of using the integrated debugger in the
   IDE and development in a DOS environment with the final production build
   done with BC4x.

   Changes to source code files are necessary because of the developments
   in C++ since BC3.1. It means that libraries need to be re-compiled
   having first patched the source code from the file TV2BUG.ZIP.

   You need to ensure that TV1.03 files do not conflict with TV2.0 files,
   possibly by renaming the Turbo Vision directory or deleting them if no
   longer required. At the same time, take the necessary precautions to
   prevent the BC4x and makefiles being called on.

   For detailed information, obtain the file B31TV2.ZIP which provides
   guidelines and a makefile - put together by Eric Woodruff - to help you
   adapt the code to your compiler.

   -----------------------------------------------------------------------
   TV PORTS
   -----------------------------------------------------------------------

   These include:

	   the Joern Sierwald patches to compile a portable 32 bit TV
	   supporting various C++ compilers;

	   Oliver Suciu's patches to compile TV using djgpp; and

	   Alain Borel's patches to compile TV using djgpp based on
	   the Sierwald patches.


   JOERN SIERWALD

   Joern Sierwald who is at the Technische Universitaet Hamburg-Harburg
   (Germany) maintains this code. If you want to obtain the code, its URL
   is given in the section Specialist ftp sites or is obtainable from the
   TVPlus ftp site.

   Supported compilers:

   IBM CSet++ 2.1 for native OS/2 applications;
   Borland C++ for OS/2;
   emx/gcc for native OS/2 and 32Bit DOS applications;
   Watcom C++ 10.0(a) for OS/2 and DOS4GW (dos extender) applications; and
	djgpp.

   Description:

   patches for TV 1.03 (BC3.1);
   all .asm rewritten in C++ for easy debugging;
   mouse support for all compilers;
   32Bit TEditor, 32Bit TTerminal and 32Bit containers;
   Additional ports should be easy; and
   OS/2 versions are multithreaded and consume very little CPU time.

   The djgpp support is new. It is considered a beta version having been
   tested with the OS/2 DPMI Server ONLY.  It should run with VCPI or with
   plain HIMEM.SYS, but you never know.

   N.B.  If you use these patches, please be considerate enough to provide
   the author with feedback and any bug reports.  It is nice to know how
   code performs!

   Joern thanks Alain Borel for code and debugging.


   ----------------------------------------------------------------------
   TV AND MS-WINDOWS
   ----------------------------------------------------------------------

   There is no port or tool available to facilitate a conversion of Turbo
   Vision to MS-Windows.

   The two systems are similar, but different enough that a simple
   conversion is not possible. How difficult it is depends on how your
   original program was written.

   There are 3 parts to programs - interfacing with the user, manipulating
   data, and storing the data. If you have kept the last two separate from
   the user interface, it should not be too hard to make the port. If views
   do a lot of manipulating of data or you have custom views it will
   require more effort.

   The closest you will find to convert your resources for you is something
   like TurboVision Development Toolkit which is not 100% but better than
   nothing. Alternatively, you can use the Resource Workshop to rebuild the
   initial interface and copy much of your code.

   One of the main problems converting your code is that radiobuttons,
   checkboxes, and some other controls have slightly different schemes of
   storing the data. There are slight differences in the names of some
   constants also.


   -----------------------------------------------------------------------
   LEARNING TV
   -----------------------------------------------------------------------

   If you are still learning C++, the learning curve that comes with the
   choice of TV as an application framework can be steep. There are a few
   good books that will demonstrate C++ for you. However, a book will never
   teach you a language. That comes by examining working code and through
   trial and error.

   Studying the source code for TV, if it is available, is a good way to
   understand the processes that give it life. But you must first
   understand C++.

   The examples that come with TV are a good platform to try out some of
   the features this framework offers, but they are not real world
   examples. The source code examples that can be found on the Internet are
   good ways to see the good (and bad) ways of writing C++, and the
   presentation of it.

   The discussion list will provide you with a means to try ideas out on
   one one another. No one will laugh at your suggestions or queries. In
   fact the List can be your most powerful ally in the resolving of
   problems or bugs in your code.

   The best way to learn TV and C++ is to write code. People learn by
   doing. Once you overcome the initial hurdles of the language extensions
   and continue to expand your directions, the use of TV is almost formula.

   -----------------------------------------------------------------------
			 Books and journals
   -----------------------------------------------------------------------

   Christian, Kaare (1993). "Borland C++ Techniques & Utilities." Ziff
	  Davis Press, Emeryville. ISBN 1-56276-054-8.

   Faison, Ted (1992). "Borland C++ 3.1 Object-Oriented Programming." Sams
	  Publishing, Indianopolis. Second edition. ISBN 0-672-30140-7.

   Finn, et al. (1994). "C++ Database Applications with the Paradox
		Engine." Windcrest/McGraw-Hill. ISBN 0-8306-4327-3

   Swan, Tom (1992). "Mastering Borland C++." Sams Publishing,
	  Indianopolis. ISBN 0-672-30274-8

   Welstead, Steve (1994). "Neural Network and Fuzzy Logic Applications in
      C/C++." John Wiley.  ISBN 0471-30975-3 (without disk) or
		ISBN 0471-30974-5 (with disk)

   "The C/C++ User's Journal."

   Dead Parrots

   -----------------------------------------------------------------------
   CHRISTIAN
   -----------------------------------------------------------------------

   Synopsis

   There is a 3.5" disk with source code included.

   Part 3 of this book is devoted to Turbo Vision (pages 179 - 270), but it
   only covers TV basics.

   The rest of the book teaches C++, streams, OWL, etc.

   Review

   No published review has been located yet. However, Craig Schlenter was
   of the opinion that it was a "good book."

   -----------------------------------------------------------------------
   FAISON
   -----------------------------------------------------------------------

   Synopsis

   USD39.95 with disk. The author shows how to make changes to TV defaults.
   The third edition does not include anything specifically relating to TV
   but covers BC4 instead.

   Review

   No published review has been located. Craig Schlenter rated it "very
   good".

   ----------------------------------------------------------------------- 
   FINN
   -----------------------------------------------------------------------

   Synopsis

   USD39.95 with disk. This book requires TV, Paradox Engine with Database
   Frameworks 3.01.

   Review

   A published review has not yet been located.

   -----------------------------------------------------------------------
   SWAN
   -----------------------------------------------------------------------

   Synopsis

   As the title suggests, the book relates to C++, specifically BC3.1.
   Topics covered by the author in this edition include object oriented
   programming, Turbo Vision and the ObjectWindows Library. Consistent with
   the publisher's style, the book contains such tutorial aids as
   summaries, tips, hints and cautionary notes.

   The author also describes and lists complete example programs for every
   Borland C++ procedure and function.
   USD39.95 with disk which contains the source code to the programming
   examples in the book, answers to the chapter exercises and reference
   information.

   Review

   No published review has been located. Craig Schlenter rated it "very 
   good".

   -----------------------------------------------------------------------
   WELSTEAD
   -----------------------------------------------------------------------

   Synopsis

   USD36.95 without disk or 49.95 with disk which includes source code for
   all applications and TV executables for most of the applications.

   This is a "how-to" book for writing your own neural network and fuzzy
   logic applications. Applications include pattern recognition, financial
   forecasting, chaos and dynamic control. In addition to basic neural
   network training methods such as backpropagation, the book covers
   advanced topics such as genetic algorithms, conjugate gradient,
   simulated annealing, self organizing networks and fuzzy genetic systems.

   One chapter is devoted to the development of a Turbo Vision application
   base class tailored to the general needs of training and running neural
   networks and fuzzy systems. The remaining chapters develop complete
   self-contained applications, with application-specific TV interface
   derived from the general base class.

   Review

   It is not known if a published review is available.

   Credit

   Thanks to Scott Sumner for finding and relaying this information.

   -----------------------------------------------------------------------
   CUJ
   -----------------------------------------------------------------------

   Welstead, Steve (1994). 'Scrolling List Dialog for Scientific
   Programming'. CUJ, 12(4)51-66.

   The author shows an alternative method of setting up a TV project that
   uses one header and *.cpp files as include files. The programming style
   is different to that from the Borland stable. The article describes how
   to build a scrolling list dialog using TV that will collect the input
   normally handled throught a command-line interface and prompt the user
   through a series of menus and dialog boxes.

   The source code is available from ftp://ftp.uu.net/pub/cuj   A slightly
   more elaborate version of the articles' code is available from
   ftp://vtucs.cc.vt.edu/turbo-vision.  These are promotions for Welstead's
   book.

   -----------------------------------------------------------------------
   DEAD PARROTS
   -----------------------------------------------------------------------

   Borland International (1992). "Turbo Vision for C++ User's Guide".
   Scotts Valey, CA.

   The link was suggested by the manual itself (see page 492). After
   pondering this indexed item deeply and philosophically, we realised that
   there was no answer! Therefore, applying the rule more honoured in its
   breach than observance, "Keep it simple", it became obvious that the
   reference had to be to the object itself, a (*this)!

   On a more serious note, TV is not well documented. The manual can only
   be described as obscure. This is unfortunate as a library's manual is a
   powerful adjunct. If the manual is unclear, then the benefits from the
   library will not be fully realised.

   One of the objectives of TVPlus, with your support, will be to clarify
   some of the points the manual tends to present unclearly, or does not
   mention at all. If you want to record dead parrots (i.e. would be
   errata), we would be happy to note them here.

   -----------------------------------------------------------------------
			 Software resources
   -----------------------------------------------------------------------

   This heading covers some of the software available which can be used
   with Turbo Vision to increase programming productivity.

   Utilities
   Software libraries
   The Borland TI series
   CDROM source code

   -----------------------------------------------------------------------
   UTILITIES
   -----------------------------------------------------------------------

   It seems that few utilities are designed specifically for TV. The ones
   we are aware of are listed here.

   NON COMMERCIAL

   A dialog box designer by Dave Baldwin - dlgdsn46.zip 1994
   TV resource workshop by Siskiyou Software - tvrw.zip 1993
   TV workshop by Mark Buchanan and Mark Timmings - tvwork.zip 1994:
	   generates menus, statuslines, hints and dialogs

   COMMERCIAL

   Turbo Vision Development ToolKit by IDC

   Originally for Pascal, TVDK was upgraded for C++ TV1.03. It is used to
   build TV applications. With the resource editor you can create the menu,
   hint texts and the help system. There are additional classes in the TVDT
   (like masked inputs).

   The original code contained several bugs.

   ----------------------------------------------------------------------
   Developer

	  Innovative Data Concepts
	  122 North York Road, Suite 5
	  Hatboro Pennsylvenia 19040
	  USA

	  Phone: +1 800 926 4551
	  Fax:   +1 215 443 9753
	  BBS:   +1 215 364 9131

	  Internet:
		  Technical Support:  71333.1575@compuserve.com
		  Customer Support:   75300.564@compuserve.com
	  FidoNet:
		  Technical Support:  IDC Tech Support, 1:273/232
		  Customer Support:   IDC Cust Support, 1:273/232

   ----------------------------------------------------------------------
   Product comparison

   Availability of source code

   TVDT Lite: No Source Code

   TVDT 2.5: Full, complete source code is provided for all classes,
   objects, and utilities. The Pascal source code for the Resource Editor
   and Windows Resource Converter is compatible with TP 6.0 or 7.0, and
   supports both Real Mode and Protected Mode versions of resedit.

   Resource editor

   TVDT Lite: The version of resedit supplied with the TVDT Lite package
   runs in Real Mode and is limited to 640K of memory.

   TVDT 2.5: With the full TVDT package, a 16-bit DPMI Protected Mode
   version of resedit is supplied supporting up to 16 MB of RAM.

   Debugging

   TVDT Lite: No debugging capabilities.

   TVDT 2.5: TVDT comes with the debugging libraries with complete symbolic
   debugging information for all the TVDT classes. Supports 16-bit Real
   Mode applications, 16-bit DPMI applications and 32-bit DPMI
   applications.

   Compatability

   TVDT Lite: Supports BC++ 4.0 and TV 2.0

   TVDT 2.5: In addition to supporting the Borland PowerPack, the full TVDT
   package supports earlier versions of Turbo Vision, such as the versions
   shipped with BC++ 3.1. Also supports TP 6.0, TP 7.0 and Borland Pascal
   7.0.

   Documentation

   TVDT Lite: Documentation is included in a single TV Help File; the
   package includes a TV Help File viewer using the TV THelpViewer class.

   TVDT 2.5: In addition to the on-line TV help file, the documentation is
   also available in Microsoft Windows Help File Format.

   No printed documentation is available with this release.


   -----------------------------------------------------------------------
   LIBRARIES
   -----------------------------------------------------------------------

   The libraries that extend TV is not limited to those we have listed
   here. However, we considered these to be more substantial than others of
   which we are aware.

   Protected mode for TV1.03 and BC3.1 by Kevin Morgan - pmapp.zip 1994
   Some useful gadgets and add-ins by Marc Stern - tvtool17.zip 1993
   Extension of TV classes by Roger Nelson - rvision.zip 1994
   Graphics extension by Simor Balazs - gfx210.zip 1994: excellent
   Graphics extension by Pat Reilly - tvalt.zip 1992
   Graphics extension by Mindware - tvg121.zip 1994
   Palette demonstration by Eric Woodruff - tvcolr.zip 1994
   Palette utilities by Craig Nelson - tvpal.zip 1992
   Palette utilities by Lincoln Beach Software - pald15.zip 1994
   Extension of TInputLine Class by Jeff Penrose - tde.zip 1992
   Improved help viewer and entended video mode output by Peter Brandstrom
	 - tvtoys.zip 1994
   Gadgets, widgets and special functions by Chris Ahlmstrom - face_tv.zip

   These files may be downloaded from the TVPlus site.


   ========================== END OF TEXT PART 1 =========================
</pre>
