void BattleLoadMovieTask___ctor(BattleLoadMovieTask_o *this, const MethodInfo *method)
{
  BaseAiActBattleLogicTask___ctor((BaseAiActBattleLogicTask_o *)this, 77, 0);
}


void BattleLoadMovieTask__Init(
        BattleLoadMovieTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  struct System_String_o *MovieName; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( !aiEnt )
    sub_21FFECC(this, aiActEnt);
  MovieName = AiBaseEntity__GetMovieName(aiEnt, 0);
  this->fields.movieName = MovieName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.movieName, (int32_t)MovieName, v6, v7, v8, v9, v10, v11);
}


BattleActionData_o *BattleLoadMovieTask__MakeActionData(
        BattleLoadMovieTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_String_o *movieName; // x19
  BattleLoadMovieActionData_o *v5; // x20

  if ( (byte_593BC1D & 1) == 0 )
  {
    sub_21FFC50(&BattleLoadMovieActionData_TypeInfo);
    byte_593BC1D = 1;
  }
  movieName = this->fields.movieName;
  v5 = (BattleLoadMovieActionData_o *)sub_21FFEBC(BattleLoadMovieActionData_TypeInfo);
  BattleLoadMovieActionData___ctor(v5, movieName, 0);
  return (BattleActionData_o *)v5;
}