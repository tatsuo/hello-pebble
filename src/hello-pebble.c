#include <pebble.h>

Window *window;

void init() {
  window = window_create();
  window_stack_push(window, true);
}

void deinit() {
  window_destroy(window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
  return 0;
}
