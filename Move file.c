void player_move(int player){
  int move;
  while(1){
    printf("Player %d move : ",player);
    scanf("%d",&move);
    if(check(move)){
      int row=(move-1)/3;
      int column=(move-1)%3;
      if(player==1){
        board[row][column]='X';
        break;
      }
      else{
        board[row][column]='O';
        break;
      }
    }
  }
}
