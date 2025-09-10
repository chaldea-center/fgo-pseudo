void RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C23092 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C23092 = 1;
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

  if ( (byte_4C2308E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RestrictionNotSatisfyDialog_EndClose__);
    byte_4C2308E = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C2308F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2308F = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(gameObject, 0);
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

  if ( (byte_4C2308C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2308C = 1;
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
    sub_1C2D6EC(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__OnClickClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4C23090 & 1) == 0 )
  {
    sub_1C2D490(&Method_RestrictionNotSatisfyDialog_OnClickClose__);
    byte_4C23090 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_Generic_List_object__o *v13; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_object__o *v27; // x0
  const MethodInfo *v28; // x2
  Il2CppObject *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Collections_Generic_List_object__o *v40; // x0
  __int64 v41; // x2
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v44; // w28
  RestrictionEntity_o *v45; // x25
  const MethodInfo *v46; // x4
  Il2CppObject *v47; // x24
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  System_Collections_Generic_List_object__o *v58; // x0
  const MethodInfo *v59; // x2
  Il2CppObject *v60; // x24
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  System_Collections_Generic_List_object__o *v71; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v73; // w8
  unsigned int v74; // w28
  RestrictionWholeEntity_o *v75; // x25
  QuestRestrictionInfo_o *v76; // x3
  const MethodInfo *v77; // x4
  Il2CppObject *v78; // x24
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  System_Collections_Generic_List_object__o *v89; // x0
  _BOOL8 v90; // x0
  __int64 v91; // x1
  Il2CppObject *current; // x24
  __int64 v93; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v97; // x24
  _BOOL8 v98; // x0
  __int64 v99; // x1
  Il2CppObject *v100; // x22
  __int64 v101; // x1
  UnityEngine_GameObject_o *v102; // x24
  UnityEngine_Component_o *v103; // x0
  UnityEngine_Component_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v108; // x0
  int32_t v109; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v111; // x0
  RestrictionNotSatisfySlot_o *v112; // x24
  const MethodInfo *v113; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v115; // x20
  System_Action_o *v116; // x20
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C2308D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_RestrictionNotSatisfyDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_11099/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/);
    sub_1C2D490(&StringLiteral_10272/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    byte_4C2308D = 1;
  }
  memset(&v118, 0, sizeof(v118));
  this->fields.closeFunc = func;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    (const MethodInfo *)func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0);
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
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v16 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v15);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_147;
      items = v13->fields._items;
      v20 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v13->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v13->fields._size;
      if ( (unsigned int)size < LODWORD(items->max_length) )
      {
        v22 = &items->obj.klass + size;
        v13->fields._size = size + 1;
LABEL_20:
        v22[4] = (Il2CppClass *)v16;
        sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v26 = v20[4];
      v27 = v13;
    }
    else
    {
      if ( !v12 )
        goto LABEL_147;
      v23 = v12->fields._items;
      v24 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !v23 )
        goto LABEL_147;
      v25 = v12->fields._size;
      if ( (unsigned int)v25 < LODWORD(v23->max_length) )
      {
        v22 = &v23->obj.klass + v25;
        v12->fields._size = v25 + 1;
        goto LABEL_20;
      }
      v26 = v24[4];
      v27 = v12;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      v16,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v29 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v28);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v12 )
      goto LABEL_147;
    v36 = v12->fields._items;
    v37 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v12->fields._version;
    if ( !v36 )
      goto LABEL_147;
    v38 = v12->fields._size;
    if ( (unsigned int)v38 < LODWORD(v36->max_length) )
    {
      v35 = &v36->obj.klass + v38;
      v12->fields._size = v38 + 1;
      goto LABEL_37;
    }
    v39 = v37[4];
    v40 = v12;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v40,
      v29,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v39 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v13 )
    goto LABEL_147;
  v32 = v13->fields._items;
  v33 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v13->fields._version;
  if ( !v32 )
    goto LABEL_147;
  v34 = v13->fields._size;
  if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
  {
    v39 = v33[4];
    v40 = v13;
    goto LABEL_40;
  }
  v35 = &v32->obj.klass + v34;
  v13->fields._size = v34 + 1;
