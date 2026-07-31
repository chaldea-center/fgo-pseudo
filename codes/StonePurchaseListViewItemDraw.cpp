void StonePurchaseListViewItemDraw___ctor(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StonePurchaseListViewItemDraw__Awake(StonePurchaseListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewItemDraw__SetInput(
        StonePurchaseListViewItemDraw_o *this,
        StonePurchaseListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0

  if ( (byte_593652A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593652A = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
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
      sub_21FFECC(v8, v7);
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
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v16; // x2
  UnityEngine_Object_o *baseSprite; // x22
  __int64 v18; // x2
  UnityEngine_Object_o *commonUiAtlas; // x22
  UISprite_o *v20; // x22
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x23
  UnityEngine_Object_o *detailButton; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *detailButtonLabel; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *v31; // x22
  UnityEngine_Object_o *spTimeLabel; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x2
  struct UILabel_o *v36; // x21
  int v37; // w23
  System_String_o *mText; // x22
  System_String_o *v39; // x24
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  int v43; // [xsp+8h] [xbp-38h] BYREF
  int32_t boardImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5936528 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21373/*"img_list_bg{0:00}_sp"*/);
    sub_21FFC50(&StringLiteral_12888/*"STONE_SHOP_LIMIT_TEMPLATE"*/);
    sub_21FFC50(&StringLiteral_21368/*"img_list_bg01"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_12883/*"STONE_SHOP_DETAIL_BUTTON"*/);
    byte_5936528 = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconId, v16);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
        {
          commonUiAtlas = (UnityEngine_Object_o *)this->fields.commonUiAtlas;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconId, v18);
          itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(commonUiAtlas, 0, 0);
          if ( ((unsigned __int8)itemIcon & 1) != 0 )
          {
            v20 = this->fields.baseSprite;
            if ( bankShop->fields.boardImageId )
            {
              boardImageId = bankShop->fields.boardImageId;
              v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &boardImageId);
              v24 = System_String__Format((System_String_o *)StringLiteral_21373/*"img_list_bg{0:00}_sp"*/, v21, 0);
              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22, v23);
              AtlasManager__SetDownloadCommonSprite(v20, v24, 0);
            }
            else
            {
              if ( !v20 )
                goto LABEL_60;
              UISprite__set_atlas(this->fields.baseSprite, this->fields.commonUiAtlas, 0);
              itemIcon = (ItemIconComponent_o *)this->fields.baseSprite;
              if ( !itemIcon )
                goto LABEL_60;
              UISprite__set_spriteName((UISprite_o *)itemIcon, (System_String_o *)StringLiteral_21368/*"img_list_bg01"*/, 0);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconId, v18);
        if ( UnityEngine_Object__op_Inequality(detailButton, 0, 0) )
        {
          detailButtonLabel = (UnityEngine_Object_o *)this->fields.detailButtonLabel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
          if ( UnityEngine_Object__op_Inequality(detailButtonLabel, 0, 0) )
          {
            itemIcon = (ItemIconComponent_o *)BankShopEntity__HasFlag(bankShop, 1, 0);
            if ( !this->fields.detailButton )
              goto LABEL_60;
            UnityEngine_GameObject__SetActive(this->fields.detailButton, (unsigned __int8)itemIcon & 1, 0);
            v31 = this->fields.detailButtonLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
            itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12883/*"STONE_SHOP_DETAIL_BUTTON"*/, 0);
            if ( !v31 )
              goto LABEL_60;
            UILabel__set_text(v31, (System_String_o *)itemIcon, 0);
          }
        }
        spTimeLabel = (UnityEngine_Object_o *)this->fields.spTimeLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
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
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
            itemIcon = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
            if ( !itemIcon )
              goto LABEL_60;
            itemIcon = (ItemIconComponent_o *)PaymentLimitMaster__GetBuyableCount(
                                                (PaymentLimitMaster_o *)itemIcon,
                                                bankShop->fields.paymentLimitId,
                                                0);
            if ( (int)itemIcon >= 1 )
            {
              v36 = this->fields.spTimeLabel;
              if ( !v36 )
                goto LABEL_60;
              v37 = (int)itemIcon;
              mText = v36->fields.mText;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, iconId, v35);
              v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12888/*"STONE_SHOP_LIMIT_TEMPLATE"*/, 0);
              v43 = v37;
              v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v43);
              v41 = System_String__Format(v39, v40, 0);
              v42 = System_String__Concat_75438412(mText, v41, 0);
              UILabel__set_text(v36, v42, 0);
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
          sub_21FFECC(itemIcon, iconId);
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
  struct BankShopEntity_o *v16; // x8
  System_String_o **p_name; // x8
  struct BankShopEntity_o *v18; // x8
  Il2CppObject **v19; // x8
  struct ItemEntity_o *entity; // x8
  System_String_o *v21; // x22
  System_String_o *CountText; // x0
  System_String_o *v23; // x0
  struct ItemEntity_o *v24; // x8
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x22
  struct BankShopEntity_o *v28; // x8
  System_String_o **p_priceDetail; // x8
  System_String_o *v30; // x23
  bool IsNullOrEmpty; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  _DWORD *v34; // x8
  int32_t sellQp; // w21
  struct ItemEntity_o *v36; // x8
  Il2CppObject *v37; // x0
  System_String_o *v38; // x21
  System_String_o *Price2Info; // x0
  int v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5936529 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936529 = 1;
  }
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_66;
  nameTextLabel = this->fields.nameTextLabel;
  priceTextLabel = this->fields.priceTextLabel;
  spNameTextLabel = this->fields.spNameTextLabel;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(spPriceTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !spNameTextLabel )
    goto LABEL_66;
  UILabel__set_text(spNameTextLabel, v11, 0);
  if ( !priceTextLabel )
    goto LABEL_66;
  UILabel__set_text(priceTextLabel, v11, 0);
  if ( !nameTextLabel )
    goto LABEL_66;
  UILabel__set_text(nameTextLabel, v11, 0);
  if ( !item )
    goto LABEL_66;
  if ( (byte_5936526 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936526 = 1;
  }
  bankShop = item->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v14 = *p_numDetail;
  if ( System_String__IsNullOrEmpty(*p_numDetail, 0) )
  {
    if ( (byte_5936524 & 1) == 0 )
    {
      sub_21FFC50(&StringLiteral_19915/*"error"*/);
      byte_5936524 = 1;
    }
    v16 = item->fields.bankShop;
    if ( v16 )
    {
      p_name = &v16->fields.name;
    }
    else
    {
      entity = item->fields.entity;
      if ( entity )
        p_name = &entity->fields.name;
      else
        p_name = (System_String_o **)&StringLiteral_19915/*"error"*/;
    }
    v21 = *p_name;
    CountText = StonePurchaseListViewItem__get_CountText(item, v15);
    v23 = System_String__Concat_75481624(v21, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
  }
  else
  {
    if ( (byte_5936524 & 1) == 0 )
    {
      sub_21FFC50(&StringLiteral_19915/*"error"*/);
      byte_5936524 = 1;
    }
    v18 = item->fields.bankShop;
    if ( v18 )
    {
      v19 = (Il2CppObject **)&v18->fields.name;
    }
    else
    {
      v24 = item->fields.entity;
      if ( v24 )
        v19 = (Il2CppObject **)&v24->fields.name;
      else
        v19 = (Il2CppObject **)&StringLiteral_19915/*"error"*/;
    }
    v25 = *v19;
    v26 = (Il2CppObject *)StonePurchaseListViewItem__get_CountText(item, v15);
    v23 = System_String__Format_75484576(v14, v25, v26, 0);
  }
  v27 = v23;
  if ( (byte_5936527 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936527 = 1;
  }
  v28 = item->fields.bankShop;
  if ( v28 )
    p_priceDetail = &v28->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  v30 = *p_priceDetail;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*p_priceDetail, 0);
  v34 = item->fields.bankShop;
  if ( IsNullOrEmpty )
  {
    if ( v34 )
    {
      sellQp = v34[14];
    }
    else
    {
      v36 = item->fields.entity;
      if ( v36 )
        sellQp = v36->fields.sellQp;
      else
        sellQp = 0;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
    Price2Info = LocalizationManager__GetPrice2Info(sellQp, 0);
    if ( Price2Info )
      v38 = Price2Info;
    else
      v38 = (System_String_o *)StringLiteral_1/*""*/;
    if ( isSpecial )
      goto LABEL_55;
  }
  else
  {
    if ( v34 )
    {
      LODWORD(v34) = v34[14];
    }
    else
    {
      v34 = item->fields.entity;
      if ( v34 )
        LODWORD(v34) = v34[17];
    }
    v40 = (int)v34;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v40);
    v38 = System_String__Format(v30, v37, 0);
    if ( isSpecial )
    {
LABEL_55:
      spPriceTextLabel = this->fields.spNameTextLabel;
      if ( spPriceTextLabel )
      {
        UILabel__set_text(spPriceTextLabel, v27, 0);
        spPriceTextLabel = this->fields.spPriceTextLabel;
        if ( spPriceTextLabel )
          goto LABEL_57;
      }
LABEL_66:
      sub_21FFECC(spPriceTextLabel, item);
    }
  }
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_66;
  UILabel__set_text(spPriceTextLabel, v27, 0);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_66;
LABEL_57:
  UILabel__set_text(spPriceTextLabel, v38, 0);
  spPriceTextLabel = this->fields.nameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_66;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0);
  spPriceTextLabel = this->fields.priceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_66;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, !isSpecial, 0);
  spPriceTextLabel = this->fields.spNameTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_66;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0);
  spPriceTextLabel = this->fields.spPriceTextLabel;
  if ( !spPriceTextLabel )
    goto LABEL_66;
  spPriceTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spPriceTextLabel, 0);
  if ( !spPriceTextLabel )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spPriceTextLabel, isSpecial, 0);
}