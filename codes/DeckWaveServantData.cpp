void __fastcall DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5ACED & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5ACED = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->DeckMainMemberMax);
  this->fields.uniqueIds = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.uniqueIds, (int32_t)v4, v5, v6);
}