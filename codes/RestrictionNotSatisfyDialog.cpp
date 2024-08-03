void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F85CD & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F85CD = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49F85C9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_RestrictionNotSatisfyDialog_EndClose__, v4);
    byte_49F85C9 = 1;
  }
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49F85CA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F85CA = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *gameObject; // x0

  if ( (byte_49F85C7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F85C7 = 1;
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
    sub_1B64324(gameObject);
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

  if ( (byte_49F85CB & 1) == 0 )
  {
    sub_1B640C8(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method);
    byte_49F85CB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v34; // x2
  Il2CppObject *v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  System_Collections_Generic_List_object__o *v46; // x0
  const MethodInfo *v47; // x2
  Il2CppObject *v48; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  System_Collections_Generic_List_object__o *v59; // x0
  __int64 v60; // x1
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v63; // w28
  RestrictionEntity_o *v64; // x25
  const MethodInfo *v65; // x4
  Il2CppObject *v66; // x24
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  System_Collections_Generic_List_object__o *v77; // x0
  const MethodInfo *v78; // x2
  Il2CppObject *v79; // x24
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  System_Collections_Generic_List_object__o *v90; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v92; // w8
  unsigned int v93; // w28
  RestrictionWholeEntity_o *v94; // x25
  QuestRestrictionInfo_o *v95; // x3
  const MethodInfo *v96; // x4
  Il2CppObject *v97; // x24
  int32_t v98; // w2
  int32_t v99; // w3
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  __int64 v107; // x8
  System_Collections_Generic_List_object__o *v108; // x0
  _BOOL8 v109; // x0
  Il2CppObject *current; // x24
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v114; // x1
  UnityEngine_GameObject_o *v115; // x24
  _BOOL8 v116; // x0
  Il2CppObject *v117; // x22
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
  __int64 v133; // x1
  __int64 v134; // x2
  System_Action_o *v135; // x20
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F85C8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, partyItem);
    sub_1B640C8(&BalanceConfig_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&Method_RestrictionNotSatisfyDialog_EndOpen__, v21);
    sub_1B640C8(&StringLiteral_11025/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v22);
    sub_1B640C8(&StringLiteral_11028/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v23);
    sub_1B640C8(&StringLiteral_10247/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v24);
    byte_49F85C8 = 1;
  }
  memset(&v137, 0, sizeof(v137));
  this->fields.closeFunc = func;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    (int32_t)func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11025/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0LL);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11028/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
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
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v35 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v34);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_147;
      items = v32->fields._items;
      v39 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v32->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v32->fields._size;
      if ( (unsigned int)size < items->max_length )
      {
        v41 = &items->obj.klass + size;
        v32->fields._size = size + 1;
LABEL_20:
        v41[4] = (Il2CppClass *)v35;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v35, v36, v37);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v45 = v39[4];
      v46 = v32;
    }
    else
    {
      if ( !v29 )
        goto LABEL_147;
      v42 = v29->fields._items;
      v43 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !v42 )
        goto LABEL_147;
      v44 = v29->fields._size;
      if ( (unsigned int)v44 < v42->max_length )
      {
        v41 = &v42->obj.klass + v44;
        v29->fields._size = v44 + 1;
        goto LABEL_20;
      }
      v45 = v43[4];
      v46 = v29;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v46,
      v35,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45 + 192) + 112LL));
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
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v48 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v47);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v29 )
      goto LABEL_147;
    v55 = v29->fields._items;
    v56 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v29->fields._version;
    if ( !v55 )
      goto LABEL_147;
    v57 = v29->fields._size;
    if ( (unsigned int)v57 < v55->max_length )
    {
      v54 = &v55->obj.klass + v57;
      v29->fields._size = v57 + 1;
      goto LABEL_37;
    }
    v58 = v56[4];
    v59 = v29;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v59,
      v48,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v32 )
    goto LABEL_147;
  v51 = v32->fields._items;
  v52 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v32->fields._version;
  if ( !v51 )
    goto LABEL_147;
  v53 = v32->fields._size;
  if ( (unsigned int)v53 >= v51->max_length )
  {
    v58 = v52[4];
    v59 = v32;
    goto LABEL_40;
  }
  v54 = &v51->obj.klass + v53;
  v32->fields._size = v53 + 1;
