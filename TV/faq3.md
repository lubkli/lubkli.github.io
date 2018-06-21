<pre>
   -----------------------------------------------------------------------
		      Applications written with Turbo Vision
   -----------------------------------------------------------------------

   If you are interested in pushing software you have written using
   TV, download the ASCII text outline to help you prepare a
   catalogue entry describing your application.
   
   -----------------------------------------------------------------------
   CATALOGUE PRO FORMA
   -----------------------------------------------------------------------

   This pro forma has been prepared to make it easy for you to present
   information about an application written with Turbo Vision C++, whether
   you were the sole author, a project leader, an interested third party,
   or the like.

   The sort of information we are looking for is outlined below but the
   file should be no bigger than 4K:


   Name of application

   What you call your program.


   Purpose of the application

   This is a short description of what your programme does, and the needs
   it fulfills for users. This is a good place to state briefly what makes
   it distinctive, e.g. a word processor that sounds like your grade
   teacher when you mis-spell a word.


   Distribution category

   Is your application freeware, shareware, in-house or commercial
   distribution. Any copyright information may be mentioned here.


   Availability

   Specify the distribution filename if the application is freeware or
   shareware. State whether the source code or a library is available for
   your programme.

   Description of application

   Describe what your program actually does, from a user's perspective.


   Developmental problems and response

   Disclose any problems you encountered in building your programme, and
   what workarounds you used to resolve them. Did you encounter any bugs or
   incompatibilities with 3rd party libraries or did you have to modify the
   source code, etc? A few thoughtful comments here may solve a problem
   someone will encounter with their use of TV.


   Contact

   Your name and, if you wish, the address where you may be contacted for
   further information about the programme.

   The time spent in presenting something about your programme will allow
   others to learn from your experience and you also get the benefit of
   wider exposure for your product.


   -----------------------------------------------------------------------
   CATALOGUE CONTENTS
   -----------------------------------------------------------------------
   
   Even though not all of the applications listed in this chapter
   provide sources, they do make good examples of what can be
   achieved with Turbo Vision.


   BIBLIOGRAPHIC SERVICES
   
   SinoCat Wee-San Lee


   NETWORK SOFTWARE INCLUDING SL/IP AND TCP/IP

   DOSLynx the University of Kansas


   NEURAL NETWORKS

   the Welstead programmes


   PC UTILITIES

   HDInfo James Thorpe w/source: free
   NewsWerthy William Werth
   Upfront Rachel Polanskis

   PROCESS CONTROL

   DAQPAK and MAST Craig Schlenter


   TEXT MANAGEMENT

   LaTeX2hyp Roger Nelson


   VOCATIONAL GUIDANCE

   JIIC-CAL Career Advice Package Alan Dobbie


   BORLAND INTERNATIONAL PRODUCTS

   the Integrated Development Environment for some versions of Borland C++
   the spreadsheet, Quattro Pro

   Because of the similarities in appearence with applications written
   using Turbo Vision, this seems an appropriate place to mention these two
   products.

   However, the BC3.1 IDE was not written with Turbo Vision. It was written
   with an in-house library that has grown over the years from the TC1.0
   version.


   -----------------------------------------------------------------------
   APPLICATIONS
   -----------------------------------------------------------------------

   Sinocat
   -----------------------------------------------------------------------

   Purpose of the application

   SinoCat is a library technical services tool which is the first
   cumulated edition of the Chinese National Bibliography on CD-ROM. The
   cataloging database comprises 200,000 Chinese records from the National
   Central Library, Taiwan, ROC.

   Distribution category

   SinoCat is a commercial product which is now marketed in Taiwan.

   Availability

   The source code is not available and is copyright.

   Description of application

   You use SinoCat to locate books or articles by selecting one of the
   available options such as general search (search by keyword), boolean
   search (full text searching with boolean operators), browse, etc. Once
   the reference is found, it shows a cataloging screen with title, author,
   description, ISBN, location, etc.

   It supports retrospective conversion effectively and downloads into the
   local system in ISO-2709 structure. The application also performs
   original cataloging, supports printed catalogue cards, processing labels
   and various kinds of reports.

   It also provides a lot of important information on-line
   (context-sensitive help) like Chinese MARC, cataloging rules, etc.

   Developmental problems

   Conflict with the Chinese System. Although this is not the main point,
   source code of TV 1.03 was modified to allow it to work well with the
   Chinese System.

   TListBox. The programmer wanted to list over 64k of items on the screen
   due to large amount of database in CD-ROM, but could not do so. Finally,
   he inherited a class from TListBox to read a certain number of items at
   a time and read others when necessary.

   Size of executable. SinoCat is a huge application which does a lot of
   things for librarians. Its size is over 640k and relies on the overlay
   provided by Borland. The author tried to use Blinker 3.0 which indicated
   that it could load the program to protected mode without modifying
   source code, but it failed.

   Size of DGROUP. Because there is a lot of data structures and variables
   in this application, the size of DATA_SEG is over 64k. Using objxref.exe
   provided by Borland, the author inspected the size of each function
   which he modified by declaring auto variables or arrays to be global,
   using modifier 'far' to force variables to be far and the like - in
   order to minimize the size of DATA_SEG.

   Context-sensitive help. The programmer used TVHC to make
   context-sensitive help for the application. The problem was that the
   help could not tab backward through the help screens which he overcame
   by simply defining a keyword pointing to the previous help screen.

   Reason for choosing Turbo Vision

   First of all, this application was developed in DOS because it was the
   common platform (DOS + Chinese System) for the library in Taiwan at that
   time. This is the main reason. Secondly, TV provides context-sensitive
   help which is used widely in the application. Thirdly, TV provides a
   very impressive user interface. Last, TV is, in the opinion of Wee-San
   Lee, very similar to OWL 1.0 and should not be difficult to port
   applications from TV to OWL 1.0.

   The application was written using TV1.03.

   Contact

   Wee-San Lee formerly of FlySheet Information Inc. (Taiwan)
   <wlee@chaph.usc.edu>.

   -----------------------------------------------------------------------
   DOSLynx (alpha release)
   -----------------------------------------------------------------------

   Purpose of the application

   DosLynx is a distributed hypertext browser with some World Wide Web
   capabilities supporting DOS users.

   Distribution category

   DosLynx is copyrighted by the University of Kansas and is free for
   instructional and research educational use.  Non-educational use will 
   be licensed at a later date.

   Availability

   DosLynx is available in its source and binary forms by binary anonymous
   FTP from ftp://ftp2.cc.ukans.edu/pub/WWW/DosLynx/   The self-extracting
   archive file name is DLX0_8A.EXE; the source file name is SCR0_8A.ZIP.

   Description of application

   DosLynx is a straightforward menu driven application. It supports the
   following URL types: file, ftp, gopher, http, news, wais.

   DosLynx is a MDI (multiple document interface) application, so each
   window represents an open file at any given time. The application can
   download an inline image and display inline GIFs; it has a mail
   developer and will suggest a file name when prompting the user to save a
   file.

   A feature of DosLynx is its blind support.  The /B command line option
   was implemented to aid blind users using DosLynx with a screen reader.

   Developmental problems

   640K barrier: Documents are, therefore, written to disk to save memory
   and then read from disk in chunks to display on the screen. On the one
   hand, the application is adversely affected but, on the other, it pays
   off in that large documents can be displayed - sometimes!

   CERN libwww 2.14: This code was hard to port to DOS because the code is
   not well written (it still has many remaining memory leaks) and, in many
   cases, there were no correlating system functions from unix to dos.

   TCP/IP driver: Integrating the WATTCP as the tcp/ip package was not so
   hard, but that left only DOS packet driver enabled machines as the
   market.

   Combining sources: The three code sources combined (libwww, wattcp and
   doslynx) run dangerously close to the 64K limit in DGROUP.

   Time: Once the original author (Garrett Arch Blythe) was put in control
   of both Lynx and DosLynx about May 1994, there was little time for
   dedicated DosLynx development. There was a hiatus in the application's
   development between August 1994 and early 1995 when Ravi Kolli is
   reported to have taken over the project at the

		Kansas University <doslynx@lark.cc.ukans.edu>

   Reason for choosing Turbo Vision

   DosLynx was developed, ground up, from late November 1993 to mid May
   1994 on a 386sx16 4M Ram 40M hard drive; around a 40 minute compile
   time.

   Unknown to the rest of the world, Lynx had been ported to DOS one year
   earlier by the author. This was the pre-WWW capable version of Lynx.

   When the second chance came around, he decided to use TV because it was
   first and foremost readily available and familiar. It cleanly cut
   DosLynx and Lynx into two seperate entities. Having taken a long time
   deciding what to call this DOS www browser, it became, in the end,
   simply DosLynx because Lynx was already associated with the Kansas
   University though the two browsers had nothing in common.

   Also, TV would help with the implementation of the forms interface. This
   was never done, in part, due to the lack of support in the libwww for
   forms.

   Contact

   Garrett Arch Blythe
   http://home.mcom.com/people/blythe
   blythe@netscape.com
   Netscape Communications Corporation +1 415 528 2639

   -----------------------------------------------------------------------
   Newswerthy
   -----------------------------------------------------------------------

   Purpose of the application

   NewsWerthy offline reader for DOS is used to read and reply to usenet
   messages in the SOUP format.  These are generally generated by uqwk,
   which is freeware.

   Distribution category

   NewsWerthy is shareware.

   Availability

   The distribution file name is NWRTH1??.ZIP. It is copyright and no
   source code is available.

   Description of the application

   SOUP packets are uncompressed using pkunzip. The newsgroups are then
   organized into a listbox so that a newsgroup can be selected. The
   messages are also listed in a listbox. Each message is read in a
   TScroller window, with many options available from the status line, such
   as save to file, reply, etc.

   Replies are compressed using pkzip. The messages in the reply packet can
   be edited with an external editor. Messages can also be deleted. The
   list of messages can be sorted by date, from, subject or no sort.

   Developmental problems

   The library is compilied with 80286 code, which meant recompiling the
   library so that 8088 systems could run the program.

   There are several bugs, one of which the author corrected himself. There
   is a bug which causes monochrome systems to generate a divide by 0 error
   in any dialog boxes that use TInputLine (has to do with the cursor). The
   bug fix that resulted has been added to the rest gathered on the
   CompuServe TurboVision forum.

   Reason for choosing Turbo Vision

   Basically, because it came with Borland C++ 3.1 and, at the time, the
   author wanted to write a DOS program.

   Contact

   William Werth (Bill) billw@eskimo.com

   -----------------------------------------------------------------------
   Upfront
   -----------------------------------------------------------------------

   Purpose of the application

   A file and program manager.
   
   Distribution category

   The academic version of Upfront is site specific and subject to a site
   licence.

   Upfront as shareware is not yet available but will be shortly at
   USD30.00.

   Availability

   The code is copyright and is not available.

   Description of the application

   The application is a user friendly shell for launching programmes (from
   a list of programmes nominated by the user) without having to go near
   the DOS prompt. Upfront provides a number of file and disk functions
   commonly used in MSDOS such as a file finder, disk formatter and calls
   MSDOS programmes such as backup and restore. It performs background
   printing and contains context sensitive on-line help for the novice PC
   user.

   Developmental problems

   The main problem was, for an inexperienced beginner in C++, the manuals
   and the learning curve associated with Turbo Vision. Many concepts were
   not presented clearly and the documentation provided was not aimed at a
   completely new programmer. This problem was overcome by experimentation
   and asking lots of questions.

   Reason for choosing Turbo Vision

   Consistency with software already purchased. The application was
   developed on a 386SX16, a 486DX2/66 and a 486BL75 using BC3.1/TV1.03 for
   8088+ and up.

   Contact
   
   Rachel Polanskis at grove@zeta.org.au

   -----------------------------------------------------------------------
   Schlenter
   -----------------------------------------------------------------------

   The two applications under this heading are known as DAQPAK (Data
   AQuisition PAcKage) and MAST (Manual and Automatic Scheduling Tool)
   respectively.

   Purpose of application

   (a) A program to read an A/D converter connected to some strain gauges
   and plot some cute pictures of stress vs. strain as rocks are crushed -
   the code contains a cute circular buffer based interrupt routines
   (commercial).

   (b) A manual and automatic scheduling tool that uses a modified list
   scheduling heuristic and user interaction to schedule tasks from a block
   diagram onto a multiprocessor transputer hardware platform - the code
   produces cute postscript gantt charts (Masters project).

   Distribution category

   (a) Commercial and site specific; (b) academic and project specific.

   Availability

   The author advised that he was not sure if he is allowed to distribute
   the code of either (a) or (b) or whether he would want to since neither
   is particularly cleanly written or useful to mankind outside of the
   environment for which it was produced.

   Description of application

   See statement above.

   Developmental problems and response

   The programs were too large for DOS mode. Debug under TD and had to run
   it under Pharlap to be able to debug it. The author had a messy problem
   getting the main program to update entries in the dialog box listbox and
   communicating in the other direction.

   Reason for choosing Turbo Vision

   The author stated that Turbo Vision was far less resource hungry than
   Windows and required less spectacular hardware to run. Also a GUI was
   not required for the applications written.

   Contact

   Craig Schlenter University of Natal <cschle@daisy.ee.und.ac.za>

   -----------------------------------------------------------------------
   LaTeX2hyp
   -----------------------------------------------------------------------

   Purpose of application

   LaTeX2hyp is a program which converts LaTeX to ASCII text file
   documents.

   Distribution category

   Freely distributable but not public domain. Do not redistibute modified
   sources.

   Availability

   Distribution includes: sources, executable (MS-DOS or Amiga) and
   documentation. Archived: LHA (MS-DOS, Amiga) and Tar/compress (UNIX).

	   ftp://iris1.bsyse.wsu.edu /pub/latex2hyp
	   http://www.eecs.wsu.edu/coea/
	  (Biological Systems Engr. item /pub/latex2hyp)
	   Email: rnelson@mail.wsu.edu
	   MIME encoded/please specify version.

   Description of application

   LaTeX2hyp is not just a deTeX program, but actually formats the text,
   performs character set substitutions, generates cross references, etc.

   Although this program is intended for LaTeX, the author has been
   informed that it often satisfactorily converts TeX documents as well. It
   can also be used to generate hypertext cross references compatible with
   the Borland Turbo Vision help compiler. This allows you to maintain a
   single document for a printed manual and Online context sensitive help,
   and WorldWideWeb documents!

   Developmental problems and response

   None specified.

   Reasons for choosing TV

   None specified.

   Contact

   Roger Nelson
   rnelson@mail.wsu.edu
   Biological Systems Engineering Department
   Washington State University, Pullman, WA 99164-6120 USA

   Work: +1 509 335 1100
   Home: +1 509 332 8387
   FAX:  +1 509 335 2722

   -----------------------------------------------------------------------
   JIIC-CAL Career Advice Package
   -----------------------------------------------------------------------

   This career advice package from JIIG-CAL consists of: SubjectScan,
   FormScore, Pathfinder and Explorer.

   Purpose of the application

   SubjectScan: Suggest subjects for a young client to study at school.
	   FormScore: Generate an interest profile and job suggestions for a client
	   via OMR read forms - large batches.
	   Pathfinder: Generate an interest profile and job suggestions for a
	   client; PC user interface - single clients.
	   Explorer: Allows client to access a database of jobs with several
	   different search tools e.g. job factors, name search, level of study
	   required.

   Distribution category

   The applications that form part of this package are commercial.

   Availability

   Code is unavailable.

   Description of application

   SubjectScan: Psychometric test - young students (about say 12 or 13
	  years) fill in forms in response to a set of questions - OMR scans
	  forms, software processes responses and generates reports for the
	  student, giving lists of subjects in groups most likely -> least
	  likely to suit the student for study.
   FormScore: Psychometric tests - clients (14-18 or 18+ yrs) fill in forms
	  in response to a set of questions - OMR scans forms, software
	  generates reports - Interest Profile, Job Suggestions and
	  information, pros and cons for any specific job.
   Pathfinder: Psychometric tests - clients (14-18 or 18+) respond to
	  questions from the software, software generates Interest Profile,
	  Job Suggestions and information, pros & cons for any specific job.
   Explorer: Allows client to access a database of jobs with several
	  different search tools e.g. job factors, name search, level of study
	  required, careers library area.

   Developmental problems and response

   Poor documentation - persevere. Many classes in TV not well coded for
   inheriting - tended to use TV's more basic classes and build up what we
   required. Trying to keep up-to-date with TV bug fixes - code around
   problems and avoid upgrading to unknowns.

   Reason for choosing Turbo Vision

   Needed standard interface, easy to use, attractive front end for
   software. The applications were developed on PC 486 33MHz, DOS 6.2, BC
   3.1, TV 1.03 for 8086+ targets.

   Contact

   Alan Dobbie Edinburgh University Alan@srv1.jig.ed.ac.uk


   =======================================================================
				  EXIT TVPLUS
   =======================================================================

   Thank you for using this service which, we hope, you will use again
   soon.

   Because this material is copyright, you may not reproduce this document
   or parts of this document by any means without the consent of Robert
   Hazeltine and Rachel Polanskis except to the limited extent essential
   for review. We would appreciate a copy of any such review.

   A general consent has been given to reproduce this document only under
   the terms outlined in the section Distribution rights and no other.

   -----------------------------------------------------------------------
   Acknowledgements
   -----------------------------------------------------------------------


   TVPlus wishes to acknowledge the assistance of:

   CRAIG SCHLENTER

   Craig Schlenter maintained the first FAQ about Turbo Vision for C++
   until December 1994 while studying at the University of Natal, Durban,
   South Africa. The information he put together on TV became the point of
   departure for the original issue of TVPlus published in January 1995.

   After Craig gained his BSc Eng (Electronics) and submitted his thesis
   for an MSc Eng (Electrical), he started work as a C programmer/
   electronics engineer in February 1995. His interests include software,
   digital hardware, the internet, linux and Turbo Vision.

   OTHER CONTRIBUTORS

   We would also like to thank for their overall assistance and support

	  Eric Woodruff <mailto:72134.1150@compuserve.com> and
	  Pat Reilly <mailto:71333.2764@compuserve.com>

   Our special appreciation to the following people for their contributions
   to TVPlus

	  Scott Sumners <mailto:scottasumn@aol.com>
	  Frank Hohmann <mailto:fhohman@rols1.oec.uni-osnabrueck.de>
	  Eddie Stassen <mailto:stasseed@telkom11.telkom.co.za>
	  Vincent Van Den Berghe <mailto:vvdh@knuth.bvd.be>



                                                         APPENDIX A                                                                            

