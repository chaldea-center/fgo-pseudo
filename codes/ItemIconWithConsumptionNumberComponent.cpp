void __fastcall ItemIconWithConsumptionNumberComponent___ctor(
        ItemIconWithConsumptionNumberComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7CFD & 1) == 0 )
  {
    sub_B5D5C4(&ItemIconComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7CFD = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *consumptionNumberLabel; // x20
  UILabel_o *v12; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  v17 = consumptionNumber;
  if ( (byte_42E7CFC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, consumptionNumber, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11062/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, v8, v9, v10);
    byte_42E7CFC = 1;
  }
  consumptionNumberLabel = (UnityEngine_Object_o *)this->fields.consumptionNumberLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(consumptionNumberLabel, 0LL, 0LL) )
  {
    v12 = this->fields.consumptionNumberLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11062/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0LL);
    v14 = (Il2CppObject *)System_Int32__ToString((int32_t)&v17, 0LL);
    v15 = System_String__Format(v13, v14, 0LL);
    if ( !v12
      || (UILabel__set_text(v12, v15, 0LL), (v15 = (System_String_o *)this->fields.consumptionNumberLabel) == 0LL) )
    {
      sub_B5D69C(v15, v16);
    }
    UILabel__set_fontSize((UILabel_o *)v15, 23, 0LL);
  }
}