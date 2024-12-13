void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B33204 & 1) == 0 )
  {
    sub_1BD3458(&BaseDialog_TypeInfo, method);
    byte_4B33204 = 1;
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

  if ( (byte_4B33200 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_RestrictionNotSatisfyDialog_EndClose__, v3);
    byte_4B33200 = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B33201 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B33201 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
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

  if ( (byte_4B331FE & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&StringLiteral_1/*""*/, v3);
    byte_4B331FE = 1;
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
    sub_1BD36B4(gameObject, v5);
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

  if ( (byte_4B33202 & 1) == 0 )
  {
    sub_1BD3458(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method);
    byte_4B33202 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_object__o *v31; // x22
  System_Collections_Generic_List_object__o *v32; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v34; // x2
  Il2CppObject *v35; // x24
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_object__o *v50; // x0
  const MethodInfo *v51; // x2
  Il2CppObject *v52; // x24
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  System_Collections_Generic_List_object__o *v67; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x26
  int max_length; // w8
  unsigned int v70; // w28
  RestrictionEntity_o *v71; // x25
  const MethodInfo *v72; // x4
  Il2CppObject *v73; // x24
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  System_Collections_Generic_List_object__o *v88; // x0
  const MethodInfo *v89; // x2
  Il2CppObject *v90; // x24
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  System_Collections_Generic_List_object__o *v105; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x26
  int v107; // w8
  unsigned int v108; // w28
  RestrictionWholeEntity_o *v109; // x25
  QuestRestrictionInfo_o *v110; // x3
  const MethodInfo *v111; // x4
  Il2CppObject *v112; // x24
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  System_Collections_Generic_List_object__o *v127; // x0
  _BOOL8 v128; // x0
  __int64 v129; // x1
  Il2CppObject *current; // x24
  __int64 v131; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v135; // x1
  UnityEngine_GameObject_o *v136; // x24
  _BOOL8 v137; // x0
  __int64 v138; // x1
  Il2CppObject *v139; // x22
  __int64 v140; // x1
  UnityEngine_GameObject_o *v141; // x24
  UnityEngine_Component_o *v142; // x0
  UnityEngine_Component_o *v143; // x0
  __int64 v144; // x1
  UnityEngine_GameObject_o *v145; // x22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  BalanceConfig_c *v148; // x0
  int32_t v149; // w23
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v151; // x0
  RestrictionNotSatisfySlot_o *v152; // x24
  const MethodInfo *v153; // x4
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v155; // x20
  System_Action_o *v156; // x20
  System_Collections_Generic_List_Enumerator_object__o v157; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v158; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B331FF & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, partyItem);
    sub_1BD3458(&BalanceConfig_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__, v15);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v16);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v20);
    sub_1BD3458(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v21);
    sub_1BD3458(&LocalizationManager_TypeInfo, v22);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v23);
    sub_1BD3458(&Method_RestrictionNotSatisfyDialog_EndOpen__, v24);
    sub_1BD3458(&StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v25);
    sub_1BD3458(&StringLiteral_11236/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v26);
    sub_1BD3458(&StringLiteral_10444/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v27);
    byte_4B331FF = 1;
  }
  memset(&v158, 0, sizeof(v158));
  this->fields.closeFunc = func;
  sub_1BD33FC(
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_147;
  UILabel__set_text(titleLabel, Object, 0LL);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11236/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
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
                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
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
      v43 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v32->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v32->fields._size;
      if ( (unsigned int)size < items->max_length )
      {
        v45 = &items->obj.klass + size;
        v32->fields._size = size + 1;
LABEL_20:
        v45[4] = (Il2CppClass *)v35;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v35, v36, v37, v38, v39, v40, v41);
LABEL_24:
        ++this->fields.wholeInfoCount;
        goto LABEL_25;
      }
      v49 = v43[4];
      v50 = v32;
    }
    else
    {
      if ( !v31 )
        goto LABEL_147;
      v46 = v31->fields._items;
      v47 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v31->fields._version;
      if ( !v46 )
        goto LABEL_147;
      v48 = v31->fields._size;
      if ( (unsigned int)v48 < v46->max_length )
      {
        v45 = &v46->obj.klass + v48;
        v31->fields._size = v48 + 1;
        goto LABEL_20;
      }
      v49 = v47[4];
      v50 = v31;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v50,
      v35,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v49 + 192) + 112LL));
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
                                (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
  if ( !Object )
    goto LABEL_147;
  v52 = (Il2CppObject *)Object;
  Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                (RestrictionNotSatisfyWholeInfo_o *)Object,
                                partyItem,
                                v51);
  if ( ((unsigned __int8)Object & 1) == 0 )
  {
    if ( !v31 )
      goto LABEL_147;
    v63 = v31->fields._items;
    v64 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
    ++v31->fields._version;
    if ( !v63 )
      goto LABEL_147;
    v65 = v31->fields._size;
    if ( (unsigned int)v65 < v63->max_length )
    {
      v62 = &v63->obj.klass + v65;
      v31->fields._size = v65 + 1;
      goto LABEL_37;
    }
    v66 = v64[4];
    v67 = v31;
LABEL_40:
    System_Collections_Generic_List_object___AddWithResize(
      v67,
      v52,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v66 + 192) + 112LL));
    goto LABEL_41;
  }
  if ( !v32 )
    goto LABEL_147;
  v59 = v32->fields._items;
  v60 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
  ++v32->fields._version;
  if ( !v59 )
    goto LABEL_147;
  v61 = v32->fields._size;
  if ( (unsigned int)v61 >= v59->max_length )
  {
    v66 = v60[4];
    v67 = v32;
    goto LABEL_40;
  }
  v62 = &v59->obj.klass + v61;
  v32->fields._size = v61 + 1;
