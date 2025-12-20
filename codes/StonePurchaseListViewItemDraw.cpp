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

  if ( (byte_4D2B033 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B033 = 1;
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
      sub_1C942F0(v8, v7);
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
  ItemIconComponent_o *itemIcon; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UnityEngine_Object_o *commonUiAtlas; // x22
  UISprite_o *v15; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x23
  UnityEngine_Object_o *detailButton; // x22
  UnityEngine_Object_o *detailButtonLabel; // x22
  UILabel_o *v20; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  struct UILabel_o *v22; // x21
  int v23; // w23
  System_String_o *mText; // x22
  System_String_o *v25; // x24
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B031 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_20605/*"img_list_bg{0:00}_sp"*/);
    sub_1C94098(&StringLiteral_12445/*"STONE_SHOP_LIMIT_TEMPLATE"*/);
    sub_1C94098(&StringLiteral_20600/*"img_list_bg01"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_12440/*"STONE_SHOP_DETAIL_BUTTON"*/);
    byte_4D2B031 = 1;
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
          iconId = (unsigned int)StonePurchaseListViewItem__get_ImageId(item, 0);
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_58;
        ItemIconComponent__SetItemImage(itemIcon, iconId, 0);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.baseButton;
          if ( !itemIcon )
            goto LABEL_58;
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
            v15 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId);
              v17 = System_String__Format((System_String_o *)StringLiteral_20605/*"img_list_bg{0:00}_sp"*/, v16, 0);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetDownloadCommonSprite(v15, v17, 0);
            }
            else
            {
              if ( !v15 )
                goto LABEL_58;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_58;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20600/*"img_list_bg01"*/, 0);
            }
            itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
            if ( !itemIcon )
              goto LABEL_58;
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
              goto LABEL_58;
            UnityEngine_GameObject__SetActive(this->fields.detailButton, (unsigned __int8)itemIcon & 1, 0);
            v20 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"STONE_SHOP_DETAIL_BUTTON"*/, 0);
            if ( !v20 )
              goto LABEL_58;
            UILabel__set_text(v20, (System_String_o *)itemIcon, 0);
          }
        }
        spTimeLabel = (UnityEngine_Object_o *)this->fields.spTimeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(spTimeLabel, 0, 0) )
        {
          itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
          if ( !itemIcon )
            goto LABEL_58;
          UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( HasFlag )
          {
            itemIcon = (ItemIconComponent_o *)this->fields.spTimeLabel;
            if ( !itemIcon )
              goto LABEL_58;
            UILabel__set_text((UILabel_o *)itemIcon, bankShop->fields.datesDetail, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_58;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0);
            if ( (int)itemIcon >= 1 )
            {
              v22 = this->fields.spTimeLabel;
              if ( !v22 )
                goto LABEL_58;
              v23 = (int)itemIcon;
              mText = v22->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12445/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0);
              v29 = v23;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
              v27 = System_String__Format(v25, v26, 0);
              v28 = System_String__Concat_64417744(mText, v27, 0);
              UILabel__set_text(v22, v28, 0);
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
LABEL_58:
          sub_1C942F0(itemIcon, iconId);
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
  System_String_o *CountDetailText; // x22
  bool IsNullOrEmpty; // w24
  System_String_o *NameText; // x23
  System_String_o *CountText; // x2
  System_String_o *v16; // x0
  System_String_o *v17; // x22
  System_String_o *PriceDetilText; // x23
  bool v19; // w24
  int32_t Price; // w21
  System_String_o *Price2Info; // x0
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B032 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B032 = 1;
  }
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  nameTextLabel = this->fields.nameTextLabel;
  priceTextLabel = this->fields.priceTextLabel;
  spNameTextLabel = this->fields.spNameTextLabel;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(spPriceTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !spNameTextLabel )
    goto LABEL_33;
  UILabel__set_text(spNameTextLabel, v11, 0);
  if ( !priceTextLabel )
    goto LABEL_33;
  UILabel__set_text(priceTextLabel, v11, 0);
  if ( !nameTextLabel )
    goto LABEL_33;
  UILabel__set_text(nameTextLabel, v11, 0);
  if ( !item )
    goto LABEL_33;
  CountDetailText = StonePurchaseListViewItem__get_CountDetailText(item, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(CountDetailText, 0);
  NameText = StonePurchaseListViewItem__get_NameText(item, 0);
  CountText = StonePurchaseListViewItem__get_CountText(item, 0);
  if ( IsNullOrEmpty )
    v16 = System_String__Concat_64456008(NameText, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
  else
    v16 = System_String__Format_64459052(CountDetailText, (Il2CppObject *)NameText, (Il2CppObject *)CountText, 0);
  v17 = v16;
  PriceDetilText = StonePurchaseListViewItem__get_PriceDetilText(item, 0);
  v19 = System_String__IsNullOrEmpty(PriceDetilText, 0);
  Price = StonePurchaseListViewItem__get_Price(item, 0);
  if ( !v19 )
  {
    v24 = Price;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v22 = System_String__Format(PriceDetilText, v23, 0);
    if ( !isSpecial )
      goto LABEL_18;
    goto LABEL_22;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Price2Info = LocalizationManager__GetPrice2Info(Price, 0);
  if ( Price2Info )
    v22 = Price2Info;
  else
    v22 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isSpecial )
  {
LABEL_22:
    spPriceTextLabel = this->fields.spNameTextLabel;
    if ( spPriceTextLabel )
    {
      UILabel__set_text(spPriceTextLabel, v17, 0);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_24;
    }
LABEL_33:
    sub_1C942F0(spPriceTextLabel, item);
  }
LABEL_18:
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UILabel__set_text(spPriceTextLabel, v17, 0);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
LABEL_24:
  UILabel__set_text(spPriceTextLabel, v22, 0);
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0);
  spPriceTextLabel = this->fields.spNameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0);
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_33;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0);
}