void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AFDD8B & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFDD8B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__Awake(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__Close(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4AFDD87 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_RestrictionNotSatisfyDialog_EndClose__, v3);
    byte_4AFDD87 = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4AFDD88 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFDD88 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4AFDD85 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4AFDD85 = 1;
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__OnClickClose(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4AFDD89 & 1) == 0 )
  {
    sub_1BC3008(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method);
    byte_4AFDD89 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *v28; // x22
  System_Collections_Generic_List_object__o *v29; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v31; // x2
  Il2CppObject *v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  System_Collections_Generic_List_object__o *v43; // x0
  const MethodInfo *v44; // x2
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
  __int64 v57; // x2
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v60; // w28
  RestrictionEntity_o *v61; // x25
  const MethodInfo *v62; // x4
  Il2CppObject *v63; // x24
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  System_Collections_Generic_List_object__o *v74; // x0
  const MethodInfo *v75; // x2
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
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v89; // w8
  unsigned int v90; // w28
  RestrictionWholeEntity_o *v91; // x25
  QuestRestrictionInfo_o *v92; // x3
  const MethodInfo *v93; // x4
  Il2CppObject *v94; // x24
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  System_Collections_Generic_List_object__o *v105; // x0
  _BOOL8 v106; // x0
  __int64 v107; // x1
  Il2CppObject *current; // x24
  __int64 v109; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v113; // x1
  UnityEngine_GameObject_o *v114; // x24
  _BOOL8 v115; // x0
  __int64 v116; // x1
  Il2CppObject *v117; // x22
  __int64 v118; // x1
  UnityEngine_GameObject_o *v119; // x24
  UnityEngine_Component_o *v120; // x0
  UnityEngine_Component_o *v121; // x0
  __int64 v122; // x1
  UnityEngine_GameObject_o *v123; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v126; // x0
  int32_t v127; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v129; // x0
  RestrictionNotSatisfySlot_o *v130; // x24
  const MethodInfo *v131; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v133; // x20
  System_Action_o *v134; // x20
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFDD86 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, partyItem);
    sub_1BC3008(&BalanceConfig_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__, v12);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v13);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v17);
    sub_1BC3008(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v18);
    sub_1BC3008(&LocalizationManager_TypeInfo, v19);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v20);
    sub_1BC3008(&Method_RestrictionNotSatisfyDialog_EndOpen__, v21);
    sub_1BC3008(&StringLiteral_10995/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v22);
    sub_1BC3008(&StringLiteral_10998/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v23);
    sub_1BC3008(&StringLiteral_10190/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v24);
    byte_4AFDD86 = 1;
  }
  memset(&v136, 0, sizeof(v136));
  this->fields.closeFunc = func;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    (const MethodInfo *)func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_10995/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_10998/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
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
                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v32 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v31);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_147;
      items = v29->fields._items;
      v36 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v29->fields._size;
      if ( (unsigned int)size < items->max_length )
      {
        v38 = &items->obj.klass + size;
        v29->fields._size = size + 1;
LABEL_20:
        v38[4] = (Il2CppClass *)v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v42 = v36[4];
      v43 = v29;
    }
    else
    {
      if ( !v28 )
        goto LABEL_147;
      v39 = v28->fields._items;
      v40 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v28->fields._version;
      if ( !v39 )
        goto LABEL_147;
      v41 = v28->fields._size;
      if ( (unsigned int)v41 < v39->max_length )
      {
        v38 = &v39->obj.klass + v41;
        v28->fields._size = v41 + 1;
        goto LABEL_20;
      }
      v42 = v40[4];
      v43 = v28;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v43,
      v32,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v42 + 192) + 112LL));
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
                                (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v45 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v44);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v28 )
      goto LABEL_147;
    v52 = v28->fields._items;
    v53 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v28->fields._version;
    if ( !v52 )
      goto LABEL_147;
    v54 = v28->fields._size;
    if ( (unsigned int)v54 < v52->max_length )
    {
      v51 = &v52->obj.klass + v54;
      v28->fields._size = v54 + 1;
      goto LABEL_37;
    }
    v55 = v53[4];
    v56 = v28;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v56,
      v45,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v55 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v29 )
    goto LABEL_147;
  v48 = v29->fields._items;
  v49 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v29->fields._version;
  if ( !v48 )
    goto LABEL_147;
  v50 = v29->fields._size;
  if ( (unsigned int)v50 >= v48->max_length )
  {
    v55 = v49[4];
    v56 = v29;
    goto LABEL_40;
  }
  v51 = &v48->obj.klass + v50;
  v29->fields._size = v50 + 1;
