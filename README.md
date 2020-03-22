# foss2020-lightning-talk
Just a place to show SRC_URI and git

The master branch includes the minimal needed files to use autoconf, so that you could do the 
- $ ./configure
- $ make
- $ make install 

cycle.




There are several ways to do that. Usually you would have an _./autogen.sh_  that would do the require phases to generate the _./configure_ file.

For example, if you want to build from command line, these are two options to do so (there are more):


##### autoreconf 
- $ ./autoreconf --install 
  Would generate everything required, but would ask you to generate some missing files.  (e.g. NEWS, README, AUTHORS, ChangeLog)

The yocto project "autotools" class uses autoreconf.


##### aclocal / autoconf / automake
You can do the following commands, to build properly from the command line - but yocto autotools will not be happy with them (as you will see in the exercise)

- $ aclocal
- $ autoconf
- $ automake --add-missing --foreign   # --foreign will remove the need to add the GNU mandatory documentation files _INSTALL, NEWS, README, AUTHORS, ChangeLog, COPYING_

Then you can run
- $ ./configure
- $ make


The file as been added to the master branch, since it is not "playing nice with Yocto", but does play nice with the minimum required files for storing in source control.
