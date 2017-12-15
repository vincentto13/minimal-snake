#include <curses.h>
#include <list>
#include <stdlib.h>
#define L mvaddch
#define X L(rand()%(N-1)+1,rand()%M,88);mvprintw(0,0,"%d",Q++);
#define W(y,x){s.push_front({y,x});L(y,x,79);}
struct h{int a,b;};int c,x,y,k,M,N,Q,v,u=-1;int main(){std::list<h>s;initscr();noecho();nodelay(stdscr,1);getmaxyx(stdscr,N,M);x=M/2+5;y=N/2;for(;k++<5;)W(y,x);X for(;;){x+=u;y+=v;x=x>=M?x=0:x<0?x=M-1:x;y=y>=N?y=1:y<1?y=N-1:y;c=mvinch(y,x)&127;W(y,x);if(c==88){X}else if(c!=32)break;else{h z=s.back();s.pop_back();L(z.a,z.b,32);}if((k=getch())>-1){v=k=='w'?-1:k=='s'?1:0;u=k=='a'?-1:k=='d'?1:0;}napms(99);}}
