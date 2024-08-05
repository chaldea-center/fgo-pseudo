void __fastcall ServantListViewItemDraw___ctor(ServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantListViewItemDraw__SetInput(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v15; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  _BOOL4 isEventJoin; // w22
  struct UILabel_o *warningLabel; // x21
  __int64 *v25; // x8
  System_String_o *v26; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v29; // x21
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA94A & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, item);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1B64870(&LocalizationManager_TypeInfo, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, v10);
    sub_1B64870(&StringLiteral_11444/*"SELECT_CANNOT"*/, v11);
    sub_1B64870(&StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/, v12);
    sub_1B64870(&StringLiteral_1/*""*/, v13);
    byte_49FA94A = 1;
  }
  if ( !item )
    return;
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_72;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
      Component_object,
      0LL,
      1LL,
      Component_object->klass[1]._1.interfaceOffsets);
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !Component_object )
      goto LABEL_72;
    gameObject = UnityEngine_Component__get_gameObject(Component_object, 0LL);
    Component_object = (UnityEngine_Component_o *)ServantListViewItem__get_IsDispLock(item, 0LL);
    if ( !gameObject )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Component_object & 1, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !Component_object )
      goto LABEL_72;
    v20 = UnityEngine_Component__get_gameObject(Component_object, 0LL);
    Component_object = (UnityEngine_Component_o *)ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v20 )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(v20, (unsigned __int8)Component_object & 1, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Component_object,
      item->fields.isChocolateSvtEquip,
      0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !Component_object )
      goto LABEL_72;
    v26 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_52;
  }
  Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !Component_object )
    goto LABEL_72;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
  Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !Component_object )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_42:
        v25 = &StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_50:
        Component_object = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
        if ( !warningLabel )
          goto LABEL_72;
        v26 = (System_String_o *)Component_object;
        Component_object = (UnityEngine_Component_o *)warningLabel;
LABEL_52:
        UILabel__set_text((UILabel_o *)Component_object, v26, 0LL);
        goto LABEL_53;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_42;
    }
    v25 = &StringLiteral_11444/*"SELECT_CANNOT"*/;
    goto LABEL_50;
  }
LABEL_53:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0LL);
  }
  Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !Component_object )
    goto LABEL_72;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)Component_object, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !Component_object )
      goto LABEL_72;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v29 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( Component_object )
        {
          v30.fields.x = 0.65;
          v30.fields.y = 1.0;
          v30.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)Component_object, v30, 0LL);
          return;
        }
LABEL_72:
        sub_1B64ACC(Component_object, v15);
      }
    }
  }
}


void __fastcall ServantListViewItemDraw__SetItem(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UserCommandCodeEntity_o *userCommandCodeEntity; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v18; // x21
  UnityEngine_Object_o *useSprite; // x21
  _BOOL4 isUse; // w21
  __int64 *v21; // x8
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v25; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  _BOOL4 isEventJoin; // w23
  struct UILabel_o *warningLabel; // x21
  __int64 *v30; // x8
  System_String_o *v31; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v34; // x21
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA949 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, item);
    sub_1B64870(&LocalizationManager_TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64870(&StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, v9);
    sub_1B64870(&StringLiteral_11444/*"SELECT_CANNOT"*/, v10);
    sub_1B64870(&StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/, v11);
    sub_1B64870(&StringLiteral_20063/*"icon_equip"*/, v12);
    sub_1B64870(&StringLiteral_1/*""*/, v13);
    sub_1B64870(&StringLiteral_20064/*"icon_equip_cc"*/, v14);
    byte_49FA949 = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_91;
    ServantFaceIconComponent__Set_37915992(
      servantFaceIcon,
      userCommandCodeEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_91;
    ServantFaceIconComponent__Set_37909280(
      servantFaceIcon,
      item->fields.userSvtEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
  partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v18 = this->fields.partyIcon;
    if ( item->fields.isUse )
    {
      userCommandCodeEntity = 0LL;
      if ( !v18 )
        goto LABEL_91;
    }
    else
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsParty(item, 0LL);
      userCommandCodeEntity = (UserCommandCodeEntity_o *)((unsigned __int8)servantFaceIcon & 1);
      if ( !v18 )
        goto LABEL_91;
    }
    FlashingIconComponent__Set_37815968(v18, (bool)userCommandCodeEntity, 0LL);
  }
  useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
    if ( !servantFaceIcon )
      goto LABEL_91;
    isUse = item->fields.isUse;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_91;
    if ( isUse )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( !servantFaceIcon )
        goto LABEL_91;
      if ( item->fields.userCommandCodeEntity )
        v21 = &StringLiteral_20064/*"icon_equip_cc"*/;
      else
        v21 = &StringLiteral_20063/*"icon_equip"*/;
      UISprite__set_spriteName((UISprite_o *)servantFaceIcon, (System_String_o *)*v21, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    }
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_91;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsDispLock(item, 0LL);
    if ( !gameObject )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_91;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v25 )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive(v25, (unsigned __int8)servantFaceIcon & 1, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_91;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.chocolateSprite;
    if ( !servantFaceIcon )
      goto LABEL_91;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      item->fields.isChocolateSvtEquip,
      0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_91;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_91;
    v31 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_71;
  }
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_91;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0LL);
  if ( !servantFaceIcon )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_91;
  UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_61:
        v30 = &StringLiteral_11468/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_69:
        servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v30, 0LL);
        if ( !warningLabel )
          goto LABEL_91;
        v31 = (System_String_o *)servantFaceIcon;
        servantFaceIcon = (ServantFaceIconComponent_o *)warningLabel;
LABEL_71:
        UILabel__set_text((UILabel_o *)servantFaceIcon, v31, 0LL);
        goto LABEL_72;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_61;
    }
    v30 = &StringLiteral_11444/*"SELECT_CANNOT"*/;
    goto LABEL_69;
  }
LABEL_72:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
    if ( !servantFaceIcon )
      goto LABEL_91;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_91;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
    return;
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
  if ( !servantFaceIcon
    || (servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)servantFaceIcon,
                                                          0LL)) == 0LL )
  {
LABEL_91:
    sub_1B64ACC(servantFaceIcon, userCommandCodeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isMaterialTdSvt, 0LL);
  if ( item->fields.isMaterialTdSvt )
  {
    v34 = this->fields.materialTdSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v34, (System_String_o *)StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, 0LL);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_91;
      v35.fields.x = 0.65;
      v35.fields.y = 1.0;
      v35.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(servantFaceIcon, v35, 0LL);
    }
  }
}