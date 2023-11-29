void __fastcall WarboardBattleFieldEnvironmentData___ctor(
        WarboardBattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___ctor((BattleFieldEnvironmentData_o *)this, data, 0LL);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall WarboardBattleFieldEnvironmentData__AddBGM(
        WarboardBattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  return 0LL;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall WarboardBattleFieldEnvironmentData__AddBackground(
        WarboardBattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  return 0LL;
}


System_Int32_array *__fastcall WarboardBattleFieldEnvironmentData__GetFieldIndividuality(
        WarboardBattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Int32_array *QuestPhaseIndividuality; // x1

  QuestPhaseIndividuality = BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                              (BattleFieldEnvironmentData_o *)this,
                              0LL);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(
           (BattleFieldEnvironmentData_o *)this,
           QuestPhaseIndividuality,
           addIndiv,
           0LL);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall WarboardBattleFieldEnvironmentData__RemoveAfterResetBGM(
        WarboardBattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return 0LL;
}