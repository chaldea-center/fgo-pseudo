void BattlePlayMovieTask___ctor(BattlePlayMovieTask_o *this, const MethodInfo *method)
{
  BaseAiActBattleLogicTask___ctor((BaseAiActBattleLogicTask_o *)this, 78, 0);
}


void BattlePlayMovieTask__Init(
        BattlePlayMovieTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  struct System_String_o *MovieName; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( !aiEnt )
    sub_21FFECC(this, aiActEnt);
  MovieName = AiBaseEntity__GetMovieName(aiEnt, 0);
  this->fields.movieName = MovieName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.movieName,
    (int32_t)MovieName,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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

  if ( (byte_593BC1E & 1) == 0 )
  {
    sub_21FFC50(&BattlePlayMovieActionData_TypeInfo);
    byte_593BC1E = 1;
  }
  movieName = this->fields.movieName;
  isBgmPause = this->fields.isBgmPause;
  v6 = (BattlePlayMovieActionData_o *)sub_21FFEBC(BattlePlayMovieActionData_TypeInfo);
  BattlePlayMovieActionData___ctor(v6, movieName, isBgmPause, 0);
  return (BattleActionData_o *)v6;
}