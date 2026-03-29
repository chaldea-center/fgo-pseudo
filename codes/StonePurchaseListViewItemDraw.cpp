void StonePurchaseListViewItemDraw___ctor(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StonePurchaseListViewItemDraw__Awake(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void StonePurchaseListViewItemDraw__SetInput(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0

  if ( (byte_4D2F122 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F122 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    v8 = this->fields.baseButton;
    if ( !v8
      || (((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))v8->klass->vtable._5_set_isEnabled.methodPtr)(
            v8,
            isInput,
            v8->klass->vtable._5_set_isEnabled.method),
          (v8 = this->fields.baseButton) == 0) )
    {
      sub_1C93D2C(v8, v7);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._14_SetState.methodPtr)(
      v8,
      0,
      0,
      v8->klass->vtable._14_SetState.method);
  }
}


void StonePurchaseListViewItemDraw__SetItem(
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
  UISprite_o *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x23
  UnityEngine_Object_o *detailButton; // x22
  UnityEngine_Object_o *detailButtonLabel; // x22
  UILabel_o *v21; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  struct UILabel_o *v23; // x21
  int v24; // w23
  System_String_o *mText; // x22
  System_String_o *v26; // x24
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  int v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F120 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20659/*"img_list_bg{0:00}_sp"*/);
    sub_1C93AD4(&StringLiteral_12485/*"STONE_SHOP_LIMIT_TEMPLATE"*/);
    sub_1C93AD4(&StringLiteral_20654/*"img_list_bg01"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_12480/*"STONE_SHOP_DETAIL_BUTTON"*/);
    byte_4D2F120 = 1;
  }
  if ( item )
  {
    if ( mode )
    {
      bankShop = item->fields.bankShop;
      if ( bankShop )
      {
        HasFlag = BankShopEntity__HasFlag(item->fields.bankShop, 2, 0);
        StonePurchaseListViewItemDraw__SetStoneInfoLabel(this, item, HasFlag, v9);
        iconId = (unsigned int)bankShop->fields.iconId;
        if ( !(_DWORD)iconId )
        {
          entity = item->fields.entity;
          if ( entity )
            iconId = (unsigned int)entity->fields.imageId;
          else
            iconId = 0;
        }
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_60;
        ItemIconComponent__SetItemImage(itemIcon, iconId, 0);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.baseButton;
          if ( !itemIcon )
            goto LABEL_60;
          ((void (__fastcall *)(ItemIconComponent_o *, _QWORD, __int64, Il2CppClass **))itemIcon->klass[1]._1.nestedTypes)(
            itemIcon,
            0,
            1,
            itemIcon->klass[1]._1.implementedInterfaces);
        }
        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
        {
          commonUiAtlas = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(commonUiAtlas, 0, 0);
          if ( ((unsigned __int8)itemIcon & 1) != 0 )
          {
            v16 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId);
              v18 = System_String__Format((System_String_o *)StringLiteral_20659/*"img_list_bg{0:00}_sp"*/, v17, 0);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetDownloadCommonSprite(v16, v18, 0);
            }
            else
            {
              if ( !v16 )
                goto LABEL_60;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_60;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20654/*"img_list_bg01"*/, 0);
            }
            itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
            if ( !itemIcon )
              goto LABEL_60;
            ((void (__fastcall *)(ItemIconComponent_o *, void *))itemIcon->klass[2]._1.parent)(
              itemIcon,
              itemIcon->klass[2]._1.generic_class);
          }
        }
        detailButton = (UnityEngine_Object_o *)this->fields.detailButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(detailButton, 0, 0) )
        {
          detailButtonLabel = (UnityEngine_Object_o *)this->fields.detailButtonLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(detailButtonLabel, 0, 0) )
          {
            itemIcon = (ItemIconComponent_o *)BankShopEntity__HasFlag(bankShop, 1, 0);
            if ( !this->fields.detailButton )
              goto LABEL_60;
            UnityEngine_GameObject__SetActive(this->fields.detailButton, (unsigned __int8)itemIcon & 1, 0);
            v21 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12480/*"STONE_SHOP_DETAIL_BUTTON"*/, 0);
            if ( !v21 )
              goto LABEL_60;
            UILabel__set_text(v21, (System_String_o *)itemIcon, 0);
          }
        }
        spTimeLabel = (UnityEngine_Object_o *)this->fields.spTimeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(spTimeLabel, 0, 0) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
          if ( !itemIcon )
            goto LABEL_60;
          UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( HasFlag )
          {
            itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
            if ( !itemIcon )
              goto LABEL_60;
            UILabel__set_text((UILabel_o *)itemIcon, bankShop->fields.datesDetail, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_60;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0);
            if ( (int)itemIcon >= 1 )
            {
              v23 = this->fields.spTimeLabel;
              if ( !v23 )
                goto LABEL_60;
              v24 = (int)itemIcon;
              mText = v23->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12485/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0);
              v30 = v24;
              v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
              v28 = System_String__Format(v26, v27, 0);
              v29 = System_String__Concat_64425724(mText, v28, 0);
              UILabel__set_text(v23, v29, 0);
            }
          }
          itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
          if ( itemIcon )
          {
            itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)itemIcon,
                                                0);
            if ( itemIcon )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, HasFlag, 0);
              return;
            }
          }