LABEL_37:
  v54[4] = (Il2CppClass *)v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v48, v49, v50);
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
      v63 = 0;
      while ( 1 )
      {
        if ( v63 >= max_length )
          goto LABEL_152;
        v64 = restrictionEntityList->m_Items[v63];
        if ( !v64 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v64->fields.name, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v63 >= max_length )
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
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v66 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_32085556(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v64,
                                    partyItem,
                                    questRestrictionInfo,
                                    v65);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_147;
        v69 = v32->fields._items;
        v70 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v32->fields._version;
        if ( !v69 )
          goto LABEL_147;
        v71 = v32->fields._size;
        if ( (unsigned int)v71 < v69->max_length )
        {
          v72 = &v69->obj.klass + v71;
          v32->fields._size = v71 + 1;
LABEL_60:
          v72[4] = (Il2CppClass *)v66;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v66, v67, v68);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v76 = v70[4];
        v77 = v32;
      }
      else
      {
        if ( !v29 )
          goto LABEL_147;
        v73 = v29->fields._items;
        v74 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v29->fields._version;
        if ( !v73 )
          goto LABEL_147;
        v75 = v29->fields._size;
        if ( (unsigned int)v75 < v73->max_length )
        {
          v72 = &v73->obj.klass + v75;
          v29->fields._size = v75 + 1;
          goto LABEL_60;
        }
        v76 = v74[4];
        v77 = v29;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v77,
        v66,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v76 + 192) + 112LL));
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
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v79 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v78);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_147;
      v82 = v32->fields._items;
      v83 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v32->fields._version;
      if ( !v82 )
        goto LABEL_147;
      v84 = v32->fields._size;
      if ( (unsigned int)v84 < v82->max_length )
      {
        v85 = &v82->obj.klass + v84;
        v32->fields._size = v84 + 1;
LABEL_79:
        v85[4] = (Il2CppClass *)v79;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v79, v80, v81);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v89 = v83[4];
      v90 = v32;
    }
    else
    {
      if ( !v29 )
        goto LABEL_147;
      v86 = v29->fields._items;
      v87 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !v86 )
        goto LABEL_147;
      v88 = v29->fields._size;
      if ( (unsigned int)v88 < v86->max_length )
      {
        v85 = &v86->obj.klass + v88;
        v29->fields._size = v88 + 1;
        goto LABEL_79;
      }
      v89 = v87[4];
      v90 = v29;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      v79,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v89 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v92 = restrictionWholeEntities->max_length;
  if ( v92 >= 1 )
  {
    v93 = 0;
    while ( 1 )
    {
      if ( v93 >= v92 )
LABEL_152:
        sub_1B6432C(Object, v60);
      v94 = restrictionWholeEntities->m_Items[v93];
      if ( !v94 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v94->fields.summary, 0LL);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v92 = restrictionWholeEntities->max_length;
      if ( (int)++v93 >= v92 )
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
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v97 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v94,
                                  partyItem,
                                  v95,
                                  v96);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_147;
      v100 = v32->fields._items;
      v101 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v32->fields._version;
      if ( !v100 )
        goto LABEL_147;
      v102 = v32->fields._size;
      if ( (unsigned int)v102 < v100->max_length )
      {
        v103 = &v100->obj.klass + v102;
        v32->fields._size = v102 + 1;
LABEL_101:
        v103[4] = (Il2CppClass *)v97;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 4), (int32_t)v97, v98, v99);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v107 = v101[4];
      v108 = v32;
    }
    else
    {
      if ( !v29 )
        goto LABEL_147;
      v104 = v29->fields._items;
      v105 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v29->fields._version;
      if ( !v104 )
        goto LABEL_147;
      v106 = v29->fields._size;
      if ( (unsigned int)v106 < v104->max_length )
      {
        v103 = &v104->obj.klass + v106;
        v29->fields._size = v106 + 1;
        goto LABEL_101;
      }
      v107 = v105[4];
      v108 = v29;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v108,
      v97,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v107 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v32 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    v32,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v137 = v136;
  while ( 1 )
  {
    v109 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v137,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v109 )
      break;
    current = v137.fields._current;
    if ( !v137.fields._current )
      sub_1B64324(v109);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v137.fields._current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1B64324(0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !byte_49F7116 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v114);
      byte_49F7116 = 1;
    }
    GameObjectExtensions__SetLocalScale(v115, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v137,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v29 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    v29,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v137 = v136;
  while ( 1 )
  {
    v116 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v137,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v116 )
      break;
    v117 = v137.fields._current;
    if ( !v137.fields._current )
      sub_1B64324(v116);
    v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v137.fields._current, 0LL);
    v119 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v119 )
      sub_1B64324(0LL);
    v120 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v119, 0LL);
    GameObjectExtensions__SetParent(v118, v120, 0LL);
    v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v117, 0LL);
    if ( !byte_49F7116 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v121);
      byte_49F7116 = 1;
    }
    GameObjectExtensions__SetLocalScale(v122, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v137,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
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
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10247/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v132 )
    {
      UILabel__set_text(v132, Object, 0LL);
      goto LABEL_146;
    }
LABEL_147:
    sub_1B64324(Object);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v135 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v133, v134);
  System_Action___ctor(v135, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v135, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_49F85CC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F85CC = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A6DCC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A6D8C;
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}