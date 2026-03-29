void BattleLoadMovieTask___ctor(BattleLoadMovieTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 77;
}


void BattleLoadMovieTask__Init(
        BattleLoadMovieTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  struct System_String_o *MovieName; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( !aiEnt )
    sub_1C93D2C(this, aiActEnt);
  MovieName = AiBaseEntity__GetMovieName(aiEnt, 0);
  this->fields.movieName = MovieName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.movieName, (int32_t)MovieName, v6, v7, v8, v9, v10, v11);
}


BattleActionData_o *BattleLoadMovieTask__MakeActionData(
        BattleLoadMovieTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_String_o *movieName; // x19
  BattleLoadMovieActionData_o *v5; // x20

  if ( (byte_4D33D84 & 1) == 0 )
  {
    sub_1C93AD4(&BattleLoadMovieActionData_TypeInfo);
    byte_4D33D84 = 1;
  }
  movieName = this->fields.movieName;
  v5 = (BattleLoadMovieActionData_o *)sub_1C93D20(BattleLoadMovieActionData_TypeInfo);
  BattleLoadMovieActionData___ctor(v5, movieName, 0);
  return (BattleActionData_o *)v5;
}