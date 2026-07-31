void EventInfoConquestItemFarmCounterComponent___ctor(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.titleLabelMaxWidth = 0x4800000022LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoConquestItemFarmCounterComponent__PlayAnim(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  EventInfoConquestItemFarmCounterComponent_c *klass; // x8
  int64_t itemNum; // x1
  __int64 productNum; // x2

  if ( this->fields.addProductNum )
  {
    klass = this->klass;
    itemNum = this->fields.itemNum;
    productNum = (unsigned int)this->fields.productNum;
    this->fields.addProductNum = 0;
    ((void (__fastcall *)(EventInfoConquestItemFarmCounterComponent_o *, int64_t, __int64, _QWORD, const MethodInfo *))klass->vtable._5_SetLabel.methodPtr)(
      this,
      itemNum,
      productNum,
      0,
      klass->vtable._5_SetLabel.method);
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

  if ( (byte_593991D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5750/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_21FFC50(&StringLiteral_5751/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_593991D = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemNum);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5750/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0);
  v18 = itemNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v18);
  v12 = System_String__Format(v10, v11, 0);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v12, 0);
  productNumLabel = this->fields.productNumLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0);
  v17 = productNum - addNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
  v12 = System_String__Format(v15, v16, 0);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v12, 0), (v12 = (System_String_o *)this->fields.itemNumLabel) == 0)
    || (UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.numLabelMaxWidth, 0, 0),
        (v12 = (System_String_o *)this->fields.productNumLabel) == 0) )
  {
LABEL_10:
    sub_21FFECC(v12, v13);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.numLabelMaxWidth, 0, 0);
}


void EventInfoConquestItemFarmCounterComponent__Start(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  __int64 v9; // x1
  UILabel_o *v10; // x20

  if ( (byte_593991C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5750/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_21FFC50(&StringLiteral_5751/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_593991C = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0, 0) )
  {
    v5 = this->fields.itemNumTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5750/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0);
    if ( !v5 )
      goto LABEL_20;
    UILabel__set_text(v5, v6, 0);
    v6 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v6 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.titleLabelMaxWidth, 0, 0);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0, 0) )
  {
    v10 = this->fields.productNumTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0);
    if ( v10 )
    {
      UILabel__set_text(v10, v6, 0);
      v6 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v6 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.titleLabelMaxWidth, 0, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_21FFECC(v6, v7);
  }
LABEL_19:
  ((void (__fastcall *)(EventInfoConquestItemFarmCounterComponent_o *, int64_t, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._5_SetLabel.methodPtr)(
    this,
    this->fields.itemNum,
    (unsigned int)this->fields.productNum,
    (unsigned int)this->fields.addProductNum,
    this->klass->vtable._5_SetLabel.method);
}


void EventInfoConquestItemFarmCounterComponent__anim(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  EventInfoConquestItemFarmCounterComponent_c *klass; // x8
  int64_t itemNum; // x1
  __int64 productNum; // x2

  klass = this->klass;
  itemNum = this->fields.itemNum;
  productNum = (unsigned int)this->fields.productNum;
  this->fields.addProductNum = 0;
  ((void (__fastcall *)(EventInfoConquestItemFarmCounterComponent_o *, int64_t, __int64, _QWORD, const MethodInfo *))klass->vtable._5_SetLabel.methodPtr)(
    this,
    itemNum,
    productNum,
    0,
    klass->vtable._5_SetLabel.method);
}