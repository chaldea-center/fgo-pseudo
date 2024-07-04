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

  if ( (byte_48E04BA & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, item);
    byte_48E04BA = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1B00F28(v8, v7);
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
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct BankShopEntity_o *v33; // x8
  int32_t *p_googlePrice; // x8
  struct ItemEntity_o *v35; // x8
  int32_t v36; // w23
  UILabel_o *priceTextLabel; // x21
  System_String_o *v38; // x1
  Il2CppObject *v39; // x0
  struct ItemEntity_o *v40; // x8
  UnityEngine_Object_o *baseButton; // x20
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_48E04B9 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, item);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v7);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_115/*" "*/, v9);
    sub_1B00CCC(&StringLiteral_1/*""*/, v10);
    byte_48E04B9 = 1;
  }
  if ( !v5 || !mode )
    return;
  priceTitleTextLabel = this->fields.priceTitleTextLabel;
  if ( !priceTitleTextLabel )
    goto LABEL_53;
  UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  priceTitleTextLabel = this->fields.countTextLabel;
  if ( !priceTitleTextLabel )
    goto LABEL_53;
  UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (byte_48E04B5 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48E04B5 = 1;
  }
  bankShop = v5->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v15 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  nameTextLabel = this->fields.nameTextLabel;
  v19 = IsNullOrEmpty;
  if ( (byte_48E04B3 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_18800/*"error"*/, v17);
    byte_48E04B3 = 1;
  }
  v20 = v5->fields.bankShop;
  if ( v20 )
  {
    p_name = &v20->fields.name;
  }
  else
  {
    entity = v5->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18800/*"error"*/;
  }
  v23 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(v5, v17);
  if ( v19 )
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Concat_60337008(
                                         v23,
                                         (System_String_o *)StringLiteral_115/*" "*/,
                                         CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_53;
  }
  else
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Format_60340120(
                                         v15,
                                         (Il2CppObject *)v23,
                                         (Il2CppObject *)CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_53;
  }
  UILabel__set_text(nameTextLabel, (System_String_o *)priceTitleTextLabel, 0LL);
  if ( (byte_48E04B6 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, v25);
    byte_48E04B6 = 1;
  }
  v26 = v5->fields.bankShop;
  if ( v26 )
    p_priceDetail = &v26->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v28 = *p_priceDetail;
  v29 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v33 = v5->fields.bankShop;
  if ( v33 )
  {
    p_googlePrice = &v33->fields.googlePrice;
LABEL_32:
    v36 = *p_googlePrice;
    goto LABEL_33;
  }
  v35 = v5->fields.entity;
  if ( v35 )
  {
    p_googlePrice = &v35->fields.sellQp;
    goto LABEL_32;
  }
  v36 = 0;
LABEL_33:
  priceTextLabel = this->fields.priceTextLabel;
  if ( !v29 )
  {
    v42 = v36;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v30, v31, v32);
    priceTitleTextLabel = (UILabel_o *)System_String__Format(v28, v39, 0LL);
    if ( !priceTextLabel )
      goto LABEL_53;
    v38 = (System_String_o *)priceTitleTextLabel;
    goto LABEL_42;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  priceTitleTextLabel = (UILabel_o *)LocalizationManager__GetPrice2Info(v36, 0LL);
  if ( !priceTextLabel )
LABEL_53:
    sub_1B00F28(priceTitleTextLabel, item);
  if ( priceTitleTextLabel )
    v38 = (System_String_o *)priceTitleTextLabel;
  else
    v38 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_42:
  UILabel__set_text(priceTextLabel, v38, 0LL);
  v40 = v5->fields.entity;
  priceTitleTextLabel = (UILabel_o *)this->fields.itemIcon;
  if ( v40 )
  {
    item = (StonePurchaseListViewItem_o *)(unsigned int)v40->fields.imageId;
    if ( !priceTitleTextLabel )
      goto LABEL_53;
  }
  else
  {
    item = 0LL;
    if ( !priceTitleTextLabel )
      goto LABEL_53;
  }
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)priceTitleTextLabel, (int32_t)item, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    priceTitleTextLabel = (UILabel_o *)this->fields.baseButton;
    if ( !priceTitleTextLabel )
      goto LABEL_53;
    ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))priceTitleTextLabel->klass->vtable._14_OnEnable.method)(
      priceTitleTextLabel,
      0LL,
      1LL,
      priceTitleTextLabel->klass->vtable._15_OnInit.methodPtr);
  }
}