void __fastcall BattleComboData___ctor(BattleComboData_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49BD8BF & 1) == 0 )
  {
    sub_1B4CF90(&bool___TypeInfo, method);
    byte_49BD8BF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.flash = 0;
  this->fields.samecount = 0;
  v3 = (struct System_Boolean_array *)sub_1B4D038(bool___TypeInfo, 3LL);
  this->fields.sameflg = v3;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.sameflg, (int32_t)v3, v4, v5);
}


bool __fastcall BattleComboData__AchieveAnyChain(BattleComboData_o *this, const MethodInfo *method)
{
  int32_t samecount; // w20
  BattleDataDefine_c *v4; // x0

  if ( (byte_49BD8C0 & 1) == 0 )
  {
    sub_1B4CF90(&BattleDataDefine_TypeInfo, method);
    byte_49BD8C0 = 1;
  }
  if ( this->fields.flash )
    return 1;
  samecount = this->fields.samecount;
  v4 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
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