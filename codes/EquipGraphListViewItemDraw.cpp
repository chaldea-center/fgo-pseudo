void EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2684B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4C2684B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5);
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

  if ( (byte_4C2684D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2684D = 1;
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
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1C2D6EC(Component_object, v8);
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
  Il2CppObject *v80; // x24
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x0
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  int *v88; // x1
  Il2CppClass **v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
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
  int *v107; // x1
  Il2CppClass **v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
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
  UILabel_o *warningLabel2; // x23
  struct UILabel_o *v128; // x8
  int32_t mWidth; // w22
  System_String_o *v130; // x23
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  Il2CppObject *v134; // x24
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  Il2CppObject *v138; // x0
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  int *v142; // x1
  Il2CppClass **v143; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  Il2CppClass **v149; // x0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  struct System_Object_array *v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  Il2CppClass **v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  int *v161; // x1
  Il2CppClass **v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  Il2CppClass **v168; // x0
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  UILabel_o *v181; // x23
  int32_t v182; // w22
  struct UILabel_o *v183; // x8
  UILabel_o *warningLabel3; // x22
  UILabel_o *warningLabel; // x22
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  __int64 v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  __int64 v191; // x8
  int v192; // w8
  __int64 v193; // x8
  _QWORD *v194; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-48h] BYREF
  int32_t OrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  v7 = item;
  if ( (byte_4C2684C & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C2D490(&StringLiteral_11513/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C2D490(&StringLiteral_15495/*"WAVE_BATTLE_EQUIP_PARTY"*/);
    sub_1C2D490(&StringLiteral_15502/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_1C2D490(&StringLiteral_15540/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_5483/*"EQUIP_GRAPH_USE"*/);
    byte_4C2684C = 1;
  }
  if ( !v7 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_249;
  ServantFaceIconComponent__Set_40783748(
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
  UIIconLabel__Set_40889008((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0, 0, 0, 0, 0, 0);
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
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11513/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
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
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = v18 + 8 * v20;
      servantFaceIcon[6] = v20 + 1;
      *(_QWORD *)(v21 + 32) = item;
      sub_1C2D434((CGThumbnailListItem_o *)(v21 + 32), (int32_t)item, v16, v17);
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
    v25 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
    v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( v7->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + v31;
        v25->fields._size = v31 + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v51->obj.klass + v53;
        v25->fields._size = v53 + 1;
        v54[4] = (Il2CppClass *)item;
        sub_1C2D434((CGThumbnailListItem_o *)(v54 + 4), (int32_t)item, v34, v35);
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &v57->obj.klass + v59;
        v26->fields._size = v59 + 1;
        v60[4] = (Il2CppClass *)item;
        sub_1C2D434((CGThumbnailListItem_o *)(v60 + 4), (int32_t)item, v55, v56);
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
          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15495/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
          v48 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                  v7->fields._OrganizedWave_k__BackingField,
                                  0);
          servantFaceIcon = (int *)System_String__Format(v47, v48, 0);
          if ( !v25 )
            goto LABEL_249;
        }
        else
        {
          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_15502/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
          OrganizedWave_k__BackingField = v7->fields._OrganizedWave_k__BackingField;
          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OrganizedWave_k__BackingField, v77, v78, v79);
          MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
          v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v81, v82, v83);
          servantFaceIcon = (int *)System_String__Format_63499156(v76, v80, v84, 0);
          if ( !v25 )
            goto LABEL_249;
        }
        v85 = v25->fields._items;
        v86 = Method_System_Collections_Generic_List_string__Add__;
        ++v25->fields._version;
        if ( !v85 )
          goto LABEL_249;
        v87 = v25->fields._size;
        v88 = servantFaceIcon;
        if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v85->obj.klass + v87;
          v25->fields._size = v87 + 1;
          v89[4] = (Il2CppClass *)v88;
          sub_1C2D434((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v88, v49, v50);
        }
        v92 = v25->fields._items;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v93 = Method_System_Collections_Generic_List_string__Add__;
        ++v25->fields._version;
        if ( !v92 )
          goto LABEL_249;
        v94 = v25->fields._size;
        if ( (unsigned int)v94 >= LODWORD(v92->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)item,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = &v92->obj.klass + v94;
          v25->fields._size = v94 + 1;
          v95[4] = (Il2CppClass *)item;
          sub_1C2D434((CGThumbnailListItem_o *)(v95 + 4), (int32_t)item, v90, v91);
        }
        if ( !v26 )
          goto LABEL_249;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v98 = v26->fields._items;
        v99 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !v98 )
          goto LABEL_249;
        v100 = v26->fields._size;
        if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)item,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v98->obj.klass + v100;
          v26->fields._size = v100 + 1;
          v101[4] = (Il2CppClass *)item;
          sub_1C2D434((CGThumbnailListItem_o *)(v101 + 4), (int32_t)item, v96, v97);
        }
        servantFaceIcon = (int *)this->fields.maskSprite2;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5483/*"EQUIP_GRAPH_USE"*/, 0);
      if ( !v25 )
        goto LABEL_249;
      v104 = v25->fields._items;
      v105 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v104 )
        goto LABEL_249;
      v106 = v25->fields._size;
      v107 = servantFaceIcon;
      if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
      }
      else
      {
        v108 = &v104->obj.klass + v106;
        v25->fields._size = v106 + 1;
        v108[4] = (Il2CppClass *)v107;
        sub_1C2D434((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v107, v102, v103);
      }
      v111 = v25->fields._items;
      v112 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      ++v25->fields._version;
      if ( !v111 )
        goto LABEL_249;
      v113 = v25->fields._size;
      if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)item,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = &v111->obj.klass + v113;
        v25->fields._size = v113 + 1;
        v114[4] = (Il2CppClass *)item;
        sub_1C2D434((CGThumbnailListItem_o *)(v114 + 4), (int32_t)item, v109, v110);
      }
      if ( !v26 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v117 = v26->fields._items;
      v118 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v117 )
        goto LABEL_249;
      v119 = v26->fields._size;
      if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)item,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &v117->obj.klass + v119;
        v26->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)item;
        sub_1C2D434((CGThumbnailListItem_o *)(v120 + 4), (int32_t)item, v115, v116);
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
      v123 = v26->fields._items;
      v124 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v123 )
        goto LABEL_249;
    }
    else
    {
      servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !servantFaceIcon )
        goto LABEL_249;
      servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                                 (PartyOrganizationUtility_o *)servantFaceIcon,
                                 v7->fields._EquipUseServantId_k__BackingField,
                                 0);
      v123 = v26->fields._items;
      v124 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v123 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)servantFaceIcon;
    }
    v125 = v26->fields._size;
    if ( (unsigned int)v125 >= LODWORD(v123->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)item,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
    }
    else
    {
      v126 = &v123->obj.klass + v125;
      v26->fields._size = v125 + 1;
      v126[4] = (Il2CppClass *)item;
      sub_1C2D434((CGThumbnailListItem_o *)(v126 + 4), (int32_t)item, v121, v122);
    }
    warningLabel2 = this->fields.warningLabel2;
    servantFaceIcon = (int *)System_String__Join_63500440(
                               (System_String_o *)StringLiteral_1/*""*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v26,
                               0);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
      v128 = this->fields.warningLabel2;
      if ( v128 )
      {
        mWidth = v128->fields.mWidth;
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
        v183 = this->fields.warningLabel2;
        if ( !v183 )
          goto LABEL_249;
        servantFaceIcon = (int *)this->fields.warningLabel3;
        if ( !servantFaceIcon )
          goto LABEL_249;
        UILabel__set_text((UILabel_o *)servantFaceIcon, v183->fields.mText, 0);
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
  v25 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
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
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
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
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v39->obj.klass + v41;
      v25->fields._size = v41 + 1;
      v43[4] = (Il2CppClass *)v42;
      sub_1C2D434((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v42, v37, v38);
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
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v25->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)item;
      sub_1C2D434((CGThumbnailListItem_o *)(v69 + 4), (int32_t)item, v44, v45);
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
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v72->obj.klass + v74;
      v36->fields._size = v74 + 1;
      v75[4] = (Il2CppClass *)item;
      sub_1C2D434((CGThumbnailListItem_o *)(v75 + 4), (int32_t)item, v70, v71);
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
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_15495/*"WAVE_BATTLE_EQUIP_PARTY"*/, 0);
        v63 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(
                                v7->fields._UniqueOrganizedWave_k__BackingField,
                                0);
        servantFaceIcon = (int *)System_String__Format(v62, v63, 0);
        if ( !v25 )
          goto LABEL_249;
      }
      else
      {
        v130 = LocalizationManager__Get((System_String_o *)StringLiteral_15502/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0);
        OrganizedWave_k__BackingField = v7->fields._UniqueOrganizedWave_k__BackingField;
        v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OrganizedWave_k__BackingField, v131, v132, v133);
        MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
        v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v135, v136, v137);
        servantFaceIcon = (int *)System_String__Format_63499156(v130, v134, v138, 0);
        if ( !v25 )
          goto LABEL_249;
      }
      v139 = v25->fields._items;
      v140 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v139 )
        goto LABEL_249;
      v141 = v25->fields._size;
      v142 = servantFaceIcon;
      if ( (unsigned int)v141 >= LODWORD(v139->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
      }
      else
      {
        v143 = &v139->obj.klass + v141;
        v25->fields._size = v141 + 1;
        v143[4] = (Il2CppClass *)v142;
        sub_1C2D434((CGThumbnailListItem_o *)(v143 + 4), (int32_t)v142, v64, v65);
      }
      v146 = v25->fields._items;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v147 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v146 )
        goto LABEL_249;
      v148 = v25->fields._size;
      if ( (unsigned int)v148 >= LODWORD(v146->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)item,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
      }
      else
      {
        v149 = &v146->obj.klass + v148;
        v25->fields._size = v148 + 1;
        v149[4] = (Il2CppClass *)item;
        sub_1C2D434((CGThumbnailListItem_o *)(v149 + 4), (int32_t)item, v144, v145);
      }
      if ( !v36 )
        goto LABEL_249;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v152 = v36->fields._items;
      v153 = Method_System_Collections_Generic_List_string__Add__;
      ++v36->fields._version;
      if ( !v152 )
        goto LABEL_249;
      v154 = v36->fields._size;
      if ( (unsigned int)v154 >= LODWORD(v152->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)item,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
      }
      else
      {
        v155 = &v152->obj.klass + v154;
        v36->fields._size = v154 + 1;
        v155[4] = (Il2CppClass *)item;
        sub_1C2D434((CGThumbnailListItem_o *)(v155 + 4), (int32_t)item, v150, v151);
      }
      servantFaceIcon = (int *)this->fields.maskSprite2;
      if ( !servantFaceIcon )
        goto LABEL_249;
      UIWidget__set_height((UIWidget_o *)servantFaceIcon, 60, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15540/*"WAVE_BATTLE_USE_EQUIP_UNIQUE"*/, 0);
    if ( !v25 )
      goto LABEL_249;
    v158 = v25->fields._items;
    v159 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !v158 )
      goto LABEL_249;
    v160 = v25->fields._size;
    v161 = servantFaceIcon;
    if ( (unsigned int)v160 >= LODWORD(v158->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)servantFaceIcon,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
    }
    else
    {
      v162 = &v158->obj.klass + v160;
      v25->fields._size = v160 + 1;
      v162[4] = (Il2CppClass *)v161;
      sub_1C2D434((CGThumbnailListItem_o *)(v162 + 4), (int32_t)v161, v156, v157);
    }
    v165 = v25->fields._items;
    v166 = Method_System_Collections_Generic_List_string__Add__;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    ++v25->fields._version;
    if ( !v165 )
      goto LABEL_249;
    v167 = v25->fields._size;
    if ( (unsigned int)v167 >= LODWORD(v165->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)item,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
    }
    else
    {
      v168 = &v165->obj.klass + v167;
      v25->fields._size = v167 + 1;
      v168[4] = (Il2CppClass *)item;
      sub_1C2D434((CGThumbnailListItem_o *)(v168 + 4), (int32_t)item, v163, v164);
    }
    if ( !v36 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
    v171 = v36->fields._items;
    v172 = Method_System_Collections_Generic_List_string__Add__;
    ++v36->fields._version;
    if ( !v171 )
      goto LABEL_249;
    v173 = v36->fields._size;
    if ( (unsigned int)v173 >= LODWORD(v171->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)item,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
    }
    else
    {
      v174 = &v171->obj.klass + v173;
      v36->fields._size = v173 + 1;
      v174[4] = (Il2CppClass *)item;
      sub_1C2D434((CGThumbnailListItem_o *)(v174 + 4), (int32_t)item, v169, v170);
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
    v177 = v36->fields._items;
    v178 = Method_System_Collections_Generic_List_string__Add__;
    ++v36->fields._version;
    if ( !v177 )
      goto LABEL_249;
  }
  else
  {
    servantFaceIcon = (int *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_249;
    servantFaceIcon = (int *)PartyOrganizationUtility__GetServantShortName(
                               (PartyOrganizationUtility_o *)servantFaceIcon,
                               v7->fields._EquipUseServantId_k__BackingField,
                               0);
    v177 = v36->fields._items;
    v178 = Method_System_Collections_Generic_List_string__Add__;
    ++v36->fields._version;
    if ( !v177 )
      goto LABEL_249;
    item = (EquipGraphListViewItem_o *)servantFaceIcon;
  }
  v179 = v36->fields._size;
  if ( (unsigned int)v179 >= LODWORD(v177->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)item,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
  }
  else
  {
    v180 = &v177->obj.klass + v179;
    v36->fields._size = v179 + 1;
    v180[4] = (Il2CppClass *)item;
    sub_1C2D434((CGThumbnailListItem_o *)(v180 + 4), (int32_t)item, v175, v176);
  }
  v181 = this->fields.warningLabel2;
  servantFaceIcon = (int *)System_String__Join_63500440(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v36,
                             0);
  if ( !v181
    || (UILabel__set_text(v181, (System_String_o *)servantFaceIcon, 0),
        (servantFaceIcon = (int *)this->fields.warningLabel2) == 0)
    || (v182 = servantFaceIcon[42], !BalanceConfig_TypeInfo->_2.cctor_finished)
    && (j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo), (servantFaceIcon = (int *)this->fields.warningLabel2) == 0) )
  {
LABEL_249:
    sub_1C2D6EC(servantFaceIcon, item);
  }
  if ( v182 > BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth )
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
  servantFaceIcon = (int *)System_String__Join_63500440(
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
  v188 = *((_QWORD *)servantFaceIcon + 2);
  v189 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v188 )
    goto LABEL_249;
  v190 = servantFaceIcon[6];
  if ( (unsigned int)v190 >= *(_DWORD *)(v188 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
  }
  else
  {
    v191 = v188 + 8 * v190;
    servantFaceIcon[6] = v190 + 1;
    *(_QWORD *)(v191 + 32) = item;
    sub_1C2D434((CGThumbnailListItem_o *)(v191 + 32), (int32_t)item, v186, v187);
  }
LABEL_220:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_249;
  v192 = servantFaceIcon[6];
  if ( v192 >= 1 )
  {
    if ( v192 == 1 && v7->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v193 = *((_QWORD *)servantFaceIcon + 2);
      v194 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v193 )
        goto LABEL_249;
      if ( *(_DWORD *)(v193 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v193 + 40) = item;
        sub_1C2D434((CGThumbnailListItem_o *)(v193 + 40), (int32_t)item, v23, v24);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_249;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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