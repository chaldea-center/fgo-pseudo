void BattlePlayMovieActionData___ctor(
        BattlePlayMovieActionData_o *this,
        System_String_o *inMovieName,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  ExecInActionData___ctor((ExecInActionData_o *)this, (const MethodInfo *)inMovieName);
  this->fields.movieName = inMovieName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.movieName, (int32_t)inMovieName, v5, v6, v7, v8, v9, v10);
}


void BattlePlayMovieActionData__ExecAction(
        BattlePlayMovieActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_1C93D2C(this, 0);
  BattlePerformance__PlayMovie(perf, this->fields.movieName, 0, 0);
}