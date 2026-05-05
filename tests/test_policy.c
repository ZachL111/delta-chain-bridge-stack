#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {91, 100, 8, 25, 12};
    assert(score_signal(signal_case_1) == 214);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {76, 101, 22, 6, 12};
    assert(score_signal(signal_case_2) == 233);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {89, 90, 17, 15, 4};
    assert(score_signal(signal_case_3) == 190);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
