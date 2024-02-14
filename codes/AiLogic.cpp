void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_421296F & 1) == 0 )
  {
    sub_B0D8A4(&long___TypeInfo, method);
    byte_421296F = 1;
  }
  v3 = (struct System_Int64_array *)sub_B0D8BC(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.wkZero, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AiLogic__INITLOG(AiLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AiLogic__Initialize(AiLogic_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4212964 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_AiActMaster___, data);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4212964 = 1;
  }
  this->fields.Bdata = data;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool __fastcall AiLogic__IsNoTargetNoActionTask(
        AiLogic_o *this,
        int32_t type,
        System_Int32_array *opponentTargets,
        System_Int32_array *partyTargets,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  unsigned int v8; // w8
  _BOOL4 v9; // w0
  __int64 v10; // x0

  if ( type == 3 )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0LL) )
      goto LABEL_18;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0LL);
    if ( IsNullOrEmpty )
      goto LABEL_18;
    if ( !opponentTargets )
      goto LABEL_19;
    if ( !opponentTargets->max_length )
      goto LABEL_20;
    if ( (opponentTargets->m_Items[1] & 0x80000000) != 0 )
    {
LABEL_9:
      if ( partyTargets )
      {
        if ( partyTargets->max_length )
        {
          v8 = partyTargets->m_Items[1];
          return v8 >> 31;
        }
LABEL_20:
        v10 = sub_B0D9A8(IsNullOrEmpty);
        sub_B0D948(v10, 0LL);
      }
LABEL_19:
      sub_B0D97C(IsNullOrEmpty);
    }
LABEL_18:
    LOBYTE(v9) = 0;
    return v9;
  }
  if ( type == 2 )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_9;
    goto LABEL_18;
  }
  if ( type != 1 )
    goto LABEL_18;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_18;
  if ( !opponentTargets )
    goto LABEL_19;
  if ( !opponentTargets->max_length )
    goto LABEL_20;
  v8 = opponentTargets->m_Items[1];
  return v8 >> 31;
}


void __fastcall AiLogic__LOG(AiLogic_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinking(
        AiLogic_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        BattleLogicBaseAi_o *logicAi,
        int32_t timingPriority,
        const MethodInfo *method)
{
  AiLogic_o *v10; // x22
  int32_t uniqueId; // w24
  AiState_o *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  AiLogic_AiInfo_o *v15; // x25
  const MethodInfo *v16; // x4

  v10 = this;
  if ( (byte_4212966 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B0D8A4(&AiLogic_AiInfo_TypeInfo, svtData);
    byte_4212966 = 1;
  }
  if ( !svtData )
    sub_B0D97C(this);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v15 = (AiLogic_AiInfo_o *)sub_B0D974(AiLogic_AiInfo_TypeInfo, v13, v14);
  AiLogic_AiInfo___ctor(v15, 1, uniqueId, v12, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v10, v15, procState, timingPriority, v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinkingBase(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  AiLogic___c__DisplayClass12_0_o *v14; // x23
  System_Collections_Generic_List_T__o *All; // x0
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_4212968 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, aiInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9);
    sub_B0D8A4(&Method_System_Predicate_AiBaseEntity___ctor__, v10);
    sub_B0D8A4(&System_Predicate_AiBaseEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v12);
    sub_B0D8A4(&AiLogic___c__DisplayClass12_0_TypeInfo, v13);
    byte_4212968 = 1;
  }
  v14 = (AiLogic___c__DisplayClass12_0_o *)sub_B0D974(
                                             AiLogic___c__DisplayClass12_0_TypeInfo,
                                             aiInfo,
                                             *(_QWORD *)&procState);
  AiLogic___c__DisplayClass12_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.procState = procState, v14->fields.timingPriority = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v16),
        thinkList = this->fields._thinkList,
        v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_AiBaseEntity__TypeInfo,
                                                                         v18,
                                                                         v19),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v20,
          (Il2CppObject *)v14,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_AiBaseEntity___ctor__),
        !thinkList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
                (System_Predicate_T__o *)v20,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return All->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinking_20900428(
        AiLogic_o *this,
        BattleFieldData_o *fieldData,
        int32_t procState,
        BattleLogicBaseAi_o *logicAi,
        const MethodInfo *method)
{
  AiLogic_o *v8; // x20
  int32_t index; // w23
  AiState_o *aiState; // x22
  AiLogic_AiInfo_o *v11; // x24
  const MethodInfo *v12; // x4

  v8 = this;
  if ( (byte_4212967 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B0D8A4(&AiLogic_AiInfo_TypeInfo, fieldData);
    byte_4212967 = 1;
  }
  if ( !fieldData )
    sub_B0D97C(this);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_B0D974(AiLogic_AiInfo_TypeInfo, fieldData, *(_QWORD *)&procState);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v12);
}


