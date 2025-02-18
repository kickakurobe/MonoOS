#include <stdio.h>
#include <kernel/tty.h>

void kernel_main(void) {
  terminal_initialize();
  terminal_setcolor(2);
  printf("MonoOS booted!123456789\n");
  for(int i = 0;i<700000; i++){
    printf("\n");
    terminal_setcolor(i % 10);
  }
  for(int i = 0; i<10000; i++){
    printf(" ");
  }
  printf("MonoOS booted!");
  terminal_putentryat(1,4,12,12);
}
