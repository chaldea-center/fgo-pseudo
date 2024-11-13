void __fastcall ServantListViewItemDraw___ctor(ServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewItemDraw__SetInput(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *baseButton; // x22
  __int64 v22; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  __int64 v30; // x1
  _BOOL4 isEventJoin; // w22
  struct UILabel_o *warningLabel; // x21
  __int64 *v33; // x8
  System_String_o *v34; // x1
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v36; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v38; // x1
  UISprite_o *v39; // x21
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12506 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, isInput);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B12506 = 1;
  }
  if ( !item )
    return;
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_78;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
      Component_object,
      0LL,
      1LL,
      Component_object->klass[1]._1.interfaceOffsets);
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_78;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_78;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Component_object,
      item->fields.isChocolateSvtEquip,
      0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !Component_object )
      goto LABEL_78;
    v34 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_58;
  }
  Component_object = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !Component_object )
    goto LABEL_78;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
  Component_object = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !Component_object )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_48:
        v33 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_56:
        Component_object = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v33, 0LL);
        if ( !warningLabel )
          goto LABEL_78;
        v34 = (System_String_o *)Component_object;
        Component_object = (UnityEngine_Component_o *)warningLabel;
LABEL_58:
        UILabel__set_text((UILabel_o *)Component_object, v34, 0LL);
        goto LABEL_59;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
      if ( isEventJoin )
        goto LABEL_48;
    }
    v33 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    goto LABEL_56;
  }
LABEL_59:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0LL);
  }
  Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !Component_object )
    goto LABEL_78;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)Component_object, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !Component_object )
      goto LABEL_78;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v39 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
      AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        Component_object = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( Component_object )
        {
          v40.fields.x = 0.65;
          v40.fields.y = 1.0;
          v40.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)Component_object, v40, 0LL);
          return;
        }
LABEL_78:
        sub_1BCAA3C(Component_object, v22);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewItemDraw__SetItem(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  UserCommandCodeEntity_o *userCommandCodeEntity; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v27; // x1
  UnityEngine_Object_o *useSprite; // x21
  _BOOL4 isUse; // w21
  __int64 *v30; // x8
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  __int64 v37; // x1
  _BOOL4 isEventJoin; // w23
  struct UILabel_o *warningLabel; // x21
  __int64 *v40; // x8
  System_String_o *v41; // x1
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v43; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v45; // x1
  UISprite_o *v46; // x21
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12505 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20353/*"icon_equip"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20354/*"icon_equip_cc"*/, v21, v22);
    byte_4B12505 = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_97;
    ServantFaceIconComponent__Set_38937964(
      servantFaceIcon,
      userCommandCodeEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_97;
    ServantFaceIconComponent__Set_38931252(
      servantFaceIcon,
      item->fields.userSvtEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
  partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
    if ( item->fields.isUse )
    {
      userCommandCodeEntity = 0LL;
      if ( !servantFaceIcon )
        goto LABEL_97;
    }
    else
    {
      userCommandCodeEntity = (UserCommandCodeEntity_o *)(item->fields.partyIndex >= 0);
      if ( !servantFaceIcon )
        goto LABEL_97;
    }
    FlashingIconComponent__Set_38836528((FlashingIconComponent_o *)servantFaceIcon, (bool)userCommandCodeEntity, 0LL);
  }
  useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(useSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
    if ( !servantFaceIcon )
      goto LABEL_97;
    isUse = item->fields.isUse;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_97;
    if ( isUse )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( !servantFaceIcon )
        goto LABEL_97;
      if ( item->fields.userCommandCodeEntity )
        v30 = &StringLiteral_20354/*"icon_equip_cc"*/;
      else
        v30 = &StringLiteral_20353/*"icon_equip"*/;
      UISprite__set_spriteName((UISprite_o *)servantFaceIcon, (System_String_o *)*v30, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    }
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_97;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_97;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_97;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_97;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_97;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeEntity);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.chocolateSprite;
    if ( !servantFaceIcon )
      goto LABEL_97;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      item->fields.isChocolateSvtEquip,
      0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_97;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_97;
    v41 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_77;
  }
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_97;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0LL);
  if ( !servantFaceIcon )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    warningLabel = this->fields.warningLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_67:
        v40 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_75:
        servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v40, 0LL);
        if ( !warningLabel )
          goto LABEL_97;
        v41 = (System_String_o *)servantFaceIcon;
        servantFaceIcon = (ServantFaceIconComponent_o *)warningLabel;
LABEL_77:
        UILabel__set_text((UILabel_o *)servantFaceIcon, v41, 0LL);
        goto LABEL_78;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
      if ( isEventJoin )
        goto LABEL_67;
    }
    v40 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    goto LABEL_75;
  }
LABEL_78:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
    if ( !servantFaceIcon )
      goto LABEL_97;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_97;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( !UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
    return;
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
  if ( !servantFaceIcon
    || (servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)servantFaceIcon,
                                                          0LL)) == 0LL )
  {
LABEL_97:
    sub_1BCAA3C(servantFaceIcon, userCommandCodeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isMaterialTdSvt, 0LL);
  if ( item->fields.isMaterialTdSvt )
  {
    v46 = this->fields.materialTdSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v45);
    AtlasManager__SetEventSprite(v46, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_97;
      v47.fields.x = 0.65;
      v47.fields.y = 1.0;
      v47.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(servantFaceIcon, v47, 0LL);
    }
  }
}