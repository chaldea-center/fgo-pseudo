void __fastcall DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0

  if ( (byte_42ABC7E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42ABC7E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  this->fields.uniqueIds = (struct System_Int32_array *)sub_B5299C(
                                                          int___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMainMemberMax);
  sub_B52920(&this->fields.uniqueIds);
}