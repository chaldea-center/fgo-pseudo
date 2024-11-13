void __fastcall BattleComboData___ctor(BattleComboData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Boolean_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18ABE & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, method, v2);
    byte_4B18ABE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.flash = 0;
  this->fields.samecount = 0;
  v4 = (struct System_Boolean_array *)sub_1BCA888(bool___TypeInfo, 3LL);
  this->fields.sameflg = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sameflg, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleComboData__AchieveAnyChain(BattleComboData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t samecount; // w20
  BattleDataDefine_c *v5; // x0

  if ( (byte_4B18ABF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B18ABF = 1;
  }
  if ( this->fields.flash )
    return 1;
  samecount = this->fields.samecount;
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v5 = BattleDataDefine_TypeInfo;
  }
  return samecount == v5->static_fields->COMMAND_CARD_NUM_TO_SELECT || this->fields.isMighty;
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