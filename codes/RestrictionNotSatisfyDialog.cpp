void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAF0B & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAF0B = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EAF07 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_RestrictionNotSatisfyDialog_EndClose__, v5, v6, v7);
    byte_42EAF07 = 1;
  }
  this->fields.isButtonEnable = 0;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EAF08 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAF08 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *buttonCloseLabel; // x20
  __int64 v9; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_42EAF05 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EAF05 = 1;
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
    sub_B5D69C(gameObject, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__OnClickClose(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_42EAF09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_RestrictionNotSatisfyDialog_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EAF09 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  UILabel_o *titleLabel; // x22
  System_String_o *Object; // x0
  __int64 v62; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v65; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x24
  const MethodInfo *v67; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v68; // x24
  struct RestrictionEntity_array *restrictionEntityList; // x27
  int max_length; // w8
  unsigned int v71; // w28
  RestrictionEntity_o *v72; // x24
  const MethodInfo *v73; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v74; // x25
  const MethodInfo_3056FC0 *v75; // x2
  const MethodInfo *v76; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x24
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x27
  int v79; // w8
  unsigned int v80; // w28
  RestrictionWholeEntity_o *v81; // x24
  QuestRestrictionInfo_o *v82; // x3
  const MethodInfo *v83; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v84; // x25
  const MethodInfo_3056FC0 *v85; // x2
  _BOOL8 v86; // x0
  __int64 v87; // x1
  Il2CppObject *current; // x23
  __int64 v89; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v93; // x23
  _BOOL8 v94; // x0
  __int64 v95; // x1
  Il2CppObject *v96; // x22
  __int64 v97; // x1
  UnityEngine_GameObject_o *v98; // x23
  UnityEngine_Component_o *v99; // x0
  UnityEngine_Component_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x22
  int v102; // w22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v106; // x0
  RestrictionNotSatisfySlot_o *v107; // x24
  const MethodInfo *v108; // x4
  BalanceConfig_c *v109; // x0
  int32_t v110; // w23
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v112; // x20
  System_Action_o *v113; // x20
  __int64 v114; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v116; // [xsp+8h] [xbp-98h] BYREF
  int v117[2]; // [xsp+20h] [xbp-80h]
  int v118; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v119; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAF06 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)partyItem, (_DWORD)questRestrictionInfo, func);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_RestrictionNotSatisfyDialog_EndOpen__, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_11231/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_11234/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_10483/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v57, v58, v59);
    byte_42EAF06 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  v118 = 0;
  this->fields.closeFunc = func;
  sub_B5D560(
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
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11231/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_107;
  UILabel__set_text(titleLabel, Object, 0LL);
  v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v115,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11234/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
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
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_107;
    v66 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v65);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v63 )
        goto LABEL_107;
      Object = (System_String_o *)v63;
    }
    else
    {
      Object = (System_String_o *)v115;
      if ( !v115 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
      v66,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
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
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_107;
    v68 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v67);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v63 )
        goto LABEL_107;
      Object = (System_String_o *)v63;
    }
    else
    {
      Object = (System_String_o *)v115;
      if ( !v115 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
      v68,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
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
      v71 = 0;
      while ( v71 < max_length )
      {
        v72 = restrictionEntityList->m_Items[v71];
        if ( !v72 )
          goto LABEL_107;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v72->fields.name, 0LL);
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
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !Object )
            goto LABEL_107;
          v74 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
          Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_29517540(
                                        (RestrictionNotSatisfyWholeInfo_o *)Object,
                                        v72,
                                        partyItem,
                                        questRestrictionInfo,
                                        v73);
          if ( ((unsigned __int8)Object & 1) != 0 )
          {
            if ( !v63 )
              goto LABEL_107;
            v75 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            Object = (System_String_o *)v63;
          }
          else
          {
            Object = (System_String_o *)v115;
            if ( !v115 )
              goto LABEL_107;
            v75 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
            v74,
            v75);
          ++this->fields.wholeInfoCount;
        }
        max_length = restrictionEntityList->max_length;
        if ( (int)++v71 >= max_length )
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
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_107;
      v77 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    partyItem,
                                    v76);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v63 )
          goto LABEL_107;
        Object = (System_String_o *)v63;
      }
      else
      {
        Object = (System_String_o *)v115;
        if ( !v115 )
          goto LABEL_107;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
        v77,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
      ++this->fields.wholeInfoCount;
    }
    restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_107;
    v79 = restrictionWholeEntities->max_length;
    if ( v79 >= 1 )
    {
      v80 = 0;
      while ( v80 < v79 )
      {
        v81 = restrictionWholeEntities->m_Items[v80];
        if ( !v81 )
          goto LABEL_107;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v81->fields.summary, 0LL);
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
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !Object )
            goto LABEL_107;
          v84 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
          Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                        (RestrictionNotSatisfyWholeInfo_o *)Object,
                                        v81,
                                        partyItem,
                                        v82,
                                        v83);
          if ( ((unsigned __int8)Object & 1) != 0 )
          {
            if ( !v63 )
              goto LABEL_107;
            v85 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            Object = (System_String_o *)v63;
          }
          else
          {
            Object = (System_String_o *)v115;
            if ( !v115 )
              goto LABEL_107;
            v85 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
            v84,
            v85);
          ++this->fields.wholeInfoCount;
        }
        v79 = restrictionWholeEntities->max_length;
        if ( (int)++v80 >= v79 )
          goto LABEL_65;
      }
