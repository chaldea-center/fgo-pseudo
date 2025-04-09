void __fastcall EventInfoConquestItemFarmCounterComponent___ctor(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.titleLabelMaxWidth = 0x4800000022LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoConquestItemFarmCounterComponent__PlayAnim(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  EventInfoConquestItemFarmCounterComponent_c *klass; // x8

  if ( this->fields.addProductNum )
  {
    klass = this->klass;
    this->fields.addProductNum = 0;
    ((void (__fastcall *)(EventInfoConquestItemFarmCounterComponent_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))klass->vtable._5_SetLabel.method)(
      this,
      (unsigned int)this->fields.itemNum,
      (unsigned int)this->fields.productNum,
      0LL,
      klass->vtable._6_PlayAnim.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoConquestItemFarmCounterComponent__SetLabel(
        EventInfoConquestItemFarmCounterComponent_o *this,
        int32_t itemNum,
        int32_t productNum,
        int32_t addNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *itemNumLabel; // x23
  System_String_o *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  int v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49BB6CE & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&itemNum);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_5478/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, v10);
    sub_1B4CF90(&StringLiteral_5479/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, v11);
    byte_49BB6CE = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5478/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0LL);
  v27 = itemNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v14, v15, v16);
  v18 = System_String__Format(v13, v17, 0LL);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v18, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5479/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0LL);
  v26 = productNum - addNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v22, v23, v24);
  v18 = System_String__Format(v21, v25, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v18, 0LL), (v18 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0, 0LL),
        (v18 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_10:
    sub_1B4D1EC(v18, v19);
  }
  UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0, 0LL);
}


void __fastcall EventInfoConquestItemFarmCounterComponent__Start(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  UILabel_o *v11; // x20

  if ( (byte_49BB6CD & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_5478/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, v4);
    sub_1B4CF90(&StringLiteral_5479/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, v5);
    byte_49BB6CD = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5478/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0LL);
    if ( !v7 )
      goto LABEL_20;
    UILabel__set_text(v7, v8, 0LL);
    v8 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v8 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v8, this->fields.titleLabelMaxWidth, 0, 0LL);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0LL, 0LL) )
  {
    v11 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5479/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0LL);
    if ( v11 )
    {
      UILabel__set_text(v11, v8, 0LL);
      v8 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v8 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v8, this->fields.titleLabelMaxWidth, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1B4D1EC(v8, v9);
  }
LABEL_19:
  ((void (__fastcall *)(EventInfoConquestItemFarmCounterComponent_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_SetLabel.method)(
    this,
    (unsigned int)this->fields.itemNum,
    (unsigned int)this->fields.productNum,
    (unsigned int)this->fields.addProductNum,
    this->klass->vtable._6_PlayAnim.methodPtr);
}


void __fastcall EventInfoConquestItemFarmCounterComponent__anim(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  EventInfoConquestItemFarmCounterComponent_c *klass; // x8

  klass = this->klass;
  this->fields.addProductNum = 0;
  ((void (__fastcall *)(EventInfoConquestItemFarmCounterComponent_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))klass->vtable._5_SetLabel.method)(
    this,
    (unsigned int)this->fields.itemNum,
    (unsigned int)this->fields.productNum,
    0LL,
    klass->vtable._6_PlayAnim.methodPtr);
}