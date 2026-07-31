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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BattleWindowComponent_EndCall_o *v20; // x20

  if ( (byte_593C14D & 1) == 0 )
  {
    sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    sub_21FFC50(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__);
    sub_21FFC50(&BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
    byte_593C14D = 1;
  }
  v5 = sub_21FFEBC(BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = call;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)call, v14, v15, v16, v17, v18, v19);
  v20 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo);
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
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  if ( (byte_593C151 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int___);
    byte_593C151 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)this->fields.closeCallback,
      -1,
      (const MethodInfo_36CDE6C *)Method_ActionExtensions_Call_int___);
    this->fields.closeCallback = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback, 0, v3, v4, v5, v6, v7, v8);
  }
}


void BattleSwitchPartyConfirmWindow__OnClickConfirmButton(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_closeCallback; // x19
  System_Action_T__o *closeCallback; // t1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593C152 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int___);
    byte_593C152 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(
      closeCallback,
      p_closeCallback[-1].fields._BoardType_k__BackingField,
      (const MethodInfo_36CDE6C *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_21FFBF4(p_closeCallback, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_593C14C & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__);
    sub_21FFC50(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_593C14C = 1;
  }
  ParentPanel = BattleSwitchPartyConfirmWindow__get_ParentPanel(this, (const MethodInfo *)call);
  if ( !ParentPanel )
    sub_21FFECC(0, v6);
  UnityEngine_GameObject__SetActive(ParentPanel, 1, 0);
  BattleSwitchPartyConfirmWindow__UpdateSprites(this, v7);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_21FFEBC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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


// local variable allocation has failed, the output may be wrong!
void BattleSwitchPartyConfirmWindow__SetSwitchPartyData(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleData_o *battleData,
        int32_t nextPtIndex,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleData_o *v10; // x22
  int32_t SelectedPartyIndex_k__BackingField; // w21
  struct System_Action_int__o **p_closeCallback; // x0
  __int64 v13; // x1
  System_String_o *v14; // x0
  BattleServantData_array *PlayerServantList; // x0
  __int64 v16; // x1
  BattleSwitchPartyConfirmWindow___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  struct BattleSwitchPartyConfirmWindow___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__17_0; // x20
  Il2CppObject *v21; // x22
  struct BattleSwitchPartyConfirmWindow___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x19
  UILabel_o *currentPartyNameLabel; // x20
  const MethodInfo *v32; // x1
  struct BattleSelectServantComponent_array *currentPartySvtList; // x8
  BattleData_o *v34; // x22
  unsigned __int64 v35; // x20
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v37; // x9
  Il2CppClass **v38; // x8
  BattleSelectServantComponent_o *v39; // x21
  BattleServantData_o *v40; // x22
  bool isAlive; // w0
  DeckData_o *SelectPartyMyDeck; // x19
  System_Collections_Generic_List_object__o *v43; // x28
  __int64 v44; // x1
  Il2CppObject *v45; // x23
  struct BattleDeckServantData_array *svts; // x9
  int max_length; // w8
  unsigned int v48; // w10
  BattleDeckServantData_o *v49; // x19
  __int64 v50; // x20
  int32_t FollowerType; // w0
  Il2CppObject *DataFromMessagePackString_object; // x19
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  BattleServantData_PreEntryStatus_o *v59; // x19
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int m_CancellationTokenSource; // w8
  BattleSwitchPartyConfirmWindow_o *v67; // x19
  int i; // w22
  int32_t *v69; // x29
  struct UnityEngine_GameObject_o *closeBtnObject; // x27
  UnityEngine_GameObject_c *klass; // x8
  char v72; // w26
  char v73; // w24
  unsigned __int64 v74; // x25
  int v75; // w8
  BattleSwitchPartyConfirmWindow_o *v76; // x21
  struct UnityEngine_GameObject_o *v77; // x8
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  Il2CppObject *current; // x19
  __int64 v91; // x20
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x1
  SkillLvEntity_o *Entity; // x0
  __int64 v96; // x1
  SkillLvEntity_o *v97; // x21
  BattleServantData_o *funcId; // x24
  System_Func_object__bool__o *v99; // x19
  BattleServantData_array *object__59035808; // x0
  __int64 v101; // x1
  __int64 v102; // x8
  BattleServantData_o *v103; // x27
  unsigned __int64 v104; // x28
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  FunctionEntity_o *v107; // x22
  Il2CppClass *v108; // x8
  BuffEntity_o *v109; // x29
  struct System_String_array *svals; // x8
  System_String_o *v111; // x21
  DataVals_o *v112; // x19
  __int64 v113; // x0
  __int64 v114; // x1
  int32_t targetType; // w21
  BattleServantData_array *v116; // x1
  const MethodInfo *v117; // x3
  BattleServantData_array *v118; // x22
  il2cpp_array_size_t v119; // x8
  unsigned __int64 v120; // x20
  BattleServantData_o *v121; // x21
  System_Int32_array *Individualities; // x0
  System_Int32_array *ckSelfIndv; // x25
  System_Int32_array *v124; // x24
  System_Int32_array *CkSelfCountIndividuality; // x0
  System_Int32_array *v126; // x0
  System_Int32_array *ckOpIndv; // x25
  System_Int32_array *v128; // x24
  System_Int32_array *CkOpCountIndividuality; // x0
  int32_t type; // w8
  BattleServantData_PreEntryStatus_o *v131; // x21
  __int64 v132; // x0
  BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x21
  __int64 v134; // x0
  __int64 v135; // x1
  Il2CppObject *v136; // x21
  __int64 v137; // x20
  __int64 v138; // x0
  __int64 v139; // x1
  __int64 v140; // x0
  SkillLvEntity_o *v141; // x0
  __int64 v142; // x1
  SkillLvEntity_o *v143; // x19
  struct System_Int32_array *v144; // x26
  System_Func_object__bool__o *v145; // x21
  BattleServantData_array *IsContainOnFieldsParameter; // x0
  __int64 v147; // x1
  il2cpp_array_size_t v148; // x8
  unsigned __int64 v149; // x24
  FunctionEntity_o *v150; // x21
  struct System_String_array *v151; // x8
  System_String_o *v152; // x25
  DataVals_o *v153; // x22
  __int64 v154; // x0
  __int64 v155; // x1
  int32_t v156; // w21
  BattleServantData_array *v157; // x1
  const MethodInfo *v158; // x3
  BattleServantData_array *v159; // x21
  int v160; // w8
  __int64 v161; // x27
  BattleServantData_o *v162; // x8
  BattleServantData_PreEntryStatus_o *v163; // x25
  __int64 v164; // x0
  UILabel_o *nextPartyNameLabel; // x19
  const MethodInfo *v166; // x1
  struct BattleSelectServantComponent_array *nextPartySvtList; // x8
  signed __int64 v168; // x19
  unsigned __int64 v169; // x9
  BattleSelectServantComponent_o *v170; // x20
  BattleServantData_o *v171; // x21
  bool v172; // w0
  struct BattleDeckServantData_array *v173; // [xsp+8h] [xbp-108h]
  System_Collections_Generic_List_commandAssistData__o *commandAssistDataList; // [xsp+10h] [xbp-100h]
  System_String_o *overwriteDisableMessage; // [xsp+18h] [xbp-F8h]
  BattleData_o *v176; // [xsp+20h] [xbp-F0h]
  BattleSwitchPartyConfirmWindow_o *v177; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v178; // [xsp+30h] [xbp-E0h]
  unsigned int v179; // [xsp+38h] [xbp-D8h]
  __int64 v180; // [xsp+38h] [xbp-D8h]
  Il2CppObject *Master_object; // [xsp+40h] [xbp-D0h]
  BattleEntity_o *battle_ent; // [xsp+48h] [xbp-C8h]
  SkillLvEntity_o *v183; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v184; // [xsp+50h] [xbp-C0h]
  BattleServantData_o *v185; // [xsp+58h] [xbp-B8h]
  BattleSwitchPartyConfirmWindow_o *v186; // [xsp+60h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v187; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v188; // [xsp+80h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+A0h] [xbp-70h] BYREF
  int32_t result; // [xsp+ACh] [xbp-64h] BYREF

  v10 = battleData;
  v177 = this;
  if ( (byte_593C14E & 1) == 0 )
  {
    sub_21FFC50(&BattleServantData_TypeInfo);
    sub_21FFC50(&Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
    sub_21FFC50(&Method_DataManager_GetMaster_BuffMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_21FFC50(&DataVals_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_BattleServantData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_21FFC50(&System_Func_BattleServantData__int__TypeInfo);
    sub_21FFC50(&System_Func_BattleServantData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&BattleServantData_PreEntryStatus_TypeInfo);
    sub_21FFC50(&Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__);
    sub_21FFC50(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__);
    sub_21FFC50(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    sub_21FFC50(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__);
    sub_21FFC50(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    sub_21FFC50(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    sub_21FFC50(&StringLiteral_6056/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/);
    sub_21FFC50(&StringLiteral_6057/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/);
    this = v177;
    byte_593C14E = 1;
  }
  result = 0;
  value = 0;
  memset(&v188, 0, sizeof(v188));
  if ( !v10 )
    goto LABEL_169;
  SelectedPartyIndex_k__BackingField = v10->fields._SelectedPartyIndex_k__BackingField;
  v176 = v10;
  this->fields.closeCallback = callback;
  p_closeCallback = &this->fields.closeCallback;
  *((_DWORD *)p_closeCallback - 2) = nextPtIndex;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_closeCallback,
    (int32_t)callback,
    *(System_String_o **)&nextPtIndex,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  overwriteDisableMessage = LocalizationManager__Get((System_String_o *)StringLiteral_6057/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_6056/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/, 0);
  if ( !System_Int32__TryParse(v14, &result, 0) )
    result = 16;
  PlayerServantList = BattleData__getPlayerServantList(v10, 0);
  v17 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerServantList;
  if ( !*(&BattleSwitchPartyConfirmWindow___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleSwitchPartyConfirmWindow___c_TypeInfo, v16);
    v17 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__17_0 = (System_Func_object__int__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      static_fields = BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__17_0,
      v21,
      Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__,
      0);
    v22 = BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields;
    v22->__9__17_0 = (struct System_Func_BattleServantData__int__o *)_9__17_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__17_0, (int32_t)_9__17_0, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__17_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  currentPartyNameLabel = v177->fields.currentPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               SelectedPartyIndex_k__BackingField,
                                               v32);
  if ( !currentPartyNameLabel )
    goto LABEL_169;
  UILabel__set_text(currentPartyNameLabel, (System_String_o *)this, 0);
  currentPartySvtList = v177->fields.currentPartySvtList;
  v34 = v176;
  if ( !currentPartySvtList )
    goto LABEL_169;
  v35 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(currentPartySvtList->max_length);
    if ( (__int64)v35 >= (int)max_length_low )
      break;
    if ( v35 >= max_length_low )
      goto LABEL_171;
    if ( !v30 )
      goto LABEL_169;
    v37 = LODWORD(v30->max_length);
    if ( v35 >= v37 )
LABEL_171:
      sub_21FFED4(this);
    v38 = &currentPartySvtList->obj.klass + v35;
    v39 = (BattleSelectServantComponent_o *)v38[4];
    if ( (__int64)v35 >= (int)v37 )
    {
      if ( !v39 )
        goto LABEL_169;
      BattleSelectServantComponent__setNone((BattleSelectServantComponent_o *)v38[4], 0);
    }
    else
    {
      if ( !v39 )
        goto LABEL_169;
      v40 = (BattleServantData_o *)v30->m_Items[v35];
      BattleSelectServantComponent__setData((BattleSelectServantComponent_o *)v38[4], v40, 1, v35, 0, 0);
      if ( !v40 )
        goto LABEL_169;
      isAlive = BattleServantData__isAlive(v40, 0, 0);
      BattleSelectServantComponent__setSelectMask(v39, isAlive, overwriteDisableMessage, result, 0, 0);
      v34 = v176;
    }
    ++v35;
    currentPartySvtList = v177->fields.currentPartySvtList;
    if ( !currentPartySvtList )
      goto LABEL_169;
  }
  v184 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v184,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this = (BattleSwitchPartyConfirmWindow_o *)v34->fields.battle_info;
  if ( !this )
    goto LABEL_169;
  SelectPartyMyDeck = BattleInfoData__GetSelectPartyMyDeck((BattleInfoData_o *)this, v177->fields.nextPartyIndex, 0);
  battle_ent = v34->fields.battle_ent;
  commandAssistDataList = BattleData__CreateLotteryCommandAssistInfo(v34, SelectPartyMyDeck, 0);
  v43 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  v178 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v178,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v45 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FunctionMaster___);
  this = (BattleSwitchPartyConfirmWindow_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !SelectPartyMyDeck || (svts = SelectPartyMyDeck->fields.svts) == 0 )
LABEL_169:
    sub_21FFECC(this, battleData);
  max_length = svts->max_length;
  v186 = this;
  if ( max_length < 1 )
    goto LABEL_88;
  v48 = 0;
  v173 = SelectPartyMyDeck->fields.svts;
  do
  {
    if ( v48 >= max_length )
      goto LABEL_171;
    v179 = v48;
    v49 = svts->m_Items[v48];
    v50 = sub_21FFEBC(BattleServantData_TypeInfo);
    BattleServantData___ctor((BattleServantData_o *)v50, 0);
    if ( !v50 )
      goto LABEL_169;
    BattleServantData__SetFieldEnvironmentData((BattleServantData_o *)v50, v34->fields._FieldEnvData_k__BackingField, 0);
    if ( !battle_ent )
      goto LABEL_169;
    if ( !v49 )
      goto LABEL_169;
    FollowerType = BattleDeckServantData__GetFollowerType(v49, battle_ent->fields.followerType, 0);
    BattleServantData__setServantData(
      (BattleServantData_o *)v50,
      v49,
      battle_ent,
      FollowerType,
      0,
      commandAssistDataList,
      0);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleData__get_MySvtDataStringDict(v34, 0);
    if ( !this )
      goto LABEL_169;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           *(_DWORD *)(v50 + 24),
           &value,
           (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
    {
      DataFromMessagePackString_object = BattleUtility__GetDataFromMessagePackString_object_(
                                           (System_String_o *)value,
                                           (const MethodInfo_37E495C *)Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
      (*(void (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v50 + 584LL))(
        v50,
        DataFromMessagePackString_object,
        *(_QWORD *)(*(_QWORD *)v50 + 592LL));
      BattleServantData__SetTransformSaveData(
        (BattleServantData_o *)v50,
        (BattleServantData_SaveData_o *)DataFromMessagePackString_object,
        0);
      BattleServantData__loadTransformServant((BattleServantData_o *)v50, v34, 0);
      goto LABEL_82;
    }
    v59 = (BattleServantData_PreEntryStatus_o *)sub_21FFEBC(BattleServantData_PreEntryStatus_TypeInfo);
    BattleServantData_PreEntryStatus___ctor(v59, 0);
    *(_QWORD *)(v50 + 1096) = v59;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v50 + 1096), (int32_t)v59, v60, v61, v62, v63, v64, v65);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleServantData__getPassiveSkills((BattleServantData_o *)v50, 0);
    if ( !this )
      goto LABEL_169;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v67 = this;
    if ( m_CancellationTokenSource < 1 )
      goto LABEL_82;
    for ( i = 0; i < m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_171;
      v69 = (int32_t *)*((_QWORD *)&v67->fields._closeBtnObject + i);
      if ( !v69 )
        goto LABEL_169;
      battleData = (BattleData_o *)(*(unsigned int (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v69 + 392LL))(
                                     v69,
                                     *(_QWORD *)(*(_QWORD *)v69 + 400LL));
      this = (BattleSwitchPartyConfirmWindow_o *)Master_object;
      if ( !Master_object )
        goto LABEL_169;
      this = (BattleSwitchPartyConfirmWindow_o *)SkillLvMaster__GetEntity(
                                                   (SkillLvMaster_o *)Master_object,
                                                   (int32_t)battleData,
                                                   v69[9],
                                                   0);
      if ( !this )
        goto LABEL_169;
      closeBtnObject = this->fields._closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_169;
      klass = closeBtnObject[1].klass;
      if ( (int)klass < 1 )
      {
        v72 = 0;
        goto LABEL_73;
      }
      v72 = 0;
      v73 = 0;
      v74 = 0;
      do
      {
        if ( v74 >= (unsigned int)klass )
          goto LABEL_171;
        if ( !v45 )
          goto LABEL_169;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v45,
                                                     *((_DWORD *)&closeBtnObject[1].monitor + v74),
                                                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_169;
        v75 = (int)this->fields.m_CancellationTokenSource;
        v76 = this;
        if ( v75 != 1 )
          goto LABEL_59;
        this = (BattleSwitchPartyConfirmWindow_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)this->fields._closeBtnObject,
                                                     0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v75 = (int)v76->fields.m_CancellationTokenSource;
LABEL_59:
          v72 |= v75 == 7;
          goto LABEL_65;
        }
        v77 = v76->fields._closeBtnObject;
        if ( !v77 )
          goto LABEL_169;
        if ( !LODWORD(v77[1].klass) )
          goto LABEL_171;
        this = v186;
        if ( !v186 )
          goto LABEL_169;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v186,
                                                     (int32_t)v77[1].monitor,
                                                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_169;
        v73 |= (unsigned int)(HIDWORD(this->fields.m_CachedPtr) - 81) < 2;
LABEL_65:
        LODWORD(klass) = closeBtnObject[1].klass;
        ++v74;
      }
      while ( (__int64)v74 < (int)klass );
      if ( (v73 & 1) != 0 )
      {
        if ( v43 )
        {
          items = v43->fields._items;
          v79 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
          ++v43->fields._version;
          if ( items )
          {
            size = v43->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
              v81 = &items->obj.klass + size;
              v43->fields._size = size + 1;
              v81[4] = (Il2CppClass *)v69;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 4), (int32_t)v69, v53, v54, v55, v56, v57, v58);
              goto LABEL_73;
            }
            System_Collections_Generic_List_object___AddWithResize(
              v43,
              (Il2CppObject *)v69,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            if ( (v72 & 1) == 0 )
              goto LABEL_81;
LABEL_74:
            if ( v178 )
            {
              v82 = v178->fields._items;
              v83 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
              ++v178->fields._version;
              if ( v82 )
              {
                v84 = v178->fields._size;
                if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v178,
                    (Il2CppObject *)v69,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                }
                else
                {
                  v85 = &v82->obj.klass + v84;
                  v178->fields._size = v84 + 1;
                  v85[4] = (Il2CppClass *)v69;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)v69, v53, v54, v55, v56, v57, v58);
                }
                goto LABEL_81;
              }
            }
          }
        }
        goto LABEL_169;
      }
LABEL_73:
      if ( (v72 & 1) != 0 )
        goto LABEL_74;
LABEL_81:
      m_CancellationTokenSource = (int)v67->fields.m_CancellationTokenSource;
    }
LABEL_82:
    if ( !v184 )
      goto LABEL_169;
    v86 = v184->fields._items;
    v87 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v184->fields._version;
    if ( !v86 )
      goto LABEL_169;
    v88 = v184->fields._size;
    if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v184,
        (Il2CppObject *)v50,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &v86->obj.klass + v88;
      v184->fields._size = v88 + 1;
      v89[4] = (Il2CppClass *)v50;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v89 + 4), v50, v53, v54, v55, v56, v57, v58);
    }
    svts = v173;
    v34 = v176;
    max_length = v173->max_length;
    v48 = v179 + 1;
  }
  while ( (int)(v179 + 1) < max_length );
LABEL_88:
  if ( !v43 )
    goto LABEL_169;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v187,
    v43,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v188 = v187;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v188,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v188.fields._current;
    v91 = sub_21FFEBC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v91, 0);
    if ( !current )
      sub_21FFECC(v92, v93);
    v94 = ((unsigned int (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[5].methodPtr)(
            current,
            current->klass->vtable[5].method);
    if ( !Master_object )
      sub_21FFECC(0, v94);
    Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v94, HIDWORD(current[2].klass), 0);
    v97 = Entity;
    if ( !Entity )
      sub_21FFECC(0, v96);
    if ( !v91 )
      sub_21FFECC(Entity, v96);
    funcId = (BattleServantData_o *)Entity->fields.funcId;
    *(_DWORD *)(v91 + 16) = current[1].monitor;
    v99 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v99,
      (Il2CppObject *)v91,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__,
      0);
    object__59035808 = (BattleServantData_array *)System_Linq_Enumerable__First_object__59035808(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v184,
                                                    (System_Func_TSource__bool__o *)v99,
                                                    (const MethodInfo_384D0A0 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    v183 = v97;
    v180 = v91;
    if ( !funcId )
      sub_21FFECC(object__59035808, v101);
    v102 = *(_QWORD *)&funcId->fields.uniqueId;
    if ( (int)v102 >= 1 )
    {
      v103 = (BattleServantData_o *)object__59035808;
      v104 = 0;
      v185 = funcId;
      do
      {
        if ( v104 >= (unsigned int)v102 )
          sub_21FFED4(object__59035808);
        if ( !v45 )
          sub_21FFECC(object__59035808, v101);
        v105 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v45,
                 *((_DWORD *)&funcId->fields.userSvtId.fields.currentCryptoKey + v104),
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v107 = (FunctionEntity_o *)v105;
        if ( !v105 )
          sub_21FFECC(0, v106);
        v108 = v105[2].klass;
        if ( !v108 )
          sub_21FFECC(v105, v106);
        if ( !LODWORD(v108->_1.namespaze) )
          sub_21FFED4(v105);
        if ( !v186 )
          sub_21FFECC(0, v106);
        object__59035808 = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v186,
                                                        (int32_t)v108->_1.byval_arg.data,
                                                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v109 = (BuffEntity_o *)object__59035808;
        if ( !object__59035808 )
          sub_21FFECC(0, v101);
        if ( (unsigned int)(HIDWORD(object__59035808->bounds) - 81) < 2 )
        {
          svals = v183->fields.svals;
          if ( !svals )
            sub_21FFECC(object__59035808, v101);
          if ( v104 >= LODWORD(svals->max_length) )
            sub_21FFED4(object__59035808);
          v111 = svals->m_Items[v104];
          v112 = (DataVals_o *)sub_21FFEBC(DataVals_TypeInfo);
          DataVals___ctor(v112, v111, 0);
          if ( !v112 )
            sub_21FFECC(v113, v114);
          DataVals__SetType_48629628(v112, v107, v104, 0);
          object__59035808 = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v112, 0);
          if ( ((unsigned __int8)object__59035808 & 1) == 0 )
          {
            if ( !v184 )
              sub_21FFECC(0, v101);
            targetType = v107->fields.targetType;
            v116 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v184,
                                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            object__59035808 = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                 targetType,
                                 v116,
                                 *(_DWORD *)(v180 + 16),
                                 v117);
            v118 = object__59035808;
            if ( !object__59035808 )
              sub_21FFECC(0, v101);
            v119 = object__59035808->max_length;
            if ( (int)v119 >= 1 )
            {
              v120 = 0;
              do
              {
                if ( v120 >= (unsigned int)v119 )
                  sub_21FFED4(object__59035808);
                if ( !v103 )
                  sub_21FFECC(object__59035808, v101);
                v121 = v118->m_Items[v120];
                Individualities = BattleServantData__getIndividualities(v103, 0, 1, 0, 1, 0);
                ckSelfIndv = v109->fields.ckSelfIndv;
                v124 = Individualities;
                CkSelfCountIndividuality = BuffEntity__GetCkSelfCountIndividuality(v109, 0);
                object__59035808 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                v124,
                                                                ckSelfIndv,
                                                                v109,
                                                                CkSelfCountIndividuality,
                                                                0);
                if ( ((unsigned __int8)object__59035808 & 1) != 0 )
                {
                  if ( !v121 )
                    sub_21FFECC(object__59035808, v101);
                  v126 = BattleServantData__getIndividualities(v121, 0, 1, 0, 1, 0);
                  ckOpIndv = v109->fields.ckOpIndv;
                  v128 = v126;
                  CkOpCountIndividuality = BuffEntity__GetCkOpCountIndividuality(v109, 0);
                  object__59035808 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                  v128,
                                                                  ckOpIndv,
                                                                  v109,
                                                                  CkOpCountIndividuality,
                                                                  0);
                  if ( ((unsigned __int8)object__59035808 & 1) != 0 )
                  {
                    type = v109->fields.type;
                    if ( type == 82 )
                    {
                      PreEntryStatusInfo_k__BackingField = v121->fields._PreEntryStatusInfo_k__BackingField;
                      v134 = DataVals__GetValue(v112, 0);
                      if ( !PreEntryStatusInfo_k__BackingField )
                        sub_21FFECC(v134, v135);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(PreEntryStatusInfo_k__BackingField, -(int)v134, 0);
                    }
                    else if ( type == 81 )
                    {
                      v131 = v121->fields._PreEntryStatusInfo_k__BackingField;
                      v132 = DataVals__GetValue(v112, 0);
                      if ( !v131 )
                        sub_21FFECC(v132, (unsigned int)v132);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(v131, v132, 0);
                    }
                  }
                }
                LODWORD(v119) = v118->max_length;
                ++v120;
              }
              while ( (__int64)v120 < (int)v119 );
            }
          }
        }
        funcId = v185;
        ++v104;
        LODWORD(v102) = v185->fields.uniqueId;
      }
      while ( (__int64)v104 < (int)v102 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v188,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  this = (BattleSwitchPartyConfirmWindow_o *)v178;
  if ( !v178 )
    goto LABEL_169;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v187,
    v178,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v188 = v187;
  v187.fields._list = 0;
  *(_QWORD *)&v187.fields._index = &v188;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v188,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    v136 = v188.fields._current;
    v137 = sub_21FFEBC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v137, 0);
    if ( !v136 )
      sub_21FFECC(v138, v139);
    v140 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v136->klass->vtable[5].methodPtr)(
             v136,
             v136->klass->vtable[5].method);
    if ( !Master_object )
      sub_21FFECC(v140, (unsigned int)v140);
    v141 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v140, HIDWORD(v136[2].klass), 0);
    v143 = v141;
    if ( !v141 )
      sub_21FFECC(0, v142);
    if ( !v137 )
      sub_21FFECC(v141, v142);
    v144 = v141->fields.funcId;
    *(_DWORD *)(v137 + 16) = v136[1].monitor;
    v145 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v145,
      (Il2CppObject *)v137,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__,
      0);
    IsContainOnFieldsParameter = (BattleServantData_array *)System_Linq_Enumerable__First_object__59035808(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v184,
                                                              (System_Func_TSource__bool__o *)v145,
                                                              (const MethodInfo_384D0A0 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    if ( !v144 )
      sub_21FFECC(IsContainOnFieldsParameter, v147);
    v148 = v144->max_length;
    if ( (int)v148 >= 1 )
    {
      v149 = 0;
      do
      {
        if ( v149 >= (unsigned int)v148 )
          sub_21FFED4(IsContainOnFieldsParameter);
        if ( !v45 )
          sub_21FFECC(IsContainOnFieldsParameter, v147);
        IsContainOnFieldsParameter = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v45,
                                                                  v144->m_Items[v149],
                                                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v150 = (FunctionEntity_o *)IsContainOnFieldsParameter;
        if ( !IsContainOnFieldsParameter )
          sub_21FFECC(0, v147);
        if ( LODWORD(IsContainOnFieldsParameter->max_length) == 7 )
        {
          v151 = v143->fields.svals;
          if ( !v151 )
            sub_21FFECC(IsContainOnFieldsParameter, v147);
          if ( v149 >= LODWORD(v151->max_length) )
            sub_21FFED4(IsContainOnFieldsParameter);
          v152 = v151->m_Items[v149];
          v153 = (DataVals_o *)sub_21FFEBC(DataVals_TypeInfo);
          DataVals___ctor(v153, v152, 0);
          if ( !v153 )
            sub_21FFECC(v154, v155);
          DataVals__SetType_48629628(v153, v150, v149, 0);
          IsContainOnFieldsParameter = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v153, 0);
          if ( ((unsigned __int8)IsContainOnFieldsParameter & 1) == 0 )
          {
            if ( !v184 )
              sub_21FFECC(0, v147);
            v156 = v150->fields.targetType;
            v157 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v184,
                                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            IsContainOnFieldsParameter = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                           v156,
                                           v157,
                                           *(_DWORD *)(v137 + 16),
                                           v158);
            v159 = IsContainOnFieldsParameter;
            if ( !IsContainOnFieldsParameter )
              sub_21FFECC(0, v147);
            v160 = IsContainOnFieldsParameter->max_length;
            if ( v160 >= 1 )
            {
              v161 = 0;
              do
              {
                if ( (unsigned int)v161 >= v160 )
                  sub_21FFED4(IsContainOnFieldsParameter);
                v162 = v159->m_Items[v161];
                if ( !v162 )
                  sub_21FFECC(IsContainOnFieldsParameter, v147);
                v163 = v162->fields._PreEntryStatusInfo_k__BackingField;
                v164 = DataVals__GetValue(v153, 0);
                if ( !v163 )
                  sub_21FFECC(v164, (unsigned int)v164);
                BattleServantData_PreEntryStatus__AddGainNp(v163, v164, 0);
                v160 = v159->max_length;
                ++v161;
              }
              while ( (int)v161 < v160 );
            }
          }
        }
        LODWORD(v148) = v144->max_length;
        ++v149;
      }
      while ( (__int64)v149 < (int)v148 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v188,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  nextPartyNameLabel = v177->fields.nextPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               v177->fields.nextPartyIndex,
                                               v166);
  if ( !nextPartyNameLabel )
    goto LABEL_169;
  UILabel__set_text(nextPartyNameLabel, (System_String_o *)this, 0);
  nextPartySvtList = v177->fields.nextPartySvtList;
  if ( !nextPartySvtList )
    goto LABEL_169;
  v168 = 0;
  while ( 1 )
  {
    v169 = LODWORD(nextPartySvtList->max_length);
    if ( v168 >= (int)v169 )
      break;
    if ( v168 >= v169 )
      goto LABEL_171;
    if ( !v184 )
      goto LABEL_169;
    v170 = nextPartySvtList->m_Items[v168];
    this = (BattleSwitchPartyConfirmWindow_o *)System_Collections_Generic_List_object___get_Item(
                                                 v184,
                                                 v168,
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    if ( v168 >= v184->fields._size )
    {
      if ( !v170 )
        goto LABEL_169;
      BattleSelectServantComponent__setNone(v170, 0);
    }
    else
    {
      if ( !v170 )
        goto LABEL_169;
      v171 = (BattleServantData_o *)this;
      BattleSelectServantComponent__setData(v170, (BattleServantData_o *)this, 2, v168, 0, 0);
      if ( !v171 )
        goto LABEL_169;
      v172 = BattleServantData__isAlive(v171, 0, 0);
      BattleSelectServantComponent__setSelectMask(v170, v172, overwriteDisableMessage, result, 0, 0);
    }
    ++v168;
    nextPartySvtList = v177->fields.nextPartySvtList;
    if ( !nextPartySvtList )
      goto LABEL_169;
  }
}


void BattleSwitchPartyConfirmWindow__SetupBattleAssetUiAtlas(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_battleAssetUiAtlas; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIAtlas_o *battleAssetUiAtlas; // t1
  __int64 v6; // x1
  BattleDataDefine_c *v7; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__58323140; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593C150 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3226/*"BattleAssetUIAtlas"*/);
    byte_593C150 = 1;
  }
  battleAssetUiAtlas = this->fields.battleAssetUiAtlas;
  p_battleAssetUiAtlas = (MissionNaviTransitionBoardItem_o *)&this->fields.battleAssetUiAtlas;
  v4 = (UnityEngine_Object_o *)battleAssetUiAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v7 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v6);
      v7 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v7->static_fields->ASSET_BATTLE_COMMON;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( AssetStorage )
    {
      Object_object__58323140 = AssetData__GetObject_object__58323140(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3226/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0);
      if ( !v12 )
      {
        if ( !Object_object__58323140 )
          sub_21FFECC(v12, v13);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__58323140,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
        sub_21FFBF4(p_battleAssetUiAtlas, (int32_t)Component_object, v15, v16, v17, v18, v19, v20);
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
  unsigned int v8; // w23
  BattleSwitchPartyConfirmWindow_SpriteParam_o *v9; // x24
  UnityEngine_Object_o *sprite; // x20

  if ( (byte_593C14F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C14F = 1;
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
          sub_21FFED4(v4);
        v9 = spriteParams->m_Items[v8];
        if ( !v9 )
          break;
        sprite = (UnityEngine_Object_o *)v9->fields.sprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
      sub_21FFECC(v4, v5);
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

  if ( (byte_593C153 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11629/*"ROMAN_NUMBER_{0}"*/);
    sub_21FFC50(&StringLiteral_6058/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/);
    byte_593C153 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_6058/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/, 0);
  v8 = partyIndex + 1;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v8);
  v5 = System_String__Format((System_String_o *)StringLiteral_11629/*"ROMAN_NUMBER_{0}"*/, v4, 0);
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
  long double v10; // q0
  System_Func_object__bool__o *v11; // x0
  intptr_t *v12; // x8
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  System_Func_TSource__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_593C154 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_BattleServantData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_21FFC50(&System_Func_BattleServantData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__);
    sub_21FFC50(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__);
    sub_21FFC50(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
    byte_593C154 = 1;
  }
  v7 = sub_21FFEBC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_DWORD *)(v7 + 16) = actorId;
  if ( targetType <= 3 )
  {
    if ( !targetType )
    {
      v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
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
      sub_2237B54(Method_System_Array_Empty_BattleServantData___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_2237AF8(v10);
    if ( !*(_DWORD *)(v15 + 228) )
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v15, v9);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
      v16 = sub_2237AF8(v10);
    return **(BattleServantData_array ***)(v16 + 184);
  }
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
  v12 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__;
LABEL_22:
  v18 = (System_Func_TSource__bool__o *)v11;
  System_Func_object__bool____ctor(v11, (Il2CppObject *)v7, *v12, 0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)svtList,
          v18,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v19,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


UnityEngine_GameObject_o *BattleSwitchPartyConfirmWindow__get_ParentPanel(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_21FFECC(transform, v3);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
}


System_String_o *BattleSwitchPartyConfirmWindow__get_closeBtnPath(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C14B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4675/*"CloseButton"*/);
    byte_593C14B = 1;
  }
  return (System_String_o *)StringLiteral_4675/*"CloseButton"*/;
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
  if ( !byte_5931940 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_21FFECC(gameObject, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C155 & 1) == 0 )
  {
    sub_21FFC50(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    byte_593C155 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleSwitchPartyConfirmWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields->__9 = (struct BattleSwitchPartyConfirmWindow___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(_4__this, method);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__6(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.uniqueId != this->fields.actorId;
}