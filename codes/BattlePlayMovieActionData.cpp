void BattlePlayMovieActionData___ctor(
        BattlePlayMovieActionData_o *this,
        System_String_o *inMovieName,
        bool isBgmPause,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  ExecInActionData___ctor((ExecInActionData_o *)this, (const MethodInfo *)inMovieName);
  this->fields.movieName = inMovieName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.movieName,
    (int32_t)inMovieName,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isBgmPause = isBgmPause;
}


void BattlePlayMovieActionData__ExecAction(
        BattlePlayMovieActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_21FFECC(this, 0);
  BattlePerformance__PlayMovie(perf, this->fields.movieName, 0, this->fields.isBgmPause, 0);
}