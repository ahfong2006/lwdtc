#include <stdio.h>
#include "lwdtc/lwdtc.h"

int
main() {
    lwdtc_cron_ctx_t ctx;
    lwdtc_cron_parse(&ctx, "1 * */15 2-15/3 1,2,3,4 2 3 4 5 6");

    return 0;
}
