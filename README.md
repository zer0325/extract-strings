# XSTRINGS

`xstrings` is a simple tool that extracts strings from a file. This tool came
about when I am examining a `.js` file (sample.js). I wanted to extract the
strings from the above-mentioned file for me to be able to see the strings more
clearly.

This tool is somewhat similar to the `strings` tool which is,

> mainly useful for determining the contents of non-text file (man 1 strings)

## Usage

To compile:

`$ gcc xstrings.c -o xstrings`

To extract the strings (using the sample.js file)

`$ xstrings < sample.js > result`