From r.polanskis@kilo.uws.EDU.AU Tue Aug  1 11:10:09 1995
Received: from kilo.uws.EDU.AU (kilo.uws.EDU.AU [137.154.156.30]) 
  by godzilla.zeta.org.au (8.6.9/8.6.9) with SMTP id LAA01948 for 
  <grove@zeta.org.au>; Tue, 1 Aug 1995 11:05:50 +1000
Received: from kilo.uws.edu.au ([137.154.212.165]) by kilo.uws.EDU.AU 
  with SMTP id AA10190 (5.67a/IDA-1.5 for <grove@zeta.org.au>); 
  Tue, 1 Aug 1995 11:04:44 +1000
Date: Tue, 1 Aug 1995 11:04:44 +1000
Message-Id: <199508010104.AA10190@kilo.uws.EDU.AU>
X-Sender: rachelp@kilo.uws.edu.au
X-Mailer: Windows Eudora Version 1.4.4
Mime-Version: 1.0
Content-Type: text/plain; charset="us-ascii"
To: grove@zeta.org.au
From: James Love <love@Essential.ORG> (by way of r.polanskis@nepean.uws.edu.au 
  (Rachel Polanskis))
Subject: Ralph Nader on WINDOWS 95 Problems
Status: RO

----------------------------Original message----------------------------
-----------------------------------------------------------------
TAP-INFO - An Internet newsletter available from listproc@tap.org
-----------------------------------------------------------------
TAXPAYER ASSETS PROJECT - INFORMATION POLICY NOTE
July 31, 1995

     MICROSOFT WINDOWS 95