LABEL_37:
  v62[4] = (Il2CppClass *)v52;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v52, v53, v54, v55, v56, v57, v58);
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
      v70 = 0;
      while ( 1 )
      {
        if ( v70 >= max_length )
          goto LABEL_152;
        v71 = restrictionEntityList->m_Items[v70];
        if ( !v71 )
          goto LABEL_147;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v71->fields.name, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
          break;
LABEL_65:
        max_length = restrictionEntityList->max_length;
        if ( (int)++v70 >= max_length )
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
                                    (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_147;
      v73 = (Il2CppObject *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_33053132(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    v71,
                                    partyItem,
                                    questRestrictionInfo,
                                    v72);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_147;
        v80 = v32->fields._items;
        v81 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v32->fields._version;
        if ( !v80 )
          goto LABEL_147;
        v82 = v32->fields._size;
        if ( (unsigned int)v82 < v80->max_length )
        {
          v83 = &v80->obj.klass + v82;
          v32->fields._size = v82 + 1;
LABEL_60:
          v83[4] = (Il2CppClass *)v73;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)v73, v74, v75, v76, v77, v78, v79);
LABEL_64:
          ++this->fields.wholeInfoCount;
          goto LABEL_65;
        }
        v87 = v81[4];
        v88 = v32;
      }
      else
      {
        if ( !v31 )
          goto LABEL_147;
        v84 = v31->fields._items;
        v85 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
        ++v31->fields._version;
        if ( !v84 )
          goto LABEL_147;
        v86 = v31->fields._size;
        if ( (unsigned int)v86 < v84->max_length )
        {
          v83 = &v84->obj.klass + v86;
          v31->fields._size = v86 + 1;
          goto LABEL_60;
        }
        v87 = v85[4];
        v88 = v31;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v88,
        v73,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v87 + 192) + 112LL));
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
                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v90 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v89);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_147;
      v97 = v32->fields._items;
      v98 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v32->fields._version;
      if ( !v97 )
        goto LABEL_147;
      v99 = v32->fields._size;
      if ( (unsigned int)v99 < v97->max_length )
      {
        v100 = &v97->obj.klass + v99;
        v32->fields._size = v99 + 1;
LABEL_79:
        v100[4] = (Il2CppClass *)v90;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v100 + 4), (int64_t)v90, v91, v92, v93, v94, v95, v96);
LABEL_83:
        ++this->fields.wholeInfoCount;
        goto LABEL_84;
      }
      v104 = v98[4];
      v105 = v32;
    }
    else
    {
      if ( !v31 )
        goto LABEL_147;
      v101 = v31->fields._items;
      v102 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v31->fields._version;
      if ( !v101 )
        goto LABEL_147;
      v103 = v31->fields._size;
      if ( (unsigned int)v103 < v101->max_length )
      {
        v100 = &v101->obj.klass + v103;
        v31->fields._size = v103 + 1;
        goto LABEL_79;
      }
      v104 = v102[4];
      v105 = v31;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v105,
      v90,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v104 + 192) + 112LL));
    goto LABEL_83;
  }
