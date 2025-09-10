void ServantListViewItemDraw___ctor(ServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantListViewItemDraw__Awake(ServantListViewItemDraw_o *this, const MethodInfo *method)
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


void ServantListViewItemDraw__SetInput(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  _BOOL4 isEventJoin; // w22
  struct UILabel_o *warningLabel; // x21
  __int64 *v18; // x8
  System_String_o *v19; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v22; // x21
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23330 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23090/*"ribbon_noblephantasmup_01"*/);
    sub_1C2D490(&StringLiteral_11514/*"SELECT_CANNOT"*/);
    sub_1C2D490(&StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23330 = 1;
  }
  if ( !item )
    return;
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_78;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
      Component_object,
      0,
      1,
      Component_object->klass[1]._1.implementedInterfaces);
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_78;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_78;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isChocolateSvtEquip, 0);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !Component_object )
      goto LABEL_78;
    v19 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_58;
  }
  Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !Component_object )
    goto LABEL_78;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
  if ( !Component_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
  Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !Component_object )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_48:
        v18 = &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_56:
        Component_object = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v18, 0);
        if ( !warningLabel )
          goto LABEL_78;
        v19 = (System_String_o *)Component_object;
        Component_object = (UnityEngine_Component_o *)warningLabel;
LABEL_58:
        UILabel__set_text((UILabel_o *)Component_object, v19, 0);
        goto LABEL_59;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_48;
    }
    v18 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
    goto LABEL_56;
  }
LABEL_59:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0);
  }
  Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !Component_object )
    goto LABEL_78;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)Component_object, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v22 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_23090/*"ribbon_noblephantasmup_01"*/, 0);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( Component_object )
        {
          v23.fields.x = 0.65;
          v23.fields.y = 1.0;
          v23.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)Component_object, v23, 0);
          return;
        }
LABEL_78:
        sub_1C2D6EC(Component_object, v8);
      }
    }
  }
}


void ServantListViewItemDraw__SetItem(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UserCommandCodeEntity_o *userCommandCodeEntity; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *useSprite; // x21
  _BOOL4 isUse; // w21
  __int64 *v12; // x8
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  _BOOL4 isEventJoin; // w23
  struct UILabel_o *warningLabel; // x21
  __int64 *v21; // x8
  System_String_o *v22; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v25; // x21
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2332F & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23090/*"ribbon_noblephantasmup_01"*/);
    sub_1C2D490(&StringLiteral_11514/*"SELECT_CANNOT"*/);
    sub_1C2D490(&StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C2D490(&StringLiteral_20174/*"icon_equip"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_20175/*"icon_equip_cc"*/);
    byte_4C2332F = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_98;
    ServantFaceIconComponent__Set_40791192(
      servantFaceIcon,
      userCommandCodeEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_98;
    ServantFaceIconComponent__Set_40783748(
      servantFaceIcon,
      item->fields.userSvtEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_98;
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
    if ( item->fields.isUse )
    {
      userCommandCodeEntity = 0;
      if ( !servantFaceIcon )
        goto LABEL_98;
    }
    else
    {
      userCommandCodeEntity = (UserCommandCodeEntity_o *)(item->fields.partyIndex >= 0);
      if ( !servantFaceIcon )
        goto LABEL_98;
    }
    FlashingIconComponent__Set_40679456((FlashingIconComponent_o *)servantFaceIcon, (bool)userCommandCodeEntity, 0);
  }
  useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
    if ( !servantFaceIcon )
      goto LABEL_98;
    isUse = item->fields.isUse;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_98;
    if ( isUse )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( !servantFaceIcon )
        goto LABEL_98;
      if ( item->fields.userCommandCodeEntity )
        v12 = &StringLiteral_20175/*"icon_equip_cc"*/;
      else
        v12 = &StringLiteral_20174/*"icon_equip"*/;
      UISprite__set_spriteName((UISprite_o *)servantFaceIcon, (System_String_o *)*v12, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    }
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_98;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_98;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_98;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_98;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_98;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.chocolateSprite;
    if ( !servantFaceIcon )
      goto LABEL_98;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isChocolateSvtEquip, 0);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_98;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_98;
    v22 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_78;
  }
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_98;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0);
  if ( !servantFaceIcon )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_98;
  UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_68:
        v21 = &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_76:
        servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v21, 0);
        if ( !warningLabel )
          goto LABEL_98;
        v22 = (System_String_o *)servantFaceIcon;
        servantFaceIcon = (ServantFaceIconComponent_o *)warningLabel;
LABEL_78:
        UILabel__set_text((UILabel_o *)servantFaceIcon, v22, 0);
        goto LABEL_79;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_68;
    }
    v21 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
    goto LABEL_76;
  }
LABEL_79:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
    if ( !servantFaceIcon )
      goto LABEL_98;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_98;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
    return;
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
  if ( !servantFaceIcon
    || (servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)servantFaceIcon,
                                                          0)) == 0 )
  {
LABEL_98:
    sub_1C2D6EC(servantFaceIcon, userCommandCodeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isMaterialTdSvt, 0);
  if ( item->fields.isMaterialTdSvt )
  {
    v25 = this->fields.materialTdSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v25, (System_String_o *)StringLiteral_23090/*"ribbon_noblephantasmup_01"*/, 0);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_98;
      v26.fields.x = 0.65;
      v26.fields.y = 1.0;
      v26.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(servantFaceIcon, v26, 0);
    }
  }
}