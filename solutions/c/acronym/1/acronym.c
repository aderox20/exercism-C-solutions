#include "acronym.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
///////////////////
// Start_Acronym //
///////////////////

char *abbreviate(const char *phrase) {
  if(phrase == NULL) {
    return NULL;
  }
  if(strlen(phrase) == 0 ) {
    return NULL;
  }
  char *result = malloc(strlen(phrase) + 1);
  int VariableName = 0;
 for (size_t i = 0; i < strlen(phrase); i++) {
  if ((i == 0 || phrase[i - 1] == ' ' || phrase[i - 1] == '-' || phrase[i - 1] == '_') && isalpha(phrase[i])) {
   result[VariableName] = toupper(phrase[i]);
   VariableName++;
    }
  }
 result[VariableName] = '\0';
     return result;
}
