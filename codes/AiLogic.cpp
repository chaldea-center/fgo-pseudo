void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438A48E & 1) == 0 )
  {
    sub_B775C4(&long___TypeInfo);
    byte_438A48E = 1;
  }
  v3 = (struct System_Int64_array *)sub_B775DC(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.wkZero, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438A483 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A483 = 1;
  }
  this->fields.Bdata = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v11);
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B77560(
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
  __int64 v8; // x1
  unsigned int v9; // w8
  _BOOL4 v10; // w0
  __int64 v11; // x0

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
          v9 = partyTargets->m_Items[1];
          return v9 >> 31;
        }
LABEL_20:
        v11 = sub_B776C8(IsNullOrEmpty);
        sub_B77668(v11, 0LL);
      }
LABEL_19:
      sub_B7769C(IsNullOrEmpty, v8);
    }
LABEL_18:
    LOBYTE(v10) = 0;
    return v10;
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
  v9 = opponentTargets->m_Items[1];
  return v9 >> 31;
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
  AiLogic_AiInfo_o *v13; // x25
  const MethodInfo *v14; // x4

  v10 = this;
  if ( (byte_438A485 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B775C4(&AiLogic_AiInfo_TypeInfo);
    byte_438A485 = 1;
  }
  if ( !svtData )
    sub_B7769C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_B77694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v13, 1, uniqueId, v12, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v10, v13, procState, timingPriority, v14);
}


bool __fastcall AiLogic__checkThinkingBase(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  AiLogic___c__DisplayClass12_0_o *v9; // x23
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_438A487 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_B775C4(&Method_System_Predicate_AiBaseEntity___ctor__);
    sub_B775C4(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_B775C4(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__);
    sub_B775C4(&AiLogic___c__DisplayClass12_0_TypeInfo);
    byte_438A487 = 1;
  }
  v9 = (AiLogic___c__DisplayClass12_0_o *)sub_B77694(AiLogic___c__DisplayClass12_0_TypeInfo);
  AiLogic___c__DisplayClass12_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.procState = procState, v9->fields.timingPriority = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v12),
        thinkList = this->fields._thinkList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_AiBaseEntity___ctor__),
        !thinkList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
                (System_Predicate_T__o *)v14,
                (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_B7769C(All, v11);
  }
  return All->fields._size > 0;
}


bool __fastcall AiLogic__checkThinking_23810356(
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
  if ( (byte_438A486 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B775C4(&AiLogic_AiInfo_TypeInfo);
    byte_438A486 = 1;
  }
  if ( !fieldData )
    sub_B7769C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_B77694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v12);
}


