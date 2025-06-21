void __fastcall StonePurchaseListViewItemDraw___ctor(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StonePurchaseListViewItemDraw__Awake(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
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

  if ( (byte_4B1A721 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1A721 = 1;
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
      sub_1BCB254(v8, v7);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct BankShopEntity_o *bankShop; // x21
  bool HasFlag; // w20
  const MethodInfo *v19; // x3
  __int64 iconId; // x1
  ItemIconComponent_o *itemIcon; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UnityEngine_Object_o *commonUiAtlas; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  UISprite_o *v28; // x22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x23
  UnityEngine_Object_o *detailButton; // x22
  UnityEngine_Object_o *detailButtonLabel; // x22
  UILabel_o *v33; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  struct UILabel_o *v35; // x21
  int v36; // w23
  System_String_o *mText; // x22
  System_String_o *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  int v45; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1A71F & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMaster_PaymentLimitMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&int_TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_20246/*"img_list_bg{0:00}_sp"*/, v12);
    sub_1BCAFF8(&StringLiteral_12286/*"STONE_SHOP_LIMIT_TEMPLATE"*/, v13);
    sub_1BCAFF8(&StringLiteral_20241/*"img_list_bg01"*/, v14);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v15);
    sub_1BCAFF8(&StringLiteral_12281/*"STONE_SHOP_DETAIL_BUTTON"*/, v16);
    byte_4B1A71F = 1;
  }
  if ( item )
  {
    if ( mode )
    {
      bankShop = item->fields.bankShop;
      if ( bankShop )
      {
        HasFlag = BankShopEntity__HasFlag(item->fields.bankShop, 2LL, 0LL);
        StonePurchaseListViewItemDraw__SetStoneInfoLabel(this, item, HasFlag, v19);
        iconId = (unsigned int)bankShop->fields.iconId;
        if ( !(_DWORD)iconId )
          iconId = (unsigned int)StonePurchaseListViewItem__get_ImageId(item, 0LL);
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_58;
        ItemIconComponent__SetItemImage(itemIcon, iconId, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.baseButton;
          if ( !itemIcon )
            goto LABEL_58;
          ((void (__fastcall *)(ItemIconComponent_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))itemIcon->klass[1]._1.implementedInterfaces)(
            itemIcon,
            0LL,
            1LL,
            itemIcon->klass[1]._1.interfaceOffsets);
        }
        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
        {
          commonUiAtlas = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(commonUiAtlas, 0LL, 0LL);
          if ( ((unsigned __int8)itemIcon & 1) != 0 )
          {
            v28 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId, v25, v26, v27);
              v30 = System_String__Format((System_String_o *)StringLiteral_20246/*"img_list_bg{0:00}_sp"*/, v29, 0LL);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetDownloadCommonSprite(v28, v30, 0LL);
            }
            else
            {
              if ( !v28 )
                goto LABEL_58;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0LL);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_58;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20241/*"img_list_bg01"*/, 0LL);
            }
            itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
            if ( !itemIcon )
              goto LABEL_58;
            ((void (__fastcall *)(ItemIconComponent_o *, void *))itemIcon->klass[2]._1.typeMetadataHandle)(
              itemIcon,
              itemIcon->klass[2]._1.interopData);
          }
        }
        detailButton = (UnityEngine_Object_o *)this->fields.detailButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(detailButton, 0LL, 0LL) )
        {
          detailButtonLabel = (UnityEngine_Object_o *)this->fields.detailButtonLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(detailButtonLabel, 0LL, 0LL) )
          {
            itemIcon = (ItemIconComponent_o *)BankShopEntity__HasFlag(bankShop, 1LL, 0LL);
            if ( !this->fields.detailButton )
              goto LABEL_58;
            UnityEngine_GameObject__SetActive(this->fields.detailButton, (unsigned __int8)itemIcon & 1, 0LL);
            v33 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12281/*"STONE_SHOP_DETAIL_BUTTON"*/, 0LL);
            if ( !v33 )
              goto LABEL_58;
            UILabel__set_text(v33, (System_String_o *)itemIcon, 0LL);
          }
        }
        spTimeLabel = (UnityEngine_Object_o *)this->fields.spTimeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(spTimeLabel, 0LL, 0LL) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
          if ( !itemIcon )
            goto LABEL_58;
          UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( HasFlag )
          {
            itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
            if ( !itemIcon )
              goto LABEL_58;
            UILabel__set_text((UILabel_o *)itemIcon, bankShop->fields.datesDetail, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_58;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0LL);
            if ( (int)itemIcon >= 1 )
            {
              v35 = this->fields.spTimeLabel;
              if ( !v35 )
                goto LABEL_58;
              v36 = (int)itemIcon;
              mText = v35->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12286/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0LL);
              v45 = v36;
              v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v39, v40, v41);
              v43 = System_String__Format(v38, v42, 0LL);
              v44 = System_String__Concat_62450424(mText, v43, 0LL);
              UILabel__set_text(v35, v44, 0LL);
            }
          }
          itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
          if ( itemIcon )
          {
            itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)itemIcon,
                                                0LL);
            if ( itemIcon )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, HasFlag, 0LL);
              return;
            }
          }
