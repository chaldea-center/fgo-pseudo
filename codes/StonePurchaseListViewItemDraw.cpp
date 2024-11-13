void __fastcall StonePurchaseListViewItemDraw___ctor(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StonePurchaseListViewItemDraw__Awake(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewItemDraw__SetInput(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0

  if ( (byte_4B13D65 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, isInput);
    byte_4B13D65 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      sub_1BCAA3C(v8, v7);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
      v8,
      0LL,
      0LL,
      v8->klass->vtable._15_OnPress.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewItemDraw__SetItem(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct BankShopEntity_o *bankShop; // x21
  bool HasFlag; // w20
  const MethodInfo *v29; // x3
  __int64 iconId; // x1
  struct ItemEntity_o *entity; // x8
  ItemIconComponent_o *itemIcon; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UnityEngine_Object_o *commonUiAtlas; // x22
  UISprite_o *v37; // x22
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x23
  UnityEngine_Object_o *detailButton; // x22
  __int64 v42; // x1
  UnityEngine_Object_o *detailButtonLabel; // x22
  __int64 v44; // x1
  UILabel_o *v45; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  __int64 v47; // x1
  struct UILabel_o *v48; // x21
  int v49; // w23
  System_String_o *mText; // x22
  System_String_o *v51; // x24
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  int v55; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13D63 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMaster_PaymentLimitMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_20555/*"img_list_bg{0:00}_sp"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12451/*"STONE_SHOP_LIMIT_TEMPLATE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20551/*"img_list_bg01"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12446/*"STONE_SHOP_DETAIL_BUTTON"*/, v25, v26);
    byte_4B13D63 = 1;
  }
  if ( item )
  {
    if ( mode )
    {
      bankShop = item->fields.bankShop;
      if ( bankShop )
      {
        HasFlag = BankShopEntity__HasFlag(item->fields.bankShop, 2LL, 0LL);
        StonePurchaseListViewItemDraw__SetStoneInfoLabel(this, item, HasFlag, v29);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconId);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
        {
          commonUiAtlas = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconId);
          itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(commonUiAtlas, 0LL, 0LL);
          if ( ((unsigned __int8)itemIcon & 1) != 0 )
          {
            v37 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId);
              v40 = System_String__Format((System_String_o *)StringLiteral_20555/*"img_list_bg{0:00}_sp"*/, v38, 0LL);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39);
              AtlasManager__SetDownloadCommonSprite(v37, v40, 0LL);
            }
            else
            {
              if ( !v37 )
                goto LABEL_60;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0LL);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_60;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20551/*"img_list_bg01"*/, 0LL);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconId);
        if ( UnityEngine_Object__op_Inequality(detailButton, 0LL, 0LL) )
        {
          detailButtonLabel = (UnityEngine_Object_o *)this->fields.detailButtonLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
          if ( UnityEngine_Object__op_Inequality(detailButtonLabel, 0LL, 0LL) )
          {
            itemIcon = (ItemIconComponent_o *)BankShopEntity__HasFlag(bankShop, 1LL, 0LL);
            if ( !this->fields.detailButton )
              goto LABEL_60;
            UnityEngine_GameObject__SetActive(this->fields.detailButton, (unsigned __int8)itemIcon & 1, 0LL);
            v45 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"STONE_SHOP_DETAIL_BUTTON"*/, 0LL);
            if ( !v45 )
              goto LABEL_60;
            UILabel__set_text(v45, (System_String_o *)itemIcon, 0LL);
          }
        }
        spTimeLabel = (UnityEngine_Object_o *)this->fields.spTimeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
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
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_60;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0LL);
            if ( (int)itemIcon >= 1 )
            {
              v48 = this->fields.spTimeLabel;
              if ( !v48 )
                goto LABEL_60;
              v49 = (int)itemIcon;
              mText = v48->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, iconId);
              v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0LL);
              v55 = v49;
              v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
              v53 = System_String__Format(v51, v52, 0LL);
              v54 = System_String__Concat_62401220(mText, v53, 0LL);
              UILabel__set_text(v48, v54, 0LL);
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
          sub_1BCAA3C(itemIcon, iconId);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewItemDraw__SetStoneInfoLabel(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        bool isSpecial,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *spPriceTextLabel; // x0
  UILabel_o *nameTextLabel; // x22
  UILabel_o *priceTextLabel; // x24
  UILabel_o *spNameTextLabel; // x25
  System_String_o *v17; // x23
  __int64 v18; // x2
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8
  System_String_o *v21; // x22
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  bool IsNullOrEmpty; // w23
  struct BankShopEntity_o *v25; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v28; // x24
  System_String_o *CountText; // x2
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x22
  struct BankShopEntity_o *v34; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v36; // x23
  bool v37; // w0
  __int64 v38; // x1
  struct BankShopEntity_o *v39; // x8
  int32_t googlePrice; // w21
  struct ItemEntity_o *v41; // x8
  System_String_o *Price2Info; // x0
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B13D64 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, item, isSpecial);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B13D64 = 1;
  }
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  nameTextLabel = this->fields.nameTextLabel;
  priceTextLabel = this->fields.priceTextLabel;
  spNameTextLabel = this->fields.spNameTextLabel;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(spPriceTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !spNameTextLabel )
    goto LABEL_55;
  UILabel__set_text(spNameTextLabel, v17, 0LL);
  if ( !priceTextLabel )
    goto LABEL_55;
  UILabel__set_text(priceTextLabel, v17, 0LL);
  if ( !nameTextLabel )
    goto LABEL_55;
  UILabel__set_text(nameTextLabel, v17, 0LL);
  if ( !item )
    goto LABEL_55;
  if ( (byte_4B13D5F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, item, v18);
    byte_4B13D5F = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v21 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0LL);
  if ( (byte_4B13D5D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v22, v23);
    byte_4B13D5D = 1;
  }
  v25 = item->fields.bankShop;
  if ( v25 )
  {
    p_name = &v25->fields.name;
  }
  else
  {
    entity = item->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19249/*"error"*/;
  }
  v28 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(item, v22);
  if ( IsNullOrEmpty )
    v30 = System_String__Concat_62412480(v28, (System_String_o *)StringLiteral_116/*" "*/, CountText, 0LL);
  else
    v30 = System_String__Format_62415592(v21, (Il2CppObject *)v28, (Il2CppObject *)CountText, 0LL);
  v33 = v30;
  if ( (byte_4B13D60 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B13D60 = 1;
  }
  v34 = item->fields.bankShop;
  if ( v34 )
    p_priceDetail = &v34->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v36 = *p_priceDetail;
  v37 = System_String__IsNullOrEmpty(*p_priceDetail, 0LL);
  v39 = item->fields.bankShop;
  if ( v39 )
  {
    googlePrice = v39->fields.googlePrice;
    if ( !v37 )
    {
LABEL_43:
      v45 = googlePrice;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      v43 = System_String__Format(v36, v44, 0LL);
      if ( isSpecial )
        goto LABEL_44;
      goto LABEL_39;
    }
  }
  else
  {
    v41 = item->fields.entity;
    if ( v41 )
    {
      googlePrice = v41->fields.sellQp;
      if ( !v37 )
        goto LABEL_43;
    }
    else
    {
      googlePrice = 0;
      if ( !v37 )
        goto LABEL_43;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  Price2Info = LocalizationManager__GetPrice2Info(googlePrice, 0LL);
  if ( Price2Info )
    v43 = Price2Info;
  else
    v43 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isSpecial )
  {
LABEL_44:
    spPriceTextLabel = this->fields.spNameTextLabel;
    if ( spPriceTextLabel )
    {
      UILabel__set_text(spPriceTextLabel, v33, 0LL);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_46;
    }
LABEL_55:
    sub_1BCAA3C(spPriceTextLabel, item);
  }
LABEL_39:
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UILabel__set_text(spPriceTextLabel, v33, 0LL);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
LABEL_46:
  UILabel__set_text(spPriceTextLabel, v43, 0LL);
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