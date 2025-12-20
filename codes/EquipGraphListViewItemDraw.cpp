void EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2BCF0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4D2BCF0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4D2BCF2 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BCF2 = 1;
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
                                                      (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1C942F0(Component_object, v8);
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
  System_Collections_Generic_List_object__o *v33; // x21
  System_Collections_Generic_List_object__o *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  int *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  int *v62; // x1
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  _BOOL4 IsWaveSetupSwitchParty_k__BackingField; // w23
  System_String_o *v71; // x23
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  _BOOL4 v93; // w23
  System_String_o *v94; // x23
  Il2CppObject *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  System_String_o *v116; // x23
  Il2CppObject *v117; // x24
  Il2CppObject *v118; // x0
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  int *v122; // x1
  Il2CppClass **v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  int *v153; // x1
  Il2CppClass **v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  int32_t v165; // w2
  int32_t v166; // w3
  System_String_o *v167; // x4
  int32_t v168; // w5
  int64_t v169; // x6
  System_String_o *v170; // x7
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  int32_t v175; // w2
  int32_t v176; // w3
  System_String_o *v177; // x4
  int32_t v178; // w5
  int64_t v179; // x6
  System_String_o *v180; // x7
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  Il2CppClass **v184; // x0
  UILabel_o *warningLabel2; // x23
  struct UILabel_o *v186; // x8
  int32_t mWidth; // w22
  System_String_o *v188; // x23
  Il2CppObject *v189; // x24
  Il2CppObject *v190; // x0
  struct System_Object_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  int *v194; // x1
  Il2CppClass **v195; // x0
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  Il2CppClass **v205; // x0
  int32_t v206; // w2
  int32_t v207; // w3
  System_String_o *v208; // x4
  int32_t v209; // w5
  int64_t v210; // x6
  System_String_o *v211; // x7
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  Il2CppClass **v215; // x0
  int32_t v216; // w2
  int32_t v217; // w3
  System_String_o *v218; // x4
  int32_t v219; // w5
  int64_t v220; // x6
  System_String_o *v221; // x7
  struct System_Object_array *v222; // x8
  _QWORD *v223; // x9
  __int64 v224; // x10
  int *v225; // x1
  Il2CppClass **v226; // x0
  int32_t v227; // w2
  int32_t v228; // w3
  System_String_o *v229; // x4
  int32_t v230; // w5
  int64_t v231; // x6
  System_String_o *v232; // x7
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  Il2CppClass **v236; // x0
  int32_t v237; // w2
  int32_t v238; // w3
  System_String_o *v239; // x4
  int32_t v240; // w5
  int64_t v241; // x6
  System_String_o *v242; // x7
  struct System_Object_array *v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  Il2CppClass **v246; // x0
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  struct System_Object_array *v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  Il2CppClass **v256; // x0
  UILabel_o *v257; // x23
  int32_t v258; // w22
  struct UILabel_o *v259; // x8
  UILabel_o *warningLabel3; // x22
  UILabel_o *warningLabel; // x22
  int32_t v262; // w2
  int32_t v263; // w3
  System_String_o *v264; // x4
  int32_t v265; // w5
  int64_t v266; // x6
  System_String_o *v267; // x7
  __int64 v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  __int64 v271; // x8
  int v272; // w8
  __int64 v273; // x8
  _QWORD *v274; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-48h] BYREF
  int32_t OrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  v7 = item;
  if ( (byte_4D2BCF1 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_15537/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C94098(&StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C94098(&StringLiteral_15554/*"WAVE_BATTLE_EQUIP_PARTY"*/);
    sub_1C94098(&StringLiteral_15561/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_1C94098(&StringLiteral_15599/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_5496/*"EQUIP_GRAPH_USE"*/);
    byte_4D2BCF1 = 1;
  }
  if ( !v7 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_249;
  ServantFaceIconComponent__Set_41844968(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v7->fields.userSvtEntity,
    v7->fields.iconLabelInfo1,
    v7->fields.iconLabelInfo2,
    0);
  servantEntity = v7->fields.servantEntity;
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
  UIIconLabel__Set_41867060((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0, 0, 0, 0, 0, 0);
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
  if ( v7->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_249;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v22 = *((_QWORD *)servantFaceIcon + 2);
    v23 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v22 )
      goto LABEL_249;
    v24 = servantFaceIcon[6];
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
      servantFaceIcon[6] = v24 + 1;
      *(_QWORD *)(v25 + 32) = item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)item, v16, v17, v18, v19, v20, v21);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_249;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( v7->fields.isBase || v7->fields.isOldBase )
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
    v26 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_46;
  }
  if ( EquipGraphListViewItem__get_IsUse(v7, (const MethodInfo *)item) )
  {
    v33 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    v34 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( v7->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15537/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
      if ( !v33 )
        goto LABEL_249;
      items = v33->fields._items;
      v42 = Method_System_Collections_Generic_List_string__Add__;
      ++v33->fields._version;
      if ( !items )
        goto LABEL_249;
      v43 = v33->fields._size;
      v44 = servantFaceIcon;
      if ( (unsigned int)v43 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + v43;
        v33->fields._size = v43 + 1;
        v45[4] = (Il2CppClass *)v44;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v44, v35, v36, v37, v38, v39, v40);
      }
      v79 = v33->fields._items;
      v80 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      ++v33->fields._version;
      if ( !v79 )
        goto LABEL_249;
      v81 = v33->fields._size;
      if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = &v79->obj.klass + v81;
        v33->fields._size = v81 + 1;
        v82[4] = (Il2CppClass *)item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v82 + 4), (int32_t)item, v46, v47, v48, v49, v50, v51);
      }
      if ( !v34 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v89 = v34->fields._items;
      v90 = Method_System_Collections_Generic_List_string__Add__;
      ++v34->fields._version;
      if ( !v89 )
        goto LABEL_249;
      v91 = v34->fields._size;
      if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v92 = &v89->obj.klass + v91;
        v34->fields._size = v91 + 1;
        v92[4] = (Il2CppClass *)item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v92 + 4), (int32_t)item, v83, v84, v85, v86, v87, v88);
      }
      servantFaceIcon = (int *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_249;
    }
    else
    {
      if ( v7->fields._OrganizedWave_k__BackingField >= 1 )
      {
        IsWaveSetupSwitchParty_k__BackingField = v7->fields._IsWaveSetupSwitchParty_k__BackingField;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsWaveSetupSwitchParty_k__BackingField )
        {
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
          v72 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                  v7->fields._OrganizedWave_k__BackingField,
                                  0);
          servantFaceIcon = (int *)System_String__Format(v71, v72, 0);
          if ( !v33 )
            goto LABEL_249;
        }
        else
        {
          v116 = LocalizationManager__Get((System_String_o *)StringLiteral_15561/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
          OrganizedWave_k__BackingField = v7->fields._OrganizedWave_k__BackingField;
          v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OrganizedWave_k__BackingField);
          MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
          v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
          servantFaceIcon = (int *)System_String__Format_64459052(v116, v117, v118, 0);
          if ( !v33 )
            goto LABEL_249;
        }
        v119 = v33->fields._items;
        v120 = Method_System_Collections_Generic_List_string__Add__;
        ++v33->fields._version;
        if ( !v119 )
          goto LABEL_249;
        v121 = v33->fields._size;
        v122 = servantFaceIcon;
        if ( (unsigned int)v121 >= LODWORD(v119->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
        }
        else
        {
          v123 = &v119->obj.klass + v121;
          v33->fields._size = v121 + 1;
          v123[4] = (Il2CppClass *)v122;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v123 + 4), (int32_t)v122, v73, v74, v75, v76, v77, v78);
        }
        v130 = v33->fields._items;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v131 = Method_System_Collections_Generic_List_string__Add__;
        ++v33->fields._version;
        if ( !v130 )
          goto LABEL_249;
        v132 = v33->fields._size;
        if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)item,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
        }
        else
        {
          v133 = &v130->obj.klass + v132;
          v33->fields._size = v132 + 1;
          v133[4] = (Il2CppClass *)item;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v133 + 4), (int32_t)item, v124, v125, v126, v127, v128, v129);
        }
        if ( !v34 )
          goto LABEL_249;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v140 = v34->fields._items;
        v141 = Method_System_Collections_Generic_List_string__Add__;
        ++v34->fields._version;
        if ( !v140 )
          goto LABEL_249;
        v142 = v34->fields._size;
        if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            (Il2CppObject *)item,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
        }
        else
        {
          v143 = &v140->obj.klass + v142;
          v34->fields._size = v142 + 1;
          v143[4] = (Il2CppClass *)item;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v143 + 4), (int32_t)item, v134, v135, v136, v137, v138, v139);
        }
        servantFaceIcon = (int *)this->fields.maskSprite2;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5496/*"EQUIP_GRAPH_USE"*/, 0);
      if ( !v33 )
        goto LABEL_249;
      v150 = v33->fields._items;
      v151 = Method_System_Collections_Generic_List_string__Add__;
      ++v33->fields._version;
      if ( !v150 )
        goto LABEL_249;
      v152 = v33->fields._size;
      v153 = servantFaceIcon;
      if ( (unsigned int)v152 >= LODWORD(v150->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
      }
      else
      {
        v154 = &v150->obj.klass + v152;
        v33->fields._size = v152 + 1;
        v154[4] = (Il2CppClass *)v153;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v154 + 4), (int32_t)v153, v144, v145, v146, v147, v148, v149);
      }
      v161 = v33->fields._items;
      v162 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      ++v33->fields._version;
      if ( !v161 )
        goto LABEL_249;
      v163 = v33->fields._size;
      if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
      }
      else
      {
        v164 = &v161->obj.klass + v163;
        v33->fields._size = v163 + 1;
        v164[4] = (Il2CppClass *)item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v164 + 4), (int32_t)item, v155, v156, v157, v158, v159, v160);
      }
      if ( !v34 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v171 = v34->fields._items;
      v172 = Method_System_Collections_Generic_List_string__Add__;
      ++v34->fields._version;
      if ( !v171 )
        goto LABEL_249;
      v173 = v34->fields._size;
      if ( (unsigned int)v173 >= LODWORD(v171->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
      }
      else
      {
        v174 = &v171->obj.klass + v173;
        v34->fields._size = v173 + 1;
        v174[4] = (Il2CppClass *)item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v174 + 4), (int32_t)item, v165, v166, v167, v168, v169, v170);
      }
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_249;
    }
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_249;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    if ( v7->fields.isDispEquipFrameName )
    {
      item = (EquipGraphListViewItem_o *)v7->fields._UseEquipFrameName_k__BackingField;
      v181 = v34->fields._items;
      v182 = Method_System_Collections_Generic_List_string__Add__;
      ++v34->fields._version;
      if ( !v181 )
        goto LABEL_249;
    }
    else
    {
      servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !servantFaceIcon )
        goto LABEL_249;
      servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                                 (PartyOrganizationUtility_o *)servantFaceIcon,
                                 v7->fields._EquipUseServantId_k__BackingField,
                                 0);
      v181 = v34->fields._items;
      v182 = Method_System_Collections_Generic_List_string__Add__;
      ++v34->fields._version;
      if ( !v181 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)servantFaceIcon;
    }
    v183 = v34->fields._size;
    if ( (unsigned int)v183 >= LODWORD(v181->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)item,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
    }
    else
    {
      v184 = &v181->obj.klass + v183;
      v34->fields._size = v183 + 1;
      v184[4] = (Il2CppClass *)item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v184 + 4), (int32_t)item, v175, v176, v177, v178, v179, v180);
    }
    warningLabel2 = this->fields.warningLabel2;
    servantFaceIcon = (int *)System_String__Join_64460336(
                               (System_String_o *)StringLiteral_1/*""*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v34,
                               0);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
      v186 = this->fields.warningLabel2;
      if ( v186 )
      {
        mWidth = v186->fields.mWidth;
        servantFaceIcon = (int *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          servantFaceIcon = (int *)BalanceConfig_TypeInfo;
        }
        if ( mWidth <= *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1308LL) )
        {
          servantFaceIcon = (int *)this->fields.warningLabel2;
          if ( !servantFaceIcon )
            goto LABEL_249;
          goto LABEL_212;
        }
LABEL_204:
        v259 = this->fields.warningLabel2;
        if ( !v259 )
          goto LABEL_249;
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UILabel__set_text((UILabel_o *)servantFaceIcon, v259->fields.mText, 0);
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
  if ( !v7->fields._IsUnique_k__BackingField )
  {
    servantFaceIcon = (int *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_249;
    v26 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_46:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v26, 0);
    goto LABEL_220;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  v52 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
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
  if ( v7->fields._IsClearedWave_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15537/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
    if ( !v33 )
      goto LABEL_249;
    v59 = v33->fields._items;
    v60 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !v59 )
      goto LABEL_249;
    v61 = v33->fields._size;
    v62 = servantFaceIcon;
    if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v59->obj.klass + v61;
      v33->fields._size = v61 + 1;
      v63[4] = (Il2CppClass *)v62;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v63 + 4), (int32_t)v62, v53, v54, v55, v56, v57, v58);
    }
    v102 = v33->fields._items;
    v103 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v33->fields._version;
    if ( !v102 )
      goto LABEL_249;
    v104 = v33->fields._size;
    if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)item,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    }
    else
    {
      v105 = &v102->obj.klass + v104;
      v33->fields._size = v104 + 1;
      v105[4] = (Il2CppClass *)item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v105 + 4), (int32_t)item, v64, v65, v66, v67, v68, v69);
    }
    if ( !v52 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v112 = v52->fields._items;
    v113 = Method_System_Collections_Generic_List_string__Add__;
    ++v52->fields._version;
    if ( !v112 )
      goto LABEL_249;
    v114 = v52->fields._size;
    if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        (Il2CppObject *)item,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    }
    else
    {
      v115 = &v112->obj.klass + v114;
      v52->fields._size = v114 + 1;
      v115[4] = (Il2CppClass *)item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v115 + 4), (int32_t)item, v106, v107, v108, v109, v110, v111);
    }
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_249;
  }
  else
  {
    if ( v7->fields._UniqueOrganizedWave_k__BackingField >= 1 )
    {
      v93 = v7->fields._IsWaveSetupSwitchParty_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v93 )
      {
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
        v95 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                v7->fields._UniqueOrganizedWave_k__BackingField,
                                0);
        servantFaceIcon = (int *)System_String__Format(v94, v95, 0);
        if ( !v33 )
          goto LABEL_249;
      }
      else
      {
        v188 = LocalizationManager__Get((System_String_o *)StringLiteral_15561/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
        OrganizedWave_k__BackingField = v7->fields._UniqueOrganizedWave_k__BackingField;
        v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OrganizedWave_k__BackingField);
        MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
        v190 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
        servantFaceIcon = (int *)System_String__Format_64459052(v188, v189, v190, 0);
        if ( !v33 )
          goto LABEL_249;
      }
      v191 = v33->fields._items;
      v192 = Method_System_Collections_Generic_List_string__Add__;
      ++v33->fields._version;
      if ( !v191 )
        goto LABEL_249;
      v193 = v33->fields._size;
      v194 = servantFaceIcon;
      if ( (unsigned int)v193 >= LODWORD(v191->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
      }
      else
      {
        v195 = &v191->obj.klass + v193;
        v33->fields._size = v193 + 1;
        v195[4] = (Il2CppClass *)v194;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v195 + 4), (int32_t)v194, v96, v97, v98, v99, v100, v101);
      }
      v202 = v33->fields._items;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v203 = Method_System_Collections_Generic_List_string__Add__;
      ++v33->fields._version;
      if ( !v202 )
        goto LABEL_249;
      v204 = v33->fields._size;
      if ( (unsigned int)v204 >= LODWORD(v202->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
      }
      else
      {
        v205 = &v202->obj.klass + v204;
        v33->fields._size = v204 + 1;
        v205[4] = (Il2CppClass *)item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v205 + 4), (int32_t)item, v196, v197, v198, v199, v200, v201);
      }
      if ( !v52 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v212 = v52->fields._items;
      v213 = Method_System_Collections_Generic_List_string__Add__;
      ++v52->fields._version;
      if ( !v212 )
        goto LABEL_249;
      v214 = v52->fields._size;
      if ( (unsigned int)v214 >= LODWORD(v212->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
      }
      else
      {
        v215 = &v212->obj.klass + v214;
        v52->fields._size = v214 + 1;
        v215[4] = (Il2CppClass *)item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v215 + 4), (int32_t)item, v206, v207, v208, v209, v210, v211);
      }
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_249;
      UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15599/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/, 0);
    if ( !v33 )
      goto LABEL_249;
    v222 = v33->fields._items;
    v223 = Method_System_Collections_Generic_List_string__Add__;
    ++v33->fields._version;
    if ( !v222 )
      goto LABEL_249;
    v224 = v33->fields._size;
    v225 = servantFaceIcon;
    if ( (unsigned int)v224 >= LODWORD(v222->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v223[4] + 192LL) + 112LL));
    }
    else
    {
      v226 = &v222->obj.klass + v224;
      v33->fields._size = v224 + 1;
      v226[4] = (Il2CppClass *)v225;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v226 + 4), (int32_t)v225, v216, v217, v218, v219, v220, v221);
    }
    v233 = v33->fields._items;
    v234 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v33->fields._version;
    if ( !v233 )
      goto LABEL_249;
    v235 = v33->fields._size;
    if ( (unsigned int)v235 >= LODWORD(v233->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)item,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
    }
    else
    {
      v236 = &v233->obj.klass + v235;
      v33->fields._size = v235 + 1;
      v236[4] = (Il2CppClass *)item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v236 + 4), (int32_t)item, v227, v228, v229, v230, v231, v232);
    }
    if ( !v52 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v243 = v52->fields._items;
    v244 = Method_System_Collections_Generic_List_string__Add__;
    ++v52->fields._version;
    if ( !v243 )
      goto LABEL_249;
    v245 = v52->fields._size;
    if ( (unsigned int)v245 >= LODWORD(v243->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        (Il2CppObject *)item,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
    }
    else
    {
      v246 = &v243->obj.klass + v245;
      v52->fields._size = v245 + 1;
      v246[4] = (Il2CppClass *)item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v246 + 4), (int32_t)item, v237, v238, v239, v240, v241, v242);
    }
    servantFaceIcon = (int *)this->fields.maskSprite2;
    if ( !servantFaceIcon )
      goto LABEL_249;
  }
  servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_249;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  if ( v7->fields.isDispEquipFrameName )
  {
    item = (EquipGraphListViewItem_o *)v7->fields._UseEquipFrameName_k__BackingField;
    v253 = v52->fields._items;
    v254 = Method_System_Collections_Generic_List_string__Add__;
    ++v52->fields._version;
    if ( !v253 )
      goto LABEL_249;
  }
  else
  {
    servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_249;
    servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                               (PartyOrganizationUtility_o *)servantFaceIcon,
                               v7->fields._EquipUseServantId_k__BackingField,
                               0);
    v253 = v52->fields._items;
    v254 = Method_System_Collections_Generic_List_string__Add__;
    ++v52->fields._version;
    if ( !v253 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)servantFaceIcon;
  }
  v255 = v52->fields._size;
  if ( (unsigned int)v255 >= LODWORD(v253->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      (Il2CppObject *)item,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
  }
  else
  {
    v256 = &v253->obj.klass + v255;
    v52->fields._size = v255 + 1;
    v256[4] = (Il2CppClass *)item;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v256 + 4), (int32_t)item, v247, v248, v249, v250, v251, v252);
  }
  v257 = this->fields.warningLabel2;
  servantFaceIcon = (int *)System_String__Join_64460336(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v52,
                             0);
  if ( !v257
    || (UILabel__set_text(v257, (System_String_o *)servantFaceIcon, 0),
        (servantFaceIcon = (int *)this->fields.warningLabel2) == 0)
    || (v258 = servantFaceIcon[42], !BalanceConfig_TypeInfo->_2.cctor_finished)
    && (j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo), (servantFaceIcon = (int *)this->fields.warningLabel2) == 0) )
  {
LABEL_249:
    sub_1C942F0(servantFaceIcon, item);
  }
  if ( v258 > BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth )
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
  servantFaceIcon = (int *)System_String__Join_64460336(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v33,
                             0);
  if ( !warningLabel )
    goto LABEL_249;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_249;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v268 = *((_QWORD *)servantFaceIcon + 2);
  v269 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v268 )
    goto LABEL_249;
  v270 = servantFaceIcon[6];
  if ( (unsigned int)v270 >= *(_DWORD *)(v268 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
  }
  else
  {
    v271 = v268 + 8 * v270;
    servantFaceIcon[6] = v270 + 1;
    *(_QWORD *)(v271 + 32) = item;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v271 + 32), (int32_t)item, v262, v263, v264, v265, v266, v267);
  }
LABEL_220:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_249;
  v272 = servantFaceIcon[6];
  if ( v272 >= 1 )
  {
    if ( v272 == 1 && v7->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v273 = *((_QWORD *)servantFaceIcon + 2);
      v274 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v273 )
        goto LABEL_249;
      if ( *(_DWORD *)(v273 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v274[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v273 + 40) = item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v273 + 40), (int32_t)item, v27, v28, v29, v30, v31, v32);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_249;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isBase, 0);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isFriendShipSvtEq, 0);
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
          v7->fields.isChocolateSvtEquip,
          0);
        return;
      }
    }
    goto LABEL_249;
  }
}