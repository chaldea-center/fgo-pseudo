void __fastcall ControlOtherBgmPriorityAtOverStageBgm___ctor(
        ControlOtherBgmPriorityAtOverStageBgm_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(
        ControlOtherBgmPriorityAtOverStageBgm_o *this,
        System_Int32_array *buffIndividuality,
        const MethodInfo *method)
{
  return Individuality__CheckSignedIndividualities(buffIndividuality, this->fields.individuality, 0LL);
}


void __fastcall ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
        ControlOtherBgmPriorityAtOverStageBgm_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgmData,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !bgmData || (comData = bgmData->fields.comData) == 0LL )
    sub_1B71828(this, bgmData);
  comData->fields.priority = this->fields.priority;
}