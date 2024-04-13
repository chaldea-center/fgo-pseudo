void __fastcall BattleComboData___ctor(BattleComboData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5378 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5378 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.flash = 0;
  this->fields.samecount = 0;
  this->fields.sameflg = (struct System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, 3LL);
  sub_B5D560(&this->fields.sameflg);
}


bool __fastcall BattleComboData__AchieveAnyChain(BattleComboData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t samecount; // w20
  BattleDataDefine_c *v6; // x0

  if ( (byte_42E5379 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5379 = 1;
  }
  if ( this->fields.flash )
    return 1;
  samecount = this->fields.samecount;
  v6 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v6 = BattleDataDefine_TypeInfo;
  }
  return samecount == v6->static_fields->COMMAND_CARD_NUM_TO_SELECT || this->fields.isMighty;
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