-    Ralph Nader and James Love send letter to Clinton
     Administration outlining criticism of two features of
     Microsoft WINDOWS 95.

-    Letter objects to Microsoft decision to "bundle" its new
     Microsoft Network (MSN) with WINDOWS 95, and the Microsoft
     "Registration Wizard," which provides Microsoft with
     information on files located on customer hard disk.

-    Nader and Love express support for Department of Justice
     (DOJ) antitrust action to address both problems, and ask
     Clinton to prevent federal agencies from buying WINDOWS 95
     until the information gathering features of the
     "Registration Wizard" are disabled or modified.

     jamie (love@tap.org; 202/387-8030)

     The letter follows.



                         Ralph Nader
                         P.O. Box 19312, Washington, DC 20036

                         James Love
                         Consumer Project on Technology
                         P.O. Box 19367, Washington, DC 20036
                         love@tap.org; voice 202/387-8030

July 26, 1995

President William Clinton
the White House
Washington, DC

Dear President Clinton,

     We are writing to ask you and your administration to take
actions which address problems arising from Microsoft's near
monopoly position in the market for personal computer operating
systems.  As you know, two features of Microsoft's WINDOWS 95
software have been widely criticized -- the "bundling of
Microsoft Network (MSN) and Microsoft's online "Registration
Wizard."  These issues are discussed below.