bool __fastcall AiLogic__checkThinking_23813068(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  AiLogic_AiInfo_o *v7; // x27
  __int64 v8; // x2
  unsigned __int8 v9; // w23
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  AiLogic_o *v12; // x20
  System_String_o *v13; // x22
  int32_t v14; // w20
  ConditionsInformation_CheckInfo_o *v15; // x0
  ConditionsInformation_CheckInfo_o *v16; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x24
  const MethodInfo *v18; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *Bdata; // x1
  int32_t v20; // w4
  BattleServantData_array *FieldEnemyServantList; // x0
  const MethodInfo_30534E8 *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *v23; // x1
  struct BattleData_o *v24; // x8
  AiLogic_o *v25; // x0
  System_Collections_Generic_List_AiInterface__o *v26; // x1
  bool v27; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v29; // x3
  AiLogic_o *v30; // x22
  System_Int64_array *wkZero; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int64_array *v35; // x21
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Int64_array *v39; // x20
  int32_t refine; // w8
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppClass *v48; // x8
  unsigned int paramater; // w22
  struct BattleData_o *v50; // x23
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  System_Double_array *v54; // x1
  int v55; // w20
  int v56; // w8
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x20
  Il2CppClass *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  Il2CppClass *v64; // x8
  unsigned int v65; // w22
  struct BattleData_o *v66; // x23
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  System_Double_array *v70; // x1
  int v71; // w20
  int32_t v72; // w8
  AiLogic_o *v73; // x20
  Il2CppObject *v74; // x22
  Il2CppClass *v75; // x8
  unsigned __int64 v76; // x10
  int32_t *v77; // x11
  __int64 v78; // x0
  Il2CppClass *v79; // x8
  unsigned int v80; // w23
  struct BattleData_o *v81; // x26
  unsigned __int64 v82; // x10
  int32_t *v83; // x11
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x9
  __int64 v88; // x10
  unsigned __int64 v89; // x11
  __int64 v90; // x11
  _BOOL8 v91; // x0
  __int64 v92; // x1
  unsigned __int8 v93; // w21
  System_Int64_array *v94; // x2
  int v95; // w8
  Il2CppObject *v96; // x22
  Il2CppClass *v97; // x8
  unsigned __int64 v98; // x10
  int32_t *v99; // x11
  __int64 v100; // x0
  Il2CppClass *v101; // x8
  unsigned int v102; // w23
  struct BattleData_o *v103; // x26
  unsigned __int64 v104; // x10
  int32_t *v105; // x11
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  unsigned __int64 v109; // x8
  unsigned int v110; // w10
  double v111; // d0
  _BOOL8 v112; // x0
  __int64 v113; // x1
  Il2CppObject *v114; // x22
  Il2CppClass *v115; // x8
  unsigned __int64 v116; // x10
  int32_t *v117; // x11
  __int64 v118; // x0
  Il2CppClass *v119; // x8
  unsigned int v120; // w24
  struct BattleData_o *v121; // x13
  unsigned __int64 v122; // x10
  int32_t *v123; // x11
  struct BattleData_o *v124; // x27
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  __int64 v128; // x9
  __int64 v129; // x10
  unsigned __int64 aiType; // x11
  __int64 v131; // x11
  _BOOL8 v132; // x0
  __int64 v133; // x1
  char v134; // w20
  __int64 v136; // x0
  __int64 v137; // x0
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x0
  AiLogic_AiInfo_o *v141; // [xsp+0h] [xbp-E0h]
  unsigned int v142; // [xsp+8h] [xbp-D8h]
  unsigned int v143; // [xsp+8h] [xbp-D8h]
  unsigned __int8 v144; // [xsp+14h] [xbp-CCh]
  ConditionsInformation_ISCheckFunction_o *func; // [xsp+18h] [xbp-C8h]
  System_Int64_array *entVals; // [xsp+20h] [xbp-C0h]
  AiLogic_o *v149; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v150[2]; // [xsp+38h] [xbp-A8h] BYREF
  int v151; // [xsp+6Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v152; // [xsp+70h] [xbp-70h] BYREF
  int32_t Cond; // [xsp+8Ch] [xbp-54h] BYREF

  v7 = aiInfo;
  v149 = this;
  if ( (byte_438A48C & 1) == 0 )
  {
    sub_B775C4(&AiInterface_TypeInfo);
    sub_B775C4(&Ai_COND_TypeInfo);
    sub_B775C4(&ConditionsInformation_TypeInfo);
    sub_B775C4(&double___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Skip_long___);
    sub_B775C4(&Method_System_Linq_Enumerable_Take_long___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AiInterface__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiInterface__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiInterface___ctor__);
    sub_B775C4(&System_Collections_Generic_List_AiInterface__TypeInfo);
    sub_B775C4(&StringLiteral_9504/*"NOT_"*/);
    this = (AiLogic_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438A48C = 1;
  }
  Cond = 0;
  memset(&v152, 0, sizeof(v152));
  v151 = 0;
  if ( !aiEnt )
    goto LABEL_264;
  Cond = Ai__getCond(aiEnt->fields.cond, 0LL);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0LL);
  if ( !v7 )
    goto LABEL_264;
  v9 = (unsigned __int8)this;
  v10 = (System_String_o *)StringLiteral_9504/*"NOT_"*/;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  this = (AiLogic_o *)j_il2cpp_value_box_0(Ai_COND_TypeInfo, &Cond, v8);
  if ( !this )
    goto LABEL_264;
  v12 = this;
  if ( (v9 & 1) == 0 )
    v10 = v11;
  v13 = (System_String_o *)((__int64 (__fastcall *)(AiLogic_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  Cond = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
  System_String__Concat_44901936(v10, v13, 0LL);
  v14 = Cond;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  v15 = ConditionsInformation__getCheckFunction(v14, 0LL);
  if ( !v15 )
    goto LABEL_259;
  v16 = v15;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v16->fields.target )
  {
    case 1:
      if ( !v17 )
        goto LABEL_264;
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v149->fields.Bdata;
      goto LABEL_79;
    case 2:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( !this )
        goto LABEL_264;
      uniqueId = v7->fields.uniqueId;
      if ( v7->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
      goto LABEL_79;
    case 3:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      else
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      goto LABEL_82;
    case 4:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      else
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      goto LABEL_82;
    case 5:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( v7->fields.aiType != 1 )
      {
        if ( !this || !v17 )
          goto LABEL_264;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].fields.Bdata;
        goto LABEL_79;
      }
      if ( !this )
        goto LABEL_264;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
      v24 = v149->fields.Bdata;
      if ( !v24 )
        goto LABEL_264;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_48;
      goto LABEL_24;
    case 6:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        v24 = v149->fields.Bdata;
        if ( !v24 )
          goto LABEL_264;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_48:
          if ( !v17 )
            goto LABEL_264;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v24->fields.playerFieldStatus;
        }
        else
        {
LABEL_24:
          if ( !v17 )
            goto LABEL_264;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v24->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v17 )
          goto LABEL_264;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].monitor;
      }
LABEL_79:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        Bdata,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AiInterface__Add__);
      goto LABEL_84;
    case 7:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      else
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      goto LABEL_82;
    case 8:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
      else
      {
        if ( !this )
          goto LABEL_264;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v17 )
          goto LABEL_264;
      }
LABEL_82:
      v23 = (System_Collections_Generic_IEnumerable_T__o *)this;
      v22 = (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
LABEL_83:
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
        v23,
        v22);
LABEL_84:
      v144 = v9;
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, (const MethodInfo *)aiInfo);
      v30 = this;
      wkZero = v149->fields.wkZero;
      if ( v16->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_264;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v32 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_1D3C750 *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v32,
                                (const MethodInfo_1D3D558 *)Method_System_Linq_Enumerable_ToArray_long___);
          v30 = this;
        }
      }
      if ( !v16->fields.isParams )
      {
        if ( v16->fields.isIndiv )
        {
          if ( !v30 )
            goto LABEL_264;
          if ( v30->fields._aiType >= 2 )
          {
            v37 = System_Linq_Enumerable__Skip_long_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                    1,
                    (const MethodInfo_1D3C750 *)Method_System_Linq_Enumerable_Skip_long___);
            v38 = System_Linq_Enumerable__Take_long_(
                    v37,
                    v30->fields._aiType - 1,
                    (const MethodInfo_1D3CAA4 *)Method_System_Linq_Enumerable_Take_long___);
            v39 = System_Linq_Enumerable__ToArray_long_(
                    v38,
                    (const MethodInfo_1D3D558 *)Method_System_Linq_Enumerable_ToArray_long___);
            this = (AiLogic_o *)sub_B775DC(long___TypeInfo, 1LL);
            if ( v30->fields._aiType )
            {
              if ( !this )
                goto LABEL_264;
              if ( this->fields._aiType )
              {
                thinkList = v30->fields._thinkList;
                v35 = wkZero;
                wkZero = v39;
                goto LABEL_103;
              }
            }
LABEL_279:
            v140 = sub_B776C8(this);
            sub_B77668(v140, 0LL);
          }
        }
