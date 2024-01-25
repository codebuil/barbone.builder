int xxx=0;
int yyy=0;
int zzz=0;
static double PI = 3.141592653589793;
char *scr2=(char *)0x000b8000L;//[80*26*2];

void clear(){
	int n=0;
	char *src = scr2;//(char *)0x000b8000L;
	for(n=0;n<80*24*2;n=n+2){
		src[n]=32;
		src[n+1]=0x67;
	}
}
void scrollb8000()
{
	int n=0;
	int nn=0;
	
	char *src = scr2;//(char *)0x000b8000L;
	 
	for(n=0;n<80*24*2;n++)src[n]=src[n+160];
}
void copyb8000(int address,char *s)
{
	int n=0;
	int nn=0;
	
	char *src = scr2;//(char *)0x000b8000L;
	 
	while(s[n]!=0){
		src[address+nn]=s[n];
		nn++;
		nn++;
		n++;
	}
}
void locate(int x,int y){

	xxx=x;
	yyy=y;
	if(x>79)x=79;
	if(y>24)y=24;
	zzz=y*80*2+x*2;
}
void print(char* s){
	copyb8000(zzz,s);
	xxx=0;
	yyy++;
	if (yyy>24){
		yyy=24;
		scrollb8000();
	}
	locate(xxx,yyy);
}


  static int abs(int i)
  {
    return (i < 0) ? -i : i;
  }
  
  int adds(int i, int ii){
	return i + ii;
}

void adigit(char *s1,int n){
	int i=0;
	char c1=0;
	for(i=0;i<n;i++){
		c1='0'+i;
		if(i>9)c1='A'+i-10;
		s1[i]=c1;
	}
	s1[n]=0;
}

int strlen(char *s){
	int pos=0;
	while(s[pos]!=0){
		pos++;
	}
	return pos;
}
int strslen(char *s){
	int pos=0;
	while(s[pos]!=0){
		pos++;
	}
	return pos;
}
void afill(char *s1,char c, int pos){
	int i=0;
	int i1=strlen(s1);
	int i2=pos/2;
	for(i=0;i<i2;i++){
		s1[i]=c;
		s1[i1-i]=c;
	}
}

void cfill(char *s1,char c, int pos){
	int i=0;
	int i1=strlen(s1)/2;
	int i2=pos/2;
	for(i=0;i<pos;i++){
		s1[i1-i2+i]=c;
	}
}

char *copys(char *s){
	return s;
}

  static double ccoss(double x, double y)
  {
  int xx1=x;
  int yy1=y;
  if(xx1<0)xx1=0-xx1;
  if(yy1<0)yy1=0-yy1;
  static double
    C1 = 0.0416666666666666, // Long bits 0x3fa555555555554cL.
    C2 = -1.388888888887411e-3, // Long bits 0xbf56c16c16c15177L.
    C3 = 2.480158728947673e-5, // Long bits 0x3efa01a019cb1590L.
    C4 = -2.7557314351390663e-7, // Long bits 0xbe927e4f809c52adL.
    C5 = 2.087572321298175e-9, // Long bits 0x3e21ee9ebdb4b1c4L.
    TWO_27 = 0x8000000,
    C6 = -1.1359647557788195e-11; // Long bits 0xbda8fae9be8838d4L.

    double z = x * x;
    double r = z * (C1 + z * (C2 + z * (C3 + z * (C4 + z * (C5 + z * C6)))));

    if (x < 0.3)
      return 1 - (0.5 * z - (z * r - x * y));

    double qx = (x > 0.78125) ? 0.28125 : (x * 0.25);
    return 1 - qx - ((0.5 * z - qx) - (z * r - x * y));


  }
  
  
  int div(int i, int ii){
	return i / ii;
}

int findchar(char *s,char c){
	int pos=0;
	while(s[pos]!=0 && s[pos]!=c){
		pos++;
	}
	if(s[pos]!=c)pos=-1;
	return pos;
}

char *c_hello(){
	return "hello world\n";
}

int incmp(char *s,char *s2){
	int pos=0;
	int exit=0;
	int cmp=0;
	while(exit!=1){
		if(s[pos]!=s2[pos]){
			if(s[pos]>s2[pos])cmp=1;
			if(s[pos]<s2[pos])cmp=-1;
			if(s2[pos]==0)cmp=0;
			exit=1;
		}
		pos++;
	}
	return cmp;
}
int neg(int a){
	return 32000-a ;
}
int negn(int a,int n){
	return n-a ;
}

