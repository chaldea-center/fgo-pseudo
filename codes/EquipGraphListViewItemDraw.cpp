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

  if ( (byte_596FC5C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_596FC5C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_596FC5E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC5E = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
        return;
      }
LABEL_35:
      sub_2213CDC(Component_object, v8);
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
  UILabel_o *skillInvalidLabel; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_String_o *v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_object__o *v33; // x21
  System_Collections_Generic_List_object__o *v34; // x22
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  int *v45; // x1
  Il2CppClass **v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_List_object__o *v53; // x22
  __int64 v54; // x1
  int v55; // w8
  System_String_o *v56; // x23
  Il2CppObject *v57; // x0
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  int v72; // w8
  System_String_o *v73; // x23
  Il2CppObject *v74; // x0
  System_String_o *v75; // x23
  Il2CppObject *v76; // x24
  Il2CppObject *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  int *v87; // x1
  Il2CppClass **v88; // x0
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  UILabel_o *v119; // x23
  struct UILabel_o *v120; // x8
  int32_t v121; // w22
  System_String_o *v122; // x23
  Il2CppObject *v123; // x24
  Il2CppObject *v124; // x0
  System_String_o *UseEquipFrameName_k__BackingField; // x1
  UILabel_o *warningLabel2; // x23
  struct UILabel_o *v127; // x8
  int32_t mWidth; // w22
  BalanceConfig_c *v129; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UILabel_o *v131; // x8
  UILabel_o *warningLabel3; // x22
  UILabel_o *warningLabel; // x22
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  __int64 v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  __int64 v143; // x8
  int v144; // w8
  __int64 v145; // x8
  _QWORD *v146; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-48h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  v7 = item;
  if ( (byte_596FC5D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_16092/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_2213A60(&StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_2213A60(&StringLiteral_16109/*"WAVE_BATTLE_EQUIP_PARTY"*/);
    sub_2213A60(&StringLiteral_16116/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_2213A60(&StringLiteral_16154/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_5692/*"EQUIP_GRAPH_USE"*/);
    byte_596FC5D = 1;
  }
  if ( !v7 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_201;
  ServantFaceIconComponent__Set_48049524(
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
  UIIconLabel__Set_48071660((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0, 0, 0, 0, 0, 0);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_201;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_201;
    v22 = *((_QWORD *)servantFaceIcon + 2);
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v23 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v22 )
      goto LABEL_201;
    v24 = servantFaceIcon[6];
    if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = v22 + 8 * v24;
      servantFaceIcon[6] = v24 + 1;
      *(_QWORD *)(v25 + 32) = item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)item, v16, v17, v18, v19, v20, v21);
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
    v26 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_46;
  }
  if ( !EquipGraphListViewItem__get_IsUse(v7, (const MethodInfo *)item) )
  {
    if ( !v7->fields._IsUnique_k__BackingField )
    {
      servantFaceIcon = (int *)this->fields.warningLabel;
      if ( !servantFaceIcon )
        goto LABEL_201;
      v26 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_46:
      UILabel__set_text((UILabel_o *)servantFaceIcon, v26, 0);
      goto LABEL_172;
    }
    v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    v53 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_16092/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
      if ( !v33 )
        goto LABEL_201;
      sub_1FFEDA8(v33, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)sub_1FFEDA8(v33, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      if ( !v53 )
        goto LABEL_201;
      sub_1FFEDA8(v53, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_201;
    }
    else
    {
      if ( v7->fields._UniqueOrganizedWave_k__BackingField >= 1 )
      {
        v72 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( v7->fields._IsWaveSetupSwitchParty_k__BackingField )
        {
          if ( !v72 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
          v73 = LocalizationManager__Get((System_String_o *)StringLiteral_16109/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
          v74 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                  v7->fields._UniqueOrganizedWave_k__BackingField,
                                  0);
          servantFaceIcon = (int *)System_String__Format(v73, v74, 0);
          if ( !v33 )
            goto LABEL_201;
        }
        else
        {
          if ( !v72 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
          v122 = LocalizationManager__Get((System_String_o *)StringLiteral_16116/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
          UniqueOrganizedWave_k__BackingField = v7->fields._UniqueOrganizedWave_k__BackingField;
          v123 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &UniqueOrganizedWave_k__BackingField);
          MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
          v124 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &MaxWave_k__BackingField);
          servantFaceIcon = (int *)System_String__Format_75697880(v122, v123, v124, 0);
          if ( !v33 )
            goto LABEL_201;
        }
        sub_1FFEDA8(v33, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
        servantFaceIcon = (int *)sub_1FFEDA8(
                                   v33,
                                   StringLiteral_43/*"\n"*/,
                                   Method_System_Collections_Generic_List_string__Add__);
        if ( !v53 )
          goto LABEL_201;
        sub_1FFEDA8(v53, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
        servantFaceIcon = (int *)this->fields.maskSprite2;
        if ( !servantFaceIcon )
          goto LABEL_201;
        UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_16154/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/, 0);
      if ( !v33 )
        goto LABEL_201;
      sub_1FFEDA8(v33, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)sub_1FFEDA8(v33, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      if ( !v53 )
        goto LABEL_201;
      sub_1FFEDA8(v53, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
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
      servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !servantFaceIcon )
        goto LABEL_201;
      UseEquipFrameName_k__BackingField = PartyOrganizationUtility__GetServantShortName(
                                            (PartyOrganizationUtility_o *)servantFaceIcon,
                                            v7->fields._EquipUseBaseServantId_k__BackingField,
                                            v7->fields._EquipUseServantId_k__BackingField,
                                            1,
                                            0);
    }
    sub_1FFEDA8(v53, UseEquipFrameName_k__BackingField, Method_System_Collections_Generic_List_string__Add__);
    warningLabel2 = this->fields.warningLabel2;
    servantFaceIcon = (int *)System_String__Join_75699092(
                               (System_String_o *)StringLiteral_1/*""*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v53,
                               0);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
      v127 = this->fields.warningLabel2;
      if ( v127 )
      {
        mWidth = v127->fields.mWidth;
        v129 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
          v129 = BalanceConfig_TypeInfo;
        }
        static_fields = v129->static_fields;
        servantFaceIcon = (int *)this->fields.warningLabel2;
        if ( mWidth <= static_fields->UseEquipServantNameTextMaxWidth )
          goto LABEL_163;
        if ( !servantFaceIcon )
          goto LABEL_201;
        UILabel__set_spacingX((UILabel_o *)servantFaceIcon, -2, 0);
LABEL_155:
        v131 = this->fields.warningLabel2;
        if ( !v131 )
          goto LABEL_201;
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_201;
        UILabel__set_text((UILabel_o *)servantFaceIcon, v131->fields.mText, 0);
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
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
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
    sub_2213CDC(servantFaceIcon, item);
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  v34 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( v7->fields._IsClearedWave_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_16092/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
    if ( !v33 )
      goto LABEL_201;
    items = v33->fields._items;
    v43 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_201;
    v44 = v33->fields._size;
    v45 = servantFaceIcon;
    if ( (unsigned int)v44 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &items->obj.klass + v44;
      v33->fields._size = v44 + 1;
      v46[4] = (Il2CppClass *)v45;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v45, v36, v37, v38, v39, v40, v41);
    }
    v58 = v33->fields._items;
    v59 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v33->fields._version;
    if ( !v58 )
      goto LABEL_201;
    v60 = v33->fields._size;
    if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)item,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->obj.klass + v60;
      v33->fields._size = v60 + 1;
      v61[4] = (Il2CppClass *)item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v61 + 4), (int32_t)item, v47, v48, v49, v50, v51, v52);
    }
    if ( !v34 )
      goto LABEL_201;
    v68 = v34->fields._items;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v69 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v68 )
      goto LABEL_201;
    v70 = v34->fields._size;
    if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)item,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = &v68->obj.klass + v70;
      v34->fields._size = v70 + 1;
      v71[4] = (Il2CppClass *)item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v71 + 4), (int32_t)item, v62, v63, v64, v65, v66, v67);
    }
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_201;
  }
  else
  {
    if ( v7->fields._OrganizedWave_k__BackingField >= 1 )
    {
      v55 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v7->fields._IsWaveSetupSwitchParty_k__BackingField )
      {
        if ( !v55 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_16109/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
        v57 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                v7->fields._OrganizedWave_k__BackingField,
                                0);
        servantFaceIcon = (int *)System_String__Format(v56, v57, 0);
        if ( !v33 )
          goto LABEL_201;
      }
      else
      {
        if ( !v55 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_16116/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
        UniqueOrganizedWave_k__BackingField = v7->fields._OrganizedWave_k__BackingField;
        v76 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
        v77 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &MaxWave_k__BackingField);
        servantFaceIcon = (int *)System_String__Format_75697880(v75, v76, v77, 0);
        if ( !v33 )
          goto LABEL_201;
      }
      sub_1FFEDA8(v33, servantFaceIcon, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)sub_1FFEDA8(v33, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      if ( !v34 )
        goto LABEL_201;
      sub_1FFEDA8(v34, StringLiteral_43/*"\n"*/, Method_System_Collections_Generic_List_string__Add__);
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_201;
      UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5692/*"EQUIP_GRAPH_USE"*/, 0);
    if ( !v33 )
      goto LABEL_201;
    v84 = v33->fields._items;
    v85 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !v84 )
      goto LABEL_201;
    v86 = v33->fields._size;
    v87 = servantFaceIcon;
    if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &v84->obj.klass + v86;
      v33->fields._size = v86 + 1;
      v88[4] = (Il2CppClass *)v87;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 4), (int32_t)v87, v78, v79, v80, v81, v82, v83);
    }
    v95 = v33->fields._items;
    v96 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v33->fields._version;
    if ( !v95 )
      goto LABEL_201;
    v97 = v33->fields._size;
    if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)item,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &v95->obj.klass + v97;
      v33->fields._size = v97 + 1;
      v98[4] = (Il2CppClass *)item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v98 + 4), (int32_t)item, v89, v90, v91, v92, v93, v94);
    }
    if ( !v34 )
      goto LABEL_201;
    v105 = v34->fields._items;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v106 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v105 )
      goto LABEL_201;
    v107 = v34->fields._size;
    if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)item,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    }
    else
    {
      v108 = &v105->obj.klass + v107;
      v34->fields._size = v107 + 1;
      v108[4] = (Il2CppClass *)item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v108 + 4), (int32_t)item, v99, v100, v101, v102, v103, v104);
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
    v115 = v34->fields._items;
    item = (EquipGraphListViewItem_o *)v7->fields._UseEquipFrameName_k__BackingField;
    v116 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v115 )
      goto LABEL_201;
  }
  else
  {
    servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_201;
    servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                               (PartyOrganizationUtility_o *)servantFaceIcon,
                               v7->fields._EquipUseBaseServantId_k__BackingField,
                               v7->fields._EquipUseServantId_k__BackingField,
                               1,
                               0);
    v115 = v34->fields._items;
    v116 = Method_System_Collections_Generic_List_string__Add__;
    ++v34->fields._version;
    if ( !v115 )
      goto LABEL_201;
    item = (EquipGraphListViewItem_o *)servantFaceIcon;
  }
  v117 = v34->fields._size;
  if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      (Il2CppObject *)item,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
  }
  else
  {
    v118 = &v115->obj.klass + v117;
    v34->fields._size = v117 + 1;
    v118[4] = (Il2CppClass *)item;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v118 + 4), (int32_t)item, v109, v110, v111, v112, v113, v114);
  }
  v119 = this->fields.warningLabel2;
  servantFaceIcon = (int *)System_String__Join_75699092(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v34,
                             0);
  if ( !v119 )
    goto LABEL_201;
  UILabel__set_text(v119, (System_String_o *)servantFaceIcon, 0);
  v120 = this->fields.warningLabel2;
  if ( !v120 )
    goto LABEL_201;
  v121 = v120->fields.mWidth;
  servantFaceIcon = (int *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
    servantFaceIcon = (int *)BalanceConfig_TypeInfo;
  }
  if ( v121 > *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1308LL) )
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
  servantFaceIcon = (int *)System_String__Join_75699092(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v33,
                             0);
  if ( !warningLabel )
    goto LABEL_201;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_201;
  v140 = *((_QWORD *)servantFaceIcon + 2);
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v141 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v140 )
    goto LABEL_201;
  v142 = servantFaceIcon[6];
  if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v143 = v140 + 8 * v142;
    servantFaceIcon[6] = v142 + 1;
    *(_QWORD *)(v143 + 32) = item;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v143 + 32), (int32_t)item, v134, v135, v136, v137, v138, v139);
  }
LABEL_172:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_201;
  v144 = servantFaceIcon[6];
  if ( v144 >= 1 )
  {
    if ( v144 == 1 && v7->fields.isInvalidRarity )
    {
      v145 = *((_QWORD *)servantFaceIcon + 2);
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v146 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v145 )
        goto LABEL_201;
      if ( (*(_DWORD *)(v145 + 24) & 0xFFFFFFFE) != 0 )
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v145 + 40) = item;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v145 + 40), (int32_t)item, v27, v28, v29, v30, v31, v32);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_201;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_201;
    SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = (int *)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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