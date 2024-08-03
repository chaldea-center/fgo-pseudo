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
  struct UICommonButton_o *v7; // x0

  if ( (byte_49F9C9A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_49F9C9A = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1B64324(v7);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct BankShopEntity_o *bankShop; // x21
  bool HasFlag; // w20
  const MethodInfo *v19; // x3
  int32_t iconId; // w1
  struct ItemEntity_o *entity; // x8
  ItemIconComponent_o *itemIcon; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UnityEngine_Object_o *commonUiAtlas; // x22
  UISprite_o *v26; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x23
  UnityEngine_Object_o *detailButton; // x22
  UnityEngine_Object_o *detailButtonLabel; // x22
  UILabel_o *v31; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  struct UILabel_o *v33; // x21
  int v34; // w23
  System_String_o *mText; // x22
  System_String_o *v36; // x24
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  int v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9C98 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMaster_PaymentLimitMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_20256/*"img_list_bg{0:00}_sp"*/, v12);
    sub_1B640C8(&StringLiteral_12240/*"STONE_SHOP_LIMIT_TEMPLATE"*/, v13);
    sub_1B640C8(&StringLiteral_20252/*"img_list_bg01"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    sub_1B640C8(&StringLiteral_12235/*"STONE_SHOP_DETAIL_BUTTON"*/, v16);
    byte_49F9C98 = 1;
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
        iconId = bankShop->fields.iconId;
        if ( !iconId )
        {
          entity = item->fields.entity;
          if ( entity )
            iconId = entity->fields.imageId;
          else
            iconId = 0;
        }
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_60;
        ItemIconComponent__SetItemImage(itemIcon, iconId, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.baseButton;
          if ( !itemIcon )
            goto LABEL_60;
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
            v26 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId);
              v28 = System_String__Format((System_String_o *)StringLiteral_20256/*"img_list_bg{0:00}_sp"*/, v27, 0LL);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetDownloadCommonSprite(v26, v28, 0LL);
            }
            else
            {
              if ( !v26 )
                goto LABEL_60;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0LL);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_60;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20252/*"img_list_bg01"*/, 0LL);
            }
            itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
            if ( !itemIcon )
              goto LABEL_60;
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
              goto LABEL_60;
            UnityEngine_GameObject__SetActive(this->fields.detailButton, (unsigned __int8)itemIcon & 1, 0LL);
            v31 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12235/*"STONE_SHOP_DETAIL_BUTTON"*/, 0LL);
            if ( !v31 )
              goto LABEL_60;
            UILabel__set_text(v31, (System_String_o *)itemIcon, 0LL);
          }
        }
        spTimeLabel = (UnityEngine_Object_o *)this->fields.spTimeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(spTimeLabel, 0LL, 0LL) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
          if ( !itemIcon )
            goto LABEL_60;
          UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( HasFlag )
          {
            itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
            if ( !itemIcon )
              goto LABEL_60;
            UILabel__set_text((UILabel_o *)itemIcon, bankShop->fields.datesDetail, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_60;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0LL);
            if ( (int)itemIcon >= 1 )
            {
              v33 = this->fields.spTimeLabel;
              if ( !v33 )
                goto LABEL_60;
              v34 = (int)itemIcon;
              mText = v33->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12240/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0LL);
              v40 = v34;
              v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
              v38 = System_String__Format(v36, v37, 0LL);
              v39 = System_String__Concat_61375396(mText, v38, 0LL);
              UILabel__set_text(v33, v39, 0LL);
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
LABEL_60:
          sub_1B64324(itemIcon);
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
  __int64 v15; // x1
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v18; // x22
  const MethodInfo *v19; // x1
  bool IsNullOrEmpty; // w23
  struct BankShopEntity_o *v21; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v24; // x24
  System_String_o *CountText; // x2
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x22
  struct BankShopEntity_o *v29; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v31; // x23
  bool v32; // w0
  struct BankShopEntity_o *v33; // x8
  int32_t googlePrice; // w21
  struct ItemEntity_o *v35; // x8
  System_String_o *Price2Info; // x0
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F9C99 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_117/*" "*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49F9C99 = 1;
  }
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  nameTextLabel = this->fields.nameTextLabel;
  priceTextLabel = this->fields.priceTextLabel;
  spNameTextLabel = this->fields.spNameTextLabel;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(spPriceTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !spNameTextLabel )
    goto LABEL_55;
  UILabel__set_text(spNameTextLabel, v14, 0LL);
  if ( !priceTextLabel )
    goto LABEL_55;
  UILabel__set_text(priceTextLabel, v14, 0LL);
  if ( !nameTextLabel )
    goto LABEL_55;
  UILabel__set_text(nameTextLabel, v14, 0LL);
  if ( !item )
    goto LABEL_55;
  if ( (byte_49F9C94 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49F9C94 = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v18 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  if ( (byte_49F9C92 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18979/*"error"*/, v19);
    byte_49F9C92 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18979/*"error"*/;
  }
  v24 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(item, v19);
  if ( IsNullOrEmpty )
    v26 = System_String__Concat_61386656(v24, (System_String_o *)StringLiteral_117/*" "*/, CountText, 0LL);
  else
    v26 = System_String__Format_61389768(v18, (Il2CppObject *)v24, (Il2CppObject *)CountText, 0LL);
  v28 = v26;
  if ( (byte_49F9C95 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, v27);
    byte_49F9C95 = 1;
  }
  v29 = item->fields.bankShop;
  if ( v29 )
    p_priceDetail = &v29->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v31 = *p_priceDetail;
  v32 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v33 = item->fields.bankShop;
  if ( v33 )
  {
    googlePrice = v33->fields.googlePrice;
    if ( !v32 )
    {
LABEL_43:
      v39 = googlePrice;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      v37 = System_String__Format(v31, v38, 0LL);
      if ( isSpecial )
        goto LABEL_44;
      goto LABEL_39;
    }
  }
  else
  {
    v35 = item->fields.entity;
    if ( v35 )
    {
      googlePrice = v35->fields.sellQp;
      if ( !v32 )
        goto LABEL_43;
    }
    else
    {
      googlePrice = 0;
      if ( !v32 )
        goto LABEL_43;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Price2Info = LocalizationManager__GetPrice2Info(googlePrice, 0LL);
  if ( Price2Info )
    v37 = Price2Info;
  else
    v37 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isSpecial )
  {
LABEL_44:
    spPriceTextLabel = this->fields.spNameTextLabel;
    if ( spPriceTextLabel )
    {
      UILabel__set_text(spPriceTextLabel, v28, 0LL);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_46;
    }
LABEL_55:
    sub_1B64324(spPriceTextLabel);
  }
LABEL_39:
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UILabel__set_text(spPriceTextLabel, v28, 0LL);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
LABEL_46:
  UILabel__set_text(spPriceTextLabel, v37, 0LL);
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0LL);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0LL);
  spPriceTextLabel = this->fields.spNameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0LL);
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)spPriceTextLabel,
                                    0LL);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0LL);
}