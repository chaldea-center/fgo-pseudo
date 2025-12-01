void RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC313F & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC313F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__Awake(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__Close(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CC313B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RestrictionNotSatisfyDialog_EndClose__);
    byte_4CC313B = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC313C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC313C = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4CC3139 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3139 = 1;
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCloseLabel;
    if ( !gameObject )
      goto LABEL_10;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_10:
    sub_1C71608(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__OnClickClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4CC313D & 1) == 0 )
  {
    sub_1C713B0(&Method_RestrictionNotSatisfyDialog_OnClickClose__);
    byte_4CC313D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    this->fields.isButtonEnable = 0;
    if ( closeFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
        closeFunc->fields.method_code,
        closeFunc->fields.method);
  }
}


void RestrictionNotSatisfyDialog__Open(
        RestrictionNotSatisfyDialog_o *this,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        RestrictionNotSatisfyDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x22
  System_Collections_Generic_List_object__o *v16; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Collections_Generic_List_object__o *v34; // x0
  const MethodInfo *v35; // x2
  Il2CppObject *v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  System_Collections_Generic_List_object__o *v51; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v54; // w28
  RestrictionEntity_o *v55; // x25
  const MethodInfo *v56; // x4
  Il2CppObject *v57; // x24
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  System_Collections_Generic_List_object__o *v72; // x0
  const MethodInfo *v73; // x2
  Il2CppObject *v74; // x24
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  System_Collections_Generic_List_object__o *v89; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v91; // w8
  unsigned int v92; // w28
  RestrictionWholeEntity_o *v93; // x25
  QuestRestrictionInfo_o *v94; // x3
  const MethodInfo *v95; // x4
  Il2CppObject *v96; // x24
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  System_Collections_Generic_List_object__o *v111; // x0
  _BOOL8 v112; // x0
  __int64 v113; // x1
  Il2CppObject *current; // x24
  __int64 v115; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v119; // x24
  _BOOL8 v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x22
  __int64 v123; // x1
  UnityEngine_GameObject_o *v124; // x24
  UnityEngine_Component_o *v125; // x0
  UnityEngine_Component_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v130; // x0
  int32_t v131; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v133; // x0
  RestrictionNotSatisfySlot_o *v134; // x24
  const MethodInfo *v135; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v137; // x20
  System_Action_o *v138; // x20
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC313A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_RestrictionNotSatisfyDialog_EndOpen__);
    sub_1C713B0(&StringLiteral_11107/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_11110/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/);
    sub_1C713B0(&StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    byte_4CC313A = 1;
  }
  memset(&v140, 0, sizeof(v140));
  this->fields.closeFunc = func;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    (int32_t)func,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0);
  if ( !wholeRestrictionLabel )
    goto LABEL_147;
  UILabel__set_text(wholeRestrictionLabel, Object, 0);
  if ( !questRestrictionInfo )
    goto LABEL_147;
  if ( questRestrictionInfo->fields.isFatigure )
  {
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0,
                                  0,
                                  0);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v19 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v18);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_147;
      items = v16->fields._items;
      v27 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v16->fields._size;
      if ( (unsigned int)size < LODWORD(items->max_length) )
      {
        v29 = &items->obj.klass + size;
        v16->fields._size = size + 1;
LABEL_20:
        v29[4] = (Il2CppClass *)v19;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v33 = v27[4];
      v34 = v16;
    }
    else
    {
      if ( !v15 )
        goto LABEL_147;
      v30 = v15->fields._items;
      v31 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v15->fields._version;
      if ( !v30 )
        goto LABEL_147;
      v32 = v15->fields._size;
      if ( (unsigned int)v32 < LODWORD(v30->max_length) )
      {
        v29 = &v30->obj.klass + v32;
        v15->fields._size = v32 + 1;
        goto LABEL_20;
      }
      v33 = v31[4];
      v34 = v15;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      v19,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v33 + 192) + 112LL));
    goto LABEL_24;
  }