LABEL_60:
          sub_1C93D2C(itemIcon, iconId);
        }
      }
    }
  }
}


void StonePurchaseListViewItemDraw__SetStoneInfoLabel(
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
  struct BankShopEntity_o *v28; // x8
  int32_t googlePrice; // w21
  struct ItemEntity_o *v30; // x8
  System_String_o *Price2Info; // x0
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2F121 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F121 = 1;
  }
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  nameTextLabel = this->fields.nameTextLabel;
  priceTextLabel = this->fields.priceTextLabel;
  spNameTextLabel = this->fields.spNameTextLabel;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(spPriceTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !spNameTextLabel )
    goto LABEL_55;
  UILabel__set_text(spNameTextLabel, v11, 0);
  if ( !priceTextLabel )
    goto LABEL_55;
  UILabel__set_text(priceTextLabel, v11, 0);
  if ( !nameTextLabel )
    goto LABEL_55;
  UILabel__set_text(nameTextLabel, v11, 0);
  if ( !item )
    goto LABEL_55;
  if ( (byte_4D2F11E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F11E = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v14 = *p_numDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_numDetail, 0);
  if ( (byte_4D2F11C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19260/*"error"*/);
    byte_4D2F11C = 1;
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
      p_name = (System_String_o **)&StringLiteral_19260/*"error"*/;
  }
  v20 = *p_name;
  CountText = StonePurchaseListViewItem__get_CountText(item, v15);
  if ( IsNullOrEmpty )
    v22 = System_String__Concat_64463988(v20, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
  else
    v22 = System_String__Format_64467032(v14, (Il2CppObject *)v20, (Il2CppObject *)CountText, 0);
  v23 = v22;
  if ( (byte_4D2F11F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F11F = 1;
  }
  v24 = item->fields.bankShop;
  if ( v24 )
    p_priceDetail = &v24->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v26 = *p_priceDetail;
  v27 = System_String__IsNullOrEmpty(*p_priceDetail, 0);
  v28 = item->fields.bankShop;
  if ( v28 )
  {
    googlePrice = v28->fields.googlePrice;
    if ( !v27 )
    {
LABEL_43:
      v34 = googlePrice;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v32 = System_String__Format(v26, v33, 0);
      if ( isSpecial )
        goto LABEL_44;
      goto LABEL_39;
    }
  }
  else
  {
    v30 = item->fields.entity;
    if ( v30 )
    {
      googlePrice = v30->fields.sellQp;
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
  Price2Info = LocalizationManager__GetPrice2Info(googlePrice, 0);
  if ( Price2Info )
    v32 = Price2Info;
  else
    v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isSpecial )
  {
LABEL_44:
    spPriceTextLabel = this->fields.spNameTextLabel;
    if ( spPriceTextLabel )
    {
      UILabel__set_text(spPriceTextLabel, v23, 0);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_46;
    }
LABEL_55:
    sub_1C93D2C(spPriceTextLabel, item);
  }
LABEL_39:
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UILabel__set_text(spPriceTextLabel, v23, 0);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
LABEL_46:
  UILabel__set_text(spPriceTextLabel, v32, 0);
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0);
  spPriceTextLabel = this->fields.spNameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0);
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_55;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0);
}