1.   Microsoft Network.

     The "bundling" of Microsoft Network (MSN) with WINDOWS 95
has raised alarm among Microsoft's competitors that Microsoft
will use its dominate market position for operating system
software to give MSN an enormous advantage over its rivals in the
market for online service providers.  In brief, Microsoft has
written its new version of Windows with a built-in way to
register for its new online service.  According to reports by
beta users of the product, Microsoft has given the MSN a very
high priority, including a special icon which cannot be deleted
by the user, and periodic queries by the operating system to the
user, encouraging registration.  Apparently no other rival online
services vendor will have the opportunity to receive similar
status within Windows 95.  In our view, Microsoft's actions are a
predictable attempt to exploit its dominance in the operating
system market to benefit its penetration into other fields that
are potentially more competitive.

     One analogy to this practice is in the area of airplane
reservations.  American Airlines operated the dominant online
service for airline reservations, and arranged the available
flights in alphabetical order, giving American Airlines what
turned out to be a large advantage over its rivals.  The
government subsequently regulated this practice, so that the
online reservations systems would not be used in an anti-
competitive manner.  We believe it is appropriate and justified
for the Department of Justice to take actions that would prevent
Microsoft from bundling MSN with WINDOWS 95 as has been done in
their beta releases of the product.

2.   Registration Wizard.

     Another objectionable feature of WINDOWS 95 is the Microsoft
