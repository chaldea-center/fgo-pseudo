void __fastcall DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FBFAC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v3);
    byte_49FBFAC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v4->static_fields->DeckMainMemberMax);
  this->fields.uniqueIds = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.uniqueIds, (int32_t)v5, v6, v7);
}