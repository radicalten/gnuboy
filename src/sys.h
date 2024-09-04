#ifndef VID_H
#define VID_H

#define _POSIX_C_SOURCE 200809L

/* stuff implemented by the different sys/ backends */

void vid_begin();
void vid_end();
void vid_init();
void vid_preinit();
void vid_close();
void vid_setpal(int i, int r, int g, int b);
void vid_settitle(char *title);

void pcm_init();
int pcm_submit();
void pcm_close();
void pcm_pause(int dopause);

void ev_poll(int wait);

void sys_checkdir(char *path, int wr);
void sys_sleep(int us);
void sys_sanitize(char *s);

void joy_init();
void joy_poll();
void joy_close();

void kb_init();
void kb_poll();
void kb_close();


/* FIXME these have different prototype for obsolete ( == M$ ) platforms */
#include <sys/time.h>
int sys_elapsed(struct timeval *prev);
void sys_initpath();

#endif
