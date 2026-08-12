void WarehouseListViewItemDraw___ctor(WarehouseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarehouseListViewItemDraw__Awake(WarehouseListViewItemDraw_o *this, const MethodInfo *method)
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
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *lockSprite; // x23
  _BOOL4 v13; // w22
  __int64 v14; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x23
  __int64 v17; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x23
  __int64 v20; // x2
  UnityEngine_Object_o *chocolateSprite; // x23
  __int64 v22; // x2
  UnityEngine_Object_o *pushSprite; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *materialTdSprite; // x23
  __int64 v27; // x2
  UISprite_o *v28; // x23
  struct UILabel_o *warningLabel; // x8
  bool v30; // w1
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v4 = isSelectEnable;
  if ( (byte_596E4D9 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24320/*"ribbon_noblephantasmup_01"*/);
    byte_596E4D9 = 1;
  }
  WarehouseListViewItemDraw__SetWarning(this, item, (const MethodInfo *)isSelectEnable);
  if ( !item )
    goto LABEL_65;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  v13 = IsSelect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v14);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v17);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v20);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v22);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
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
      v28 = this->fields.materialTdSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v27);
      gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                v28,
                                                (System_String_o *)StringLiteral_24320/*"ribbon_noblephantasmup_01"*/,
                                                0);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_65;
        v31.fields.y = 1.0;
        v31.fields.z = 1.0;
        v31.fields.x = *(float *)"ff&?";
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v31, 0);
      }
    }
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_65;
  if ( System_String__IsNullOrEmpty(warningLabel->fields.mText, 0) && (v13 || v4) && !item->fields.isFortification )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        v30 = 0;
        goto LABEL_59;
      }
    }
LABEL_65:
    sub_2213CDC(gameObject, v8);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_65;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_65;
  v30 = 1;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v30, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_65;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)gameObject, -1, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_65;
  DragSelectComponent__Set((DragSelectComponent_o *)gameObject, item->fields.selectNum, item->fields.dragSelectNum, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596E4D8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E4D8 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isSelectEnable);
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
      sub_2213CDC(v10, v8);
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
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *partyIcon; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *useSprite; // x22
  __int64 v16; // x2
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v18; // x3

  v7 = item;
  if ( (byte_596E4D6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E4D6 = 1;
  }
  if ( v7 && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_48049524(
        servantFaceIcon,
        v7->fields.userServantEntity,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        1,
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
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
          FlashingIconComponent__Set_47864696((FlashingIconComponent_o *)servantFaceIcon, (bool)item, 0);
        }
        useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v16);
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
                WarehouseListViewItemDraw__SetDisp(this, v7, isSelectEnable, v18);
                return;
              }
            }
          }
        }
      }
    }
