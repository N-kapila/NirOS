#include "writer.h"
#include "serial_port.h"
#include "segmentation/memory_segments.h"
#include "interrupts/interrupts.h"
#include "interrupts/keyboard.h"

void kmain(){

	segments_install_gdt();
	
	char ptr1[]="Hello! Welcome to NirOS";
	char ptr2[]="Hello! I'm Nirmal!";
	fb_write_str(ptr1,24);
	serial_write(ptr2,20);
	
	interrupts_install_idt();
}
