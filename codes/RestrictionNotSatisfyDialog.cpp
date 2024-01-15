void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FC83D & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC83D = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FC839 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_RestrictionNotSatisfyDialog_EndClose__, v6);
    byte_40FC839 = 1;
  }
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FC83A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC83A = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndOpen(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall RestrictionNotSatisfyDialog__Init(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC837 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FC837 = 1;
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v5 = this->fields.buttonCloseLabel;
    if ( !v5 )
      goto LABEL_11;
    UILabel__set_text(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_11:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__OnClickClose(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RestrictionNotSatisfyDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_40FC83B & 1) == 0 )
  {
    sub_B16FFC(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method);
    byte_40FC83B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
  System_String_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  System_String_o *v40; // x0
  UnityEngine_GameObject_o *Object; // x0
  RestrictionNotSatisfyWholeInfo_o *Component_srcLineSprite; // x0
  const MethodInfo *v43; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  RestrictionNotSatisfyWholeInfo_o *v47; // x0
  const MethodInfo *v48; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x0
  _BOOL8 IsUseOldMaster; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  struct RestrictionEntity_array *restrictionEntityList; // x27
  int max_length; // w8
  unsigned int v56; // w28
  RestrictionEntity_o *v57; // x24
  UnityEngine_GameObject_o *v58; // x0
  RestrictionNotSatisfyWholeInfo_o *v59; // x0
  const MethodInfo *v60; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x25
  const MethodInfo_2F25CD8 *v62; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  RestrictionNotSatisfyWholeInfo_o *v65; // x0
  const MethodInfo *v66; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x27
  int v70; // w8
  unsigned int v71; // w28
  RestrictionWholeEntity_o *v72; // x24
  UnityEngine_GameObject_o *v73; // x0
  RestrictionNotSatisfyWholeInfo_o *v74; // x0
  QuestRestrictionInfo_o *v75; // x3
  const MethodInfo *v76; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x25
  const MethodInfo_2F25CD8 *v78; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x0
  Il2CppObject *current; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v84; // x23
  Il2CppObject *v85; // x22
  UnityEngine_GameObject_o *v86; // x23
  UnityEngine_Component_o *v87; // x0
  UnityEngine_Component_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x22
  int v90; // w22
  UIScrollView_o *wholeRestrictionScrollView; // x0
  struct UIScrollView_o *v92; // x8
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_Behaviour_o *v95; // x0
  int32_t i; // w22
  UnityEngine_Component_o *slotGrid; // x0
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  srcLineSprite_o *v101; // x0
  RestrictionNotSatisfySlot_o *v102; // x24
  PartyOrganizationListViewItem_o *Member; // x0
  const MethodInfo *v104; // x4
  BalanceConfig_c *v105; // x0
  int32_t v106; // w23
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v108; // x20
  System_String_o *v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  System_Action_o *v114; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v116; // [xsp+8h] [xbp-98h] BYREF
  int v117[2]; // [xsp+20h] [xbp-80h]
  int v118; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v119; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC838 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, partyItem);
    sub_B16FFC(&BalanceConfig_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&Method_RestrictionNotSatisfyDialog_EndOpen__, v24);
    sub_B16FFC(&StringLiteral_11062/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v25);
    sub_B16FFC(&StringLiteral_11065/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v26);
    sub_B16FFC(&StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v27);
    byte_40FC838 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  v118 = 0;
  this->fields.closeFunc = func;
  sub_B16F98(
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
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11062/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_107;
  UILabel__set_text(titleLabel, v29, 0LL);
  v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                                                                   v30,
                                                                                                   v31,
                                                                                                   v32,
                                                                                                   v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v115,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11065/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
  if ( !wholeRestrictionLabel )
    goto LABEL_107;
  UILabel__set_text(wholeRestrictionLabel, v40, 0LL);
  if ( !questRestrictionInfo )
    goto LABEL_107;
  if ( questRestrictionInfo->fields.isFatigure )
  {
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.restrictionNotSatisfyWholeInfoPrefab,
               0LL,
               0LL,
               0LL);
    if ( !Object )
      goto LABEL_107;
    Component_srcLineSprite = (RestrictionNotSatisfyWholeInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    Object,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Component_srcLineSprite )
      goto LABEL_107;
    v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
    if ( RestrictionNotSatisfyWholeInfo__InitFatigue(Component_srcLineSprite, partyItem, v43) )
    {
      if ( !v38 )
        goto LABEL_107;
      v45 = v38;
    }
    else
    {
      v45 = v115;
      if ( !v115 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v45,
      v44,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    ++this->fields.wholeInfoCount;
  }
  if ( questRestrictionInfo->fields.isNotSingleSupportOnly )
  {
    v46 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            this->fields.restrictionNotSatisfyWholeInfoPrefab,
            0LL,
            0LL,
            0LL);
    if ( !v46 )
      goto LABEL_107;
    v47 = (RestrictionNotSatisfyWholeInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v46,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !v47 )
      goto LABEL_107;
    v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)v47;
    if ( RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(v47, partyItem, v48) )
    {
      if ( !v38 )
        goto LABEL_107;
      v50 = v38;
    }
    else
    {
      v50 = v115;
      if ( !v115 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v50,
      v49,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
    ++this->fields.wholeInfoCount;
  }
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( IsUseOldMaster )
  {
    restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_107;
    max_length = restrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v56 = 0;
      while ( v56 < max_length )
      {
        v57 = restrictionEntityList->m_Items[v56];
        if ( !v57 )
          goto LABEL_107;
        IsUseOldMaster = System_String__IsNullOrEmpty(v57->fields.name, 0LL);
        if ( !IsUseOldMaster )
        {
          v58 = BaseMonoBehaviour__createObject(
                  (BaseMonoBehaviour_o *)this,
                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                  0LL,
                  0LL,
                  0LL);
          if ( !v58 )
            goto LABEL_107;
          v59 = (RestrictionNotSatisfyWholeInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v58,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !v59 )
            goto LABEL_107;
          v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)v59;
          if ( RestrictionNotSatisfyWholeInfo__Init_29679100(v59, v57, partyItem, questRestrictionInfo, v60) )
          {
            if ( !v38 )
              goto LABEL_107;
            v62 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            v63 = v38;
          }
          else
          {
            v63 = v115;
            if ( !v115 )
              goto LABEL_107;
            v62 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v63, v61, v62);
          ++this->fields.wholeInfoCount;
        }
        max_length = restrictionEntityList->max_length;
        if ( (int)++v56 >= max_length )
          goto LABEL_65;
      }
      goto LABEL_112;
    }
  }
  else
  {
    if ( questRestrictionInfo->fields.isUniqueServant )
    {
      v64 = BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)this,
              this->fields.restrictionNotSatisfyWholeInfoPrefab,
              0LL,
              0LL,
              0LL);
      if ( !v64 )
        goto LABEL_107;
      v65 = (RestrictionNotSatisfyWholeInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v64,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !v65 )
        goto LABEL_107;
      v67 = (EventMissionProgressRequest_Argument_ProgressData_o *)v65;
      if ( RestrictionNotSatisfyWholeInfo__InitUniqueServant(v65, partyItem, v66) )
      {
        if ( !v38 )
          goto LABEL_107;
        v68 = v38;
      }
      else
      {
        v68 = v115;
        if ( !v115 )
          goto LABEL_107;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v68,
        v67,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
      ++this->fields.wholeInfoCount;
    }
    restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_107;
    v70 = restrictionWholeEntities->max_length;
    if ( v70 >= 1 )
    {
      v71 = 0;
      while ( v71 < v70 )
      {
        v72 = restrictionWholeEntities->m_Items[v71];
        if ( !v72 )
          goto LABEL_107;
        IsUseOldMaster = System_String__IsNullOrEmpty(v72->fields.summary, 0LL);
        if ( !IsUseOldMaster )
        {
          v73 = BaseMonoBehaviour__createObject(
                  (BaseMonoBehaviour_o *)this,
                  this->fields.restrictionNotSatisfyWholeInfoPrefab,
                  0LL,
                  0LL,
                  0LL);
          if ( !v73 )
            goto LABEL_107;
          v74 = (RestrictionNotSatisfyWholeInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v73,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !v74 )
            goto LABEL_107;
          v77 = (EventMissionProgressRequest_Argument_ProgressData_o *)v74;
          if ( RestrictionNotSatisfyWholeInfo__Init(v74, v72, partyItem, v75, v76) )
          {
            if ( !v38 )
              goto LABEL_107;
            v78 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            v79 = v38;
          }
          else
          {
            v79 = v115;
            if ( !v115 )
              goto LABEL_107;
            v78 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v79, v77, v78);
          ++this->fields.wholeInfoCount;
        }
        v70 = restrictionWholeEntities->max_length;
        if ( (int)++v71 >= v70 )
          goto LABEL_65;
      }
LABEL_112:
      sub_B17100(IsUseOldMaster, v52, v53);
      sub_B170A0();
    }
  }
LABEL_65:
  if ( !v38 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v116,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v119 = v116;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v119,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__) )
  {
    current = v119.fields.current;
    if ( !v119.fields.current )
      sub_B170D4();
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v119.fields.current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_B170D4();
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v84, one, 0LL);
  }
  v117[0] = 593;
  v118 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v119,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  v118 = 0;
  if ( !v115 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v116,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v115,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v119 = v116;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v119,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__) )
  {
    v85 = v119.fields.current;
    if ( !v119.fields.current )
      sub_B170D4();
    v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v119.fields.current, 0LL);
    v87 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v87 )
      sub_B170D4();
    v88 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v87, 0LL);
    GameObjectExtensions__SetParent(v86, v88, 0LL);
    v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v85, 0LL);
    v121 = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v89, v121, 0LL);
  }
  v117[0] = 672;
  v90 = ++v118;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v119,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( v90 && v117[v90 - 1] == 672 )
    v118 = v90 - 1;
  wholeRestrictionScrollView = this->fields.wholeRestrictionScrollView;
  if ( !wholeRestrictionScrollView )