LABEL_98:
        v35 = wkZero;
        goto LABEL_104;
      }
      if ( !v30 )
        goto LABEL_264;
      if ( v30->fields._aiType < 2 )
        goto LABEL_98;
      v33 = System_Linq_Enumerable__Skip_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v30,
              1,
              (const MethodInfo_1D3C750 *)Method_System_Linq_Enumerable_Skip_long___);
      v34 = System_Linq_Enumerable__Take_long_(
              v33,
              v30->fields._aiType - 1,
              (const MethodInfo_1D3CAA4 *)Method_System_Linq_Enumerable_Take_long___);
      v35 = System_Linq_Enumerable__ToArray_long_(
              v34,
              (const MethodInfo_1D3D558 *)Method_System_Linq_Enumerable_ToArray_long___);
      this = (AiLogic_o *)sub_B775DC(long___TypeInfo, 1LL);
      if ( !v30->fields._aiType )
        goto LABEL_279;
      if ( !this )
        goto LABEL_264;
      if ( !this->fields._aiType )
        goto LABEL_279;
      thinkList = v30->fields._thinkList;
LABEL_103:
      v30 = this;
      this->fields._thinkList = thinkList;
LABEL_104:
      refine = v16->fields.refine;
      func = v16->fields.func;
      entVals = (System_Int64_array *)v30;
      if ( refine )
      {
        this = 0LL;
      }
      else
      {
        if ( !v17 )
          goto LABEL_264;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v150,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v152 = v150[0];
        while ( 1 )
        {
          v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v152,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v41 )
            break;
          current = v152.fields.current;
          if ( !v152.fields.current )
            sub_B7769C(v41, v42);
          klass = v152.fields.current->klass;
          if ( *(_WORD *)&v152.fields.current->klass->_2.bitflags1 )
          {
            v45 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              ++v45;
              p_offset += 4;
              if ( v45 >= *(unsigned __int16 *)&v152.fields.current->klass->_2.bitflags1 )
                goto LABEL_114;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_114:
            p_method = sub_B0F4C0(v152.fields.current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v16,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v48 = current->klass;
            paramater = v16->fields.paramater;
            v50 = v149->fields.Bdata;
            if ( *(_WORD *)&current->klass->_2.bitflags1 )
            {
              v51 = 0LL;
              v52 = &v48->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v52 - 1) != AiInterface_TypeInfo )
              {
                ++v51;
                v52 += 4;
                if ( v51 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
                  goto LABEL_121;
              }
              v53 = (__int64)&v48->vtable[*v52].method;
            }
            else
            {
LABEL_121:
              v53 = sub_B0F4C0(current, AiInterface_TypeInfo, 0LL);
            }
            v54 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v53)(
                                           current,
                                           v50,
                                           paramater,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v35,
                                           aiEnt,
                                           *(_QWORD *)(v53 + 8));
            if ( !func )
              sub_B7769C(0LL, v54);
            if ( ConditionsInformation_ISCheckFunction__Invoke(func, v54, entVals, 0LL) )
            {
              v55 = 1;
              goto LABEL_127;
            }
          }
        }
        v55 = 0;
LABEL_127:
        *((_DWORD *)&v150[1].fields.list + v151++) = 1755;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v152,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        this = (AiLogic_o *)(v55 != 0);
        if ( v151 )
        {
          v56 = v151 - 1;
          if ( *((_DWORD *)&v150[0].fields.current + v151 + 1) == 1755 )
          {
LABEL_154:
            v151 = v56;
LABEL_191:
            v93 = v144;
            goto LABEL_257;
          }
        }
        refine = v16->fields.refine;
      }
      if ( refine == 1 )
      {
        if ( !v17 )
          goto LABEL_264;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v150,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v152 = v150[0];
        while ( 1 )
        {
          v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v152,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v57 )
            break;
          v59 = v152.fields.current;
          if ( !v152.fields.current )
            sub_B7769C(v57, v58);
          v60 = v152.fields.current->klass;
          if ( *(_WORD *)&v152.fields.current->klass->_2.bitflags1 )
          {
            v61 = 0LL;
            v62 = &v60->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v62 - 1) != AiInterface_TypeInfo )
            {
              ++v61;
              v62 += 4;
              if ( v61 >= *(unsigned __int16 *)&v152.fields.current->klass->_2.bitflags1 )
                goto LABEL_139;
            }
            v63 = (__int64)&v60->vtable[*v62 + 1].method;
          }
          else
          {
LABEL_139:
            v63 = sub_B0F4C0(v152.fields.current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v63)(
                  v59,
                  v16,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v63 + 8)) & 1) != 0 )
          {
            v64 = v59->klass;
            v65 = v16->fields.paramater;
            v66 = v149->fields.Bdata;
            if ( *(_WORD *)&v59->klass->_2.bitflags1 )
            {
              v67 = 0LL;
              v68 = &v64->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v68 - 1) != AiInterface_TypeInfo )
              {
                ++v67;
                v68 += 4;
                if ( v67 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
                  goto LABEL_146;
              }
              v69 = (__int64)&v64->vtable[*v68].method;
            }
            else
            {
LABEL_146:
              v69 = sub_B0F4C0(v59, AiInterface_TypeInfo, 0LL);
            }
            v70 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v69)(
                                           v59,
                                           v66,
                                           v65,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v35,
                                           aiEnt,
                                           *(_QWORD *)(v69 + 8));
            if ( !func )
              sub_B7769C(0LL, v70);
            if ( !ConditionsInformation_ISCheckFunction__Invoke(func, v70, entVals, 0LL) )
            {
              v71 = 0;
              goto LABEL_152;
            }
          }
        }
        v71 = 1;
