void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42ADFD1 & 1) == 0 )
  {
    sub_B52984(&long___TypeInfo);
    byte_42ADFD1 = 1;
  }
  v3 = (struct System_Int64_array *)sub_B5299C(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.wkZero, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_42ADFC6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ADFC6 = 1;
  }
  this->fields.Bdata = data;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v11);
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B52920(
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
        v11 = sub_B52A88(IsNullOrEmpty);
        sub_B52A28(v11, 0LL);
      }
LABEL_19:
      sub_B52A5C(IsNullOrEmpty, v8);
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
  if ( (byte_42ADFC8 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B52984(&AiLogic_AiInfo_TypeInfo);
    byte_42ADFC8 = 1;
  }
  if ( !svtData )
    sub_B52A5C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_B52A54(AiLogic_AiInfo_TypeInfo);
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

  if ( (byte_42ADFCA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_B52984(&Method_System_Predicate_AiBaseEntity___ctor__);
    sub_B52984(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_B52984(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__);
    sub_B52984(&AiLogic___c__DisplayClass12_0_TypeInfo);
    byte_42ADFCA = 1;
  }
  v9 = (AiLogic___c__DisplayClass12_0_o *)sub_B52A54(AiLogic___c__DisplayClass12_0_TypeInfo);
  AiLogic___c__DisplayClass12_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.procState = procState, v9->fields.timingPriority = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v12),
        thinkList = this->fields._thinkList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_AiBaseEntity___ctor__),
        !thinkList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
                (System_Predicate_T__o *)v14,
                (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_B52A5C(All, v11);
  }
  return All->fields._size > 0;
}


