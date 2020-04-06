charac initChar (){
  charac c;
  char ch[512];
  int i;
  for (i = 0; i < 12; i++) {
      sprintf(ch, "_____", i+1);
    c.spriteright[i] = IMG_Load(ch);
  }
  for (i = 0; i < 11; i++) {
      sprintf(ch, "___________________", i+1);
    c.spriteleft[i] = IMG_Load(ch);
  c.jump = IMG_Load("_____________________________");
  c.jump_left = IMG_Load("________________________");
  c.positionChar.x = ;
  c.positionChar.y = ;
  c.scorePos.x = ;
  c.scorePos.y = ;
  c.posLives.y = ;
  return c;
}
