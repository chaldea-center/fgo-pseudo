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
  struct UICommonButton_o *v8; // x0

  if ( (byte_40FAEA7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FAEA7 = 1;
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
          (v8 = this->fields.baseButton) == 0LL) )
    {
      sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *priceTitleTextLabel; // x0
  UILabel_o *countTextLabel; // x0
  __int64 v13; // x1
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v16; // x22
  bool IsNullOrEmpty; // w0
  const MethodInfo *v18; // x1
  UILabel_o *nameTextLabel; // x21
  bool v20; // w23
  struct BankShopEntity_o *v21; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v24; // x24
  System_String_o *CountText; // x2
  System_String_o *v26; // x0
  __int64 v27; // x1
  struct BankShopEntity_o *v28; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v30; // x22
  bool v31; // w0
  struct BankShopEntity_o *v32; // x8
  UILabel_o *priceTextLabel; // x21
  int32_t *p_googlePrice; // x8
  struct ItemEntity_o *v35; // x8
  int32_t v36; // w23
  System_String_o *Price2Info; // x0
  System_String_o *v38; // x1
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  struct ItemEntity_o *v41; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t imageId; // w1
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v45; // x0
  int32_t v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FAEA6 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_80, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FAEA6 = 1;
  }
  if ( !item || !mode )
    return;
  priceTitleTextLabel = this->fields.priceTitleTextLabel;
  if ( !priceTitleTextLabel
    || (UILabel__set_text(priceTitleTextLabel, (System_String_o *)StringLiteral_1, 0LL),
        (countTextLabel = this->fields.countTextLabel) == 0LL) )
  {
LABEL_54:
    sub_B170D4();
  }
  UILabel__set_text(countTextLabel, (System_String_o *)StringLiteral_1, 0LL);
  if ( (byte_40FAEA2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40FAEA2 = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1;
  v16 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  nameTextLabel = this->fields.nameTextLabel;
  v20 = IsNullOrEmpty;
  if ( (byte_40FAEA0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326, v18);
    byte_40FAEA0 = 1;
  }
  v21 = item->fields.bankShop;
  if ( v21 )
  {
    p_name = &v21->fields.name;
  }
  else
  {
    entity = item->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18326;
  }
  v24 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(item, v18);
  if ( v20 )
  {
    v26 = System_String__Concat_43746016(v24, (System_String_o *)StringLiteral_80, CountText, 0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  else
  {
    v26 = System_String__Format_43739268(v16, (Il2CppObject *)v24, (Il2CppObject *)CountText, 0LL);
    if ( !nameTextLabel )
      goto LABEL_54;
  }
  UILabel__set_text(nameTextLabel, v26, 0LL);
  if ( (byte_40FAEA3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, v27);
    byte_40FAEA3 = 1;
  }
  v28 = item->fields.bankShop;
  if ( v28 )
    p_priceDetail = &v28->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1;
  v30 = *p_priceDetail;
  v31 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v32 = item->fields.bankShop;
  priceTextLabel = this->fields.priceTextLabel;
  if ( v32 )
  {
    p_googlePrice = &v32->fields.googlePrice;
  }
  else
  {
    v35 = item->fields.entity;
    if ( !v35 )
    {
      v36 = 0;
      if ( v31 )
        goto LABEL_33;
LABEL_41:
      v46 = v36;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
      v40 = System_String__Format(v30, v39, 0LL);
      if ( !priceTextLabel )
        goto LABEL_54;
      v38 = v40;
      goto LABEL_43;
    }
    p_googlePrice = &v35->fields.sellQp;
  }
  v36 = *p_googlePrice;
  if ( !v31 )
    goto LABEL_41;
LABEL_33:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Price2Info = LocalizationManager__GetPrice2Info(v36, 0LL);
  if ( !priceTextLabel )
    goto LABEL_54;
  if ( Price2Info )
    v38 = Price2Info;
  else
    v38 = (System_String_o *)StringLiteral_1;
LABEL_43:
  UILabel__set_text(priceTextLabel, v38, 0LL);
  v41 = item->fields.entity;
  itemIcon = this->fields.itemIcon;
  if ( v41 )
  {
    imageId = v41->fields.imageId;
    if ( !itemIcon )
      goto LABEL_54;
  }
  else
  {
    imageId = 0;
    if ( !itemIcon )
      goto LABEL_54;
  }
  ItemIconComponent__SetItemImage(itemIcon, imageId, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v45 = this->fields.baseButton;
    if ( !v45 )
      goto LABEL_54;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v45->klass->vtable._14_SetState.method)(
      v45,
      0LL,
      1LL,
      v45->klass->vtable._15_OnPress.methodPtr);
  }
}