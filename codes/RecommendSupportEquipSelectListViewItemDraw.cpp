void __fastcall RecommendSupportEquipSelectListViewItemDraw___ctor(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewItemDraw__Awake(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4AFDE72 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_4AFDE72 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v4, v5, v6);
}


void __fastcall RecommendSupportEquipSelectListViewItemDraw__SetInput(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  _BOOL4 isChoice; // w8
  bool v16; // zf
  bool v17; // w8
  char v18; // w10
  bool v19; // w1

  if ( (byte_4AFDE74 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4AFDE74 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_38;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_38;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_38;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_38;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_38;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
        if ( Component_object )
        {
          isChoice = item->fields.isChoice;
          v16 = !isChoice;
          v17 = isChoice;
          v18 = v16;
          if ( item->fields.isSwapChoice )
            v19 = v18;
          else
            v19 = v17;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v19, 0LL);
          return;
        }
      }
LABEL_38:
      sub_1BC3264(Component_object, v9);
    }
  }
}


void __fastcall RecommendSupportEquipSelectListViewItemDraw__SetItem(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewItem_o *v5; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 servantFaceIcon; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v22; // w9
  UILabel_o *skillInvalidLabel; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int v32; // w8
  __int64 v33; // x8
  _QWORD *v34; // x9
  _BOOL4 isUse; // w21
  UILabel_o *warningLabel; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21

  v5 = item;
  if ( (byte_4AFDE73 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_11405/*"SELECT_BONUS_SKILL_INVALID"*/, v12);
    sub_1BC3008(&StringLiteral_1/*""*/, v13);
    sub_1BC3008(&StringLiteral_5444/*"EQUIP_GRAPH_USE"*/, v14);
    byte_4AFDE73 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (__int64)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_85;
  ServantFaceIconComponent__Set_40035864(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v5->fields.userSvtEntity,
    v5->fields.iconLabelInfo1,
    v5->fields.iconLabelInfo2,
    0LL);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (__int64)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_85;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_85;
    if ( v5->fields.isSwapLock )
      isLock = !v5->fields.isLock;
    else
      isLock = v5->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL);
  if ( (servantFaceIcon & 1) != 0 )
  {
    servantFaceIcon = (__int64)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_85;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_85;
    if ( v5->fields.isSwapChoice )
      isChoice = !v5->fields.isChoice;
    else
      isChoice = v5->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0LL);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_85;
  size = messageLabelList->fields._size;
  v22 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0LL);
  servantFaceIcon = (__int64)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_85;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (__int64)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_85;
  servantFaceIcon = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
                      servantFaceIcon,
                      *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
                      0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( v5->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11405/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_85;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_85;
    item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.skillInvalidLabel;
    v26 = *(_QWORD *)(servantFaceIcon + 16);
    v27 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(servantFaceIcon + 28);
    if ( !v26 )
      goto LABEL_85;
    v28 = *(int *)(servantFaceIcon + 24);
    if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = v26 + 8 * v28;
      *(_DWORD *)(servantFaceIcon + 24) = v28 + 1;
      *(_QWORD *)(v29 + 32) = item;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 32), (int32_t)item, v24, v25);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_85;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( v5->fields.isBase )
  {
    servantFaceIcon = (__int64)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_85;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_85;
LABEL_43:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (__int64)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    goto LABEL_45;
  }
  servantFaceIcon = (__int64)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_85;
  isUse = v5->fields.isUse;
  servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_85;
  if ( !isUse )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5444/*"EQUIP_GRAPH_USE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_85;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_85;
  item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.warningLabel;
  v39 = *(_QWORD *)(servantFaceIcon + 16);
  v40 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(servantFaceIcon + 28);
  if ( !v39 )
    goto LABEL_85;
  v41 = *(int *)(servantFaceIcon + 24);
  if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * v41;
    *(_DWORD *)(servantFaceIcon + 24) = v41 + 1;
    *(_QWORD *)(v42 + 32) = item;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v42 + 32), (int32_t)item, v37, v38);
  }
LABEL_45:
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_85;
  v32 = *(_DWORD *)(servantFaceIcon + 24);
  if ( v32 >= 1 )
  {
    if ( v32 == 1 && v5->fields.isInvalidRarity )
    {
      item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.skillInvalidLabel;
      v33 = *(_QWORD *)(servantFaceIcon + 16);
      v34 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(servantFaceIcon + 28);
      if ( !v33 )
        goto LABEL_85;
      if ( *(_DWORD *)(v33 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(servantFaceIcon + 24) = 2;
        *(_QWORD *)(v33 + 40) = item;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 40), (int32_t)item, v30, v31);
      }
    }
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = (__int64)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                   (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0LL);
        goto LABEL_66;
      }
    }
LABEL_85:
    sub_1BC3264(servantFaceIcon, item);
  }
LABEL_66:
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    servantFaceIcon = (__int64)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (__int64)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_85;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      v5->fields._IsFriendShipSvtEq_k__BackingField,
      0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (__int64)this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)servantFaceIcon,
          v5->fields._IsChocolateSvtEquip_k__BackingField,
          0LL);
        return;
      }
    }
    goto LABEL_85;
  }
}