void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FC4A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v6);
    byte_40FC4A7 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v11; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40FC4A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FC4A9 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !v9 )
        goto LABEL_33;
      Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v9,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_33;
      UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
      v11 = this->fields.baseButton;
      if ( !v11 )
        goto LABEL_33;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v11->klass->vtable._14_SetState.method)(
        v11,
        0LL,
        1LL,
        v11->klass->vtable._15_OnPress.methodPtr);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !v13 )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !v16 )
        goto LABEL_33;
      v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !v17 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v17, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v19 = this->fields.selectObject;
      if ( v19 )
      {
        UnityEngine_GameObject__SetActive(v19, item->fields.isBase, 0LL);
        return;
      }
LABEL_33:
      sub_B170D4();
    }
  }
}


void __fastcall EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  UIIconLabel_o *costIconLabel; // x0
  int32_t cost; // w2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x0
  struct UILabel_o *warningLabel; // x0
  struct UILabel_o *skillInvalidLabel; // x0
  UILabel_o *v29; // x21
  System_String_o *v30; // x0
  struct System_Collections_Generic_List_UIWidget__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v38; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x0
  int size; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UIWidget_array *v42; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Object_o *chocolateSprite; // x21
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x21
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  System_String_o *v54; // x22
  Il2CppObject *v55; // x23
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x1
  const MethodInfo_2F25CD8 *v60; // x2
  UnityEngine_Component_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  System_String_o *v63; // x22
  Il2CppObject *v64; // x23
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *v69; // x22
  System_String_o *v70; // x0
  struct System_Collections_Generic_List_UIWidget__o *v71; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FC4A8 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v12);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_26, v16);
    sub_B16FFC(&StringLiteral_11583, v17);
    sub_B16FFC(&StringLiteral_15289, v18);
    sub_B16FFC(&StringLiteral_15290, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    sub_B16FFC(&StringLiteral_5513, v21);
    byte_40FC4A8 = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_87;
  ServantFaceIconComponent__Set_30631556(
    servantFaceIcon,
    item->fields.userSvtEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0LL);
  servantEntity = item->fields.servantEntity;
  costIconLabel = this->fields.costIconLabel;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !costIconLabel )
      goto LABEL_87;
  }
  else
  {
    cost = 0;
    if ( !costIconLabel )
      goto LABEL_87;
  }
  UIIconLabel__Set_40377052(costIconLabel, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_87;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)messageLabelList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_87;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))warningLabel->klass->vtable._8_set_alpha.method)(
    warningLabel,
    warningLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( !skillInvalidLabel )
    goto LABEL_87;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))skillInvalidLabel->klass->vtable._8_set_alpha.method)(
    skillInvalidLabel,
    skillInvalidLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v29 = this->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11583, 0LL);
    if ( !v29 )
      goto LABEL_87;
    UILabel__set_text(v29, v30, 0LL);
    v31 = this->fields.messageLabelList;
    if ( !v31 )
      goto LABEL_87;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !v29 )
      goto LABEL_87;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1, 0LL);
  }
  if ( item->fields.isBase || item->fields.isOldBase )
    goto LABEL_24;
  if ( (item->fields.wearerMember & 0x80000000) != 0 )
  {
    if ( !item->fields._IsUnique_k__BackingField )
    {
LABEL_24:
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_87;
      gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !gameObject )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      v38 = this->fields.warningLabel;
      if ( !v38 )
        goto LABEL_87;
      UILabel__set_text(v38, (System_String_o *)StringLiteral_1, 0LL);
      goto LABEL_28;
    }
    v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v32,
                                                                                                    v33,
                                                                                                    v34,
                                                                                                    v35);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v51,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
    v61 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v61 )
      goto LABEL_87;
    v62 = UnityEngine_Component__get_gameObject(v61, 0LL);
    if ( !v62 )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive(v62, 1, 0LL);
    if ( item->fields._UniqueOrganizedWave_k__BackingField >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_15290, 0LL);
      UniqueOrganizedWave_k__BackingField = item->fields._UniqueOrganizedWave_k__BackingField;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
      v66 = System_String__Format_43739268(v63, v64, v65, 0LL);
      if ( !v51 )
        goto LABEL_87;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_15289, 0LL);
    if ( !v51 )
      goto LABEL_87;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v51,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v51,
      (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_5513, 0LL);
    v60 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__;
    v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)v68;
  }
  else
  {
    v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v32,
                                                                                                    v33,
                                                                                                    v34,
                                                                                                    v35);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v51,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
    v52 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v52 )
      goto LABEL_87;
    v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
    if ( !v53 )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive(v53, 1, 0LL);
    if ( item->fields._OrganizedWave_k__BackingField >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_15290, 0LL);
      UniqueOrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
      v57 = System_String__Format_43739268(v54, v55, v56, 0LL);
      if ( !v51 )
        goto LABEL_87;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_5513, 0LL);
    if ( !v51 )
      goto LABEL_87;
    v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)v58;
    v60 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v51, v59, v60);
  v69 = this->fields.warningLabel;
  v70 = System_String__Join_43799176(
          (System_String_o *)StringLiteral_1,
          (System_Collections_Generic_IEnumerable_string__o *)v51,
          0LL);
  if ( !v69 )
    goto LABEL_87;
  UILabel__set_text(v69, v70, 0LL);
  v71 = this->fields.messageLabelList;
  if ( !v71 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v71,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningLabel,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_28:
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.messageLabelList;
  if ( !v39 )
    goto LABEL_87;
  size = v39->fields._size;
  if ( size >= 1 )
  {
    if ( size == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v39,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.messageLabelList;
      if ( !v39 )
        goto LABEL_87;
    }
    messageLabel = this->fields.messageLabel;
    v42 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_87;
    SwitchUIWidgetComponent__Set(messageLabel, v42, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    v44 = this->fields.selectObject;
    if ( !v44 )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive(v44, item->fields.isBase, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    v46 = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !v46 )
      goto LABEL_87;
    v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
    if ( !v47 )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive(v47, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    v49 = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( v49 )
    {
      v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
      if ( v50 )
      {
        UnityEngine_GameObject__SetActive(v50, item->fields.isChocolateSvtEquip, 0LL);
        return;
      }
    }
LABEL_87:
    sub_B170D4();
  }
}