void RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934230 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934230 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__Awake(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__Close(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_593422C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RestrictionNotSatisfyDialog_EndClose__);
    byte_593422C = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_593422D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593422D = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_593422A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593422A = 1;
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
    sub_21FFECC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__OnClickClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_593422E & 1) == 0 )
  {
    sub_21FFC50(&Method_RestrictionNotSatisfyDialog_OnClickClose__);
    byte_593422E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x22
  System_Collections_Generic_List_object__o *v18; // x23
  System_String_o *v19; // x0
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x24
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  const MethodInfo *v38; // x2
  Il2CppObject *v39; // x24
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  System_Collections_Generic_List_object__o *v54; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v57; // w29
  RestrictionEntity_o *v58; // x25
  const MethodInfo *v59; // x4
  Il2CppObject *v60; // x24
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  System_Collections_Generic_List_object__o *v75; // x0
  const MethodInfo *v76; // x2
  Il2CppObject *v77; // x24
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  System_Collections_Generic_List_object__o *v92; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v94; // w8
  unsigned int v95; // w29
  RestrictionWholeEntity_o *v96; // x25
  QuestRestrictionInfo_o *v97; // x3
  const MethodInfo *v98; // x4
  Il2CppObject *v99; // x24
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  __int64 v113; // x8
  System_Collections_Generic_List_object__o *v114; // x0
  _BOOL8 v115; // x0
  __int64 v116; // x1
  Il2CppObject *current; // x24
  __int64 v118; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v122; // x24
  _BOOL8 v123; // x0
  __int64 v124; // x1
  Il2CppObject *v125; // x22
  __int64 v126; // x1
  UnityEngine_GameObject_o *v127; // x24
  UnityEngine_Component_o *v128; // x0
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x22
  __int64 v131; // x2
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v134; // x0
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v136; // x0
  RestrictionNotSatisfySlot_o *v137; // x24
  const MethodInfo *v138; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v140; // x1
  __int64 v141; // x2
  UILabel_o *v142; // x20
  System_Action_o *v143; // x20
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593422B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_RestrictionNotSatisfyDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_11564/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_11567/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/);
    sub_21FFC50(&StringLiteral_10678/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    byte_593422B = 1;
  }
  *(_QWORD *)&v145.fields._index = 0;
  this->fields.closeFunc = func;
  v145.fields._list = 0;
  v145.fields._current = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (System_String_o *)questRestrictionInfo,
    (System_String_o *)func,
    (int32_t)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11564/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v18 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v19 = (System_String_o *)StringLiteral_11567/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  this->fields.wholeInfoCount = 0;
  Object = LocalizationManager__Get(v19, 0);
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
                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v22 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v21);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_147;
      items = v18->fields._items;
      v30 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v18->fields._size;
      if ( (unsigned int)size < LODWORD(items->max_length) )
      {
        v32 = &items->obj.klass + size;
        v18->fields._size = size + 1;
LABEL_20:
        v32[4] = (Il2CppClass *)v22;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v36 = v30[4];
      v37 = v18;
    }
    else
    {
      if ( !v17 )
        goto LABEL_147;
      v33 = v17->fields._items;
      v34 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v17->fields._version;
      if ( !v33 )
        goto LABEL_147;
      v35 = v17->fields._size;
      if ( (unsigned int)v35 < LODWORD(v33->max_length) )
      {
        v32 = &v33->obj.klass + v35;
        v17->fields._size = v35 + 1;
        goto LABEL_20;
      }
      v36 = v34[4];
      v37 = v17;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      v22,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36 + 192) + 112LL));
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
                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v39 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v38);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v17 )
      goto LABEL_147;
    v50 = v17->fields._items;
    v51 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v17->fields._version;
    if ( !v50 )
      goto LABEL_147;
    v52 = v17->fields._size;
    if ( (unsigned int)v52 < LODWORD(v50->max_length) )
    {
      v49 = &v50->obj.klass + v52;
      v17->fields._size = v52 + 1;
      goto LABEL_37;
    }
    v53 = v51[4];
    v54 = v17;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v54,
      v39,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v53 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v18 )
    goto LABEL_147;
  v46 = v18->fields._items;
  v47 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v18->fields._version;
  if ( !v46 )
    goto LABEL_147;
  v48 = v18->fields._size;
  if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
  {
    v53 = v47[4];
    v54 = v18;
    goto LABEL_40;
  }
  v49 = &v46->obj.klass + v48;
  v18->fields._size = v48 + 1;
