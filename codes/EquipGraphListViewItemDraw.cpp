void EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937A65 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_5937A65 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
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
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_5937A67 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A67 = 1;
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
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_35;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_35;
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
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_35;
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
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_35;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v15);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
        return;
      }
LABEL_35:
      sub_21FFECC(Component_object, v8);
    }
  }
}


void EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        int32_t mode,
        bool afterEndSelectConfirmBaseItem,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *v7; // x19
  int *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v14; // w9
  __int64 v15; // x2
  UILabel_o *skillInvalidLabel; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_String_o *v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_object__o *v34; // x21
  System_Collections_Generic_List_object__o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int *v47; // x1
  Il2CppClass **v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_List_object__o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  int v58; // w8
  System_String_o *v59; // x23
  Il2CppObject *v60; // x0
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  int v75; // w8
  System_String_o *v76; // x23
  Il2CppObject *v77; // x0
  System_String_o *v78; // x23
  Il2CppObject *v79; // x24
  Il2CppObject *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  int *v90; // x1
  Il2CppClass **v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  UILabel_o *v122; // x23
  __int64 v123; // x2
  struct UILabel_o *v124; // x8
  int32_t v125; // w22
  System_String_o *v126; // x23
  Il2CppObject *v127; // x24
  Il2CppObject *v128; // x0
  System_String_o *UseEquipFrameName_k__BackingField; // x1
  UILabel_o *warningLabel2; // x23
  __int64 v131; // x2
  struct UILabel_o *v132; // x8
  int32_t mWidth; // w22
  BalanceConfig_c *v134; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UILabel_o *v136; // x8
  __int64 v137; // x2
  UILabel_o *warningLabel3; // x22
  UILabel_o *warningLabel; // x22
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  __int64 v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  __int64 v149; // x8
  int v150; // w8
  __int64 v151; // x8
  _QWORD *v152; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  __int64 v155; // x2
  UnityEngine_Object_o *friendShipSprite; // x21
  __int64 v157; // x2
  UnityEngine_Object_o *chocolateSprite; // x21
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-48h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  v7 = item;
  if ( (byte_5937A66 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_16061/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_21FFC50(&StringLiteral_12005/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_21FFC50(&StringLiteral_16078/*"WAVE_BATTLE_EQUIP_PARTY"*/);
    sub_21FFC50(&StringLiteral_16085/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_21FFC50(&StringLiteral_16123/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_5680/*"EQUIP_GRAPH_USE"*/);
    byte_5937A66 = 1;
  }
  if ( !v7 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_201;
  ServantFaceIconComponent__Set_48018228(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v7->fields.userSvtEntity,
    v7->fields.iconLabelInfo1,
    v7->fields.iconLabelInfo2,
    1,
    0);
  servantEntity = v7->fields.servantEntity;
  servantFaceIcon = (int *)this->fields.costIconLabel;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !servantFaceIcon )
      goto LABEL_201;
  }
  else
  {
    cost = 0;
    if ( !servantFaceIcon )
      goto LABEL_201;
  }
  UIIconLabel__Set_48040364((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0, 0, 0, 0, 0, 0);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_201;
  size = messageLabelList->fields._size;
  v14 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  servantFaceIcon = (int *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_201;
  (*(void (__fastcall **)(int *, _QWORD, double))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (int *)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_201;
  (*(void (__fastcall **)(int *, _QWORD, double))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (int *)this->fields.warningLabel2;
  if ( !servantFaceIcon )
    goto LABEL_201;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.warningLabel3;
  if ( !servantFaceIcon )
    goto LABEL_201;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_201;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_201;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_201;
  UIWidget__set_height((UIWidget_o *)servantFaceIcon, 44, 0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( v7->fields.isInvalidRarity )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v15);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_201;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_201;
    v23 = *((_QWORD *)servantFaceIcon + 2);
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v23 )
      goto LABEL_201;
    v25 = servantFaceIcon[6];
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * v25;
      servantFaceIcon[6] = v25 + 1;
      *(_QWORD *)(v26 + 32) = item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)item, v17, v18, v19, v20, v21, v22);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_201;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( v7->fields.isBase || v7->fields.isOldBase )
  {
    servantFaceIcon = (int *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_201;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_201;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_201;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( afterEndSelectConfirmBaseItem )
  {
    servantFaceIcon = (int *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_201;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_201;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_201;
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_46;
  }
  if ( !EquipGraphListViewItem__get_IsUse(v7, (const MethodInfo *)item) )
  {
    if ( !v7->fields._IsUnique_k__BackingField )
    {
      servantFaceIcon = (int *)this->fields.warningLabel;
      if ( !servantFaceIcon )
        goto LABEL_201;
      v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_46:
      UILabel__set_text((UILabel_o *)servantFaceIcon, v27, 0);
      goto LABEL_172;
    }
    v34 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    v55 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = (int *)this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_201;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    servantFaceIcon = (int *)this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_201;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    if ( v7->fields._IsClearedWave_k__BackingField )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_16061/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
      if ( !v34 )
        goto LABEL_201;
      sub_1FEBF38(v34, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)sub_1FEBF38(v34, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      if ( !v55 )
        goto LABEL_201;
      sub_1FEBF38(v55, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_201;
    }
    else
    {
      if ( v7->fields._UniqueOrganizedWave_k__BackingField >= 1 )
      {
        v75 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( v7->fields._IsWaveSetupSwitchParty_k__BackingField )
        {
          if ( !v75 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_16078/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
          v77 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                  v7->fields._UniqueOrganizedWave_k__BackingField,
                                  0);
          servantFaceIcon = (int *)System_String__Format(v76, v77, 0);
          if ( !v34 )
            goto LABEL_201;
        }
        else
        {
          if ( !v75 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
          v126 = LocalizationManager__Get((System_String_o *)StringLiteral_16085/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
          UniqueOrganizedWave_k__BackingField = v7->fields._UniqueOrganizedWave_k__BackingField;
          v127 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &UniqueOrganizedWave_k__BackingField);
          MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
          v128 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &MaxWave_k__BackingField);
          servantFaceIcon = (int *)System_String__Format_75484576(v126, v127, v128, 0);
          if ( !v34 )
            goto LABEL_201;
        }
        sub_1FEBF38(v34, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
        servantFaceIcon = (int *)sub_1FEBF38(
                                   v34,
                                   StringLiteral_43/*"\n"*/,
                                   Method_System_Collections_Generic_List_string__Add__);
        if ( !v55 )
          goto LABEL_201;
        sub_1FEBF38(v55, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
        servantFaceIcon = (int *)this->fields.maskSprite2;
        if ( !servantFaceIcon )
          goto LABEL_201;
        UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_16123/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/, 0);
      if ( !v34 )
        goto LABEL_201;
      sub_1FEBF38(v34, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)sub_1FEBF38(v34, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      if ( !v55 )
        goto LABEL_201;
      sub_1FEBF38(v55, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_201;
    }
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    if ( v7->fields.isDispEquipFrameName )
    {
      UseEquipFrameName_k__BackingField = v7->fields._UseEquipFrameName_k__BackingField;
    }
    else
    {
      servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !servantFaceIcon )
        goto LABEL_201;
      UseEquipFrameName_k__BackingField = PartyOrganizationUtility__GetServantShortName(
                                            (PartyOrganizationUtility_o *)servantFaceIcon,
                                            v7->fields._EquipUseBaseServantId_k__BackingField,
                                            v7->fields._EquipUseServantId_k__BackingField,
                                            1,
                                            0);
    }
    sub_1FEBF38(v55, UseEquipFrameName_k__BackingField, Method_System_Collections_Generic_List_string__Add__);
    warningLabel2 = this->fields.warningLabel2;
    servantFaceIcon = (int *)System_String__Join_75485788(
                               (System_String_o *)StringLiteral_1/*""*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v55,
                               0);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
      v132 = this->fields.warningLabel2;
      if ( v132 )
      {
        mWidth = v132->fields.mWidth;
        v134 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v131);
          v134 = BalanceConfig_TypeInfo;
        }
        static_fields = v134->static_fields;
        servantFaceIcon = (int *)this->fields.warningLabel2;
        if ( mWidth <= static_fields->UseEquipServantNameTextMaxWidth )
          goto LABEL_163;
        if ( !servantFaceIcon )
          goto LABEL_201;
        UILabel__set_spacingX((UILabel_o *)servantFaceIcon, -2, 0);
LABEL_155:
        v136 = this->fields.warningLabel2;
        if ( !v136 )
          goto LABEL_201;
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_201;
        UILabel__set_text((UILabel_o *)servantFaceIcon, v136->fields.mText, 0);
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_201;
        servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
        if ( !servantFaceIcon )
          goto LABEL_201;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
        servantFaceIcon = (int *)BalanceConfig_TypeInfo;
        warningLabel3 = this->fields.warningLabel3;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v137);
        if ( !warningLabel3 )
          goto LABEL_201;
        UILabel__SetCondensedScale(
          warningLabel3,
          BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth,
          0,
          0);
        goto LABEL_166;
      }
    }
LABEL_201:
    sub_21FFECC(servantFaceIcon, item);
  }
  v34 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  v35 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( v7->fields._IsClearedWave_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_16061/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
    if ( !v34 )
      goto LABEL_201;
    items = v34->fields._items;
    v45 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !items )
      goto LABEL_201;
    v46 = v34->fields._size;
    v47 = servantFaceIcon;
    if ( (unsigned int)v46 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + v46;
      v34->fields._size = v46 + 1;
      v48[4] = (Il2CppClass *)v47;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v47, v38, v39, v40, v41, v42, v43);
    }
    v61 = v34->fields._items;
    v62 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v34->fields._version;
    if ( !v61 )
      goto LABEL_201;
    v63 = v34->fields._size;
    if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &v61->obj.klass + v63;
      v34->fields._size = v63 + 1;
      v64[4] = (Il2CppClass *)item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)item, v49, v50, v51, v52, v53, v54);
    }
    if ( !v35 )
      goto LABEL_201;
    v71 = v35->fields._items;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v72 = Method_System_Collections_Generic_List_string__Add__;
    ++v35->fields._version;
    if ( !v71 )
      goto LABEL_201;
    v73 = v35->fields._size;
    if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        (Il2CppObject *)item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &v71->obj.klass + v73;
      v35->fields._size = v73 + 1;
      v74[4] = (Il2CppClass *)item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)item, v65, v66, v67, v68, v69, v70);
    }
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_201;
  }
  else
  {
    if ( v7->fields._OrganizedWave_k__BackingField >= 1 )
    {
      v58 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v7->fields._IsWaveSetupSwitchParty_k__BackingField )
      {
        if ( !v58 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_16078/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
        v60 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                v7->fields._OrganizedWave_k__BackingField,
                                0);
        servantFaceIcon = (int *)System_String__Format(v59, v60, 0);
        if ( !v34 )
          goto LABEL_201;
      }
      else
      {
        if ( !v58 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_16085/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
        UniqueOrganizedWave_k__BackingField = v7->fields._OrganizedWave_k__BackingField;
        v79 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
        v80 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &MaxWave_k__BackingField);
        servantFaceIcon = (int *)System_String__Format_75484576(v78, v79, v80, 0);
        if ( !v34 )
          goto LABEL_201;
      }
      sub_1FEBF38(v34, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)sub_1FEBF38(v34, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      if ( !v35 )
        goto LABEL_201;
      sub_1FEBF38(v35, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_201;
      UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EQUIP_GRAPH_USE"*/, 0);
    if ( !v34 )
      goto LABEL_201;
    v87 = v34->fields._items;
    v88 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v87 )
      goto LABEL_201;
    v89 = v34->fields._size;
    v90 = servantFaceIcon;
    if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v87->obj.klass + v89;
      v34->fields._size = v89 + 1;
      v91[4] = (Il2CppClass *)v90;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v91 + 4), (int32_t)v90, v81, v82, v83, v84, v85, v86);
    }
    v98 = v34->fields._items;
    v99 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v34->fields._version;
    if ( !v98 )
      goto LABEL_201;
    v100 = v34->fields._size;
    if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v101 = &v98->obj.klass + v100;
      v34->fields._size = v100 + 1;
      v101[4] = (Il2CppClass *)item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v101 + 4), (int32_t)item, v92, v93, v94, v95, v96, v97);
    }
    if ( !v35 )
      goto LABEL_201;
    v108 = v35->fields._items;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v109 = Method_System_Collections_Generic_List_string__Add__;
    ++v35->fields._version;
    if ( !v108 )
      goto LABEL_201;
    v110 = v35->fields._size;
    if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        (Il2CppObject *)item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v35->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v111 + 4), (int32_t)item, v102, v103, v104, v105, v106, v107);
    }
    servantFaceIcon = (int *)this->fields.maskSprite2;
    if ( !servantFaceIcon )
      goto LABEL_201;
  }
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  if ( v7->fields.isDispEquipFrameName )
  {
    v118 = v35->fields._items;
    item = (EquipGraphListViewItem_o *)v7->fields._UseEquipFrameName_k__BackingField;
    v119 = Method_System_Collections_Generic_List_string__Add__;
    ++v35->fields._version;
    if ( !v118 )
      goto LABEL_201;
  }
  else
  {
    servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_201;
    servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                               (PartyOrganizationUtility_o *)servantFaceIcon,
                               v7->fields._EquipUseBaseServantId_k__BackingField,
                               v7->fields._EquipUseServantId_k__BackingField,
                               1,
                               0);
    v118 = v35->fields._items;
    v119 = Method_System_Collections_Generic_List_string__Add__;
    ++v35->fields._version;
    if ( !v118 )
      goto LABEL_201;
    item = (EquipGraphListViewItem_o *)servantFaceIcon;
  }
  v120 = v35->fields._size;
  if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)item,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
  }
  else
  {
    v121 = &v118->obj.klass + v120;
    v35->fields._size = v120 + 1;
    v121[4] = (Il2CppClass *)item;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v121 + 4), (int32_t)item, v112, v113, v114, v115, v116, v117);
  }
  v122 = this->fields.warningLabel2;
  servantFaceIcon = (int *)System_String__Join_75485788(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v35,
                             0);
  if ( !v122 )
    goto LABEL_201;
  UILabel__set_text(v122, (System_String_o *)servantFaceIcon, 0);
  v124 = this->fields.warningLabel2;
  if ( !v124 )
    goto LABEL_201;
  v125 = v124->fields.mWidth;
  servantFaceIcon = (int *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v123);
    servantFaceIcon = (int *)BalanceConfig_TypeInfo;
  }
  if ( v125 > *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1308LL) )
    goto LABEL_155;
  servantFaceIcon = (int *)this->fields.warningLabel2;
