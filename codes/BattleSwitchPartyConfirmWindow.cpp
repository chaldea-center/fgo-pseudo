void BattleSwitchPartyConfirmWindow___ctor(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleSwitchPartyConfirmWindow__Awake(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  ;
}


void BattleSwitchPartyConfirmWindow__Close(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleWindowComponent_EndCall_o *v20; // x20

  if ( (byte_4D34252 & 1) == 0 )
  {
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__);
    sub_1C93AD4(&BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
    byte_4D34252 = 1;
  }
  v5 = sub_1C93D20(BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = call;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)call, v14, v15, v16, v17, v18, v19);
  v20 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__,
    0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v20, 0);
}


void BattleSwitchPartyConfirmWindow__OnClickCloseButton(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_closeCallback; // x19
  System_Action_T__o *closeCallback; // t1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D34256 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    byte_4D34256 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(closeCallback, -1, (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C93A78(p_closeCallback, 0, v5, v6, v7, v8, v9, v10);
  }
}


void BattleSwitchPartyConfirmWindow__OnClickConfirmButton(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_closeCallback; // x19
  System_Action_T__o *closeCallback; // t1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D34257 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    byte_4D34257 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(
      closeCallback,
      (int32_t)p_closeCallback[-1].fields._ClosedMessage_k__BackingField,
      (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C93A78(p_closeCallback, 0, v5, v6, v7, v8, v9, v10);
  }
}


void BattleSwitchPartyConfirmWindow__Open(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ParentPanel; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  BattleWindowOuterClickComponent_OuterClickCall_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4D34251 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__);
    sub_1C93AD4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4D34251 = 1;
  }
  ParentPanel = BattleSwitchPartyConfirmWindow__get_ParentPanel(this, (const MethodInfo *)call);
  if ( !ParentPanel )
    sub_1C93D2C(0, v6);
  UnityEngine_GameObject__SetActive(ParentPanel, 1, 0);
  BattleSwitchPartyConfirmWindow__UpdateSprites(this, v7);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C93D20(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__,
    v9);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v8,
    v10);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


