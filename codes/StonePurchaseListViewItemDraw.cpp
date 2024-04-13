void __fastcall StonePurchaseListViewItemDraw___ctor(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StonePurchaseListViewItemDraw__SetInput(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0

  if ( (byte_42E7AB8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, isInput, method);
    byte_42E7AB8 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v8 = this->fields.baseButton;
    if ( !v8
      || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
            v8,
            isInput,
            v8->klass->vtable._6_OnInit.methodPtr),
          (v8 = this->fields.baseButton) == 0LL) )
    {
      sub_B5D69C(v8, v7);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
      v8,
      0LL,
      0LL,
      v8->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall StonePurchaseListViewItemDraw__SetItem(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  StonePurchaseListViewItem_o *v5; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UILabel_o *priceTitleTextLabel; // x0
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v25; // x22
  bool IsNullOrEmpty; // w0
  const MethodInfo *v27; // x1
  int v28; // w2
  __int64 v29; // x3
  UILabel_o *nameTextLabel; // x21
  bool v31; // w23
  struct BankShopEntity_o *v32; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v35; // x24
  System_String_o *CountText; // x2
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  struct BankShopEntity_o *v40; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v42; // x22
  bool v43; // w0
  struct BankShopEntity_o *v44; // x8
  UILabel_o *priceTextLabel; // x21
  int32_t *p_googlePrice; // x8
  struct ItemEntity_o *v47; // x8
  int32_t v48; // w23
  System_String_o *v49; // x1
  Il2CppObject *v50; // x0
  struct ItemEntity_o *v51; // x8
  UnityEngine_Object_o *baseButton; // x20
  int32_t v53; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_42E7AB7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42E7AB7 = 1;
  }
  if ( !v5 || !mode )
    return;
  priceTitleTextLabel = this->fields.priceTitleTextLabel;
  if ( !priceTitleTextLabel
    || (UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (priceTitleTextLabel = this->fields.countTextLabel) == 0LL) )
  {
LABEL_54:
    sub_B5D69C(priceTitleTextLabel, item);
  }
  UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (byte_42E7AB3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E7AB3 = 1;
  }
  bankShop = v5->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v25 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  nameTextLabel = this->fields.nameTextLabel;
  v31 = IsNullOrEmpty;
  if ( (byte_42E7AB1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)v27, v28, v29);
    byte_42E7AB1 = 1;
  }
  v32 = v5->fields.bankShop;
  if ( v32 )
  {
    p_name = &v32->fields.name;
  }
  else
  {
    entity = v5->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18624/*"error"*/;
  }
  v35 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(v5, v27);
  if ( v31 )
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Concat_44580072(
                                         v35,
                                         (System_String_o *)StringLiteral_81/*" "*/,
                                         CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  else
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Format_44573324(
                                         v25,
                                         (Il2CppObject *)v35,
                                         (Il2CppObject *)CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  UILabel__set_text(nameTextLabel, (System_String_o *)priceTitleTextLabel, 0LL);
  if ( (byte_42E7AB4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, v37, v38, v39);
    byte_42E7AB4 = 1;
  }
  v40 = v5->fields.bankShop;
  if ( v40 )
    p_priceDetail = &v40->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v42 = *p_priceDetail;
  v43 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v44 = v5->fields.bankShop;
  priceTextLabel = this->fields.priceTextLabel;
  if ( v44 )
  {
    p_googlePrice = &v44->fields.googlePrice;
  }
  else
  {
    v47 = v5->fields.entity;
    if ( !v47 )
    {
      v48 = 0;
      if ( v43 )
        goto LABEL_33;
LABEL_41:
      v53 = v48;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
      priceTitleTextLabel = (UILabel_o *)System_String__Format(v42, v50, 0LL);
      if ( !priceTextLabel )
        goto LABEL_54;
      v49 = (System_String_o *)priceTitleTextLabel;
      goto LABEL_43;
    }
    p_googlePrice = &v47->fields.sellQp;
  }
  v48 = *p_googlePrice;
  if ( !v43 )
    goto LABEL_41;
LABEL_33:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  priceTitleTextLabel = (UILabel_o *)LocalizationManager__GetPrice2Info(v48, 0LL);
  if ( !priceTextLabel )
    goto LABEL_54;
  if ( priceTitleTextLabel )
    v49 = (System_String_o *)priceTitleTextLabel;
  else
    v49 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_43:
  UILabel__set_text(priceTextLabel, v49, 0LL);
  v51 = v5->fields.entity;
  priceTitleTextLabel = (UILabel_o *)this->fields.itemIcon;
  if ( v51 )
  {
    item = (StonePurchaseListViewItem_o *)(unsigned int)v51->fields.imageId;
    if ( !priceTitleTextLabel )
      goto LABEL_54;
  }
  else
  {
    item = 0LL;
    if ( !priceTitleTextLabel )
      goto LABEL_54;
  }
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)priceTitleTextLabel, (int32_t)item, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    priceTitleTextLabel = (UILabel_o *)this->fields.baseButton;
    if ( !priceTitleTextLabel )
      goto LABEL_54;
    ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))priceTitleTextLabel->klass->vtable._14_OnEnable.method)(
      priceTitleTextLabel,
      0LL,
      1LL,
      priceTitleTextLabel->klass->vtable._15_OnInit.methodPtr);
  }
}