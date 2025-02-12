void __fastcall UseNoblePhantasmWaveTurnEvent___ctor_44937160(
        UseNoblePhantasmWaveTurnEvent_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Wave_k__BackingField = wave;
  this->fields._Turn_k__BackingField = turn;
}


UseNoblePhantasmWaveTurnEvent_o *__fastcall UseNoblePhantasmWaveTurnEvent__CreateBySaveData(
        ServantWaveTurnEvent_SaveData_o *saveData,
        const MethodInfo *method)
{
  ServantWaveTurnEvent_SaveData_o *v2; // x19
  Il2CppClass *v3; // d8
  Il2CppObject *v4; // x19

  v2 = saveData;
  if ( (byte_4BCA8B2 & 1) == 0 )
  {
    saveData = (ServantWaveTurnEvent_SaveData_o *)sub_1C1ABD4(&UseNoblePhantasmWaveTurnEvent_TypeInfo, method);
    byte_4BCA8B2 = 1;
  }
  if ( !v2 )
    sub_1C1AE30(saveData, method);
  v3 = *(Il2CppClass **)&v2->fields.Wave;
  v4 = (Il2CppObject *)sub_1C1AE20(UseNoblePhantasmWaveTurnEvent_TypeInfo);
  System_Object___ctor(v4, 0LL);
  v4[1].klass = v3;
  return (UseNoblePhantasmWaveTurnEvent_o *)v4;
}


int32_t __fastcall UseNoblePhantasmWaveTurnEvent__get_SelfType(
        UseNoblePhantasmWaveTurnEvent_o *this,
        const MethodInfo *method)
{
  return 2;
}