void __fastcall ItemIconWithConsumptionNumberComponent___ctor(
        ItemIconWithConsumptionNumberComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B156C8 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemIconComponent_TypeInfo, method, v2);
    byte_4B156C8 = 1;
  }
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *consumptionNumberLabel; // x20
  __int64 v9; // x1
  UILabel_o *v10; // x20
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = consumptionNumber;
  if ( (byte_4B156C7 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&consumptionNumber, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_11006/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, v6, v7);
    byte_4B156C7 = 1;
  }
  consumptionNumberLabel = (UnityEngine_Object_o *)this->fields.consumptionNumberLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&consumptionNumber);
  if ( UnityEngine_Object__op_Inequality(consumptionNumberLabel, 0LL, 0LL) )
  {
    v10 = this->fields.consumptionNumberLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11006/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0LL);
    v12 = (Il2CppObject *)System_Int32__ToString((int32_t)&v15, 0LL);
    v13 = System_String__Format(v11, v12, 0LL);
    if ( !v10
      || (UILabel__set_text(v10, v13, 0LL), (v13 = (System_String_o *)this->fields.consumptionNumberLabel) == 0LL) )
    {
      sub_1BCAA3C(v13, v14);
    }
    UILabel__set_fontSize((UILabel_o *)v13, 23, 0LL);
  }
}