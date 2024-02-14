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
  struct UICommonButton_o *v7; // x0

  if ( (byte_4213575 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    byte_4213575 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7
      || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
            v7,
            isInput,
            v7->klass->vtable._6_OnInit.methodPtr),
          (v7 = this->fields.baseButton) == 0LL) )
    {
      sub_B0D97C(v7);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
      v7,
      0LL,
      0LL,
      v7->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall StonePurchaseListViewItemDraw__SetItem(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *priceTitleTextLabel; // x0
  __int64 v12; // x1
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v15; // x22
  bool IsNullOrEmpty; // w0
  const MethodInfo *v17; // x1
  UILabel_o *nameTextLabel; // x21
  bool v19; // w23
  struct BankShopEntity_o *v20; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v23; // x24
  System_String_o *CountText; // x2
  __int64 v25; // x1
  struct BankShopEntity_o *v26; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v28; // x22
  bool v29; // w0
  struct BankShopEntity_o *v30; // x8
  UILabel_o *priceTextLabel; // x21
  int32_t *p_googlePrice; // x8
  struct ItemEntity_o *v33; // x8
  int32_t v34; // w23
  System_String_o *v35; // x1
  Il2CppObject *v36; // x0
  struct ItemEntity_o *v37; // x8
  int32_t imageId; // w1
  UnityEngine_Object_o *baseButton; // x20
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4213574 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4213574 = 1;
  }
  if ( !item || !mode )
    return;
  priceTitleTextLabel = this->fields.priceTitleTextLabel;
  if ( !priceTitleTextLabel
    || (UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (priceTitleTextLabel = this->fields.countTextLabel) == 0LL) )
  {
LABEL_54:
    sub_B0D97C(priceTitleTextLabel);
  }
  UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (byte_4213570 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4213570 = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v15 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  nameTextLabel = this->fields.nameTextLabel;
  v19 = IsNullOrEmpty;
  if ( (byte_421356E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, v17);
    byte_421356E = 1;
  }
  v20 = item->fields.bankShop;
  if ( v20 )
  {
    p_name = &v20->fields.name;
  }
  else
  {
    entity = item->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18452/*"error"*/;
  }
  v23 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(item, v17);
  if ( v19 )
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Concat_43852188(
                                         v23,
                                         (System_String_o *)StringLiteral_80/*" "*/,
                                         CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  else
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Format_43845440(
                                         v15,
                                         (Il2CppObject *)v23,
                                         (Il2CppObject *)CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  UILabel__set_text(nameTextLabel, (System_String_o *)priceTitleTextLabel, 0LL);
  if ( (byte_4213571 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    byte_4213571 = 1;
  }
  v26 = item->fields.bankShop;
  if ( v26 )
    p_priceDetail = &v26->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v28 = *p_priceDetail;
  v29 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v30 = item->fields.bankShop;
  priceTextLabel = this->fields.priceTextLabel;
  if ( v30 )
  {
    p_googlePrice = &v30->fields.googlePrice;
  }
  else
  {
    v33 = item->fields.entity;
    if ( !v33 )
    {
      v34 = 0;
      if ( v29 )
        goto LABEL_33;
LABEL_41:
      v40 = v34;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      priceTitleTextLabel = (UILabel_o *)System_String__Format(v28, v36, 0LL);
      if ( !priceTextLabel )
        goto LABEL_54;
      v35 = (System_String_o *)priceTitleTextLabel;
      goto LABEL_43;
    }
    p_googlePrice = &v33->fields.sellQp;
  }
  v34 = *p_googlePrice;
  if ( !v29 )
    goto LABEL_41;
LABEL_33:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  priceTitleTextLabel = (UILabel_o *)LocalizationManager__GetPrice2Info(v34, 0LL);
  if ( !priceTextLabel )
    goto LABEL_54;
  if ( priceTitleTextLabel )
    v35 = (System_String_o *)priceTitleTextLabel;
  else
    v35 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_43:
  UILabel__set_text(priceTextLabel, v35, 0LL);
  v37 = item->fields.entity;
  priceTitleTextLabel = (UILabel_o *)this->fields.itemIcon;
  if ( v37 )
  {
    imageId = v37->fields.imageId;
    if ( !priceTitleTextLabel )
      goto LABEL_54;
  }
  else
  {
    imageId = 0;
    if ( !priceTitleTextLabel )
      goto LABEL_54;
  }
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)priceTitleTextLabel, imageId, 0LL);
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