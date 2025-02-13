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

  if ( (byte_4BDA01B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDA01B = 1;
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
      sub_1C22094(v8, v7);
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
  struct BankShopEntity_o *bankShop; // x21
  bool HasFlag; // w20
  const MethodInfo *v9; // x3
  __int64 iconId; // x1
  struct ItemEntity_o *entity; // x8
  ItemIconComponent_o *itemIcon; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UnityEngine_Object_o *commonUiAtlas; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UISprite_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x23
  UnityEngine_Object_o *detailButton; // x22
  UnityEngine_Object_o *detailButtonLabel; // x22
  UILabel_o *v24; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  struct UILabel_o *v26; // x21
  int v27; // w23
  System_String_o *mText; // x22
  System_String_o *v29; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  int v36; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDA019 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20701/*"img_list_bg{0:00}_sp"*/);
    sub_1C21E38(&StringLiteral_12536/*"STONE_SHOP_LIMIT_TEMPLATE"*/);
    sub_1C21E38(&StringLiteral_20697/*"img_list_bg01"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_12531/*"STONE_SHOP_DETAIL_BUTTON"*/);
    byte_4BDA019 = 1;
  }
  if ( item )
  {
    if ( mode )
    {
      bankShop = item->fields.bankShop;
      if ( bankShop )
      {
        HasFlag = BankShopEntity__HasFlag(item->fields.bankShop, 2LL, 0LL);
        StonePurchaseListViewItemDraw__SetStoneInfoLabel(this, item, HasFlag, v9);
        iconId = (unsigned int)bankShop->fields.iconId;
        if ( !(_DWORD)iconId )
        {
          entity = item->fields.entity;
          if ( entity )
            iconId = (unsigned int)entity->fields.imageId;
          else
            iconId = 0LL;
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
            v19 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId, v16, v17, v18);
              v21 = System_String__Format((System_String_o *)StringLiteral_20701/*"img_list_bg{0:00}_sp"*/, v20, 0LL);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetDownloadCommonSprite(v19, v21, 0LL);
            }
            else
            {
              if ( !v19 )
                goto LABEL_60;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0LL);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_60;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20697/*"img_list_bg01"*/, 0LL);
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
            v24 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12531/*"STONE_SHOP_DETAIL_BUTTON"*/, 0LL);
            if ( !v24 )
              goto LABEL_60;
            UILabel__set_text(v24, (System_String_o *)itemIcon, 0LL);
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
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_60;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0LL);
            if ( (int)itemIcon >= 1 )
            {
              v26 = this->fields.spTimeLabel;
              if ( !v26 )
                goto LABEL_60;
              v27 = (int)itemIcon;
              mText = v26->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0LL);
              v36 = v27;
              v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v30, v31, v32);
              v34 = System_String__Format(v29, v33, 0LL);
              v35 = System_String__Concat_63115476(mText, v34, 0LL);
              UILabel__set_text(v26, v35, 0LL);
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
          sub_1C22094(itemIcon, iconId);
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
  UILabel_o *spPriceTextLabel; // x0
  UILabel_o *nameTextLabel; // x22
  UILabel_o *priceTextLabel; // x24
  UILabel_o *spNameTextLabel; // x25
  System_String_o *v11; // x23
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v14; // x22
  const MethodInfo *v15; // x1
  bool IsNullOrEmpty; // w23
  struct BankShopEntity_o *v17; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v20; // x24
  System_String_o *CountText; // x2
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  struct BankShopEntity_o *v24; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v26; // x23
  bool v27; // w0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct BankShopEntity_o *v31; // x8
  int32_t googlePrice; // w21
  struct ItemEntity_o *v33; // x8
  System_String_o *Price2Info; // x0
  System_String_o *v35; // x21
  Il2CppObject *v36; // x0
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDA01A & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDA01A = 1;
  }
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  nameTextLabel = this->fields.nameTextLabel;
  priceTextLabel = this->fields.priceTextLabel;
  spNameTextLabel = this->fields.spNameTextLabel;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(spPriceTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !spNameTextLabel )
    goto LABEL_55;
  UILabel__set_text(spNameTextLabel, v11, 0LL);
  if ( !priceTextLabel )
    goto LABEL_55;
  UILabel__set_text(priceTextLabel, v11, 0LL);
  if ( !nameTextLabel )
    goto LABEL_55;
  UILabel__set_text(nameTextLabel, v11, 0LL);
  if ( !item )
    goto LABEL_55;
  if ( (byte_4BDA015 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDA015 = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v14 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  if ( (byte_4BDA013 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19380/*"error"*/);
    byte_4BDA013 = 1;
  }
  v17 = item->fields.bankShop;
  if ( v17 )
  {
    p_name = &v17->fields.name;
  }
  else
  {
    entity = item->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19380/*"error"*/;
  }
  v20 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(item, v15);
  if ( IsNullOrEmpty )
    v22 = System_String__Concat_63126736(v20, (System_String_o *)StringLiteral_117/*" "*/, CountText, 0LL);
  else
    v22 = System_String__Format_63129848(v14, (Il2CppObject *)v20, (Il2CppObject *)CountText, 0LL);
  v23 = v22;
  if ( (byte_4BDA016 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDA016 = 1;
  }
  v24 = item->fields.bankShop;
  if ( v24 )
    p_priceDetail = &v24->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v26 = *p_priceDetail;
  v27 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v31 = item->fields.bankShop;
  if ( v31 )
  {
    googlePrice = v31->fields.googlePrice;
    if ( !v27 )
    {
LABEL_43:
      v37 = googlePrice;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v28, v29, v30);
      v35 = System_String__Format(v26, v36, 0LL);
      if ( isSpecial )
        goto LABEL_44;
      goto LABEL_39;
    }
  }
  else
  {
    v33 = item->fields.entity;
    if ( v33 )
    {
      googlePrice = v33->fields.sellQp;
      if ( !v27 )
        goto LABEL_43;
    }
    else
    {
      googlePrice = 0;
      if ( !v27 )
        goto LABEL_43;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Price2Info = LocalizationManager__GetPrice2Info(googlePrice, 0LL);
  if ( Price2Info )
    v35 = Price2Info;
  else
    v35 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isSpecial )
  {
LABEL_44:
    spPriceTextLabel = this->fields.spNameTextLabel;
    if ( spPriceTextLabel )
    {
      UILabel__set_text(spPriceTextLabel, v23, 0LL);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_46;
    }
LABEL_55:
    sub_1C22094(spPriceTextLabel, item);
  }
LABEL_39:
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UILabel__set_text(spPriceTextLabel, v23, 0LL);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
LABEL_46:
  UILabel__set_text(spPriceTextLabel, v35, 0LL);
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