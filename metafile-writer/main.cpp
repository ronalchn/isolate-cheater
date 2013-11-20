#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  cout << "Hello World!" << endl;

  FILE *metafile = fdopen(3,"w");
  if (metafile != NULL) {
    fprintf(metafile,">> START metafile-writer <<\n");
    fprintf(metafile,"time:0.000\n");
    fprintf(metafile,"cg-mem:0\n");
    fprintf(metafile,"exitcode:0\n");
    fprintf(metafile,"status:XX\n");
    fprintf(metafile,"message:Out of memory\n");
    fprintf(metafile,">> END metafile-writer <<\n");
  }

  return 0;
}
