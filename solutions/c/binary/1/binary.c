#include "binary.h"
//////////////////
// Start Binary //
//////////////////

int convert(const char *input) {
  int result = 0; 
 for (int i = 0;'\0' != input[i]; i++) {
  result = result * 2 + input[i] - '0';
  if (input[i] != '0' && input[i] != '1'){
   return INVALID;
    }
   }
return result;
}
