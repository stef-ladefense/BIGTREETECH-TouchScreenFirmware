#ifndef _PREHEAT_MENU_H_
#define _PREHEAT_MENU_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "menu.h"
#include "Settings.h"

void refreshPreheatIcon(PREHEAT_STORE * preheatStore, uint8_t index, bool redrawIcon);
void menuPreheat(void);

#ifdef __cplusplus
}
#endif

#endif
