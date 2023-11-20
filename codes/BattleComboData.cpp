void __fastcall BattleComboData___ctor(BattleComboData_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  struct System_Boolean_array *v4; // x1

  if ( (byte_40F6978 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, method);
    byte_40F6978 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.flash = 0;
  this->fields.samecount = 0;
  v4 = (struct System_Boolean_array *)sub_B17014(bool___TypeInfo, 3LL, v3);
  this->fields.sameflg = v4;
  sub_B16F98(&this->fields.sameflg, v4);
}


bool __fastcall BattleComboData__AchieveAnyChain(BattleComboData_o *this, const MethodInfo *method)
{
  int32_t samecount; // w20
  BattleDataDefine_c *v4; // x0

  if ( (byte_40F6979 & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, method);
    byte_40F6979 = 1;
  }
  if ( this->fields.flash )
    return 1;
  samecount = this->fields.samecount;
  v4 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v4 = BattleDataDefine_TypeInfo;
  }
  return samecount == v4->static_fields->COMMAND_CARD_NUM_TO_SELECT || this->fields.isMighty;
}


bool __fastcall BattleComboData__IsTreasureDvc(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.isTreasureDvc;
}


void __fastcall BattleComboData__SetTreasureDvc(BattleComboData_o *this, bool flag, const MethodInfo *method)
{
  this->fields.isTreasureDvc = flag;
}


bool __fastcall BattleComboData__isChainError(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.chainError;
}


bool __fastcall BattleComboData__isExtraAttack(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.samecount > 2;
}


bool __fastcall BattleComboData__isGrand(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.samecount >= 3 && this->fields.flash;
}