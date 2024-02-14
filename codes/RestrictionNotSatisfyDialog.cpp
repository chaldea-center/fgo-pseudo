void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_421870A & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421870A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4218706 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_RestrictionNotSatisfyDialog_EndClose__, v4);
    byte_4218706 = 1;
  }
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4218707 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218707 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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

  if ( (byte_4218704 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4218704 = 1;
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCloseLabel;
    if ( !gameObject )
      goto LABEL_11;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_11:
    sub_B0D97C(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__OnClickClose(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_4218708 & 1) == 0 )
  {
    sub_B0D8A4(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method);
    byte_4218708 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    this->fields.isButtonEnable = 0;
    if ( closeFunc )
      RestrictionNotSatisfyDialog_CloseDelegate__Invoke(closeFunc, 0LL);
  }
}


void __fastcall RestrictionNotSatisfyDialog__Open(
        RestrictionNotSatisfyDialog_o *this,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        RestrictionNotSatisfyDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v36; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x24
  const MethodInfo *v38; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x24
  struct RestrictionEntity_array *restrictionEntityList; // x27
  int max_length; // w8
  unsigned int v42; // w28
  RestrictionEntity_o *v43; // x24
  const MethodInfo *v44; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x25
  const MethodInfo_2FC56E8 *v46; // x2
  const MethodInfo *v47; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x24
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x27
  int v50; // w8
  unsigned int v51; // w28
  RestrictionWholeEntity_o *v52; // x24
  QuestRestrictionInfo_o *v53; // x3
  const MethodInfo *v54; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x25
  const MethodInfo_2FC56E8 *v56; // x2
  _BOOL8 v57; // x0
  Il2CppObject *current; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v62; // x23
  _BOOL8 v63; // x0
  Il2CppObject *v64; // x22
  UnityEngine_GameObject_o *v65; // x23
  UnityEngine_Component_o *v66; // x0
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x22
  int v69; // w22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v73; // x0
  RestrictionNotSatisfySlot_o *v74; // x24
  const MethodInfo *v75; // x4
  BalanceConfig_c *v76; // x0
  int32_t v77; // w23
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  System_Action_o *v82; // x20
  __int64 v83; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+8h] [xbp-98h] BYREF
  int v86[2]; // [xsp+20h] [xbp-80h]
  int v87; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218705 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, partyItem);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__, v15);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v16);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&Method_RestrictionNotSatisfyDialog_EndOpen__, v24);
    sub_B0D8A4(&StringLiteral_11125/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v25);
    sub_B0D8A4(&StringLiteral_11128/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v26);
    sub_B0D8A4(&StringLiteral_10401/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v27);
    byte_4218705 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  v87 = 0;
  this->fields.closeFunc = func;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)func,
    (System_String_array **)questRestrictionInfo,
    (System_String_array **)func,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11125/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_107;
  UILabel__set_text(titleLabel, Object, 0LL);
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11128/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
  if ( !wholeRestrictionLabel )
    goto LABEL_107;
  UILabel__set_text(wholeRestrictionLabel, Object, 0LL);
  if ( !questRestrictionInfo )
    goto LABEL_107;
  if ( questRestrictionInfo->fields.isFatigure )
  {
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0LL,
                                  0LL,
                                  0LL);
    if ( !Object )
      goto LABEL_107;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_107;
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v36);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_107;
      Object = (System_String_o *)v34;
    }
    else
    {
      Object = (System_String_o *)v84;
      if ( !v84 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
      v37,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    ++this->fields.wholeInfoCount;
  }
  if ( questRestrictionInfo->fields.isNotSingleSupportOnly )
  {
    Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                  0LL,
                                  0LL,
                                  0LL);
    if ( !Object )
      goto LABEL_107;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_107;
    v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v38);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_107;
      Object = (System_String_o *)v34;
    }
    else
    {
      Object = (System_String_o *)v84;
      if ( !v84 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
      v39,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    ++this->fields.wholeInfoCount;
  }
  Object = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_107;
    max_length = restrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v42 = 0;
      while ( v42 < max_length )
      {
        v43 = restrictionEntityList->m_Items[v42];
        if ( !v43 )
          goto LABEL_107;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v43->fields.name, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
        {
          Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                        0LL,
                                        0LL,
                                        0LL);
          if ( !Object )
            goto LABEL_107;
          Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)Object,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !Object )
            goto LABEL_107;
          v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
          Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_32097724(
                                        (RestrictionNotSatisfyWholeInfo_o *)Object,
                                        v43,
                                        partyItem,
                                        questRestrictionInfo,
                                        v44);
          if ( ((unsigned __int8)Object & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_107;
            v46 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            Object = (System_String_o *)v34;
          }
          else
          {
            Object = (System_String_o *)v84;
            if ( !v84 )
              goto LABEL_107;
            v46 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
            v45,
            v46);
          ++this->fields.wholeInfoCount;
        }
        max_length = restrictionEntityList->max_length;
        if ( (int)++v42 >= max_length )
          goto LABEL_65;
      }
      goto LABEL_112;
    }
  }
  else
  {
    if ( questRestrictionInfo->fields.isUniqueServant )
    {
      Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                    (BaseMonoBehaviour_o *)this,
                                    this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                    0LL,
                                    0LL,
                                    0LL);
      if ( !Object )
        goto LABEL_107;
      Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)Object,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_107;
      v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    partyItem,
                                    v47);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v34 )
          goto LABEL_107;
        Object = (System_String_o *)v34;
      }
      else
      {
        Object = (System_String_o *)v84;
        if ( !v84 )
          goto LABEL_107;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
        v48,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
      ++this->fields.wholeInfoCount;
    }
    restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_107;
    v50 = restrictionWholeEntities->max_length;
    if ( v50 >= 1 )
    {
      v51 = 0;
      while ( v51 < v50 )
      {
        v52 = restrictionWholeEntities->m_Items[v51];
        if ( !v52 )
          goto LABEL_107;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v52->fields.summary, 0LL);
        if ( ((unsigned __int8)Object & 1) == 0 )
        {
          Object = (System_String_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        this->fields.restrictionNotSatisfyWholeInfoPrefab,
                                        0LL,
                                        0LL,
                                        0LL);
          if ( !Object )
            goto LABEL_107;
          Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)Object,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !Object )
            goto LABEL_107;
          v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
          Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                        (RestrictionNotSatisfyWholeInfo_o *)Object,
                                        v52,
                                        partyItem,
                                        v53,
                                        v54);
          if ( ((unsigned __int8)Object & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_107;
            v56 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            Object = (System_String_o *)v34;
          }
          else
          {
            Object = (System_String_o *)v84;
            if ( !v84 )
              goto LABEL_107;
            v56 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
            v55,
            v56);
          ++this->fields.wholeInfoCount;
        }
        v50 = restrictionWholeEntities->max_length;
        if ( (int)++v51 >= v50 )
          goto LABEL_65;
      }
