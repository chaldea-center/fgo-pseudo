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
  UITouchPress_o *touchPress; // x0
  _BOOL4 v7; // w20

  if ( (byte_49FFE58 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isEnabled);
    byte_49FFE58 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    touchPress = (UITouchPress_o *)this->fields.baseButton;
    if ( !touchPress
      || (v7 = isEnabled,
          ((void (__fastcall *)(UITouchPress_o *, _BOOL4, void *))touchPress->klass[1]._1.namespaze)(
            touchPress,
            v7,
            touchPress->klass[1]._1.byval_arg.data),
          (touchPress = this->fields.touchPress) == 0LL)
      || (UITouchPress__set_IsEnabled(touchPress, v7, 0LL),
          (touchPress = (UITouchPress_o *)this->fields.baseButton) == 0LL) )
    {
      sub_1B64324(touchPress);
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
  struct ServantCostumeItemInfo_o *servantData; // x8
  UserServantEntity_o *userServantEntity; // x1
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
        ServantFaceIconComponent__Set_37904900(
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
        ServantFaceIconComponent__Set_37909296(
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
      sub_1B64324(servantFaceIcon);
    }
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetMaskLabelText(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *maskLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UILabel_o *v16; // x19
  __int64 *v17; // x8
  System_String_o *v18; // x1
  _BOOL4 isLetgo; // w20

  if ( (byte_49FFE5A & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&StringLiteral_9249/*"NOT_SELECT_LET_GO"*/, v5);
    sub_1B640C8(&StringLiteral_11441/*"SELECT_CANNOT"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_8511/*"MATERIAL_FIND_SERVANT"*/, v8);
    sub_1B640C8(&StringLiteral_9247/*"NOT_SELECT_COSTUME"*/, v9);
    byte_49FFE5A = 1;
  }
  if ( !item )
    return;
  maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(maskLabel, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v12);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLabel & 1, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v13);
  if ( ((unsigned __int8)maskLabel & 1) == 0 )
  {
    maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
    if ( maskLabel )
    {
      v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
      UILabel__set_text((UILabel_o *)maskLabel, v18, 0LL);
      return;
    }
LABEL_28:
    sub_1B64324(maskLabel);
  }
  servantData = item->fields.servantData;
  if ( !servantData )
    goto LABEL_28;
  if ( !servantData->fields.userServantEntity )
  {
    isLetgo = item->fields.isLetgo;
    v16 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLetgo )
      v17 = &StringLiteral_9249/*"NOT_SELECT_LET_GO"*/;
    else
      v17 = &StringLiteral_8511/*"MATERIAL_FIND_SERVANT"*/;
LABEL_25:
    maskLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
    if ( v16 )
    {
      v18 = (System_String_o *)maskLabel;
      maskLabel = (UnityEngine_Component_o *)v16;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  if ( ServantCostumeListViewItem__get_IsHeroineLeave(item, v14) )
  {
    v16 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_11441/*"SELECT_CANNOT"*/;
    goto LABEL_25;
  }
  if ( !item->fields.isReleaseItemHaving )
  {
    v16 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_9247/*"NOT_SELECT_COSTUME"*/;
    goto LABEL_25;
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetNonColorStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *nonColorStatusLabel; // x0
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x22
  bool v11; // w1
  const MethodInfo *v12; // x1
  System_String_o *v13; // x1
  struct UILabel_o *v14; // x19

  if ( (byte_49FFE5C & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&StringLiteral_9245/*"NOT_RELEASE_COSTUME"*/, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FFE5C = 1;
  }
  if ( item )
  {
    nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
    if ( !nonColorStatusLabel )
      goto LABEL_29;
    nonColorStatusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nonColorStatusLabel, 0LL);
    v9 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    if ( item->fields.isReleaseItemHaving )
      v10 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    else
      v10 = 0LL;
    if ( item->fields.isReleaseItemHaving
      && (nonColorStatusLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v8),
          ((unsigned __int8)nonColorStatusLabel & 1) == 0) )
    {
      v11 = !item->fields.isClearAllCond && !item->fields.isHavingAllReleasedCostume;
      v9 = v10;
      if ( !v10 )
        goto LABEL_29;
    }
    else
    {
      v11 = 0;
      if ( !v9 )
        goto LABEL_29;
    }
    UnityEngine_GameObject__SetActive(v9, v11, 0LL);
    if ( !item->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(item, v12)
      || item->fields.isClearAllCond
      || item->fields.isHavingAllReleasedCostume
      || item->fields.isOpenEventCostume )
    {
      nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
      if ( !nonColorStatusLabel )
        goto LABEL_29;
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_24;
    }
    v14 = this->fields.nonColorStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nonColorStatusLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_9245/*"NOT_RELEASE_COSTUME"*/,
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
    sub_1B64324(nonColorStatusLabel);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetPartyIcon(
        ServantCostumeListViewItemDraw_o *this,
        bool isShow,
        const MethodInfo *method)
{
  FlashingIconComponent_o *partyIcon; // x0

  partyIcon = this->fields.partyIcon;
  if ( !partyIcon )
    sub_1B64324(0LL);
  if ( isShow )
    FlashingIconComponent__Set(partyIcon, 0LL);
  else
    FlashingIconComponent__Clear(partyIcon, 0LL);
}


void __fastcall ServantCostumeListViewItemDraw__SetSpriteActive(
        ServantCostumeListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FFE59 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_49FFE59 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B64324(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *statusTxtLabel; // x0
  const MethodInfo *v14; // x1
  UILabel_o *v15; // x20
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  __int64 *v18; // x8
  UILabel_o *v19; // x20
  struct UILabel_o *v20; // x8
  UnityEngine_GameObject_o *v21; // x19
  UnityEngine_Color_o v22; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_49FFE5B & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&StringLiteral_458/*"#FFFFFF"*/, v5);
    sub_1B640C8(&StringLiteral_455/*"#FEEF99"*/, v6);
    sub_1B640C8(&StringLiteral_457/*"#FFFF00"*/, v7);
    sub_1B640C8(&StringLiteral_5549/*"EVENT_COMBINE_COSTUME_LF"*/, v8);
    sub_1B640C8(&StringLiteral_3868/*"COSTUME_CAN_RELEASE"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    sub_1B640C8(&StringLiteral_450/*"#E1A545"*/, v11);
    sub_1B640C8(&StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, v12);
    byte_49FFE5B = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v22.fields.r = 0LL;
  *(_QWORD *)&v22.fields.b = 0LL;
  if ( item )
  {
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( !statusTxtLabel )
      goto LABEL_24;
    UILabel__set_text(statusTxtLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, v14) )
    {
      if ( item->fields.isOpenEventCostume )
      {
        v15 = this->fields.statusTxtLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5549/*"EVENT_COMBINE_COSTUME_LF"*/, 0LL);
        v17 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
        statusTxtLabel = (UILabel_o *)System_String__Format(v16, v17, 0LL);
        if ( !v15 )
          goto LABEL_24;
        UILabel__set_text(v15, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_450/*"#E1A545"*/, &v22, 0LL);
        v18 = &StringLiteral_455/*"#FEEF99"*/;
LABEL_16:
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)*v18, &color, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientBottom(statusTxtLabel, v22, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientTop(statusTxtLabel, color, 0LL);
        goto LABEL_19;
      }
      if ( item->fields.isClearAllCond )
      {
        v19 = this->fields.statusTxtLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        statusTxtLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"COSTUME_CAN_RELEASE"*/, 0LL);
        if ( !v19 )
          goto LABEL_24;
        UILabel__set_text(v19, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_458/*"#FFFFFF"*/, &v22, 0LL);
        v18 = &StringLiteral_457/*"#FFFF00"*/;
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
      v20 = this->fields.statusTxtLabel;
      if ( v20 )
      {
        v21 = (UnityEngine_GameObject_o *)statusTxtLabel;
        statusTxtLabel = (UILabel_o *)System_String__IsNullOrEmpty(v20->fields.mText, 0LL);
        if ( v21 )
        {
          UnityEngine_GameObject__SetActive(v21, ((unsigned __int8)statusTxtLabel & 1) == 0, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B64324(statusTxtLabel);
  }
}