LABEL_112:
      v114 = sub_B5D6C8(Object);
      sub_B5D668(v114, 0LL);
    }
  }
LABEL_65:
  if ( !v63 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v116,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v63,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v119 = v116;
  while ( 1 )
  {
    v86 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v119,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v86 )
      break;
    current = v119.fields.current;
    if ( !v119.fields.current )
      sub_B5D69C(v86, v87);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v119.fields.current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_B5D69C(0LL, v89);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v93, one, 0LL);
  }
  v117[0] = 593;
  v118 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v119,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  v118 = 0;
  Object = (System_String_o *)v115;
  if ( !v115 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v116,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v115,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v119 = v116;
  while ( 1 )
  {
    v94 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v119,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v94 )
      break;
    v96 = v119.fields.current;
    if ( !v119.fields.current )
      sub_B5D69C(v94, v95);
    v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v119.fields.current, 0LL);
    v99 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v99 )
      sub_B5D69C(0LL, v97);
    v100 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v99, 0LL);
    GameObjectExtensions__SetParent(v98, v100, 0LL);
    v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v96, 0LL);
    v121 = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v101, v121, 0LL);
  }
  v117[0] = 672;
  v102 = ++v118;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v119,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( v102 && v117[v102 - 1] == 672 )
    v118 = v102 - 1;
  Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
  if ( !Object )
LABEL_107:
    sub_B5D69C(Object, v62);
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
    v109 = BalanceConfig_TypeInfo;
    v110 = i - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v109 = BalanceConfig_TypeInfo;
    }
    if ( v110 >= v109->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_107;
    slotPrefab = this->fields.slotPrefab;
    v106 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v106, 0LL, 0LL);
    if ( !Object )
      goto LABEL_107;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_107;
    v107 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v110, 0LL);
    if ( !v107 )
      goto LABEL_107;
    RestrictionNotSatisfySlot__SetItem(v107, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v108);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v112 = this->fields.buttonCloseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10483/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v112 )
    {
      UILabel__set_text(v112, Object, 0LL);
      goto LABEL_106;
    }
    goto LABEL_107;
  }
LABEL_106:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v113 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v113, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v113, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EAF0A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAF0A = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestrictionNotSatisfyDialog_CloseDelegate___ctor(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__Invoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  RestrictionNotSatisfyDialog_CloseDelegate_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
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
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  RestrictionNotSatisfyDialog_CloseDelegate_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (RestrictionNotSatisfyDialog_CloseDelegate_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
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