void DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C26E05 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    byte_4C26E05 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v3->static_fields->DeckMainMemberMax);
  this->fields.uniqueIds = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.uniqueIds, (int32_t)v4, v5, v6);
}