void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FACDD & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_49FACDD = 1;
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

  if ( (byte_49FACD9 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_RestrictionNotSatisfyDialog_EndClose__, v3);
    byte_49FACD9 = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FACDA & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FACDA = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
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

  if ( (byte_49FACD7 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v3);
    byte_49FACD7 = 1;
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
    sub_1B64C5C(gameObject, v5);
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

  if ( (byte_49FACDB & 1) == 0 )
  {
    sub_1B64A00(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method);
    byte_49FACDB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  int32_t v34; // w3
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
  int32_t v47; // w3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  System_Collections_Generic_List_object__o *v56; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v59; // w28
  RestrictionEntity_o *v60; // x25
  const MethodInfo *v61; // x4
  Il2CppObject *v62; // x24
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  System_Collections_Generic_List_object__o *v73; // x0
  const MethodInfo *v74; // x2
  Il2CppObject *v75; // x24
  int32_t v76; // w2
  int32_t v77; // w3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  System_Collections_Generic_List_object__o *v86; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v88; // w8
  unsigned int v89; // w28
  RestrictionWholeEntity_o *v90; // x25
  QuestRestrictionInfo_o *v91; // x3
  const MethodInfo *v92; // x4
  Il2CppObject *v93; // x24
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  System_Collections_Generic_List_object__o *v104; // x0
  _BOOL8 v105; // x0
  __int64 v106; // x1
  Il2CppObject *current; // x24
  __int64 v108; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v112; // x1
  UnityEngine_GameObject_o *v113; // x24
  _BOOL8 v114; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x22
  __int64 v117; // x1
  UnityEngine_GameObject_o *v118; // x24
  UnityEngine_Component_o *v119; // x0
  UnityEngine_Component_o *v120; // x0
  __int64 v121; // x1
  UnityEngine_GameObject_o *v122; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v125; // x0
  int32_t v126; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v128; // x0
  RestrictionNotSatisfySlot_o *v129; // x24
  const MethodInfo *v130; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v132; // x20
  System_Action_o *v133; // x20
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FACD8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, partyItem);
    sub_1B64A00(&BalanceConfig_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__, v12);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v13);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v17);
    sub_1B64A00(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v18);
    sub_1B64A00(&LocalizationManager_TypeInfo, v19);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v20);
    sub_1B64A00(&Method_RestrictionNotSatisfyDialog_EndOpen__, v21);
    sub_1B64A00(&StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v22);
    sub_1B64A00(&StringLiteral_11032/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v23);
    sub_1B64A00(&StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v24);
    byte_49FACD8 = 1;
  }
  memset(&v135, 0, sizeof(v135));
  this->fields.closeFunc = func;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    (int32_t)func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
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
                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
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
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
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
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v42 + 192) + 112LL));
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
                                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
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
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v55 + 192) + 112LL));
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v45, v46, v47);
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
      v59 = 0;
      while ( 1 )
      {
        if ( v59 >= max_length )
          goto LABEL_152;
        v60 = restrictionEntityList->m_Items[v59];
        if ( !v60 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v60->fields.name, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v59 >= max_length )
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
                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v62 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_32087848(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v60,
                                    partyItem,
                                    questRestrictionInfo,
                                    v61);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_147;
        v65 = v29->fields._items;
        v66 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v29->fields._version;
        if ( !v65 )
          goto LABEL_147;
        v67 = v29->fields._size;
        if ( (unsigned int)v67 < v65->max_length )
        {
          v68 = &v65->obj.klass + v67;
          v29->fields._size = v67 + 1;
LABEL_60:
          v68[4] = (Il2CppClass *)v62;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v72 = v66[4];
        v73 = v29;
      }
      else
      {
        if ( !v28 )
          goto LABEL_147;
        v69 = v28->fields._items;
        v70 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v28->fields._version;
        if ( !v69 )
          goto LABEL_147;
        v71 = v28->fields._size;
        if ( (unsigned int)v71 < v69->max_length )
        {
          v68 = &v69->obj.klass + v71;
          v28->fields._size = v71 + 1;
          goto LABEL_60;
        }
        v72 = v70[4];
        v73 = v28;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v73,
        v62,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v72 + 192) + 112LL));
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
                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v75 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v74);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_147;
      v78 = v29->fields._items;
      v79 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !v78 )
        goto LABEL_147;
      v80 = v29->fields._size;
      if ( (unsigned int)v80 < v78->max_length )
      {
        v81 = &v78->obj.klass + v80;
        v29->fields._size = v80 + 1;
LABEL_79:
        v81[4] = (Il2CppClass *)v75;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v85 = v79[4];
      v86 = v29;
    }
    else
    {
      if ( !v28 )
        goto LABEL_147;
      v82 = v28->fields._items;
      v83 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v28->fields._version;
      if ( !v82 )
        goto LABEL_147;
      v84 = v28->fields._size;
      if ( (unsigned int)v84 < v82->max_length )
      {
        v81 = &v82->obj.klass + v84;
        v28->fields._size = v84 + 1;
        goto LABEL_79;
      }
      v85 = v83[4];
      v86 = v28;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v86,
      v75,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v85 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v88 = restrictionWholeEntities->max_length;
  if ( v88 >= 1 )
  {
    v89 = 0;
    while ( 1 )
    {
      if ( v89 >= v88 )
LABEL_152:
        sub_1B64C64(Object, v27);
      v90 = restrictionWholeEntities->m_Items[v89];
      if ( !v90 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v90->fields.summary, 0LL);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v88 = restrictionWholeEntities->max_length;
      if ( (int)++v89 >= v88 )
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
                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v93 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v90,
                                  partyItem,
                                  v91,
                                  v92);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_147;
      v96 = v29->fields._items;
      v97 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !v96 )
        goto LABEL_147;
      v98 = v29->fields._size;
      if ( (unsigned int)v98 < v96->max_length )
      {
        v99 = &v96->obj.klass + v98;
        v29->fields._size = v98 + 1;
LABEL_101:
        v99[4] = (Il2CppClass *)v93;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)v93, v94, v95);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v103 = v97[4];
      v104 = v29;
    }
    else
    {
      if ( !v28 )
        goto LABEL_147;
      v100 = v28->fields._items;
      v101 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v28->fields._version;
      if ( !v100 )
        goto LABEL_147;
      v102 = v28->fields._size;
      if ( (unsigned int)v102 < v100->max_length )
      {
        v99 = &v100->obj.klass + v102;
        v28->fields._size = v102 + 1;
        goto LABEL_101;
      }
      v103 = v101[4];
      v104 = v28;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v104,
      v93,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v103 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v29 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v134,
    v29,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v135 = v134;
  while ( 1 )
  {
    v105 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v135,
             (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v105 )
      break;
    current = v135.fields._current;
    if ( !v135.fields._current )
      sub_1B64C5C(v105, v106);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v135.fields._current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1B64C5C(0LL, v108);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !byte_49F9826 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v112);
      byte_49F9826 = 1;
    }
    GameObjectExtensions__SetLocalScale(v113, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v135,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v28 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v134,
    v28,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v135 = v134;
  while ( 1 )
  {
    v114 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v135,
             (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v114 )
      break;
    v116 = v135.fields._current;
    if ( !v135.fields._current )
      sub_1B64C5C(v114, v115);
    v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v135.fields._current, 0LL);
    v119 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v119 )
      sub_1B64C5C(0LL, v117);
    v120 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v119, 0LL);
    GameObjectExtensions__SetParent(v118, v120, 0LL);
    v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v116, 0LL);
    if ( !byte_49F9826 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v121);
      byte_49F9826 = 1;
    }
    GameObjectExtensions__SetLocalScale(v122, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v135,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
    v125 = BalanceConfig_TypeInfo;
    v126 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v125 = BalanceConfig_TypeInfo;
    }
    if ( v126 >= v125->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v128 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v128, 0LL, 0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v129 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v126, 0LL);
    if ( !v129 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v129, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v130);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v132 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v132 )
    {
      UILabel__set_text(v132, Object, 0LL);
      goto LABEL_146;
    }
LABEL_147:
    sub_1B64C5C(Object, v27);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v133 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v133, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v133, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_49FACDC & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FACDC = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B64C5C(0LL, v4);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7704;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A76C4;
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B649B4(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}