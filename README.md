
# project-initialization-script

Bash script to quickly initialize boilerplate project in C, C++, or x86-64 NASM
assembly.

The `Templates` directory in the project directory contains the file 
templates used by the script. This is a copy of the folder I have in my home
directory, which I reference in the script as `~/Templates`. Copy this 
directory into your own directory and the script will work as normal. Otherwise
simply modify the script to reference the location of the templates directory 
you chose.

Note that only assembly files currently use either the `{{DATE}}` or the
`{{DESCRIPTION}}` option. This is because C and C++ source files tend to not
have too much metadata attached to them, but I'll probably modify the script
to include that information, as I don't think source files can ever have too
little description.

I chose to use the [{{ mustache }} ](https://mustache.github.io/) template 
format, but I honestly don't know why. I don't really use PHP, mostly for my
own sanity, but I figured it was a well-established format. In any case, if
you would like to use a non-mustache-style template, be sure to edit both the
[sed](https://www.gnu.org/software/sed/manual/sed.html) scripts in the 
initialization script and the template files in the `Templates` folder.

