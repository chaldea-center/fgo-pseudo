void __fastcall ItemIconWithConsumptionNumberComponent___ctor(
        ItemIconWithConsumptionNumberComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB926 & 1) == 0 )
  {
    sub_1B640C8(&ItemIconComponent_TypeInfo, method);
    byte_49FB926 = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
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
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = consumptionNumber;
  if ( (byte_49FB925 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&consumptionNumber);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_10818/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, v5);
    byte_49FB925 = 1;
  }
  consumptionNumberLabel = (UnityEngine_Object_o *)this->fields.consumptionNumberLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(consumptionNumberLabel, 0LL, 0LL) )
  {
    v7 = this->fields.consumptionNumberLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10818/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0LL);
    v9 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0LL);
    v10 = System_String__Format(v8, v9, 0LL);
    if ( !v7 || (UILabel__set_text(v7, v10, 0LL), (v10 = (System_String_o *)this->fields.consumptionNumberLabel) == 0LL) )
      sub_1B64324(v10);
    UILabel__set_fontSize((UILabel_o *)v10, 23, 0LL);
  }
}