LABEL_37:
  v49[4] = (Il2CppClass *)v39;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v39, v40, v41, v42, v43, v44, v45);
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
      v57 = 0;
      while ( 1 )
      {
        if ( v57 >= max_length )
          goto LABEL_152;
        v58 = restrictionEntityList->m_Items[v57];
        if ( !v58 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v58->fields.name, 0);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v57 >= max_length )
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
                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v60 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_41435492(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v58,
                                    partyItem,
                                    questRestrictionInfo,
                                    v59);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_147;
        v67 = v18->fields._items;
        v68 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v18->fields._version;
        if ( !v67 )
          goto LABEL_147;
        v69 = v18->fields._size;
        if ( (unsigned int)v69 < LODWORD(v67->max_length) )
        {
          v70 = &v67->obj.klass + v69;
          v18->fields._size = v69 + 1;
LABEL_60:
          v70[4] = (Il2CppClass *)v60;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v70 + 4), (int32_t)v60, v61, v62, v63, v64, v65, v66);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v74 = v68[4];
        v75 = v18;
      }
      else
      {
        if ( !v17 )
          goto LABEL_147;
        v71 = v17->fields._items;
        v72 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v17->fields._version;
        if ( !v71 )
          goto LABEL_147;
        v73 = v17->fields._size;
        if ( (unsigned int)v73 < LODWORD(v71->max_length) )
        {
          v70 = &v71->obj.klass + v73;
          v17->fields._size = v73 + 1;
          goto LABEL_60;
        }
        v74 = v72[4];
        v75 = v17;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v75,
        v60,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v74 + 192) + 112LL));
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
                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v77 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v76);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_147;
      v84 = v18->fields._items;
      v85 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v18->fields._version;
      if ( !v84 )
        goto LABEL_147;
      v86 = v18->fields._size;
      if ( (unsigned int)v86 < LODWORD(v84->max_length) )
      {
        v87 = &v84->obj.klass + v86;
        v18->fields._size = v86 + 1;
LABEL_79:
        v87[4] = (Il2CppClass *)v77;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v87 + 4), (int32_t)v77, v78, v79, v80, v81, v82, v83);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v91 = v85[4];
      v92 = v18;
    }
    else
    {
      if ( !v17 )
        goto LABEL_147;
      v88 = v17->fields._items;
      v89 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v17->fields._version;
      if ( !v88 )
        goto LABEL_147;
      v90 = v17->fields._size;
      if ( (unsigned int)v90 < LODWORD(v88->max_length) )
      {
        v87 = &v88->obj.klass + v90;
        v17->fields._size = v90 + 1;
        goto LABEL_79;
      }
      v91 = v89[4];
      v92 = v17;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v92,
      v77,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v91 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v94 = restrictionWholeEntities->max_length;
  if ( v94 >= 1 )
  {
    v95 = 0;
    while ( 1 )
    {
      if ( v95 >= v94 )
LABEL_152:
        sub_21FFED4(Object);
      v96 = restrictionWholeEntities->m_Items[v95];
      if ( !v96 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v96->fields.summary, 0);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v94 = restrictionWholeEntities->max_length;
      if ( (int)++v95 >= v94 )
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
                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v99 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v96,
                                  partyItem,
                                  v97,
                                  v98);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_147;
      v106 = v18->fields._items;
      v107 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v18->fields._version;
      if ( !v106 )
        goto LABEL_147;
      v108 = v18->fields._size;
      if ( (unsigned int)v108 < LODWORD(v106->max_length) )
      {
        v109 = &v106->obj.klass + v108;
        v18->fields._size = v108 + 1;
LABEL_101:
        v109[4] = (Il2CppClass *)v99;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v109 + 4), (int32_t)v99, v100, v101, v102, v103, v104, v105);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v113 = v107[4];
      v114 = v18;
    }
    else
    {
      if ( !v17 )
        goto LABEL_147;
      v110 = v17->fields._items;
      v111 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v17->fields._version;
      if ( !v110 )
        goto LABEL_147;
      v112 = v17->fields._size;
      if ( (unsigned int)v112 < LODWORD(v110->max_length) )
      {
        v109 = &v110->obj.klass + v112;
        v17->fields._size = v112 + 1;
        goto LABEL_101;
      }
      v113 = v111[4];
      v114 = v17;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v114,
      v99,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v113 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v18 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v144,
    v18,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v145 = v144;
  v144.fields._list = 0;
  *(_QWORD *)&v144.fields._index = &v145;
  while ( 1 )
  {
    v115 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v145,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v115 )
      break;
    current = v145.fields._current;
    if ( !v145.fields._current )
      sub_21FFECC(v115, v116);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v145.fields._current, 0);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_21FFECC(0, v118);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0);
    GameObjectExtensions__SetParent(gameObject, transform, 0);
    v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !byte_5931945 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    GameObjectExtensions__SetLocalScale(v122, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v145,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v17 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v144,
    v17,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v145 = v144;
  v144.fields._list = 0;
  *(_QWORD *)&v144.fields._index = &v145;
  while ( 1 )
  {
    v123 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v145,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v123 )
      break;
    v125 = v145.fields._current;
    if ( !v145.fields._current )
      sub_21FFECC(v123, v124);
    v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v145.fields._current, 0);
    v128 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v128 )
      sub_21FFECC(0, v126);
    v129 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v128, 0);
    GameObjectExtensions__SetParent(v127, v129, 0);
    v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v125, 0);
    if ( !byte_5931945 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    GameObjectExtensions__SetLocalScale(v130, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v145,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
    v134 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16, v131);
      v134 = BalanceConfig_TypeInfo;
    }
    if ( i - 1 >= v134->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v136 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v136, 0, 0);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v137 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, i - 1, 0);
    if ( !v137 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v137, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v138);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v131);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0, 0) )
  {
    v142 = this->fields.buttonCloseLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v140, v141);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10678/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
    if ( v142 )
    {
      UILabel__set_text(v142, Object, 0);
      goto LABEL_146;
    }
LABEL_147:
    sub_21FFECC(Object, v16);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v143 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v143, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v143, 0, 0, 0);
}


UnityEngine_GameObject_o *RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_593422F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593422F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void RestrictionNotSatisfyDialog_CloseDelegate___ctor(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF1FD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF1F94;
}


System_IAsyncResult_o *RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}