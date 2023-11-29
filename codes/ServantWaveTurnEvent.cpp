void __fastcall ServantWaveTurnEvent___ctor(ServantWaveTurnEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_B170D4();
  this->fields._Wave_k__BackingField = data->fields.wavecount;
  this->fields._Turn_k__BackingField = data->fields.turnCount;
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