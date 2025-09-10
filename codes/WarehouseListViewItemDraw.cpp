void WarehouseListViewItemDraw___ctor(WarehouseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarehouseListViewItemDraw__Awake(WarehouseListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3);
  v9 = this->fields.maskSprite;
  if ( v9 )
    mSpriteName = v9->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskName, (int32_t)mSpriteName, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewItemDraw__SetDisp(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x1
  _BOOL4 IsSelect; // w0
  UnityEngine_Object_o *lockSprite; // x23
  _BOOL4 v11; // w22
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x23
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x23
  UnityEngine_Object_o *chocolateSprite; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v19; // x23
  struct UILabel_o *warningLabel; // x8
  bool IsNullOrEmpty; // w0
  bool v22; // w1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = isSelectEnable;
  if ( (byte_4C250B5 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23090/*"ribbon_noblephantasmup_01"*/);
    byte_4C250B5 = 1;
  }
  WarehouseListViewItemDraw__SetWarning(this, item, (const MethodInfo *)isSelectEnable);
  if ( !item )
    goto LABEL_65;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  v11 = IsSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_65;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isLock, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_65;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isChoice, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isChocolateSvtEquip, 0);
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_65;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v19 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                v19,
                                                (System_String_o *)StringLiteral_23090/*"ribbon_noblephantasmup_01"*/,
                                                0);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_65;
        v23.fields.x = 0.65;
        v23.fields.y = 1.0;
        v23.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v23, 0);
      }
    }
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_65;
  IsNullOrEmpty = System_String__IsNullOrEmpty(warningLabel->fields.mText, 0);
  if ( (v11 || v4) && IsNullOrEmpty && !item->fields.isFortification )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        v22 = 0;
        goto LABEL_59;
      }
    }
LABEL_65:
    sub_1C2D6EC(gameObject, v8);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_65;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_65;
  v22 = 1;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v22, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_65;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)gameObject, -1, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_65;
  DragSelectComponent__Set((DragSelectComponent_o *)gameObject, item->fields.selectNum, item->fields.dragSelectNum, 0);
}


void WarehouseListViewItemDraw__SetInput(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_4C250B4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C250B4 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    v10 = this->fields.baseButton;
    if ( !v10
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, const MethodInfo *))v10->klass->vtable._5_set_isEnabled.methodPtr)(
            v10,
            1,
            v10->klass->vtable._5_set_isEnabled.method),
          (v10 = this->fields.baseButton) == 0) )
    {
      sub_1C2D6EC(v10, v8);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v10->klass->vtable._14_SetState.methodPtr)(
      v10,
      0,
      1,
      v10->klass->vtable._14_SetState.method);
  }
  if ( item )
    WarehouseListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
}


void WarehouseListViewItemDraw__SetItem(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        const MethodInfo *method)
{
  WarehouseListViewItem_o *v7; // x19
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x22
  UnityEngine_Object_o *useSprite; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v13; // x3

  v7 = item;
  if ( (byte_4C250B2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C250B2 = 1;
  }
  if ( v7 && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_40783748(
        servantFaceIcon,
        v7->fields.userServantEntity,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        0);
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( servantFaceIcon )
      {
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          servantFaceIcon,
          this->fields.maskSprite,
          this->fields.defaultMaskName,
          this->fields.defaultMaskAtlas,
          0);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
          if ( v7->fields.isUse )
          {
            item = 0;
            if ( !servantFaceIcon )
              goto LABEL_33;
          }
          else
          {
            item = (WarehouseListViewItem_o *)(v7->fields.partyIndex >= 0);
            if ( !servantFaceIcon )
              goto LABEL_33;
          }
          FlashingIconComponent__Set_40679456((FlashingIconComponent_o *)servantFaceIcon, (bool)item, 0);
        }
        useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(useSprite, 0, 0) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
          if ( !servantFaceIcon )
            goto LABEL_33;
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0);
          if ( !servantFaceIcon )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isUse, 0);
        }
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
          if ( !servantFaceIcon )
            goto LABEL_33;
          ((void (__fastcall *)(ServantFaceIconComponent_o *, __int64, const MethodInfo *))servantFaceIcon->klass->vtable._5_UpdateAlpha.methodPtr)(
            servantFaceIcon,
            1,
            servantFaceIcon->klass->vtable._5_UpdateAlpha.method);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
          if ( !servantFaceIcon )
            goto LABEL_33;
          ((void (__fastcall *)(ServantFaceIconComponent_o *, _QWORD, __int64, void *))servantFaceIcon->klass[1]._1.fields)(
            servantFaceIcon,
            0,
            1,
            servantFaceIcon->klass[1]._1.events);
        }
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationRootObj;
        if ( servantFaceIcon )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationNameLabel;
          if ( servantFaceIcon )
          {
            UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
            servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationDetailNameLabel;
            if ( servantFaceIcon )
            {
              UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationAppointmentLabel;
              if ( servantFaceIcon )
              {
                UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
                WarehouseListViewItemDraw__SetDisp(this, v7, isSelectEnable, v13);
                return;
              }
            }
          }
        }
      }
    }