bool __fastcall AiLogic__checkThinking_21262476(
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
  if ( (byte_42ADFC9 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B52984(&AiLogic_AiInfo_TypeInfo);
    byte_42ADFC9 = 1;
  }
  if ( !fieldData )
    sub_B52A5C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_B52A54(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v12);
}


bool __fastcall AiLogic__checkThinking_21265160(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  int32_t cond; // w23
  System_String_o *v9; // x21
  System_String_o *v10; // x22
  AiLogic_o *v11; // x20
  System_String_o *v12; // x22
  int32_t v13; // w20
  ConditionsInformation_CheckInfo_o *v14; // x0
  ConditionsInformation_CheckInfo_o *v15; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x22
  const MethodInfo *v17; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *Bdata; // x1
  int32_t v19; // w4
  BattleServantData_array *FieldEnemyServantList; // x0
  const MethodInfo_2FF1854 *v21; // x2
  System_Collections_Generic_IEnumerable_T__o *v22; // x1
  struct BattleData_o *v23; // x8
  AiLogic_o *v24; // x0
  System_Collections_Generic_List_AiInterface__o *v25; // x1
  bool v26; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v28; // x3
  AiLogic_o *v29; // x21
  System_Int64_array *wkZero; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int64_array *v33; // x28
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int64_array *v37; // x20
  int32_t refine; // w8
  _BOOL4 v39; // w26
  _BOOL8 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x3
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v48; // x3
  Il2CppClass *v49; // x8
  unsigned int paramater; // w25
  struct BattleData_o *v51; // x21
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  System_Double_array *v55; // x1
  int v56; // w20
  int v57; // w8
  _BOOL8 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  Il2CppObject *v61; // x20
  Il2CppClass *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x3
  Il2CppClass *v67; // x8
  unsigned int v68; // w25
  struct BattleData_o *v69; // x21
  unsigned __int64 v70; // x10
  int32_t *v71; // x11
  __int64 v72; // x0
  System_Double_array *v73; // x1
  int v74; // w20
  int32_t v75; // w8
  AiLogic_o *v76; // x20
  Il2CppObject *v77; // x25
  Il2CppClass *v78; // x8
  unsigned __int64 v79; // x10
  int32_t *v80; // x11
  __int64 v81; // x0
  __int64 v82; // x3
  Il2CppClass *v83; // x8
  unsigned int v84; // w21
  struct BattleData_o *v85; // x22
  unsigned __int64 v86; // x10
  int32_t *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x9
  __int64 v92; // x10
  unsigned __int64 v93; // x11
  __int64 v94; // x11
  _BOOL8 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x3
  AiLogic_AiInfo_o *v98; // x22
  int v99; // w21
  System_Int64_array *v100; // x2
  int v101; // w8
  Il2CppObject *v102; // x25
  Il2CppClass *v103; // x8
  unsigned __int64 v104; // x10
  int32_t *v105; // x11
  __int64 v106; // x0
  __int64 v107; // x3
  Il2CppClass *v108; // x8
  unsigned int v109; // w21
  struct BattleData_o *v110; // x22
  unsigned __int64 v111; // x10
  int32_t *v112; // x11
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  unsigned __int64 v116; // x8
  unsigned int v117; // w10
  double v118; // d0
  _BOOL8 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x3
  Il2CppObject *v122; // x25
  Il2CppClass *v123; // x8
  unsigned __int64 v124; // x10
  int32_t *v125; // x11
  __int64 v126; // x0
  __int64 v127; // x3
  Il2CppClass *v128; // x8
  __int64 v129; // x2
  struct BattleData_o *v130; // x23
  unsigned __int64 v131; // x10
  int32_t *v132; // x11
  unsigned int v133; // w26
  __int64 v134; // x0
  __int64 v135; // x0
  __int64 v136; // x1
  __int64 v137; // x9
  __int64 v138; // x10
  unsigned __int64 aiType; // x11
  __int64 v140; // x11
  _BOOL8 v141; // x0
  __int64 v142; // x1
  __int64 v143; // x3
  char v144; // w20
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x0
  __int64 v149; // x0
  __int64 v150; // x0
  _BOOL4 v151; // [xsp+0h] [xbp-E0h]
  int v152; // [xsp+Ch] [xbp-D4h]
  AiLogic_AiInfo_o *v153; // [xsp+10h] [xbp-D0h]
  ConditionsInformation_ISCheckFunction_o *func; // [xsp+18h] [xbp-C8h]
  System_Int64_array *entVals; // [xsp+20h] [xbp-C0h]
  AiLogic_o *v158; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v159[2]; // [xsp+38h] [xbp-A8h] BYREF
  int v160; // [xsp+6Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v161; // [xsp+70h] [xbp-70h] BYREF
  int32_t v162; // [xsp+8Ch] [xbp-54h] BYREF

  v158 = this;
  if ( (byte_42ADFCF & 1) == 0 )
  {
    sub_B52984(&AiInterface_TypeInfo);
    sub_B52984(&Ai_COND_TypeInfo);
    sub_B52984(&ConditionsInformation_TypeInfo);
    sub_B52984(&double___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Skip_long___);
    sub_B52984(&Method_System_Linq_Enumerable_Take_long___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AiInterface__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_AiInterface__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_AiInterface___ctor__);
    sub_B52984(&System_Collections_Generic_List_AiInterface__TypeInfo);
    sub_B52984(&StringLiteral_9393/*"NOT_"*/);
    this = (AiLogic_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADFCF = 1;
  }
  v162 = 0;
  memset(&v161, 0, sizeof(v161));
  v160 = 0;
  if ( !aiEnt )
    goto LABEL_262;
  this = (AiLogic_o *)Ai__getCond(aiEnt->fields.cond, (const MethodInfo *)aiInfo);
  v162 = (int)this;
  if ( !aiInfo )
    goto LABEL_262;
  cond = aiEnt->fields.cond;
  v9 = (System_String_o *)StringLiteral_9393/*"NOT_"*/;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  this = (AiLogic_o *)j_il2cpp_value_box_0(Ai_COND_TypeInfo, &v162);
  if ( !this )
    goto LABEL_262;
  v11 = this;
  if ( cond >= 0 )
    v9 = v10;
  v12 = (System_String_o *)((__int64 (__fastcall *)(AiLogic_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  v162 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
  System_String__Concat_44568316(v9, v12, 0LL);
  v13 = v162;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  v14 = ConditionsInformation__getCheckFunction(v13, 0LL);
  if ( !v14 )
    goto LABEL_257;
  v15 = v14;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v15->fields.target )
  {
    case 1:
      if ( !v16 )
        goto LABEL_262;
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v158->fields.Bdata;
      goto LABEL_79;
    case 2:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      uniqueId = aiInfo->fields.uniqueId;
      if ( aiInfo->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
      goto LABEL_79;
    case 3:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 4:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 5:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( aiInfo->fields.aiType != 1 )
      {
        if ( !this || !v16 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].fields.Bdata;
        goto LABEL_79;
      }
      if ( !this )
        goto LABEL_262;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
      v23 = v158->fields.Bdata;
      if ( !v23 )
        goto LABEL_262;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_48;
      goto LABEL_24;
    case 6:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        v23 = v158->fields.Bdata;
        if ( !v23 )
          goto LABEL_262;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_48:
          if ( !v16 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v23->fields.playerFieldStatus;
        }
        else
        {
LABEL_24:
          if ( !v16 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v23->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v16 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].monitor;
      }
LABEL_79:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        Bdata,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AiInterface__Add__);
      goto LABEL_84;
    case 7:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 8:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v16 )
          goto LABEL_262;
      }
LABEL_82:
      v22 = (System_Collections_Generic_IEnumerable_T__o *)this;
      v21 = (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
LABEL_83:
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
        v22,
        v21);
LABEL_84:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, (const MethodInfo *)aiInfo);
      v29 = this;
      v153 = aiInfo;
      wkZero = v158->fields.wkZero;
      v152 = cond;
      if ( !v15->fields.isParams )
      {
        if ( v15->fields.isIndiv )
        {
          if ( !this )
            goto LABEL_262;
          if ( this->fields._aiType >= 2 )
          {
            v35 = System_Linq_Enumerable__Skip_long_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)this,
                    1,
                    (const MethodInfo_1B6D85C *)Method_System_Linq_Enumerable_Skip_long___);
            v36 = System_Linq_Enumerable__Take_long_(
                    v35,
                    v29->fields._aiType - 1,
                    (const MethodInfo_1B6DBB0 *)Method_System_Linq_Enumerable_Take_long___);
            v37 = System_Linq_Enumerable__ToArray_long_(
                    v36,
                    (const MethodInfo_1B6E584 *)Method_System_Linq_Enumerable_ToArray_long___);
            this = (AiLogic_o *)sub_B5299C(long___TypeInfo, 1LL);
            if ( v29->fields._aiType )
            {
              if ( !this )
                goto LABEL_262;
              if ( this->fields._aiType )
              {
                thinkList = v29->fields._thinkList;
                v33 = wkZero;
                wkZero = v37;
                goto LABEL_99;
              }
            }
LABEL_277:
            v150 = sub_B52A88(this);
            sub_B52A28(v150, 0LL);
          }
        }
LABEL_94:
        v33 = v158->fields.wkZero;
        goto LABEL_100;
      }
      if ( !this )
        goto LABEL_262;
      if ( this->fields._aiType < 2 )
        goto LABEL_94;
      v31 = System_Linq_Enumerable__Skip_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)this,
              1,
              (const MethodInfo_1B6D85C *)Method_System_Linq_Enumerable_Skip_long___);
      v32 = System_Linq_Enumerable__Take_long_(
              v31,
              v29->fields._aiType - 1,
              (const MethodInfo_1B6DBB0 *)Method_System_Linq_Enumerable_Take_long___);
      v33 = System_Linq_Enumerable__ToArray_long_(
              v32,
              (const MethodInfo_1B6E584 *)Method_System_Linq_Enumerable_ToArray_long___);
      this = (AiLogic_o *)sub_B5299C(long___TypeInfo, 1LL);
      if ( !v29->fields._aiType )
        goto LABEL_277;
      if ( !this )
        goto LABEL_262;
      if ( !this->fields._aiType )
        goto LABEL_277;
      thinkList = v29->fields._thinkList;