LABEL_37:
  v35[4] = (Il2CppClass *)v29;
  sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
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
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= max_length )
          goto LABEL_152;
        v45 = restrictionEntityList->m_Items[v44];
        if ( !v45 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v45->fields.name, 0);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v44 >= max_length )
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
                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v47 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_34496376(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v45,
                                    partyItem,
                                    questRestrictionInfo,
                                    v46);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_147;
        v50 = v13->fields._items;
        v51 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v13->fields._version;
        if ( !v50 )
          goto LABEL_147;
        v52 = v13->fields._size;
        if ( (unsigned int)v52 < LODWORD(v50->max_length) )
        {
          v53 = &v50->obj.klass + v52;
          v13->fields._size = v52 + 1;
LABEL_60:
          v53[4] = (Il2CppClass *)v47;
          sub_1C2D434((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v47, v48, v49);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v57 = v51[4];
        v58 = v13;
      }
      else
      {
        if ( !v12 )
          goto LABEL_147;
        v54 = v12->fields._items;
        v55 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v12->fields._version;
        if ( !v54 )
          goto LABEL_147;
        v56 = v12->fields._size;
        if ( (unsigned int)v56 < LODWORD(v54->max_length) )
        {
          v53 = &v54->obj.klass + v56;
          v12->fields._size = v56 + 1;
          goto LABEL_60;
        }
        v57 = v55[4];
        v58 = v12;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v58,
        v47,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v57 + 192) + 112LL));
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
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v60 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v59);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_147;
      v63 = v13->fields._items;
      v64 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v13->fields._version;
      if ( !v63 )
        goto LABEL_147;
      v65 = v13->fields._size;
      if ( (unsigned int)v65 < LODWORD(v63->max_length) )
      {
        v66 = &v63->obj.klass + v65;
        v13->fields._size = v65 + 1;
LABEL_79:
        v66[4] = (Il2CppClass *)v60;
        sub_1C2D434((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v70 = v64[4];
      v71 = v13;
    }
    else
    {
      if ( !v12 )
        goto LABEL_147;
      v67 = v12->fields._items;
      v68 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !v67 )
        goto LABEL_147;
      v69 = v12->fields._size;
      if ( (unsigned int)v69 < LODWORD(v67->max_length) )
      {
        v66 = &v67->obj.klass + v69;
        v12->fields._size = v69 + 1;
        goto LABEL_79;
      }
      v70 = v68[4];
      v71 = v12;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v71,
      v60,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v70 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v73 = restrictionWholeEntities->max_length;
  if ( v73 >= 1 )
  {
    v74 = 0;
    while ( 1 )
    {
      if ( v74 >= v73 )
LABEL_152:
        sub_1C2D6F4(Object, v11, v41);
      v75 = restrictionWholeEntities->m_Items[v74];
      if ( !v75 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v75->fields.summary, 0);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v73 = restrictionWholeEntities->max_length;
      if ( (int)++v74 >= v73 )
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
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v78 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v75,
                                  partyItem,
                                  v76,
                                  v77);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_147;
      v81 = v13->fields._items;
      v82 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v13->fields._version;
      if ( !v81 )
        goto LABEL_147;
      v83 = v13->fields._size;
      if ( (unsigned int)v83 < LODWORD(v81->max_length) )
      {
        v84 = &v81->obj.klass + v83;
        v13->fields._size = v83 + 1;
LABEL_101:
        v84[4] = (Il2CppClass *)v78;
        sub_1C2D434((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v78, v79, v80);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v88 = v82[4];
      v89 = v13;
    }
    else
    {
      if ( !v12 )
        goto LABEL_147;
      v85 = v12->fields._items;
      v86 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !v85 )
        goto LABEL_147;
      v87 = v12->fields._size;
      if ( (unsigned int)v87 < LODWORD(v85->max_length) )
      {
        v84 = &v85->obj.klass + v87;
        v12->fields._size = v87 + 1;
        goto LABEL_101;
      }
      v88 = v86[4];
      v89 = v12;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v89,
      v78,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v88 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v13 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    v13,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v118 = v117;
  while ( 1 )
  {
    v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v90 )
      break;
    current = v118.fields._current;
    if ( !v118.fields._current )
      sub_1C2D6EC(v90, v91);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v118.fields._current, 0);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1C2D6EC(0, v93);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0);
    GameObjectExtensions__SetParent(gameObject, transform, 0);
    v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !byte_4C20DA6 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v97, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v12 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    v12,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v118 = v117;
  while ( 1 )
  {
    v98 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v98 )
      break;
    v100 = v118.fields._current;
    if ( !v118.fields._current )
      sub_1C2D6EC(v98, v99);
    v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v118.fields._current, 0);
    v103 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v103 )
      sub_1C2D6EC(0, v101);
    v104 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v103, 0);
    GameObjectExtensions__SetParent(v102, v104, 0);
    v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v100, 0);
    if ( !byte_4C20DA6 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v105, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
    v108 = BalanceConfig_TypeInfo;
    v109 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v108 = BalanceConfig_TypeInfo;
    }
    if ( v109 >= v108->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v111 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v111, 0, 0);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v112 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v109, 0);
    if ( !v112 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v112, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v113);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0, 0) )
  {
    v115 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
    if ( v115 )
    {
      UILabel__set_text(v115, Object, 0);
      goto LABEL_146;
    }
LABEL_147:
    sub_1C2D6EC(Object, v11);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v116 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v116, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v116, 0, 0);
}


UnityEngine_GameObject_o *RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C23091 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23091 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void RestrictionNotSatisfyDialog_CloseDelegate___ctor(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6CAE0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6CAA0;
}


System_IAsyncResult_o *RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}