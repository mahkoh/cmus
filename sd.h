#ifndef _SD_H_
#define _SD_H_

#include "config/dbus.h"

#ifdef HAVE_DBUS
 #define SD_VAR extern
 #define SD_FUNC(f) f;
#else
 #define SD_VAR static __attribute__((unused))
 #define SD_FUNC(f) static inline f {}
#endif

enum sd_signal {
	SD_EXIT,
	SD_STATUS_CHANGE,
	SD_TRACK_CHANGE,
	SD_VOL_CHANGE,
};


SD_VAR int sd_socket;

SD_FUNC(void sd_init(void))
SD_FUNC(void sd_handle(void))
SD_FUNC(void sd_notify(enum sd_signal signal))

#endif
