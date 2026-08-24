#include "high_scores.h"

// for latest score 
int32_t latest(const int32_t *scores, size_t scores_len){
return scores[scores_len - 1]; 
}
// for high score
int32_t personal_best(const int32_t *scores, size_t scores_len) {
  int32_t best = scores[0];
for (size_t i = 0; i < scores_len; i++) {

    if (scores[i] > best) {
best = scores[i];
    }
  }
  return best;
}
// for 3 high scores 
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {
size_t count = 3;
int32_t first = INT32_MIN;
int32_t second = INT32_MIN;
int32_t third = INT32_MIN;

for (size_t i = 0; i < scores_len; i++) {
if (scores[i] > first) {
third = second;
second = first;
first = scores[i]; }
  else if (scores[i] > second) {
third = second;
second = scores[i]; }
  else if (scores[i] > third) {
third = scores[i];
}
if (scores_len < count) {
count = scores_len;
}
}
output[0] = first;
output[1] = second;
output[2] = third;
    return count;
}