bool __fastcall AiLogic__checkThinking_20903112(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  __int64 v8; // x1
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
  int32_t cond; // w23
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  AiLogic_o *v28; // x20
  System_String_o *v29; // x22
  int32_t v30; // w20
  ConditionsInformation_CheckInfo_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  ConditionsInformation_CheckInfo_o *v34; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x22
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *Bdata; // x1
  int32_t v39; // w4
  BattleServantData_array *FieldEnemyServantList; // x0
  const MethodInfo_2FC5938 *v41; // x2
  System_Collections_Generic_IEnumerable_T__o *v42; // x1
  struct BattleData_o *v43; // x8
  AiLogic_o *v44; // x0
  System_Collections_Generic_List_AiInterface__o *v45; // x1
  bool v46; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v48; // x3
  AiLogic_o *v49; // x21
  System_Int64_array *wkZero; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Int64_array *v53; // x28
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Int64_array *v57; // x20
  int32_t refine; // w8
  _BOOL4 v59; // w26
  _BOOL8 v60; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppClass *v66; // x8
  unsigned int paramater; // w25
  struct BattleData_o *v68; // x21
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0
  System_Double_array *v72; // x1
  int v73; // w20
  int v74; // w8
  _BOOL8 v75; // x0
  Il2CppObject *v76; // x20
  Il2CppClass *v77; // x8
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  Il2CppClass *v81; // x8
  unsigned int v82; // w25
  struct BattleData_o *v83; // x21
  unsigned __int64 v84; // x10
  int32_t *v85; // x11
  __int64 v86; // x0
  System_Double_array *v87; // x1
  int v88; // w20
  int32_t v89; // w8
  AiLogic_o *v90; // x20
  Il2CppObject *v91; // x25
  Il2CppClass *v92; // x8
  unsigned __int64 v93; // x10
  int32_t *v94; // x11
  __int64 v95; // x0
  Il2CppClass *v96; // x8
  unsigned int v97; // w21
  struct BattleData_o *v98; // x22
  unsigned __int64 v99; // x10
  int32_t *v100; // x11
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x9
  __int64 v104; // x10
  unsigned __int64 v105; // x11
  __int64 v106; // x11
  _BOOL8 v107; // x0
  AiLogic_AiInfo_o *v108; // x22
  int v109; // w21
  System_Int64_array *v110; // x2
  int v111; // w8
  Il2CppObject *v112; // x25
  Il2CppClass *v113; // x8
  unsigned __int64 v114; // x10
  int32_t *v115; // x11
  __int64 v116; // x0
  Il2CppClass *v117; // x8
  unsigned int v118; // w21
  struct BattleData_o *v119; // x22
  unsigned __int64 v120; // x10
  int32_t *v121; // x11
  __int64 v122; // x0
  __int64 v123; // x0
  unsigned __int64 v124; // x8
  unsigned int v125; // w10
  double v126; // d0
  _BOOL8 v127; // x0
  Il2CppObject *v128; // x25
  Il2CppClass *v129; // x8
  unsigned __int64 v130; // x10
  int32_t *v131; // x11
  __int64 v132; // x0
  Il2CppClass *v133; // x8
  __int64 v134; // x2
  struct BattleData_o *v135; // x23
  unsigned __int64 v136; // x10
  int32_t *v137; // x11
  unsigned int v138; // w26
  __int64 v139; // x0
  __int64 v140; // x0
  __int64 v141; // x9
  __int64 v142; // x10
  unsigned __int64 aiType; // x11
  __int64 v144; // x11
  _BOOL8 v145; // x0
  char v146; // w20
  __int64 v148; // x0
  __int64 v149; // x0
  __int64 v150; // x0
  __int64 v151; // x0
  __int64 v152; // x0
  _BOOL4 v153; // [xsp+0h] [xbp-E0h]
  int v154; // [xsp+Ch] [xbp-D4h]
  AiLogic_AiInfo_o *v155; // [xsp+10h] [xbp-D0h]
  ConditionsInformation_ISCheckFunction_o *func; // [xsp+18h] [xbp-C8h]
  System_Int64_array *entVals; // [xsp+20h] [xbp-C0h]
  AiLogic_o *v160; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v161[2]; // [xsp+38h] [xbp-A8h] BYREF
  int v162; // [xsp+6Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v163; // [xsp+70h] [xbp-70h] BYREF
  int32_t v164; // [xsp+8Ch] [xbp-54h] BYREF

  v160 = this;
  if ( (byte_421296D & 1) == 0 )
  {
    sub_B0D8A4(&AiInterface_TypeInfo, aiInfo);
    sub_B0D8A4(&Ai_COND_TypeInfo, v8);
    sub_B0D8A4(&ConditionsInformation_TypeInfo, v9);
    sub_B0D8A4(&double___TypeInfo, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_long___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Take_long___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_long___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v16);
    sub_B0D8A4(&long___TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiInterface__Add__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiInterface___ctor__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_AiInterface__TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_9359/*"NOT_"*/, v23);
    this = (AiLogic_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v24);
    byte_421296D = 1;
  }
  v164 = 0;
  memset(&v163, 0, sizeof(v163));
  v162 = 0;
  if ( !aiEnt )
    goto LABEL_262;
  this = (AiLogic_o *)Ai__getCond(aiEnt->fields.cond, (const MethodInfo *)aiInfo);
  v164 = (int)this;
  if ( !aiInfo )
    goto LABEL_262;
  cond = aiEnt->fields.cond;
  v26 = (System_String_o *)StringLiteral_9359/*"NOT_"*/;
  v27 = (System_String_o *)StringLiteral_1/*""*/;
  this = (AiLogic_o *)j_il2cpp_value_box_0(Ai_COND_TypeInfo, &v164);
  if ( !this )
    goto LABEL_262;
  v28 = this;
  if ( cond >= 0 )
    v26 = v27;
  v29 = (System_String_o *)((__int64 (__fastcall *)(AiLogic_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  v164 = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
  System_String__Concat_43849904(v26, v29, 0LL);
  v30 = v164;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  v31 = ConditionsInformation__getCheckFunction(v30, 0LL);
  if ( !v31 )
    goto LABEL_257;
  v34 = v31;
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_AiInterface__TypeInfo,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v34->fields.target )
  {
    case 1:
      if ( !v35 )
        goto LABEL_262;
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v160->fields.Bdata;
      goto LABEL_79;
    case 2:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      uniqueId = aiInfo->fields.uniqueId;
      if ( aiInfo->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
      goto LABEL_79;
    case 3:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 4:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 5:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( aiInfo->fields.aiType != 1 )
      {
        if ( !this || !v35 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].fields.Bdata;
        goto LABEL_79;
      }
      if ( !this )
        goto LABEL_262;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
      v43 = v160->fields.Bdata;
      if ( !v43 )
        goto LABEL_262;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_48;
      goto LABEL_24;
    case 6:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        v43 = v160->fields.Bdata;
        if ( !v43 )
          goto LABEL_262;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_48:
          if ( !v35 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v43->fields.playerFieldStatus;
        }
        else
        {
LABEL_24:
          if ( !v35 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v43->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v35 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].monitor;
      }
LABEL_79:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v35,
        Bdata,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AiInterface__Add__);
      goto LABEL_84;
    case 7:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 8:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v35 )
          goto LABEL_262;
      }
LABEL_82:
      v42 = (System_Collections_Generic_IEnumerable_T__o *)this;
      v41 = (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
LABEL_83:
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
        v42,
        v41);
LABEL_84:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, v36);
      v49 = this;
      v155 = aiInfo;
      wkZero = v160->fields.wkZero;
      v154 = cond;
      if ( !v34->fields.isParams )
      {
        if ( v34->fields.isIndiv )
        {
          if ( !this )
            goto LABEL_262;
          if ( this->fields._aiType >= 2 )
          {
            v55 = System_Linq_Enumerable__Skip_long_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)this,
                    1,
                    (const MethodInfo_1B5556C *)Method_System_Linq_Enumerable_Skip_long___);
            v56 = System_Linq_Enumerable__Take_long_(
                    v55,
                    v49->fields._aiType - 1,
                    (const MethodInfo_1B558C0 *)Method_System_Linq_Enumerable_Take_long___);
            v57 = System_Linq_Enumerable__ToArray_long_(
                    v56,
                    (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
            this = (AiLogic_o *)sub_B0D8BC(long___TypeInfo, 1LL);
            if ( v49->fields._aiType )
            {
              if ( !this )
                goto LABEL_262;
              if ( this->fields._aiType )
              {
                thinkList = v49->fields._thinkList;
                v53 = wkZero;
                wkZero = v57;
                goto LABEL_99;
              }
            }
LABEL_277:
            v152 = sub_B0D9A8(this);
            sub_B0D948(v152, 0LL);
          }
        }
LABEL_94:
        v53 = v160->fields.wkZero;
        goto LABEL_100;
      }
      if ( !this )
        goto LABEL_262;
      if ( this->fields._aiType < 2 )
        goto LABEL_94;
      v51 = System_Linq_Enumerable__Skip_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)this,
              1,
              (const MethodInfo_1B5556C *)Method_System_Linq_Enumerable_Skip_long___);
      v52 = System_Linq_Enumerable__Take_long_(
              v51,
              v49->fields._aiType - 1,
              (const MethodInfo_1B558C0 *)Method_System_Linq_Enumerable_Take_long___);
      v53 = System_Linq_Enumerable__ToArray_long_(
              v52,
              (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
      this = (AiLogic_o *)sub_B0D8BC(long___TypeInfo, 1LL);
      if ( !v49->fields._aiType )
        goto LABEL_277;
      if ( !this )
        goto LABEL_262;
      if ( !this->fields._aiType )
        goto LABEL_277;
      thinkList = v49->fields._thinkList;
LABEL_99:
      v49 = this;
      this->fields._thinkList = thinkList;
LABEL_100:
      refine = v34->fields.refine;
      func = v34->fields.func;
      entVals = (System_Int64_array *)v49;
      if ( refine )
      {
        v59 = 0;
      }
      else
      {
        if ( !v35 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v161,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v35,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v163 = v161[0];
        while ( 1 )
        {
          v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v163,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v60 )
            break;
          current = v163.fields.current;
          if ( !v163.fields.current )
            sub_B0D97C(v60);
          klass = v163.fields.current->klass;
          if ( *(_WORD *)&v163.fields.current->klass->_2.bitflags1 )
          {
            v63 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              ++v63;
              p_offset += 4;
              if ( v63 >= *(unsigned __int16 *)&v163.fields.current->klass->_2.bitflags1 )
                goto LABEL_110;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_110:
            p_method = sub_AA67A0(v163.fields.current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v34,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v66 = current->klass;
            paramater = v34->fields.paramater;
            v68 = v160->fields.Bdata;
            if ( *(_WORD *)&current->klass->_2.bitflags1 )
            {
              v69 = 0LL;
              v70 = &v66->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v70 - 1) != AiInterface_TypeInfo )
              {
                ++v69;
                v70 += 4;
                if ( v69 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
                  goto LABEL_117;
              }
              v71 = (__int64)&v66->vtable[*v70].method;
            }
            else
            {
LABEL_117:
              v71 = sub_AA67A0(current, AiInterface_TypeInfo, 0LL);
            }
            v72 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v71)(
                                           current,
                                           v68,
                                           paramater,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v53,
                                           aiEnt,
                                           *(_QWORD *)(v71 + 8));
            if ( !func )
              sub_B0D97C(0LL);
            if ( ConditionsInformation_ISCheckFunction__Invoke(func, v72, entVals, 0LL) )
            {
              v73 = 1;
              goto LABEL_123;
            }
          }
        }
        v73 = 0;
LABEL_123:
        *((_DWORD *)&v161[1].fields.list + v162++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v163,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v59 = v73 != 0;
        if ( v162 )
        {
          v74 = v162 - 1;
          if ( *((_DWORD *)&v161[0].fields.current + v162 + 1) == 1707 )
          {
LABEL_150:
            v162 = v74;
LABEL_187:
            v109 = cond;
            v108 = v155;
            goto LABEL_255;
          }
        }
        refine = v34->fields.refine;
      }
      if ( refine == 1 )
      {
        if ( !v35 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v161,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v35,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v163 = v161[0];
        while ( 1 )
        {
          v75 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v163,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v75 )
            break;
          v76 = v163.fields.current;
          if ( !v163.fields.current )
            sub_B0D97C(v75);
          v77 = v163.fields.current->klass;
          if ( *(_WORD *)&v163.fields.current->klass->_2.bitflags1 )
          {
            v78 = 0LL;
            v79 = &v77->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v79 - 1) != AiInterface_TypeInfo )
            {
              ++v78;
              v79 += 4;
              if ( v78 >= *(unsigned __int16 *)&v163.fields.current->klass->_2.bitflags1 )
                goto LABEL_135;
            }
            v80 = (__int64)&v77->vtable[*v79 + 1].method;
          }
          else
          {
LABEL_135:
            v80 = sub_AA67A0(v163.fields.current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v80)(
                  v76,
                  v34,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v80 + 8)) & 1) != 0 )
          {
            v81 = v76->klass;
            v82 = v34->fields.paramater;
            v83 = v160->fields.Bdata;
            if ( *(_WORD *)&v76->klass->_2.bitflags1 )
            {
              v84 = 0LL;
              v85 = &v81->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v85 - 1) != AiInterface_TypeInfo )
              {
                ++v84;
                v85 += 4;
                if ( v84 >= *(unsigned __int16 *)&v76->klass->_2.bitflags1 )
                  goto LABEL_142;
              }
              v86 = (__int64)&v81->vtable[*v85].method;
            }
            else
            {
LABEL_142:
              v86 = sub_AA67A0(v76, AiInterface_TypeInfo, 0LL);
            }
            v87 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v86)(
                                           v76,
                                           v83,
                                           v82,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v53,
                                           aiEnt,
                                           *(_QWORD *)(v86 + 8));
            if ( !func )
              sub_B0D97C(0LL);
            if ( !ConditionsInformation_ISCheckFunction__Invoke(func, v87, entVals, 0LL) )
            {
              v88 = 0;
              goto LABEL_148;
            }
          }
        }
        v88 = 1;