LABEL_25:
  if ( !questRestrictionInfo->fields.isNotSingleSupportOnly )
    goto LABEL_42;
  Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                0,
                                0,
                                0);
  if ( !Object )
    goto LABEL_147;
  Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Object,
                                (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v36 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v35);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v15 )
      goto LABEL_147;
    v47 = v15->fields._items;
    v48 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v15->fields._version;
    if ( !v47 )
      goto LABEL_147;
    v49 = v15->fields._size;
    if ( (unsigned int)v49 < LODWORD(v47->max_length) )
    {
      v46 = &v47->obj.klass + v49;
      v15->fields._size = v49 + 1;
      goto LABEL_37;
    }
    v50 = v48[4];
    v51 = v15;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v51,
      v36,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v50 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v16 )
    goto LABEL_147;
  v43 = v16->fields._items;
  v44 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v16->fields._version;
  if ( !v43 )
    goto LABEL_147;
  v45 = v16->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
  {
    v50 = v44[4];
    v51 = v16;
    goto LABEL_40;
  }
  v46 = &v43->obj.klass + v45;
  v16->fields._size = v45 + 1;
LABEL_37:
  v46[4] = (Il2CppClass *)v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v36, v37, v38, v39, v40, v41, v42);
LABEL_41:
  ++this->fields.wholeInfoCount;
