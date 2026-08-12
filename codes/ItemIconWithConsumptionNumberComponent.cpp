void ItemIconWithConsumptionNumberComponent___ctor(
        ItemIconWithConsumptionNumberComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_596FC85 & 1) == 0 )
  {
    sub_2213A60(&ItemIconComponent_TypeInfo);
    byte_596FC85 = 1;
  }
  if ( !*(&ItemIconComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, method);
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        ItemIconWithConsumptionNumberComponent_o *this,
        int32_t consumptionNumber,
        const MethodInfo *method)
{
  UnityEngine_Object_o *consumptionNumberLabel; // x20
  __int64 v5; // x1
  UILabel_o *v6; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = consumptionNumber;
  if ( (byte_596FC84 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11343/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/);
    byte_596FC84 = 1;
  }
  consumptionNumberLabel = (UnityEngine_Object_o *)this->fields.consumptionNumberLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&consumptionNumber);
  if ( UnityEngine_Object__op_Inequality(consumptionNumberLabel, 0, 0) )
  {
    v6 = this->fields.consumptionNumberLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11343/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0);
    v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0);
    v9 = System_String__Format(v7, v8, 0);
    if ( !v6 || (UILabel__set_text(v6, v9, 0), (v9 = (System_String_o *)this->fields.consumptionNumberLabel) == 0) )
      sub_2213CDC(v9, v10);
    UILabel__set_fontSize((UILabel_o *)v9, 23, 0);
  }
}