LABEL_152:
        *((_DWORD *)&v150[1].fields.list + v151++) = 1755;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v152,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        LODWORD(this) = v71 != 0;
        if ( v151 )
        {
          v56 = v151 - 1;
          if ( *((_DWORD *)&v150[0].fields.current + v151 + 1) == 1755 )
            goto LABEL_154;
        }
      }
      v72 = v16->fields.refine;
      if ( v72 == 2 )
      {
        v143 = (unsigned int)this;
        this = (AiLogic_o *)sub_B775DC(double___TypeInfo, 0LL);
        if ( v17 )
        {
          v73 = this;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            v150,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
            (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v152 = v150[0];
LABEL_249:
          while ( 1 )
          {
            v132 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v152,
                     (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v132 )
              break;
            v114 = v152.fields.current;
            if ( !v152.fields.current )
              sub_B7769C(v132, v133);
            v115 = v152.fields.current->klass;
            if ( *(_WORD *)&v152.fields.current->klass->_2.bitflags1 )
            {
              v116 = 0LL;
              v117 = &v115->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v117 - 1) != AiInterface_TypeInfo )
              {
                ++v116;
                v117 += 4;
                if ( v116 >= *(unsigned __int16 *)&v152.fields.current->klass->_2.bitflags1 )
                  goto LABEL_226;
              }
              v118 = (__int64)&v115->vtable[*v117 + 1].method;
            }
            else
            {
LABEL_226:
              v118 = sub_B0F4C0(v152.fields.current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v118)(
                    v114,
                    v16,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v118 + 8)) & 1) != 0 )
            {
              v119 = v114->klass;
              v120 = v16->fields.paramater;
              v141 = v7;
              v121 = v149->fields.Bdata;
              if ( *(_WORD *)&v114->klass->_2.bitflags1 )
              {
                v122 = 0LL;
                v123 = &v119->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v123 - 1) != AiInterface_TypeInfo )
                {
                  ++v122;
                  v123 += 4;
                  if ( v122 >= *(unsigned __int16 *)&v114->klass->_2.bitflags1 )
                    goto LABEL_233;
                }
                v125 = (__int64)&v119->vtable[*v123].method;
              }
              else
              {
LABEL_233:
                v124 = v149->fields.Bdata;
                v125 = sub_B0F4C0(v114, AiInterface_TypeInfo, 0LL);
                v121 = v124;
              }
              v126 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v125)(
                       v114,
                       v121,
                       v120,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v35,
                       aiEnt,
                       *(_QWORD *)(v125 + 8));
              if ( !v126 )
                sub_B7769C(0LL, v127);
              v128 = *(_QWORD *)(v126 + 24);
              v7 = v141;
              if ( v128 )
              {
                if ( !v73 )
                  sub_B7769C(v126, v127);
                if ( !*(_QWORD *)&v73->fields._aiType )
                  v73 = (AiLogic_o *)v126;
              }
              if ( (int)v128 >= 1 )
              {
                v129 = 4LL;
                while ( 1 )
                {
                  if ( !v73 )
                    sub_B7769C(v126, v127);
                  aiType = (unsigned int)v73->fields._aiType;
                  if ( v129 - 4 < (int)aiType )
                  {
                    if ( v129 - 4 >= aiType )
                    {
                      v138 = sub_B776C8(v126);
                      sub_B77668(v138, 0LL);
                    }
                    if ( *((double *)&v73->klass + v129) < *(double *)(v126 + 8 * v129) )
                      break;
                  }
                  v131 = v129 - 3;
                  ++v129;
                  if ( v131 >= (int)v128 )
                    goto LABEL_249;
                }
                v73 = (AiLogic_o *)v126;
              }
            }
          }
          *((_DWORD *)&v150[1].fields.list + v151++) = 1572;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v152,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          v93 = v144;
          v94 = entVals;
          this = (AiLogic_o *)v143;
          if ( v151 )
          {
            v95 = v151 - 1;
            if ( *((_DWORD *)&v150[0].fields.current + v151 + 1) == 1572 )
              goto LABEL_252;
          }
LABEL_253:
          if ( v73 )
          {
            if ( !*(_QWORD *)&v73->fields._aiType )
              goto LABEL_257;
            goto LABEL_255;
          }
        }