LABEL_148:
        *((_DWORD *)&v161[1].fields.list + v162++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v163,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v59 = v88 != 0;
        if ( v162 )
        {
          v74 = v162 - 1;
          if ( *((_DWORD *)&v161[0].fields.current + v162 + 1) == 1707 )
            goto LABEL_150;
        }
      }
      v89 = v34->fields.refine;
      if ( v89 == 2 )
      {
        this = (AiLogic_o *)sub_B0D8BC(double___TypeInfo, 0LL);
        if ( v35 )
        {
          v90 = this;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            v161,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v35,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v163 = v161[0];
LABEL_247:
          while ( 1 )
          {
            v145 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v163,
                     (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v145 )
              break;
            v128 = v163.fields.current;
            if ( !v163.fields.current )
              sub_B0D97C(v145);
            v129 = v163.fields.current->klass;
            if ( *(_WORD *)&v163.fields.current->klass->_2.bitflags1 )
            {
              v130 = 0LL;
              v131 = &v129->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v131 - 1) != AiInterface_TypeInfo )
              {
                ++v130;
                v131 += 4;
                if ( v130 >= *(unsigned __int16 *)&v163.fields.current->klass->_2.bitflags1 )
                  goto LABEL_222;
              }
              v132 = (__int64)&v129->vtable[*v131 + 1].method;
            }
            else
            {
LABEL_222:
              v132 = sub_AA67A0(v163.fields.current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v132)(
                    v128,
                    v34,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v132 + 8)) & 1) != 0 )
            {
              v133 = v128->klass;
              v134 = (unsigned int)v34->fields.paramater;
              v153 = v59;
              v135 = v160->fields.Bdata;
              if ( *(_WORD *)&v128->klass->_2.bitflags1 )
              {
                v136 = 0LL;
                v137 = &v133->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v137 - 1) != AiInterface_TypeInfo )
                {
                  ++v136;
                  v137 += 4;
                  if ( v136 >= *(unsigned __int16 *)&v128->klass->_2.bitflags1 )
                    goto LABEL_229;
                }
                v139 = (__int64)&v133->vtable[*v137].method;
              }
              else
              {
LABEL_229:
                v138 = v34->fields.paramater;
                v139 = sub_AA67A0(v128, AiInterface_TypeInfo, 0LL);
                v134 = v138;
              }
              v140 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, __int64, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v139)(
                       v128,
                       v135,
                       v134,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v53,
                       aiEnt,
                       *(_QWORD *)(v139 + 8));
              if ( !v140 )
                sub_B0D97C(0LL);
              v141 = *(_QWORD *)(v140 + 24);
              if ( v141 )
              {
                v59 = v153;
                if ( !v90 )
                  sub_B0D97C(v140);
                if ( !*(_QWORD *)&v90->fields._aiType )
                  v90 = (AiLogic_o *)v140;
              }
              else
              {
                v59 = v153;
              }
              if ( (int)v141 >= 1 )
              {
                v142 = 4LL;
                while ( 1 )
                {
                  if ( !v90 )
                    sub_B0D97C(v140);
                  aiType = (unsigned int)v90->fields._aiType;
                  if ( v142 - 4 < (int)aiType )
                  {
                    if ( v142 - 4 >= aiType )
                    {
                      v150 = sub_B0D9A8(v140);
                      sub_B0D948(v150, 0LL);
                    }
                    if ( *((double *)&v90->klass + v142) < *(double *)(v140 + 8 * v142) )
                      break;
                  }
                  v144 = v142 - 3;
                  ++v142;
                  if ( v144 >= (int)v141 )
                    goto LABEL_247;
                }
                v90 = (AiLogic_o *)v140;
              }
            }
          }
          *((_DWORD *)&v161[1].fields.list + v162++) = 1524;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v163,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          v109 = v154;
          v110 = entVals;
          v108 = v155;
          if ( v162 )
          {
            v111 = v162 - 1;
            if ( *((_DWORD *)&v161[0].fields.current + v162 + 1) == 1524 )
              goto LABEL_250;
          }