LABEL_99:
      v29 = this;
      this->fields._thinkList = thinkList;
LABEL_100:
      refine = v15->fields.refine;
      func = v15->fields.func;
      entVals = (System_Int64_array *)v29;
      if ( refine )
      {
        v39 = 0;
      }
      else
      {
        if ( !v16 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v159,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v161 = v159[0];
        while ( 1 )
        {
          v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v161,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v40 )
            break;
          current = v161.fields.current;
          if ( !v161.fields.current )
            sub_B52A5C(v40, v41);
          klass = v161.fields.current->klass;
          if ( *(_WORD *)&v161.fields.current->klass->_2.bitflags1 )
          {
            v45 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              ++v45;
              p_offset += 4;
              if ( v45 >= *(unsigned __int16 *)&v161.fields.current->klass->_2.bitflags1 )
                goto LABEL_110;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_110:
            p_method = sub_AEB880(v161.fields.current, AiInterface_TypeInfo, 1LL, v42);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v15,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v49 = current->klass;
            paramater = v15->fields.paramater;
            v51 = v158->fields.Bdata;
            if ( *(_WORD *)&current->klass->_2.bitflags1 )
            {
              v52 = 0LL;
              v53 = &v49->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v53 - 1) != AiInterface_TypeInfo )
              {
                ++v52;
                v53 += 4;
                if ( v52 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
                  goto LABEL_117;
              }
              v54 = (__int64)&v49->vtable[*v53].method;
            }
            else
            {
LABEL_117:
              v54 = sub_AEB880(current, AiInterface_TypeInfo, 0LL, v48);
            }
            v55 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v54)(
                                           current,
                                           v51,
                                           paramater,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v33,
                                           aiEnt,
                                           *(_QWORD *)(v54 + 8));
            if ( !func )
              sub_B52A5C(0LL, v55);
            if ( ConditionsInformation_ISCheckFunction__Invoke(func, v55, entVals, 0LL) )
            {
              v56 = 1;
              goto LABEL_123;
            }
          }
        }
        v56 = 0;
