void ServantCostumeListViewItemDraw___ctor(ServantCostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantCostumeListViewItemDraw__Awake(ServantCostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskAtlas,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeListViewItemDraw__SetButtonState(
        ServantCostumeListViewItemDraw_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  UITouchPress_o *touchPress; // x0

  if ( (byte_596A362 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A362 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnabled, method);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0, 0) )
  {
    touchPress = (UITouchPress_o *)this->fields.baseButton;
    if ( !touchPress
      || (((void (__fastcall *)(UITouchPress_o *, bool, const char *))touchPress->klass[1]._1.name)(
            touchPress,
            isEnabled,
            touchPress->klass[1]._1.namespaze),
          (touchPress = this->fields.touchPress) == 0)
      || (UITouchPress__set_IsEnabled(touchPress, isEnabled, 0),
          (touchPress = (UITouchPress_o *)this->fields.baseButton) == 0) )
    {
      sub_2213CDC(touchPress, v6);
    }
    ((void (__fastcall *)(UITouchPress_o *, _QWORD, __int64, Il2CppClass **))touchPress->klass[1]._1.nestedTypes)(
      touchPress,
      0,
      1,
      touchPress->klass[1]._1.implementedInterfaces);
  }
}


void ServantCostumeListViewItemDraw__SetInput(
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


void ServantCostumeListViewItemDraw__SetItem(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UIIconLabel_o *IsSaveTransformServant; // x0
  UserServantEntity_o *userServantEntity; // x1
  struct ServantCostumeItemInfo_o *servantData; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  ServantLeaderInfo_o *notHaveServantEntity; // x22
  IconLabelInfo_o *iconLabelInfo1; // x23
  IconLabelInfo_o *iconLabelInfo2; // x24
  const MethodInfo *v14; // x2
  ServantCostumeListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  ServantCostumeListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  UISprite_o *maskSprite; // x21
  const MethodInfo *v20; // x1
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2

  if ( item )
  {
    ServantCostumeListViewItemDraw__SetSpriteActive(this, this->fields.removeImg, item->fields.isBaseSvt, method);
    if ( mode )
    {
      servantData = item->fields.servantData;
      if ( !servantData )
        goto LABEL_14;
      userServantEntity = servantData->fields.userServantEntity;
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( userServantEntity )
      {
        if ( !servantFaceIcon )
          goto LABEL_14;
        ServantFaceIconComponent__Set_48049524(
          this->fields.servantFaceIcon,
          userServantEntity,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          1,
          0);
      }
      else
      {
        notHaveServantEntity = servantData->fields.notHaveServantEntity;
        if ( !notHaveServantEntity )
          goto LABEL_14;
        iconLabelInfo1 = item->fields.iconLabelInfo1;
        iconLabelInfo2 = item->fields.iconLabelInfo2;
        IsSaveTransformServant = (UIIconLabel_o *)ServantLeaderInfo__get_IsSaveTransformServant(
                                                    servantData->fields.notHaveServantEntity,
                                                    0);
        if ( !servantFaceIcon )
          goto LABEL_14;
        ServantFaceIconComponent__Set_48053420(
          servantFaceIcon,
          notHaveServantEntity,
          iconLabelInfo1,
          iconLabelInfo2,
          0,
          0,
          0,
          (unsigned __int8)IsSaveTransformServant & 1,
          0);
      }
      IsSaveTransformServant = this->fields.info2IconLabel;
      if ( IsSaveTransformServant )
      {
        UIIconLabel__Set(IsSaveTransformServant, item->fields.iconLabelInfo2, 0);
        IsSaveTransformServant = (UIIconLabel_o *)this->fields.servantFaceIcon;
        if ( IsSaveTransformServant )
        {
          ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
            (ServantFaceIconComponent_o *)IsSaveTransformServant,
            this->fields.maskSprite,
            this->fields.defaultMaskName,
            this->fields.defaultMaskAtlas,
            0);
          ServantCostumeListViewItemDraw__SetButtonState(this, 1, v14);
          ServantCostumeListViewItemDraw__SetSpriteActive(v15, this->fields.lockImg, item->fields.isLock, v16);
          ServantCostumeListViewItemDraw__SetSpriteActive(v17, this->fields.choiceImg, item->fields.isChoice, v18);
          maskSprite = this->fields.maskSprite;
          CanNotSelect = ServantCostumeListViewItem__get_IsCanNotSelect(item, v20);
          ServantCostumeListViewItemDraw__SetSpriteActive(
            (ServantCostumeListViewItemDraw_o *)CanNotSelect,
            maskSprite,
            CanNotSelect,
            v22);
          ServantCostumeListViewItemDraw__SetPartyIcon(this, item->fields.isParty, v23);
          ServantCostumeListViewItemDraw__SetMaskLabelText(this, item, v24);
          ServantCostumeListViewItemDraw__SetStatusLabel(this, item, v25);
          ServantCostumeListViewItemDraw__SetNonColorStatusLabel(this, item, v26);
          return;
        }
      }
LABEL_14:
      sub_2213CDC(IsSaveTransformServant, userServantEntity);
    }
  }
}


void ServantCostumeListViewItemDraw__SetMaskLabelText(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  struct ServantCostumeItemInfo_o *servantData; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  struct UILabel_o *v13; // x19
  __int64 *v14; // x8
  System_String_o *v15; // x1
  int v16; // w8

  if ( (byte_596A364 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9704/*"NOT_SELECT_LET_GO"*/);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_8942/*"MATERIAL_FIND_SERVANT"*/);
    sub_2213A60(&StringLiteral_9702/*"NOT_SELECT_COSTUME"*/);
    byte_596A364 = 1;
  }
  if ( !item )
    return;
  maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject(maskLabel, 0);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v7);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLabel & 1, 0);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v8);
  if ( ((unsigned __int8)maskLabel & 1) == 0 )
  {
    maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
    if ( maskLabel )
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_29:
      UILabel__set_text((UILabel_o *)maskLabel, v15, 0);
      return;
    }
