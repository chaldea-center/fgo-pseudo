void BattlePlayMovieTask___ctor(BattlePlayMovieTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 78;
}


void BattlePlayMovieTask__Init(
        BattlePlayMovieTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  struct System_String_o *MovieName; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( !aiEnt )
    sub_1D0F30C(this, aiActEnt);
  MovieName = AiBaseEntity__GetMovieName(aiEnt, 0);
  this->fields.movieName = MovieName;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.movieName, (int32_t)MovieName, v7, v8, v9, v10, v11, v12);
  this->fields.isBgmPause = !AiBaseEntity__IsPlayBgmWhileMoviePlaying(aiEnt, 0);
}


BattleActionData_o *BattlePlayMovieTask__MakeActionData(
        BattlePlayMovieTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_String_o *movieName; // x20
  bool isBgmPause; // w19
  BattlePlayMovieActionData_o *v6; // x21

  if ( (byte_4E7AAE7 & 1) == 0 )
  {
    sub_1D0F0B4(&BattlePlayMovieActionData_TypeInfo);
    byte_4E7AAE7 = 1;
  }
  movieName = this->fields.movieName;
  isBgmPause = this->fields.isBgmPause;
  v6 = (BattlePlayMovieActionData_o *)sub_1D0F300(BattlePlayMovieActionData_TypeInfo);
  BattlePlayMovieActionData___ctor(v6, movieName, isBgmPause, 0);
  return (BattleActionData_o *)v6;
}