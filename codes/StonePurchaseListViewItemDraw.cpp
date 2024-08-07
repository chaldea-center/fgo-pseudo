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

  if ( (byte_49FC3AF & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, item);
    byte_49FC3AF = 1;
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
      sub_1B64C5C(v8, v7);
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
  struct ItemEntity_o *entity; // x8
  ItemIconComponent_o *itemIcon; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UnityEngine_Object_o *commonUiAtlas; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  UISprite_o *v29; // x22
  Il2CppObject *v30; // x0
  System_String_o *v31; // x23
  UnityEngine_Object_o *detailButton; // x22
  UnityEngine_Object_o *detailButtonLabel; // x22
  UILabel_o *v34; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  struct UILabel_o *v36; // x21
  int v37; // w23
  System_String_o *mText; // x22
  System_String_o *v39; // x24
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  int v46; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FC3AD & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, item);
    sub_1B64A00(&Method_DataManager_GetMaster_PaymentLimitMaster___, v7);
    sub_1B64A00(&DataManager_TypeInfo, v8);
    sub_1B64A00(&int_TypeInfo, v9);
    sub_1B64A00(&LocalizationManager_TypeInfo, v10);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_20259/*"img_list_bg{0:00}_sp"*/, v12);
    sub_1B64A00(&StringLiteral_12244/*"STONE_SHOP_LIMIT_TEMPLATE"*/, v13);
    sub_1B64A00(&StringLiteral_20255/*"img_list_bg01"*/, v14);
    sub_1B64A00(&StringLiteral_1/*""*/, v15);
    sub_1B64A00(&StringLiteral_12239/*"STONE_SHOP_DETAIL_BUTTON"*/, v16);
    byte_49FC3AD = 1;
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
            v29 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId, v26, v27, v28);
              v31 = System_String__Format((System_String_o *)StringLiteral_20259/*"img_list_bg{0:00}_sp"*/, v30, 0LL);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetDownloadCommonSprite(v29, v31, 0LL);
            }
            else
            {
              if ( !v29 )
                goto LABEL_60;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0LL);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_60;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20255/*"img_list_bg01"*/, 0LL);
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
            v34 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12239/*"STONE_SHOP_DETAIL_BUTTON"*/, 0LL);
            if ( !v34 )
              goto LABEL_60;
            UILabel__set_text(v34, (System_String_o *)itemIcon, 0LL);
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
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_60;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0LL);
            if ( (int)itemIcon >= 1 )
            {
              v36 = this->fields.spTimeLabel;
              if ( !v36 )
                goto LABEL_60;
              v37 = (int)itemIcon;
              mText = v36->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12244/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0LL);
              v46 = v37;
              v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v40, v41, v42);
              v44 = System_String__Format(v39, v43, 0LL);
              v45 = System_String__Concat_61385136(mText, v44, 0LL);
              UILabel__set_text(v36, v45, 0LL);
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
          sub_1B64C5C(itemIcon, iconId);
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
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v17; // x22
  const MethodInfo *v18; // x1
  bool IsNullOrEmpty; // w23
  struct BankShopEntity_o *v20; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v23; // x24
  System_String_o *CountText; // x2
  System_String_o *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x22
  struct BankShopEntity_o *v28; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v30; // x23
  bool v31; // w0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  struct BankShopEntity_o *v35; // x8
  int32_t googlePrice; // w21
  struct ItemEntity_o *v37; // x8
  System_String_o *Price2Info; // x0
  System_String_o *v39; // x21
  Il2CppObject *v40; // x0
  int32_t v41; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FC3AE & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, item);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_117/*" "*/, v8);
    sub_1B64A00(&StringLiteral_1/*""*/, v9);
    byte_49FC3AE = 1;
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
  if ( (byte_49FC3A9 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, item);
    byte_49FC3A9 = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v17 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  if ( (byte_49FC3A7 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18982/*"error"*/, v18);
    byte_49FC3A7 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18982/*"error"*/;
  }
  v23 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(item, v18);
  if ( IsNullOrEmpty )
    v25 = System_String__Concat_61396396(v23, (System_String_o *)StringLiteral_117/*" "*/, CountText, 0LL);
  else
    v25 = System_String__Format_61399508(v17, (Il2CppObject *)v23, (Il2CppObject *)CountText, 0LL);
  v27 = v25;
  if ( (byte_49FC3AA & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, v26);
    byte_49FC3AA = 1;
  }
  v28 = item->fields.bankShop;
  if ( v28 )
    p_priceDetail = &v28->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v30 = *p_priceDetail;
  v31 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v35 = item->fields.bankShop;
  if ( v35 )
  {
    googlePrice = v35->fields.googlePrice;
    if ( !v31 )
    {
LABEL_43:
      v41 = googlePrice;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v32, v33, v34);
      v39 = System_String__Format(v30, v40, 0LL);
      if ( isSpecial )
        goto LABEL_44;
      goto LABEL_39;
    }
  }
  else
  {
    v37 = item->fields.entity;
    if ( v37 )
    {
      googlePrice = v37->fields.sellQp;
      if ( !v31 )
        goto LABEL_43;
    }
    else
    {
      googlePrice = 0;
      if ( !v31 )
        goto LABEL_43;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Price2Info = LocalizationManager__GetPrice2Info(googlePrice, 0LL);
  if ( Price2Info )
    v39 = Price2Info;
  else
    v39 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isSpecial )
  {
LABEL_44:
    spPriceTextLabel = this->fields.spNameTextLabel;
    if ( spPriceTextLabel )
    {
      UILabel__set_text(spPriceTextLabel, v27, 0LL);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_46;
    }
LABEL_55:
    sub_1B64C5C(spPriceTextLabel, item);
  }
LABEL_39:
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UILabel__set_text(spPriceTextLabel, v27, 0LL);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
LABEL_46:
  UILabel__set_text(spPriceTextLabel, v39, 0LL);
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