LABEL_251:
          if ( v90 )
          {
            if ( !*(_QWORD *)&v90->fields._aiType )
              goto LABEL_255;
            goto LABEL_253;
          }
        }
LABEL_262:
        sub_B0D97C(this);
      }
      if ( v89 != 4 )
      {
        if ( v89 != 3 )
          goto LABEL_187;
        this = (AiLogic_o *)sub_B0D8BC(double___TypeInfo, 0LL);
        if ( !v35 )
          goto LABEL_262;
        v90 = this;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v161,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v35,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v163 = v161[0];
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
LABEL_183:
              v107 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v163,
                       (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
              if ( !v107 )
              {
                *((_DWORD *)&v161[1].fields.list + v162++) = 1335;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v163,
                  (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
                v108 = v155;
                v109 = cond;
                v110 = entVals;
                if ( !v162 )
                  goto LABEL_251;
                v111 = v162 - 1;
                if ( *((_DWORD *)&v161[0].fields.current + v162 + 1) != 1335 )
                  goto LABEL_251;
LABEL_250:
                v162 = v111;
                goto LABEL_251;
              }
              v91 = v163.fields.current;
              if ( !v163.fields.current )
                sub_B0D97C(v107);
              v92 = v163.fields.current->klass;
              if ( *(_WORD *)&v163.fields.current->klass->_2.bitflags1 )
              {
                v93 = 0LL;
                v94 = &v92->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v94 - 1) != AiInterface_TypeInfo )
                {
                  ++v93;
                  v94 += 4;
                  if ( v93 >= *(unsigned __int16 *)&v163.fields.current->klass->_2.bitflags1 )
                    goto LABEL_161;
                }
                v95 = (__int64)&v92->vtable[*v94 + 1].method;
              }
              else
              {
LABEL_161:
                v95 = sub_AA67A0(v163.fields.current, AiInterface_TypeInfo, 1LL);
              }
            }
            while ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v95)(
                       v91,
                       v34,
                       wkZero,
                       aiEnt,
                       *(_QWORD *)(v95 + 8)) & 1) == 0 );
            v96 = v91->klass;
            v97 = v34->fields.paramater;
            v98 = v160->fields.Bdata;
            if ( *(_WORD *)&v91->klass->_2.bitflags1 )
            {
              v99 = 0LL;
              v100 = &v96->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v100 - 1) != AiInterface_TypeInfo )
              {
                ++v99;
                v100 += 4;
                if ( v99 >= *(unsigned __int16 *)&v91->klass->_2.bitflags1 )
                  goto LABEL_168;
              }
              v101 = (__int64)&v96->vtable[*v100].method;
            }
            else
            {
LABEL_168:
              v101 = sub_AA67A0(v91, AiInterface_TypeInfo, 0LL);
            }
            v102 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v101)(
                     v91,
                     v98,
                     v97,
                     (unsigned int)turn,
                     (unsigned int)actcnt,
                     v53,
                     aiEnt,
                     *(_QWORD *)(v101 + 8));
            if ( !v102 )
              sub_B0D97C(0LL);
            v103 = *(_QWORD *)(v102 + 24);
            if ( !v103 )
              break;
            if ( !v90 )
              sub_B0D97C(v102);
            if ( *(_QWORD *)&v90->fields._aiType )
              break;
