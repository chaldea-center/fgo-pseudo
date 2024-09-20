void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5729C & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5729C = 1;
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
  System_Action_o *v3; // x20

  if ( (byte_4A57298 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RestrictionNotSatisfyDialog_EndClose__);
    byte_4A57298 = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A57299 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57299 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4A57296 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57296 = 1;
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
    sub_1B8880C(gameObject, v4);
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

  if ( (byte_4A5729A & 1) == 0 )
  {
    sub_1B885B0(&Method_RestrictionNotSatisfyDialog_OnClickClose__);
    byte_4A5729A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_Generic_List_object__o *v13; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
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
  int32_t v31; // w3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Collections_Generic_List_object__o *v40; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v43; // w28
  RestrictionEntity_o *v44; // x25
  const MethodInfo *v45; // x4
  Il2CppObject *v46; // x24
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  System_Collections_Generic_List_object__o *v57; // x0
  const MethodInfo *v58; // x2
  Il2CppObject *v59; // x24
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  System_Collections_Generic_List_object__o *v70; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v72; // w8
  unsigned int v73; // w28
  RestrictionWholeEntity_o *v74; // x25
  QuestRestrictionInfo_o *v75; // x3
  const MethodInfo *v76; // x4
  Il2CppObject *v77; // x24
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  System_Collections_Generic_List_object__o *v88; // x0
  _BOOL8 v89; // x0
  __int64 v90; // x1
  Il2CppObject *current; // x24
  __int64 v92; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v96; // x24
  _BOOL8 v97; // x0
  __int64 v98; // x1
  Il2CppObject *v99; // x22
  __int64 v100; // x1
  UnityEngine_GameObject_o *v101; // x24
  UnityEngine_Component_o *v102; // x0
  UnityEngine_Component_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v107; // x0
  int32_t v108; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v110; // x0
  RestrictionNotSatisfySlot_o *v111; // x24
  const MethodInfo *v112; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v114; // x20
  System_Action_o *v115; // x20
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A57297 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_RestrictionNotSatisfyDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_11079/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_11082/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/);
    sub_1B885B0(&StringLiteral_10296/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    byte_4A57297 = 1;
  }
  memset(&v117, 0, sizeof(v117));
  this->fields.closeFunc = func;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    (int32_t)func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11079/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0LL);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11082/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
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
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
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
      if ( (unsigned int)size < items->max_length )
      {
        v22 = &items->obj.klass + size;
        v13->fields._size = size + 1;
LABEL_20:
        v22[4] = (Il2CppClass *)v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
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
      if ( (unsigned int)v25 < v23->max_length )
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
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
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
    if ( (unsigned int)v38 < v36->max_length )
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
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39 + 192) + 112LL));
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
  if ( (unsigned int)v34 >= v32->max_length )
  {
    v39 = v33[4];
    v40 = v13;
    goto LABEL_40;
  }
  v35 = &v32->obj.klass + v34;
  v13->fields._size = v34 + 1;
