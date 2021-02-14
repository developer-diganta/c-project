#include<stdio.h>
int board[3][3]={0};//board for tictactoe
int total_moves=0;


int check();//algorithm for game


int main(){

display();
while(total_moves<=9){
player_one_move();
display();
total_moves++;
if(total_moves>=5){
if(check()){
exit(0);
}
}
player_two_move();
display();
total_moves++;
if(total_moves>=5){
if(check()){
exit(0);
}
}
return 0;
}

int check(){
//checks all possible combinations
if winner:
print name;
return 1;
else:
return 0;
}

void player_one_move(){
start:
print:possible places//available()
cin>>move;
if valid:
change()
return;
else:
cout<<Invalid
goto start;
}

void player_one_move(){
start:
print:possible places//available()
cin>>move;
if valid:
change()
return;
else:
cout<<Invalid
goto start;
}
