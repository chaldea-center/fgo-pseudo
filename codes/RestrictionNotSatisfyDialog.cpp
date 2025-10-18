void RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3ED4C & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3ED4C = 1;
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

  if ( (byte_4C3ED48 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_RestrictionNotSatisfyDialog_EndClose__);
    byte_4C3ED48 = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3ED49 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3ED49 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *gameObject; // x0

  if ( (byte_4C3ED46 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3ED46 = 1;
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
    sub_1C372B4(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RestrictionNotSatisfyDialog__OnClickClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4C3ED4A & 1) == 0 )
  {
    sub_1C37058(&Method_RestrictionNotSatisfyDialog_OnClickClose__);
    byte_4C3ED4A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
  System_Collections_Generic_List_object__o *v11; // x22
  System_Collections_Generic_List_object__o *v12; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_Collections_Generic_List_object__o *v26; // x0
  const MethodInfo *v27; // x2
  Il2CppObject *v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_object__o *v39; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v42; // w28
  RestrictionEntity_o *v43; // x25
  const MethodInfo *v44; // x4
  Il2CppObject *v45; // x24
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  System_Collections_Generic_List_object__o *v56; // x0
  const MethodInfo *v57; // x2
  Il2CppObject *v58; // x24
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  System_Collections_Generic_List_object__o *v69; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v71; // w8
  unsigned int v72; // w28
  RestrictionWholeEntity_o *v73; // x25
  QuestRestrictionInfo_o *v74; // x3
  const MethodInfo *v75; // x4
  Il2CppObject *v76; // x24
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  System_Collections_Generic_List_object__o *v87; // x0
  _BOOL8 v88; // x0
  Il2CppObject *current; // x24
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v93; // x24
  _BOOL8 v94; // x0
  Il2CppObject *v95; // x22
  UnityEngine_GameObject_o *v96; // x24
  UnityEngine_Component_o *v97; // x0
  UnityEngine_Component_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v102; // x0
  int32_t v103; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v105; // x0
  RestrictionNotSatisfySlot_o *v106; // x24
  const MethodInfo *v107; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v109; // x20
  System_Action_o *v110; // x20
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3ED47 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_RestrictionNotSatisfyDialog_EndOpen__);
    sub_1C37058(&StringLiteral_11103/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_11106/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/);
    sub_1C37058(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    byte_4C3ED47 = 1;
  }
  memset(&v112, 0, sizeof(v112));
  this->fields.closeFunc = func;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    (const MethodInfo *)func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11103/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0);
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
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v15 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v14);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_147;
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v12->fields._size;
      if ( (unsigned int)size < LODWORD(items->max_length) )
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
LABEL_20:
        v21[4] = (Il2CppClass *)v15;
        sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v25 = v19[4];
      v26 = v12;
    }
    else
    {
      if ( !v11 )
        goto LABEL_147;
      v22 = v11->fields._items;
      v23 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v11->fields._version;
      if ( !v22 )
        goto LABEL_147;
      v24 = v11->fields._size;
      if ( (unsigned int)v24 < LODWORD(v22->max_length) )
      {
        v21 = &v22->obj.klass + v24;
        v11->fields._size = v24 + 1;
        goto LABEL_20;
      }
      v25 = v23[4];
      v26 = v11;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v15,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25 + 192) + 112LL));
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
                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v28 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v27);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v11 )
      goto LABEL_147;
    v35 = v11->fields._items;
    v36 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v11->fields._version;
    if ( !v35 )
      goto LABEL_147;
    v37 = v11->fields._size;
    if ( (unsigned int)v37 < LODWORD(v35->max_length) )
    {
      v34 = &v35->obj.klass + v37;
      v11->fields._size = v37 + 1;
      goto LABEL_37;
    }
    v38 = v36[4];
    v39 = v11;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      v28,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v38 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v12 )
    goto LABEL_147;
  v31 = v12->fields._items;
  v32 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v12->fields._version;
  if ( !v31 )
    goto LABEL_147;
  v33 = v12->fields._size;
  if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
  {
    v38 = v32[4];
    v39 = v12;
    goto LABEL_40;
  }
  v34 = &v31->obj.klass + v33;
  v12->fields._size = v33 + 1;