void BattleSwitchPartyConfirmWindow__SetSwitchPartyData(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleData_o *battleData,
        int32_t nextPtIndex,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleData_o *v10; // x22
  int32_t SelectedPartyIndex_k__BackingField; // w21
  struct System_Action_int__o **p_closeCallback; // x0
  System_String_o *v13; // x0
  BattleServantData_array *PlayerServantList; // x0
  BattleSwitchPartyConfirmWindow___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__17_0; // x20
  Il2CppObject *v18; // x22
  struct BattleSwitchPartyConfirmWindow___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Object_array *v27; // x19
  UILabel_o *currentPartyNameLabel; // x20
  const MethodInfo *v29; // x1
  struct BattleSelectServantComponent_array *currentPartySvtList; // x8
  __int64 v31; // x28
  int max_length; // w9
  unsigned int v33; // w3
  unsigned int v34; // w9
  BattleSelectServantComponent_o *v35; // x20
  BattleServantData_o *v36; // x21
  bool isAlive; // w0
  DeckData_o *SelectPartyMyDeck; // x19
  System_Collections_Generic_List_object__o *v39; // x28
  Il2CppObject *v40; // x23
  struct BattleDeckServantData_array *svts; // x19
  BattleData_o *v42; // x20
  int v43; // w8
  unsigned int v44; // w22
  BattleDeckServantData_o *v45; // x19
  __int64 v46; // x21
  int32_t FollowerType; // w0
  Il2CppObject *DataFromMessagePackString_object; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  BattleServantData_PreEntryStatus_o *v55; // x19
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int m_CancellationTokenSource; // w8
  BattleSwitchPartyConfirmWindow_o *v63; // x19
  int i; // w22
  int32_t *v65; // x29
  struct UnityEngine_GameObject_o *closeBtnObject; // x27
  UnityEngine_GameObject_c *klass; // x8
  char v68; // w26
  char v69; // w24
  unsigned __int64 v70; // x25
  int v71; // w8
  BattleSwitchPartyConfirmWindow_o *v72; // x21
  struct UnityEngine_GameObject_o *v73; // x8
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  Il2CppObject *current; // x19
  __int64 v87; // x20
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x1
  SkillLvEntity_o *Entity; // x0
  __int64 v92; // x1
  SkillLvEntity_o *v93; // x21
  BattleServantData_o *funcId; // x22
  System_Func_object__bool__o *v95; // x19
  BattleServantData_array *object__52212472; // x0
  __int64 v97; // x1
  __int64 v98; // x8
  BattleServantData_o *v99; // x27
  unsigned __int64 v100; // x28
  Il2CppObject *v101; // x0
  __int64 v102; // x1
  FunctionEntity_o *v103; // x21
  Il2CppClass *v104; // x8
  BuffEntity_o *v105; // x29
  struct System_String_array *svals; // x8
  System_String_o *v107; // x22
  DataVals_o *v108; // x19
  __int64 v109; // x0
  __int64 v110; // x1
  int32_t targetType; // w21
  BattleServantData_array *v112; // x1
  const MethodInfo *v113; // x3
  BattleServantData_array *v114; // x22
  il2cpp_array_size_t v115; // x8
  unsigned __int64 v116; // x20
  BattleServantData_o *v117; // x21
  System_Int32_array *Individualities; // x0
  System_Int32_array *ckSelfIndv; // x25
  System_Int32_array *v120; // x24
  System_Int32_array *CkSelfCountIndividuality; // x3
  System_Int32_array *v122; // x0
  System_Int32_array *ckOpIndv; // x25
  System_Int32_array *v124; // x24
  System_Int32_array *CkOpCountIndividuality; // x3
  int32_t type; // w8
  BattleServantData_PreEntryStatus_o *v127; // x21
  __int64 v128; // x0
  BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x21
  __int64 v130; // x0
  __int64 v131; // x1
  Il2CppObject *v132; // x21
  __int64 v133; // x20
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x0
  SkillLvEntity_o *v137; // x0
  __int64 v138; // x1
  SkillLvEntity_o *v139; // x19
  struct System_Int32_array *v140; // x26
  System_Func_object__bool__o *v141; // x21
  BattleServantData_array *IsContainOnFieldsParameter; // x0
  __int64 v143; // x1
  il2cpp_array_size_t v144; // x8
  unsigned __int64 v145; // x24
  FunctionEntity_o *v146; // x21
  struct System_String_array *v147; // x8
  System_String_o *v148; // x25
  DataVals_o *v149; // x22
  __int64 v150; // x0
  __int64 v151; // x1
  int32_t v152; // w21
  BattleServantData_array *v153; // x1
  const MethodInfo *v154; // x3
  BattleServantData_array *v155; // x21
  int v156; // w8
  int j; // w27
  BattleServantData_o *v158; // x8
  BattleServantData_PreEntryStatus_o *v159; // x25
  __int64 v160; // x0
  UILabel_o *nextPartyNameLabel; // x19
  const MethodInfo *v162; // x1
  struct BattleSelectServantComponent_array *nextPartySvtList; // x8
  __int64 v164; // x19
  int v165; // w9
  BattleSelectServantComponent_o *v166; // x20
  BattleServantData_o *v167; // x21
  bool v168; // w0
  struct BattleDeckServantData_array *v169; // [xsp+8h] [xbp-108h]
  System_Collections_Generic_List_commandAssistData__o *commandAssistDataList; // [xsp+10h] [xbp-100h]
  BattleData_o *v171; // [xsp+18h] [xbp-F8h]
  System_String_o *overwriteDisableMessage; // [xsp+20h] [xbp-F0h]
  BattleSwitchPartyConfirmWindow_o *v173; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v174; // [xsp+30h] [xbp-E0h]
  unsigned int v175; // [xsp+38h] [xbp-D8h]
  __int64 v176; // [xsp+38h] [xbp-D8h]
  Il2CppObject *Master_object; // [xsp+40h] [xbp-D0h]
  BattleEntity_o *battle_ent; // [xsp+48h] [xbp-C8h]
  SkillLvEntity_o *v179; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v180; // [xsp+50h] [xbp-C0h]
  Il2CppObject *v181; // [xsp+58h] [xbp-B8h]
  BattleServantData_o *v182; // [xsp+58h] [xbp-B8h]
  BattleSwitchPartyConfirmWindow_o *v183; // [xsp+60h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v184; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v185; // [xsp+80h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+A0h] [xbp-70h] BYREF
  int32_t result; // [xsp+ACh] [xbp-64h] BYREF

  v10 = battleData;
  v173 = this;
  if ( (byte_4D34253 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantData_TypeInfo);
    sub_1C93AD4(&Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C93AD4(&DataVals_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1C93AD4(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C93AD4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&BattleServantData_PreEntryStatus_TypeInfo);
    sub_1C93AD4(&Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__);
    sub_1C93AD4(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__);
    sub_1C93AD4(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    sub_1C93AD4(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__);
    sub_1C93AD4(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    sub_1C93AD4(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_5862/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/);
    sub_1C93AD4(&StringLiteral_5863/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/);
    this = v173;
    byte_4D34253 = 1;
  }
  result = 0;
  value = 0;
  memset(&v185, 0, sizeof(v185));
  if ( !v10 )
    goto LABEL_167;
  v171 = v10;
  SelectedPartyIndex_k__BackingField = v10->fields._SelectedPartyIndex_k__BackingField;
  this->fields.closeCallback = callback;
  p_closeCallback = &this->fields.closeCallback;
  *((_DWORD *)p_closeCallback - 2) = nextPtIndex;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_closeCallback,
    (int32_t)callback,
    nextPtIndex,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  overwriteDisableMessage = LocalizationManager__Get((System_String_o *)StringLiteral_5863/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5862/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/, 0);
  if ( !System_Int32__TryParse(v13, &result, 0) )
    result = 16;
  PlayerServantList = BattleData__getPlayerServantList(v10, 0);
  v15 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerServantList;
  if ( !BattleSwitchPartyConfirmWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSwitchPartyConfirmWindow___c_TypeInfo);
    v15 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
  }
  _9__17_0 = (System_Func_object__int__o *)v15->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__17_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__17_0,
      v18,
      Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__,
      0);
    static_fields = BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_BattleServantData__int__o *)_9__17_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__17_0,
      (int32_t)_9__17_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__17_0,
                                                               (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v27 = System_Linq_Enumerable__ToArray_object_(
          v26,
          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  currentPartyNameLabel = v173->fields.currentPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               SelectedPartyIndex_k__BackingField,
                                               v29);
  if ( !currentPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(currentPartyNameLabel, (System_String_o *)this, 0);
  currentPartySvtList = v173->fields.currentPartySvtList;
  if ( !currentPartySvtList )
    goto LABEL_167;
  v31 = 4;
  while ( 1 )
  {
    max_length = currentPartySvtList->max_length;
    v33 = v31 - 4;
    if ( (int)v31 - 4 >= max_length )
      break;
    if ( v33 >= max_length )
      goto LABEL_169;
    if ( v27 )
    {
      v34 = v27->max_length;
      if ( v33 >= v34 )
LABEL_169:
        sub_1C93D34(this);
      v35 = (BattleSelectServantComponent_o *)*((_QWORD *)&currentPartySvtList->obj.klass + v31);
      if ( v35 )
      {
        if ( (int)v33 >= (int)v34 )
        {
          BattleSelectServantComponent__setNone(
            *((BattleSelectServantComponent_o **)&currentPartySvtList->obj.klass + v31),
            0);
        }
        else
        {
          v36 = (BattleServantData_o *)*((_QWORD *)&v27->obj.klass + v31);
          BattleSelectServantComponent__setData(
            *((BattleSelectServantComponent_o **)&currentPartySvtList->obj.klass + v31),
            v36,
            1,
            v33,
            0,
            0);
          if ( !v36 )
            goto LABEL_167;
          isAlive = BattleServantData__isAlive(v36, 0, 0);
          BattleSelectServantComponent__setSelectMask(v35, isAlive, overwriteDisableMessage, result, 0, 0);
        }
        ++v31;
        currentPartySvtList = v173->fields.currentPartySvtList;
        if ( currentPartySvtList )
          continue;
      }
    }
    goto LABEL_167;
  }
  v180 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v180,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this = (BattleSwitchPartyConfirmWindow_o *)v171->fields.battle_info;
  if ( !this )
    goto LABEL_167;
  SelectPartyMyDeck = BattleInfoData__GetSelectPartyMyDeck((BattleInfoData_o *)this, v173->fields.nextPartyIndex, 0);
  battle_ent = v171->fields.battle_ent;
  commandAssistDataList = BattleData__CreateLotteryCommandAssistInfo(v171, SelectPartyMyDeck, 0);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  v174 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v174,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v40 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  this = (BattleSwitchPartyConfirmWindow_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !SelectPartyMyDeck || (svts = SelectPartyMyDeck->fields.svts, v42 = v171, !svts) )
LABEL_167:
    sub_1C93D2C(this, battleData);
  v43 = svts->max_length;
  v183 = this;
  if ( v43 < 1 )
    goto LABEL_87;
  v44 = 0;
  v169 = svts;
  do
  {
    if ( v44 >= v43 )
      goto LABEL_169;
    v45 = svts->m_Items[v44];
    v46 = sub_1C93D20(BattleServantData_TypeInfo);
    BattleServantData___ctor((BattleServantData_o *)v46, 0);
    if ( !v46 )
      goto LABEL_167;
    v181 = (Il2CppObject *)v46;
    BattleServantData__SetFieldEnvironmentData((BattleServantData_o *)v46, v42->fields._FieldEnvData_k__BackingField, 0);
    if ( !battle_ent )
      goto LABEL_167;
    if ( !v45 )
      goto LABEL_167;
    FollowerType = BattleDeckServantData__GetFollowerType(v45, battle_ent->fields.followerType, 0);
    BattleServantData__setServantData(
      (BattleServantData_o *)v46,
      v45,
      battle_ent,
      FollowerType,
      0,
      commandAssistDataList,
      0);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleData__get_MySvtDataStringDict(v42, 0);
    if ( !this )
      goto LABEL_167;
    v175 = v44;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           *(_DWORD *)(v46 + 24),
           &value,
           (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
    {
      DataFromMessagePackString_object = BattleUtility__GetDataFromMessagePackString_object_(
                                           (System_String_o *)value,
                                           (const MethodInfo_3195CC4 *)Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
      (*(void (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v46 + 584LL))(
        v46,
        DataFromMessagePackString_object,
        *(_QWORD *)(*(_QWORD *)v46 + 592LL));
      BattleServantData__SetTransformSaveData(
        (BattleServantData_o *)v46,
        (BattleServantData_SaveData_o *)DataFromMessagePackString_object,
        0);
      BattleServantData__loadTransformServant((BattleServantData_o *)v46, v42, 0);
      goto LABEL_81;
    }
    v55 = (BattleServantData_PreEntryStatus_o *)sub_1C93D20(BattleServantData_PreEntryStatus_TypeInfo);
    BattleServantData_PreEntryStatus___ctor(v55, 0);
    *(_QWORD *)(v46 + 1088) = v55;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v46 + 1088), (int32_t)v55, v56, v57, v58, v59, v60, v61);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleServantData__getPassiveSkills((BattleServantData_o *)v46, 0);
    if ( !this )
      goto LABEL_167;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v63 = this;
    if ( m_CancellationTokenSource < 1 )
      goto LABEL_81;
    for ( i = 0; i < m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_169;
      v65 = (int32_t *)*((_QWORD *)&v63->fields._closeBtnObject + i);
      if ( !v65 )
        goto LABEL_167;
      battleData = (BattleData_o *)(*(unsigned int (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v65 + 392LL))(
                                     v65,
                                     *(_QWORD *)(*(_QWORD *)v65 + 400LL));
      this = (BattleSwitchPartyConfirmWindow_o *)Master_object;
      if ( !Master_object )
        goto LABEL_167;
      this = (BattleSwitchPartyConfirmWindow_o *)SkillLvMaster__GetEntity(
                                                   (SkillLvMaster_o *)Master_object,
                                                   (int32_t)battleData,
                                                   v65[9],
                                                   0);
      if ( !this )
        goto LABEL_167;
      closeBtnObject = this->fields._closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_167;
      klass = closeBtnObject[1].klass;
      if ( (int)klass < 1 )
      {
        v68 = 0;
        goto LABEL_72;
      }
      v68 = 0;
      v69 = 0;
      v70 = 0;
      do
      {
        if ( v70 >= (unsigned int)klass )
          goto LABEL_169;
        if ( !v40 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                                                     *((_DWORD *)&closeBtnObject[1].monitor + v70),
                                                     (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v71 = (int)this->fields.m_CancellationTokenSource;
        v72 = this;
        if ( v71 != 1 )
          goto LABEL_58;
        this = (BattleSwitchPartyConfirmWindow_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)this->fields._closeBtnObject,
                                                     0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v71 = (int)v72->fields.m_CancellationTokenSource;
LABEL_58:
          v68 |= v71 == 7;
          goto LABEL_64;
        }
        v73 = v72->fields._closeBtnObject;
        if ( !v73 )
          goto LABEL_167;
        if ( !LODWORD(v73[1].klass) )
          goto LABEL_169;
        this = v183;
        if ( !v183 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v183,
                                                     (int32_t)v73[1].monitor,
                                                     (const MethodInfo_3463274 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v69 |= (unsigned int)(HIDWORD(this->fields.m_CachedPtr) - 81) < 2;
LABEL_64:
        LODWORD(klass) = closeBtnObject[1].klass;
        ++v70;
      }
      while ( (__int64)v70 < (int)klass );
      if ( (v69 & 1) != 0 )
      {
        if ( v39 )
        {
          items = v39->fields._items;
          v75 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
          ++v39->fields._version;
          if ( items )
          {
            size = v39->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
              v77 = &items->obj.klass + size;
              v39->fields._size = size + 1;
              v77[4] = (Il2CppClass *)v65;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v65, v49, v50, v51, v52, v53, v54);
              goto LABEL_72;
            }
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              (Il2CppObject *)v65,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
            if ( (v68 & 1) == 0 )
              goto LABEL_80;
LABEL_73:
            if ( v174 )
            {
              v78 = v174->fields._items;
              v79 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
              ++v174->fields._version;
              if ( v78 )
              {
                v80 = v174->fields._size;
                if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v174,
                    (Il2CppObject *)v65,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                }
                else
                {
                  v81 = &v78->obj.klass + v80;
                  v174->fields._size = v80 + 1;
                  v81[4] = (Il2CppClass *)v65;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v81 + 4), (int32_t)v65, v49, v50, v51, v52, v53, v54);
                }
                goto LABEL_80;
              }
            }
          }
        }
        goto LABEL_167;
      }
LABEL_72:
      if ( (v68 & 1) != 0 )
        goto LABEL_73;
LABEL_80:
      m_CancellationTokenSource = (int)v63->fields.m_CancellationTokenSource;
    }
LABEL_81:
    if ( !v180 )
      goto LABEL_167;
    v82 = v180->fields._items;
    svts = v169;
    v83 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v180->fields._version;
    if ( !v82 )
      goto LABEL_167;
    v84 = v180->fields._size;
    if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v180,
        v181,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &v82->obj.klass + v84;
      v180->fields._size = v84 + 1;
      v85[4] = (Il2CppClass *)v181;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v181, v49, v50, v51, v52, v53, v54);
    }
    v43 = v169->max_length;
    v42 = v171;
    v44 = v175 + 1;
  }
  while ( (int)(v175 + 1) < v43 );
LABEL_87:
  if ( !v39 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v184,
    v39,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v185 = v184;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v185,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v185.fields._current;
    v87 = sub_1C93D20(BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v87, 0);
    if ( !current )
      sub_1C93D2C(v88, v89);
    v90 = ((unsigned int (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[5].methodPtr)(
            current,
            current->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C93D2C(0, v90);
    Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v90, HIDWORD(current[2].klass), 0);
    v93 = Entity;
    if ( !Entity )
      sub_1C93D2C(0, v92);
    if ( !v87 )
      sub_1C93D2C(Entity, v92);
    funcId = (BattleServantData_o *)Entity->fields.funcId;
    *(_DWORD *)(v87 + 16) = current[1].monitor;
    v95 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v95,
      (Il2CppObject *)v87,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__,
      0);
    object__52212472 = (BattleServantData_array *)System_Linq_Enumerable__First_object__52212472(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v180,
                                                    (System_Func_TSource__bool__o *)v95,
                                                    (const MethodInfo_31CB2F8 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    v179 = v93;
    v176 = v87;
    if ( !funcId )
      sub_1C93D2C(object__52212472, v97);
    v98 = *(_QWORD *)&funcId->fields.uniqueId;
    if ( (int)v98 >= 1 )
    {
      v99 = (BattleServantData_o *)object__52212472;
      v100 = 0;
      v182 = funcId;
      do
      {
        if ( v100 >= (unsigned int)v98 )
          sub_1C93D34(object__52212472);
        if ( !v40 )
          sub_1C93D2C(object__52212472, v97);
        v101 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                 *((_DWORD *)&funcId->fields.userSvtId.fields.currentCryptoKey + v100),
                 (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v103 = (FunctionEntity_o *)v101;
        if ( !v101 )
          sub_1C93D2C(0, v102);
        v104 = v101[2].klass;
        if ( !v104 )
          sub_1C93D2C(v101, v102);
        if ( !LODWORD(v104->_1.namespaze) )
          sub_1C93D34(v101);
        if ( !v183 )
          sub_1C93D2C(0, v102);
        object__52212472 = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v183,
                                                        (int32_t)v104->_1.byval_arg.data,
                                                        (const MethodInfo_3463274 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v105 = (BuffEntity_o *)object__52212472;
        if ( !object__52212472 )
          sub_1C93D2C(0, v97);
        if ( (unsigned int)(HIDWORD(object__52212472->bounds) - 81) < 2 )
        {
          svals = v179->fields.svals;
          if ( !svals )
            sub_1C93D2C(object__52212472, v97);
          if ( v100 >= LODWORD(svals->max_length) )
            sub_1C93D34(object__52212472);
          v107 = svals->m_Items[v100];
          v108 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
          DataVals___ctor(v108, v107, 0);
          if ( !v108 )
            sub_1C93D2C(v109, v110);
          DataVals__SetType_42407440(v108, v103, v100, 0);
          object__52212472 = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v108, 0);
          if ( ((unsigned __int8)object__52212472 & 1) == 0 )
          {
            if ( !v180 )
              sub_1C93D2C(0, v97);
            targetType = v103->fields.targetType;
            v112 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v180,
                                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            object__52212472 = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                 targetType,
                                 v112,
                                 *(_DWORD *)(v176 + 16),
                                 v113);
            v114 = object__52212472;
            if ( !object__52212472 )
              sub_1C93D2C(0, v97);
            v115 = object__52212472->max_length;
            if ( (int)v115 >= 1 )
            {
              v116 = 0;
              do
              {
                if ( v116 >= (unsigned int)v115 )
                  sub_1C93D34(object__52212472);
                if ( !v99 )
                  sub_1C93D2C(object__52212472, v97);
                v117 = v114->m_Items[v116];
                Individualities = BattleServantData__getIndividualities(v99, 0, 1, 0, 1, 0);
                ckSelfIndv = v105->fields.ckSelfIndv;
                v120 = Individualities;
                CkSelfCountIndividuality = BuffEntity__GetCkSelfCountIndividuality(v105, 0);
                object__52212472 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                v120,
                                                                ckSelfIndv,
                                                                v105,
                                                                CkSelfCountIndividuality,
                                                                0);
                if ( ((unsigned __int8)object__52212472 & 1) != 0 )
                {
                  if ( !v117 )
                    sub_1C93D2C(object__52212472, v97);
                  v122 = BattleServantData__getIndividualities(v117, 0, 1, 0, 1, 0);
                  ckOpIndv = v105->fields.ckOpIndv;
                  v124 = v122;
                  CkOpCountIndividuality = BuffEntity__GetCkOpCountIndividuality(v105, 0);
                  object__52212472 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                  v124,
                                                                  ckOpIndv,
                                                                  v105,
                                                                  CkOpCountIndividuality,
                                                                  0);
                  if ( ((unsigned __int8)object__52212472 & 1) != 0 )
                  {
                    type = v105->fields.type;
                    if ( type == 82 )
                    {
                      PreEntryStatusInfo_k__BackingField = v117->fields._PreEntryStatusInfo_k__BackingField;
                      v130 = DataVals__GetValue(v108, 0);
                      if ( !PreEntryStatusInfo_k__BackingField )
                        sub_1C93D2C(v130, v131);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(PreEntryStatusInfo_k__BackingField, -(int)v130, 0);
                    }
                    else if ( type == 81 )
                    {
                      v127 = v117->fields._PreEntryStatusInfo_k__BackingField;
                      v128 = DataVals__GetValue(v108, 0);
                      if ( !v127 )
                        sub_1C93D2C(v128, (unsigned int)v128);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(v127, v128, 0);
                    }
                  }
                }
                LODWORD(v115) = v114->max_length;
                ++v116;
              }
              while ( (__int64)v116 < (int)v115 );
            }
          }
        }
        funcId = v182;
        ++v100;
        LODWORD(v98) = v182->fields.uniqueId;
      }
      while ( (__int64)v100 < (int)v98 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v185,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  this = (BattleSwitchPartyConfirmWindow_o *)v174;
  if ( !v174 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v184,
    v174,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v185 = v184;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v185,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    v132 = v185.fields._current;
    v133 = sub_1C93D20(BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v133, 0);
    if ( !v132 )
      sub_1C93D2C(v134, v135);
    v136 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v132->klass->vtable[5].methodPtr)(
             v132,
             v132->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C93D2C(v136, (unsigned int)v136);
    v137 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v136, HIDWORD(v132[2].klass), 0);
    v139 = v137;
    if ( !v137 )
      sub_1C93D2C(0, v138);
    if ( !v133 )
      sub_1C93D2C(v137, v138);
    v140 = v137->fields.funcId;
    *(_DWORD *)(v133 + 16) = v132[1].monitor;
    v141 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v141,
      (Il2CppObject *)v133,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__,
      0);
    IsContainOnFieldsParameter = (BattleServantData_array *)System_Linq_Enumerable__First_object__52212472(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v180,
                                                              (System_Func_TSource__bool__o *)v141,
                                                              (const MethodInfo_31CB2F8 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    if ( !v140 )
      sub_1C93D2C(IsContainOnFieldsParameter, v143);
    v144 = v140->max_length;
    if ( (int)v144 >= 1 )
    {
      v145 = 0;
      do
      {
        if ( v145 >= (unsigned int)v144 )
          sub_1C93D34(IsContainOnFieldsParameter);
        if ( !v40 )
          sub_1C93D2C(IsContainOnFieldsParameter, v143);
        IsContainOnFieldsParameter = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                                                                  v140->m_Items[v145],
                                                                  (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v146 = (FunctionEntity_o *)IsContainOnFieldsParameter;
        if ( !IsContainOnFieldsParameter )
          sub_1C93D2C(0, v143);
        if ( LODWORD(IsContainOnFieldsParameter->max_length) == 7 )
        {
          v147 = v139->fields.svals;
          if ( !v147 )
            sub_1C93D2C(IsContainOnFieldsParameter, v143);
          if ( v145 >= LODWORD(v147->max_length) )
            sub_1C93D34(IsContainOnFieldsParameter);
          v148 = v147->m_Items[v145];
          v149 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
          DataVals___ctor(v149, v148, 0);
          if ( !v149 )
            sub_1C93D2C(v150, v151);
          DataVals__SetType_42407440(v149, v146, v145, 0);
          IsContainOnFieldsParameter = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v149, 0);
          if ( ((unsigned __int8)IsContainOnFieldsParameter & 1) == 0 )
          {
            if ( !v180 )
              sub_1C93D2C(0, v143);
            v152 = v146->fields.targetType;
            v153 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v180,
                                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            IsContainOnFieldsParameter = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                           v152,
                                           v153,
                                           *(_DWORD *)(v133 + 16),
                                           v154);
            v155 = IsContainOnFieldsParameter;
            if ( !IsContainOnFieldsParameter )
              sub_1C93D2C(0, v143);
            v156 = IsContainOnFieldsParameter->max_length;
            if ( v156 >= 1 )
            {
              for ( j = 0; j < v156; ++j )
              {
                if ( j >= (unsigned int)v156 )
                  sub_1C93D34(IsContainOnFieldsParameter);
                v158 = v155->m_Items[j];
                if ( !v158 )
                  sub_1C93D2C(IsContainOnFieldsParameter, v143);
                v159 = v158->fields._PreEntryStatusInfo_k__BackingField;
                v160 = DataVals__GetValue(v149, 0);
                if ( !v159 )
                  sub_1C93D2C(v160, (unsigned int)v160);
                BattleServantData_PreEntryStatus__AddGainNp(v159, v160, 0);
                v156 = v155->max_length;
              }
            }
          }
        }
        LODWORD(v144) = v140->max_length;
        ++v145;
      }
      while ( (__int64)v145 < (int)v144 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v185,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  nextPartyNameLabel = v173->fields.nextPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               v173->fields.nextPartyIndex,
                                               v162);
  if ( !nextPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(nextPartyNameLabel, (System_String_o *)this, 0);
  nextPartySvtList = v173->fields.nextPartySvtList;
  if ( !nextPartySvtList )
    goto LABEL_167;
  v164 = 0;
  while ( 1 )
  {
    v165 = nextPartySvtList->max_length;
    if ( (int)v164 >= v165 )
      break;
    if ( (unsigned int)v164 >= v165 )
      goto LABEL_169;
    if ( v180 )
    {
      v166 = nextPartySvtList->m_Items[v164];
      this = (BattleSwitchPartyConfirmWindow_o *)System_Collections_Generic_List_object___get_Item(
                                                   v180,
                                                   v164,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( v166 )
      {
        if ( (int)v164 >= v180->fields._size )
        {
          BattleSelectServantComponent__setNone(v166, 0);
        }
        else
        {
          v167 = (BattleServantData_o *)this;
          BattleSelectServantComponent__setData(v166, (BattleServantData_o *)this, 2, v164, 0, 0);
          if ( !v167 )
            goto LABEL_167;
          v168 = BattleServantData__isAlive(v167, 0, 0);
          BattleSelectServantComponent__setSelectMask(v166, v168, overwriteDisableMessage, result, 0, 0);
        }
        ++v164;
        nextPartySvtList = v173->fields.nextPartySvtList;
        if ( nextPartySvtList )
          continue;
      }
    }
    goto LABEL_167;
  }
}


void BattleSwitchPartyConfirmWindow__SetupBattleAssetUiAtlas(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_battleAssetUiAtlas; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIAtlas_o *battleAssetUiAtlas; // t1
  BattleDataDefine_c *v6; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51927708; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D34255 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&BattleDataDefine_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3122/*"BattleAssetUIAtlas"*/);
    byte_4D34255 = 1;
  }
  battleAssetUiAtlas = this->fields.battleAssetUiAtlas;
  p_battleAssetUiAtlas = (GrandQuestFolderBoardItem_o *)&this->fields.battleAssetUiAtlas;
  v4 = (UnityEngine_Object_o *)battleAssetUiAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v6 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v6->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( AssetStorage )
    {
      Object_object__51927708 = AssetData__GetObject_object__51927708(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3122/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51927708, 0, 0);
      if ( !v10 )
      {
        if ( !Object_object__51927708 )
          sub_1C93D2C(v10, v11);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51927708,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (GrandQuestFolderBoardItem_c *)Component_object;
        sub_1C93A78(p_battleAssetUiAtlas, (int32_t)Component_object, v13, v14, v15, v16, v17, v18);
      }
    }
  }
}


void BattleSwitchPartyConfirmWindow__UpdateSprites(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISprite_o *v4; // x0
  __int64 v5; // x1
  struct BattleSwitchPartyConfirmWindow_SpriteParam_array *spriteParams; // x21
  int max_length; // w8
  unsigned int v8; // w22
  BattleSwitchPartyConfirmWindow_SpriteParam_o *v9; // x24
  UnityEngine_Object_o *sprite; // x20

  if ( (byte_4D34254 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34254 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.spriteParams, 0) )
  {
    BattleSwitchPartyConfirmWindow__SetupBattleAssetUiAtlas(this, v3);
    spriteParams = this->fields.spriteParams;
    if ( !spriteParams )
      goto LABEL_17;
    max_length = spriteParams->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_1C93D34(v4);
        v9 = spriteParams->m_Items[v8];
        if ( !v9 )
          break;
        sprite = (UnityEngine_Object_o *)v9->fields.sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v4 = (UISprite_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = v9->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_atlas(v4, this->fields.battleAssetUiAtlas, 0);
          v4 = v9->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_spriteName(v4, v9->fields.spriteName, 0);
        }
        max_length = spriteParams->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
LABEL_17:
      sub_1C93D2C(v4, v5);
    }
  }
}


System_String_o *BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
        int32_t partyIndex,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  Il2CppObject *v6; // x0
  int v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D34258 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11246/*"ROMAN_NUMBER_{0}"*/);
    sub_1C93AD4(&StringLiteral_5864/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/);
    byte_4D34258 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_5864/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/, 0);
  v8 = partyIndex + 1;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v5 = System_String__Format((System_String_o *)StringLiteral_11246/*"ROMAN_NUMBER_{0}"*/, v4, 0);
  v6 = (Il2CppObject *)LocalizationManager__Get(v5, 0);
  return System_String__Format(v3, v6, 0);
}


BattleServantData_array *BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
        int32_t targetType,
        BattleServantData_array *svtList,
        int32_t actorId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  long double inited; // q0
  System_Func_object__bool__o *v11; // x0
  intptr_t *v12; // x8
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  System_Func_TSource__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4D34259 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C93AD4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__);
    sub_1C93AD4(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__);
    sub_1C93AD4(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
    byte_4D34259 = 1;
  }
  v7 = sub_1C93D20(BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = actorId;
  if ( targetType <= 3 )
  {
    if ( !targetType )
    {
      v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleServantData__bool__TypeInfo);
      v12 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__;
      goto LABEL_22;
    }
    if ( targetType != 3 )
      goto LABEL_11;
    return svtList;
  }
  if ( targetType == 7 )
    return svtList;
  if ( targetType != 9 && targetType != 14 )
  {
LABEL_11:
    v13 = Method_System_Array_Empty_BattleServantData___;
    v14 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v14 )
    {
      sub_1C69BC4(Method_System_Array_Empty_BattleServantData___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C69B68(inited);
    return **(BattleServantData_array ***)(v16 + 184);
  }
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleServantData__bool__TypeInfo);
  v12 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__;
