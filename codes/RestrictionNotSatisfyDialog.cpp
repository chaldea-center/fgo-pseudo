void __fastcall RestrictionNotSatisfyDialog___ctor(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418BB5E & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418BB5E = 1;
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418BB5A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_RestrictionNotSatisfyDialog_EndClose__, v3);
    byte_418BB5A = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall RestrictionNotSatisfyDialog__EndClose(RestrictionNotSatisfyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_418BB5B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BB5B = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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

  if ( (byte_418BB58 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418BB58 = 1;
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
    sub_B2C434(gameObject, v5);
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

  if ( (byte_418BB5C & 1) == 0 )
  {
    sub_B2C35C(&Method_RestrictionNotSatisfyDialog_OnClickClose__, method);
    byte_418BB5C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RestrictionNotSatisfyDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_RestrictionNotSatisfyDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_RestrictionNotSatisfyDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  UILabel_o *wholeRestrictionLabel; // x24
  const MethodInfo *v33; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x24
  const MethodInfo *v35; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x24
  struct RestrictionEntity_array *restrictionEntityList; // x27
  int max_length; // w8
  unsigned int v39; // w28
  RestrictionEntity_o *v40; // x24
  const MethodInfo *v41; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x25
  const MethodInfo_2EF4460 *v43; // x2
  const MethodInfo *v44; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x24
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x27
  int v47; // w8
  unsigned int v48; // w28
  RestrictionWholeEntity_o *v49; // x24
  QuestRestrictionInfo_o *v50; // x3
  const MethodInfo *v51; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x25
  const MethodInfo_2EF4460 *v53; // x2
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *current; // x23
  __int64 v57; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *wholeInfoGrid; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v61; // x23
  _BOOL8 v62; // x0
  __int64 v63; // x1
  Il2CppObject *v64; // x22
  __int64 v65; // x1
  UnityEngine_GameObject_o *v66; // x23
  UnityEngine_Component_o *v67; // x0
  UnityEngine_Component_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x22
  int v70; // w22
  struct UIScrollView_o *wholeRestrictionScrollView; // x8
  int32_t i; // w22
  UnityEngine_GameObject_o *slotPrefab; // x24
  UnityEngine_Transform_o *v74; // x0
  RestrictionNotSatisfySlot_o *v75; // x24
  const MethodInfo *v76; // x4
  BalanceConfig_c *v77; // x0
  int32_t v78; // w23
  UnityEngine_Object_o *buttonCloseLabel; // x20
  UILabel_o *v80; // x20
  System_Action_o *v81; // x20
  __int64 v82; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+8h] [xbp-98h] BYREF
  int v85[2]; // [xsp+20h] [xbp-80h]
  int v86; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BB59 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, partyItem);
    sub_B2C35C(&BalanceConfig_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__get_Current__, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__, v20);
    sub_B2C35C(&System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v23);
    sub_B2C35C(&Method_RestrictionNotSatisfyDialog_EndOpen__, v24);
    sub_B2C35C(&StringLiteral_11098/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v25);
    sub_B2C35C(&StringLiteral_11101/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_10377/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v27);
    byte_418BB59 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  v86 = 0;
  this->fields.closeFunc = func;
  sub_B2C2F8(
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
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11098/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_107;
  UILabel__set_text(titleLabel, Object, 0LL);
  v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v83,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo___ctor__);
  this->fields.wholeInfoCount = 0;
  wholeRestrictionLabel = this->fields.wholeRestrictionLabel;
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_11101/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, 0LL);
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
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_107;
    v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitFatigue(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v33);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v31 )
        goto LABEL_107;
      Object = (System_String_o *)v31;
    }
    else
    {
      Object = (System_String_o *)v83;
      if ( !v83 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
      v34,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
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
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
    if ( !Object )
      goto LABEL_107;
    v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
    Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
                                  (RestrictionNotSatisfyWholeInfo_o *)Object,
                                  partyItem,
                                  v35);
    if ( ((unsigned __int8)Object & 1) != 0 )
    {
      if ( !v31 )
        goto LABEL_107;
      Object = (System_String_o *)v31;
    }
    else
    {
      Object = (System_String_o *)v83;
      if ( !v83 )
        goto LABEL_107;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
      v36,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
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
      v39 = 0;
      while ( v39 < max_length )
      {
        v40 = restrictionEntityList->m_Items[v39];
        if ( !v40 )
          goto LABEL_107;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v40->fields.name, 0LL);
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
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !Object )
            goto LABEL_107;
          v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
          Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init_32869092(
                                        (RestrictionNotSatisfyWholeInfo_o *)Object,
                                        v40,
                                        partyItem,
                                        questRestrictionInfo,
                                        v41);
          if ( ((unsigned __int8)Object & 1) != 0 )
          {
            if ( !v31 )
              goto LABEL_107;
            v43 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            Object = (System_String_o *)v31;
          }
          else
          {
            Object = (System_String_o *)v83;
            if ( !v83 )
              goto LABEL_107;
            v43 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
            v42,
            v43);
          ++this->fields.wholeInfoCount;
        }
        max_length = restrictionEntityList->max_length;
        if ( (int)++v39 >= max_length )
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
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
      if ( !Object )
        goto LABEL_107;
      v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
      Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__InitUniqueServant(
                                    (RestrictionNotSatisfyWholeInfo_o *)Object,
                                    partyItem,
                                    v44);
      if ( ((unsigned __int8)Object & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_107;
        Object = (System_String_o *)v31;
      }
      else
      {
        Object = (System_String_o *)v83;
        if ( !v83 )
          goto LABEL_107;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
        v45,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__);
      ++this->fields.wholeInfoCount;
    }
    restrictionWholeEntities = questRestrictionInfo->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_107;
    v47 = restrictionWholeEntities->max_length;
    if ( v47 >= 1 )
    {
      v48 = 0;
      while ( v48 < v47 )
      {
        v49 = restrictionWholeEntities->m_Items[v48];
        if ( !v49 )
          goto LABEL_107;
        Object = (System_String_o *)System_String__IsNullOrEmpty(v49->fields.summary, 0LL);
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
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyWholeInfo___);
          if ( !Object )
            goto LABEL_107;
          v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object;
          Object = (System_String_o *)RestrictionNotSatisfyWholeInfo__Init(
                                        (RestrictionNotSatisfyWholeInfo_o *)Object,
                                        v49,
                                        partyItem,
                                        v50,
                                        v51);
          if ( ((unsigned __int8)Object & 1) != 0 )
          {
            if ( !v31 )
              goto LABEL_107;
            v53 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
            Object = (System_String_o *)v31;
          }
          else
          {
            Object = (System_String_o *)v83;
            if ( !v83 )
              goto LABEL_107;
            v53 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__Add__;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
            v52,
            v53);
          ++this->fields.wholeInfoCount;
        }
        v47 = restrictionWholeEntities->max_length;
        if ( (int)++v48 >= v47 )
          goto LABEL_65;
      }
