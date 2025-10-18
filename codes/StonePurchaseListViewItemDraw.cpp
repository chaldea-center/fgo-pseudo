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
  struct UICommonButton_o *v7; // x0

  if ( (byte_4C40E75 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40E75 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    v7 = this->fields.baseButton;
    if ( !v7
      || (((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))v7->klass->vtable._5_set_isEnabled.methodPtr)(
            v7,
            isInput,
            v7->klass->vtable._5_set_isEnabled.method),
          (v7 = this->fields.baseButton) == 0) )
    {
      sub_1C372B4(v7);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, const MethodInfo *))v7->klass->vtable._14_SetState.methodPtr)(
      v7,
      0,
      0,
      v7->klass->vtable._14_SetState.method);
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
  int32_t iconId; // w1
  ItemIconComponent_o *itemIcon; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *baseSprite; // x22
  UnityEngine_Object_o *commonUiAtlas; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  UISprite_o *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x23
  UnityEngine_Object_o *detailButton; // x22
  UnityEngine_Object_o *detailButtonLabel; // x22
  UILabel_o *v26; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  struct UILabel_o *v28; // x21
  int v29; // w23
  System_String_o *mText; // x22
  System_String_o *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  int v41; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C40E73 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20432/*"img_list_bg{0:00}_sp"*/);
    sub_1C37058(&StringLiteral_12390/*"STONE_SHOP_LIMIT_TEMPLATE"*/);
    sub_1C37058(&StringLiteral_20427/*"img_list_bg01"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_12385/*"STONE_SHOP_DETAIL_BUTTON"*/);
    byte_4C40E73 = 1;
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
        iconId = bankShop->fields.iconId;
        if ( !iconId )
          iconId = StonePurchaseListViewItem__get_ImageId(item, 0);
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
            v21 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boardImageId, v15, v16, v17, v18, v19, v20);
              v23 = System_String__Format((System_String_o *)StringLiteral_20432/*"img_list_bg{0:00}_sp"*/, v22, 0);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetDownloadCommonSprite(v21, v23, 0);
            }
            else
            {
              if ( !v21 )
                goto LABEL_58;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_58;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_20427/*"img_list_bg01"*/, 0);
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
            v26 = this->fields.detailButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12385/*"STONE_SHOP_DETAIL_BUTTON"*/, 0);
            if ( !v26 )
              goto LABEL_58;
            UILabel__set_text(v26, (System_String_o *)itemIcon, 0);
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
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_58;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0);
            if ( (int)itemIcon >= 1 )
            {
              v28 = this->fields.spTimeLabel;
              if ( !v28 )
                goto LABEL_58;
              v29 = (int)itemIcon;
              mText = v28->fields.mText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12390/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0);
              v41 = v29;
              v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v32, v33, v34, v35, v36, v37);
              v39 = System_String__Format(v31, v38, 0);
              v40 = System_String__Concat_63561656(mText, v39, 0);
              UILabel__set_text(v28, v40, 0);
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
          sub_1C372B4(itemIcon);
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
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  int32_t Price; // w21
  System_String_o *Price2Info; // x0
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C40E74 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40E74 = 1;
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
    v16 = System_String__Concat_63599904(NameText, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
  else
    v16 = System_String__Format_63602948(CountDetailText, (Il2CppObject *)NameText, (Il2CppObject *)CountText, 0);
  v17 = v16;
  PriceDetilText = StonePurchaseListViewItem__get_PriceDetilText(item, 0);
  v19 = System_String__IsNullOrEmpty(PriceDetilText, 0);
  Price = StonePurchaseListViewItem__get_Price(item, 0);
  if ( !v19 )
  {
    v30 = Price;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v20, v21, v22, v23, v24, v25);
    v28 = System_String__Format(PriceDetilText, v29, 0);
    if ( !isSpecial )
      goto LABEL_18;
    goto LABEL_22;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Price2Info = LocalizationManager__GetPrice2Info(Price, 0);
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
      UILabel__set_text(spPriceTextLabel, v17, 0);
      spPriceTextLabel = this->fields.spPriceTextLabel;
      if ( spPriceTextLabel )
        goto LABEL_24;
    }
LABEL_33:
    sub_1C372B4(spPriceTextLabel);
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
  UILabel__set_text(spPriceTextLabel, v28, 0);
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