LABEL_37:
  v35[4] = (Il2CppClass *)v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
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
      v43 = 0;
      while ( 1 )
      {
        if ( v43 >= max_length )
          goto LABEL_152;
        v44 = restrictionEntityList->m_Items[v43];
        if ( !v44 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v44->fields.name, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v43 >= max_length )
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
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v46 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_32349432(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v44,
                                    partyItem,
                                    questRestrictionInfo,
                                    v45);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_147;
        v49 = v13->fields._items;
        v50 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v13->fields._version;
        if ( !v49 )
          goto LABEL_147;
        v51 = v13->fields._size;
        if ( (unsigned int)v51 < v49->max_length )
        {
          v52 = &v49->obj.klass + v51;
          v13->fields._size = v51 + 1;
LABEL_60:
          v52[4] = (Il2CppClass *)v46;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v46, v47, v48);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v56 = v50[4];
        v57 = v13;
      }
      else
      {
        if ( !v12 )
          goto LABEL_147;
        v53 = v12->fields._items;
        v54 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v12->fields._version;
        if ( !v53 )
          goto LABEL_147;
        v55 = v12->fields._size;
        if ( (unsigned int)v55 < v53->max_length )
        {
          v52 = &v53->obj.klass + v55;
          v12->fields._size = v55 + 1;
          goto LABEL_60;
        }
        v56 = v54[4];
        v57 = v12;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        v46,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v56 + 192) + 112LL));
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
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v59 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v58);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_147;
      v62 = v13->fields._items;
      v63 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v13->fields._version;
      if ( !v62 )
        goto LABEL_147;
      v64 = v13->fields._size;
      if ( (unsigned int)v64 < v62->max_length )
      {
        v65 = &v62->obj.klass + v64;
        v13->fields._size = v64 + 1;
LABEL_79:
        v65[4] = (Il2CppClass *)v59;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v69 = v63[4];
      v70 = v13;
    }
    else
    {
      if ( !v12 )
        goto LABEL_147;
      v66 = v12->fields._items;
      v67 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !v66 )
        goto LABEL_147;
      v68 = v12->fields._size;
      if ( (unsigned int)v68 < v66->max_length )
      {
        v65 = &v66->obj.klass + v68;
        v12->fields._size = v68 + 1;
        goto LABEL_79;
      }
      v69 = v67[4];
      v70 = v12;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v70,
      v59,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v69 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v72 = restrictionWholeEntities->max_length;
  if ( v72 >= 1 )
  {
    v73 = 0;
    while ( 1 )
    {
      if ( v73 >= v72 )
LABEL_152:
        sub_1B88814(Object, v11);
      v74 = restrictionWholeEntities->m_Items[v73];
      if ( !v74 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v74->fields.summary, 0LL);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v72 = restrictionWholeEntities->max_length;
      if ( (int)++v73 >= v72 )
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
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v77 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v74,
                                  partyItem,
                                  v75,
                                  v76);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_147;
      v80 = v13->fields._items;
      v81 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v13->fields._version;
      if ( !v80 )
        goto LABEL_147;
      v82 = v13->fields._size;
      if ( (unsigned int)v82 < v80->max_length )
      {
        v83 = &v80->obj.klass + v82;
        v13->fields._size = v82 + 1;
LABEL_101:
        v83[4] = (Il2CppClass *)v77;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v83 + 4), (int32_t)v77, v78, v79);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v87 = v81[4];
      v88 = v13;
    }
    else
    {
      if ( !v12 )
        goto LABEL_147;
      v84 = v12->fields._items;
      v85 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v12->fields._version;
      if ( !v84 )
        goto LABEL_147;
      v86 = v12->fields._size;
      if ( (unsigned int)v86 < v84->max_length )
      {
        v83 = &v84->obj.klass + v86;
        v12->fields._size = v86 + 1;
        goto LABEL_101;
      }
      v87 = v85[4];
      v88 = v12;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v88,
      v77,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v87 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v13 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v116,
    v13,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v117 = v116;
  while ( 1 )
  {
    v89 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v117,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v89 )
      break;
    current = v117.fields._current;
    if ( !v117.fields._current )
      sub_1B8880C(v89, v90);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v117.fields._current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1B8880C(0LL, v92);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !byte_4A55CE6 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v96, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v117,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v12 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v116,
    v12,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v117 = v116;
  while ( 1 )
  {
    v97 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v117,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v97 )
      break;
    v99 = v117.fields._current;
    if ( !v117.fields._current )
      sub_1B8880C(v97, v98);
    v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v117.fields._current, 0LL);
    v102 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v102 )
      sub_1B8880C(0LL, v100);
    v103 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v102, 0LL);
    GameObjectExtensions__SetParent(v101, v103, 0LL);
    v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v99, 0LL);
    if ( !byte_4A55CE6 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v104, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v117,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
    v107 = BalanceConfig_TypeInfo;
    v108 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v107 = BalanceConfig_TypeInfo;
    }
    if ( v108 >= v107->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v110 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v110, 0LL, 0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v111 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v108, 0LL);
    if ( !v111 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v111, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v112);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v114 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v114 )
    {
      UILabel__set_text(v114, Object, 0LL);
      goto LABEL_146;
    }
LABEL_147:
    sub_1B8880C(Object, v11);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v115 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v115, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v115, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5729B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5729B = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C95C0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9580;
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}