LABEL_182:
            v90 = (AiLogic_o *)v102;
          }
          if ( (int)v103 >= 1 )
          {
            v104 = 4LL;
            while ( 1 )
            {
              if ( !v90 )
                sub_B0D97C(v102);
              v105 = (unsigned int)v90->fields._aiType;
              if ( v104 - 4 < (int)v105 )
              {
                if ( v104 - 4 >= v105 )
                {
                  v151 = sub_B0D9A8(v102);
                  sub_B0D948(v151, 0LL);
                }
                if ( *(double *)(v102 + 8 * v104) < *((double *)&v90->klass + v104) )
                  goto LABEL_182;
              }
              v106 = v104 - 3;
              ++v104;
              if ( v106 >= (int)v103 )
                goto LABEL_183;
            }
          }
        }
      }
      this = (AiLogic_o *)sub_B0D8BC(double___TypeInfo, 1LL);
      if ( !v35 )
        goto LABEL_262;
      v90 = this;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v161,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v35,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v163 = v161[0];
      while ( 1 )
      {
        v127 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v163,
                 (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v127 )
          break;
        v112 = v163.fields.current;
        if ( !v163.fields.current )
          sub_B0D97C(v127);
        v113 = v163.fields.current->klass;
        if ( *(_WORD *)&v163.fields.current->klass->_2.bitflags1 )
        {
          v114 = 0LL;
          v115 = &v113->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v115 - 1) != AiInterface_TypeInfo )
          {
            ++v114;
            v115 += 4;
            if ( v114 >= *(unsigned __int16 *)&v163.fields.current->klass->_2.bitflags1 )
              goto LABEL_195;
          }
          v116 = (__int64)&v113->vtable[*v115 + 1].method;
        }
        else
        {
LABEL_195:
          v116 = sub_AA67A0(v163.fields.current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v116)(
                v112,
                v34,
                wkZero,
                aiEnt,
                *(_QWORD *)(v116 + 8)) & 1) != 0 )
        {
          v117 = v112->klass;
          v118 = v34->fields.paramater;
          v119 = v160->fields.Bdata;
          if ( *(_WORD *)&v112->klass->_2.bitflags1 )
          {
            v120 = 0LL;
            v121 = &v117->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v121 - 1) != AiInterface_TypeInfo )
            {
              ++v120;
              v121 += 4;
              if ( v120 >= *(unsigned __int16 *)&v112->klass->_2.bitflags1 )
                goto LABEL_202;
            }
            v122 = (__int64)&v117->vtable[*v121].method;
          }
          else
          {
LABEL_202:
            v122 = sub_AA67A0(v112, AiInterface_TypeInfo, 0LL);
          }
          v123 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v122)(
                   v112,
                   v119,
                   v118,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v53,
                   aiEnt,
                   *(_QWORD *)(v122 + 8));
          if ( !v123 )
            sub_B0D97C(0LL);
          if ( (int)*(_QWORD *)(v123 + 24) >= 1 )
          {
            v124 = 0LL;
            v125 = *(_QWORD *)(v123 + 24);
            do
            {
              if ( v124 >= v125 )
              {
                v148 = sub_B0D9A8(v123);
                sub_B0D948(v148, 0LL);
              }
              if ( !v90 )
                sub_B0D97C(v123);
              if ( !v90->fields._aiType )
              {
                v149 = sub_B0D9A8(v123);
                sub_B0D948(v149, 0LL);
              }
              v126 = *(double *)(v123 + 32 + 8 * v124++);
              *(double *)&v90->fields._thinkList = v126 + *(double *)&v90->fields._thinkList;
              v125 = *(_DWORD *)(v123 + 24);
            }
            while ( (__int64)v124 < (int)v125 );
          }
        }
      }
      *((_DWORD *)&v161[1].fields.list + v162++) = 1694;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v163,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      v108 = v155;
      v109 = cond;
      v110 = entVals;
      if ( v162 && *((_DWORD *)&v161[0].fields.current + v162 + 1) == 1694 )
        --v162;
LABEL_253:
      this = (AiLogic_o *)func;
      if ( !func )
        goto LABEL_262;
      LOBYTE(v59) = ConditionsInformation_ISCheckFunction__Invoke(func, (System_Double_array *)v90, v110, 0LL);
LABEL_255:
      v146 = (v109 < 0) ^ v59;
      if ( (v146 & 1) != 0 && !AiLogic_AiInfo__CheckAiCanActionFromTargets(v108, aiEnt, 0LL) )
LABEL_257:
        v146 = 0;
      return v146 & 1;
    case 9:
      v44 = v160;
      v46 = 1;
      v45 = (System_Collections_Generic_List_AiInterface__o *)v35;
      goto LABEL_60;
    case 0xA:
      v46 = 1;
      v39 = 1;
      goto LABEL_57;
    case 0xB:
      v46 = 1;
      v39 = 2;
