void __fastcall DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0

  if ( (byte_42E44F1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42E44F1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  this->fields.uniqueIds = (struct System_Int32_array *)sub_B5D5DC(
                                                          int___TypeInfo,
                                                          (unsigned int)v8->static_fields->DeckMainMemberMax);
  sub_B5D560(&this->fields.uniqueIds);
}