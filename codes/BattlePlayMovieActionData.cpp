void BattlePlayMovieActionData___ctor(
        BattlePlayMovieActionData_o *this,
        System_String_o *inMovieName,
        bool isBgmPause,
        const MethodInfo *method)
{
  bool v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = isBgmPause;
  ExecInActionData___ctor((ExecInActionData_o *)this, (const MethodInfo *)inMovieName);
  this->fields.movieName = inMovieName;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.movieName, (int32_t)inMovieName, v7, v8, v9, v10, v11, v12);
  this->fields.isBgmPause = v6;
}


void BattlePlayMovieActionData__ExecAction(
        BattlePlayMovieActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_1D0F30C(this, 0);
  BattlePerformance__PlayMovie(perf, this->fields.movieName, 0, this->fields.isBgmPause, 0);
}