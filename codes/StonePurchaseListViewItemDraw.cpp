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

  if ( (byte_42AED91 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AED91 = 1;
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
      sub_B52A5C(v8, v7);
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
  UILabel_o *priceTitleTextLabel; // x0
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v10; // x22
  bool IsNullOrEmpty; // w0
  const MethodInfo *v12; // x1
  UILabel_o *nameTextLabel; // x21
  bool v14; // w23
  struct BankShopEntity_o *v15; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v18; // x24
  System_String_o *CountText; // x2
  struct BankShopEntity_o *v20; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v22; // x22
  bool v23; // w0
  struct BankShopEntity_o *v24; // x8
  UILabel_o *priceTextLabel; // x21
  int32_t *p_googlePrice; // x8
  struct ItemEntity_o *v27; // x8
  int32_t v28; // w23
  System_String_o *v29; // x1
  Il2CppObject *v30; // x0
  struct ItemEntity_o *v31; // x8
  UnityEngine_Object_o *baseButton; // x20
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_42AED90 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AED90 = 1;
  }
  if ( !v5 || !mode )
    return;
  priceTitleTextLabel = this->fields.priceTitleTextLabel;
  if ( !priceTitleTextLabel
    || (UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (priceTitleTextLabel = this->fields.countTextLabel) == 0LL) )
  {
LABEL_54:
    sub_B52A5C(priceTitleTextLabel, item);
  }
  UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (byte_42AED8C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AED8C = 1;
  }
  bankShop = v5->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v10 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  nameTextLabel = this->fields.nameTextLabel;
  v14 = IsNullOrEmpty;
  if ( (byte_42AED8A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42AED8A = 1;
  }
  v15 = v5->fields.bankShop;
  if ( v15 )
  {
    p_name = &v15->fields.name;
  }
  else
  {
    entity = v5->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18529/*"error"*/;
  }
  v18 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(v5, v12);
  if ( v14 )
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Concat_44570600(
                                         v18,
                                         (System_String_o *)StringLiteral_81/*" "*/,
                                         CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  else
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Format_44563852(
                                         v10,
                                         (Il2CppObject *)v18,
                                         (Il2CppObject *)CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  UILabel__set_text(nameTextLabel, (System_String_o *)priceTitleTextLabel, 0LL);
  if ( (byte_42AED8D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AED8D = 1;
  }
  v20 = v5->fields.bankShop;
  if ( v20 )
    p_priceDetail = &v20->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v22 = *p_priceDetail;
  v23 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v24 = v5->fields.bankShop;
  priceTextLabel = this->fields.priceTextLabel;
  if ( v24 )
  {
    p_googlePrice = &v24->fields.googlePrice;
  }
  else
  {
    v27 = v5->fields.entity;
    if ( !v27 )
    {
      v28 = 0;
      if ( v23 )
        goto LABEL_33;
LABEL_41:
      v33 = v28;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
      priceTitleTextLabel = (UILabel_o *)System_String__Format(v22, v30, 0LL);
      if ( !priceTextLabel )
        goto LABEL_54;
      v29 = (System_String_o *)priceTitleTextLabel;
      goto LABEL_43;
    }
    p_googlePrice = &v27->fields.sellQp;
  }
  v28 = *p_googlePrice;
  if ( !v23 )
    goto LABEL_41;
LABEL_33:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  priceTitleTextLabel = (UILabel_o *)LocalizationManager__GetPrice2Info(v28, 0LL);
  if ( !priceTextLabel )
    goto LABEL_54;
  if ( priceTitleTextLabel )
    v29 = (System_String_o *)priceTitleTextLabel;
  else
    v29 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_43:
  UILabel__set_text(priceTextLabel, v29, 0LL);
  v31 = v5->fields.entity;
  priceTitleTextLabel = (UILabel_o *)this->fields.itemIcon;
  if ( v31 )
  {
    item = (StonePurchaseListViewItem_o *)(unsigned int)v31->fields.imageId;
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