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

  if ( (byte_4188CA8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4188CA8 = 1;
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
      sub_B2C434(v8, v7);
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
  struct BankShopEntity_o *v30; // x8
  UILabel_o *priceTextLabel; // x21
  int32_t *p_googlePrice; // x8
  struct ItemEntity_o *v33; // x8
  int32_t v34; // w23
  System_String_o *v35; // x1
  Il2CppObject *v36; // x0
  struct ItemEntity_o *v37; // x8
  UnityEngine_Object_o *baseButton; // x20
  int32_t v39; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4188CA7 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_80/*" "*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4188CA7 = 1;
  }
  if ( !v5 || !mode )
    return;
  priceTitleTextLabel = this->fields.priceTitleTextLabel;
  if ( !priceTitleTextLabel
    || (UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (priceTitleTextLabel = this->fields.countTextLabel) == 0LL) )
  {
LABEL_54:
    sub_B2C434(priceTitleTextLabel, item);
  }
  UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (byte_4188CA3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4188CA3 = 1;
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
  if ( (byte_4188CA1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v17);
    byte_4188CA1 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18395/*"error"*/;
  }
  v23 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(v5, v17);
  if ( v19 )
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Concat_44307816(
                                         v23,
                                         (System_String_o *)StringLiteral_80/*" "*/,
                                         CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  else
  {
    priceTitleTextLabel = (UILabel_o *)System_String__Format_44301068(
                                         v15,
                                         (Il2CppObject *)v23,
                                         (Il2CppObject *)CountText,
                                         0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  UILabel__set_text(nameTextLabel, (System_String_o *)priceTitleTextLabel, 0LL);
  if ( (byte_4188CA4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_4188CA4 = 1;
  }
  v26 = v5->fields.bankShop;
  if ( v26 )
    p_priceDetail = &v26->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v28 = *p_priceDetail;
  v29 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v30 = v5->fields.bankShop;
  priceTextLabel = this->fields.priceTextLabel;
  if ( v30 )
  {
    p_googlePrice = &v30->fields.googlePrice;
  }
  else
  {
    v33 = v5->fields.entity;
    if ( !v33 )
    {
      v34 = 0;
      if ( v29 )
        goto LABEL_33;
LABEL_41:
      v39 = v34;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
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
  v37 = v5->fields.entity;
  priceTitleTextLabel = (UILabel_o *)this->fields.itemIcon;
  if ( v37 )
  {
    item = (StonePurchaseListViewItem_o *)(unsigned int)v37->fields.imageId;
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