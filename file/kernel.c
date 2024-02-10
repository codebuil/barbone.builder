#include <base.h>

void kernel_main()
{
	char *src =scr2; //(char *)0x000b8000L;
	
	int x=0;
	int y=0;
	int n=0;
	char hello[]="hello world...\n";
	char *ccc=alloc(lens(hello)+1);
	
        strcpys(ccc,hello);
        clear();
	locate(0,0);
        print(ccc);
        ccc=reallocs(ccc,lens(hello)*2+2);
        strcats(ccc,hello);
        print(ccc);
        
	
	

	
		


	
	
}