online "Registration Wizard."  This part of the program is
designed to scan automatically a user's hard disk, dial-up
Microsoft, and download information to Microsoft about the files
on the user's hard disk, including the titles and versions of
software applications.  Critics of this practice, including the
Department of Defense, have questioned the impact of this
practice on data security and privacy.  Microsoft's rivals also
believe that it will give Microsoft an enormous advantage in
marketing by virtue of the fact that it gives Microsoft excellent
intelligence on its competitors, including the names and
addresses of their customers.

     Microsoft has defended the Wizard by saying that the
information is gathered to help its product support personnel
debug its software, and that consumers can choose not to send the
information to Microsoft.  We believe that both arguments are
disingenuous.  First of all, the registration process is separate
from customer service, and if Microsoft really wanted to use the
information for customer service it could devise far less
intrusive methods of doing so, such as a program to printout
relevant information for use during a consumer service call,
rather than at the point of registration.  Secondly, consumers
are likely to be confused and intimidated by the registration
process, because of concerns that this complex software might not
function correctly if they refuse to give Microsoft the
information it wants to collects.

     In our view, the Registration Wizard is an intrusive measure
that uses technology to erode customer privacy, and we urge you
to take steps to discourage its use.  Specifically, we urge you
to ask OMB officials Sally Katzen, Administer of the Office of
Information and Regulatory Affairs (OIRA), and Stephen Kelman,
Administrator for Federal Procurement Policy, to issue a
directive to all federal agencies, advising them not to purchase
WINDOWS 95 with the Registration Wizard.  This would be similar
to the very successful actions taken by federal agencies in the
1980's to refuse to purchase spreadsheet and database software
that placed "hidden" files on hard disks as part of copyright
protection schemes, a proactive measure which moved the entire
market away from such ill-conceived practices.

     We also believe it is appropriate and justified for the
