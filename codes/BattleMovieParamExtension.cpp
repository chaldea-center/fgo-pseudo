BattleMovieParam_o *BattleMovieParamExtension__ToBattleMovieParam(
        BattleMovieParam_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_5970340 & 1) == 0 )
  {
    sub_2213A60(&BattleMovieParam_TypeInfo);
    byte_5970340 = 1;
  }
  v3 = sub_2213CCC(BattleMovieParam_TypeInfo);
  *(_DWORD *)(v3 + 24) = -1;
  *(_QWORD *)(v3 + 16) = -1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !saveData )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&saveData->fields.fadeOutBgmBeforeMovie;
  *(_DWORD *)(v3 + 24) = saveData->fields.movieAfterCrossFadeTime;
  return (BattleMovieParam_o *)v3;
}


BattleMovieParam_SaveData_o *BattleMovieParamExtension__ToSaveData(BattleMovieParam_o *param, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_597033F & 1) == 0 )
  {
    sub_2213A60(&BattleMovieParam_SaveData_TypeInfo);
    byte_597033F = 1;
  }
  v3 = sub_2213CCC(BattleMovieParam_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !param || !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&param->fields.FadeOutBgmBeforeMovie;
  *(_DWORD *)(v3 + 24) = param->fields.movieAfterCrossFadeTime;
  return (BattleMovieParam_SaveData_o *)v3;
}