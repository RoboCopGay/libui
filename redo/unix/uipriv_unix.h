// 22 april 2015
#define GLIB_VERSION_MIN_REQUIRED GLIB_VERSION_2_32
#define GLIB_VERSION_MAX_ALLOWED GLIB_VERSION_2_32
#define GDK_VERSION_MIN_REQUIRED GDK_VERSION_3_4
#define GDK_VERSION_MAX_ALLOWED GDK_VERSION_3_4
#include <gtk/gtk.h>
#include "../out/ui.h"
#include "../ui_unix.h"
#include "../uipriv.h"

#define gtkXMargin 12
#define gtkYMargin 12
#define gtkXPadding 12
#define gtkYPadding 6

// menu.c
extern GtkWidget *makeMenubar(uiWindow *);
extern void freeMenubar(GtkWidget *);
extern void uninitMenus(void);

// alloc.c
extern void initAlloc(void);
extern void uninitAlloc(void);

// bin.c
extern uiControl *newBin(void);
extern void binSetChild(uiControl *, uiControl *);
extern int binMargined(uiControl *);
extern void binSetMargined(uiControl *, int);

// TODO
#define PUT_CODE_HERE 0