LABEL_57:
      v44 = v160;
      v45 = (System_Collections_Generic_List_AiInterface__o *)v35;
      goto LABEL_58;
    case 0xC:
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v35 )
        goto LABEL_262;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v160->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
      v41 = (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
      v42 = (System_Collections_Generic_IEnumerable_T__o *)FieldEnemyServantList;
      goto LABEL_83;
    case 0xD:
      v44 = v160;
      v45 = (System_Collections_Generic_List_AiInterface__o *)v35;
      v46 = 0;
LABEL_60:
      v48 = aiInfo;
      v39 = 0;
      goto LABEL_61;
    case 0xE:
      v39 = 1;
      goto LABEL_51;
    case 0xF:
      v39 = 2;
LABEL_51:
      v44 = v160;
      v45 = (System_Collections_Generic_List_AiInterface__o *)v35;
      v46 = 0;
LABEL_58:
      v48 = aiInfo;
LABEL_61:
      AiLogic__getTargetPosServant(v44, v45, v46, v48, v39, v37);
      goto LABEL_84;
    default:
      goto LABEL_84;
  }
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *__fastcall AiLogic__getAction(
        AiLogic_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        int32_t turnCount,
        int32_t actCount,
        BattleLogicBaseAi_o *logicAi,
        AiLogic_AiInfo_o **info,
        int32_t timingPriority,
        const MethodInfo *method)
{
  AiLogic_o *v15; // x23
  __int64 v16; // x1
  int32_t uniqueId; // w26
  AiState_o *v18; // x25
  __int64 v19; // x1
  __int64 v20; // x2
  AiLogic_AiInfo_o *v21; // x27
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t v28; // w4
  const MethodInfo *v29; // x6
  AiEntity_o *result; // x0
  __int64 v31; // x10

  v15 = this;
  if ( (byte_4212969 & 1) == 0 )
  {
    sub_B0D8A4(&AiEntity_TypeInfo, svtData);
    this = (AiLogic_o *)sub_B0D8A4(&AiLogic_AiInfo_TypeInfo, v16);
    byte_4212969 = 1;
  }
  if ( !svtData )
    sub_B0D97C(this);
  uniqueId = svtData->fields.uniqueId;
  v18 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v21 = (AiLogic_AiInfo_o *)sub_B0D974(AiLogic_AiInfo_TypeInfo, v19, v20);
  AiLogic_AiInfo___ctor(v21, 1, uniqueId, v18, logicAi, procState, 0LL);
  *info = v21;
  sub_B0D840((BattleServantConfConponent_o *)info, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v28, timingPriority, v29);
  if ( result )
  {
    v31 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v31 )
    {
      if ( (AiEntity_c *)result->klass->_2.typeHierarchy[v31 - 1] != AiEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
AiBaseEntity_o *__fastcall AiLogic__getActionBase(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        int32_t turnCount,
        int32_t actCount,
        int32_t timingPriority,
        const MethodInfo *method)
{
  AiLogic_o *v11; // x19
  __int64 v12; // x1
  struct AiState_o *aiState; // x20
  const MethodInfo *v14; // x6
  unsigned int i; // w28
  AiBaseEntity_o *BasicAct; // x21
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *Bdata; // x26
  const MethodInfo *v19; // x3
  struct BattleData_o *v20; // x8
  UnityEngine_Object_o *v21; // x22
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  struct BattleData_o *v24; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v26; // x8
  struct BattleData_o *v27; // x8
  struct BattleData_o *v28; // x8

  v11 = this;
  if ( (byte_421296B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, aiInfo);
    this = (AiLogic_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_421296B = 1;
  }
  if ( !aiInfo )
    goto LABEL_37;
  aiState = aiInfo->fields.aiState;
  if ( procState == 1 )
  {
    if ( !aiState )
      goto LABEL_37;
    ++aiState->fields.actCount;
  }
  AiLogic__updateThinkGroup(v11, aiInfo, aiState, *(const MethodInfo **)&turnCount);
  if ( !aiState )
    goto LABEL_37;
  for ( i = 1; i < 0xB; ++i )
  {
    BasicAct = AiLogic__getBasicAct(
                 v11,
                 aiInfo,
                 procState,
                 turnCount - aiState->fields.baseTurn,
                 aiState->fields.actCount,
                 timingPriority,
                 v14);
    if ( !BasicAct )
      return BasicAct;
    this = (AiLogic_o *)v11->fields.aiActMst;
    if ( !this )
      goto LABEL_37;
    this = (AiLogic_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          BasicAct->fields.aiActId,
                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    if ( HIDWORD(this->fields.Bdata) != 99 )
      break;
    aiState->fields.aiGroupId = AiBaseEntity__getIndexAval(BasicAct, 0, v17);
    aiState->fields.actCount = 0;
    Bdata = (UnityEngine_Object_o *)v11->fields.Bdata;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (AiLogic_o *)UnityEngine_Object__op_Inequality(Bdata, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v20 = v11->fields.Bdata;
      if ( !v20 )
        goto LABEL_37;
      this = (AiLogic_o *)v20->fields.battleEvent;
      if ( !this )
        goto LABEL_37;
      ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
        this,
        aiState,
        BasicAct,
        this->klass[2]._1.image);
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v19);
  }
  v21 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, v22);
    if ( (_DWORD)this )
    {
      v24 = v11->fields.Bdata;
      if ( !v24 )
        goto LABEL_37;
      playerNpCount = v24->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, v23);
      v24->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v26 = v11->fields.Bdata;
      if ( !v26 )
        goto LABEL_37;
      if ( (v26->fields.playerNpCount & 0x80000000) != 0 )
        v26->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, v23);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v27 = v11->fields.Bdata;
      if ( !v27 )
        goto LABEL_37;
      v27->fields.playerNpCount = 0;
    }
    v28 = v11->fields.Bdata;
    if ( v28 )
    {
      this = (AiLogic_o *)v28->fields.battleEvent;
      if ( this )
      {
        ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
          this,
          aiState,
          BasicAct,
          this->klass[2]._1.image);
        return BasicAct;
      }
    }
LABEL_37:
    sub_B0D97C(this);
  }
  return BasicAct;
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiLogic__getAction_20901496(
        AiLogic_o *this,
        BattleFieldData_o *fieldData,
        int32_t procState,
        int32_t turnCount,
        int32_t actCount,
        BattleLogicBaseAi_o *logicAi,
        int32_t timingPriority,
        const MethodInfo *method)
{
  AiLogic_o *v13; // x23
  __int64 v14; // x1
  int32_t index; // w25
  AiState_o *aiState; // x24
  AiLogic_AiInfo_o *v17; // x26
  int32_t v18; // w4
  const MethodInfo *v19; // x6
  AiFieldEntity_o *result; // x0
  __int64 v21; // x10

  v13 = this;
  if ( (byte_421296A & 1) == 0 )
  {
    sub_B0D8A4(&AiFieldEntity_TypeInfo, fieldData);
    this = (AiLogic_o *)sub_B0D8A4(&AiLogic_AiInfo_TypeInfo, v14);
    byte_421296A = 1;
  }
  if ( !fieldData )
    sub_B0D97C(this);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v17 = (AiLogic_AiInfo_o *)sub_B0D974(AiLogic_AiInfo_TypeInfo, fieldData, *(_QWORD *)&procState);
  AiLogic_AiInfo___ctor(v17, 2, index, aiState, logicAi, procState, 0LL);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(v13, v17, procState, turnCount, v18, timingPriority, v19);
  if ( result )
  {
    v21 = *(&AiFieldEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v21 )
    {
      if ( (AiFieldEntity_c *)result->klass->_2.typeHierarchy[v21 - 1] != AiFieldEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
AiBaseEntity_o *__fastcall AiLogic__getBasicAct(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        int32_t turn,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  AiLogic___c__DisplayClass16_0_o *v36; // x22
  void *All; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v44; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v47; // x23
  AiLogic___c_c *v48; // x8
  struct AiLogic___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_1; // x24
  Il2CppObject *v51; // x25
  struct AiLogic___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  AiLogic___c__DisplayClass16_1_o *v61; // x24
  __int64 v62; // x1
  __int64 v63; // x2
  TitleInfoControl_EventEndTimeInfo_o *v64; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v65; // x25
  __int64 v66; // x1
  __int64 v67; // x2
  const MethodInfo *v68; // x5
  int v69; // w8
  char *v70; // x24
  WeightRate_int__o *v71; // x25
  const MethodInfo *v72; // x5
  __int64 v73; // x8
  unsigned __int64 v74; // x26
  char *v75; // x27
  __int64 v76; // x1
  int32_t Next; // w0
  const MethodInfo *v78; // x5
  AiBaseEntity_o *v79; // x24
  __int64 v81; // x0

  if ( (byte_421296C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_AiBaseEntity___ctor__, aiInfo);
    sub_B0D8A4(&System_Comparison_AiBaseEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v21);
    sub_B0D8A4(&Method_System_Predicate_AiBaseEntity___ctor__, v22);
    sub_B0D8A4(&System_Predicate_AiBaseEntity__TypeInfo, v23);
    sub_B0D8A4(&Method_AiLogic___c__getBasicAct_b__16_1__, v24);
    sub_B0D8A4(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v25);
    sub_B0D8A4(&AiLogic___c__DisplayClass16_0_TypeInfo, v26);
    sub_B0D8A4(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v27);
    sub_B0D8A4(&AiLogic___c__DisplayClass16_1_TypeInfo, v28);
    sub_B0D8A4(&AiLogic___c_TypeInfo, v29);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v30);
    sub_B0D8A4(&Method_WeightRate_int__getCount__, v31);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v32);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v33);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v34);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v35);
    byte_421296C = 1;
  }
  v36 = (AiLogic___c__DisplayClass16_0_o *)sub_B0D974(
                                             AiLogic___c__DisplayClass16_0_TypeInfo,
                                             aiInfo,
                                             *(_QWORD *)&procState);
  AiLogic___c__DisplayClass16_0___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_44;
  v36->fields.procState = procState;
  v36->fields.actcnt = actcnt;
  v36->fields.timingPriority = timingPriority;
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = this->fields._thinkList;
  v44 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_AiBaseEntity__TypeInfo,
                                                                   v42,
                                                                   v43);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v44,
    (Il2CppObject *)v36,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_AiBaseEntity___ctor__);
  if ( !thinkList )
    goto LABEL_44;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
          (System_Predicate_T__o *)v44,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v47 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)All;
  v48 = AiLogic___c_TypeInfo;
  if ( (BYTE3(AiLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v48 = AiLogic___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = AiLogic___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_AiBaseEntity__TypeInfo,
                                                                           v45,
                                                                           v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_1,
      v51,
      Method_AiLogic___c__getBasicAct_b__16_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_AiBaseEntity___ctor__);
    v52 = AiLogic___c_TypeInfo->static_fields;
    v52->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v52->__9__16_1,
      (System_Int32_array **)_9__16_1,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !v47 )
LABEL_44:
    sub_B0D97C(All);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v47,
    (System_Comparison_T__o *)_9__16_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v47->fields._size >= 1 )
  {
    while ( 1 )
    {
      v61 = (AiLogic___c__DisplayClass16_1_o *)sub_B0D974(AiLogic___c__DisplayClass16_1_TypeInfo, v59, v60);
      AiLogic___c__DisplayClass16_1___ctor(v61, 0LL);
      if ( v47->fields._size < 1 )
        return 0LL;
      v64 = v47->fields._items->m_Items[0];
      if ( !v64 )
        goto LABEL_44;
      if ( !v61 )
        goto LABEL_44;
      v61->fields.priority = HIDWORD(v64->fields.end_time);
      v65 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_AiBaseEntity__TypeInfo,
                                                                       v62,
                                                                       v63);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v65,
        (Il2CppObject *)v61,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_AiBaseEntity___ctor__);
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v47,
              (System_Predicate_T__o *)v65,
              (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_44;
      All = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_44;
      v69 = *((_DWORD *)All + 6);
      v70 = (char *)All;
      if ( v69 <= 1 )
        break;
      v71 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v66, v67);
      WeightRate_int____ctor(v71, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
      v73 = *((_QWORD *)v70 + 3);
      if ( (int)v73 >= 1 )
      {
        v74 = 0LL;
        v75 = v70 + 32;
        while ( v74 < (unsigned int)v73 )
        {
          All = (void *)AiLogic__checkThinking_20903112(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v75[8 * v74],
                          turn,
                          v36->fields.actcnt,
                          v72);
          if ( v74 >= *((unsigned int *)v70 + 6) )
            break;
          v76 = *(_QWORD *)&v75[8 * v74];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v76 || !v71 )
              goto LABEL_44;
            WeightRate_int___setWeight(
              v71,
              *(_DWORD *)(v76 + 32),
              v74,
              (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v47,
                            (WarBoardManager_TaskList_o *)v76,
                            (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v73) = *((_DWORD *)v70 + 6);
          if ( (__int64)++v74 >= (int)v73 )
            goto LABEL_31;
        }
LABEL_43:
        v81 = sub_B0D9A8(All);
        sub_B0D948(v81, 0LL);
      }
LABEL_31:
      if ( !v71 )
        goto LABEL_44;
      if ( WeightRate_int___getCount(v71, (const MethodInfo_2ADE5E0 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v71->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v71, Next, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v70 + 6) )
          goto LABEL_43;
        v79 = *(AiBaseEntity_o **)&v70[8 * (int)All + 32];
        if ( AiLogic__checkThinking_20903112(this, aiInfo, v79, turn, v36->fields.actcnt, v78) )
          return v79;
        goto LABEL_39;
      }
LABEL_40:
      if ( v47->fields._size <= 0 )
        return 0LL;
    }
    if ( !v69 )
      goto LABEL_43;
    All = (void *)AiLogic__checkThinking_20903112(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    v36->fields.actcnt,
                    v68);
    if ( !*((_DWORD *)v70 + 6) )
      goto LABEL_43;
    v79 = (AiBaseEntity_o *)*((_QWORD *)v70 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v79;
LABEL_39:
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v47,
      (WarBoardManager_TaskList_o *)v79,
      (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    goto LABEL_40;
  }
  return 0LL;
}


void __fastcall AiLogic__getTargetPosServant(
        AiLogic_o *this,
        System_Collections_Generic_List_AiInterface__o *targetList,
        bool isOpponent,
        AiLogic_AiInfo_o *aiInfo,
        int32_t pos,
        const MethodInfo *method)
{
  AiLogic_o *v10; // x21
  AiLogic_o **p_fields; // x21
  AiLogic_o *Bdata; // t1
  char v13; // w8

  v10 = this;
  if ( (byte_421296E & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_AiInterface__Add__, targetList);
    byte_421296E = 1;
  }
  if ( !aiInfo )
    goto LABEL_13;
  if ( aiInfo->fields.aiType == 1 )
  {
    Bdata = (AiLogic_o *)v10->fields.Bdata;
    p_fields = (AiLogic_o **)&v10->fields;
    this = Bdata;
    if ( !Bdata )
      goto LABEL_13;
    v13 = BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL) ^ isOpponent;
  }
  else
  {
    v13 = !isOpponent;
    p_fields = (AiLogic_o **)&v10->fields;
  }
  this = *p_fields;
  if ( !*p_fields )
LABEL_13:
    sub_B0D97C(this);
  this = (AiLogic_o *)BattleData__getServantDataFromIndex((BattleData_o *)this, pos, v13 & 1, 0LL);
  if ( this )
  {
    if ( targetList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)targetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AiInterface__Add__);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall AiLogic__updateThinkGroup(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiState_o *aiState,
        const MethodInfo *method)
{
  AiLogic_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x10
  BattleServantConfConponent_o *p_thinkList; // x19
  int32_t aiType; // w8
  AiBaseEntity_o *v13; // x10
  _BOOL4 v14; // w10
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  v6 = this;
  if ( (byte_4212965 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___67872560, aiInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v8);
    this = (AiLogic_o *)sub_B0D8A4(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v9);
    byte_4212965 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  p_thinkList = (BattleServantConfConponent_o *)&v6->fields._thinkList;
  thinkList = v6->fields._thinkList;
  aiType = aiInfo->fields.aiType;
  if ( thinkList && thinkList->fields._size )
  {
    v13 = thinkList->fields._items->m_Items[0];
    if ( !v13 || !aiState )
      goto LABEL_19;
    v14 = v13->fields.id != aiState->fields.aiGroupId;
  }
  else
  {
    v14 = 1;
  }
  if ( v14 || v6->fields._aiType != aiType )
  {
    v6->fields._aiType = aiType;
    if ( aiType == 2 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiFieldMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           (const MethodInfo *)aiInfo);
        goto LABEL_18;
      }
LABEL_19:
      sub_B0D97C(this);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           (const MethodInfo *)aiInfo);
LABEL_18:
        v18 = ListFormGroupId;
        v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                                                v16,
                                                                                v17);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v19,
          v18,
          (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___67872560);
        p_thinkList->klass = (BattleServantConfConponent_c *)v19;
        sub_B0D840(p_thinkList, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
        return;
      }
      goto LABEL_19;
    }
  }
}


