#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {74, 30, 18, 85};
    assert(domain_review_score(item) == 209);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