LABEL_123:
        *((_DWORD *)&v159[1].fields.list + v160++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v161,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v39 = v56 != 0;
        if ( v160 )
        {
          v57 = v160 - 1;
          if ( *((_DWORD *)&v159[0].fields.current + v160 + 1) == 1707 )
          {
LABEL_150:
            v160 = v57;
LABEL_187:
            v99 = cond;
            v98 = v153;
            goto LABEL_255;
          }
        }
        refine = v15->fields.refine;
      }
      if ( refine == 1 )
      {
        if ( !v16 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v159,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v161 = v159[0];
        while ( 1 )
        {
          v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v161,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v58 )
            break;
          v61 = v161.fields.current;
          if ( !v161.fields.current )
            sub_B52A5C(v58, v59);
          v62 = v161.fields.current->klass;
          if ( *(_WORD *)&v161.fields.current->klass->_2.bitflags1 )
          {
            v63 = 0LL;
            v64 = &v62->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v64 - 1) != AiInterface_TypeInfo )
            {
              ++v63;
              v64 += 4;
              if ( v63 >= *(unsigned __int16 *)&v161.fields.current->klass->_2.bitflags1 )
                goto LABEL_135;
            }
            v65 = (__int64)&v62->vtable[*v64 + 1].method;
          }
          else
          {
LABEL_135:
            v65 = sub_AEB880(v161.fields.current, AiInterface_TypeInfo, 1LL, v60);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v65)(
                  v61,
                  v15,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v65 + 8)) & 1) != 0 )
          {
            v67 = v61->klass;
            v68 = v15->fields.paramater;
            v69 = v158->fields.Bdata;
            if ( *(_WORD *)&v61->klass->_2.bitflags1 )
            {
              v70 = 0LL;
              v71 = &v67->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v71 - 1) != AiInterface_TypeInfo )
              {
                ++v70;
                v71 += 4;
                if ( v70 >= *(unsigned __int16 *)&v61->klass->_2.bitflags1 )
                  goto LABEL_142;
              }
              v72 = (__int64)&v67->vtable[*v71].method;
            }
            else
            {
LABEL_142:
              v72 = sub_AEB880(v61, AiInterface_TypeInfo, 0LL, v66);
            }
            v73 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v72)(
                                           v61,
                                           v69,
                                           v68,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v33,
                                           aiEnt,
                                           *(_QWORD *)(v72 + 8));
            if ( !func )
              sub_B52A5C(0LL, v73);
            if ( !ConditionsInformation_ISCheckFunction__Invoke(func, v73, entVals, 0LL) )
            {
              v74 = 0;
              goto LABEL_148;
            }
          }
        }
        v74 = 1;
LABEL_148:
        *((_DWORD *)&v159[1].fields.list + v160++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v161,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v39 = v74 != 0;
        if ( v160 )
        {
          v57 = v160 - 1;
          if ( *((_DWORD *)&v159[0].fields.current + v160 + 1) == 1707 )
            goto LABEL_150;
        }
      }
      v75 = v15->fields.refine;
      if ( v75 == 2 )
      {
        this = (AiLogic_o *)sub_B5299C(double___TypeInfo, 0LL);
        if ( v16 )
        {
          v76 = this;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            v159,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v161 = v159[0];
LABEL_247:
          while ( 1 )
          {
            v141 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v161,
                     (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v141 )
              break;
            v122 = v161.fields.current;
            if ( !v161.fields.current )
              sub_B52A5C(v141, v142);
            v123 = v161.fields.current->klass;
            if ( *(_WORD *)&v161.fields.current->klass->_2.bitflags1 )
            {
              v124 = 0LL;
              v125 = &v123->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v125 - 1) != AiInterface_TypeInfo )
              {
                ++v124;
                v125 += 4;
                if ( v124 >= *(unsigned __int16 *)&v161.fields.current->klass->_2.bitflags1 )
                  goto LABEL_222;
              }
              v126 = (__int64)&v123->vtable[*v125 + 1].method;
            }
            else
            {
LABEL_222:
              v126 = sub_AEB880(v161.fields.current, AiInterface_TypeInfo, 1LL, v143);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v126)(
                    v122,
                    v15,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v126 + 8)) & 1) != 0 )
            {
              v128 = v122->klass;
              v129 = (unsigned int)v15->fields.paramater;
              v151 = v39;
              v130 = v158->fields.Bdata;
              if ( *(_WORD *)&v122->klass->_2.bitflags1 )
              {
                v131 = 0LL;
                v132 = &v128->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v132 - 1) != AiInterface_TypeInfo )
                {
                  ++v131;
                  v132 += 4;
                  if ( v131 >= *(unsigned __int16 *)&v122->klass->_2.bitflags1 )
                    goto LABEL_229;
                }
                v134 = (__int64)&v128->vtable[*v132].method;
              }
              else
              {
LABEL_229:
                v133 = v15->fields.paramater;
                v134 = sub_AEB880(v122, AiInterface_TypeInfo, 0LL, v127);
                v129 = v133;
              }
              v135 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, __int64, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v134)(
                       v122,
                       v130,
                       v129,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v33,
                       aiEnt,
                       *(_QWORD *)(v134 + 8));
              if ( !v135 )
                sub_B52A5C(0LL, v136);
              v137 = *(_QWORD *)(v135 + 24);
              if ( v137 )
              {
                v39 = v151;
                if ( !v76 )
                  sub_B52A5C(v135, v136);
                if ( !*(_QWORD *)&v76->fields._aiType )
                  v76 = (AiLogic_o *)v135;
              }
              else
              {
                v39 = v151;
              }
              if ( (int)v137 >= 1 )
              {
                v138 = 4LL;
                while ( 1 )
                {
                  if ( !v76 )
                    sub_B52A5C(v135, v136);
                  aiType = (unsigned int)v76->fields._aiType;
                  if ( v138 - 4 < (int)aiType )
                  {
                    if ( v138 - 4 >= aiType )
                    {
                      v148 = sub_B52A88(v135);
                      sub_B52A28(v148, 0LL);
                    }
                    if ( *((double *)&v76->klass + v138) < *(double *)(v135 + 8 * v138) )
                      break;
                  }
                  v140 = v138 - 3;
                  ++v138;
                  if ( v140 >= (int)v137 )
                    goto LABEL_247;
                }
                v76 = (AiLogic_o *)v135;
              }
            }
          }
          *((_DWORD *)&v159[1].fields.list + v160++) = 1524;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v161,
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          v99 = v152;
          v100 = entVals;
          v98 = v153;
          if ( v160 )
          {
            v101 = v160 - 1;
            if ( *((_DWORD *)&v159[0].fields.current + v160 + 1) == 1524 )
              goto LABEL_250;
          }
