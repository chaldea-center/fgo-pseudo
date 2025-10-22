void EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C562BB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4C562BB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5);
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

  if ( (byte_4C562BD & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C562BD = 1;
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
                                                      (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1C3E7C0(Component_object, v8);
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
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  System_String_o *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *v25; // x21
  System_Collections_Generic_List_object__o *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  int *v32; // x1
  Il2CppClass **v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  int *v42; // x1
  Il2CppClass **v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  _BOOL4 IsWaveSetupSwitchParty_k__BackingField; // w23
  System_String_o *v47; // x23
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  _BOOL4 v61; // w23
  System_String_o *v62; // x23
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  System_String_o *v76; // x23
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  __int64 v80; // x5
  __int64 v81; // x6
  __int64 v82; // x7
  Il2CppObject *v83; // x24
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  __int64 v87; // x5
  __int64 v88; // x6
  __int64 v89; // x7
  Il2CppObject *v90; // x0
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  int *v94; // x1
  Il2CppClass **v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  int *v113; // x1
  Il2CppClass **v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  UILabel_o *warningLabel2; // x23
  struct UILabel_o *v134; // x8
  int32_t mWidth; // w22
  System_String_o *v136; // x23
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  __int64 v140; // x5
  __int64 v141; // x6
  __int64 v142; // x7
  Il2CppObject *v143; // x24
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  __int64 v147; // x5
  __int64 v148; // x6
  __int64 v149; // x7
  Il2CppObject *v150; // x0
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  int *v154; // x1
  Il2CppClass **v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  Il2CppClass **v161; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  Il2CppClass **v167; // x0
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  int *v173; // x1
  Il2CppClass **v174; // x0
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  Il2CppClass **v186; // x0
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x0
  UILabel_o *v193; // x23
  int32_t v194; // w22
  struct UILabel_o *v195; // x8
  UILabel_o *warningLabel3; // x22
  UILabel_o *warningLabel; // x22
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  __int64 v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  __int64 v203; // x8
  int v204; // w8
  __int64 v205; // x8
  _QWORD *v206; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-48h] BYREF
  int32_t OrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  v7 = item;
  if ( (byte_4C562BC & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_15491/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C3E564(&StringLiteral_11522/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C3E564(&StringLiteral_15508/*"WAVE_BATTLE_EQUIP_PARTY"*/);
    sub_1C3E564(&StringLiteral_15515/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_1C3E564(&StringLiteral_15553/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_5492/*"EQUIP_GRAPH_USE"*/);
    byte_4C562BC = 1;
  }
  if ( !v7 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_249;
  ServantFaceIconComponent__Set_41053768(
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
  UIIconLabel__Set_41158744((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0, 0, 0, 0, 0, 0);
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
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11522/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_249;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v18 = *((_QWORD *)servantFaceIcon + 2);
    v19 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v18 )
      goto LABEL_249;
    v20 = servantFaceIcon[6];
    if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = v18 + 8 * v20;
      servantFaceIcon[6] = v20 + 1;
      *(_QWORD *)(v21 + 32) = item;
      sub_1C3E508((CGThumbnailListItem_o *)(v21 + 32), (int32_t)item, v16, v17);
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
    v22 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_46;
  }
  if ( EquipGraphListViewItem__get_IsUse(v7, (const MethodInfo *)item) )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
    v26 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
    if ( v7->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15491/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
      if ( !v25 )
        goto LABEL_249;
      items = v25->fields._items;
      v30 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_249;
      v31 = v25->fields._size;
      v32 = servantFaceIcon;
      if ( (unsigned int)v31 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + v31;
        v25->fields._size = v31 + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1C3E508((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
      }
      v51 = v25->fields._items;
      v52 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      ++v25->fields._version;
      if ( !v51 )
        goto LABEL_249;
      v53 = v25->fields._size;
      if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v51->obj.klass + v53;
        v25->fields._size = v53 + 1;
        v54[4] = (Il2CppClass *)item;
        sub_1C3E508((CGThumbnailListItem_o *)(v54 + 4), (int32_t)item, v34, v35);
      }
      if ( !v26 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v57 = v26->fields._items;
      v58 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v57 )
        goto LABEL_249;
      v59 = v26->fields._size;
      if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &v57->obj.klass + v59;
        v26->fields._size = v59 + 1;
        v60[4] = (Il2CppClass *)item;
        sub_1C3E508((CGThumbnailListItem_o *)(v60 + 4), (int32_t)item, v55, v56);
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
          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15508/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
          v48 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                  v7->fields._OrganizedWave_k__BackingField,
                                  0);
          servantFaceIcon = (int *)System_String__Format(v47, v48, 0);
          if ( !v25 )
            goto LABEL_249;
        }
        else
        {
          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_15515/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
          OrganizedWave_k__BackingField = v7->fields._OrganizedWave_k__BackingField;
          v83 = (Il2CppObject *)j_il2cpp_value_box_0(
                                  int_TypeInfo,
                                  &OrganizedWave_k__BackingField,
                                  v77,
                                  v78,
                                  v79,
                                  v80,
                                  v81,
                                  v82);
          MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
          v90 = (Il2CppObject *)j_il2cpp_value_box_0(
                                  int_TypeInfo,
                                  &MaxWave_k__BackingField,
                                  v84,
                                  v85,
                                  v86,
                                  v87,
                                  v88,
                                  v89);
          servantFaceIcon = (int *)System_String__Format_63677760(v76, v83, v90, 0);
          if ( !v25 )
            goto LABEL_249;
        }
        v91 = v25->fields._items;
        v92 = Method_System_Collections_Generic_List_string__Add__;
        ++v25->fields._version;
        if ( !v91 )
          goto LABEL_249;
        v93 = v25->fields._size;
        v94 = servantFaceIcon;
        if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = &v91->obj.klass + v93;
          v25->fields._size = v93 + 1;
          v95[4] = (Il2CppClass *)v94;
          sub_1C3E508((CGThumbnailListItem_o *)(v95 + 4), (int32_t)v94, v49, v50);
        }
        v98 = v25->fields._items;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v99 = Method_System_Collections_Generic_List_string__Add__;
        ++v25->fields._version;
        if ( !v98 )
          goto LABEL_249;
        v100 = v25->fields._size;
        if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)item,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v98->obj.klass + v100;
          v25->fields._size = v100 + 1;
          v101[4] = (Il2CppClass *)item;
          sub_1C3E508((CGThumbnailListItem_o *)(v101 + 4), (int32_t)item, v96, v97);
        }
        if ( !v26 )
          goto LABEL_249;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v104 = v26->fields._items;
        v105 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !v104 )
          goto LABEL_249;
        v106 = v26->fields._size;
        if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)item,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &v104->obj.klass + v106;
          v26->fields._size = v106 + 1;
          v107[4] = (Il2CppClass *)item;
          sub_1C3E508((CGThumbnailListItem_o *)(v107 + 4), (int32_t)item, v102, v103);
        }
        servantFaceIcon = (int *)this->fields.maskSprite2;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5492/*"EQUIP_GRAPH_USE"*/, 0);
      if ( !v25 )
        goto LABEL_249;
      v110 = v25->fields._items;
      v111 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v110 )
        goto LABEL_249;
      v112 = v25->fields._size;
      v113 = servantFaceIcon;
      if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = &v110->obj.klass + v112;
        v25->fields._size = v112 + 1;
        v114[4] = (Il2CppClass *)v113;
        sub_1C3E508((CGThumbnailListItem_o *)(v114 + 4), (int32_t)v113, v108, v109);
      }
      v117 = v25->fields._items;
      v118 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      ++v25->fields._version;
      if ( !v117 )
        goto LABEL_249;
      v119 = v25->fields._size;
      if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &v117->obj.klass + v119;
        v25->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)item;
        sub_1C3E508((CGThumbnailListItem_o *)(v120 + 4), (int32_t)item, v115, v116);
      }
      if ( !v26 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v123 = v26->fields._items;
      v124 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v123 )
        goto LABEL_249;
      v125 = v26->fields._size;
      if ( (unsigned int)v125 >= LODWORD(v123->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
      }
      else
      {
        v126 = &v123->obj.klass + v125;
        v26->fields._size = v125 + 1;
        v126[4] = (Il2CppClass *)item;
        sub_1C3E508((CGThumbnailListItem_o *)(v126 + 4), (int32_t)item, v121, v122);
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
      v129 = v26->fields._items;
      v130 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v129 )
        goto LABEL_249;
    }
    else
    {
      servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !servantFaceIcon )
        goto LABEL_249;
      servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                                 (PartyOrganizationUtility_o *)servantFaceIcon,
                                 v7->fields._EquipUseServantId_k__BackingField,
                                 0);
      v129 = v26->fields._items;
      v130 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v129 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)servantFaceIcon;
    }
    v131 = v26->fields._size;
    if ( (unsigned int)v131 >= LODWORD(v129->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)item,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
    }
    else
    {
      v132 = &v129->obj.klass + v131;
      v26->fields._size = v131 + 1;
      v132[4] = (Il2CppClass *)item;
      sub_1C3E508((CGThumbnailListItem_o *)(v132 + 4), (int32_t)item, v127, v128);
    }
    warningLabel2 = this->fields.warningLabel2;
    servantFaceIcon = (int *)System_String__Join_63679044(
                               (System_String_o *)StringLiteral_1/*""*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v26,
                               0);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
      v134 = this->fields.warningLabel2;
      if ( v134 )
      {
        mWidth = v134->fields.mWidth;
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
        v195 = this->fields.warningLabel2;
        if ( !v195 )
          goto LABEL_249;
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UILabel__set_text((UILabel_o *)servantFaceIcon, v195->fields.mText, 0);
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
    v22 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_46:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v22, 0);
    goto LABEL_220;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
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
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15491/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
    if ( !v25 )
      goto LABEL_249;
    v39 = v25->fields._items;
    v40 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !v39 )
      goto LABEL_249;
    v41 = v25->fields._size;
    v42 = servantFaceIcon;
    if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v39->obj.klass + v41;
      v25->fields._size = v41 + 1;
      v43[4] = (Il2CppClass *)v42;
      sub_1C3E508((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v42, v37, v38);
    }
    v66 = v25->fields._items;
    v67 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v25->fields._version;
    if ( !v66 )
      goto LABEL_249;
    v68 = v25->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)item,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v25->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)item;
      sub_1C3E508((CGThumbnailListItem_o *)(v69 + 4), (int32_t)item, v44, v45);
    }
    if ( !v36 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v72 = v36->fields._items;
    v73 = Method_System_Collections_Generic_List_string__Add__;
    ++v36->fields._version;
    if ( !v72 )
      goto LABEL_249;
    v74 = v36->fields._size;
    if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)item,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v72->obj.klass + v74;
      v36->fields._size = v74 + 1;
      v75[4] = (Il2CppClass *)item;
      sub_1C3E508((CGThumbnailListItem_o *)(v75 + 4), (int32_t)item, v70, v71);
    }
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_249;
  }
  else
  {
    if ( v7->fields._UniqueOrganizedWave_k__BackingField >= 1 )
    {
      v61 = v7->fields._IsWaveSetupSwitchParty_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v61 )
      {
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_15508/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
        v63 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                v7->fields._UniqueOrganizedWave_k__BackingField,
                                0);
        servantFaceIcon = (int *)System_String__Format(v62, v63, 0);
        if ( !v25 )
          goto LABEL_249;
      }
      else
      {
        v136 = LocalizationManager__Get((System_String_o *)StringLiteral_15515/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
        OrganizedWave_k__BackingField = v7->fields._UniqueOrganizedWave_k__BackingField;
        v143 = (Il2CppObject *)j_il2cpp_value_box_0(
                                 int_TypeInfo,
                                 &OrganizedWave_k__BackingField,
                                 v137,
                                 v138,
                                 v139,
                                 v140,
                                 v141,
                                 v142);
        MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
        v150 = (Il2CppObject *)j_il2cpp_value_box_0(
                                 int_TypeInfo,
                                 &MaxWave_k__BackingField,
                                 v144,
                                 v145,
                                 v146,
                                 v147,
                                 v148,
                                 v149);
        servantFaceIcon = (int *)System_String__Format_63677760(v136, v143, v150, 0);
        if ( !v25 )
          goto LABEL_249;
      }
      v151 = v25->fields._items;
      v152 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v151 )
        goto LABEL_249;
      v153 = v25->fields._size;
      v154 = servantFaceIcon;
      if ( (unsigned int)v153 >= LODWORD(v151->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
      }
      else
      {
        v155 = &v151->obj.klass + v153;
        v25->fields._size = v153 + 1;
        v155[4] = (Il2CppClass *)v154;
        sub_1C3E508((CGThumbnailListItem_o *)(v155 + 4), (int32_t)v154, v64, v65);
      }
      v158 = v25->fields._items;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v159 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v158 )
        goto LABEL_249;
      v160 = v25->fields._size;
      if ( (unsigned int)v160 >= LODWORD(v158->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
      }
      else
      {
        v161 = &v158->obj.klass + v160;
        v25->fields._size = v160 + 1;
        v161[4] = (Il2CppClass *)item;
        sub_1C3E508((CGThumbnailListItem_o *)(v161 + 4), (int32_t)item, v156, v157);
      }
      if ( !v36 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v164 = v36->fields._items;
      v165 = Method_System_Collections_Generic_List_string__Add__;
      ++v36->fields._version;
      if ( !v164 )
        goto LABEL_249;
      v166 = v36->fields._size;
      if ( (unsigned int)v166 >= LODWORD(v164->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
      }
      else
      {
        v167 = &v164->obj.klass + v166;
        v36->fields._size = v166 + 1;
        v167[4] = (Il2CppClass *)item;
        sub_1C3E508((CGThumbnailListItem_o *)(v167 + 4), (int32_t)item, v162, v163);
      }
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_249;
      UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15553/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/, 0);
    if ( !v25 )
      goto LABEL_249;
    v170 = v25->fields._items;
    v171 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !v170 )
      goto LABEL_249;
    v172 = v25->fields._size;
    v173 = servantFaceIcon;
    if ( (unsigned int)v172 >= LODWORD(v170->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
    }
    else
    {
      v174 = &v170->obj.klass + v172;
      v25->fields._size = v172 + 1;
      v174[4] = (Il2CppClass *)v173;
      sub_1C3E508((CGThumbnailListItem_o *)(v174 + 4), (int32_t)v173, v168, v169);
    }
    v177 = v25->fields._items;
    v178 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v25->fields._version;
    if ( !v177 )
      goto LABEL_249;
    v179 = v25->fields._size;
    if ( (unsigned int)v179 >= LODWORD(v177->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)item,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    }
    else
    {
      v180 = &v177->obj.klass + v179;
      v25->fields._size = v179 + 1;
      v180[4] = (Il2CppClass *)item;
      sub_1C3E508((CGThumbnailListItem_o *)(v180 + 4), (int32_t)item, v175, v176);
    }
    if ( !v36 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v183 = v36->fields._items;
    v184 = Method_System_Collections_Generic_List_string__Add__;
    ++v36->fields._version;
    if ( !v183 )
      goto LABEL_249;
    v185 = v36->fields._size;
    if ( (unsigned int)v185 >= LODWORD(v183->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)item,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
    }
    else
    {
      v186 = &v183->obj.klass + v185;
      v36->fields._size = v185 + 1;
      v186[4] = (Il2CppClass *)item;
      sub_1C3E508((CGThumbnailListItem_o *)(v186 + 4), (int32_t)item, v181, v182);
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
    v189 = v36->fields._items;
    v190 = Method_System_Collections_Generic_List_string__Add__;
    ++v36->fields._version;
    if ( !v189 )
      goto LABEL_249;
  }
  else
  {
    servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_249;
    servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                               (PartyOrganizationUtility_o *)servantFaceIcon,
                               v7->fields._EquipUseServantId_k__BackingField,
                               0);
    v189 = v36->fields._items;
    v190 = Method_System_Collections_Generic_List_string__Add__;
    ++v36->fields._version;
    if ( !v189 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)servantFaceIcon;
  }
  v191 = v36->fields._size;
  if ( (unsigned int)v191 >= LODWORD(v189->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)item,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
  }
  else
  {
    v192 = &v189->obj.klass + v191;
    v36->fields._size = v191 + 1;
    v192[4] = (Il2CppClass *)item;
    sub_1C3E508((CGThumbnailListItem_o *)(v192 + 4), (int32_t)item, v187, v188);
  }
  v193 = this->fields.warningLabel2;
  servantFaceIcon = (int *)System_String__Join_63679044(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v36,
                             0);
  if ( !v193
    || (UILabel__set_text(v193, (System_String_o *)servantFaceIcon, 0),
        (servantFaceIcon = (int *)this->fields.warningLabel2) == 0)
    || (v194 = servantFaceIcon[42], !BalanceConfig_TypeInfo->_2.cctor_finished)
    && (j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo), (servantFaceIcon = (int *)this->fields.warningLabel2) == 0) )
  {
LABEL_249:
    sub_1C3E7C0(servantFaceIcon, item);
  }
  if ( v194 > BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth )
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
  servantFaceIcon = (int *)System_String__Join_63679044(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v25,
                             0);
  if ( !warningLabel )
    goto LABEL_249;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_249;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v200 = *((_QWORD *)servantFaceIcon + 2);
  v201 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v200 )
    goto LABEL_249;
  v202 = servantFaceIcon[6];
  if ( (unsigned int)v202 >= *(_DWORD *)(v200 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
  }
  else
  {
    v203 = v200 + 8 * v202;
    servantFaceIcon[6] = v202 + 1;
    *(_QWORD *)(v203 + 32) = item;
    sub_1C3E508((CGThumbnailListItem_o *)(v203 + 32), (int32_t)item, v198, v199);
  }
LABEL_220:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_249;
  v204 = servantFaceIcon[6];
  if ( v204 >= 1 )
  {
    if ( v204 == 1 && v7->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v205 = *((_QWORD *)servantFaceIcon + 2);
      v206 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v205 )
        goto LABEL_249;
      if ( *(_DWORD *)(v205 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v205 + 40) = item;
        sub_1C3E508((CGThumbnailListItem_o *)(v205 + 40), (int32_t)item, v23, v24);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_249;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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