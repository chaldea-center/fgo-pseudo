void __fastcall SimpleHpData___ctor(SimpleHpData_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B2C434(v5, v6);
  this->fields._Hp_k__BackingField = BattleServantData__getNowHp(svtData, 0LL);
  this->fields._MaxHp_k__BackingField = BattleServantData__getMaxHp(svtData, 0LL);
}


int32_t __fastcall SimpleHpData__get_Hp(SimpleHpData_o *this, const MethodInfo *method)
{
  return this->fields._Hp_k__BackingField;
}


int32_t __fastcall SimpleHpData__get_MaxHp(SimpleHpData_o *this, const MethodInfo *method)
{
  return this->fields._MaxHp_k__BackingField;
}


int32_t __fastcall SimpleHpData__get_TotalDamage(SimpleHpData_o *this, const MethodInfo *method)
{
  return this->fields._MaxHp_k__BackingField - this->fields._Hp_k__BackingField;
}


void __fastcall SimpleHpData__set_Hp(SimpleHpData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Hp_k__BackingField = value;
}


void __fastcall SimpleHpData__set_MaxHp(SimpleHpData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxHp_k__BackingField = value;
}