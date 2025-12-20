void RecommendSupportEquipSelectListViewItemDraw___ctor(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecommendSupportEquipSelectListViewItemDraw__Awake(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2853F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4D2853F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void RecommendSupportEquipSelectListViewItemDraw__SetInput(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v14; // x20

  if ( (byte_4D28541 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28541 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_29;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_29;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_29;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_29;
      gameObject = UnityEngine_Component__get_gameObject(Component_object, 0);
      Component_object = (UnityEngine_Component_o *)RecommendSupportEquipSelectListViewItem__get_IsDispLock(item, 0);
      if ( !gameObject )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Component_object & 1, 0);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( Component_object )
      {
        v14 = UnityEngine_Component__get_gameObject(Component_object, 0);
        Component_object = (UnityEngine_Component_o *)RecommendSupportEquipSelectListViewItem__get_IsDispChoice(item, 0);
        if ( v14 )
        {
          UnityEngine_GameObject__SetActive(v14, (unsigned __int8)Component_object & 1, 0);
          return;
        }
      }
LABEL_29:
      sub_1C942F0(Component_object, v8);
    }
  }
}


void RecommendSupportEquipSelectListViewItemDraw__SetItem(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewItem_o *v5; // x19
  __int64 servantFaceIcon; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v11; // x21
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v14; // w9
  UILabel_o *skillInvalidLabel; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int v32; // w8
  __int64 v33; // x8
  _QWORD *v34; // x9
  _BOOL4 isUse; // w21
  UILabel_o *warningLabel; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21

  v5 = item;
  if ( (byte_4D28540 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_5496/*"EQUIP_GRAPH_USE"*/);
    byte_4D28540 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (__int64)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_79;
  ServantFaceIconComponent__Set_41844968(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v5->fields.userSvtEntity,
    v5->fields.iconLabelInfo1,
    v5->fields.iconLabelInfo2,
    0);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    servantFaceIcon = (__int64)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_79;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    servantFaceIcon = RecommendSupportEquipSelectListViewItem__get_IsDispLock(v5, 0);
    if ( !gameObject )
      goto LABEL_79;
    UnityEngine_GameObject__SetActive(gameObject, servantFaceIcon & 1, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = UnityEngine_Object__op_Inequality(choiceSprite, 0, 0);
  if ( (servantFaceIcon & 1) != 0 )
  {
    servantFaceIcon = (__int64)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_79;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    servantFaceIcon = RecommendSupportEquipSelectListViewItem__get_IsDispChoice(v5, 0);
    if ( !v11 )
      goto LABEL_79;
    UnityEngine_GameObject__SetActive(v11, servantFaceIcon & 1, 0);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_79;
  size = messageLabelList->fields._size;
  v14 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  servantFaceIcon = (__int64)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_79;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (__int64)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_79;
  servantFaceIcon = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
                      servantFaceIcon,
                      *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
                      0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( v5->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_79;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_79;
    item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.skillInvalidLabel;
    v22 = *(_QWORD *)(servantFaceIcon + 16);
    v23 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(servantFaceIcon + 28);
    if ( !v22 )
      goto LABEL_79;
    v24 = *(int *)(servantFaceIcon + 24);
    if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = v22 + 8 * v24;
      *(_DWORD *)(servantFaceIcon + 24) = v24 + 1;
      *(_QWORD *)(v25 + 32) = item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)item, v16, v17, v18, v19, v20, v21);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_79;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( v5->fields.isBase )
  {
    servantFaceIcon = (__int64)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_79;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_79;
LABEL_37:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    servantFaceIcon = (__int64)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_79;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_39;
  }
  servantFaceIcon = (__int64)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_79;
  isUse = v5->fields.isUse;
  servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_79;
  if ( !isUse )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  warningLabel = this->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5496/*"EQUIP_GRAPH_USE"*/, 0);
  if ( !warningLabel )
    goto LABEL_79;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_79;
  item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.warningLabel;
  v43 = *(_QWORD *)(servantFaceIcon + 16);
  v44 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(servantFaceIcon + 28);
  if ( !v43 )
    goto LABEL_79;
  v45 = *(int *)(servantFaceIcon + 24);
  if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = v43 + 8 * v45;
    *(_DWORD *)(servantFaceIcon + 24) = v45 + 1;
    *(_QWORD *)(v46 + 32) = item;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 32), (int32_t)item, v37, v38, v39, v40, v41, v42);
  }
LABEL_39:
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_79;
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
        goto LABEL_79;
      if ( *(_DWORD *)(v33 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(servantFaceIcon + 24) = 2;
        *(_QWORD *)(v33 + 40) = item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 40), (int32_t)item, v26, v27, v28, v29, v30, v31);
      }
    }
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = (__int64)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
        goto LABEL_60;
      }
    }
LABEL_79:
    sub_1C942F0(servantFaceIcon, item);
  }
LABEL_60:
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = (__int64)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_79;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = (__int64)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_79;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_79;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      v5->fields._IsFriendShipSvtEq_k__BackingField,
      0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    servantFaceIcon = (__int64)this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)servantFaceIcon,
          v5->fields._IsChocolateSvtEquip_k__BackingField,
          0);
        return;
      }
    }
    goto LABEL_79;
  }
}