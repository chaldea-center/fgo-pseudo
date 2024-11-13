void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1227A & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1227A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__Awake(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__Close(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B12276 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RestrictionNotSatisfyDialog_EndClose__, v5, v6);
    byte_4B12276 = 1;
  }
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B12277 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12277 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v7; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4B12274 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B12274 = 1;
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCloseLabel;
    if ( !gameObject )
      goto LABEL_10;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_10:
    sub_1BCAA3C(gameObject, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__OnClickClose(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B12278 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method, v2);
    byte_4B12278 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    this->fields.isButtonEnable = 0;
    if ( closeFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
        closeFunc->fields.original_method_info,
        *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall RestrictionNotSatisfyDialog__Open(
        RestrictionNotSatisfyDialog_o *this,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        RestrictionNotSatisfyDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_object__o *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v57; // x2
  Il2CppObject *v58; // x24
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  System_Collections_Generic_List_object__o *v73; // x0
  const MethodInfo *v74; // x2
  Il2CppObject *v75; // x24
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  System_Collections_Generic_List_object__o *v90; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v93; // w28
  RestrictionEntity_o *v94; // x25
  const MethodInfo *v95; // x4
  Il2CppObject *v96; // x24
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  System_Collections_Generic_List_object__o *v111; // x0
  const MethodInfo *v112; // x2
  Il2CppObject *v113; // x24
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  System_Collections_Generic_List_object__o *v128; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v130; // w8
  unsigned int v131; // w28
  RestrictionWholeEntity_o *v132; // x25
  QuestRestrictionInfo_o *v133; // x3
  const MethodInfo *v134; // x4
  Il2CppObject *v135; // x24
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  __int64 v149; // x8
  System_Collections_Generic_List_object__o *v150; // x0
  _BOOL8 v151; // x0
  __int64 v152; // x1
  Il2CppObject *current; // x24
  __int64 v154; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v158; // x1
  __int64 v159; // x2
  UnityEngine_GameObject_o *v160; // x24
  _BOOL8 v161; // x0
  __int64 v162; // x1
  Il2CppObject *v163; // x22
  __int64 v164; // x1
  UnityEngine_GameObject_o *v165; // x24
  UnityEngine_Component_o *v166; // x0
  UnityEngine_Component_o *v167; // x0
  __int64 v168; // x1
  __int64 v169; // x2
  UnityEngine_GameObject_o *v170; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v173; // x0
  int32_t v174; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v176; // x0
  RestrictionNotSatisfySlot_o *v177; // x24
  const MethodInfo *v178; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v180; // x1
  UILabel_o *v181; // x20
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x3
  System_Action_o *v185; // x20
  System_Collections_Generic_List_Enumerator_object__o v186; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v187; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12275 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, partyItem, questRestrictionInfo);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__,
      v18,
      v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v30, v31);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_RestrictionNotSatisfyDialog_EndOpen__, v36, v37);
    sub_1BCA7E0(&StringLiteral_11216/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11219/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_10429/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v42, v43);
    byte_4B12275 = 1;
  }
  memset(&v187, 0, sizeof(v187));
  this->fields.closeFunc = func;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)func,
    (int64_t)questRestrictionInfo,
    (int32_t)func,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11216/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0LL);
  v51 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                       v48,
                                                       v49,
                                                       v50);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11219/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
  if ( !wholeRestrictionLabel )
    goto LABEL_147;
  UILabel__set_text(wholeRestrictionLabel, Object, 0LL);
  if ( !questRestrictionInfo )
    goto LABEL_147;
  if ( questRestrictionInfo->fields.isFatigure )
  {
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0LL,
                                  0LL,
                                  0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v58 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v57);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v55 )
        goto LABEL_147;
      items = v55->fields._items;
      v66 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v55->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v55->fields._size;
      if ( (unsigned int)size < items->max_length )
      {
        v68 = &items->obj.klass + size;
        v55->fields._size = size + 1;
LABEL_20:
        v68[4] = (Il2CppClass *)v58;
        sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v58, v59, v60, v61, v62, v63, v64);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v72 = v66[4];
      v73 = v55;
    }
    else
    {
      if ( !v51 )
        goto LABEL_147;
      v69 = v51->fields._items;
      v70 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v51->fields._version;
      if ( !v69 )
        goto LABEL_147;
      v71 = v51->fields._size;
      if ( (unsigned int)v71 < v69->max_length )
      {
        v68 = &v69->obj.klass + v71;
        v51->fields._size = v71 + 1;
        goto LABEL_20;
      }
      v72 = v70[4];
      v73 = v51;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v73,
      v58,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72 + 192) + 112LL));
    goto LABEL_24;
  }