int lcase(char *s){
	int pos=0;
	while(s[pos]!=0){
		if (s[pos]>='A' && s[pos]<='Z')s[pos]=(s[pos]-'A')+'a';
		pos++;
	}
	return pos;
}

void lfill(char *s1,char c, int pos){
	int i=0;
	for(i=0;i<pos;i++){
		s1[strlen(s1)-i]=c;
	}
}

int lostpower(int a){
	return a >> 4;
}

void lpos(char *s1,char c, int pos){
	s1[strlen(s1)-pos]=c;
}
 static int max(int a, int b)
  {
    return (a > b) ? a : b;
  }
  static int min(int a, int b)
  {
    return (a < b) ? a : b;
  }

int mods(int i, int ii){
	return i % ii;
}
int muls(int i, int ii){
	return i * ii;
}

int negs(int a){
	return -a ;
}

int paperline(int a){
	int aa=a;
	aa=aa<<4;
	aa=aa | a;
	return aa ;
}

int popnible(int a){
	return a & 15;
}

int popnibles(int a,int b){
	int aa=a;
	aa=aa<<4;
	aa=aa | b;
	return aa ;
}

void rfill(char *s1,char c, int pos){
	int i=0;
	for(i=0;i<pos;i++){
		s1[i]=c;
	}
}

  static int rounds(float a)
  {
    return (int) ((float)(a + 0.49f));
  }
void rpos(char *s1,char c, int pos){
	s1[pos]=c;
}

int strcats(char *s1,char *s2){
	int pos=0;
	char *s3;
	s3=s1+strslen(s1);
	while(s2[pos]!=0){
		s3[pos]=s2[pos];
		pos++;
	}
	s3[pos]=s2[pos];
	return pos;
}


void strsint(char *s,int n){
	int nn=n;
	int pos=0;
	int signals=0x7fff;
	int divsb=10000;
	int divsa=0;
	nn=signals & nn;
	signals++;
	signals=signals & n;
	s[pos]='+';
	if(signals!=0)s[pos]='-';
	for(pos=0;pos<5;pos++){
		divsa=nn/divsb;
		divsa=divsa+'0';
		s[pos+1]=(char) divsa;
		nn=nn % divsb;
		divsb=divsb/10;
	}
	s[pos+1]=0;
}


void strslong(char *s,long n){
	long nn=n;
	long pos=0;
	long signals=0x7fffffff;
	long divsb=1000000000;
	long divsa=0;
	nn=signals & nn;
	signals++;
	signals=signals & n;
	s[pos]='+';
	if(signals!=0)s[pos]='-';
	for(pos=0;pos<10;pos++){
		divsa=nn/divsb;
		divsa=divsa+'0';
		s[pos+1]=(char) divsa;
		nn=nn % divsb;
		divsb=divsb/10;
	}
	s[pos+1]=0;
}

void strsfloat(char *s,float n){
	float nn=n;
	float nnn=n;
	char pp=0;
	int pos=0;
	int pos2=1;
	float signals=n;
	float divsb=100.00f;
	float divsa=0;
	s[pos]='+';
	if(signals<0){
		s[pos]='-';
		nn=0-nn;
	}
	for(pos=0;pos<5;pos++){
		nnn=nn;
		divsa=nn/divsb;
		if(pos==3){
			pos2++;
			s[pos+1]='.';
		}
		pp=(char) divsa;
		nn=nnn-(divsb*pp);
		pp=pp+'0';
		s[pos+pos2]=(char) pp;
		divsb=divsb/10.00f;
	}
	s[pos+pos2]=0;
}



void strsdouble(char *s,double n){
	double nn=n;
	double nnn=n;
	char pp=0;
	int pos=0;
	int pos2=1;
	double signals=n;
	double divsb=100.00f;
	double divsa=0;
	s[pos]='+';
	if(signals<0){
		s[pos]='-';
		nn=0-nn;
	}
	for(pos=0;pos<8;pos++){
		nnn=nn;
		divsa=nn/divsb;
		if(pos==3){
			pos2++;
			s[pos+1]='.';
		}
		pp=(char) divsa;
		nn=nnn-(divsb*pp);
		pp=pp+'0';
		s[pos+pos2]=(char) pp;
		divsb=divsb/10.00f;
	}
	s[pos+pos2]=0;
}

void strshex(char *s,long n){
	long nn=n;
	long pos=8;
	long divsa=0;
	long signals=0x10;
	long signals2=0xf;
	char *digits="0123456789ABCDEF0123456789ABCDEF";
	s[pos]=0;
	for(pos=7;pos>-1;pos--){
		divsa=nn & signals2;
		s[pos]=(char) digits[(int)divsa];
		nn=nn/signals;
	}
}

