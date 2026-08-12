void DeckWaveServantData___ctor(DeckWaveServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5970339 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_5970339 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v4->static_fields->DeckMainMemberMax);
  this->fields.uniqueIds = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.uniqueIds, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}