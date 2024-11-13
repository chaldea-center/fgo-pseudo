void __fastcall EventInfoConquestItemFarmCounterComponent___ctor(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.titleLabelMaxWidth = 0x4800000022LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoConquestItemFarmCounterComponent__SetLabel(
        EventInfoConquestItemFarmCounterComponent_o *this,
        int32_t itemNum,
        int32_t productNum,
        int32_t addNum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *itemNumLabel; // x22
  System_String_o *v15; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *productNumLabel; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16A3A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&itemNum, *(_QWORD *)&productNum);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_5663/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_5664/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, v12, v13);
    byte_4B16A3A = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemNum);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0LL);
  v23 = itemNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v17 = System_String__Format(v15, v16, 0LL);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v17, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5664/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0LL);
  v22 = productNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v17 = System_String__Format(v20, v21, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v17, 0LL), (v17 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v17, this->fields.numLabelMaxWidth, 0LL),
        (v17 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(v17, v18);
  }
  UILabel__SetCondensedScale((UILabel_o *)v17, this->fields.numLabelMaxWidth, 0LL);
}


void __fastcall EventInfoConquestItemFarmCounterComponent__Start(
        EventInfoConquestItemFarmCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  __int64 v16; // x1
  UILabel_o *v17; // x20

  if ( (byte_4B16A39 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5663/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_5664/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, v8, v9);
    byte_4B16A39 = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0LL, 0LL) )
  {
    v12 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0LL);
    if ( !v12 )
      goto LABEL_20;
    UILabel__set_text(v12, v13, 0LL);
    v13 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v13 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v13, this->fields.titleLabelMaxWidth, 0LL);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0LL, 0LL) )
  {
    v17 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5664/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0LL);
    if ( v17 )
    {
      UILabel__set_text(v17, v13, 0LL);
      v13 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v13 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v13, this->fields.titleLabelMaxWidth, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1BCAA3C(v13, v14);
  }
LABEL_19:
  ((void (__fastcall *)(EventInfoConquestItemFarmCounterComponent_o *, _QWORD, _QWORD, _QWORD, void *))this->klass->vtable._5_SetLabel.method)(
    this,
    (unsigned int)this->fields.itemNum,
    (unsigned int)this->fields.productNum,
    (unsigned int)this->fields.addProductNum,
    this->klass[1]._1.image);
}