LABEL_112:
      v83 = sub_B0D9A8(Object);
      sub_B0D948(v83, 0LL);
    }
  }
LABEL_65:
  if ( !v34 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v34,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v88 = v85;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v88,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v57 )
      break;
    current = v88.fields.current;
    if ( !v88.fields.current )
      sub_B0D97C(v57);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v88.fields.current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_B0D97C(0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v62, one, 0LL);
  }
  v86[0] = 593;
  v87 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v88,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  v87 = 0;
  Object = (System_String_o *)v84;
  if ( !v84 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v84,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v88 = v85;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v88,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v63 )
      break;
    v64 = v88.fields.current;
    if ( !v88.fields.current )
      sub_B0D97C(v63);
    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v88.fields.current, 0LL);
    v66 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v66 )
      sub_B0D97C(0LL);
    v67 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v66, 0LL);
    GameObjectExtensions__SetParent(v65, v67, 0LL);
    v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v64, 0LL);
    v90 = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v68, v90, 0LL);
  }
  v86[0] = 672;
  v69 = ++v87;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v88,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( v69 && v86[v69 - 1] == 672 )
    v87 = v69 - 1;
  Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
  if ( !Object )
LABEL_107:
    sub_B0D97C(Object);
  UIScrollView__UpdatePosition((UIScrollView_o *)Object, 0LL);
  if ( this->fields.wholeInfoCount <= 2 )
  {
    wholeRestrictionScrollView = this->fields.wholeRestrictionScrollView;
    if ( !wholeRestrictionScrollView )
      goto LABEL_107;
    Object = *(System_String_o **)&wholeRestrictionScrollView->fields.showScrollBars;
    if ( !Object )
      goto LABEL_107;
    Object = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
    if ( !Object )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 0, 0LL);
    Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
    if ( !Object )
      goto LABEL_107;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Object, 0, 0LL);
  }
  for ( i = 1; ; ++i )
  {
    v76 = BalanceConfig_TypeInfo;
    v77 = i - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v76 = BalanceConfig_TypeInfo;
    }
    if ( v77 >= v76->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_107;
    slotPrefab = this->fields.slotPrefab;
    v73 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v73, 0LL, 0LL);
    if ( !Object )
      goto LABEL_107;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_107;
    v74 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v77, 0LL);
    if ( !v74 )
      goto LABEL_107;
    RestrictionNotSatisfySlot__SetItem(v74, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v75);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v79 = this->fields.buttonCloseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v79 )
    {
      UILabel__set_text(v79, Object, 0LL);
      goto LABEL_106;
    }
    goto LABEL_107;
  }
LABEL_106:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v82 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v80, v81);
  System_Action___ctor(v82, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4218709 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218709 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B0D97C(0LL);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  RestrictionNotSatisfyDialog_CloseDelegate_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  RestrictionNotSatisfyDialog_CloseDelegate_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  RestrictionNotSatisfyDialog_CloseDelegate_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (RestrictionNotSatisfyDialog_CloseDelegate_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}