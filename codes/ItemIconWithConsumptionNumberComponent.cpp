void ItemIconWithConsumptionNumberComponent___ctor(
        ItemIconWithConsumptionNumberComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2FECB & 1) == 0 )
  {
    sub_1C93AD4(&ItemIconComponent_TypeInfo);
    byte_4D2FECB = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0);
}


void ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
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
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = consumptionNumber;
  if ( (byte_4D2FECA & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_10947/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/);
    byte_4D2FECA = 1;
  }
  consumptionNumberLabel = (UnityEngine_Object_o *)this->fields.consumptionNumberLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(consumptionNumberLabel, 0, 0) )
  {
    v5 = this->fields.consumptionNumberLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10947/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0);
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0);
    v8 = System_String__Format(v6, v7, 0);
    if ( !v5 || (UILabel__set_text(v5, v8, 0), (v8 = (System_String_o *)this->fields.consumptionNumberLabel) == 0) )
      sub_1C93D2C(v8, v9);
    UILabel__set_fontSize((UILabel_o *)v8, 23, 0);
  }
}