LABEL_37:
  v51[4] = (Il2CppClass *)v45;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v45, v46, v47);
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
      v60 = 0;
      while ( 1 )
      {
        if ( v60 >= max_length )
          goto LABEL_152;
        v61 = restrictionEntityList->m_Items[v60];
        if ( !v61 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v61->fields.name, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v60 >= max_length )
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
                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v63 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_33712936(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v61,
                                    partyItem,
                                    questRestrictionInfo,
                                    v62);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_147;
        v66 = v29->fields._items;
        v67 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v29->fields._version;
        if ( !v66 )
          goto LABEL_147;
        v68 = v29->fields._size;
        if ( (unsigned int)v68 < v66->max_length )
        {
          v69 = &v66->obj.klass + v68;
          v29->fields._size = v68 + 1;
LABEL_60:
          v69[4] = (Il2CppClass *)v63;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v63, v64, v65);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v73 = v67[4];
        v74 = v29;
      }
      else
      {
        if ( !v28 )
          goto LABEL_147;
        v70 = v28->fields._items;
        v71 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v28->fields._version;
        if ( !v70 )
          goto LABEL_147;
        v72 = v28->fields._size;
        if ( (unsigned int)v72 < v70->max_length )
        {
          v69 = &v70->obj.klass + v72;
          v28->fields._size = v72 + 1;
          goto LABEL_60;
        }
        v73 = v71[4];
        v74 = v28;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v74,
        v63,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v73 + 192) + 112LL));
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
                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v76 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v75);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_147;
      v79 = v29->fields._items;
      v80 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !v79 )
        goto LABEL_147;
      v81 = v29->fields._size;
      if ( (unsigned int)v81 < v79->max_length )
      {
        v82 = &v79->obj.klass + v81;
        v29->fields._size = v81 + 1;
LABEL_79:
        v82[4] = (Il2CppClass *)v76;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v76, v77, v78);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v86 = v80[4];
      v87 = v29;
    }
    else
    {
      if ( !v28 )
        goto LABEL_147;
      v83 = v28->fields._items;
      v84 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v28->fields._version;
      if ( !v83 )
        goto LABEL_147;
      v85 = v28->fields._size;
      if ( (unsigned int)v85 < v83->max_length )
      {
        v82 = &v83->obj.klass + v85;
        v28->fields._size = v85 + 1;
        goto LABEL_79;
      }
      v86 = v84[4];
      v87 = v28;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v87,
      v76,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v86 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v89 = restrictionWholeEntities->max_length;
  if ( v89 >= 1 )
  {
    v90 = 0;
    while ( 1 )
    {
      if ( v90 >= v89 )
LABEL_152:
        sub_1BC326C(Object, v27, v57);
      v91 = restrictionWholeEntities->m_Items[v90];
      if ( !v91 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v91->fields.summary, 0LL);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v89 = restrictionWholeEntities->max_length;
      if ( (int)++v90 >= v89 )
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
                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v94 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v91,
                                  partyItem,
                                  v92,
                                  v93);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_147;
      v97 = v29->fields._items;
      v98 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !v97 )
        goto LABEL_147;
      v99 = v29->fields._size;
      if ( (unsigned int)v99 < v97->max_length )
      {
        v100 = &v97->obj.klass + v99;
        v29->fields._size = v99 + 1;
LABEL_101:
        v100[4] = (Il2CppClass *)v94;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v100 + 4), (int32_t)v94, v95, v96);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v104 = v98[4];
      v105 = v29;
    }
    else
    {
      if ( !v28 )
        goto LABEL_147;
      v101 = v28->fields._items;
      v102 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v28->fields._version;
      if ( !v101 )
        goto LABEL_147;
      v103 = v28->fields._size;
      if ( (unsigned int)v103 < v101->max_length )
      {
        v100 = &v101->obj.klass + v103;
        v28->fields._size = v103 + 1;
        goto LABEL_101;
      }
      v104 = v102[4];
      v105 = v28;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v105,
      v94,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v104 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v29 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v135,
    v29,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v136 = v135;
  while ( 1 )
  {
    v106 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v136,
             (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v106 )
      break;
    current = v136.fields._current;
    if ( !v136.fields._current )
      sub_1BC3264(v106, v107);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v136.fields._current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1BC3264(0LL, v109);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !byte_4AFBDB6 )
    {
      sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v113);
      byte_4AFBDB6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v114, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v136,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v28 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v135,
    v28,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v136 = v135;
  while ( 1 )
  {
    v115 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v136,
             (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v115 )
      break;
    v117 = v136.fields._current;
    if ( !v136.fields._current )
      sub_1BC3264(v115, v116);
    v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v136.fields._current, 0LL);
    v120 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v120 )
      sub_1BC3264(0LL, v118);
    v121 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v120, 0LL);
    GameObjectExtensions__SetParent(v119, v121, 0LL);
    v123 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v117, 0LL);
    if ( !byte_4AFBDB6 )
    {
      sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v122);
      byte_4AFBDB6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v123, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v136,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
    v126 = BalanceConfig_TypeInfo;
    v127 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v126 = BalanceConfig_TypeInfo;
    }
    if ( v127 >= v126->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v129 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v129, 0LL, 0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v130 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v127, 0LL);
    if ( !v130 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v130, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v131);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v133 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10190/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v133 )
    {
      UILabel__set_text(v133, Object, 0LL);
      goto LABEL_146;
    }
LABEL_147:
    sub_1BC3264(Object, v27);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v134 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v134, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v134, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4AFDD8A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFDD8A = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestrictionNotSatisfyDialog_CloseDelegate___ctor(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A080F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A080B4;
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}