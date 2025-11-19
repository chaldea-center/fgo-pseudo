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
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v15; // x23
  Il2CppObject *v16; // x0
  int v17; // [xsp+4h] [xbp-4Ch] BYREF
  int64_t v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB77CA & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_5552/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_1C6BA08(&StringLiteral_5553/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_4CB77CA = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5552/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0);
  v18 = itemNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
  v12 = System_String__Format(v10, v11, 0);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v12, 0);
  productNumLabel = this->fields.productNumLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5553/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0);
  v17 = productNum - addNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v12 = System_String__Format(v15, v16, 0);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v12, 0), (v12 = (System_String_o *)this->fields.itemNumLabel) == 0)
    || (UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.numLabelMaxWidth, 0, 0),
        (v12 = (System_String_o *)this->fields.productNumLabel) == 0) )
  {
LABEL_10:
    sub_1C6BC60(v12, v13);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.numLabelMaxWidth, 0, 0);
}


void EventInfoConquestItemFarmCounterComponent__Start(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  UILabel_o *v8; // x20

  if ( (byte_4CB77C9 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5552/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_1C6BA08(&StringLiteral_5553/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_4CB77C9 = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0, 0) )
  {
    v4 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5552/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0);
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
    v8 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5553/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0);
    if ( v8 )
    {
      UILabel__set_text(v8, v5, 0);
      v5 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v5 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.titleLabelMaxWidth, 0, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C6BC60(v5, v6);
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