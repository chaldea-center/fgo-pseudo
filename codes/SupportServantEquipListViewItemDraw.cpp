void __fastcall SupportServantEquipListViewItemDraw___ctor(
        SupportServantEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportServantEquipListViewItemDraw__Awake(
        SupportServantEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57BBC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4A57BBC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5);
}


void __fastcall SupportServantEquipListViewItemDraw__SetInput(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  _BOOL4 isChoice; // w8
  bool v15; // zf
  bool v16; // w8
  char v17; // w10
  bool v18; // w1

  if ( (byte_4A57BBE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57BBE = 1;
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
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
          v15 = !isChoice;
          v16 = isChoice;
          v17 = v15;
          if ( item->fields.isSwapChoice )
            v18 = v17;
          else
            v18 = v16;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v18, 0LL);
          return;
        }
      }
LABEL_38:
      sub_1B8880C(Component_object, v8);
    }
  }
}


void __fastcall SupportServantEquipListViewItemDraw__SetItem(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *v5; // x19
  __int64 servantFaceIcon; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v14; // w9
  UILabel_o *skillInvalidLabel; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  int v24; // w8
  __int64 v25; // x8
  _QWORD *v26; // x9
  _BOOL4 isUse; // w21
  UILabel_o *warningLabel; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21

  v5 = item;
  if ( (byte_4A57BBD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11495/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_5518/*"EQUIP_GRAPH_USE"*/);
    byte_4A57BBD = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (__int64)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_85;
  ServantFaceIconComponent__Set_38220260(
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
  v14 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v14;
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
    servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11495/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_85;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_85;
    item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
    v18 = *(_QWORD *)(servantFaceIcon + 16);
    v19 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(servantFaceIcon + 28);
    if ( !v18 )
      goto LABEL_85;
    v20 = *(int *)(servantFaceIcon + 24);
    if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = v18 + 8 * v20;
      *(_DWORD *)(servantFaceIcon + 24) = v20 + 1;
      *(_QWORD *)(v21 + 32) = item;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)item, v16, v17);
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
  servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EQUIP_GRAPH_USE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_85;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_85;
  item = (SupportServantEquipListViewItem_o *)this->fields.warningLabel;
  v31 = *(_QWORD *)(servantFaceIcon + 16);
  v32 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(servantFaceIcon + 28);
  if ( !v31 )
    goto LABEL_85;
  v33 = *(int *)(servantFaceIcon + 24);
  if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = v31 + 8 * v33;
    *(_DWORD *)(servantFaceIcon + 24) = v33 + 1;
    *(_QWORD *)(v34 + 32) = item;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)item, v29, v30);
  }
LABEL_45:
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_85;
  v24 = *(_DWORD *)(servantFaceIcon + 24);
  if ( v24 >= 1 )
  {
    if ( v24 == 1 && v5->fields.isInvalidRarity )
    {
      item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
      v25 = *(_QWORD *)(servantFaceIcon + 16);
      v26 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(servantFaceIcon + 28);
      if ( !v25 )
        goto LABEL_85;
      if ( *(_DWORD *)(v25 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(servantFaceIcon + 24) = 2;
        *(_QWORD *)(v25 + 40) = item;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 40), (int32_t)item, v22, v23);
      }
    }
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = (__int64)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0LL);
        goto LABEL_66;
      }
    }
LABEL_85:
    sub_1B8880C(servantFaceIcon, item);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isFriendShipSvtEq, 0LL);
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
          v5->fields.isChocolateSvtEquip,
          0LL);
        return;
      }
    }
    goto LABEL_85;
  }
}