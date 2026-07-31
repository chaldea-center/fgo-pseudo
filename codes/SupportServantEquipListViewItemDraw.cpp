void SupportServantEquipListViewItemDraw___ctor(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportServantEquipListViewItemDraw__Awake(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934BE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_5934BE7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListViewItemDraw__SetInput(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
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
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  _BOOL4 isChoice; // w8
  bool v18; // zf
  bool v19; // w8
  char v20; // w10
  bool v21; // w1

  if ( (byte_5934BE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934BE9 = 1;
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
        goto LABEL_38;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v14);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
        if ( Component_object )
        {
          isChoice = item->fields.isChoice;
          v18 = !isChoice;
          v19 = isChoice;
          v20 = v18;
          if ( item->fields.isSwapChoice )
            v21 = v20;
          else
            v21 = v19;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v21, 0);
          return;
        }
      }
LABEL_38:
      sub_21FFECC(Component_object, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v11; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
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
  __int64 v30; // x2
  System_String_o *v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int v38; // w8
  __int64 v39; // x8
  _QWORD *v40; // x9
  UILabel_o *warningLabel; // x21
  struct UILabel_o *v42; // x21
  System_String_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  PartyOrganizationUtility_o *v46; // x21
  __int64 v47; // x2
  __int64 v48; // x22
  __int64 v49; // x23
  int32_t v50; // w22
  System_String_o *ServantShortName; // x0
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  __int64 v54; // x2
  UnityEngine_Object_o *friendShipSprite; // x21
  __int64 v56; // x2
  UnityEngine_Object_o *chocolateSprite; // x21
  UILabel_o *warningLabel2; // x21
  __int64 v59; // x2
  struct UILabel_o *v60; // x8
  int32_t mWidth; // w21
  struct UILabel_o *v62; // x8
  __int64 v63; // x2
  UILabel_o *warningLabel3; // x21
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  v5 = item;
  if ( (byte_5934BE8 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_5681/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/);
    sub_21FFC50(&StringLiteral_12005/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_5680/*"EQUIP_GRAPH_USE"*/);
    byte_5934BE8 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_126;
  ServantFaceIconComponent__Set_48018228(
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v11);
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
  v17 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  servantFaceIcon = this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_126;
  (*(void (__fastcall **)(void *, _QWORD, double))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_126;
  (*(void (__fastcall **)(void *, _QWORD, double))(*(_QWORD *)servantFaceIcon + 440LL))(
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v18);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_126;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_126;
    v26 = *((_QWORD *)servantFaceIcon + 2);
    item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
    v27 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*((_DWORD *)servantFaceIcon + 7);
    if ( !v26 )
      goto LABEL_126;
    v28 = *((int *)servantFaceIcon + 6);
    if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = v26 + 8 * v28;
      *((_DWORD *)servantFaceIcon + 6) = v28 + 1;
      *(_QWORD *)(v29 + 32) = item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)item, v20, v21, v22, v23, v24, v25);
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
    v31 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v31, 0);
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
    v31 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_53;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v30);
  servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EQUIP_GRAPH_USE"*/, 0);
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
  v42 = this->fields.warningLabel;
  if ( !v42 )
    goto LABEL_126;
  v43 = System_String__Concat_75438412(v42->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v42, v43, 0);
  if ( v5->fields._EquipUseUserServantEntity_k__BackingField )
  {
    servantFaceIcon = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v5->fields._EquipUseUserServantEntity_k__BackingField )
      goto LABEL_126;
    v46 = (PartyOrganizationUtility_o *)servantFaceIcon;
    servantFaceIcon = UserServantEntity__get_BaseServantEntity(v5->fields._EquipUseUserServantEntity_k__BackingField, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    v48 = *((_QWORD *)servantFaceIcon + 2);
    v49 = *((_QWORD *)servantFaceIcon + 3);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v47);
    *(_QWORD *)&v75.fields.currentCryptoKey = v48;
    *(_QWORD *)&v75.fields.fakeValue = v49;
    servantFaceIcon = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v75, 0);
    if ( !v5->fields._EquipUseUserServantEntity_k__BackingField )
      goto LABEL_126;
    v50 = (int)servantFaceIcon;
    servantFaceIcon = (void *)UserServantEntity__GetServantId(
                                v5->fields._EquipUseUserServantEntity_k__BackingField,
                                -1,
                                0);
    if ( !v46 )
      goto LABEL_126;
    ServantShortName = PartyOrganizationUtility__GetServantShortName(v46, v50, (int32_t)servantFaceIcon, 1, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
    ServantShortName = LocalizationManager__Get((System_String_o *)StringLiteral_5681/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/, 0);
  }
  warningLabel2 = this->fields.warningLabel2;
  servantFaceIcon = System_String__Concat_75438412((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0);
  if ( !warningLabel2 )
    goto LABEL_126;
  UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
  v60 = this->fields.warningLabel2;
  if ( !v60 )
    goto LABEL_126;
  mWidth = v60->fields.mWidth;
  servantFaceIcon = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v59);
    servantFaceIcon = BalanceConfig_TypeInfo;
  }
  if ( mWidth <= *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1308LL) )
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
    v62 = this->fields.warningLabel2;
    if ( !v62 )
      goto LABEL_126;
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)servantFaceIcon, v62->fields.mText, 0);
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_126;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    servantFaceIcon = BalanceConfig_TypeInfo;
    warningLabel3 = this->fields.warningLabel3;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v63);
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
  v71 = *((_QWORD *)servantFaceIcon + 2);
  item = (SupportServantEquipListViewItem_o *)this->fields.warningLabel;
  v72 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*((_DWORD *)servantFaceIcon + 7);
  if ( !v71 )
    goto LABEL_126;
  v73 = *((int *)servantFaceIcon + 6);
  if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = v71 + 8 * v73;
    *((_DWORD *)servantFaceIcon + 6) = v73 + 1;
    *(_QWORD *)(v74 + 32) = item;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 32), (int32_t)item, v65, v66, v67, v68, v69, v70);
  }
LABEL_54:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_126;
  v38 = *((_DWORD *)servantFaceIcon + 6);
  if ( v38 >= 1 )
  {
    if ( v38 == 1 && v5->fields.isInvalidRarity )
    {
      v39 = *((_QWORD *)servantFaceIcon + 2);
      item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
      v40 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*((_DWORD *)servantFaceIcon + 7);
      if ( !v39 )
        goto LABEL_126;
      if ( (*(_DWORD *)(v39 + 24) & 0xFFFFFFFE) != 0 )
      {
        *(_QWORD *)(v39 + 40) = item;
        *((_DWORD *)servantFaceIcon + 6) = 2;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 40), (int32_t)item, v32, v33, v34, v35, v36, v37);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
    }
    servantFaceIcon = this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = System_Collections_Generic_List_object___ToArray(
                          (System_Collections_Generic_List_object__o *)servantFaceIcon,
                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
        goto LABEL_84;
      }
    }
LABEL_126:
    sub_21FFECC(servantFaceIcon, item);
  }
LABEL_84:
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v32);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v54);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v56);
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