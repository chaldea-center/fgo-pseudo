void ServantWaveTurnEvent___ctor(ServantWaveTurnEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !data )
    sub_1C32E7C(v5);
  this->fields = *(ServantWaveTurnEvent_Fields *)&data->fields.wavecount;
}


void ServantWaveTurnEvent___ctor_46872120(
        ServantWaveTurnEvent_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Wave_k__BackingField = wave;
  this->fields._Turn_k__BackingField = turn;
}


ServantWaveTurnEvent_SaveData_o *ServantWaveTurnEvent__ExportSaveData(
        ServantWaveTurnEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  ServantWaveTurnEvent_SaveData_o *result; // x0

  if ( (byte_4C3AB7E & 1) == 0 )
  {
    sub_1C32C20(&ServantWaveTurnEvent_SaveData_TypeInfo);
    byte_4C3AB7E = 1;
  }
  v3 = sub_1C32E6C(ServantWaveTurnEvent_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = ((__int64 (__fastcall *)(ServantWaveTurnEvent_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_DWORD *)(v3 + 16) = v4;
  result = (ServantWaveTurnEvent_SaveData_o *)v3;
  *(ServantWaveTurnEvent_Fields *)(v3 + 20) = this->fields;
  return result;
}


int32_t ServantWaveTurnEvent__get_Turn(ServantWaveTurnEvent_o *this, const MethodInfo *method)
{
  return this->fields._Turn_k__BackingField;
}


int32_t ServantWaveTurnEvent__get_Wave(ServantWaveTurnEvent_o *this, const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField;
}


void ServantWaveTurnEvent__set_Turn(ServantWaveTurnEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Turn_k__BackingField = value;
}


void ServantWaveTurnEvent__set_Wave(ServantWaveTurnEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Wave_k__BackingField = value;
}


void ServantWaveTurnEvent_SaveData___ctor(ServantWaveTurnEvent_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}