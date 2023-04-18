# dicegame


Dev container is build on Linux Alpine
To get the output of SFML from devcontainer to your local os, pipe the output to the correct display in the dockerfile.
As Linux uses a Xserver, windows users need a program like VCXsrv to mock a Xserver display. 
ENV DISPLAY=DESKTOP-FRFDH77:0.0