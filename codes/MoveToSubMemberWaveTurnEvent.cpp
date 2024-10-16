void __fastcall MoveToSubMemberWaveTurnEvent___ctor_44056468(
        MoveToSubMemberWaveTurnEvent_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Wave_k__BackingField = wave;
  this->fields._Turn_k__BackingField = turn;
}


MoveToSubMemberWaveTurnEvent_o *__fastcall MoveToSubMemberWaveTurnEvent__CreateBySaveData(
        ServantWaveTurnEvent_SaveData_o *saveData,
        const MethodInfo *method)
{
  ServantWaveTurnEvent_SaveData_o *v2; // x19
  Il2CppClass *v3; // d8
  Il2CppObject *v4; // x19

  v2 = saveData;
  if ( (byte_4AB8A58 & 1) == 0 )
  {
    saveData = (ServantWaveTurnEvent_SaveData_o *)sub_1BAB41C(&MoveToSubMemberWaveTurnEvent_TypeInfo, method);
    byte_4AB8A58 = 1;
  }
  if ( !v2 )
    sub_1BAB678(saveData, method);
  v3 = *(Il2CppClass **)&v2->fields.Wave;
  v4 = (Il2CppObject *)sub_1BAB668(MoveToSubMemberWaveTurnEvent_TypeInfo);
  System_Object___ctor(v4, 0LL);
  v4[1].klass = v3;
  return (MoveToSubMemberWaveTurnEvent_o *)v4;
}


int32_t __fastcall MoveToSubMemberWaveTurnEvent__get_SelfType(
        MoveToSubMemberWaveTurnEvent_o *this,
        const MethodInfo *method)
{
  return 1;
}