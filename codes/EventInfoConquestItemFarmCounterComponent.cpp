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


void __fastcall EventInfoConquestItemFarmCounterComponent__SetLabel(
        EventInfoConquestItemFarmCounterComponent_o *this,
        int32_t itemNum,
        int32_t productNum,
        int32_t addNum,
        const MethodInfo *method)
{
  UILabel_o *itemNumLabel; // x23
  System_String_o *v10; // x24
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  int v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDCD87 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5702/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_1C21E38(&StringLiteral_5703/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_4BDCD87 = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0LL);
  v24 = itemNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v11, v12, v13);
  v15 = System_String__Format(v10, v14, 0LL);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v15, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0LL);
  v23 = productNum - addNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v19, v20, v21);
  v15 = System_String__Format(v18, v22, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v15, 0LL), (v15 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.numLabelMaxWidth, 0, 0LL),
        (v15 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_10:
    sub_1C22094(v15, v16);
  }
  UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.numLabelMaxWidth, 0, 0LL);
}


void __fastcall EventInfoConquestItemFarmCounterComponent__Start(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  UILabel_o *v8; // x20

  if ( (byte_4BDCD86 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5702/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/);
    sub_1C21E38(&StringLiteral_5703/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/);
    byte_4BDCD86 = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0LL, 0LL) )
  {
    v4 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0LL);
    if ( !v4 )
      goto LABEL_20;
    UILabel__set_text(v4, v5, 0LL);
    v5 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v5 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.titleLabelMaxWidth, 0, 0LL);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0LL, 0LL) )
  {
    v8 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0LL);
    if ( v8 )
    {
      UILabel__set_text(v8, v5, 0LL);
      v5 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v5 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.titleLabelMaxWidth, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C22094(v5, v6);
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