void strs4(char *s,long n){
	long nn=n;
	long pos=32;
	long divsa=0;
	long signals=4;
	long signals2=3;
	char *digits="0123456789ABCDEF0123456789ABCDEF";
	s[pos]=0;
	for(pos=pos-1;pos>-1;pos--){
		divsa=nn & signals2;
		if(divsa<0)divsa=0-divsa;
		s[pos]=(char) digits[(int)divsa];
		nn=nn/signals;
	}
}


void strsoct(char *s,long n){
	long nn=n;
	long pos=11;
	long divsa=0;
	long signals=8;
	long signals2=7;
	char *digits="0123456789ABCDEF0123456789ABCDEF";
	s[pos]=0;
	for(pos=pos-1;pos>-1;pos--){
		divsa=nn & signals2;
		if(divsa<0)divsa=0-divsa;
		s[pos]=(char) digits[(int)divsa];
		nn=nn/signals;
	}
}

void strsbin(char *s,long n){
	long nn=n;
	long pos=32;
	long divsa=0;
	long signals=2;
	long signals2=1;
	char *digits="0123456789ABCDEF0123456789ABCDEF";
	s[pos]=0;
	for(pos=pos-1;pos>-1;pos--){
		divsa=nn & signals2;
		if(divsa<0)divsa=0-divsa;
		s[pos]=(char) digits[(int)divsa];
		nn=nn/signals;
	}
}


int scrolll(char *s1){
	int i=0;
	int size=strlen(s1);
	char *s2=s1+1;	
	char *s3=s1;	
	for(i=0;i<size;i++){
		s3[i]=s2[i];
	}
	s2[i]=0;
	return i;
}


int scrollr(char *s1, char c){
	int i=0;
	int size=strlen(s1);
	char *s2=s1+1;	
	char *s3=s1;
	s3[size+1]=0;
	for(i=size;i>-1;i--){
		s2[i]=s3[i];
	}
	s3[0]=c;
	return size;
}

 static double ssin(double x, double y)
  {
  int xx1=x;
  int yy1=y;
  if(xx1<0)xx1=0-xx1;
  if(yy1<0)yy1=0-yy1;
  static double
    S1 = -0.16666666666666632, // Long bits 0xbfc5555555555549L.
    S2 = 8.33333333332249e-3, // Long bits 0x3f8111111110f8a6L.
    S3 = -1.984126982985795e-4, // Long bits 0xbf2a01a019c161d5L.
    S4 = 2.7557313707070068e-6, // Long bits 0x3ec71de357b1fe7dL.
    S5 = -2.5050760253406863e-8, // Long bits 0xbe5ae5e68a2b9cebL.
    TWO_27 = 0x8000000,
    S6 = 1.58969099521155e-10; // Long bits 0x3de5d93a5acfd57cL.


    if (xx1 + yy1 > 0.7854f)
      return 0.0f;

    if (xx1 < 1 / TWO_27)
      return x;  

    double z = x * x;
    double v = z * x;
    double r = S2 + z * (S3 + z * (S4 + z * (S5 + z * S6)));
    if (y == 0)
      return x + v * (S1 + z * r);
    return x - ((z * (0.5 * y - v * r) - y) - v * S1);
  }


   int steeps (int a)
  {
    return a*a;
  }
  
    static double toDegrees(double rads)
  {
    return (rads * 180.00f) / 3.1415927f;
  }
  
  
    static double toRadians(double degrees)
  {
    return (degrees * 3.1415927) / 180.00f;
  }
  
  int ucase(char *s){
	int pos=0;
	while(s[pos]!=0){
		if (s[pos]>='a' && s[pos]<='z')s[pos]=(s[pos]-'a')+'A';
		pos++;
	}
	return pos;
}
int winpower(int a){
	return a << 4;
}
int t3(int a){
	return a*a*a;
}
  
int subs(int i, int ii){
	return i - ii;
}


int strnfill(char *s1,char c,int size){
	int pos=0;
	while(pos<=size){
		s1[pos]=c;
		pos++;
	}
	return pos;
}
int strncopy(char *s1,char *s2,int size){
	int pos=0;
	while(pos<=size){
		s1[pos]=s2[pos];
		pos++;
	}
	return pos;
}
int strsfills(char *s,char c){
	int pos=0;
	while(s[pos]!=0){
		s[pos]=c;
		pos++;
	}
	return pos;
}