void __fastcall AiLogic_AiInfo___ctor(
        AiLogic_AiInfo_o *this,
        int32_t inAiType,
        int32_t inUniqueId,
        AiState_o *inAiSate,
        BattleLogicBaseAi_o *inLogicAi,
        int32_t inProcState,
        const MethodInfo *method)
{
  AiLogic_AiInfo_o *v12; // x24
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.aiType = inAiType;
  v12->fields.uniqueId = inUniqueId;
  v12->fields.aiState = inAiSate;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->fields.aiState,
    (System_Int32_array **)inAiSate,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_B0D840((BattleServantConfConponent_o *)v12, (System_Int32_array **)inLogicAi, v19, v20, v21, v22, v23, v24);
  LODWORD(v12->monitor) = inProcState;
}


bool __fastcall AiLogic_AiInfo__CheckAiCanActionFromTargets(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  struct BattleLogicBaseAi_o *logicAi; // x0

  logicAi = this->fields.logicAi;
  if ( logicAi )
    return ((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, void *))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method)(
             logicAi,
             this,
             aiBaseEntity,
             logicAi->klass[1]._1.image);
  else
    return 1;
}


void __fastcall AiLogic_AiInfo__GetCheckedResult(
        AiLogic_AiInfo_o *this,
        BattleServantData_o *svtData,
        AiBaseEntity_o *aiBaseEntity,
        int32_t *aiActType,
        bool *noMessage,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_Xml_XmlQualifiedName_o *v12; // x23
  void *checkedInfo; // x0
  _DWORD *v14; // x22
  int32_t v15; // w20
  int32_t v16; // w21

  if ( (byte_4213953 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, svtData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__, v11);
    byte_4213953 = 1;
  }
  if ( aiBaseEntity )
  {
    v12 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiBaseEntity_o *, int32_t *, bool *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                             aiBaseEntity,
                                             aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                                             aiBaseEntity,
                                             aiActType,
                                             noMessage,
                                             method);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    {
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)checkedInfo,
              v12,
              (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v12,
                      (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v12,
                      (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v12,
                      (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      v14 = (_DWORD *)*((_QWORD *)checkedInfo + 3);
      if ( !v14 )
        return;
      v16 = v14[4];
      v15 = v14[5];
      checkedInfo = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 392LL))(
                              *((_QWORD *)checkedInfo + 3),
                              *(_QWORD *)(*(_QWORD *)v14 + 400LL));
      if ( !svtData )
LABEL_17:
        sub_B0D97C(checkedInfo);
      BattleServantData__addSkillInfo(svtData, v16, v15, (int32_t)checkedInfo, v14[9], -1LL, -1, 0LL, 0LL);
    }
  }
}


