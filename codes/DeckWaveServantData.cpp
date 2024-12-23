void __fastcall DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B6672A & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    byte_4B6672A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)v4->static_fields->DeckMainMemberMax);
  this->fields.uniqueIds = v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.uniqueIds, (int64_t)v5, v6, v7, v8, v9, v10, v11);
}