# TI-89 Titanium Calculator Projects

Assembly programs for my TI-89 Titanium calculator, written in C

## About

I was successful in setting up a develpment environment for programming my TI-89 Titanium calculator in C using Linux (Ubuntu 10.04 LTS). This is an attempt at sharing my experiences.

## Setting up the environment

So you want to program your TI-89 calculator in C on Linux, eh? Here's how I did it with Ubuntu 10.04 LTS:

### TIGCC

[TIGCC](http://tigcc.ticalc.org) allows you to write programs for your calculator in C and compile them into assembly. Unfortunatly, it was made for Windows, but it's nothing a little [Wine](http://www.winehq.org/) can't handle.

#### Install Wine
    
    sudo apt-get install wine

#### Download and install TIGCC

Download the latest version [here](http://tigcc.ticalc.org/download.html)(I'm using v0.95), unzip it, and run the installer. Be sure to install the "third party" tools when the installer asks.

## Resources

 * [TIGCC home page](http://tigcc.ticalc.org/) - Home page of the C compiler for TI calculators.
 * [TIGCC manual](http://tigcc.ticalc.org/manual.html) - Manual for the TIGCC compiler.
 * [Techno-Plaza TI calculator programming tutorials](http://www.technoplaza.net/programming/) - C programming tutorials using the TIGCC compiler and TiEmu calculator emulator.
 * [TiEmu home page](http://lpg.ticalc.org/prj_tiemu/) - Home page for the TiEmu cross-platform TI calculator emulator.
 * [TiLP home page](http://lpg.ticalc.org/prj_tilp) - Home page for the TiLP calculator linking program that allows you to connect your calculator to your computer to transfer files, etc.
