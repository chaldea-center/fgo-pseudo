void EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42512 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4C42512 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5);
}


void EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4C42514 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42514 = 1;
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
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
        return;
      }
LABEL_35:
      sub_1C372B4(Component_object);
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
  int *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v14; // w9
  UILabel_o *skillInvalidLabel; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x1
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  const MethodInfo *v23; // x1
  System_String_o *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x21
  System_Collections_Generic_List_object__o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  int *v34; // x1
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  int *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  _BOOL4 IsWaveSetupSwitchParty_k__BackingField; // w23
  System_String_o *v49; // x23
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  Il2CppObject *v55; // x1
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  Il2CppObject *v60; // x1
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  _BOOL4 v65; // w23
  System_String_o *v66; // x23
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  Il2CppObject *v72; // x1
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x1
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  System_String_o *v82; // x23
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x5
  __int64 v87; // x6
  __int64 v88; // x7
  Il2CppObject *v89; // x24
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  __int64 v93; // x5
  __int64 v94; // x6
  __int64 v95; // x7
  Il2CppObject *v96; // x0
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  int *v100; // x1
  Il2CppClass **v101; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct System_Object_array *v104; // x8
  Il2CppObject *v105; // x1
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  Il2CppObject *v111; // x1
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  int *v121; // x1
  Il2CppClass **v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  Il2CppObject *v127; // x1
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  Il2CppObject *v132; // x1
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  Il2CppObject *UseEquipFrameName_k__BackingField; // x1
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  UILabel_o *warningLabel2; // x23
  struct UILabel_o *v145; // x8
  int32_t mWidth; // w22
  System_String_o *v147; // x23
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  __int64 v151; // x5
  __int64 v152; // x6
  __int64 v153; // x7
  Il2CppObject *v154; // x24
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  __int64 v158; // x5
  __int64 v159; // x6
  __int64 v160; // x7
  Il2CppObject *v161; // x0
  struct System_Object_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  int *v165; // x1
  Il2CppClass **v166; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  struct System_Object_array *v169; // x8
  Il2CppObject *v170; // x1
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  Il2CppObject *v176; // x1
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  int *v186; // x1
  Il2CppClass **v187; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  struct System_Object_array *v190; // x8
  _QWORD *v191; // x9
  Il2CppObject *v192; // x1
  __int64 v193; // x10
  Il2CppClass **v194; // x0
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  Il2CppObject *v197; // x1
  struct System_Object_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  Il2CppClass **v201; // x0
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  Il2CppObject *v204; // x1
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  UILabel_o *v209; // x23
  int32_t v210; // w22
  struct UILabel_o *v211; // x8
  UILabel_o *warningLabel3; // x22
  UILabel_o *warningLabel; // x22
  int32_t v214; // w2
  const MethodInfo *v215; // x3
  Il2CppObject *v216; // x1
  __int64 v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  __int64 v220; // x8
  int v221; // w8
  Il2CppObject *v222; // x1
  __int64 v223; // x8
  _QWORD *v224; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-48h] BYREF
  int32_t OrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C42513 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_15481/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C37058(&StringLiteral_11520/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C37058(&StringLiteral_15498/*"WAVE_BATTLE_EQUIP_PARTY"*/);
    sub_1C37058(&StringLiteral_15505/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_1C37058(&StringLiteral_15543/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_5492/*"EQUIP_GRAPH_USE"*/);
    byte_4C42513 = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_249;
  ServantFaceIconComponent__Set_41005332(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    item->fields.userSvtEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0);
  servantEntity = item->fields.servantEntity;
  servantFaceIcon = (int *)this->fields.costIconLabel;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !servantFaceIcon )
      goto LABEL_249;
  }
  else
  {
    cost = 0;
    if ( !servantFaceIcon )
      goto LABEL_249;
  }
  UIIconLabel__Set_41110308((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0, 0, 0, 0, 0, 0);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_249;
  size = messageLabelList->fields._size;
  v14 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  servantFaceIcon = (int *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_249;
  (*(void (__fastcall **)(int *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (int *)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_249;
  (*(void (__fastcall **)(int *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (int *)this->fields.warningLabel2;
  if ( !servantFaceIcon )
    goto LABEL_249;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.warningLabel3;
  if ( !servantFaceIcon )
    goto LABEL_249;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_249;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_249;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_249;
  UIWidget__set_height((UIWidget_o *)servantFaceIcon, 44, 0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11520/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_249;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_249;
    v18 = (Il2CppObject *)this->fields.skillInvalidLabel;
    v19 = *((_QWORD *)servantFaceIcon + 2);
    v20 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v19 )
      goto LABEL_249;
    v21 = servantFaceIcon[6];
    if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        v18,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = v19 + 8 * v21;
      servantFaceIcon[6] = v21 + 1;
      *(_QWORD *)(v22 + 32) = v18;
      sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v18, v16, v17);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_249;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( item->fields.isBase || item->fields.isOldBase )
  {
    servantFaceIcon = (int *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_249;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_249;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_249;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( afterEndSelectConfirmBaseItem )
  {
    servantFaceIcon = (int *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_249;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_249;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = (int *)this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_249;
    v24 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_46;
  }
  if ( EquipGraphListViewItem__get_IsUse(item, v23) )
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    v28 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( item->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15481/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
      if ( !v27 )
        goto LABEL_249;
      items = v27->fields._items;
      v32 = Method_System_Collections_Generic_List_string__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_249;
      v33 = v27->fields._size;
      v34 = servantFaceIcon;
      if ( (unsigned int)v33 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + v33;
        v27->fields._size = v33 + 1;
        v35[4] = (Il2CppClass *)v34;
        sub_1C36FFC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
      }
      v53 = v27->fields._items;
      v54 = Method_System_Collections_Generic_List_string__Add__;
      v55 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
      ++v27->fields._version;
      if ( !v53 )
        goto LABEL_249;
      v56 = v27->fields._size;
      if ( (unsigned int)v56 >= LODWORD(v53->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v55,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &v53->obj.klass + v56;
        v27->fields._size = v56 + 1;
        v57[4] = (Il2CppClass *)v55;
        sub_1C36FFC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v55, v36, v37);
      }
      if ( !v28 )
        goto LABEL_249;
      v60 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
      v61 = v28->fields._items;
      v62 = Method_System_Collections_Generic_List_string__Add__;
      ++v28->fields._version;
      if ( !v61 )
        goto LABEL_249;
      v63 = v28->fields._size;
      if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          v60,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &v61->obj.klass + v63;
        v28->fields._size = v63 + 1;
        v64[4] = (Il2CppClass *)v60;
        sub_1C36FFC((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v60, v58, v59);
      }
      servantFaceIcon = (int *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_249;
    }
    else
    {
      if ( item->fields._OrganizedWave_k__BackingField >= 1 )
      {
        IsWaveSetupSwitchParty_k__BackingField = item->fields._IsWaveSetupSwitchParty_k__BackingField;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsWaveSetupSwitchParty_k__BackingField )
        {
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
          v50 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                  item->fields._OrganizedWave_k__BackingField,
                                  0);
          servantFaceIcon = (int *)System_String__Format(v49, v50, 0);
          if ( !v27 )
            goto LABEL_249;
        }
        else
        {
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_15505/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
          OrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
          v89 = (Il2CppObject *)j_il2cpp_value_box_0(
                                  int_TypeInfo,
                                  &OrganizedWave_k__BackingField,
                                  v83,
                                  v84,
                                  v85,
                                  v86,
                                  v87,
                                  v88);
          MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
          v96 = (Il2CppObject *)j_il2cpp_value_box_0(
                                  int_TypeInfo,
                                  &MaxWave_k__BackingField,
                                  v90,
                                  v91,
                                  v92,
                                  v93,
                                  v94,
                                  v95);
          servantFaceIcon = (int *)System_String__Format_63602948(v82, v89, v96, 0);
          if ( !v27 )
            goto LABEL_249;
        }
        v97 = v27->fields._items;
        v98 = Method_System_Collections_Generic_List_string__Add__;
        ++v27->fields._version;
        if ( !v97 )
          goto LABEL_249;
        v99 = v27->fields._size;
        v100 = servantFaceIcon;
        if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v97->obj.klass + v99;
          v27->fields._size = v99 + 1;
          v101[4] = (Il2CppClass *)v100;
          sub_1C36FFC((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v100, v51, v52);
        }
        v104 = v27->fields._items;
        v105 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
        v106 = Method_System_Collections_Generic_List_string__Add__;
        ++v27->fields._version;
        if ( !v104 )
          goto LABEL_249;
        v107 = v27->fields._size;
        if ( (unsigned int)v107 >= LODWORD(v104->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            v105,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
        }
        else
        {
          v108 = &v104->obj.klass + v107;
          v27->fields._size = v107 + 1;
          v108[4] = (Il2CppClass *)v105;
          sub_1C36FFC((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v105, v102, v103);
        }
        if ( !v28 )
          goto LABEL_249;
        v111 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
        v112 = v28->fields._items;
        v113 = Method_System_Collections_Generic_List_string__Add__;
        ++v28->fields._version;
        if ( !v112 )
          goto LABEL_249;
        v114 = v28->fields._size;
        if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            v111,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
        }
        else
        {
          v115 = &v112->obj.klass + v114;
          v28->fields._size = v114 + 1;
          v115[4] = (Il2CppClass *)v111;
          sub_1C36FFC((CGThumbnailListItem_o *)(v115 + 4), (int32_t)v111, v109, v110);
        }
        servantFaceIcon = (int *)this->fields.maskSprite2;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5492/*"EQUIP_GRAPH_USE"*/, 0);
      if ( !v27 )
        goto LABEL_249;
      v118 = v27->fields._items;
      v119 = Method_System_Collections_Generic_List_string__Add__;
      ++v27->fields._version;
      if ( !v118 )
        goto LABEL_249;
      v120 = v27->fields._size;
      v121 = servantFaceIcon;
      if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
      }
      else
      {
        v122 = &v118->obj.klass + v120;
        v27->fields._size = v120 + 1;
        v122[4] = (Il2CppClass *)v121;
        sub_1C36FFC((CGThumbnailListItem_o *)(v122 + 4), (int32_t)v121, v116, v117);
      }
      v125 = v27->fields._items;
      v126 = Method_System_Collections_Generic_List_string__Add__;
      v127 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
      ++v27->fields._version;
      if ( !v125 )
        goto LABEL_249;
      v128 = v27->fields._size;
      if ( (unsigned int)v128 >= LODWORD(v125->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v127,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
      }
      else
      {
        v129 = &v125->obj.klass + v128;
        v27->fields._size = v128 + 1;
        v129[4] = (Il2CppClass *)v127;
        sub_1C36FFC((CGThumbnailListItem_o *)(v129 + 4), (int32_t)v127, v123, v124);
      }
      if ( !v28 )
        goto LABEL_249;
      v132 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
      v133 = v28->fields._items;
      v134 = Method_System_Collections_Generic_List_string__Add__;
      ++v28->fields._version;
      if ( !v133 )
        goto LABEL_249;
      v135 = v28->fields._size;
      if ( (unsigned int)v135 >= LODWORD(v133->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          v132,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
      }
      else
      {
        v136 = &v133->obj.klass + v135;
        v28->fields._size = v135 + 1;
        v136[4] = (Il2CppClass *)v132;
        sub_1C36FFC((CGThumbnailListItem_o *)(v136 + 4), (int32_t)v132, v130, v131);
      }
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_249;
    }
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_249;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    if ( item->fields.isDispEquipFrameName )
    {
      UseEquipFrameName_k__BackingField = (Il2CppObject *)item->fields._UseEquipFrameName_k__BackingField;
      v140 = v28->fields._items;
      v141 = Method_System_Collections_Generic_List_string__Add__;
      ++v28->fields._version;
      if ( !v140 )
        goto LABEL_249;
    }
    else
    {
      servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !servantFaceIcon )
        goto LABEL_249;
      servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                                 (PartyOrganizationUtility_o *)servantFaceIcon,
                                 item->fields._EquipUseServantId_k__BackingField,
                                 0);
      v140 = v28->fields._items;
      v141 = Method_System_Collections_Generic_List_string__Add__;
      ++v28->fields._version;
      if ( !v140 )
        goto LABEL_249;
      UseEquipFrameName_k__BackingField = (Il2CppObject *)servantFaceIcon;
    }
    v142 = v28->fields._size;
    if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        UseEquipFrameName_k__BackingField,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
    }
    else
    {
      v143 = &v140->obj.klass + v142;
      v28->fields._size = v142 + 1;
      v143[4] = (Il2CppClass *)UseEquipFrameName_k__BackingField;
      sub_1C36FFC((CGThumbnailListItem_o *)(v143 + 4), (int32_t)UseEquipFrameName_k__BackingField, v137, v138);
    }
    warningLabel2 = this->fields.warningLabel2;
    servantFaceIcon = (int *)System_String__Join_63604232(
                               (System_String_o *)StringLiteral_1/*""*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v28,
                               0);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
      v145 = this->fields.warningLabel2;
      if ( v145 )
      {
        mWidth = v145->fields.mWidth;
        servantFaceIcon = (int *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          servantFaceIcon = (int *)BalanceConfig_TypeInfo;
        }
        if ( mWidth <= *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1292LL) )
        {
          servantFaceIcon = (int *)this->fields.warningLabel2;
          if ( !servantFaceIcon )
            goto LABEL_249;
          goto LABEL_212;
        }
LABEL_204:
        v211 = this->fields.warningLabel2;
        if ( !v211 )
          goto LABEL_249;
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UILabel__set_text((UILabel_o *)servantFaceIcon, v211->fields.mText, 0);
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_249;
        servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
        if ( !servantFaceIcon )
          goto LABEL_249;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
        servantFaceIcon = (int *)BalanceConfig_TypeInfo;
        warningLabel3 = this->fields.warningLabel3;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !warningLabel3 )
          goto LABEL_249;
        UILabel__SetCondensedScale(
          warningLabel3,
          BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth,
          0,
          0);
        goto LABEL_214;
      }
    }
    goto LABEL_249;
  }
  if ( !item->fields._IsUnique_k__BackingField )
  {
    servantFaceIcon = (int *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_249;
    v24 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_46:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v24, 0);
    goto LABEL_220;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  servantFaceIcon = (int *)this->fields.warningLabel2;
  if ( !servantFaceIcon )
    goto LABEL_249;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (int *)this->fields.warningLabel3;
  if ( !servantFaceIcon )
    goto LABEL_249;
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  if ( item->fields._IsClearedWave_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15481/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
    if ( !v27 )
      goto LABEL_249;
    v41 = v27->fields._items;
    v42 = Method_System_Collections_Generic_List_string__Add__;
    ++v27->fields._version;
    if ( !v41 )
      goto LABEL_249;
    v43 = v27->fields._size;
    v44 = servantFaceIcon;
    if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v41->obj.klass + v43;
      v27->fields._size = v43 + 1;
      v45[4] = (Il2CppClass *)v44;
      sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v44, v39, v40);
    }
    v70 = v27->fields._items;
    v71 = Method_System_Collections_Generic_List_string__Add__;
    v72 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
    ++v27->fields._version;
    if ( !v70 )
      goto LABEL_249;
    v73 = v27->fields._size;
    if ( (unsigned int)v73 >= LODWORD(v70->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v72,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &v70->obj.klass + v73;
      v27->fields._size = v73 + 1;
      v74[4] = (Il2CppClass *)v72;
      sub_1C36FFC((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v72, v46, v47);
    }
    if ( !v38 )
      goto LABEL_249;
    v77 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
    v78 = v38->fields._items;
    v79 = Method_System_Collections_Generic_List_string__Add__;
    ++v38->fields._version;
    if ( !v78 )
      goto LABEL_249;
    v80 = v38->fields._size;
    if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v38,
        v77,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = &v78->obj.klass + v80;
      v38->fields._size = v80 + 1;
      v81[4] = (Il2CppClass *)v77;
      sub_1C36FFC((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v77, v75, v76);
    }
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_249;
  }
  else
  {
    if ( item->fields._UniqueOrganizedWave_k__BackingField >= 1 )
    {
      v65 = item->fields._IsWaveSetupSwitchParty_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v65 )
      {
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
        v67 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                item->fields._UniqueOrganizedWave_k__BackingField,
                                0);
        servantFaceIcon = (int *)System_String__Format(v66, v67, 0);
        if ( !v27 )
          goto LABEL_249;
      }
      else
      {
        v147 = LocalizationManager__Get((System_String_o *)StringLiteral_15505/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
        OrganizedWave_k__BackingField = item->fields._UniqueOrganizedWave_k__BackingField;
        v154 = (Il2CppObject *)j_il2cpp_value_box_0(
                                 int_TypeInfo,
                                 &OrganizedWave_k__BackingField,
                                 v148,
                                 v149,
                                 v150,
                                 v151,
                                 v152,
                                 v153);
        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
        v161 = (Il2CppObject *)j_il2cpp_value_box_0(
                                 int_TypeInfo,
                                 &MaxWave_k__BackingField,
                                 v155,
                                 v156,
                                 v157,
                                 v158,
                                 v159,
                                 v160);
        servantFaceIcon = (int *)System_String__Format_63602948(v147, v154, v161, 0);
        if ( !v27 )
          goto LABEL_249;
      }
      v162 = v27->fields._items;
      v163 = Method_System_Collections_Generic_List_string__Add__;
      ++v27->fields._version;
      if ( !v162 )
        goto LABEL_249;
      v164 = v27->fields._size;
      v165 = servantFaceIcon;
      if ( (unsigned int)v164 >= LODWORD(v162->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
      }
      else
      {
        v166 = &v162->obj.klass + v164;
        v27->fields._size = v164 + 1;
        v166[4] = (Il2CppClass *)v165;
        sub_1C36FFC((CGThumbnailListItem_o *)(v166 + 4), (int32_t)v165, v68, v69);
      }
      v169 = v27->fields._items;
      v170 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
      v171 = Method_System_Collections_Generic_List_string__Add__;
      ++v27->fields._version;
      if ( !v169 )
        goto LABEL_249;
      v172 = v27->fields._size;
      if ( (unsigned int)v172 >= LODWORD(v169->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v170,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
      }
      else
      {
        v173 = &v169->obj.klass + v172;
        v27->fields._size = v172 + 1;
        v173[4] = (Il2CppClass *)v170;
        sub_1C36FFC((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v170, v167, v168);
      }
      if ( !v38 )
        goto LABEL_249;
      v176 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
      v177 = v38->fields._items;
      v178 = Method_System_Collections_Generic_List_string__Add__;
      ++v38->fields._version;
      if ( !v177 )
        goto LABEL_249;
      v179 = v38->fields._size;
      if ( (unsigned int)v179 >= LODWORD(v177->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          v176,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
      }
      else
      {
        v180 = &v177->obj.klass + v179;
        v38->fields._size = v179 + 1;
        v180[4] = (Il2CppClass *)v176;
        sub_1C36FFC((CGThumbnailListItem_o *)(v180 + 4), (int32_t)v176, v174, v175);
      }
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_249;
      UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15543/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/, 0);
    if ( !v27 )
      goto LABEL_249;
    v183 = v27->fields._items;
    v184 = Method_System_Collections_Generic_List_string__Add__;
    ++v27->fields._version;
    if ( !v183 )
      goto LABEL_249;
    v185 = v27->fields._size;
    v186 = servantFaceIcon;
    if ( (unsigned int)v185 >= LODWORD(v183->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
    }
    else
    {
      v187 = &v183->obj.klass + v185;
      v27->fields._size = v185 + 1;
      v187[4] = (Il2CppClass *)v186;
      sub_1C36FFC((CGThumbnailListItem_o *)(v187 + 4), (int32_t)v186, v181, v182);
    }
    v190 = v27->fields._items;
    v191 = Method_System_Collections_Generic_List_string__Add__;
    v192 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
    ++v27->fields._version;
    if ( !v190 )
      goto LABEL_249;
    v193 = v27->fields._size;
    if ( (unsigned int)v193 >= LODWORD(v190->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v192,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
    }
    else
    {
      v194 = &v190->obj.klass + v193;
      v27->fields._size = v193 + 1;
      v194[4] = (Il2CppClass *)v192;
      sub_1C36FFC((CGThumbnailListItem_o *)(v194 + 4), (int32_t)v192, v188, v189);
    }
    if ( !v38 )
      goto LABEL_249;
    v197 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
    v198 = v38->fields._items;
    v199 = Method_System_Collections_Generic_List_string__Add__;
    ++v38->fields._version;
    if ( !v198 )
      goto LABEL_249;
    v200 = v38->fields._size;
    if ( (unsigned int)v200 >= LODWORD(v198->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v38,
        v197,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
    }
    else
    {
      v201 = &v198->obj.klass + v200;
      v38->fields._size = v200 + 1;
      v201[4] = (Il2CppClass *)v197;
      sub_1C36FFC((CGThumbnailListItem_o *)(v201 + 4), (int32_t)v197, v195, v196);
    }
    servantFaceIcon = (int *)this->fields.maskSprite2;
    if ( !servantFaceIcon )
      goto LABEL_249;
  }
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  if ( item->fields.isDispEquipFrameName )
  {
    v204 = (Il2CppObject *)item->fields._UseEquipFrameName_k__BackingField;
    v205 = v38->fields._items;
    v206 = Method_System_Collections_Generic_List_string__Add__;
    ++v38->fields._version;
    if ( !v205 )
      goto LABEL_249;
  }
  else
  {
    servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_249;
    servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                               (PartyOrganizationUtility_o *)servantFaceIcon,
                               item->fields._EquipUseServantId_k__BackingField,
                               0);
    v205 = v38->fields._items;
    v206 = Method_System_Collections_Generic_List_string__Add__;
    ++v38->fields._version;
    if ( !v205 )
      goto LABEL_249;
    v204 = (Il2CppObject *)servantFaceIcon;
  }
  v207 = v38->fields._size;
  if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v38,
      v204,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
  }
  else
  {
    v208 = &v205->obj.klass + v207;
    v38->fields._size = v207 + 1;
    v208[4] = (Il2CppClass *)v204;
    sub_1C36FFC((CGThumbnailListItem_o *)(v208 + 4), (int32_t)v204, v202, v203);
  }
  v209 = this->fields.warningLabel2;
  servantFaceIcon = (int *)System_String__Join_63604232(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v38,
                             0);
  if ( !v209
    || (UILabel__set_text(v209, (System_String_o *)servantFaceIcon, 0),
        (servantFaceIcon = (int *)this->fields.warningLabel2) == 0)
    || (v210 = servantFaceIcon[42], !BalanceConfig_TypeInfo->_2.cctor_finished)
    && (j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo), (servantFaceIcon = (int *)this->fields.warningLabel2) == 0) )
  {
LABEL_249:
    sub_1C372B4(servantFaceIcon);
  }
  if ( v210 > BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth )
  {
    UILabel__set_spacingX((UILabel_o *)servantFaceIcon, -2, 0);
    goto LABEL_204;
  }
LABEL_212:
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
LABEL_214:
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_63604232(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v27,
                             0);
  if ( !warningLabel )
    goto LABEL_249;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_249;
  v216 = (Il2CppObject *)this->fields.warningLabel;
  v217 = *((_QWORD *)servantFaceIcon + 2);
  v218 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v217 )
    goto LABEL_249;
  v219 = servantFaceIcon[6];
  if ( (unsigned int)v219 >= *(_DWORD *)(v217 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      v216,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
  }
  else
  {
    v220 = v217 + 8 * v219;
    servantFaceIcon[6] = v219 + 1;
    *(_QWORD *)(v220 + 32) = v216;
    sub_1C36FFC((CGThumbnailListItem_o *)(v220 + 32), (int32_t)v216, v214, v215);
  }
LABEL_220:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_249;
  v221 = servantFaceIcon[6];
  if ( v221 >= 1 )
  {
    if ( v221 == 1 && item->fields.isInvalidRarity )
    {
      v222 = (Il2CppObject *)this->fields.skillInvalidLabel;
      v223 = *((_QWORD *)servantFaceIcon + 2);
      v224 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v223 )
        goto LABEL_249;
      if ( *(_DWORD *)(v223 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          v222,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v224[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v223 + 40) = v222;
        sub_1C36FFC((CGThumbnailListItem_o *)(v223 + 40), (int32_t)v222, v25, v26);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_249;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_249;
    SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = (int *)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_249;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = (int *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_249;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_249;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          item->fields.isChocolateSvtEquip,
          0);
        return;
      }
    }
    goto LABEL_249;
  }
}