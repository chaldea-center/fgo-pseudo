void ControlOtherBgmPriorityAtOverStageBgm___ctor(
        ControlOtherBgmPriorityAtOverStageBgm_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(
        ControlOtherBgmPriorityAtOverStageBgm_o *this,
        System_Int32_array *buffIndividuality,
        const MethodInfo *method)
{
  System_Int32_array *individuality; // x20

  if ( (byte_4D33527 & 1) == 0 )
  {
    sub_1C93AD4(&Individuality_TypeInfo);
    byte_4D33527 = 1;
  }
  individuality = this->fields.individuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedIndividualities(buffIndividuality, individuality, 0);
}


void ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
        ControlOtherBgmPriorityAtOverStageBgm_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgmData,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !bgmData || (comData = bgmData->fields.comData) == 0 )
    sub_1C93D2C(this, bgmData);
  comData->fields.priority = this->fields.priority;
}