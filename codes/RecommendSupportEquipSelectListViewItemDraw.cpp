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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596C44A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_596C44A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListViewItemDraw__SetInput(
        RecommendSupportEquipSelectListViewItemDraw_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  __int64 v12; // x2
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v14; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v17; // x20

  if ( (byte_596C44C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C44C = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_29;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v14);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( Component_object )
      {
        v17 = UnityEngine_Component__get_gameObject(Component_object, 0);
        Component_object = (UnityEngine_Component_o *)RecommendSupportEquipSelectListViewItem__get_IsDispChoice(item, 0);
        if ( v17 )
        {
          UnityEngine_GameObject__SetActive(v17, (unsigned __int8)Component_object & 1, 0);
          return;
        }
      }
LABEL_29:
      sub_2213CDC(Component_object, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v14; // x21
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v17; // w9
  __int64 v18; // x2
  UILabel_o *skillInvalidLabel; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int v36; // w8
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *warningLabel; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  __int64 v54; // x2
  UnityEngine_Object_o *friendShipSprite; // x21
  __int64 v56; // x2
  UnityEngine_Object_o *chocolateSprite; // x21

  v5 = item;
  if ( (byte_596C44B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_5692/*"EQUIP_GRAPH_USE"*/);
    byte_596C44B = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (__int64)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_80;
  ServantFaceIconComponent__Set_48049524(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v5->fields.userSvtEntity,
    v5->fields.iconLabelInfo1,
    v5->fields.iconLabelInfo2,
    1,
    0);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    servantFaceIcon = (__int64)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_80;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    servantFaceIcon = RecommendSupportEquipSelectListViewItem__get_IsDispLock(v5, 0);
    if ( !gameObject )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive(gameObject, servantFaceIcon & 1, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v11);
  servantFaceIcon = UnityEngine_Object__op_Inequality(choiceSprite, 0, 0);
  if ( (servantFaceIcon & 1) != 0 )
  {
    servantFaceIcon = (__int64)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_80;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    servantFaceIcon = RecommendSupportEquipSelectListViewItem__get_IsDispChoice(v5, 0);
    if ( !v14 )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive(v14, servantFaceIcon & 1, 0);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_80;
  size = messageLabelList->fields._size;
  v17 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  servantFaceIcon = (__int64)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_80;
  (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (__int64)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_80;
  servantFaceIcon = (*(__int64 (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)servantFaceIcon + 440LL))(
                      servantFaceIcon,
                      *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
                      0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( v5->fields.isInvalidRarity )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v18);
    servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_80;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_80;
    v26 = *(_QWORD *)(servantFaceIcon + 16);
    item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.skillInvalidLabel;
    v27 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(servantFaceIcon + 28);
    if ( !v26 )
      goto LABEL_80;
    v28 = *(int *)(servantFaceIcon + 24);
    if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = v26 + 8 * v28;
      *(_DWORD *)(servantFaceIcon + 24) = v28 + 1;
      *(_QWORD *)(v29 + 32) = item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)item, v20, v21, v22, v23, v24, v25);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_80;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( v5->fields.isBase )
  {
    servantFaceIcon = (__int64)this->fields.maskSprite;
    goto LABEL_36;
  }
  servantFaceIcon = (__int64)this->fields.maskSprite;
  if ( !v5->fields.isUse )
  {
LABEL_36:
    if ( !servantFaceIcon )
      goto LABEL_80;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    servantFaceIcon = (__int64)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_80;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_40;
  }
  if ( !servantFaceIcon )
    goto LABEL_80;
  servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  warningLabel = this->fields.warningLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5692/*"EQUIP_GRAPH_USE"*/, 0);
  if ( !warningLabel )
    goto LABEL_80;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_80;
  v48 = *(_QWORD *)(servantFaceIcon + 16);
  item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.warningLabel;
  v49 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(servantFaceIcon + 28);
  if ( !v48 )
    goto LABEL_80;
  v50 = *(int *)(servantFaceIcon + 24);
  if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = v48 + 8 * v50;
    *(_DWORD *)(servantFaceIcon + 24) = v50 + 1;
    *(_QWORD *)(v51 + 32) = item;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 32), (int32_t)item, v42, v43, v44, v45, v46, v47);
  }
LABEL_40:
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_80;
  v36 = *(_DWORD *)(servantFaceIcon + 24);
  if ( v36 >= 1 )
  {
    if ( v36 == 1 && v5->fields.isInvalidRarity )
    {
      v37 = *(_QWORD *)(servantFaceIcon + 16);
      item = (RecommendSupportEquipSelectListViewItem_o *)this->fields.skillInvalidLabel;
      v38 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(servantFaceIcon + 28);
      if ( !v37 )
        goto LABEL_80;
      if ( (*(_DWORD *)(v37 + 24) & 0xFFFFFFFE) != 0 )
      {
        *(_QWORD *)(v37 + 40) = item;
        *(_DWORD *)(servantFaceIcon + 24) = 2;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 40), (int32_t)item, v30, v31, v32, v33, v34, v35);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
    }
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = (__int64)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
        goto LABEL_62;
      }
    }
LABEL_80:
    sub_2213CDC(servantFaceIcon, item);
  }
LABEL_62:
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v30);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = (__int64)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v54);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = (__int64)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_80;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      v5->fields._IsFriendShipSvtEq_k__BackingField,
      0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v56);
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
    goto LABEL_80;
  }
}