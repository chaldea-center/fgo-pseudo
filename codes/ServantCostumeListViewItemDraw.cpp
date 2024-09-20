void __fastcall ServantCostumeListViewItemDraw___ctor(ServantCostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewItemDraw__SetButtonState(
        ServantCostumeListViewItemDraw_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  UITouchPress_o *touchPress; // x0
  _BOOL4 v8; // w20

  if ( (byte_4A5ECFA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5ECFA = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1B8880C(touchPress, v6);
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
        ServantFaceIconComponent__Set_38220260(
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
        ServantFaceIconComponent__Set_38133256(
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
      sub_1B8880C(servantFaceIcon, userServantEntity);
    }
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetMaskLabelText(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UILabel_o *v10; // x19
  __int64 *v11; // x8
  System_String_o *v12; // x1
  _BOOL4 isLetgo; // w20

  if ( (byte_4A5ECFC & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9291/*"NOT_SELECT_LET_GO"*/);
    sub_1B885B0(&StringLiteral_11496/*"SELECT_CANNOT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_8551/*"MATERIAL_FIND_SERVANT"*/);
    sub_1B885B0(&StringLiteral_9289/*"NOT_SELECT_COSTUME"*/);
    byte_4A5ECFC = 1;
  }
  if ( !item )
    return;
  maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(maskLabel, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v7);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLabel & 1, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v8);
  if ( ((unsigned __int8)maskLabel & 1) == 0 )
  {
    maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
    if ( maskLabel )
    {
      v12 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
      UILabel__set_text((UILabel_o *)maskLabel, v12, 0LL);
      return;
    }
LABEL_28:
    sub_1B8880C(maskLabel, item);
  }
  servantData = item->fields.servantData;
  if ( !servantData )
    goto LABEL_28;
  if ( !servantData->fields.userServantEntity )
  {
    isLetgo = item->fields.isLetgo;
    v10 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLetgo )
      v11 = &StringLiteral_9291/*"NOT_SELECT_LET_GO"*/;
    else
      v11 = &StringLiteral_8551/*"MATERIAL_FIND_SERVANT"*/;
LABEL_25:
    maskLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v11, 0LL);
    if ( v10 )
    {
      v12 = (System_String_o *)maskLabel;
      maskLabel = (UnityEngine_Component_o *)v10;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  if ( ServantCostumeListViewItem__get_IsHeroineLeave(item, (const MethodInfo *)item) )
  {
    v10 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_11496/*"SELECT_CANNOT"*/;
    goto LABEL_25;
  }
  if ( !item->fields.isReleaseItemHaving )
  {
    v10 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_9289/*"NOT_SELECT_COSTUME"*/;
    goto LABEL_25;
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetNonColorStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_o *v3; // x20
  UnityEngine_Component_o *nonColorStatusLabel; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x22
  System_String_o *v9; // x1
  struct UILabel_o *v10; // x19

  v3 = item;
  if ( (byte_4A5ECFE & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9287/*"NOT_RELEASE_COSTUME"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ECFE = 1;
  }
  if ( v3 )
  {
    nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
    if ( !nonColorStatusLabel )
      goto LABEL_29;
    nonColorStatusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nonColorStatusLabel, 0LL);
    v7 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    if ( v3->fields.isReleaseItemHaving )
      v8 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    else
      v8 = 0LL;
    if ( v3->fields.isReleaseItemHaving
      && (nonColorStatusLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(v3, v6),
          ((unsigned __int8)nonColorStatusLabel & 1) == 0) )
    {
      if ( v3->fields.isClearAllCond )
        item = 0LL;
      else
        item = (ServantCostumeListViewItem_o *)!v3->fields.isHavingAllReleasedCostume;
      v7 = v8;
      if ( !v8 )
        goto LABEL_29;
    }
    else
    {
      item = 0LL;
      if ( !v7 )
        goto LABEL_29;
    }
    UnityEngine_GameObject__SetActive(v7, (bool)item, 0LL);
    if ( !v3->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(v3, (const MethodInfo *)item)
      || v3->fields.isClearAllCond
      || v3->fields.isHavingAllReleasedCostume
      || v3->fields.isOpenEventCostume )
    {
      nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
      if ( !nonColorStatusLabel )
        goto LABEL_29;
      v9 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_24;
    }
    v10 = this->fields.nonColorStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nonColorStatusLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_9287/*"NOT_RELEASE_COSTUME"*/,
                                                       0LL);
    if ( v10 )
    {
      v9 = (System_String_o *)nonColorStatusLabel;
      nonColorStatusLabel = (UnityEngine_Component_o *)v10;
LABEL_24:
      UILabel__set_text((UILabel_o *)nonColorStatusLabel, v9, 0LL);
      return;
    }
LABEL_29:
    sub_1B8880C(nonColorStatusLabel, item);
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
    sub_1B8880C(0LL, isShow);
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
  __int64 v7; // x1

  if ( (byte_4A5ECFB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5ECFB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  UILabel_o *statusTxtLabel; // x0
  const MethodInfo *v6; // x1
  UILabel_o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 *v10; // x8
  UILabel_o *v11; // x20
  struct UILabel_o *v12; // x8
  UnityEngine_GameObject_o *v13; // x19
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4A5ECFD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_457/*"#FFFFFF"*/);
    sub_1B885B0(&StringLiteral_454/*"#FEEF99"*/);
    sub_1B885B0(&StringLiteral_456/*"#FFFF00"*/);
    sub_1B885B0(&StringLiteral_5575/*"EVENT_COMBINE_COSTUME_LF"*/);
    sub_1B885B0(&StringLiteral_3891/*"COSTUME_CAN_RELEASE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_449/*"#E1A545"*/);
    sub_1B885B0(&StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4A5ECFD = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  if ( item )
  {
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( !statusTxtLabel )
      goto LABEL_24;
    UILabel__set_text(statusTxtLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, v6) )
    {
      if ( item->fields.isOpenEventCostume )
      {
        v7 = this->fields.statusTxtLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5575/*"EVENT_COMBINE_COSTUME_LF"*/, 0LL);
        v9 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
        statusTxtLabel = (UILabel_o *)System_String__Format(v8, v9, 0LL);
        if ( !v7 )
          goto LABEL_24;
        UILabel__set_text(v7, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_449/*"#E1A545"*/, &v14, 0LL);
        v10 = &StringLiteral_454/*"#FEEF99"*/;
LABEL_16:
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)*v10, &color, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientBottom(statusTxtLabel, v14, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientTop(statusTxtLabel, color, 0LL);
        goto LABEL_19;
      }
      if ( item->fields.isClearAllCond )
      {
        v11 = this->fields.statusTxtLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        statusTxtLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3891/*"COSTUME_CAN_RELEASE"*/, 0LL);
        if ( !v11 )
          goto LABEL_24;
        UILabel__set_text(v11, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_457/*"#FFFFFF"*/, &v14, 0LL);
        v10 = &StringLiteral_456/*"#FFFF00"*/;
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
      v12 = this->fields.statusTxtLabel;
      if ( v12 )
      {
        v13 = (UnityEngine_GameObject_o *)statusTxtLabel;
        statusTxtLabel = (UILabel_o *)System_String__IsNullOrEmpty(v12->fields.mText, 0LL);
        if ( v13 )
        {
          UnityEngine_GameObject__SetActive(v13, ((unsigned __int8)statusTxtLabel & 1) == 0, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B8880C(statusTxtLabel, item);
  }
}