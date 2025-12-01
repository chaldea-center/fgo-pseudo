void BattleComboData___ctor(BattleComboData_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCA235 & 1) == 0 )
  {
    sub_1C713B0(&bool___TypeInfo);
    byte_4CCA235 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.flash = 0;
  this->fields.samecount = 0;
  v3 = (struct System_Boolean_array *)sub_1C71458(bool___TypeInfo, 3);
  this->fields.sameflg = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sameflg, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


bool BattleComboData__AchieveAnyChain(BattleComboData_o *this, const MethodInfo *method)
{
  int32_t samecount; // w20
  BattleDataDefine_c *v4; // x0

  if ( (byte_4CCA236 & 1) == 0 )
  {
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    byte_4CCA236 = 1;
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