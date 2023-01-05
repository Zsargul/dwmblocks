#define CMDLENGTH 50
#define DELIMITER "  "
#define CLICKABLE_BLOCKS // NOTE: DWM must be patched with statuscmd for clickable blocks

const Block blocks[] = {
               /* Command */                 /* Update Interval (Secs) */         /* Update Signal */ 
	BLOCK("sb-disk.sh",                  3,                                                   4),
	BLOCK("sb-memory.sh",                1,                                                   2),
	BLOCK("sb-internet.sh",              1,                                                   6),
        BLOCK("sb-volume.sh",                1,                                                  10),
	BLOCK("sb-date-time.sh",             1,                                                   3),
};