LABEL_33:
    sub_2213CDC(servantFaceIcon, item);
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
  __int64 v8; // x2
  __int64 *v9; // x8
  LocalizationManager_c *v10; // x0
  int v11; // w8
  int32_t attribute; // w8
  UnityEngine_Object_o *v13; // x21
  UILabel_o *v14; // x20
  __int64 *v15; // x8
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *fortificationAppointmentLabel; // x21
  UnityEngine_Object_o *v20; // x21

  if ( (byte_596E4D7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6763/*"FORTIFICATION_APPOINTMENT"*/);
    sub_2213A60(&StringLiteral_12036/*"SELECT_FAVORITE"*/);
    sub_2213A60(&StringLiteral_13039/*"SUPPORT_MEMBER"*/);
    sub_2213A60(&StringLiteral_3845/*"COMMON_FATIGURE_RECOVERY"*/);
    sub_2213A60(&StringLiteral_12060/*"SELECT_PUSH"*/);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_2213A60(&StringLiteral_12057/*"SELECT_PARTY"*/);
    sub_2213A60(&StringLiteral_12058/*"SELECT_PARTY_EQUIP"*/);
    sub_2213A60(&StringLiteral_13024/*"SUPPORT_EQUIP"*/);
    sub_2213A60(&StringLiteral_7310/*"GRAND_USE_EQUIP"*/);
    sub_2213A60(&StringLiteral_11517/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_2213A60(&StringLiteral_3844/*"COMMON_EQUIP_USED"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12059/*"SELECT_PROTECTED_EVENT_SVT"*/);
    sub_2213A60(&StringLiteral_7297/*"GRAND_MEMBER"*/);
    sub_2213A60(&StringLiteral_11514/*"RECOMMEND_SUPPORT_EQUIP"*/);
    byte_596E4D7 = 1;
  }
  warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_102;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = UnityEngine_Component__get_gameObject(warningLabel, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !item )
    goto LABEL_102;
  if ( item->fields.isPushMode )
  {
    if ( item->fields.isEnabled )
    {
      if ( !item->fields.isFatigueRecovery )
        goto LABEL_96;
LABEL_10:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
      v9 = &StringLiteral_3845/*"COMMON_FATIGURE_RECOVERY"*/;
      goto LABEL_95;
    }
    v10 = LocalizationManager_TypeInfo;
    v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( item->fields.isEventJoin )
    {
      if ( v11 )
      {
LABEL_20:
        v9 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_95:
        v6 = LocalizationManager__Get((System_String_o *)*v9, 0);
        goto LABEL_96;
      }
LABEL_19:
      j_il2cpp_runtime_class_init_0(v10, item, v8);
      goto LABEL_20;
    }
LABEL_92:
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(v10, item, v8);
    v9 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
    goto LABEL_95;
  }
  if ( item->fields.isUseGrandEquip )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    v9 = &StringLiteral_7310/*"GRAND_USE_EQUIP"*/;
    goto LABEL_95;
  }
  if ( item->fields.isGrandServant )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    v9 = &StringLiteral_7297/*"GRAND_MEMBER"*/;
    goto LABEL_95;
  }
  if ( item->fields.isPush )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    v9 = &StringLiteral_12060/*"SELECT_PUSH"*/;
    goto LABEL_95;
  }
  attribute = item->fields.attribute;
  if ( attribute )
  {
    if ( attribute == 2 )
    {
      v10 = LocalizationManager_TypeInfo;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_20;
      goto LABEL_19;
    }
    goto LABEL_91;
  }
  if ( item->fields.isFavorite )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    v9 = &StringLiteral_12036/*"SELECT_FAVORITE"*/;
    goto LABEL_95;
  }
  if ( item->fields.isPartyEquip )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    v9 = &StringLiteral_12058/*"SELECT_PARTY_EQUIP"*/;
    goto LABEL_95;
  }
  if ( (item->fields.partyIndex & 0x80000000) == 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    v9 = &StringLiteral_12057/*"SELECT_PARTY"*/;
    goto LABEL_95;
  }
  if ( item->fields.isUseRecommendSupport )
  {
    v13 = (UnityEngine_Object_o *)this->fields.warningLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v8);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
    {
      v14 = this->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
      v15 = &StringLiteral_11517/*"RECOMMEND_SUPPORT_MEMBER"*/;
      goto LABEL_59;
    }
  }
  else if ( item->fields.isUseRecommendSupportEquip )
  {
    v16 = (UnityEngine_Object_o *)this->fields.warningLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v8);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
    {
      v14 = this->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
      v15 = &StringLiteral_11514/*"RECOMMEND_SUPPORT_EQUIP"*/;
LABEL_59:
      warningLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0);
      if ( v14 )
      {
        UILabel__set_text(v14, (System_String_o *)warningLabel, 0);
        warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
        if ( warningLabel )
        {
          UILabel__SetCondensedScale((UILabel_o *)warningLabel, 106, 0, 0);
          return;
        }
      }
      goto LABEL_102;
    }
  }
  else
  {
    if ( item->fields.isUseSupport )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
      v9 = &StringLiteral_13039/*"SUPPORT_MEMBER"*/;
      goto LABEL_95;
    }
    if ( item->fields.isUseSupportEquip )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
      v9 = &StringLiteral_13024/*"SUPPORT_EQUIP"*/;
      goto LABEL_95;
    }
    if ( item->fields.isUse )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
      v9 = &StringLiteral_3844/*"COMMON_EQUIP_USED"*/;
      goto LABEL_95;
    }
    if ( item->fields.isFatigueRecovery )
      goto LABEL_10;
    if ( item->fields.isFortification )
    {
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationRootObj;
      if ( !warningLabel )
        goto LABEL_102;
      v6 = (System_String_o *)StringLiteral_1/*""*/;
      warningLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)warningLabel,
                                                  0);
      if ( !warningLabel )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, 1, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationNameLabel;
      if ( !warningLabel )
        goto LABEL_102;
      UILabel__set_text((UILabel_o *)warningLabel, item->fields.fortificationName, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationDetailNameLabel;
      if ( !warningLabel )
        goto LABEL_102;
      UILabel__set_text((UILabel_o *)warningLabel, item->fields.fortificationDetailName, 0);
      fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
      warningLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6763/*"FORTIFICATION_APPOINTMENT"*/, 0);
      if ( !fortificationAppointmentLabel )
        goto LABEL_102;
      UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)warningLabel, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationNameLabel;
      if ( !warningLabel )
        goto LABEL_102;
      UILabel__UpdateCondensedScaleComponent((UILabel_o *)warningLabel, 0);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationDetailNameLabel;
      if ( !warningLabel )
        goto LABEL_102;
      UILabel__UpdateCondensedScaleComponent((UILabel_o *)warningLabel, 0);
    }
    else
    {
      if ( WarehouseListViewItem__get_IsProtected(item, (const MethodInfo *)item) )
      {
        warningLabel = (UnityEngine_Component_o *)item->fields.servantEntity;
        if ( !warningLabel )
          goto LABEL_102;
        if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)warningLabel, 0) )
        {
          warningLabel = (UnityEngine_Component_o *)item->fields.userServantEntity;
          if ( !warningLabel )
            goto LABEL_102;
          if ( !UserServantEntity__IsNotSendStorageServant((UserServantEntity_o *)warningLabel, 0) )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
            v9 = &StringLiteral_12059/*"SELECT_PROTECTED_EVENT_SVT"*/;
            goto LABEL_95;
          }
        }
LABEL_91:
        v10 = LocalizationManager_TypeInfo;
        v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        goto LABEL_92;
      }
      v6 = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
LABEL_96:
  v20 = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v8);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      UILabel__set_text((UILabel_o *)warningLabel, v6, 0);
      return;
    }
LABEL_102:
    sub_2213CDC(warningLabel, item);
  }
}