LABEL_58:
          sub_1BCB254(itemIcon, iconId);
        }
      }
    }
  }
}


void __fastcall StonePurchaseListViewItemDraw__SetStoneInfoLabel(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        bool isSpecial,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *spPriceTextLabel; // x0
  UILabel_o *nameTextLabel; // x22
  UILabel_o *priceTextLabel; // x24
  UILabel_o *spNameTextLabel; // x25
  System_String_o *v14; // x23
  System_String_o *CountDetailText; // x22
  bool IsNullOrEmpty; // w24
  System_String_o *NameText; // x23
  System_String_o *CountText; // x2
  System_String_o *v19; // x0
  System_String_o *v20; // x22
  System_String_o *PriceDetilText; // x23
  bool v22; // w24
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int Price; // w21
  System_String_o *Price2Info; // x0
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1A720 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, item);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    byte_4B1A720 = 1;
  }
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  nameTextLabel = this->fields.nameTextLabel;
  priceTextLabel = this->fields.priceTextLabel;
  spNameTextLabel = this->fields.spNameTextLabel;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(spPriceTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !spNameTextLabel )
    goto LABEL_33;
  UILabel__set_text(spNameTextLabel, v14, 0LL);
  if ( !priceTextLabel )
    goto LABEL_33;
  UILabel__set_text(priceTextLabel, v14, 0LL);
  if ( !nameTextLabel )
    goto LABEL_33;
  UILabel__set_text(nameTextLabel, v14, 0LL);
  if ( !item )
    goto LABEL_33;
  CountDetailText = StonePurchaseListViewItem__get_CountDetailText(item, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(CountDetailText, 0LL);
  NameText = StonePurchaseListViewItem__get_NameText(item, 0LL);
  CountText = StonePurchaseListViewItem__get_CountText(item, 0LL);
  if ( IsNullOrEmpty )
    v19 = System_String__Concat_62488672(NameText, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0LL);
  else
    v19 = System_String__Format_62491716(CountDetailText, (Il2CppObject *)NameText, (Il2CppObject *)CountText, 0LL);
  v20 = v19;
  PriceDetilText = StonePurchaseListViewItem__get_PriceDetilText(item, 0LL);
  v22 = System_String__IsNullOrEmpty(PriceDetilText, 0LL);
  Price = StonePurchaseListViewItem__get_Price(item, 0LL);
  if ( !v22 )
  {
    v30 = Price;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v23, v24, v25);
    v28 = System_String__Format(PriceDetilText, v29, 0LL);
    if ( !isSpecial )
      goto LABEL_18;
    goto LABEL_22;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Price2Info = LocalizationManager__GetPrice2Info(Price, 0LL);
  if ( Price2Info )
    v28 = Price2Info;
  else
    v28 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isSpecial )
  {
LABEL_22:
    spPriceTextLabel = this->fields.spNameTextLabel;
    if ( spPriceTextLabel )
    {
      UILabel__set_text(spPriceTextLabel, v20, 0LL);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_24;
    }
LABEL_33:
    sub_1BCB254(spPriceTextLabel, item);
  }
LABEL_18:
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UILabel__set_text(spPriceTextLabel, v20, 0LL);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
LABEL_24:
  UILabel__set_text(spPriceTextLabel, v28, 0LL);
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0LL);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0LL);
  spPriceTextLabel = this->fields.spNameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0LL);
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0LL);
}