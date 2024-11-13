void __fastcall DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B15D74 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B15D74 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v7->static_fields->DeckMainMemberMax);
  this->fields.uniqueIds = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.uniqueIds, (int64_t)v8, v9, v10, v11, v12, v13, v14);
}