Department of Justice to take actions that would prevent
Microsoft from sharing the information gathered from the
Registration Wizard with its marketing personnel.

     Please let us know what you will do about these important
matters.

Sincerely


Ralph Nader                        James Love
                              Consumer Project on Technology

ps:  Of course, we were pleased to read press reports that
Microsoft recently said it would make the MSN abide by the
European Union's Directive on Data Protection, and we urge
Microsoft's competitors in online services, such as American
Online, Prodigy or Compuserve, to embrace these rules which
protect customer privacy.

---------------------------------------------------------------------
TAP-INFO is an Internet Distribution List provided by the Taxpayer
Assets Project (TAP).  TAP was founded by Ralph Nader to monitor the
management of government property, including information systems and
data, government funded R&D, spectrum allocation and other government
assets.  TAP-INFO reports on TAP activities relating to federal
information policy.

TAP-INFO is archived at gopher.essential.org in the Taxpayer Assets
Project directory, and at http://www.essential.org/tap/tap.html

Subscription requests to tap-info to listproc@tap.org with
the message:  subscribe tap-info your name
---------------------------------------------------------------------
Taxpayer Assets Project; P.O. Box 19367, Washington, DC  20036
v. 202/387-8030; f. 202/234-5176; internet:  tap@tap.org
--------------------------------------------------------------------
================ END OF TEXT =====================
</pre>
