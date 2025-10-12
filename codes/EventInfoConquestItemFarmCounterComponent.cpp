void EventInfoConquestItemFarmCounterComponent___ctor(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterComponent___ctor((EventInfoConquestItemCounterComponent_o *)this, 0);
}


void EventInfoConquestItemFarmCounterComponent__PlayAnim(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  int32_t itemId_k__BackingField; // w1
  int64_t itemNum; // x2
  int32_t productNum; // w3

  if ( this->fields.addProductNum )
  {
    itemId_k__BackingField = this->fields._itemId_k__BackingField;
    itemNum = this->fields.itemNum;
    productNum = this->fields.productNum;
    this->fields.addProductNum = 0;
    EventInfoConquestItemCounterComponent__SetNum(
      (EventInfoConquestItemCounterComponent_o *)this,
      itemId_k__BackingField,
      itemNum,
      productNum,
      0,
      0);
  }
}


void EventInfoConquestItemFarmCounterComponent__SetLabel(
        EventInfoConquestItemFarmCounterComponent_o *this,
        int64_t itemNum,
        int32_t productNum,
        int32_t addNum,
        const MethodInfo *method)
{
  UILabel_o *itemNumLabel; // x23
  System_String_o *v10; // x24
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UILabel_o *productNumLabel; // x22
  System_String_o *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  int v28; // [xsp+4h] [xbp-4Ch] BYREF
  int64_t v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C38E9A & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5561/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_1C32C20(&StringLiteral_5562/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_4C38E9A = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5561/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0);
  v29 = itemNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29, v11, v12, v13, v14, v15, v16);
  v18 = System_String__Format(v10, v17, 0);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v18, 0);
  productNumLabel = this->fields.productNumLabel;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5562/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0);
  v28 = productNum - addNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v21, v22, v23, v24, v25, v26);
  v18 = System_String__Format(v20, v27, 0);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v18, 0), (v18 = (System_String_o *)this->fields.itemNumLabel) == 0)
    || (UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0, 0),
        (v18 = (System_String_o *)this->fields.productNumLabel) == 0) )
  {
LABEL_10:
    sub_1C32E7C(v18);
  }
  UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0, 0);
}


void EventInfoConquestItemFarmCounterComponent__Start(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  UnityEngine_Object_o *productNumTitleLabel; // x20
  UILabel_o *v7; // x20

  if ( (byte_4C38E99 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_5561/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_1C32C20(&StringLiteral_5562/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_4C38E99 = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0, 0) )
  {
    v4 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5561/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0);
    if ( !v4 )
      goto LABEL_20;
    UILabel__set_text(v4, v5, 0);
    v5 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v5 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.titleLabelMaxWidth, 0, 0);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0, 0) )
  {
    v7 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5562/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0);
    if ( v7 )
    {
      UILabel__set_text(v7, v5, 0);
      v5 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v5 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.titleLabelMaxWidth, 0, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C32E7C(v5);
  }
LABEL_19:
  EventInfoConquestItemCounterComponent__SetNum(
    (EventInfoConquestItemCounterComponent_o *)this,
    this->fields._itemId_k__BackingField,
    this->fields.itemNum,
    this->fields.productNum,
    this->fields.addProductNum,
    0);
}


void EventInfoConquestItemFarmCounterComponent__anim(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  int32_t itemId_k__BackingField; // w1
  int64_t itemNum; // x2
  int32_t productNum; // w3

  itemId_k__BackingField = this->fields._itemId_k__BackingField;
  itemNum = this->fields.itemNum;
  productNum = this->fields.productNum;
  this->fields.addProductNum = 0;
  EventInfoConquestItemCounterComponent__SetNum(
    (EventInfoConquestItemCounterComponent_o *)this,
    itemId_k__BackingField,
    itemNum,
    productNum,
    0,
    0);
}