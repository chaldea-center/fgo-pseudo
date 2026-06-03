void SupportServantEquipListViewItemDraw___ctor(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportServantEquipListViewItemDraw__Awake(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E73C20 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4E73C20 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void SupportServantEquipListViewItemDraw__SetInput(
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

  if ( (byte_4E73C22 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E73C22 = 1;
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
        goto LABEL_38;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_38;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_38;
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
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_38;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_38;
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
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
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
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v18, 0);
          return;
        }
      }
LABEL_38:
      sub_1D0F30C(Component_object, v8);
    }
  }
}


void SupportServantEquipListViewItemDraw__SetItem(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *v5; // x19
  void *servantFaceIcon; // x0
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
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_String_o *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int v33; // w8
  __int64 v34; // x8
  _QWORD *v35; // x9
  UILabel_o *warningLabel; // x21
  struct UILabel_o *v37; // x21
  System_String_o *v38; // x0
  PartyOrganizationUtility_o *v39; // x21
  __int64 v40; // x22
  __int64 v41; // x23
  int32_t v42; // w22
  System_String_o *ServantShortName; // x0
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  UILabel_o *warningLabel2; // x21
  struct UILabel_o *v49; // x8
  int32_t mWidth; // w21
  struct UILabel_o *v51; // x8
  UILabel_o *warningLabel3; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v5 = item;
  if ( (byte_4E73C21 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1D0F0B4(&StringLiteral_43/*"\n"*/);
    sub_1D0F0B4(&StringLiteral_5550/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/);
    sub_1D0F0B4(&StringLiteral_11690/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_5549/*"EQUIP_GRAPH_USE"*/);
    byte_4E73C21 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_126;
  ServantFaceIconComponent__Set_42454992(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v5->fields.userSvtEntity,
    v5->fields.iconLabelInfo1,
    v5->fields.iconLabelInfo2,
    1,
    0);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    servantFaceIcon = this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_126;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    if ( v5->fields.isSwapLock )
      isLock = !v5->fields.isLock;
    else
      isLock = v5->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = (void *)UnityEngine_Object__op_Inequality(choiceSprite, 0, 0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    servantFaceIcon = this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_126;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    if ( v5->fields.isSwapChoice )
      isChoice = !v5->fields.isChoice;
    else
      isChoice = v5->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_126;
  size = messageLabelList->fields._size;
  v14 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  servantFaceIcon = this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_126;
  (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_126;
  (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.warningLabel2;
  if ( !servantFaceIcon )
    goto LABEL_126;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = this->fields.warningLabel3;
  if ( !servantFaceIcon )
    goto LABEL_126;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_126;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_126;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( v5->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_126;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_126;
    item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
    v22 = *((_QWORD *)servantFaceIcon + 2);
    v23 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*((_DWORD *)servantFaceIcon + 7);
    if ( !v22 )
      goto LABEL_126;
    v24 = *((int *)servantFaceIcon + 6);
    if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = v22 + 8 * v24;
      *((_DWORD *)servantFaceIcon + 6) = v24 + 1;
      *(_QWORD *)(v25 + 32) = item;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)item, v16, v17, v18, v19, v20, v21);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_126;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( v5->fields.isBase )
  {
    servantFaceIcon = this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_126;
    v26 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v26, 0);
    goto LABEL_54;
  }
  warningLabel = this->fields.warningLabel;
  if ( !v5->fields.isUse )
  {
    if ( !warningLabel )
      goto LABEL_126;
    UILabel__set_text(this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_126;
    v26 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_53;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5549/*"EQUIP_GRAPH_USE"*/, 0);
  if ( !warningLabel )
    goto LABEL_126;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_126;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  v37 = this->fields.warningLabel;
  if ( !v37 )
    goto LABEL_126;
  v38 = System_String__Concat_65562772(v37->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v37, v38, 0);
  if ( v5->fields._EquipUseUserServantEntity_k__BackingField )
  {
    servantFaceIcon = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v5->fields._EquipUseUserServantEntity_k__BackingField )
      goto LABEL_126;
    v39 = (PartyOrganizationUtility_o *)servantFaceIcon;
    servantFaceIcon = UserServantEntity__get_BaseServantEntity(v5->fields._EquipUseUserServantEntity_k__BackingField, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    v41 = *((_QWORD *)servantFaceIcon + 2);
    v40 = *((_QWORD *)servantFaceIcon + 3);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = v41;
    *(_QWORD *)&v63.fields.fakeValue = v40;
    servantFaceIcon = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v63, 0);
    if ( !v5->fields._EquipUseUserServantEntity_k__BackingField )
      goto LABEL_126;
    v42 = (int)servantFaceIcon;
    servantFaceIcon = (void *)UserServantEntity__GetServantId(
                                v5->fields._EquipUseUserServantEntity_k__BackingField,
                                -1,
                                0);
    if ( !v39 )
      goto LABEL_126;
    ServantShortName = PartyOrganizationUtility__GetServantShortName(v39, v42, (int32_t)servantFaceIcon, 1, 0);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantShortName = LocalizationManager__Get((System_String_o *)StringLiteral_5550/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/, 0);
  }
  warningLabel2 = this->fields.warningLabel2;
  servantFaceIcon = System_String__Concat_65562772((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0);
  if ( !warningLabel2 )
    goto LABEL_126;
  UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
  v49 = this->fields.warningLabel2;
  if ( !v49 )
    goto LABEL_126;
  mWidth = v49->fields.mWidth;
  servantFaceIcon = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    servantFaceIcon = BalanceConfig_TypeInfo;
  }
  if ( mWidth <= *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1300LL) )
  {
    servantFaceIcon = this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_126;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  }
  else
  {
    v51 = this->fields.warningLabel2;
    if ( !v51 )
      goto LABEL_126;
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)servantFaceIcon, v51->fields.mText, 0);
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_126;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    servantFaceIcon = BalanceConfig_TypeInfo;
    warningLabel3 = this->fields.warningLabel3;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !warningLabel3 )
      goto LABEL_126;
    UILabel__SetCondensedScale(
      warningLabel3,
      BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth,
      0,
      0);
  }
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_126;
  item = (SupportServantEquipListViewItem_o *)this->fields.warningLabel;
  v59 = *((_QWORD *)servantFaceIcon + 2);
  v60 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*((_DWORD *)servantFaceIcon + 7);
  if ( !v59 )
    goto LABEL_126;
  v61 = *((int *)servantFaceIcon + 6);
  if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * v61;
    *((_DWORD *)servantFaceIcon + 6) = v61 + 1;
    *(_QWORD *)(v62 + 32) = item;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v62 + 32), (int32_t)item, v53, v54, v55, v56, v57, v58);
  }
LABEL_54:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_126;
  v33 = *((_DWORD *)servantFaceIcon + 6);
  if ( v33 >= 1 )
  {
    if ( v33 == 1 && v5->fields.isInvalidRarity )
    {
      item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
      v34 = *((_QWORD *)servantFaceIcon + 2);
      v35 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*((_DWORD *)servantFaceIcon + 7);
      if ( !v34 )
        goto LABEL_126;
      if ( *(_DWORD *)(v34 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)servantFaceIcon + 6) = 2;
        *(_QWORD *)(v34 + 40) = item;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v34 + 40), (int32_t)item, v27, v28, v29, v30, v31, v32);
      }
    }
    servantFaceIcon = this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = System_Collections_Generic_List_object___ToArray(
                          (System_Collections_Generic_List_object__o *)servantFaceIcon,
                          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
        goto LABEL_80;
      }
    }
LABEL_126:
    sub_1D0F30C(servantFaceIcon, item);
  }
LABEL_80:
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_126;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    servantFaceIcon = this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)servantFaceIcon,
          v5->fields.isChocolateSvtEquip,
          0);
        return;
      }
    }
    goto LABEL_126;
  }
}