LABEL_251:
          if ( v76 )
          {
            if ( !*(_QWORD *)&v76->fields._aiType )
              goto LABEL_255;
            goto LABEL_253;
          }
        }
LABEL_262:
        sub_B52A5C(this, aiInfo);
      }
      if ( v75 != 4 )
      {
        if ( v75 != 3 )
          goto LABEL_187;
        this = (AiLogic_o *)sub_B5299C(double___TypeInfo, 0LL);
        if ( !v16 )
          goto LABEL_262;
        v76 = this;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v159,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v161 = v159[0];
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
LABEL_183:
              v95 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v161,
                      (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
              if ( !v95 )
              {
                *((_DWORD *)&v159[1].fields.list + v160++) = 1335;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v161,
                  (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
                v98 = v153;
                v99 = cond;
                v100 = entVals;
                if ( !v160 )
                  goto LABEL_251;
                v101 = v160 - 1;
                if ( *((_DWORD *)&v159[0].fields.current + v160 + 1) != 1335 )
                  goto LABEL_251;
LABEL_250:
                v160 = v101;
                goto LABEL_251;
              }
              v77 = v161.fields.current;
              if ( !v161.fields.current )
                sub_B52A5C(v95, v96);
              v78 = v161.fields.current->klass;
              if ( *(_WORD *)&v161.fields.current->klass->_2.bitflags1 )
              {
                v79 = 0LL;
                v80 = &v78->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v80 - 1) != AiInterface_TypeInfo )
                {
                  ++v79;
                  v80 += 4;
                  if ( v79 >= *(unsigned __int16 *)&v161.fields.current->klass->_2.bitflags1 )
                    goto LABEL_161;
                }
                v81 = (__int64)&v78->vtable[*v80 + 1].method;
              }
              else
              {
LABEL_161:
                v81 = sub_AEB880(v161.fields.current, AiInterface_TypeInfo, 1LL, v97);
              }
            }
            while ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v81)(
                       v77,
                       v15,
                       wkZero,
                       aiEnt,
                       *(_QWORD *)(v81 + 8)) & 1) == 0 );
            v83 = v77->klass;
            v84 = v15->fields.paramater;
            v85 = v158->fields.Bdata;
            if ( *(_WORD *)&v77->klass->_2.bitflags1 )
            {
              v86 = 0LL;
              v87 = &v83->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v87 - 1) != AiInterface_TypeInfo )
              {
                ++v86;
                v87 += 4;
                if ( v86 >= *(unsigned __int16 *)&v77->klass->_2.bitflags1 )
                  goto LABEL_168;
              }
              v88 = (__int64)&v83->vtable[*v87].method;
            }
            else
            {
LABEL_168:
              v88 = sub_AEB880(v77, AiInterface_TypeInfo, 0LL, v82);
            }
            v89 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v88)(
                    v77,
                    v85,
                    v84,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v33,
                    aiEnt,
                    *(_QWORD *)(v88 + 8));
            if ( !v89 )
              sub_B52A5C(0LL, v90);
            v91 = *(_QWORD *)(v89 + 24);
            if ( !v91 )
              break;
            if ( !v76 )
              sub_B52A5C(v89, v90);
            if ( *(_QWORD *)&v76->fields._aiType )
              break;