LABEL_264:
        sub_B7769C(this, aiInfo);
      }
      if ( v72 != 4 )
      {
        if ( v72 != 3 )
          goto LABEL_191;
        v142 = (unsigned int)this;
        this = (AiLogic_o *)sub_B775DC(double___TypeInfo, 0LL);
        if ( !v17 )
          goto LABEL_264;
        v73 = this;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v150,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v152 = v150[0];
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
LABEL_187:
              v91 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v152,
                      (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
              if ( !v91 )
              {
                *((_DWORD *)&v150[1].fields.list + v151++) = 1383;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v152,
                  (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
                v93 = v144;
                v94 = entVals;
                this = (AiLogic_o *)v142;
                if ( !v151 )
                  goto LABEL_253;
                v95 = v151 - 1;
                if ( *((_DWORD *)&v150[0].fields.current + v151 + 1) != 1383 )
                  goto LABEL_253;
LABEL_252:
                v151 = v95;
                goto LABEL_253;
              }
              v74 = v152.fields.current;
              if ( !v152.fields.current )
                sub_B7769C(v91, v92);
              v75 = v152.fields.current->klass;
              if ( *(_WORD *)&v152.fields.current->klass->_2.bitflags1 )
              {
                v76 = 0LL;
                v77 = &v75->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v77 - 1) != AiInterface_TypeInfo )
                {
                  ++v76;
                  v77 += 4;
                  if ( v76 >= *(unsigned __int16 *)&v152.fields.current->klass->_2.bitflags1 )
                    goto LABEL_165;
                }
                v78 = (__int64)&v75->vtable[*v77 + 1].method;
              }
              else
              {
LABEL_165:
                v78 = sub_B0F4C0(v152.fields.current, AiInterface_TypeInfo, 1LL);
              }
            }
            while ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v78)(
                       v74,
                       v16,
                       wkZero,
                       aiEnt,
                       *(_QWORD *)(v78 + 8)) & 1) == 0 );
            v79 = v74->klass;
            v80 = v16->fields.paramater;
            v81 = v149->fields.Bdata;
            if ( *(_WORD *)&v74->klass->_2.bitflags1 )
            {
              v82 = 0LL;
              v83 = &v79->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v83 - 1) != AiInterface_TypeInfo )
              {
                ++v82;
                v83 += 4;
                if ( v82 >= *(unsigned __int16 *)&v74->klass->_2.bitflags1 )
                  goto LABEL_172;
              }
              v84 = (__int64)&v79->vtable[*v83].method;
            }
            else
            {
LABEL_172:
              v84 = sub_B0F4C0(v74, AiInterface_TypeInfo, 0LL);
            }
            v85 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v84)(
                    v74,
                    v81,
                    v80,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v35,
                    aiEnt,
                    *(_QWORD *)(v84 + 8));
            if ( !v85 )
              sub_B7769C(0LL, v86);
            v87 = *(_QWORD *)(v85 + 24);
            if ( !v87 )
              break;
            if ( !v73 )
              sub_B7769C(v85, v86);
            if ( *(_QWORD *)&v73->fields._aiType )
              break;
LABEL_186:
            v73 = (AiLogic_o *)v85;
          }
          if ( (int)v87 >= 1 )
          {
            v88 = 4LL;
            while ( 1 )
            {
              if ( !v73 )
                sub_B7769C(v85, v86);
              v89 = (unsigned int)v73->fields._aiType;
              if ( v88 - 4 < (int)v89 )
              {
                if ( v88 - 4 >= v89 )
                {
                  v139 = sub_B776C8(v85);
                  sub_B77668(v139, 0LL);
                }
                if ( *(double *)(v85 + 8 * v88) < *((double *)&v73->klass + v88) )
                  goto LABEL_186;
              }
              v90 = v88 - 3;
              ++v88;
              if ( v90 >= (int)v87 )
                goto LABEL_187;
            }
          }
        }
      }
      this = (AiLogic_o *)sub_B775DC(double___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_264;
      v73 = this;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v150,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v152 = v150[0];
      while ( 1 )
      {
        v112 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v152,
                 (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v112 )
          break;
        v96 = v152.fields.current;
        if ( !v152.fields.current )
          sub_B7769C(v112, v113);
        v97 = v152.fields.current->klass;
        if ( *(_WORD *)&v152.fields.current->klass->_2.bitflags1 )
        {
          v98 = 0LL;
          v99 = &v97->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v99 - 1) != AiInterface_TypeInfo )
          {
            ++v98;
            v99 += 4;
            if ( v98 >= *(unsigned __int16 *)&v152.fields.current->klass->_2.bitflags1 )
              goto LABEL_199;
          }
          v100 = (__int64)&v97->vtable[*v99 + 1].method;
        }
        else
        {
LABEL_199:
          v100 = sub_B0F4C0(v152.fields.current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v100)(
                v96,
                v16,
                wkZero,
                aiEnt,
                *(_QWORD *)(v100 + 8)) & 1) != 0 )
        {
          v101 = v96->klass;
          v102 = v16->fields.paramater;
          v103 = v149->fields.Bdata;
          if ( *(_WORD *)&v96->klass->_2.bitflags1 )
          {
            v104 = 0LL;
            v105 = &v101->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v105 - 1) != AiInterface_TypeInfo )
            {
              ++v104;
              v105 += 4;
              if ( v104 >= *(unsigned __int16 *)&v96->klass->_2.bitflags1 )
                goto LABEL_206;
            }
            v106 = (__int64)&v101->vtable[*v105].method;
          }
          else
          {
LABEL_206:
            v106 = sub_B0F4C0(v96, AiInterface_TypeInfo, 0LL);
          }
          v107 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v106)(
                   v96,
                   v103,
                   v102,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v35,
                   aiEnt,
                   *(_QWORD *)(v106 + 8));
          if ( !v107 )
            sub_B7769C(0LL, v108);
          if ( (int)*(_QWORD *)(v107 + 24) >= 1 )
          {
            v109 = 0LL;
            v110 = *(_QWORD *)(v107 + 24);
            do
            {
              if ( v109 >= v110 )
              {
                v137 = sub_B776C8(v107);
                sub_B77668(v137, 0LL);
              }
              if ( !v73 )
                sub_B7769C(v107, v108);
              if ( !v73->fields._aiType )
              {
                v136 = sub_B776C8(v107);
                sub_B77668(v136, 0LL);
              }
              v111 = *(double *)(v107 + 32 + 8 * v109++);
              *(double *)&v73->fields._thinkList = v111 + *(double *)&v73->fields._thinkList;
              v110 = *(_DWORD *)(v107 + 24);
            }
            while ( (__int64)v109 < (int)v110 );
          }
        }
      }
      *((_DWORD *)&v150[1].fields.list + v151++) = 1742;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v152,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      v93 = v144;
      v94 = entVals;
      if ( v151 && *((_DWORD *)&v150[0].fields.current + v151 + 1) == 1742 )
        --v151;
LABEL_255:
      this = (AiLogic_o *)func;
      if ( !func )
        goto LABEL_264;
      LOBYTE(this) = ConditionsInformation_ISCheckFunction__Invoke(func, (System_Double_array *)v73, v94, 0LL);
