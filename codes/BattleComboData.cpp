void BattleComboData___ctor(BattleComboData_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct System_Boolean_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59737EF & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    byte_59737EF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = bool___TypeInfo;
  this->fields.flash = 0;
  this->fields.samecount = 0;
  v4 = (struct System_Boolean_array *)sub_2213B20(v3, 3);
  this->fields.sameflg = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sameflg, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


bool BattleComboData__AchieveAnyChain(BattleComboData_o *this, const MethodInfo *method)
{
  int32_t samecount; // w20
  BattleDataDefine_c *v4; // x0

  if ( (byte_59737F0 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_59737F0 = 1;
  }
  if ( this->fields.flash )
    return 1;
  samecount = this->fields.samecount;
  v4 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v4 = BattleDataDefine_TypeInfo;
  }
  return samecount == v4->static_fields->COMMAND_CARD_NUM_TO_SELECT || this->fields.isMighty;
}


bool BattleComboData__IsTreasureDvc(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.isTreasureDvc;
}


void BattleComboData__SetTreasureDvc(BattleComboData_o *this, bool flag, const MethodInfo *method)
{
  this->fields.isTreasureDvc = flag;
}


bool BattleComboData__isChainError(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.chainError;
}


bool BattleComboData__isExtraAttack(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.samecount > 2;
}


bool BattleComboData__isGrand(BattleComboData_o *this, const MethodInfo *method)
{
  return this->fields.samecount >= 3 && this->fields.flash;
}