LABEL_182:
            v76 = (AiLogic_o *)v89;
          }
          if ( (int)v91 >= 1 )
          {
            v92 = 4LL;
            while ( 1 )
            {
              if ( !v76 )
                sub_B52A5C(v89, v90);
              v93 = (unsigned int)v76->fields._aiType;
              if ( v92 - 4 < (int)v93 )
              {
                if ( v92 - 4 >= v93 )
                {
                  v149 = sub_B52A88(v89);
                  sub_B52A28(v149, 0LL);
                }
                if ( *(double *)(v89 + 8 * v92) < *((double *)&v76->klass + v92) )
                  goto LABEL_182;
              }
              v94 = v92 - 3;
              ++v92;
              if ( v94 >= (int)v91 )
                goto LABEL_183;
            }
          }
        }
      }
      this = (AiLogic_o *)sub_B5299C(double___TypeInfo, 1LL);
      if ( !v16 )
        goto LABEL_262;
      v76 = this;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v159,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v161 = v159[0];
      while ( 1 )
      {
        v119 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v161,
                 (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v119 )
          break;
        v102 = v161.fields.current;
        if ( !v161.fields.current )
          sub_B52A5C(v119, v120);
        v103 = v161.fields.current->klass;
        if ( *(_WORD *)&v161.fields.current->klass->_2.bitflags1 )
        {
          v104 = 0LL;
          v105 = &v103->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v105 - 1) != AiInterface_TypeInfo )
          {
            ++v104;
            v105 += 4;
            if ( v104 >= *(unsigned __int16 *)&v161.fields.current->klass->_2.bitflags1 )
              goto LABEL_195;
          }
          v106 = (__int64)&v103->vtable[*v105 + 1].method;
        }
        else
        {
LABEL_195:
          v106 = sub_AEB880(v161.fields.current, AiInterface_TypeInfo, 1LL, v121);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v106)(
                v102,
                v15,
                wkZero,
                aiEnt,
                *(_QWORD *)(v106 + 8)) & 1) != 0 )
        {
          v108 = v102->klass;
          v109 = v15->fields.paramater;
          v110 = v158->fields.Bdata;
          if ( *(_WORD *)&v102->klass->_2.bitflags1 )
          {
            v111 = 0LL;
            v112 = &v108->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v112 - 1) != AiInterface_TypeInfo )
            {
              ++v111;
              v112 += 4;
              if ( v111 >= *(unsigned __int16 *)&v102->klass->_2.bitflags1 )
                goto LABEL_202;
            }
            v113 = (__int64)&v108->vtable[*v112].method;
          }
          else
          {
LABEL_202:
            v113 = sub_AEB880(v102, AiInterface_TypeInfo, 0LL, v107);
          }
          v114 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v113)(
                   v102,
                   v110,
                   v109,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v33,
                   aiEnt,
                   *(_QWORD *)(v113 + 8));
          if ( !v114 )
            sub_B52A5C(0LL, v115);
          if ( (int)*(_QWORD *)(v114 + 24) >= 1 )
          {
            v116 = 0LL;
            v117 = *(_QWORD *)(v114 + 24);
            do
            {
              if ( v116 >= v117 )
              {
                v146 = sub_B52A88(v114);
                sub_B52A28(v146, 0LL);
              }
              if ( !v76 )
                sub_B52A5C(v114, v115);
              if ( !v76->fields._aiType )
              {
                v147 = sub_B52A88(v114);
                sub_B52A28(v147, 0LL);
              }
              v118 = *(double *)(v114 + 32 + 8 * v116++);
              *(double *)&v76->fields._thinkList = v118 + *(double *)&v76->fields._thinkList;
              v117 = *(_DWORD *)(v114 + 24);
            }
            while ( (__int64)v116 < (int)v117 );
          }
        }
      }
      *((_DWORD *)&v159[1].fields.list + v160++) = 1694;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v161,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      v98 = v153;
      v99 = cond;
      v100 = entVals;
      if ( v160 && *((_DWORD *)&v159[0].fields.current + v160 + 1) == 1694 )
        --v160;
LABEL_253:
      this = (AiLogic_o *)func;
      if ( !func )
        goto LABEL_262;
      LOBYTE(v39) = ConditionsInformation_ISCheckFunction__Invoke(func, (System_Double_array *)v76, v100, 0LL);
LABEL_255:
      v144 = (v99 < 0) ^ v39;
      if ( (v144 & 1) != 0 && !AiLogic_AiInfo__CheckAiCanActionFromTargets(v98, aiEnt, 0LL) )
LABEL_257:
        v144 = 0;
      return v144 & 1;
    case 9:
      v24 = v158;
      v26 = 1;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_60;
    case 0xA:
      v26 = 1;
      v19 = 1;
      goto LABEL_57;
    case 0xB:
      v26 = 1;
      v19 = 2;
