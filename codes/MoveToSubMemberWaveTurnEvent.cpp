void MoveToSubMemberWaveTurnEvent___ctor_54305304(
        MoveToSubMemberWaveTurnEvent_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Wave_k__BackingField = wave;
  this->fields._Turn_k__BackingField = turn;
}


MoveToSubMemberWaveTurnEvent_o *MoveToSubMemberWaveTurnEvent__CreateBySaveData(
        ServantWaveTurnEvent_SaveData_o *saveData,
        const MethodInfo *method)
{
  ServantWaveTurnEvent_SaveData_o *v2; // x19
  Il2CppClass *v3; // d8
  Il2CppObject *v4; // x19
  MoveToSubMemberWaveTurnEvent_o *result; // x0

  v2 = saveData;
  if ( (byte_593BC33 & 1) == 0 )
  {
    saveData = (ServantWaveTurnEvent_SaveData_o *)sub_21FFC50(&MoveToSubMemberWaveTurnEvent_TypeInfo);
    byte_593BC33 = 1;
  }
  if ( !v2 )
    sub_21FFECC(saveData, method);
  v3 = *(Il2CppClass **)&v2->fields.Wave;
  v4 = (Il2CppObject *)sub_21FFEBC(MoveToSubMemberWaveTurnEvent_TypeInfo);
  System_Object___ctor(v4, 0);
  result = (MoveToSubMemberWaveTurnEvent_o *)v4;
  v4[1].klass = v3;
  return result;
}


int32_t MoveToSubMemberWaveTurnEvent__get_SelfType(MoveToSubMemberWaveTurnEvent_o *this, const MethodInfo *method)
{
  return 1;
}