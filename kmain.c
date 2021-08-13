#include "io.h"
#include "writer.h"
#include "serial_port.h"
#include "segmentation/memory_segments.h"

void kmain(){

	segments_install_gdt();
	
	char ptr1[]="Hello! Welcome to NirOS";
	char ptr2[]="Hello! I'm Nirmal!";
	fb_write(24,ptr1);
	serial_write(0x3F8,ptr2,20);
}
