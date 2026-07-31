void ServantListViewItemDraw___ctor(ServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantListViewItemDraw__Awake(ServantListViewItemDraw_o *this, const MethodInfo *method)
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
  sub_21FFBF4(
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
  sub_21FFBF4(
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
void ServantListViewItemDraw__SetInput(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v12; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v15; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x21
  __int64 v18; // x2
  UnityEngine_Object_o *chocolateSprite; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  struct UILabel_o *warningLabel; // x21
  int v23; // w8
  __int64 *v24; // x8
  System_String_o *v25; // x1
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  UISprite_o *v32; // x21
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59344DC & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_24272/*"ribbon_noblephantasmup_01"*/);
    sub_21FFC50(&StringLiteral_12006/*"SELECT_CANNOT"*/);
    sub_21FFC50(&StringLiteral_12038/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59344DC = 1;
  }
  if ( !item )
    return;
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_80;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_80;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
      Component_object,
      0,
      1,
      Component_object->klass[1]._1.implementedInterfaces);
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_80;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_80;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v15);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v18);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isChocolateSvtEquip, 0);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !Component_object )
      goto LABEL_80;
    v25 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_60:
    UILabel__set_text((UILabel_o *)Component_object, v25, 0);
    goto LABEL_61;
  }
  Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !Component_object )
    goto LABEL_80;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
  if ( !Component_object )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
  Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !Component_object )
    goto LABEL_80;
  UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !item->fields.isEnabled )
  {
    warningLabel = this->fields.warningLabel;
    v23 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( item->fields.isEventJoin )
    {
      if ( !v23 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
      v24 = &StringLiteral_12038/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( !v23 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
      v24 = &StringLiteral_12006/*"SELECT_CANNOT"*/;
    }
    Component_object = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v24, 0);
    if ( !warningLabel )
      goto LABEL_80;
    v25 = (System_String_o *)Component_object;
    Component_object = (UnityEngine_Component_o *)warningLabel;
    goto LABEL_60;
  }
LABEL_61:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0);
  }
  Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !Component_object )
    goto LABEL_80;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)Component_object, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !Component_object )
      goto LABEL_80;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
    if ( !Component_object )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isMaterialTdSvt, 0);
    if ( item->fields.isMaterialTdSvt )
    {
      v32 = this->fields.materialTdSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30, v31);
      AtlasManager__SetEventSprite(v32, (System_String_o *)StringLiteral_24272/*"ribbon_noblephantasmup_01"*/, 0);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( Component_object )
        {
          v33.fields.y = 1.0;
          v33.fields.x = *(float *)"ff&?";
          v33.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)Component_object, v33, 0);
          return;
        }
LABEL_80:
        sub_21FFECC(Component_object, v8);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *useSprite; // x21
  __int64 v15; // x2
  __int64 *v16; // x8
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v18; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v21; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x21
  __int64 v24; // x2
  UnityEngine_Object_o *chocolateSprite; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  struct UILabel_o *warningLabel; // x21
  int v29; // w8
  __int64 *v30; // x8
  System_String_o *v31; // x1
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  UISprite_o *v38; // x21
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59344DB & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_24272/*"ribbon_noblephantasmup_01"*/);
    sub_21FFC50(&StringLiteral_12006/*"SELECT_CANNOT"*/);
    sub_21FFC50(&StringLiteral_12038/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_21FFC50(&StringLiteral_21119/*"icon_equip"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_21120/*"icon_equip_cc"*/);
    byte_59344DB = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_103;
    ServantFaceIconComponent__Set_48025688(
      servantFaceIcon,
      userCommandCodeEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_103;
    ServantFaceIconComponent__Set_48018228(
      servantFaceIcon,
      item->fields.userSvtEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      1,
      0);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_103;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    servantFaceIcon,
    this->fields.maskSprite,
    this->fields.defaultMaskName,
    this->fields.defaultMaskAtlas,
    0);
  partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
    if ( item->fields.isUse )
    {
      userCommandCodeEntity = 0;
      if ( !servantFaceIcon )
        goto LABEL_103;
    }
    else
    {
      userCommandCodeEntity = (UserCommandCodeEntity_o *)(item->fields.partyIndex >= 0);
      if ( !servantFaceIcon )
        goto LABEL_103;
    }
    FlashingIconComponent__Set_47916600((FlashingIconComponent_o *)servantFaceIcon, (bool)userCommandCodeEntity, 0);
  }
  useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  if ( UnityEngine_Object__op_Inequality(useSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
    if ( item->fields.isUse )
    {
      if ( !servantFaceIcon )
        goto LABEL_103;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0);
      if ( !servantFaceIcon )
        goto LABEL_103;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( item->fields.userCommandCodeEntity )
      {
        if ( !servantFaceIcon )
          goto LABEL_103;
        v16 = &StringLiteral_21120/*"icon_equip_cc"*/;
      }
      else
      {
        if ( !servantFaceIcon )
          goto LABEL_103;
        v16 = &StringLiteral_21119/*"icon_equip"*/;
      }
      UISprite__set_spriteName((UISprite_o *)servantFaceIcon, (System_String_o *)*v16, 0);
    }
    else
    {
      if ( !servantFaceIcon )
        goto LABEL_103;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0);
      if ( !servantFaceIcon )
        goto LABEL_103;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    }
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity, v15);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_103;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_103;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity, v18);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_103;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_103;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity, v21);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_103;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity, v24);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.chocolateSprite;
    if ( !servantFaceIcon )
      goto LABEL_103;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isChocolateSvtEquip, 0);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_103;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_103;
    v31 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_83:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v31, 0);
    goto LABEL_84;
  }
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_103;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0);
  if ( !servantFaceIcon )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_103;
  UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !item->fields.isEnabled )
  {
    warningLabel = this->fields.warningLabel;
    v29 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( item->fields.isEventJoin )
    {
      if ( !v29 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
      v30 = &StringLiteral_12038/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( !v29 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
      v30 = &StringLiteral_12006/*"SELECT_CANNOT"*/;
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v30, 0);
    if ( !warningLabel )
      goto LABEL_103;
    v31 = (System_String_o *)servantFaceIcon;
    servantFaceIcon = (ServantFaceIconComponent_o *)warningLabel;
    goto LABEL_83;
  }
LABEL_84:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
    if ( !servantFaceIcon )
      goto LABEL_103;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0);
    if ( !servantFaceIcon )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_103;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
  if ( !UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
    return;
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
  if ( !servantFaceIcon
    || (servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)servantFaceIcon,
                                                          0)) == 0 )
  {
LABEL_103:
    sub_21FFECC(servantFaceIcon, userCommandCodeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isMaterialTdSvt, 0);
  if ( item->fields.isMaterialTdSvt )
  {
    v38 = this->fields.materialTdSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36, v37);
    AtlasManager__SetEventSprite(v38, (System_String_o *)StringLiteral_24272/*"ribbon_noblephantasmup_01"*/, 0);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_103;
      v39.fields.y = 1.0;
      v39.fields.x = *(float *)"ff&?";
      v39.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(servantFaceIcon, v39, 0);
    }
  }
}