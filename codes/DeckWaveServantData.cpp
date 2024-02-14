void __fastcall DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0

  if ( (byte_421025F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_421025F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v4->static_fields->DeckMainMemberMax);
  this->fields.uniqueIds = v5;
  sub_B0D840(&this->fields.uniqueIds, v5);
}