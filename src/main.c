#include <3ds.h>
#include <stdio.h>

#include "vb.h"

int main(int argc, char *argv[]) {
  gfxInitDefault();

  // Initialize console on top screen
  consoleInit(GFX_TOP, NULL);

  vb_init();

  // Print text to console
  printf("\x1b[15;19HHenlo World!"); // Starts at row 15, column 19
  printf("\x1b[29;15HPress start to exit."); // Starts at row 29, column 15

  vb_thing();

  while (aptMainLoop()) {
    // Scan inputs
    hidScanInput();
    // Get buttons that have just been pressed
    u32 kDown = hidKeysDown();
    // If pressing start, exit program
    if (kDown & KEY_START) {
      break;
    }
    // Flush and swap framebuffers
    gfxFlushBuffers();
    gfxSwapBuffers();
    // Wait for VBlank
    gspWaitForVBlank();
  }

  gfxExit();
  return 0;
}