bool __fastcall AiLogic_AiInfo__IsChecked(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // x20
  System_Xml_XmlQualifiedName_o *v7; // x0

  if ( (byte_4213952 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      aiBaseEntity);
    byte_4213952 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                          aiBaseEntity,
                                          aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_B0D97C(v7);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)checkedInfo,
           v7,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void __fastcall AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Xml_XmlQualifiedName_o *klass; // x0
  System_Xml_XmlQualifiedName_o *v20; // x21

  if ( (byte_4213951 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__, aiBaseEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v9);
    byte_4213951 = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (BattleServantConfConponent_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                            System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo,
                                                                                            aiBaseEntity,
                                                                                            inCheckedInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v12,
        (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (BattleServantConfConponent_c *)v12;
      sub_B0D840(p_checkedInfo, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    }
    klass = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                               aiBaseEntity,
                                               aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                                               inCheckedInfo,
                                               method);
    if ( p_checkedInfo->klass )
    {
      v20 = klass;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (System_Xml_XmlQualifiedName_o *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)klass,
          v20,
          (System_Xml_Schema_XmlSchemaObject_o *)inCheckedInfo,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_B0D97C(klass);
  }
}


void __fastcall AiLogic_AiInfo_CheckedInfo___ctor(
        AiLogic_AiInfo_CheckedInfo_o *this,
        int32_t inActType,
        bool inNoMessage,
        BattleSkillInfoData_o *inSkillInfo,
        const MethodInfo *method)
{
  AiLogic_AiInfo_CheckedInfo_o *v8; // x22

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.tempSkillInfo = inSkillInfo;
  v8 = (AiLogic_AiInfo_CheckedInfo_o *)((char *)v8 + 24);
  LODWORD(v8[-1].fields.tempSkillInfo) = inActType;
  BYTE4(v8[-1].fields.tempSkillInfo) = inNoMessage;
  sub_B0D840(v8, inSkillInfo);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213950 & 1) == 0 )
  {
    sub_B0D8A4(&AiLogic___c_TypeInfo, v1);
    byte_4213950 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AiLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall AiLogic___c___ctor(AiLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AiLogic___c___getBasicAct_b__16_1(
        AiLogic___c_o *this,
        AiBaseEntity_o *a,
        AiBaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}


void __fastcall AiLogic___c__DisplayClass12_0___ctor(AiLogic___c__DisplayClass12_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AiLogic___c__DisplayClass12_0___checkThinkingBase_b__0(
        AiLogic___c__DisplayClass12_0_o *this,
        AiBaseEntity_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return ((__int64 (__fastcall *)(AiBaseEntity_o *, _QWORD, _QWORD, _QWORD, void *))s->klass->vtable._6_isTiming.method)(
           s,
           (unsigned int)this->fields.procState,
           0LL,
           (unsigned int)this->fields.timingPriority,
           s->klass[1]._1.image);
}


void __fastcall AiLogic___c__DisplayClass16_0___ctor(AiLogic___c__DisplayClass16_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AiLogic___c__DisplayClass16_0___getBasicAct_b__0(
        AiLogic___c__DisplayClass16_0_o *this,
        AiBaseEntity_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return ((__int64 (__fastcall *)(AiBaseEntity_o *, _QWORD, _QWORD, _QWORD, void *))s->klass->vtable._6_isTiming.method)(
           s,
           (unsigned int)this->fields.procState,
           (unsigned int)this->fields.actcnt,
           (unsigned int)this->fields.timingPriority,
           s->klass[1]._1.image);
}


void __fastcall AiLogic___c__DisplayClass16_1___ctor(AiLogic___c__DisplayClass16_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AiLogic___c__DisplayClass16_1___getBasicAct_b__2(
        AiLogic___c__DisplayClass16_1_o *this,
        AiBaseEntity_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.priority == this->fields.priority;
}