LABEL_25:
  if ( !questRestrictionInfo->fields.isNotSingleSupportOnly )
    goto LABEL_42;
  Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                0LL,
                                0LL,
                                0LL);
  if ( !Object )
    goto LABEL_147;
  Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Object,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v75 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v74);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v51 )
      goto LABEL_147;
    v86 = v51->fields._items;
    v87 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v51->fields._version;
    if ( !v86 )
      goto LABEL_147;
    v88 = v51->fields._size;
    if ( (unsigned int)v88 < v86->max_length )
    {
      v85 = &v86->obj.klass + v88;
      v51->fields._size = v88 + 1;
      goto LABEL_37;
    }
    v89 = v87[4];
    v90 = v51;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      v75,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v55 )
    goto LABEL_147;
  v82 = v55->fields._items;
  v83 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v55->fields._version;
  if ( !v82 )
    goto LABEL_147;
  v84 = v55->fields._size;
  if ( (unsigned int)v84 >= v82->max_length )
  {
    v89 = v83[4];
    v90 = v55;
    goto LABEL_40;
  }
  v85 = &v82->obj.klass + v84;
  v55->fields._size = v84 + 1;
LABEL_37:
  v85[4] = (Il2CppClass *)v75;
  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)v75, v76, v77, v78, v79, v80, v81);
LABEL_41:
  ++this->fields.wholeInfoCount;