LABEL_57:
      v24 = v158;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_58;
    case 0xC:
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v16 )
        goto LABEL_262;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v158->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
      v21 = (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
      v22 = (System_Collections_Generic_IEnumerable_T__o *)FieldEnemyServantList;
      goto LABEL_83;
    case 0xD:
      v24 = v158;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v26 = 0;
LABEL_60:
      v28 = aiInfo;
      v19 = 0;
      goto LABEL_61;
    case 0xE:
      v19 = 1;
      goto LABEL_51;
    case 0xF:
      v19 = 2;
LABEL_51:
      v24 = v158;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v26 = 0;
LABEL_58:
      v28 = aiInfo;
LABEL_61:
      AiLogic__getTargetPosServant(v24, v25, v26, v28, v19, v17);
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
  if ( (byte_42ADFCB & 1) == 0 )
  {
    sub_B52984(&AiEntity_TypeInfo);
    this = (AiLogic_o *)sub_B52984(&AiLogic_AiInfo_TypeInfo);
    byte_42ADFCB = 1;
  }
  if ( !svtData )
    sub_B52A5C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v17 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v18 = (AiLogic_AiInfo_o *)sub_B52A54(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v18, 1, uniqueId, v17, logicAi, procState, 0LL);
  *info = v18;
  sub_B52920((BattleServantConfConponent_o *)info, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
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
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *Bdata; // x26
  const MethodInfo *v18; // x3
  struct BattleData_o *v19; // x8
  UnityEngine_Object_o *v20; // x22
  const MethodInfo *v21; // x1
  struct BattleData_o *v22; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v24; // x8
  struct BattleData_o *v25; // x8
  struct BattleData_o *v26; // x8

  v11 = this;
  if ( (byte_42ADFCD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    this = (AiLogic_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADFCD = 1;
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
                 v13);
    if ( !BasicAct )
      return BasicAct;
    this = (AiLogic_o *)v11->fields.aiActMst;
    if ( !this )
      goto LABEL_37;
    this = (AiLogic_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          BasicAct->fields.aiActId,
                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    if ( HIDWORD(this->fields.Bdata) != 99 )
      break;
    aiState->fields.aiGroupId = AiBaseEntity__getIndexAval(BasicAct, 0, v16);
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
      v19 = v11->fields.Bdata;
      if ( !v19 )
        goto LABEL_37;
      this = (AiLogic_o *)v19->fields.battleEvent;
      if ( !this )
        goto LABEL_37;
      ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
        this,
        aiState,
        BasicAct,
        this->klass[2]._1.image);
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v18);
  }
  v20 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, v21);
    if ( (_DWORD)this )
    {
      v22 = v11->fields.Bdata;
      if ( !v22 )
        goto LABEL_37;
      playerNpCount = v22->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
      v22->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v24 = v11->fields.Bdata;
      if ( !v24 )
        goto LABEL_37;
      if ( (v24->fields.playerNpCount & 0x80000000) != 0 )
        v24->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v25 = v11->fields.Bdata;
      if ( !v25 )
        goto LABEL_37;
      v25->fields.playerNpCount = 0;
    }
    v26 = v11->fields.Bdata;
    if ( v26 )
    {
      this = (AiLogic_o *)v26->fields.battleEvent;
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
    sub_B52A5C(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *__fastcall AiLogic__getAction_21263544(
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
  if ( (byte_42ADFCC & 1) == 0 )
  {
    sub_B52984(&AiFieldEntity_TypeInfo);
    this = (AiLogic_o *)sub_B52984(&AiLogic_AiInfo_TypeInfo);
    byte_42ADFCC = 1;
  }
  if ( !fieldData )
    sub_B52A5C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v16 = (AiLogic_AiInfo_o *)sub_B52A54(AiLogic_AiInfo_TypeInfo);
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

  if ( (byte_42ADFCE & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_AiBaseEntity___ctor__);
    sub_B52984(&System_Comparison_AiBaseEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    sub_B52984(&Method_System_Predicate_AiBaseEntity___ctor__);
    sub_B52984(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_B52984(&Method_AiLogic___c__getBasicAct_b__16_1__);
    sub_B52984(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__);
    sub_B52984(&AiLogic___c__DisplayClass16_0_TypeInfo);
    sub_B52984(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__);
    sub_B52984(&AiLogic___c__DisplayClass16_1_TypeInfo);
    sub_B52984(&AiLogic___c_TypeInfo);
    sub_B52984(&Method_WeightRate_int___ctor__);
    sub_B52984(&Method_WeightRate_int__getCount__);
    sub_B52984(&Method_WeightRate_int__getData__);
    sub_B52984(&Method_WeightRate_int__getTotalWeight__);
    sub_B52984(&Method_WeightRate_int__setWeight__);
    sub_B52984(&WeightRate_int__TypeInfo);
    byte_42ADFCE = 1;
  }
  v13 = (AiLogic___c__DisplayClass16_0_o *)sub_B52A54(AiLogic___c__DisplayClass16_0_TypeInfo);
  AiLogic___c__DisplayClass16_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_44;
  v13->fields.procState = procState;
  v13->fields.actcnt = actcnt;
  v13->fields.timingPriority = timingPriority;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = this->fields._thinkList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_AiBaseEntity___ctor__);
  if ( !thinkList )
    goto LABEL_44;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
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
    _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_1,
      v23,
      Method_AiLogic___c__getBasicAct_b__16_1__,
      (const MethodInfo_2483370 *)Method_System_Comparison_AiBaseEntity___ctor__);
    v24 = AiLogic___c_TypeInfo->static_fields;
    v24->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_B52920(
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
    sub_B52A5C(All, v15);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v19,
    (System_Comparison_T__o *)_9__16_1,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v19->fields._size >= 1 )
  {
    while ( 1 )
    {
      v31 = (AiLogic___c__DisplayClass16_1_o *)sub_B52A54(AiLogic___c__DisplayClass16_1_TypeInfo);
      AiLogic___c__DisplayClass16_1___ctor(v31, 0LL);
      if ( v19->fields._size < 1 )
        return 0LL;
      v32 = v19->fields._items->m_Items[0];
      if ( !v32 )
        goto LABEL_44;
      if ( !v31 )
        goto LABEL_44;
      v31->fields.priority = HIDWORD(v32->fields.end_time);
      v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v33,
        (Il2CppObject *)v31,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_AiBaseEntity___ctor__);
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v19,
              (System_Predicate_T__o *)v33,
              (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_44;
      All = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_44;
      v35 = *((_DWORD *)All + 6);
      v36 = (char *)All;
      if ( v35 <= 1 )
        break;
      v37 = (WeightRate_int__o *)sub_B52A54(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v37, (const MethodInfo_2C1C5B0 *)Method_WeightRate_int___ctor__);
      v39 = *((_QWORD *)v36 + 3);
      if ( (int)v39 >= 1 )
      {
        v40 = 0LL;
        v41 = v36 + 32;
        while ( v40 < (unsigned int)v39 )
        {
          All = (void *)AiLogic__checkThinking_21265160(
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
              (const MethodInfo_2C1B778 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v19,
                            (WarBoardManager_TaskList_o *)v15,
                            (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v39) = *((_DWORD *)v36 + 6);
          if ( (__int64)++v40 >= (int)v39 )
            goto LABEL_31;
        }
LABEL_43:
        v46 = sub_B52A88(All);
        sub_B52A28(v46, 0LL);
      }
LABEL_31:
      if ( !v37 )
        goto LABEL_44;
      if ( WeightRate_int___getCount(v37, (const MethodInfo_2C1BB18 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v37->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v37, Next, (const MethodInfo_2C1BBFC *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v36 + 6) )
          goto LABEL_43;
        v44 = *(AiBaseEntity_o **)&v36[8 * (int)All + 32];
        if ( AiLogic__checkThinking_21265160(this, aiInfo, v44, turn, v13->fields.actcnt, v43) )
          return v44;
        goto LABEL_39;
      }
LABEL_40:
      if ( v19->fields._size <= 0 )
        return 0LL;
    }
    if ( !v35 )
      goto LABEL_43;
    All = (void *)AiLogic__checkThinking_21265160(
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
      (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  if ( (byte_42ADFD0 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B52984(&Method_System_Collections_Generic_List_AiInterface__Add__);
    byte_42ADFD0 = 1;
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
    sub_B52A5C(this, targetList);
  this = (AiLogic_o *)BattleData__getServantDataFromIndex((BattleData_o *)this, pos, v13 & 1, 0LL);
  if ( this )
  {
    if ( targetList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)targetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AiInterface__Add__);
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
  if ( (byte_42ADFC7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___68500424);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    this = (AiLogic_o *)sub_B52984(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    byte_42ADFC7 = 1;
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
      sub_B52A5C(this, aiInfo);
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
        v14 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v14,
          v13,
          (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___68500424);
        p_thinkList->klass = (BattleServantConfConponent_c *)v14;
        sub_B52920(p_thinkList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
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
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)v12, (System_Int32_array **)inLogicAi, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_42AEBF1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
    byte_42AEBF1 = 1;
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
              (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v11,
                      (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v11,
                      (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v11,
                      (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
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
        sub_B52A5C(checkedInfo, v12);
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

  if ( (byte_42AEBF0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    byte_42AEBF0 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                          aiBaseEntity,
                                          aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_B52A5C(v7, v8);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)checkedInfo,
           v7,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
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

  if ( (byte_42AEBEF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
    byte_42AEBEF = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (BattleServantConfConponent_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v9,
        (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (BattleServantConfConponent_c *)v9;
      sub_B52920(p_checkedInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
             (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
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
          (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_B52A5C(klass, v17);
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
  sub_B52920(v8);
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

  if ( (byte_42AEBEE & 1) == 0 )
  {
    sub_B52984(&AiLogic___c_TypeInfo);
    byte_42AEBEE = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(AiLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return s->fields.priority == this->fields.priority;
}