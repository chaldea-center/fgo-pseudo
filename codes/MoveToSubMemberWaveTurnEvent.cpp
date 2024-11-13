void __fastcall MoveToSubMemberWaveTurnEvent___ctor_44414692(
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
  __int64 v2; // x2
  __int64 v3; // x3
  ServantWaveTurnEvent_SaveData_o *v4; // x19
  Il2CppClass *v5; // d8
  Il2CppObject *v6; // x19

  v4 = saveData;
  if ( (byte_4B18F38 & 1) == 0 )
  {
    saveData = (ServantWaveTurnEvent_SaveData_o *)sub_1BCA7E0(&MoveToSubMemberWaveTurnEvent_TypeInfo, method, v2);
    byte_4B18F38 = 1;
  }
  if ( !v4 )
    sub_1BCAA3C(saveData, method);
  v5 = *(Il2CppClass **)&v4->fields.Wave;
  v6 = (Il2CppObject *)sub_1BCAA2C(MoveToSubMemberWaveTurnEvent_TypeInfo, method, v2, v3);
  System_Object___ctor(v6, 0LL);
  v6[1].klass = v5;
  return (MoveToSubMemberWaveTurnEvent_o *)v6;
}


int32_t __fastcall MoveToSubMemberWaveTurnEvent__get_SelfType(
        MoveToSubMemberWaveTurnEvent_o *this,
        const MethodInfo *method)
{
  return 1;
}