LABEL_163:
  if ( !servantFaceIcon )
    goto LABEL_201;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
LABEL_166:
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_75485788(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v34,
                             0);
  if ( !warningLabel )
    goto LABEL_201;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_201;
  v146 = *((_QWORD *)servantFaceIcon + 2);
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v147 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v146 )
    goto LABEL_201;
  v148 = servantFaceIcon[6];
  if ( (unsigned int)v148 >= *(_DWORD *)(v146 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
  }
  else
  {
    v149 = v146 + 8 * v148;
    servantFaceIcon[6] = v148 + 1;
    *(_QWORD *)(v149 + 32) = item;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v149 + 32), (int32_t)item, v140, v141, v142, v143, v144, v145);
  }
LABEL_172:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_201;
  v150 = servantFaceIcon[6];
  if ( v150 >= 1 )
  {
    if ( v150 == 1 && v7->fields.isInvalidRarity )
    {
      v151 = *((_QWORD *)servantFaceIcon + 2);
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v152 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v151 )
        goto LABEL_201;
      if ( (*(_DWORD *)(v151 + 24) & 0xFFFFFFFE) != 0 )
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v151 + 40) = item;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v151 + 40), (int32_t)item, v28, v29, v30, v31, v32, v33);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_201;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_201;
    SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v28);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = (int *)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v155);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = (int *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_201;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v157);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    servantFaceIcon = (int *)this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)servantFaceIcon,
          v7->fields.isChocolateSvtEquip,
          0);
        return;
      }
    }
    goto LABEL_201;
  }
}