LABEL_107:
    sub_B170D4();
  UIScrollView__UpdatePosition(wholeRestrictionScrollView, 0LL);
  if ( this->fields.wholeInfoCount <= 2 )
  {
    v92 = this->fields.wholeRestrictionScrollView;
    if ( !v92 )
      goto LABEL_107;
    v93 = *(UnityEngine_Component_o **)&v92->fields.showScrollBars;
    if ( !v93 )
      goto LABEL_107;
    v94 = UnityEngine_Component__get_gameObject(v93, 0LL);
    if ( !v94 )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive(v94, 0, 0LL);
    v95 = (UnityEngine_Behaviour_o *)this->fields.wholeRestrictionScrollView;
    if ( !v95 )
      goto LABEL_107;
    UnityEngine_Behaviour__set_enabled(v95, 0, 0LL);
  }
  for ( i = 1; ; ++i )
  {
    v105 = BalanceConfig_TypeInfo;
    v106 = i - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v105 = BalanceConfig_TypeInfo;
    }
    if ( v106 >= v105->static_fields->DeckMemberMax )
      break;
    slotGrid = (UnityEngine_Component_o *)this->fields.slotGrid;
    if ( !slotGrid )
      goto LABEL_107;
    slotPrefab = this->fields.slotPrefab;
    v99 = UnityEngine_Component__get_transform(slotGrid, 0LL);
    v100 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v99, 0LL, 0LL);
    if ( !v100 )
      goto LABEL_107;
    v101 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v100,
             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_107;
    v102 = (RestrictionNotSatisfySlot_o *)v101;
    Member = PartyListViewItem__GetMember(partyItem, v106, 0LL);
    if ( !v102 )
      goto LABEL_107;
    RestrictionNotSatisfySlot__SetItem(v102, i, Member, questRestrictionInfo, v104);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v108 = this->fields.buttonCloseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v108 )
    {
      UILabel__set_text(v108, v109, 0LL);
      goto LABEL_106;
    }
    goto LABEL_107;
  }
LABEL_106:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v114 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v110, v111, v112, v113);
  System_Action___ctor(v114, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v114, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FC83C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC83C = 1;
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
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  RestrictionNotSatisfyDialog_CloseDelegate_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  RestrictionNotSatisfyDialog_CloseDelegate_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
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
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}