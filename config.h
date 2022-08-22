#define CMDLENGTH 50
#define DELIMITER "  "
#define CLICKABLE_BLOCKS // NOTE: DWM must be patched with statuscmd for clickable blocks

const Block blocks[] = {
               /* Command */                 /* Update Interval (Secs) */         /* Update Signal */ 
	BLOCK("sb-telegram.sh",              5,                                                   5), 
	BLOCK("sb-disk.sh",                  300,                                                 4),
	BLOCK("sb-memory.sh",                5,                                                   2),
	BLOCK("sb-cpu-load-avg.sh",          5,                                                   1),
	BLOCK("sb-internet.sh",              10,                                                  6),
	BLOCK("sb-volume.sh",                0,                                                  10),
	BLOCK("sb-date-time.sh",             1,                                                   3),
};