LABEL_33:
    sub_1C2D6EC(servantFaceIcon, item);
  }
}


void WarehouseListViewItemDraw__SetWarning(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *warningLabel; // x0
  System_String_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 *v8; // x8
  _BOOL4 isEventJoin; // w20
  int32_t attribute; // w8
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *v12; // x21
  UILabel_o *v13; // x20
  __int64 *v14; // x8
  UnityEngine_Object_o *v15; // x21
  UILabel_o *fortificationAppointmentLabel; // x21
  UserServantEntity_o *userServantEntity; // x0
  bool IsServantMaterialTd; // w20

  if ( (byte_4C250B3 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C2D490(&StringLiteral_11521/*"SELECT_FAVORITE"*/);
    sub_1C2D490(&StringLiteral_12508/*"SUPPORT_MEMBER"*/);
    sub_1C2D490(&StringLiteral_3695/*"COMMON_FATIGURE_RECOVERY"*/);
    sub_1C2D490(&StringLiteral_11545/*"SELECT_PUSH"*/);
    sub_1C2D490(&StringLiteral_11514/*"SELECT_CANNOT"*/);
    sub_1C2D490(&StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C2D490(&StringLiteral_11542/*"SELECT_PARTY"*/);
    sub_1C2D490(&StringLiteral_11543/*"SELECT_PARTY_EQUIP"*/);
    sub_1C2D490(&StringLiteral_12493/*"SUPPORT_EQUIP"*/);
    sub_1C2D490(&StringLiteral_7008/*"GRAND_USE_EQUIP"*/);
    sub_1C2D490(&StringLiteral_11032/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C2D490(&StringLiteral_3694/*"COMMON_EQUIP_USED"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_11544/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_1C2D490(&StringLiteral_6996/*"GRAND_MEMBER"*/);
    sub_1C2D490(&StringLiteral_11030/*"RECOMMEND_SUPPORT_EQUIP"*/);
    byte_4C250B3 = 1;
  }
  warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_105;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = UnityEngine_Component__get_gameObject(warningLabel, 0);
  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !item )
    goto LABEL_105;
  if ( item->fields.isPushMode )
  {
    if ( item->fields.isEnabled )
    {
      if ( !item->fields.isFatigueRecovery )
        goto LABEL_42;
LABEL_10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_3695/*"COMMON_FATIGURE_RECOVERY"*/;
      goto LABEL_41;
    }
    isEventJoin = item->fields.isEventJoin;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( !item->fields.isEventJoin )
        goto LABEL_40;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !isEventJoin )
      {
LABEL_40:
        v8 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
        goto LABEL_41;
      }
    }
LABEL_25:
    v8 = &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_41:
    v6 = LocalizationManager__Get((System_String_o *)*v8, 0);
    goto LABEL_42;
  }
  if ( item->fields.isUseGrandEquip )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_7008/*"GRAND_USE_EQUIP"*/;
    goto LABEL_41;
  }
  if ( item->fields.isGrandServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_6996/*"GRAND_MEMBER"*/;
    goto LABEL_41;
  }
  if ( item->fields.isPush )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11545/*"SELECT_PUSH"*/;
    goto LABEL_41;
  }
  attribute = item->fields.attribute;
  if ( attribute )
  {
    if ( attribute != 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      goto LABEL_40;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_25;
  }
  if ( item->fields.isFavorite )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11521/*"SELECT_FAVORITE"*/;
    goto LABEL_41;
  }
  if ( item->fields.isPartyEquip )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11543/*"SELECT_PARTY_EQUIP"*/;
    goto LABEL_41;
  }
  if ( (item->fields.partyIndex & 0x80000000) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11542/*"SELECT_PARTY"*/;
    goto LABEL_41;
  }
  if ( item->fields.isUseRecommendSupport )
  {
    v12 = (UnityEngine_Object_o *)this->fields.warningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      v13 = this->fields.warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11032/*"RECOMMEND_SUPPORT_MEMBER"*/;
LABEL_70:
      warningLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
      if ( !v13 )
        goto LABEL_105;
      UILabel__set_text(v13, (System_String_o *)warningLabel, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_105;
      UILabel__SetCondensedScale((UILabel_o *)warningLabel, 106, 0, 0);
      return;
    }
  }
  else if ( item->fields.isUseRecommendSupportEquip )
  {
    v15 = (UnityEngine_Object_o *)this->fields.warningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
    {
      v13 = this->fields.warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11030/*"RECOMMEND_SUPPORT_EQUIP"*/;
      goto LABEL_70;
    }
  }
  else
  {
    if ( item->fields.isUseSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_12508/*"SUPPORT_MEMBER"*/;
      goto LABEL_41;
    }
    if ( item->fields.isUseSupportEquip )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_12493/*"SUPPORT_EQUIP"*/;
      goto LABEL_41;
    }
    if ( item->fields.isUse )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_3694/*"COMMON_EQUIP_USED"*/;
      goto LABEL_41;
    }
    if ( item->fields.isFatigueRecovery )
      goto LABEL_10;
    if ( item->fields.isFortification )
    {
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationRootObj;
      if ( !warningLabel )
        goto LABEL_105;
      v6 = (System_String_o *)StringLiteral_1/*""*/;
      warningLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)warningLabel,
                                                  0);
      if ( !warningLabel )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, 1, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationNameLabel;
      if ( !warningLabel )
        goto LABEL_105;
      UILabel__set_text((UILabel_o *)warningLabel, item->fields.fortificationName, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationDetailNameLabel;
      if ( !warningLabel )
        goto LABEL_105;
      UILabel__set_text((UILabel_o *)warningLabel, item->fields.fortificationDetailName, 0);
      fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      warningLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/, 0);
      if ( !fortificationAppointmentLabel )
        goto LABEL_105;
      UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)warningLabel, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationNameLabel;
      if ( !warningLabel )
        goto LABEL_105;
      UILabel__UpdateCondensedScaleComponent((UILabel_o *)warningLabel, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationDetailNameLabel;
      if ( !warningLabel )
        goto LABEL_105;
      UILabel__UpdateCondensedScaleComponent((UILabel_o *)warningLabel, 0);
    }
    else
    {
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity
        && !item->fields.isWarehouseServant
        && UserServantEntity__IsProtectedEventServant(userServantEntity, 0) )
      {
        warningLabel = (UnityEngine_Component_o *)item->fields.servantEntity;
        if ( !warningLabel )
          goto LABEL_105;
        IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)warningLabel, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !IsServantMaterialTd )
        {
          v8 = &StringLiteral_11544/*"SELECT_PROTECTED_EVENT_SVT"*/;
          goto LABEL_41;
        }
        goto LABEL_40;
      }
      v6 = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
LABEL_42:
  v11 = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      UILabel__set_text((UILabel_o *)warningLabel, v6, 0);
      return;
    }
LABEL_105:
    sub_1C2D6EC(warningLabel, item);
  }
}