LABEL_30:
    sub_2213CDC(maskLabel, item);
  }
  servantData = item->fields.servantData;
  if ( !servantData )
    goto LABEL_30;
  if ( !servantData->fields.userServantEntity )
  {
    v13 = this->fields.maskLabel;
    v16 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( item->fields.isLetgo )
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v9);
      v14 = &StringLiteral_9704/*"NOT_SELECT_LET_GO"*/;
    }
    else
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v9);
      v14 = &StringLiteral_8942/*"MATERIAL_FIND_SERVANT"*/;
    }
LABEL_27:
    maskLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
    if ( v13 )
    {
      v15 = (System_String_o *)maskLabel;
      maskLabel = (UnityEngine_Component_o *)v13;
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  if ( ServantCostumeListViewItem__get_IsHeroineLeave(item, (const MethodInfo *)item) )
  {
    v13 = this->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v14 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
    goto LABEL_27;
  }
  if ( !item->fields.isReleaseItemHaving )
  {
    v13 = this->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v14 = &StringLiteral_9702/*"NOT_SELECT_COSTUME"*/;
    goto LABEL_27;
  }
}


void ServantCostumeListViewItemDraw__SetNonColorStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_o *v3; // x20
  UnityEngine_Component_o *nonColorStatusLabel; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x21
  __int64 v8; // x2
  System_String_o *v9; // x1
  struct UILabel_o *v10; // x19

  v3 = item;
  if ( (byte_596A366 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9700/*"NOT_RELEASE_COSTUME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A366 = 1;
  }
  if ( v3 )
  {
    nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
    if ( !nonColorStatusLabel )
      goto LABEL_19;
    nonColorStatusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nonColorStatusLabel, 0);
    v7 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    if ( !v3->fields.isReleaseItemHaving
      || (nonColorStatusLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(v3, v6),
          ((unsigned __int8)nonColorStatusLabel & 1) != 0)
      || v3->fields.isClearAllCond )
    {
      item = 0;
      if ( !v7 )
        goto LABEL_19;
    }
    else
    {
      item = (ServantCostumeListViewItem_o *)!v3->fields.isHavingAllReleasedCostume;
      if ( !v7 )
        goto LABEL_19;
    }
    UnityEngine_GameObject__SetActive(v7, (bool)item, 0);
    if ( !v3->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(v3, (const MethodInfo *)item)
      || v3->fields.isClearAllCond
      || v3->fields.isHavingAllReleasedCostume
      || v3->fields.isOpenEventCostume )
    {
      nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
      if ( nonColorStatusLabel )
      {
        v9 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_16:
        UILabel__set_text((UILabel_o *)nonColorStatusLabel, v9, 0);
        return;
      }
    }
    else
    {
      v10 = this->fields.nonColorStatusLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
      nonColorStatusLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9700/*"NOT_RELEASE_COSTUME"*/,
                                                         0);
      if ( v10 )
      {
        v9 = (System_String_o *)nonColorStatusLabel;
        nonColorStatusLabel = (UnityEngine_Component_o *)v10;
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_2213CDC(nonColorStatusLabel, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeListViewItemDraw__SetPartyIcon(
        ServantCostumeListViewItemDraw_o *this,
        bool isShow,
        const MethodInfo *method)
{
  FlashingIconComponent_o *partyIcon; // x0

  partyIcon = this->fields.partyIcon;
  if ( isShow )
  {
    if ( partyIcon )
    {
      FlashingIconComponent__Set(partyIcon, 0);
      return;
    }
LABEL_6:
    sub_2213CDC(partyIcon, isShow);
  }
  if ( !partyIcon )
    goto LABEL_6;
  FlashingIconComponent__Clear(partyIcon, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeListViewItemDraw__SetSpriteActive(
        ServantCostumeListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596A363 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A363 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ServantCostumeListViewItemDraw__SetStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  UILabel_o *statusTxtLabel; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  UILabel_o *v8; // x20
  System_String_o *v9; // x21
  Il2CppObject *v10; // x0
  __int64 *v11; // x8
  UILabel_o *v12; // x20
  struct UILabel_o *v13; // x8
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_596A365 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_454/*"#FFFFFF"*/);
    sub_2213A60(&StringLiteral_450/*"#FEEF99"*/);
    sub_2213A60(&StringLiteral_453/*"#FFFF00"*/);
    sub_2213A60(&StringLiteral_5751/*"EVENT_COMBINE_COSTUME_LF"*/);
    sub_2213A60(&StringLiteral_3978/*"COSTUME_CAN_RELEASE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_445/*"#E1A545"*/);
    sub_2213A60(&StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_596A365 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v15.fields.r = 0;
  *(_QWORD *)&v15.fields.b = 0;
  if ( item )
  {
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( !statusTxtLabel )
      goto LABEL_24;
    UILabel__set_text(statusTxtLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, v6) )
    {
      if ( item->fields.isOpenEventCostume )
      {
        v8 = this->fields.statusTxtLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v7);
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EVENT_COMBINE_COSTUME_LF"*/, 0);
        v10 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
        statusTxtLabel = (UILabel_o *)System_String__Format(v9, v10, 0);
        if ( !v8 )
          goto LABEL_24;
        UILabel__set_text(v8, (System_String_o *)statusTxtLabel, 0);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_445/*"#E1A545"*/, &v15, 0);
        v11 = &StringLiteral_450/*"#FEEF99"*/;
LABEL_16:
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)*v11, &color, 0);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientBottom(statusTxtLabel, v15, 0);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_24;
        UILabel__set_gradientTop(statusTxtLabel, color, 0);
        goto LABEL_19;
      }
      if ( item->fields.isClearAllCond )
      {
        v12 = this->fields.statusTxtLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v7);
        statusTxtLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3978/*"COSTUME_CAN_RELEASE"*/, 0);
        if ( !v12 )
          goto LABEL_24;
        UILabel__set_text(v12, (System_String_o *)statusTxtLabel, 0);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_454/*"#FFFFFF"*/, &v15, 0);
        v11 = &StringLiteral_453/*"#FFFF00"*/;
        goto LABEL_16;
      }
    }
LABEL_19:
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( statusTxtLabel )
    {
      statusTxtLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTxtLabel, 0);
      v13 = this->fields.statusTxtLabel;
      if ( v13 )
      {
        v14 = (UnityEngine_GameObject_o *)statusTxtLabel;
        statusTxtLabel = (UILabel_o *)System_String__IsNullOrEmpty(v13->fields.mText, 0);
        if ( v14 )
        {
          UnityEngine_GameObject__SetActive(v14, ((unsigned __int8)statusTxtLabel & 1) == 0, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_2213CDC(statusTxtLabel, item);
  }
}