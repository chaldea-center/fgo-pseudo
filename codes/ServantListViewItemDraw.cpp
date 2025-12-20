void ServantListViewItemDraw___ctor(ServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantListViewItemDraw__Awake(ServantListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v13; // x21
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

  if ( (byte_4D286EB & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_23341/*"ribbon_noblephantasmup_01"*/);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D286EB = 1;
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
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_72;
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
      goto LABEL_72;
    gameObject = UnityEngine_Component__get_gameObject(Component_object, 0);
    Component_object = (UnityEngine_Component_o *)ServantListViewItem__get_IsDispLock(item, 0);
    if ( !gameObject )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Component_object & 1, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !Component_object )
      goto LABEL_72;
    v13 = UnityEngine_Component__get_gameObject(Component_object, 0);
    Component_object = (UnityEngine_Component_o *)ServantListViewItem__get_IsDispChoice(item, 0);
    if ( !v13 )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(v13, (unsigned __int8)Component_object & 1, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isChocolateSvtEquip, 0);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !Component_object )
      goto LABEL_72;
    v19 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_52;
  }
  Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !Component_object )
    goto LABEL_72;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
  if ( !Component_object )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
  Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !Component_object )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_42:
        v18 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_50:
        Component_object = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v18, 0);
        if ( !warningLabel )
          goto LABEL_72;
        v19 = (System_String_o *)Component_object;
        Component_object = (UnityEngine_Component_o *)warningLabel;
LABEL_52:
        UILabel__set_text((UILabel_o *)Component_object, v19, 0);
        goto LABEL_53;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_42;
    }
    v18 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    goto LABEL_50;
  }
LABEL_53:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0);
  }
  Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !Component_object )
    goto LABEL_72;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)Component_object, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v22 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_23341/*"ribbon_noblephantasmup_01"*/, 0);
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
LABEL_72:
        sub_1C942F0(Component_object, v8);
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
  FlashingIconComponent_o *v10; // x21
  UnityEngine_Object_o *useSprite; // x21
  _BOOL4 isUse; // w21
  __int64 *v13; // x8
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  _BOOL4 isEventJoin; // w23
  struct UILabel_o *warningLabel; // x21
  __int64 *v22; // x8
  System_String_o *v23; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v26; // x21
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D286EA & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_23341/*"ribbon_noblephantasmup_01"*/);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_20358/*"icon_equip"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_20359/*"icon_equip_cc"*/);
    byte_4D286EA = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_92;
    ServantFaceIconComponent__Set_41852436(
      servantFaceIcon,
      userCommandCodeEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_92;
    ServantFaceIconComponent__Set_41844968(
      servantFaceIcon,
      item->fields.userSvtEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    servantFaceIcon,
    this->fields.maskSprite,
    this->fields.defaultMaskName,
    this->fields.defaultMaskAtlas,
    0);
  partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(partyIcon, 0, 0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v10 = this->fields.partyIcon;
    if ( item->fields.isUse )
    {
      userCommandCodeEntity = 0;
      if ( !v10 )
        goto LABEL_92;
    }
    else
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsParty(item, 0);
      userCommandCodeEntity = (UserCommandCodeEntity_o *)((unsigned __int8)servantFaceIcon & 1);
      if ( !v10 )
        goto LABEL_92;
    }
    FlashingIconComponent__Set_41653568(v10, (bool)userCommandCodeEntity, 0);
  }
  useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    isUse = item->fields.isUse;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    if ( isUse )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( !servantFaceIcon )
        goto LABEL_92;
      if ( item->fields.userCommandCodeEntity )
        v13 = &StringLiteral_20359/*"icon_equip_cc"*/;
      else
        v13 = &StringLiteral_20358/*"icon_equip"*/;
      UISprite__set_spriteName((UISprite_o *)servantFaceIcon, (System_String_o *)*v13, 0);
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
      goto LABEL_92;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsDispLock(item, 0);
    if ( !gameObject )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsDispChoice(item, 0);
    if ( !v17 )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive(v17, (unsigned __int8)servantFaceIcon & 1, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.chocolateSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isChocolateSvtEquip, 0);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_92;
    v23 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_72;
  }
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_92;
  UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_62:
        v22 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_70:
        servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v22, 0);
        if ( !warningLabel )
          goto LABEL_92;
        v23 = (System_String_o *)servantFaceIcon;
        servantFaceIcon = (ServantFaceIconComponent_o *)warningLabel;
LABEL_72:
        UILabel__set_text((UILabel_o *)servantFaceIcon, v23, 0);
        goto LABEL_73;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_62;
    }
    v22 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    goto LABEL_70;
  }
LABEL_73:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
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
LABEL_92:
    sub_1C942F0(servantFaceIcon, userCommandCodeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isMaterialTdSvt, 0);
  if ( item->fields.isMaterialTdSvt )
  {
    v26 = this->fields.materialTdSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v26, (System_String_o *)StringLiteral_23341/*"ribbon_noblephantasmup_01"*/, 0);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_92;
      v27.fields.x = 0.65;
      v27.fields.y = 1.0;
      v27.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(servantFaceIcon, v27, 0);
    }
  }
}