LABEL_112:
      v82 = sub_B2C460(Object);
      sub_B2C400(v82, 0LL);
    }
  }
LABEL_65:
  if ( !v31 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v84,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v87 = v84;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v87,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v54 )
      break;
    current = v87.fields.current;
    if ( !v87.fields.current )
      sub_B2C434(v54, v55);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v87.fields.current, 0LL);
    wholeInfoGrid = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !wholeInfoGrid )
      sub_B2C434(0LL, v57);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wholeInfoGrid, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v61, one, 0LL);
  }
  v85[0] = 593;
  v86 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v87,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  v86 = 0;
  Object = (System_String_o *)v83;
  if ( !v83 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v84,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v83,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_RestrictionNotSatisfyWholeInfo__GetEnumerator__);
  v87 = v84;
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v87,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__MoveNext__);
    if ( !v62 )
      break;
    v64 = v87.fields.current;
    if ( !v87.fields.current )
      sub_B2C434(v62, v63);
    v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v87.fields.current, 0LL);
    v67 = (UnityEngine_Component_o *)this->fields.wholeInfoGrid;
    if ( !v67 )
      sub_B2C434(0LL, v65);
    v68 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v67, 0LL);
    GameObjectExtensions__SetParent(v66, v68, 0LL);
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v64, 0LL);
    v89 = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v69, v89, 0LL);
  }
  v85[0] = 672;
  v70 = ++v86;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v87,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_RestrictionNotSatisfyWholeInfo__Dispose__);
  if ( v70 && v85[v70 - 1] == 672 )
    v86 = v70 - 1;
  Object = (System_String_o *)this->fields.wholeRestrictionScrollView;
  if ( !Object )
LABEL_107:
    sub_B2C434(Object, v30);
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
    v77 = BalanceConfig_TypeInfo;
    v78 = i - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v77 = BalanceConfig_TypeInfo;
    }
    if ( v78 >= v77->static_fields->DeckMemberMax )
      break;
    Object = (System_String_o *)this->fields.slotGrid;
    if ( !Object )
      goto LABEL_107;
    slotPrefab = this->fields.slotPrefab;
    v74 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
    Object = (System_String_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slotPrefab, v74, 0LL, 0LL);
    if ( !Object )
      goto LABEL_107;
    Object = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlot___);
    if ( !partyItem )
      goto LABEL_107;
    v75 = (RestrictionNotSatisfySlot_o *)Object;
    Object = (System_String_o *)PartyListViewItem__GetMember(partyItem, v78, 0LL);
    if ( !v75 )
      goto LABEL_107;
    RestrictionNotSatisfySlot__SetItem(v75, i, (PartyOrganizationListViewItem_o *)Object, questRestrictionInfo, v76);
  }
  buttonCloseLabel = (UnityEngine_Object_o *)this->fields.buttonCloseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCloseLabel, 0LL, 0LL) )
  {
    v80 = this->fields.buttonCloseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Object = LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( v80 )
    {
      UILabel__set_text(v80, Object, 0LL);
      goto LABEL_106;
    }
    goto LABEL_107;
  }
LABEL_106:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v81 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_RestrictionNotSatisfyDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall RestrictionNotSatisfyDialog__get_closeBtnObject(
        RestrictionNotSatisfyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_418BB5D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BB5D = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall RestrictionNotSatisfyDialog_CloseDelegate__BeginInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall RestrictionNotSatisfyDialog_CloseDelegate__EndInvoke(
        RestrictionNotSatisfyDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  RestrictionNotSatisfyDialog_CloseDelegate_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  RestrictionNotSatisfyDialog_CloseDelegate_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}