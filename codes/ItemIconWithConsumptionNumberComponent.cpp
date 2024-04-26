void __fastcall ItemIconWithConsumptionNumberComponent___ctor(
        ItemIconWithConsumptionNumberComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_435115A & 1) == 0 )
  {
    sub_B70694(&ItemIconComponent_TypeInfo);
    byte_435115A = 1;
  }
  if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  }
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0LL);
}


void __fastcall ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        ItemIconWithConsumptionNumberComponent_o *this,
        int32_t consumptionNumber,
        const MethodInfo *method)
{
  UnityEngine_Object_o *consumptionNumberLabel; // x20
  UILabel_o *v5; // x20
  System_String_o *v6; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = consumptionNumber;
  if ( (byte_4351159 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_11083/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/);
    byte_4351159 = 1;
  }
  consumptionNumberLabel = (UnityEngine_Object_o *)this->fields.consumptionNumberLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(consumptionNumberLabel, 0LL, 0LL) )
  {
    v5 = this->fields.consumptionNumberLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0LL);
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0LL);
    v8 = System_String__Format(v6, v7, 0LL);
    if ( !v5 || (UILabel__set_text(v5, v8, 0LL), (v8 = (System_String_o *)this->fields.consumptionNumberLabel) == 0LL) )
      sub_B7076C(v8, v9);
    UILabel__set_fontSize((UILabel_o *)v8, 23, 0LL);
  }
}