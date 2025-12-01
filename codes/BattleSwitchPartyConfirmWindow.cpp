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

  if ( (byte_4CCAC14 & 1) == 0 )
  {
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C713B0(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__);
    sub_1C713B0(&BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
    byte_4CCAC14 = 1;
  }
  v5 = sub_1C715FC(BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = call;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)call, v14, v15, v16, v17, v18, v19);
  v20 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
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

  if ( (byte_4CCAC18 & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_int___);
    byte_4CCAC18 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(closeCallback, -1, (const MethodInfo_3095C68 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C71354(p_closeCallback, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4CCAC19 & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_int___);
    byte_4CCAC19 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(
      closeCallback,
      (int32_t)p_closeCallback[-1].fields._ClosedMessage_k__BackingField,
      (const MethodInfo_3095C68 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C71354(p_closeCallback, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4CCAC13 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__);
    sub_1C713B0(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4CCAC13 = 1;
  }
  ParentPanel = BattleSwitchPartyConfirmWindow__get_ParentPanel(this, (const MethodInfo *)call);
  if ( !ParentPanel )
    sub_1C71608(0, v6);
  UnityEngine_GameObject__SetActive(ParentPanel, 1, 0);
  BattleSwitchPartyConfirmWindow__UpdateSprites(this, v7);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C715FC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
  BattleEntity_o *v43; // x21
  int v44; // w8
  unsigned int v45; // w22
  BattleDeckServantData_o *v46; // x19
  Il2CppObject *DataFromMessagePackString_object; // x19
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  BattleServantData_PreEntryStatus_o *v54; // x19
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int m_CancellationTokenSource; // w8
  BattleSwitchPartyConfirmWindow_o *v62; // x19
  int i; // w22
  int32_t *v64; // x25
  struct UnityEngine_GameObject_o *closeBtnObject; // x27
  UnityEngine_GameObject_c *klass; // x8
  char v67; // w26
  char v68; // w24
  unsigned __int64 v69; // x29
  int v70; // w8
  BattleSwitchPartyConfirmWindow_o *v71; // x21
  struct UnityEngine_GameObject_o *v72; // x8
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  Il2CppObject *current; // x19
  __int64 v86; // x20
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x1
  SkillLvEntity_o *Entity; // x0
  __int64 v91; // x1
  SkillLvEntity_o *v92; // x21
  BattleServantData_o *funcId; // x22
  System_Func_object__bool__o *v94; // x19
  BattleServantData_array *object__51848228; // x0
  __int64 v96; // x1
  __int64 v97; // x8
  BattleServantData_o *v98; // x27
  unsigned __int64 v99; // x28
  Il2CppObject *v100; // x0
  __int64 v101; // x1
  FunctionEntity_o *v102; // x21
  Il2CppClass *v103; // x8
  BuffEntity_o *v104; // x29
  struct System_String_array *svals; // x8
  System_String_o *v106; // x22
  DataVals_o *v107; // x19
  __int64 v108; // x0
  __int64 v109; // x1
  int32_t targetType; // w21
  BattleServantData_array *v111; // x1
  const MethodInfo *v112; // x3
  BattleServantData_array *v113; // x22
  il2cpp_array_size_t v114; // x8
  unsigned __int64 v115; // x20
  BattleServantData_o *v116; // x21
  System_Int32_array *Individualities; // x0
  System_Int32_array *ckSelfIndv; // x25
  System_Int32_array *v119; // x24
  System_Int32_array *CkSelfCountIndividuality; // x3
  System_Int32_array *v121; // x0
  System_Int32_array *ckOpIndv; // x25
  System_Int32_array *v123; // x24
  System_Int32_array *CkOpCountIndividuality; // x3
  int32_t type; // w8
  BattleServantData_PreEntryStatus_o *v126; // x21
  __int64 v127; // x0
  BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x21
  __int64 v129; // x0
  __int64 v130; // x1
  Il2CppObject *v131; // x21
  __int64 v132; // x20
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x0
  SkillLvEntity_o *v136; // x0
  __int64 v137; // x1
  SkillLvEntity_o *v138; // x19
  struct System_Int32_array *v139; // x26
  System_Func_object__bool__o *v140; // x21
  BattleServantData_array *IsContainOnFieldsParameter; // x0
  __int64 v142; // x1
  il2cpp_array_size_t v143; // x8
  unsigned __int64 v144; // x24
  FunctionEntity_o *v145; // x21
  struct System_String_array *v146; // x8
  System_String_o *v147; // x25
  DataVals_o *v148; // x22
  __int64 v149; // x0
  __int64 v150; // x1
  int32_t v151; // w21
  BattleServantData_array *v152; // x1
  const MethodInfo *v153; // x3
  BattleServantData_array *v154; // x21
  int v155; // w8
  int j; // w27
  BattleServantData_o *v157; // x8
  BattleServantData_PreEntryStatus_o *v158; // x25
  __int64 v159; // x0
  UILabel_o *nextPartyNameLabel; // x19
  const MethodInfo *v161; // x1
  struct BattleSelectServantComponent_array *nextPartySvtList; // x8
  __int64 v163; // x19
  int v164; // w9
  BattleSelectServantComponent_o *v165; // x20
  BattleServantData_o *v166; // x21
  bool v167; // w0
  struct BattleDeckServantData_array *v168; // [xsp+8h] [xbp-108h]
  System_Collections_Generic_List_commandAssistData__o *commandAssistDataList; // [xsp+10h] [xbp-100h]
  BattleEntity_o *battle_ent; // [xsp+18h] [xbp-F8h]
  System_String_o *overwriteDisableMessage; // [xsp+20h] [xbp-F0h]
  BattleSwitchPartyConfirmWindow_o *v172; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v173; // [xsp+30h] [xbp-E0h]
  BattleData_o *v174; // [xsp+38h] [xbp-D8h]
  BattleData_o *v175; // [xsp+38h] [xbp-D8h]
  Il2CppObject *Master_object; // [xsp+40h] [xbp-D0h]
  unsigned int v177; // [xsp+48h] [xbp-C8h]
  SkillLvEntity_o *v178; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v179; // [xsp+50h] [xbp-C0h]
  BattleServantData_o *v180; // [xsp+58h] [xbp-B8h]
  BattleServantData_o *v181; // [xsp+58h] [xbp-B8h]
  BattleSwitchPartyConfirmWindow_o *v182; // [xsp+60h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v183; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v184; // [xsp+80h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+A0h] [xbp-70h] BYREF
  int32_t result; // [xsp+ACh] [xbp-64h] BYREF

  v10 = battleData;
  v172 = this;
  if ( (byte_4CCAC15 & 1) == 0 )
  {
    sub_1C713B0(&BattleServantData_TypeInfo);
    sub_1C713B0(&Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
    sub_1C713B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C713B0(&DataVals_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_First_BattleServantData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1C713B0(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C713B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&BattleServantData_PreEntryStatus_TypeInfo);
    sub_1C713B0(&Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__);
    sub_1C713B0(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__);
    sub_1C713B0(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    sub_1C713B0(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__);
    sub_1C713B0(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    sub_1C713B0(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    sub_1C713B0(&StringLiteral_5828/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/);
    sub_1C713B0(&StringLiteral_5829/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/);
    this = v172;
    byte_4CCAC15 = 1;
  }
  result = 0;
  value = 0;
  memset(&v184, 0, sizeof(v184));
  if ( !v10 )
    goto LABEL_167;
  v174 = v10;
  SelectedPartyIndex_k__BackingField = v10->fields._SelectedPartyIndex_k__BackingField;
  this->fields.closeCallback = callback;
  p_closeCallback = &this->fields.closeCallback;
  *((_DWORD *)p_closeCallback - 2) = nextPtIndex;
  sub_1C71354(
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
  overwriteDisableMessage = LocalizationManager__Get((System_String_o *)StringLiteral_5829/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5828/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/, 0);
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
    _9__17_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__17_0,
      v18,
      Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__,
      0);
    static_fields = BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_BattleServantData__int__o *)_9__17_0;
    sub_1C71354(
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
                                                               (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v27 = System_Linq_Enumerable__ToArray_object_(
          v26,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  currentPartyNameLabel = v172->fields.currentPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               SelectedPartyIndex_k__BackingField,
                                               v29);
  if ( !currentPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(currentPartyNameLabel, (System_String_o *)this, 0);
  currentPartySvtList = v172->fields.currentPartySvtList;
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
        sub_1C71610(this);
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
        currentPartySvtList = v172->fields.currentPartySvtList;
        if ( currentPartySvtList )
          continue;
      }
    }
    goto LABEL_167;
  }
  v179 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v179,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this = (BattleSwitchPartyConfirmWindow_o *)v174->fields.battle_info;
  if ( !this )
    goto LABEL_167;
  SelectPartyMyDeck = BattleInfoData__GetSelectPartyMyDeck((BattleInfoData_o *)this, v172->fields.nextPartyIndex, 0);
  battle_ent = v174->fields.battle_ent;
  commandAssistDataList = BattleData__CreateLotteryCommandAssistInfo(v174, SelectPartyMyDeck, 0);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  v173 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v173,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v40 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_FunctionMaster___);
  this = (BattleSwitchPartyConfirmWindow_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !SelectPartyMyDeck || (svts = SelectPartyMyDeck->fields.svts, v42 = v174, v43 = battle_ent, !svts) )
LABEL_167:
    sub_1C71608(this, battleData);
  v44 = svts->max_length;
  v182 = this;
  if ( v44 < 1 )
    goto LABEL_87;
  v45 = 0;
  v168 = svts;
  do
  {
    if ( v45 >= v44 )
      goto LABEL_169;
    v46 = svts->m_Items[v45];
    v180 = (BattleServantData_o *)sub_1C715FC(BattleServantData_TypeInfo);
    BattleServantData___ctor(v180, 0);
    if ( !v43 )
      goto LABEL_167;
    if ( !v46 )
      goto LABEL_167;
    this = (BattleSwitchPartyConfirmWindow_o *)BattleDeckServantData__GetFollowerType(v46, v43->fields.followerType, 0);
    if ( !v180 )
      goto LABEL_167;
    BattleServantData__setServantData(v180, v46, v43, (int32_t)this, 0, commandAssistDataList, 0);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleData__get_MySvtDataStringDict(v42, 0);
    if ( !this )
      goto LABEL_167;
    v177 = v45;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v180->fields.uniqueId,
           &value,
           (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
    {
      DataFromMessagePackString_object = BattleUtility__GetDataFromMessagePackString_object_(
                                           (System_String_o *)value,
                                           (const MethodInfo_313C58C *)Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
      ((void (__fastcall *)(BattleServantData_o *, Il2CppObject *, const MethodInfo *))v180->klass->vtable._17_setSaveData.methodPtr)(
        v180,
        DataFromMessagePackString_object,
        v180->klass->vtable._17_setSaveData.method);
      BattleServantData__SetTransformSaveData(v180, (BattleServantData_SaveData_o *)DataFromMessagePackString_object, 0);
      BattleServantData__loadTransformServant(v180, v42, 0);
      goto LABEL_81;
    }
    v54 = (BattleServantData_PreEntryStatus_o *)sub_1C715FC(BattleServantData_PreEntryStatus_TypeInfo);
    BattleServantData_PreEntryStatus___ctor(v54, 0);
    v180->fields._PreEntryStatusInfo_k__BackingField = v54;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v180->fields._PreEntryStatusInfo_k__BackingField,
      (int32_t)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleServantData__getPassiveSkills(v180, 0);
    if ( !this )
      goto LABEL_167;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v62 = this;
    if ( m_CancellationTokenSource < 1 )
      goto LABEL_81;
    for ( i = 0; i < m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_169;
      v64 = (int32_t *)*((_QWORD *)&v62->fields._closeBtnObject + i);
      if ( !v64 )
        goto LABEL_167;
      battleData = (BattleData_o *)(*(unsigned int (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v64 + 392LL))(
                                     v64,
                                     *(_QWORD *)(*(_QWORD *)v64 + 400LL));
      this = (BattleSwitchPartyConfirmWindow_o *)Master_object;
      if ( !Master_object )
        goto LABEL_167;
      this = (BattleSwitchPartyConfirmWindow_o *)SkillLvMaster__GetEntity(
                                                   (SkillLvMaster_o *)Master_object,
                                                   (int32_t)battleData,
                                                   v64[9],
                                                   0);
      if ( !this )
        goto LABEL_167;
      closeBtnObject = this->fields._closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_167;
      klass = closeBtnObject[1].klass;
      if ( (int)klass < 1 )
      {
        v67 = 0;
        goto LABEL_72;
      }
      v67 = 0;
      v68 = 0;
      v69 = 0;
      do
      {
        if ( v69 >= (unsigned int)klass )
          goto LABEL_169;
        if ( !v40 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                                                     *((_DWORD *)&closeBtnObject[1].monitor + v69),
                                                     (const MethodInfo_3408E80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v70 = (int)this->fields.m_CancellationTokenSource;
        v71 = this;
        if ( v70 != 1 )
          goto LABEL_58;
        this = (BattleSwitchPartyConfirmWindow_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)this->fields._closeBtnObject,
                                                     0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v70 = (int)v71->fields.m_CancellationTokenSource;
LABEL_58:
          v67 |= v70 == 7;
          goto LABEL_64;
        }
        v72 = v71->fields._closeBtnObject;
        if ( !v72 )
          goto LABEL_167;
        if ( !LODWORD(v72[1].klass) )
          goto LABEL_169;
        this = v182;
        if ( !v182 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v182,
                                                     (int32_t)v72[1].monitor,
                                                     (const MethodInfo_3408E80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v68 |= (unsigned int)(HIDWORD(this->fields.m_CachedPtr) - 81) < 2;
LABEL_64:
        LODWORD(klass) = closeBtnObject[1].klass;
        ++v69;
      }
      while ( (__int64)v69 < (int)klass );
      if ( (v68 & 1) != 0 )
      {
        if ( v39 )
        {
          items = v39->fields._items;
          v74 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
          ++v39->fields._version;
          if ( items )
          {
            size = v39->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
              v76 = &items->obj.klass + size;
              v39->fields._size = size + 1;
              v76[4] = (Il2CppClass *)v64;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v76 + 4), (int32_t)v64, v48, v49, v50, v51, v52, v53);
              goto LABEL_72;
            }
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              (Il2CppObject *)v64,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            if ( (v67 & 1) == 0 )
              goto LABEL_80;
LABEL_73:
            if ( v173 )
            {
              v77 = v173->fields._items;
              v78 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
              ++v173->fields._version;
              if ( v77 )
              {
                v79 = v173->fields._size;
                if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v173,
                    (Il2CppObject *)v64,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v80 = &v77->obj.klass + v79;
                  v173->fields._size = v79 + 1;
                  v80[4] = (Il2CppClass *)v64;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v80 + 4), (int32_t)v64, v48, v49, v50, v51, v52, v53);
                }
                goto LABEL_80;
              }
            }
          }
        }
        goto LABEL_167;
      }
LABEL_72:
      if ( (v67 & 1) != 0 )
        goto LABEL_73;
LABEL_80:
      m_CancellationTokenSource = (int)v62->fields.m_CancellationTokenSource;
    }
LABEL_81:
    if ( !v179 )
      goto LABEL_167;
    v81 = v179->fields._items;
    svts = v168;
    v82 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v179->fields._version;
    if ( !v81 )
      goto LABEL_167;
    v83 = v179->fields._size;
    v43 = battle_ent;
    if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v179,
        (Il2CppObject *)v180,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &v81->obj.klass + v83;
      v179->fields._size = v83 + 1;
      v84[4] = (Il2CppClass *)v180;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)v180, v48, v49, v50, v51, v52, v53);
    }
    v44 = v168->max_length;
    v42 = v174;
    v45 = v177 + 1;
  }
  while ( (int)(v177 + 1) < v44 );
LABEL_87:
  if ( !v39 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v183,
    v39,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v184 = v183;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v184,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v184.fields._current;
    v86 = sub_1C715FC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v86, 0);
    if ( !current )
      sub_1C71608(v87, v88);
    v89 = ((unsigned int (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[5].methodPtr)(
            current,
            current->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C71608(0, v89);
    Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v89, HIDWORD(current[2].klass), 0);
    v92 = Entity;
    if ( !Entity )
      sub_1C71608(0, v91);
    if ( !v86 )
      sub_1C71608(Entity, v91);
    funcId = (BattleServantData_o *)Entity->fields.funcId;
    *(_DWORD *)(v86 + 16) = current[1].monitor;
    v94 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v94,
      (Il2CppObject *)v86,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__,
      0);
    object__51848228 = (BattleServantData_array *)System_Linq_Enumerable__First_object__51848228(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v179,
                                                    (System_Func_TSource__bool__o *)v94,
                                                    (const MethodInfo_3172424 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    v178 = v92;
    v175 = (BattleData_o *)v86;
    if ( !funcId )
      sub_1C71608(object__51848228, v96);
    v97 = *(_QWORD *)&funcId->fields.uniqueId;
    if ( (int)v97 >= 1 )
    {
      v98 = (BattleServantData_o *)object__51848228;
      v99 = 0;
      v181 = funcId;
      do
      {
        if ( v99 >= (unsigned int)v97 )
          sub_1C71610(object__51848228);
        if ( !v40 )
          sub_1C71608(object__51848228, v96);
        v100 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                 *((_DWORD *)&funcId->fields.userSvtId.fields.currentCryptoKey + v99),
                 (const MethodInfo_3408E80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v102 = (FunctionEntity_o *)v100;
        if ( !v100 )
          sub_1C71608(0, v101);
        v103 = v100[2].klass;
        if ( !v103 )
          sub_1C71608(v100, v101);
        if ( !LODWORD(v103->_1.namespaze) )
          sub_1C71610(v100);
        if ( !v182 )
          sub_1C71608(0, v101);
        object__51848228 = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v182,
                                                        (int32_t)v103->_1.byval_arg.data,
                                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v104 = (BuffEntity_o *)object__51848228;
        if ( !object__51848228 )
          sub_1C71608(0, v96);
        if ( (unsigned int)(HIDWORD(object__51848228->bounds) - 81) < 2 )
        {
          svals = v178->fields.svals;
          if ( !svals )
            sub_1C71608(object__51848228, v96);
          if ( v99 >= LODWORD(svals->max_length) )
            sub_1C71610(object__51848228);
          v106 = svals->m_Items[v99];
          v107 = (DataVals_o *)sub_1C715FC(DataVals_TypeInfo);
          DataVals___ctor(v107, v106, 0);
          if ( !v107 )
            sub_1C71608(v108, v109);
          DataVals__SetType_41955812(v107, v102, v99, 0);
          object__51848228 = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v107, 0);
          if ( ((unsigned __int8)object__51848228 & 1) == 0 )
          {
            if ( !v179 )
              sub_1C71608(0, v96);
            targetType = v102->fields.targetType;
            v111 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v179,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            object__51848228 = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                 targetType,
                                 v111,
                                 v175->fields.m_CachedPtr,
                                 v112);
            v113 = object__51848228;
            if ( !object__51848228 )
              sub_1C71608(0, v96);
            v114 = object__51848228->max_length;
            if ( (int)v114 >= 1 )
            {
              v115 = 0;
              do
              {
                if ( v115 >= (unsigned int)v114 )
                  sub_1C71610(object__51848228);
                if ( !v98 )
                  sub_1C71608(object__51848228, v96);
                v116 = v113->m_Items[v115];
                Individualities = BattleServantData__getIndividualities(v98, 0, 1, 0, 1, 0);
                ckSelfIndv = v104->fields.ckSelfIndv;
                v119 = Individualities;
                CkSelfCountIndividuality = BuffEntity__GetCkSelfCountIndividuality(v104, 0);
                object__51848228 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                v119,
                                                                ckSelfIndv,
                                                                v104,
                                                                CkSelfCountIndividuality,
                                                                0);
                if ( ((unsigned __int8)object__51848228 & 1) != 0 )
                {
                  if ( !v116 )
                    sub_1C71608(object__51848228, v96);
                  v121 = BattleServantData__getIndividualities(v116, 0, 1, 0, 1, 0);
                  ckOpIndv = v104->fields.ckOpIndv;
                  v123 = v121;
                  CkOpCountIndividuality = BuffEntity__GetCkOpCountIndividuality(v104, 0);
                  object__51848228 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                  v123,
                                                                  ckOpIndv,
                                                                  v104,
                                                                  CkOpCountIndividuality,
                                                                  0);
                  if ( ((unsigned __int8)object__51848228 & 1) != 0 )
                  {
                    type = v104->fields.type;
                    if ( type == 82 )
                    {
                      PreEntryStatusInfo_k__BackingField = v116->fields._PreEntryStatusInfo_k__BackingField;
                      v129 = DataVals__GetValue(v107, 0);
                      if ( !PreEntryStatusInfo_k__BackingField )
                        sub_1C71608(v129, v130);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(PreEntryStatusInfo_k__BackingField, -(int)v129, 0);
                    }
                    else if ( type == 81 )
                    {
                      v126 = v116->fields._PreEntryStatusInfo_k__BackingField;
                      v127 = DataVals__GetValue(v107, 0);
                      if ( !v126 )
                        sub_1C71608(v127, (unsigned int)v127);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(v126, v127, 0);
                    }
                  }
                }
                LODWORD(v114) = v113->max_length;
                ++v115;
              }
              while ( (__int64)v115 < (int)v114 );
            }
          }
        }
        funcId = v181;
        ++v99;
        LODWORD(v97) = v181->fields.uniqueId;
      }
      while ( (__int64)v99 < (int)v97 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v184,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  this = (BattleSwitchPartyConfirmWindow_o *)v173;
  if ( !v173 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v183,
    v173,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v184 = v183;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v184,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    v131 = v184.fields._current;
    v132 = sub_1C715FC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v132, 0);
    if ( !v131 )
      sub_1C71608(v133, v134);
    v135 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v131->klass->vtable[5].methodPtr)(
             v131,
             v131->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C71608(v135, (unsigned int)v135);
    v136 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v135, HIDWORD(v131[2].klass), 0);
    v138 = v136;
    if ( !v136 )
      sub_1C71608(0, v137);
    if ( !v132 )
      sub_1C71608(v136, v137);
    v139 = v136->fields.funcId;
    *(_DWORD *)(v132 + 16) = v131[1].monitor;
    v140 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v140,
      (Il2CppObject *)v132,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__,
      0);
    IsContainOnFieldsParameter = (BattleServantData_array *)System_Linq_Enumerable__First_object__51848228(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v179,
                                                              (System_Func_TSource__bool__o *)v140,
                                                              (const MethodInfo_3172424 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    if ( !v139 )
      sub_1C71608(IsContainOnFieldsParameter, v142);
    v143 = v139->max_length;
    if ( (int)v143 >= 1 )
    {
      v144 = 0;
      do
      {
        if ( v144 >= (unsigned int)v143 )
          sub_1C71610(IsContainOnFieldsParameter);
        if ( !v40 )
          sub_1C71608(IsContainOnFieldsParameter, v142);
        IsContainOnFieldsParameter = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                                                                  v139->m_Items[v144],
                                                                  (const MethodInfo_3408E80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v145 = (FunctionEntity_o *)IsContainOnFieldsParameter;
        if ( !IsContainOnFieldsParameter )
          sub_1C71608(0, v142);
        if ( LODWORD(IsContainOnFieldsParameter->max_length) == 7 )
        {
          v146 = v138->fields.svals;
          if ( !v146 )
            sub_1C71608(IsContainOnFieldsParameter, v142);
          if ( v144 >= LODWORD(v146->max_length) )
            sub_1C71610(IsContainOnFieldsParameter);
          v147 = v146->m_Items[v144];
          v148 = (DataVals_o *)sub_1C715FC(DataVals_TypeInfo);
          DataVals___ctor(v148, v147, 0);
          if ( !v148 )
            sub_1C71608(v149, v150);
          DataVals__SetType_41955812(v148, v145, v144, 0);
          IsContainOnFieldsParameter = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v148, 0);
          if ( ((unsigned __int8)IsContainOnFieldsParameter & 1) == 0 )
          {
            if ( !v179 )
              sub_1C71608(0, v142);
            v151 = v145->fields.targetType;
            v152 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v179,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            IsContainOnFieldsParameter = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                           v151,
                                           v152,
                                           *(_DWORD *)(v132 + 16),
                                           v153);
            v154 = IsContainOnFieldsParameter;
            if ( !IsContainOnFieldsParameter )
              sub_1C71608(0, v142);
            v155 = IsContainOnFieldsParameter->max_length;
            if ( v155 >= 1 )
            {
              for ( j = 0; j < v155; ++j )
              {
                if ( j >= (unsigned int)v155 )
                  sub_1C71610(IsContainOnFieldsParameter);
                v157 = v154->m_Items[j];
                if ( !v157 )
                  sub_1C71608(IsContainOnFieldsParameter, v142);
                v158 = v157->fields._PreEntryStatusInfo_k__BackingField;
                v159 = DataVals__GetValue(v148, 0);
                if ( !v158 )
                  sub_1C71608(v159, (unsigned int)v159);
                BattleServantData_PreEntryStatus__AddGainNp(v158, v159, 0);
                v155 = v154->max_length;
              }
            }
          }
        }
        LODWORD(v143) = v139->max_length;
        ++v144;
      }
      while ( (__int64)v144 < (int)v143 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v184,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  nextPartyNameLabel = v172->fields.nextPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               v172->fields.nextPartyIndex,
                                               v161);
  if ( !nextPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(nextPartyNameLabel, (System_String_o *)this, 0);
  nextPartySvtList = v172->fields.nextPartySvtList;
  if ( !nextPartySvtList )
    goto LABEL_167;
  v163 = 0;
  while ( 1 )
  {
    v164 = nextPartySvtList->max_length;
    if ( (int)v163 >= v164 )
      break;
    if ( (unsigned int)v163 >= v164 )
      goto LABEL_169;
    if ( v179 )
    {
      v165 = nextPartySvtList->m_Items[v163];
      this = (BattleSwitchPartyConfirmWindow_o *)System_Collections_Generic_List_object___get_Item(
                                                   v179,
                                                   v163,
                                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( v165 )
      {
        if ( (int)v163 >= v179->fields._size )
        {
          BattleSelectServantComponent__setNone(v165, 0);
        }
        else
        {
          v166 = (BattleServantData_o *)this;
          BattleSelectServantComponent__setData(v165, (BattleServantData_o *)this, 2, v163, 0, 0);
          if ( !v166 )
            goto LABEL_167;
          v167 = BattleServantData__isAlive(v166, 0, 0);
          BattleSelectServantComponent__setSelectMask(v165, v167, overwriteDisableMessage, result, 0, 0);
        }
        ++v163;
        nextPartySvtList = v172->fields.nextPartySvtList;
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
  Il2CppObject *Object_object__51560868; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CCAC17 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3101/*"BattleAssetUIAtlas"*/);
    byte_4CCAC17 = 1;
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
      Object_object__51560868 = AssetData__GetObject_object__51560868(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3101/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51560868, 0, 0);
      if ( !v10 )
      {
        if ( !Object_object__51560868 )
          sub_1C71608(v10, v11);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51560868,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (GrandQuestFolderBoardItem_c *)Component_object;
        sub_1C71354(p_battleAssetUiAtlas, (int32_t)Component_object, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4CCAC16 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAC16 = 1;
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
          sub_1C71610(v4);
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
      sub_1C71608(v4, v5);
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

  if ( (byte_4CCAC1A & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11166/*"ROMAN_NUMBER_{0}"*/);
    sub_1C713B0(&StringLiteral_5830/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/);
    byte_4CCAC1A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_5830/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/, 0);
  v8 = partyIndex + 1;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v5 = System_String__Format((System_String_o *)StringLiteral_11166/*"ROMAN_NUMBER_{0}"*/, v4, 0);
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

  if ( (byte_4CCAC1B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_BattleServantData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C713B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C713B0(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__);
    sub_1C713B0(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__);
    sub_1C713B0(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
    byte_4CCAC1B = 1;
  }
  v7 = sub_1C715FC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = actorId;
  if ( targetType <= 3 )
  {
    if ( !targetType )
    {
      v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
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
      sub_1C474A0(Method_System_Array_Empty_BattleServantData___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C47444(inited);
    return **(BattleServantData_array ***)(v16 + 184);
  }
  v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
  v12 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__;
LABEL_22:
  v18 = (System_Func_TSource__bool__o *)v11;
  System_Func_object__bool____ctor(v11, (Il2CppObject *)v7, *v12, 0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)svtList,
          v18,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v19,
                                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


UnityEngine_GameObject_o *BattleSwitchPartyConfirmWindow__get_ParentPanel(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C71608(transform, v3);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
}


System_String_o *BattleSwitchPartyConfirmWindow__get_closeBtnPath(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CCAC12 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_4503/*"CloseButton"*/);
    byte_4CCAC12 = 1;
  }
  return (System_String_o *)StringLiteral_4503/*"CloseButton"*/;
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
  if ( !byte_4CC0D09 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C71608(gameObject, v4);
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

  if ( (byte_4CCAC1C & 1) == 0 )
  {
    sub_1C713B0(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    byte_4CCAC1C = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleSwitchPartyConfirmWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields->__9 = (struct BattleSwitchPartyConfirmWindow___c_o *)v1;
  sub_1C71354(
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
    sub_1C71608(this, 0);
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
    sub_1C71608(_4__this, method);
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__6(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.uniqueId != this->fields.actorId;
}