LABEL_37:
  v34[4] = (Il2CppClass *)v28;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v28, v29, v30);
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
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= max_length )
          goto LABEL_152;
        v43 = restrictionEntityList->m_Items[v42];
        if ( !v43 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v43->fields.name, 0);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v42 >= max_length )
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
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v45 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_34707000(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v43,
                                    partyItem,
                                    questRestrictionInfo,
                                    v44);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_147;
        v48 = v12->fields._items;
        v49 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v12->fields._version;
        if ( !v48 )
          goto LABEL_147;
        v50 = v12->fields._size;
        if ( (unsigned int)v50 < LODWORD(v48->max_length) )
        {
          v51 = &v48->obj.klass + v50;
          v12->fields._size = v50 + 1;
LABEL_60:
          v51[4] = (Il2CppClass *)v45;
          sub_1C36FFC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v45, v46, v47);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v55 = v49[4];
        v56 = v12;
      }
      else
      {
        if ( !v11 )
          goto LABEL_147;
        v52 = v11->fields._items;
        v53 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v11->fields._version;
        if ( !v52 )
          goto LABEL_147;
        v54 = v11->fields._size;
        if ( (unsigned int)v54 < LODWORD(v52->max_length) )
        {
          v51 = &v52->obj.klass + v54;
          v11->fields._size = v54 + 1;
          goto LABEL_60;
        }
        v55 = v53[4];
        v56 = v11;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        v45,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v55 + 192) + 112LL));
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
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v58 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v57);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_147;
      v61 = v12->fields._items;
      v62 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !v61 )
        goto LABEL_147;
      v63 = v12->fields._size;
      if ( (unsigned int)v63 < LODWORD(v61->max_length) )
      {
        v64 = &v61->obj.klass + v63;
        v12->fields._size = v63 + 1;
LABEL_79:
        v64[4] = (Il2CppClass *)v58;
        sub_1C36FFC((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v68 = v62[4];
      v69 = v12;
    }
    else
    {
      if ( !v11 )
        goto LABEL_147;
      v65 = v11->fields._items;
      v66 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v11->fields._version;
      if ( !v65 )
        goto LABEL_147;
      v67 = v11->fields._size;
      if ( (unsigned int)v67 < LODWORD(v65->max_length) )
      {
        v64 = &v65->obj.klass + v67;
        v11->fields._size = v67 + 1;
        goto LABEL_79;
      }
      v68 = v66[4];
      v69 = v11;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v69,
      v58,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v68 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v71 = restrictionWholeEntities->max_length;
  if ( v71 >= 1 )
  {
    v72 = 0;
    while ( 1 )
    {
      if ( v72 >= v71 )
LABEL_152:
        sub_1C372BC(Object);
      v73 = restrictionWholeEntities->m_Items[v72];
      if ( !v73 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v73->fields.summary, 0);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v71 = restrictionWholeEntities->max_length;
      if ( (int)++v72 >= v71 )
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
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v76 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v73,
                                  partyItem,
                                  v74,
                                  v75);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_147;
      v79 = v12->fields._items;
      v80 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !v79 )
        goto LABEL_147;
      v81 = v12->fields._size;
      if ( (unsigned int)v81 < LODWORD(v79->max_length) )
      {
        v82 = &v79->obj.klass + v81;
        v12->fields._size = v81 + 1;
LABEL_101:
        v82[4] = (Il2CppClass *)v76;
        sub_1C36FFC((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v76, v77, v78);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v86 = v80[4];
      v87 = v12;
    }
    else
    {
      if ( !v11 )
        goto LABEL_147;
      v83 = v11->fields._items;
      v84 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v11->fields._version;
      if ( !v83 )
        goto LABEL_147;
      v85 = v11->fields._size;
      if ( (unsigned int)v85 < LODWORD(v83->max_length) )
      {
        v82 = &v83->obj.klass + v85;
        v11->fields._size = v85 + 1;
        goto LABEL_101;
      }
      v86 = v84[4];
      v87 = v11;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v87,
      v76,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v86 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v12 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v111,
    v12,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v112 = v111;
  while ( 1 )
  {
    v88 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v112,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v88 )
      break;
    current = v112.fields._current;
    if ( !v112.fields._current )
      sub_1C372B4(v88);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v112.fields._current, 0);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1C372B4(0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0);
    GameObjectExtensions__SetParent(gameObject, transform, 0);
    v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    GameObjectExtensions__SetLocalScale(v93, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v112,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v11 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v111,
    v11,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v112 = v111;
  while ( 1 )
  {
    v94 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v112,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v94 )
      break;
    v95 = v112.fields._current;
    if ( !v112.fields._current )
      sub_1C372B4(v94);
    v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v112.fields._current, 0);
    v97 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v97 )
      sub_1C372B4(0);
    v98 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v97, 0);
    GameObjectExtensions__SetParent(v96, v98, 0);
    v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v95, 0);
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    GameObjectExtensions__SetLocalScale(v99, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v112,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
    v102 = BalanceConfig_TypeInfo;
    v103 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v102 = BalanceConfig_TypeInfo;
    }
    if ( v103 >= v102->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v105 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v105, 0, 0);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v106 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v103, 0);
    if ( !v106 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v106, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v107);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0, 0) )
  {
    v109 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
    if ( v109 )
    {
      UILabel__set_text(v109, Object, 0);
      goto LABEL_146;
    }
LABEL_147:
    sub_1C372B4(Object);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v110 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v110, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v110, 0, 0, 0);
}


UnityEngine_GameObject_o *RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3ED4B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3ED4B = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A76538;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A764F8;
}


System_IAsyncResult_o *RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}