LABEL_84:
  restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_147;
  v107 = restrictionWholeEntities->max_length;
  if ( v107 >= 1 )
  {
    v108 = 0;
    while ( 1 )
    {
      if ( v108 >= v107 )
LABEL_152:
        sub_1BD36BC(Object, v30);
      v109 = restrictionWholeEntities->m_Items[v108];
      if ( !v109 )
        goto LABEL_147;
      Object = (System_String_o *)System_String__IsNullOrEmpty(v109->fields.summary, 0LL);
      if ( ((unsigned __int8)Object & 1) == 0 )
        break;
LABEL_106:
      v107 = restrictionWholeEntities->max_length;
      if ( (int)++v108 >= v107 )
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
                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_147;
    v112 = (Il2CppObject *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  v109,
                                  partyItem,
                                  v110,
                                  v111);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_147;
      v119 = v32->fields._items;
      v120 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v32->fields._version;
      if ( !v119 )
        goto LABEL_147;
      v121 = v32->fields._size;
      if ( (unsigned int)v121 < v119->max_length )
      {
        v122 = &v119->obj.klass + v121;
        v32->fields._size = v121 + 1;
LABEL_101:
        v122[4] = (Il2CppClass *)v112;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v122 + 4), (int64_t)v112, v113, v114, v115, v116, v117, v118);
LABEL_105:
        ++this->fields.wholeInfoCount;
        goto LABEL_106;
      }
      v126 = v120[4];
      v127 = v32;
    }
    else
    {
      if ( !v31 )
        goto LABEL_147;
      v123 = v31->fields._items;
      v124 = Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
      ++v31->fields._version;
      if ( !v123 )
        goto LABEL_147;
      v125 = v31->fields._size;
      if ( (unsigned int)v125 < v123->max_length )
      {
        v122 = &v123->obj.klass + v125;
        v31->fields._size = v125 + 1;
        goto LABEL_101;
      }
      v126 = v124[4];
      v127 = v31;
    }
    System_Collections_Generic_List_object___AddWithResize(
      v127,
      v112,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v126 + 192) + 112LL));
    goto LABEL_105;
  }
LABEL_107:
  if ( !v32 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v157,
    v32,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v158 = v157;
  while ( 1 )
  {
    v128 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v158,
             (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v128 )
      break;
    current = v158.fields._current;
    if ( !v158.fields._current )
      sub_1BD36B4(v128, v129);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v158.fields._current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_1BD36B4(0LL, v131);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v136 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !byte_4B31946 )
    {
      sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v135);
      byte_4B31946 = 1;
    }
    GameObjectExtensions__SetLocalScale(v136, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v158,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( !v31 )
    goto LABEL_147;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v157,
    v31,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v158 = v157;
  while ( 1 )
  {
    v137 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v158,
             (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v137 )
      break;
    v139 = v158.fields._current;
    if ( !v158.fields._current )
      sub_1BD36B4(v137, v138);
    v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v158.fields._current, 0LL);
    v142 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v142 )
      sub_1BD36B4(0LL, v140);
    v143 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v142, 0LL);
    GameObjectExtensions__SetParent(v141, v143, 0LL);
    v145 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v139, 0LL);
    if ( !byte_4B31946 )
    {
      sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v144);
      byte_4B31946 = 1;
    }
    GameObjectExtensions__SetLocalScale(v145, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v158,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
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
    v148 = BalanceConfig_TypeInfo;
    v149 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v148 = BalanceConfig_TypeInfo;
    }
    if ( v149 >= v148->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_147;
    slotPrefab = this->fields.slotPrefab;
    v151 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v151, 0LL, 0LL);
    if ( !Object )
      goto LABEL_147;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_147;
    v152 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v149, 0LL);
    if ( !v152 )
      goto LABEL_147;
    RestrictionNotSatisfySlot__SetItem(v152, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v153);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v155 = this->fields.buttonCloseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10444/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v155 )
    {
      UILabel__set_text(v155, Object, 0LL);
      goto LABEL_146;
    }
LABEL_147:
    sub_1BD36B4(Object, v30);
  }
LABEL_146:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v156 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v156, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v156, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B33203 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B33203 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BD36B4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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
  sub_1BD33FC(
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
  if ( (sub_1BD3518(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BD36D0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BD3580(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A10470;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A10430;
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BD340C(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BD3410(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}