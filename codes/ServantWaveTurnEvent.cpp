void __fastcall ServantWaveTurnEvent___ctor(ServantWaveTurnEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_1BCB254(v5, v6);
  this->fields = *(ServantWaveTurnEvent_Fields *)&data->fields.wavecount;
}


void __fastcall ServantWaveTurnEvent___ctor_46007468(
        ServantWaveTurnEvent_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Wave_k__BackingField = wave;
  this->fields._Turn_k__BackingField = turn;
}


ServantWaveTurnEvent_SaveData_o *__fastcall ServantWaveTurnEvent__ExportSaveData(
        ServantWaveTurnEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  ServantWaveTurnEvent_SaveData_o *result; // x0

  if ( (byte_4B1F5B9 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantWaveTurnEvent_SaveData_TypeInfo, method);
    byte_4B1F5B9 = 1;
  }
  v3 = sub_1BCB244(ServantWaveTurnEvent_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  v4 = ((__int64 (__fastcall *)(ServantWaveTurnEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_ExportSaveData.methodPtr);
  if ( !v3 )
    sub_1BCB254(v4, v5);
  *(_DWORD *)(v3 + 16) = v4;
  result = (ServantWaveTurnEvent_SaveData_o *)v3;
  *(ServantWaveTurnEvent_Fields *)(v3 + 20) = this->fields;
  return result;
}


int32_t __fastcall ServantWaveTurnEvent__get_Turn(ServantWaveTurnEvent_o *this, const MethodInfo *method)
{
  return this->fields._Turn_k__BackingField;
}


int32_t __fastcall ServantWaveTurnEvent__get_Wave(ServantWaveTurnEvent_o *this, const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField;
}


void __fastcall ServantWaveTurnEvent__set_Turn(ServantWaveTurnEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Turn_k__BackingField = value;
}


void __fastcall ServantWaveTurnEvent__set_Wave(ServantWaveTurnEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Wave_k__BackingField = value;
}


void __fastcall ServantWaveTurnEvent_SaveData___ctor(ServantWaveTurnEvent_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}