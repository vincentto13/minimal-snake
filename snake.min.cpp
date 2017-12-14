#include<curses.h>
#include<list>
#include<stdlib.h>
#define L mvaddch
#define X L(rand()%N,rand()%M,'X');mvprintw(0,0,"Score: %d",Q++);
#define P std::pair<int,int>
#define W(S,y,x){s.push_##S(P(y,x));L(y,x,'O');}
int k,M,N,Q,dy,dx=-1;int main(){std::list<P>s;initscr();cbreak();noecho();nodelay(stdscr,TRUE);getmaxyx(stdscr,N,M);int x=M/2,y=N/2;for(k=0;k<5;k++)W(back,y,x+k);X;while(1){x+=dx;y+=dy;x=x>=M?x=0:x<0?x=M-1:x;y=y>=N?y=0:y<1?y=N-1:y;char c=mvinch(y,x)&A_CHARTEXT;W(front,y,x);if(c=='X'){X}else if(c!=' ')return Q;else{P z=s.back();s.pop_back();L(z.first,z.second,' ');}if((k=getch())>-1){dy=k=='w'?-1:k=='s'?1:0;dx=k=='a'?-1:k=='d'?1:0;}napms(99);}}