LABEL_22:
  v18 = (System_Func_TSource__bool__o *)v11;
  System_Func_object__bool____ctor(v11, (Il2CppObject *)v7, *v12, 0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)svtList,
          v18,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v19,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


UnityEngine_GameObject_o *BattleSwitchPartyConfirmWindow__get_ParentPanel(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C93D2C(transform, v3);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
}


System_String_o *BattleSwitchPartyConfirmWindow__get_closeBtnPath(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D34250 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4530/*"CloseButton"*/);
    byte_4D34250 = 1;
  }
  return (System_String_o *)StringLiteral_4530/*"CloseButton"*/;
}


void BattleSwitchPartyConfirmWindow__setInitialPos(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4D2A139 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C93D2C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSwitchPartyConfirmWindow_SpriteParam___ctor(
        BattleSwitchPartyConfirmWindow_SpriteParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSwitchPartyConfirmWindow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3425A & 1) == 0 )
  {
    sub_1C93AD4(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    byte_4D3425A = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleSwitchPartyConfirmWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields->__9 = (struct BattleSwitchPartyConfirmWindow___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSwitchPartyConfirmWindow___c___ctor(BattleSwitchPartyConfirmWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleSwitchPartyConfirmWindow___c___SetSwitchPartyData_b__17_0(
        BattleSwitchPartyConfirmWindow___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.index;
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass16_0___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass16_0___Close_b__0(
        BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  BattleSwitchPartyConfirmWindow_o *_4__this; // x0
  struct BattleWindowComponent_EndCall_o *call; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow__get_ParentPanel(_4__this, method)) == 0 )
  {
    sub_1C93D2C(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  call = this->fields.call;
  if ( call )
    ((void (__fastcall *)(intptr_t, intptr_t))call->fields.invoke_impl)(call->fields.method_code, call->fields.method);
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass17_0___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_0___SetSwitchPartyData_b__3(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass17_1___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_1___SetSwitchPartyData_b__4(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__5(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__6(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.uniqueId != this->fields.actorId;
}