#include <base.h>

void kernel_main()
{
	char *src =scr2; //(char *)0x000b8000L;
	
	int x=0;
	int y=0;
	int n=0;
	char hello[]="hello world...\n";
	char *ccc=alloc(lens(hello));
	char *cc=alloc(80);
	int p1=(int)ccc;
        strcpys(ccc,hello);
        strshex(cc,(long)p1);
        clear();
	locate(0,0);
        print(ccc);
        print(cc);
        ccc=reallocs(ccc,lens(hello)*2);
        p1=(int)ccc;
        strcats(ccc,hello);
        print(ccc);
        strshex(cc,(long)p1);
	print(cc);
	

	
		


	
	
}