LABEL_42:
  Object = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_147;
    max_length = restrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v93 = 0;
      while ( 1 )
      {
        if ( v93 >= max_length )
          goto LABEL_152;
        v94 = restrictionEntityList->m_Items[v93];
        if ( !v94 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v94->fields.name, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v93 >= max_length )
          goto LABEL_107;
      }
      Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                    (BaseMonoBehaviour_o *)this,
                                    this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                    0LL,
                                    0LL,
                                    0LL);
      if ( !Object )
        goto LABEL_147;
      Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Object,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v96 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_33007708(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v94,
                                    partyItem,
                                    questRestrictionInfo,
                                    v95);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v55 )
          goto LABEL_147;
        v103 = v55->fields._items;
        v104 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v55->fields._version;
        if ( !v103 )
          goto LABEL_147;
        v105 = v55->fields._size;
        if ( (unsigned int)v105 < v103->max_length )
        {
          v106 = &v103->obj.klass + v105;
          v55->fields._size = v105 + 1;
LABEL_60:
          v106[4] = (Il2CppClass *)v96;
          sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), (int64_t)v96, v97, v98, v99, v100, v101, v102);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v110 = v104[4];
        v111 = v55;
      }
      else
      {
        if ( !v51 )
          goto LABEL_147;
        v107 = v51->fields._items;
        v108 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v51->fields._version;
        if ( !v107 )
          goto LABEL_147;
        v109 = v51->fields._size;
        if ( (unsigned int)v109 < v107->max_length )
        {
          v106 = &v107->obj.klass + v109;
          v51->fields._size = v109 + 1;
          goto LABEL_60;
        }
        v110 = v108[4];
        v111 = v51;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v111,
        v96,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v110 + 192) + 112LL));
      goto LABEL_64;
    }
    goto LABEL_107;
  }
  if ( questRestrictionInfo->fields.isUniqueServant )
  {
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0LL,
                                  0LL,
                                  0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v113 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v112);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v55 )
        goto LABEL_147;
      v120 = v55->fields._items;
      v121 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v55->fields._version;
      if ( !v120 )
        goto LABEL_147;
      v122 = v55->fields._size;
      if ( (unsigned int)v122 < v120->max_length )
      {
        v123 = &v120->obj.klass + v122;
        v55->fields._size = v122 + 1;
LABEL_79:
        v123[4] = (Il2CppClass *)v113;
        sub_1BCA784((PartyOrganizationUtility_o *)(v123 + 4), (int64_t)v113, v114, v115, v116, v117, v118, v119);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v127 = v121[4];
      v128 = v55;
    }
    else
    {
      if ( !v51 )
        goto LABEL_147;
      v124 = v51->fields._items;
      v125 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v51->fields._version;
      if ( !v124 )
        goto LABEL_147;
      v126 = v51->fields._size;
      if ( (unsigned int)v126 < v124->max_length )
      {
        v123 = &v124->obj.klass + v126;
        v51->fields._size = v126 + 1;
        goto LABEL_79;
      }
      v127 = v125[4];
      v128 = v51;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v113,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v127 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v130 = restrictionWholeEntities->max_length;
  if ( v130 >= 1 )
  {
    v131 = 0;
    while ( 1 )
    {
      if ( v131 >= v130 )
LABEL_152:
        sub_1BCAA44(Object, v47);
      v132 = restrictionWholeEntities->m_Items[v131];
      if ( !v132 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v132->fields.summary, 0LL);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v130 = restrictionWholeEntities->max_length;
      if ( (int)++v131 >= v130 )
        goto LABEL_107;
    }
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0LL,
                                  0LL,
                                  0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v135 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v132,
                                  partyItem,
                                  v133,
                                  v134);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v55 )
        goto LABEL_147;
      v142 = v55->fields._items;
      v143 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v55->fields._version;
      if ( !v142 )
        goto LABEL_147;
      v144 = v55->fields._size;
      if ( (unsigned int)v144 < v142->max_length )
      {
        v145 = &v142->obj.klass + v144;
        v55->fields._size = v144 + 1;
LABEL_101:
        v145[4] = (Il2CppClass *)v135;
        sub_1BCA784((PartyOrganizationUtility_o *)(v145 + 4), (int64_t)v135, v136, v137, v138, v139, v140, v141);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v149 = v143[4];
      v150 = v55;
    }
    else
    {
      if ( !v51 )
        goto LABEL_147;
      v146 = v51->fields._items;
      v147 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v51->fields._version;
      if ( !v146 )
        goto LABEL_147;
      v148 = v51->fields._size;
      if ( (unsigned int)v148 < v146->max_length )
      {
        v145 = &v146->obj.klass + v148;
        v51->fields._size = v148 + 1;
        goto LABEL_101;
      }
      v149 = v147[4];
      v150 = v51;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v150,
      v135,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v149 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v55 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v186,
    v55,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v187 = v186;
  while ( 1 )
  {
    v151 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v187,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v151 )
      break;
    current = v187.fields._current;
    if ( !v187.fields._current )
      sub_1BCAA3C(v151, v152);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v187.fields._current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1BCAA3C(0LL, v154);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v160 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !byte_4B109C6 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v158, v159);
      byte_4B109C6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v160, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v187,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v51 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v186,
    v51,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v187 = v186;
  while ( 1 )
  {
    v161 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v187,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v161 )
      break;
    v163 = v187.fields._current;
    if ( !v187.fields._current )
      sub_1BCAA3C(v161, v162);
    v165 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v187.fields._current, 0LL);
    v166 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v166 )
      sub_1BCAA3C(0LL, v164);
    v167 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v166, 0LL);
    GameObjectExtensions__SetParent(v165, v167, 0LL);
    v170 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v163, 0LL);
    if ( !byte_4B109C6 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v168, v169);
      byte_4B109C6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v170, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v187,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
  if ( !Object )
    goto LABEL_147;
  UIScrollView__UpdatePosition((UIScrollView_o *)Object, 0LL);
  if ( this->fields.wholeInfoCount <= 2 )
  {
    wholeRestrictionScrollView = this->fields.wholeRestrictionScrollView;
    if ( !wholeRestrictionScrollView )
      goto LABEL_147;
    Object = (System_String_o *)wholeRestrictionScrollView->fields.verticalScrollBar;
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
    if ( !Object )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 0, 0LL);
    Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
    if ( !Object )
      goto LABEL_147;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Object, 0, 0LL);
  }
  for ( i = 1; ; ++i )
  {
    v173 = BalanceConfig_TypeInfo;
    v174 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47);
      v173 = BalanceConfig_TypeInfo;
    }
    if ( v174 >= v173->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v176 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v176, 0LL, 0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v177 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v174, 0LL);
    if ( !v177 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v177, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v178);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v181 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v181 )
    {
      UILabel__set_text(v181, Object, 0LL);
      goto LABEL_146;
    }
LABEL_147:
    sub_1BCAA3C(Object, v47);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v185 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v182, v183, v184);
  System_Action___ctor(v185, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v185, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B12279 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12279 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestrictionNotSatisfyDialog_CloseDelegate___ctor(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07B28;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07AE8;
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}