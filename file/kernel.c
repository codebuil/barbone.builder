#include <base.h>

void kernel_main()
{
	char *src =scr2; //(char *)0x000b8000L;
	
	int x=0;
	int y=0;
	int n=0;
	char hello[]="hello world...\n";
	char *ccc=newString(hello);
	char *cc=alloc(80);
        strshex(cc,(long)ptrs(ccc));
        clear();
	locate(0,0);
        print(ccc);
        print(cc);
        
        catString(ccc,hello);
        print(ccc);
        strshex(cc,(long)ptrs(ccc));
	print(cc);
	

	
		


	
	
}


