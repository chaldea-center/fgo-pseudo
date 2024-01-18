void __fastcall ItemIconWithConsumptionNumberComponent___ctor(
        ItemIconWithConsumptionNumberComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188FDF & 1) == 0 )
  {
    sub_B2C35C(&ItemIconComponent_TypeInfo, method);
    byte_4188FDF = 1;
  }
  if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  }
  this->fields.PossessionLabelWidth = 84.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        ItemIconWithConsumptionNumberComponent_o *this,
        int32_t consumptionNumber,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *consumptionNumberLabel; // x20
  UILabel_o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = consumptionNumber;
  if ( (byte_4188FDE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&consumptionNumber);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_10932/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, v5);
    byte_4188FDE = 1;
  }
  consumptionNumberLabel = (UnityEngine_Object_o *)this->fields.consumptionNumberLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(consumptionNumberLabel, 0LL, 0LL) )
  {
    v7 = this->fields.consumptionNumberLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10932/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0LL);
    v9 = (Il2CppObject *)System_Int32__ToString((int32_t)&v12, 0LL);
    v10 = System_String__Format(v8, v9, 0LL);
    if ( !v7 || (UILabel__set_text(v7, v10, 0LL), (v10 = (System_String_o *)this->fields.consumptionNumberLabel) == 0LL) )
      sub_B2C434(v10, v11);
    UILabel__set_fontSize((UILabel_o *)v10, 23, 0LL);
  }
}