LABEL_42:
  Object = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_147;
    max_length = restrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        if ( v54 >= max_length )
          goto LABEL_152;
        v55 = restrictionEntityList->m_Items[v54];
        if ( !v55 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v55->fields.name, 0);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v54 >= max_length )
          goto LABEL_107;
      }
      Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                    (BaseMonoBehaviour_o *)this,
                                    this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                    0,
                                    0,
                                    0);
      if ( !Object )
        goto LABEL_147;
      Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Object,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v57 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_34958160(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v55,
                                    partyItem,
                                    questRestrictionInfo,
                                    v56);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_147;
        v64 = v16->fields._items;
        v65 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v16->fields._version;
        if ( !v64 )
          goto LABEL_147;
        v66 = v16->fields._size;
        if ( (unsigned int)v66 < LODWORD(v64->max_length) )
        {
          v67 = &v64->obj.klass + v66;
          v16->fields._size = v66 + 1;
LABEL_60:
          v67[4] = (Il2CppClass *)v57;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v67 + 4), (int32_t)v57, v58, v59, v60, v61, v62, v63);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v71 = v65[4];
        v72 = v16;
      }
      else
      {
        if ( !v15 )
          goto LABEL_147;
        v68 = v15->fields._items;
        v69 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v15->fields._version;
        if ( !v68 )
          goto LABEL_147;
        v70 = v15->fields._size;
        if ( (unsigned int)v70 < LODWORD(v68->max_length) )
        {
          v67 = &v68->obj.klass + v70;
          v15->fields._size = v70 + 1;
          goto LABEL_60;
        }
        v71 = v69[4];
        v72 = v15;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v72,
        v57,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v71 + 192) + 112LL));
      goto LABEL_64;
    }
    goto LABEL_107;
  }
  if ( questRestrictionInfo->fields.isUniqueServant )
  {
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0,
                                  0,
                                  0);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v74 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v73);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_147;
      v81 = v16->fields._items;
      v82 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v16->fields._version;
      if ( !v81 )
        goto LABEL_147;
      v83 = v16->fields._size;
      if ( (unsigned int)v83 < LODWORD(v81->max_length) )
      {
        v84 = &v81->obj.klass + v83;
        v16->fields._size = v83 + 1;
LABEL_79:
        v84[4] = (Il2CppClass *)v74;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)v74, v75, v76, v77, v78, v79, v80);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v88 = v82[4];
      v89 = v16;
    }
    else
    {
      if ( !v15 )
        goto LABEL_147;
      v85 = v15->fields._items;
      v86 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v15->fields._version;
      if ( !v85 )
        goto LABEL_147;
      v87 = v15->fields._size;
      if ( (unsigned int)v87 < LODWORD(v85->max_length) )
      {
        v84 = &v85->obj.klass + v87;
        v15->fields._size = v87 + 1;
        goto LABEL_79;
      }
      v88 = v86[4];
      v89 = v15;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v89,
      v74,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v88 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v91 = restrictionWholeEntities->max_length;
  if ( v91 >= 1 )
  {
    v92 = 0;
    while ( 1 )
    {
      if ( v92 >= v91 )
LABEL_152:
        sub_1C71610(Object);
      v93 = restrictionWholeEntities->m_Items[v92];
      if ( !v93 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v93->fields.summary, 0);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v91 = restrictionWholeEntities->max_length;
      if ( (int)++v92 >= v91 )
        goto LABEL_107;
    }
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0,
                                  0,
                                  0);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v96 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v93,
                                  partyItem,
                                  v94,
                                  v95);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_147;
      v103 = v16->fields._items;
      v104 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v16->fields._version;
      if ( !v103 )
        goto LABEL_147;
      v105 = v16->fields._size;
      if ( (unsigned int)v105 < LODWORD(v103->max_length) )
      {
        v106 = &v103->obj.klass + v105;
        v16->fields._size = v105 + 1;
LABEL_101:
        v106[4] = (Il2CppClass *)v96;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v106 + 4), (int32_t)v96, v97, v98, v99, v100, v101, v102);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v110 = v104[4];
      v111 = v16;
    }
    else
    {
      if ( !v15 )
        goto LABEL_147;
      v107 = v15->fields._items;
      v108 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v15->fields._version;
      if ( !v107 )
        goto LABEL_147;
      v109 = v15->fields._size;
      if ( (unsigned int)v109 < LODWORD(v107->max_length) )
      {
        v106 = &v107->obj.klass + v109;
        v15->fields._size = v109 + 1;
        goto LABEL_101;
      }
      v110 = v108[4];
      v111 = v15;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v111,
      v96,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v110 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v16 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    v16,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v140 = v139;
  while ( 1 )
  {
    v112 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v140,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v112 )
      break;
    current = v140.fields._current;
    if ( !v140.fields._current )
      sub_1C71608(v112, v113);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v140.fields._current, 0);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1C71608(0, v115);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0);
    GameObjectExtensions__SetParent(gameObject, transform, 0);
    v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !byte_4CC0D0E )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D0E = 1;
    }
    GameObjectExtensions__SetLocalScale(v119, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v140,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v15 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    v15,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v140 = v139;
  while ( 1 )
  {
    v120 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v140,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v120 )
      break;
    v122 = v140.fields._current;
    if ( !v140.fields._current )
      sub_1C71608(v120, v121);
    v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v140.fields._current, 0);
    v125 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v125 )
      sub_1C71608(0, v123);
    v126 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v125, 0);
    GameObjectExtensions__SetParent(v124, v126, 0);
    v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v122, 0);
    if ( !byte_4CC0D0E )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D0E = 1;
    }
    GameObjectExtensions__SetLocalScale(v127, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v140,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
  if ( !Object )
    goto LABEL_147;
  UIScrollView__UpdatePosition((UIScrollView_o *)Object, 0);
  if ( this->fields.wholeInfoCount <= 2 )
  {
    wholeRestrictionScrollView = this->fields.wholeRestrictionScrollView;
    if ( !wholeRestrictionScrollView )
      goto LABEL_147;
    Object = (System_String_o *)wholeRestrictionScrollView->fields.verticalScrollBar;
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0);
    if ( !Object )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 0, 0);
    Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
    if ( !Object )
      goto LABEL_147;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Object, 0, 0);
  }
  for ( i = 1; ; ++i )
  {
    v130 = BalanceConfig_TypeInfo;
    v131 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v130 = BalanceConfig_TypeInfo;
    }
    if ( v131 >= v130->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v133 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v133, 0, 0);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v134 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v131, 0);
    if ( !v134 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v134, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v135);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0, 0) )
  {
    v137 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
    if ( v137 )
    {
      UILabel__set_text(v137, Object, 0);
      goto LABEL_146;
    }
LABEL_147:
    sub_1C71608(Object, v14);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v138 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v138, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v138, 0, 0, 0);
}


UnityEngine_GameObject_o *RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC313E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC313E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void RestrictionNotSatisfyDialog_CloseDelegate___ctor(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA1AA0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA1A60;
}


System_IAsyncResult_o *RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}