void __fastcall ServantCostumeListViewItemDraw___ctor(ServantCostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewItemDraw__SetButtonState(
        ServantCostumeListViewItemDraw_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  UITouchPress_o *touchPress; // x0
  _BOOL4 v8; // w20

  if ( (byte_4B19E66 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isEnabled, method);
    byte_4B19E66 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnabled);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    touchPress = (UITouchPress_o *)this->fields.baseButton;
    if ( !touchPress
      || (v8 = isEnabled,
          ((void (__fastcall *)(UITouchPress_o *, _BOOL4, void *))touchPress->klass[1]._1.namespaze)(
            touchPress,
            v8,
            touchPress->klass[1]._1.byval_arg.data),
          (touchPress = this->fields.touchPress) == 0LL)
      || (UITouchPress__set_IsEnabled(touchPress, v8, 0LL),
          (touchPress = (UITouchPress_o *)this->fields.baseButton) == 0LL) )
    {
      sub_1BCAA3C(touchPress, v6);
    }
    ((void (__fastcall *)(UITouchPress_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))touchPress->klass[1]._1.implementedInterfaces)(
      touchPress,
      0LL,
      1LL,
      touchPress->klass[1]._1.interfaceOffsets);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetInput(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( item )
  {
    ServantCostumeListViewItemDraw__SetButtonState(this, 1, method);
    ServantCostumeListViewItemDraw__SetMaskLabelText(this, item, v5);
    ServantCostumeListViewItemDraw__SetStatusLabel(this, item, v6);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetItem(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UserServantEntity_o *userServantEntity; // x1
  struct ServantCostumeItemInfo_o *servantData; // x8
  const MethodInfo *v10; // x2
  ServantCostumeListViewItemDraw_o *v11; // x0
  const MethodInfo *v12; // x3
  ServantCostumeListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  UISprite_o *maskSprite; // x21
  const MethodInfo *v16; // x1
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( item )
  {
    ServantCostumeListViewItemDraw__SetSpriteActive(this, this->fields.removeImg, item->fields.isBaseSvt, method);
    if ( mode )
    {
      servantData = item->fields.servantData;
      if ( !servantData )
        goto LABEL_12;
      userServantEntity = servantData->fields.userServantEntity;
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( userServantEntity )
      {
        if ( !servantFaceIcon )
          goto LABEL_12;
        ServantFaceIconComponent__Set_38931252(
          servantFaceIcon,
          userServantEntity,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
      }
      else
      {
        if ( !servantFaceIcon )
          goto LABEL_12;
        ServantFaceIconComponent__Set_38935648(
          servantFaceIcon,
          servantData->fields.notHaveServantEntity,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0,
          0,
          0LL);
      }
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.info2IconLabel;
      if ( servantFaceIcon )
      {
        UIIconLabel__Set((UIIconLabel_o *)servantFaceIcon, item->fields.iconLabelInfo2, 0LL);
        ServantCostumeListViewItemDraw__SetButtonState(this, 1, v10);
        ServantCostumeListViewItemDraw__SetSpriteActive(v11, this->fields.lockImg, item->fields.isLock, v12);
        ServantCostumeListViewItemDraw__SetSpriteActive(v13, this->fields.choiceImg, item->fields.isChoice, v14);
        maskSprite = this->fields.maskSprite;
        CanNotSelect = ServantCostumeListViewItem__get_IsCanNotSelect(item, v16);
        ServantCostumeListViewItemDraw__SetSpriteActive(
          (ServantCostumeListViewItemDraw_o *)CanNotSelect,
          maskSprite,
          CanNotSelect,
          v18);
        ServantCostumeListViewItemDraw__SetPartyIcon(this, item->fields.isParty, v19);
        ServantCostumeListViewItemDraw__SetMaskLabelText(this, item, v20);
        ServantCostumeListViewItemDraw__SetStatusLabel(this, item, v21);
        ServantCostumeListViewItemDraw__SetNonColorStatusLabel(this, item, v22);
        return;
      }
LABEL_12:
      sub_1BCAA3C(servantFaceIcon, userServantEntity);
    }
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetMaskLabelText(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Component_o *maskLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  struct ServantCostumeItemInfo_o *servantData; // x8
  __int64 v20; // x1
  struct UILabel_o *v21; // x19
  __int64 *v22; // x8
  System_String_o *v23; // x1
  _BOOL4 isLetgo; // w20

  if ( (byte_4B19E68 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_9423/*"NOT_SELECT_LET_GO"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_8677/*"MATERIAL_FIND_SERVANT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9421/*"NOT_SELECT_COSTUME"*/, v13, v14);
    byte_4B19E68 = 1;
  }
  if ( !item )
    return;
  maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(maskLabel, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v17);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLabel & 1, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v18);
  if ( ((unsigned __int8)maskLabel & 1) == 0 )
  {
    maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
    if ( maskLabel )
    {
      v23 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
      UILabel__set_text((UILabel_o *)maskLabel, v23, 0LL);
      return;
    }
LABEL_28:
    sub_1BCAA3C(maskLabel, item);
  }
  servantData = item->fields.servantData;
  if ( !servantData )
    goto LABEL_28;
  if ( !servantData->fields.userServantEntity )
  {
    isLetgo = item->fields.isLetgo;
    v21 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    if ( isLetgo )
      v22 = &StringLiteral_9423/*"NOT_SELECT_LET_GO"*/;
    else
      v22 = &StringLiteral_8677/*"MATERIAL_FIND_SERVANT"*/;
LABEL_25:
    maskLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v22, 0LL);
    if ( v21 )
    {
      v23 = (System_String_o *)maskLabel;
      maskLabel = (UnityEngine_Component_o *)v21;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  if ( ServantCostumeListViewItem__get_IsHeroineLeave(item, (const MethodInfo *)item) )
  {
    v21 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v22 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    goto LABEL_25;
  }
  if ( !item->fields.isReleaseItemHaving )
  {
    v21 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v22 = &StringLiteral_9421/*"NOT_SELECT_COSTUME"*/;
    goto LABEL_25;
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetNonColorStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *nonColorStatusLabel; // x0
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_GameObject_o *v12; // x22
  System_String_o *v13; // x1
  struct UILabel_o *v14; // x19

  v3 = item;
  if ( (byte_4B19E6A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_9419/*"NOT_RELEASE_COSTUME"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B19E6A = 1;
  }
  if ( v3 )
  {
    nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
    if ( !nonColorStatusLabel )
      goto LABEL_29;
    nonColorStatusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nonColorStatusLabel, 0LL);
    v11 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    if ( v3->fields.isReleaseItemHaving )
      v12 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    else
      v12 = 0LL;
    if ( v3->fields.isReleaseItemHaving
      && (nonColorStatusLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(v3, v10),
          ((unsigned __int8)nonColorStatusLabel & 1) == 0) )
    {
      if ( v3->fields.isClearAllCond )
        item = 0LL;
      else
        item = (ServantCostumeListViewItem_o *)!v3->fields.isHavingAllReleasedCostume;
      v11 = v12;
      if ( !v12 )
        goto LABEL_29;
    }
    else
    {
      item = 0LL;
      if ( !v11 )
        goto LABEL_29;
    }
    UnityEngine_GameObject__SetActive(v11, (bool)item, 0LL);
    if ( !v3->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(v3, (const MethodInfo *)item)
      || v3->fields.isClearAllCond
      || v3->fields.isHavingAllReleasedCostume
      || v3->fields.isOpenEventCostume )
    {
      nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
      if ( !nonColorStatusLabel )
        goto LABEL_29;
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_24;
    }
    v14 = this->fields.nonColorStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    nonColorStatusLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_9419/*"NOT_RELEASE_COSTUME"*/,
                                                       0LL);
    if ( v14 )
    {
      v13 = (System_String_o *)nonColorStatusLabel;
      nonColorStatusLabel = (UnityEngine_Component_o *)v14;
LABEL_24:
      UILabel__set_text((UILabel_o *)nonColorStatusLabel, v13, 0LL);
      return;
    }
LABEL_29:
    sub_1BCAA3C(nonColorStatusLabel, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewItemDraw__SetPartyIcon(
        ServantCostumeListViewItemDraw_o *this,
        bool isShow,
        const MethodInfo *method)
{
  FlashingIconComponent_o *partyIcon; // x0

  partyIcon = this->fields.partyIcon;
  if ( !partyIcon )
    sub_1BCAA3C(0LL, isShow);
  if ( isShow )
    FlashingIconComponent__Set(partyIcon, 0LL);
  else
    FlashingIconComponent__Clear(partyIcon, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewItemDraw__SetSpriteActive(
        ServantCostumeListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B19E67 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, isActive);
    byte_4B19E67 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  UILabel_o *statusTxtLabel; // x0
  const MethodInfo *v22; // x1
  UILabel_o *v23; // x20
  System_String_o *v24; // x21
  Il2CppObject *v25; // x0
  __int64 *v26; // x8
  UILabel_o *v27; // x20
  struct UILabel_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x19
  UnityEngine_Color_o v30; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4B19E69 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_452/*"#FFFFFF"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_449/*"#FEEF99"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_451/*"#FFFF00"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_5652/*"EVENT_COMBINE_COSTUME_LF"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3924/*"COSTUME_CAN_RELEASE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_444/*"#E1A545"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, v19, v20);
    byte_4B19E69 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v30.fields.r = 0LL;
  *(_QWORD *)&v30.fields.b = 0LL;
  if ( item )
  {
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( !statusTxtLabel )
      goto LABEL_24;
    UILabel__set_text(statusTxtLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, v22) )
    {
      if ( item->fields.isOpenEventCostume )
      {
        v23 = this->fields.statusTxtLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_LF"*/, 0LL);
        v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
        statusTxtLabel = (UILabel_o *)System_String__Format(v24, v25, 0LL);
        if ( !v23 )
          goto LABEL_24;
        UILabel__set_text(v23, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_444/*"#E1A545"*/, &v30, 0LL);
        v26 = &StringLiteral_449/*"#FEEF99"*/;
LABEL_16:
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)*v26, &color, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientBottom(statusTxtLabel, v30, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientTop(statusTxtLabel, color, 0LL);
        goto LABEL_19;
      }
      if ( item->fields.isClearAllCond )
      {
        v27 = this->fields.statusTxtLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        statusTxtLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3924/*"COSTUME_CAN_RELEASE"*/, 0LL);
        if ( !v27 )
          goto LABEL_24;
        UILabel__set_text(v27, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_452/*"#FFFFFF"*/, &v30, 0LL);
        v26 = &StringLiteral_451/*"#FFFF00"*/;
        goto LABEL_16;
      }
    }
LABEL_19:
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( statusTxtLabel )
    {
      statusTxtLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)statusTxtLabel,
                                      0LL);
      v28 = this->fields.statusTxtLabel;
      if ( v28 )
      {
        v29 = (UnityEngine_GameObject_o *)statusTxtLabel;
        statusTxtLabel = (UILabel_o *)System_String__IsNullOrEmpty(v28->fields.mText, 0LL);
        if ( v29 )
        {
          UnityEngine_GameObject__SetActive(v29, ((unsigned __int8)statusTxtLabel & 1) == 0, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(statusTxtLabel, item);
  }
}