LABEL_257:
      v134 = v93 ^ (unsigned __int8)this;
      if ( ((v93 ^ (unsigned __int8)this) & 1) != 0 && !AiLogic_AiInfo__CheckAiCanActionFromTargets(v7, aiEnt, 0LL) )
LABEL_259:
        v134 = 0;
      return v134 & 1;
    case 9:
      v25 = v149;
      v27 = 1;
      v26 = (System_Collections_Generic_List_AiInterface__o *)v17;
      goto LABEL_60;
    case 0xA:
      v27 = 1;
      v20 = 1;
      goto LABEL_57;
    case 0xB:
      v27 = 1;
      v20 = 2;
LABEL_57:
      v25 = v149;
      v26 = (System_Collections_Generic_List_AiInterface__o *)v17;
      goto LABEL_58;
    case 0xC:
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( !this )
        goto LABEL_264;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v17 )
        goto LABEL_264;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v149->fields.Bdata;
      if ( !this )
        goto LABEL_264;
      FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
      v22 = (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
      v23 = (System_Collections_Generic_IEnumerable_T__o *)FieldEnemyServantList;
      goto LABEL_83;
    case 0xD:
      v25 = v149;
      v26 = (System_Collections_Generic_List_AiInterface__o *)v17;
      v27 = 0;
LABEL_60:
      v29 = v7;
      v20 = 0;
      goto LABEL_61;
    case 0xE:
      v20 = 1;
      goto LABEL_51;
    case 0xF:
      v20 = 2;
LABEL_51:
      v25 = v149;
      v26 = (System_Collections_Generic_List_AiInterface__o *)v17;
      v27 = 0;
LABEL_58:
      v29 = v7;
LABEL_61:
      AiLogic__getTargetPosServant(v25, v26, v27, v29, v20, v18);
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
  int32_t uniqueId; // w26
  AiState_o *v17; // x25
  AiLogic_AiInfo_o *v18; // x27
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w4
  const MethodInfo *v26; // x6
  AiEntity_o *result; // x0
  __int64 v28; // x10

  v15 = this;
  if ( (byte_438A488 & 1) == 0 )
  {
    sub_B775C4(&AiEntity_TypeInfo);
    this = (AiLogic_o *)sub_B775C4(&AiLogic_AiInfo_TypeInfo);
    byte_438A488 = 1;
  }
  if ( !svtData )
    sub_B7769C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v17 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v18 = (AiLogic_AiInfo_o *)sub_B77694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v18, 1, uniqueId, v17, logicAi, procState, 0LL);
  *info = v18;
  sub_B77560((BattleServantConfConponent_o *)info, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v25, timingPriority, v26);
  if ( result )
  {
    v28 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v28 )
    {
      if ( (AiEntity_c *)result->klass->_2.typeHierarchy[v28 - 1] != AiEntity_TypeInfo )
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
  struct AiState_o *aiState; // x20
  const MethodInfo *v13; // x6
  unsigned int i; // w28
  AiBaseEntity_o *BasicAct; // x21
  AiLogic_o *v16; // x26
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *Bdata; // x26
  struct BattleData_o *v20; // x8
  UnityEngine_Object_o *v21; // x22
  const MethodInfo *v22; // x1
  struct BattleData_o *v23; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v25; // x8
  struct BattleData_o *v26; // x8
  struct BattleData_o *v27; // x8

  v11 = this;
  if ( (byte_438A48A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    this = (AiLogic_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A48A = 1;
  }
  if ( !aiInfo )
    goto LABEL_38;
  aiState = aiInfo->fields.aiState;
  if ( procState == 1 )
  {
    if ( !aiState )
      goto LABEL_38;
    ++aiState->fields.actCount;
  }
  AiLogic__updateThinkGroup(v11, aiInfo, aiState, *(const MethodInfo **)&turnCount);
  if ( !aiState )
    goto LABEL_38;
  for ( i = 1; i < 0xB; ++i )
  {
    BasicAct = AiLogic__getBasicAct(
                 v11,
                 aiInfo,
                 procState,
                 turnCount - aiState->fields.baseTurn,
                 aiState->fields.actCount,
                 timingPriority,
                 v13);
    if ( !BasicAct )
      return BasicAct;
    this = (AiLogic_o *)v11->fields.aiActMst;
    if ( !this )
      goto LABEL_38;
    this = (AiLogic_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          BasicAct->fields.aiActId,
                          (const MethodInfo_21FB894 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_38;
    v16 = this;
    if ( AiAct__isThinkEnd(HIDWORD(this->fields.Bdata), 0LL) )
      break;
    if ( HIDWORD(v16->fields.Bdata) == 99 )
    {
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
          goto LABEL_38;
        this = (AiLogic_o *)v20->fields.battleEvent;
        if ( !this )
          goto LABEL_38;
        ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
          this,
          aiState,
          BasicAct,
          this->klass[2]._1.image);
      }
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v18);
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
      v23 = v11->fields.Bdata;
      if ( !v23 )
        goto LABEL_38;
      playerNpCount = v23->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
      v23->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v25 = v11->fields.Bdata;
      if ( !v25 )
        goto LABEL_38;
      if ( (v25->fields.playerNpCount & 0x80000000) != 0 )
        v25->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v26 = v11->fields.Bdata;
      if ( !v26 )
        goto LABEL_38;
      v26->fields.playerNpCount = 0;
    }
    v27 = v11->fields.Bdata;
    if ( v27 )
    {
      this = (AiLogic_o *)v27->fields.battleEvent;
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
LABEL_38:
    sub_B7769C(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *__fastcall AiLogic__getAction_23811452(
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
  int32_t index; // w25
  AiState_o *aiState; // x24
  AiLogic_AiInfo_o *v16; // x26
  int32_t v17; // w4
  const MethodInfo *v18; // x6
  AiFieldEntity_o *result; // x0
  __int64 v20; // x10

  v13 = this;
  if ( (byte_438A489 & 1) == 0 )
  {
    sub_B775C4(&AiFieldEntity_TypeInfo);
    this = (AiLogic_o *)sub_B775C4(&AiLogic_AiInfo_TypeInfo);
    byte_438A489 = 1;
  }
  if ( !fieldData )
    sub_B7769C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v16 = (AiLogic_AiInfo_o *)sub_B77694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v16, 2, index, aiState, logicAi, procState, 0LL);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(v13, v16, procState, turnCount, v17, timingPriority, v18);
  if ( result )
  {
    v20 = *(&AiFieldEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v20 )
    {
      if ( (AiFieldEntity_c *)result->klass->_2.typeHierarchy[v20 - 1] != AiFieldEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


AiBaseEntity_o *__fastcall AiLogic__getBasicAct(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        int32_t turn,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  AiLogic___c__DisplayClass16_0_o *v13; // x22
  void *All; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v19; // x23
  AiLogic___c_c *v20; // x8
  struct AiLogic___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_1; // x24
  Il2CppObject *v23; // x25
  struct AiLogic___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  AiLogic___c__DisplayClass16_1_o *v31; // x24
  TitleInfoControl_EventEndTimeInfo_o *v32; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x25
  const MethodInfo *v34; // x5
  int v35; // w8
  char *v36; // x24
  WeightRate_int__o *v37; // x25
  const MethodInfo *v38; // x5
  __int64 v39; // x8
  unsigned __int64 v40; // x26
  char *v41; // x27
  int32_t Next; // w0
  const MethodInfo *v43; // x5
  AiBaseEntity_o *v44; // x24
  __int64 v46; // x0

  if ( (byte_438A48B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_AiBaseEntity___ctor__);
    sub_B775C4(&System_Comparison_AiBaseEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    sub_B775C4(&Method_System_Predicate_AiBaseEntity___ctor__);
    sub_B775C4(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_B775C4(&Method_AiLogic___c__getBasicAct_b__16_1__);
    sub_B775C4(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__);
    sub_B775C4(&AiLogic___c__DisplayClass16_0_TypeInfo);
    sub_B775C4(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__);
    sub_B775C4(&AiLogic___c__DisplayClass16_1_TypeInfo);
    sub_B775C4(&AiLogic___c_TypeInfo);
    sub_B775C4(&Method_WeightRate_int___ctor__);
    sub_B775C4(&Method_WeightRate_int__getCount__);
    sub_B775C4(&Method_WeightRate_int__getData__);
    sub_B775C4(&Method_WeightRate_int__getTotalWeight__);
    sub_B775C4(&Method_WeightRate_int__setWeight__);
    sub_B775C4(&WeightRate_int__TypeInfo);
    byte_438A48B = 1;
  }
  v13 = (AiLogic___c__DisplayClass16_0_o *)sub_B77694(AiLogic___c__DisplayClass16_0_TypeInfo);
  AiLogic___c__DisplayClass16_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_44;
  v13->fields.procState = procState;
  v13->fields.actcnt = actcnt;
  v13->fields.timingPriority = timingPriority;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = this->fields._thinkList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_AiBaseEntity___ctor__);
  if ( !thinkList )
    goto LABEL_44;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v19 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)All;
  v20 = AiLogic___c_TypeInfo;
  if ( (BYTE3(AiLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v20 = AiLogic___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = AiLogic___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_1,
      v23,
      Method_AiLogic___c__getBasicAct_b__16_1__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_AiBaseEntity___ctor__);
    v24 = AiLogic___c_TypeInfo->static_fields;
    v24->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v24->__9__16_1,
      (System_Int32_array **)_9__16_1,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v19 )
LABEL_44:
    sub_B7769C(All, v15);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v19,
    (System_Comparison_T__o *)_9__16_1,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v19->fields._size >= 1 )
  {
    while ( 1 )
    {
      v31 = (AiLogic___c__DisplayClass16_1_o *)sub_B77694(AiLogic___c__DisplayClass16_1_TypeInfo);
      AiLogic___c__DisplayClass16_1___ctor(v31, 0LL);
      if ( v19->fields._size < 1 )
        return 0LL;
      v32 = v19->fields._items->m_Items[0];
      if ( !v32 )
        goto LABEL_44;
      if ( !v31 )
        goto LABEL_44;
      v31->fields.priority = HIDWORD(v32->fields.end_time);
      v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v33,
        (Il2CppObject *)v31,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        (const MethodInfo_2C3248C *)Method_System_Predicate_AiBaseEntity___ctor__);
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v19,
              (System_Predicate_T__o *)v33,
              (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_44;
      All = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
              (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_44;
      v35 = *((_DWORD *)All + 6);
      v36 = (char *)All;
      if ( v35 <= 1 )
        break;
      v37 = (WeightRate_int__o *)sub_B77694(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v37, (const MethodInfo_2CE85DC *)Method_WeightRate_int___ctor__);
      v39 = *((_QWORD *)v36 + 3);
      if ( (int)v39 >= 1 )
      {
        v40 = 0LL;
        v41 = v36 + 32;
        while ( v40 < (unsigned int)v39 )
        {
          All = (void *)AiLogic__checkThinking_23813068(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v41[8 * v40],
                          turn,
                          v13->fields.actcnt,
                          v38);
          if ( v40 >= *((unsigned int *)v36 + 6) )
            break;
          v15 = *(_QWORD *)&v41[8 * v40];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v15 || !v37 )
              goto LABEL_44;
            WeightRate_int___setWeight(
              v37,
              *(_DWORD *)(v15 + 32),
              v40,
              (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v19,
                            (WarBoardManager_TaskList_o *)v15,
                            (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v39) = *((_DWORD *)v36 + 6);
          if ( (__int64)++v40 >= (int)v39 )
            goto LABEL_31;
        }
LABEL_43:
        v46 = sub_B776C8(All);
        sub_B77668(v46, 0LL);
      }
LABEL_31:
      if ( !v37 )
        goto LABEL_44;
      if ( WeightRate_int___getCount(v37, (const MethodInfo_2CE7B44 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v37->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v37, Next, (const MethodInfo_2CE7C28 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v36 + 6) )
          goto LABEL_43;
        v44 = *(AiBaseEntity_o **)&v36[8 * (int)All + 32];
        if ( AiLogic__checkThinking_23813068(this, aiInfo, v44, turn, v13->fields.actcnt, v43) )
          return v44;
        goto LABEL_39;
      }
LABEL_40:
      if ( v19->fields._size <= 0 )
        return 0LL;
    }
    if ( !v35 )
      goto LABEL_43;
    All = (void *)AiLogic__checkThinking_23813068(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    v13->fields.actcnt,
                    v34);
    if ( !*((_DWORD *)v36 + 6) )
      goto LABEL_43;
    v44 = (AiBaseEntity_o *)*((_QWORD *)v36 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v44;
LABEL_39:
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v19,
      (WarBoardManager_TaskList_o *)v44,
      (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  if ( (byte_438A48D & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B775C4(&Method_System_Collections_Generic_List_AiInterface__Add__);
    byte_438A48D = 1;
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
    sub_B7769C(this, targetList);
  this = (AiLogic_o *)BattleData__getServantDataFromIndex((BattleData_o *)this, pos, v13 & 1, 0LL);
  if ( this )
  {
    if ( targetList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)targetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AiInterface__Add__);
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
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x10
  BattleServantConfConponent_o *p_thinkList; // x19
  int32_t aiType; // w8
  AiBaseEntity_o *v10; // x10
  _BOOL4 v11; // w10
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v6 = this;
  if ( (byte_438A484 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___69384800);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    this = (AiLogic_o *)sub_B775C4(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    byte_438A484 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  p_thinkList = (BattleServantConfConponent_o *)&v6->fields._thinkList;
  thinkList = v6->fields._thinkList;
  aiType = aiInfo->fields.aiType;
  if ( thinkList && thinkList->fields._size )
  {
    v10 = thinkList->fields._items->m_Items[0];
    if ( !v10 || !aiState )
      goto LABEL_19;
    v11 = v10->fields.id != aiState->fields.aiGroupId;
  }
  else
  {
    v11 = 1;
  }
  if ( v11 || v6->fields._aiType != aiType )
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
      sub_B7769C(this, aiInfo);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           (const MethodInfo *)aiInfo);
LABEL_18:
        v13 = ListFormGroupId;
        v14 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v14,
          v13,
          (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___69384800);
        p_thinkList->klass = (BattleServantConfConponent_c *)v14;
        sub_B77560(p_thinkList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
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
  sub_B77560(
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
  sub_B77560((BattleServantConfConponent_o *)v12, (System_Int32_array **)inLogicAi, v19, v20, v21, v22, v23, v24);
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
  System_Xml_XmlQualifiedName_o *v11; // x23
  __int64 v12; // x1
  void *checkedInfo; // x0
  _DWORD *v14; // x22
  int32_t v15; // w20
  int32_t v16; // w21

  if ( (byte_4389F27 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
    byte_4389F27 = 1;
  }
  if ( aiBaseEntity )
  {
    v11 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiBaseEntity_o *, int32_t *, bool *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
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
              v11,
              (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v11,
                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v11,
                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v11,
                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
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
        sub_B7769C(checkedInfo, v12);
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
  __int64 v8; // x1

  if ( (byte_4389F26 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    byte_4389F26 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                          aiBaseEntity,
                                          aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_B7769C(v7, v8);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)checkedInfo,
           v7,
           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void __fastcall AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Xml_XmlQualifiedName_o *klass; // x0
  __int64 v17; // x1
  System_Xml_XmlQualifiedName_o *v18; // x21

  if ( (byte_4389F25 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
    byte_4389F25 = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (BattleServantConfConponent_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v9,
        (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (BattleServantConfConponent_c *)v9;
      sub_B77560(p_checkedInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    }
    klass = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                               aiBaseEntity,
                                               aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                                               inCheckedInfo,
                                               method);
    if ( p_checkedInfo->klass )
    {
      v18 = klass;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (System_Xml_XmlQualifiedName_o *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)klass,
          v18,
          (System_Xml_Schema_XmlSchemaObject_o *)inCheckedInfo,
          (const MethodInfo_2F7D5F8 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_B7769C(klass, v17);
  }
}


void __fastcall AiLogic_AiInfo_CheckedInfo___ctor(
        AiLogic_AiInfo_CheckedInfo_o *this,
        int32_t inActType,
        bool inNoMessage,
        BattleSkillInfoData_o *inSkillInfo,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)inSkillInfo;
  v8 = (BattleServantConfConponent_o *)((char *)v8 + 24);
  *(_DWORD *)&v8[-1].fields.isOpenAfter = inActType;
  LOBYTE(v8[-1].fields.adjustHeight) = inNoMessage;
  sub_B77560(v8, (System_Int32_array **)inSkillInfo, v9, v10, v11, v12, v13, v14);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F24 & 1) == 0 )
  {
    sub_B775C4(&AiLogic___c_TypeInfo);
    byte_4389F24 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AiLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, a);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
  return s->fields.priority == this->fields.priority;
}