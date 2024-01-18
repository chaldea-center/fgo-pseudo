void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0

  if ( (byte_4185A7E & 1) == 0 )
  {
    sub_B2C35C(&long___TypeInfo, method);
    byte_4185A7E = 1;
  }
  v3 = (struct System_Int64_array *)sub_B2C374(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_B2C2F8(&this->fields.wkZero, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AiLogic__INITLOG(AiLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AiLogic__Initialize(AiLogic_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4185A73 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_AiActMaster___, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185A73 = 1;
  }
  this->fields.Bdata = data;
  sub_B2C2F8(&this->fields, data);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(&this->fields.aiActMst, MasterData_WarQuestSelectionMaster);
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
        v11 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v11, 0LL);
      }
LABEL_19:
      sub_B2C434(IsNullOrEmpty, v8);
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
  if ( (byte_4185A75 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B2C35C(&AiLogic_AiInfo_TypeInfo, svtData);
    byte_4185A75 = 1;
  }
  if ( !svtData )
    sub_B2C434(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_B2C42C(AiLogic_AiInfo_TypeInfo);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  AiLogic___c__DisplayClass12_0_o *v14; // x23
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x20

  if ( (byte_4185A77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, aiInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9);
    sub_B2C35C(&Method_System_Predicate_AiBaseEntity___ctor__, v10);
    sub_B2C35C(&System_Predicate_AiBaseEntity__TypeInfo, v11);
    sub_B2C35C(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v12);
    sub_B2C35C(&AiLogic___c__DisplayClass12_0_TypeInfo, v13);
    byte_4185A77 = 1;
  }
  v14 = (AiLogic___c__DisplayClass12_0_o *)sub_B2C42C(AiLogic___c__DisplayClass12_0_TypeInfo);
  AiLogic___c__DisplayClass12_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.procState = procState, v14->fields.timingPriority = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v17),
        thinkList = this->fields._thinkList,
        v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v19,
          (Il2CppObject *)v14,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_AiBaseEntity___ctor__),
        !thinkList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
                (System_Predicate_T__o *)v19,
                (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_B2C434(All, v16);
  }
  return All->fields._size > 0;
}


bool __fastcall AiLogic__checkThinking_21171696(
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
  if ( (byte_4185A76 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B2C35C(&AiLogic_AiInfo_TypeInfo, fieldData);
    byte_4185A76 = 1;
  }
  if ( !fieldData )
    sub_B2C434(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_B2C42C(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v12);
}


bool __fastcall AiLogic__checkThinking_21174380(
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
  ConditionsInformation_CheckInfo_o *v32; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x22
  const MethodInfo *v34; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *Bdata; // x1
  int32_t v36; // w4
  BattleServantData_array *FieldEnemyServantList; // x0
  const MethodInfo_2EF46B0 *v38; // x2
  System_Collections_Generic_IEnumerable_T__o *v39; // x1
  struct BattleData_o *v40; // x8
  AiLogic_o *v41; // x0
  System_Collections_Generic_List_AiInterface__o *v42; // x1
  bool v43; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v45; // x3
  AiLogic_o *v46; // x21
  System_Int64_array *wkZero; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int64_array *v50; // x28
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Int64_array *v54; // x20
  int32_t refine; // w8
  _BOOL4 v56; // w26
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x3
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  unsigned __int64 v62; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v65; // x3
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
  __int64 v76; // x1
  __int64 v77; // x3
  Il2CppObject *v78; // x20
  Il2CppClass *v79; // x8
  unsigned __int64 v80; // x10
  int32_t *v81; // x11
  __int64 v82; // x0
  __int64 v83; // x3
  Il2CppClass *v84; // x8
  unsigned int v85; // w25
  struct BattleData_o *v86; // x21
  unsigned __int64 v87; // x10
  int32_t *v88; // x11
  __int64 v89; // x0
  System_Double_array *v90; // x1
  int v91; // w20
  int32_t v92; // w8
  AiLogic_o *v93; // x20
  Il2CppObject *v94; // x25
  Il2CppClass *v95; // x8
  unsigned __int64 v96; // x10
  int32_t *v97; // x11
  __int64 v98; // x0
  __int64 v99; // x3
  Il2CppClass *v100; // x8
  unsigned int v101; // w21
  struct BattleData_o *v102; // x22
  unsigned __int64 v103; // x10
  int32_t *v104; // x11
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  __int64 v108; // x9
  __int64 v109; // x10
  unsigned __int64 v110; // x11
  __int64 v111; // x11
  _BOOL8 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x3
  AiLogic_AiInfo_o *v115; // x22
  int v116; // w21
  System_Int64_array *v117; // x2
  int v118; // w8
  Il2CppObject *v119; // x25
  Il2CppClass *v120; // x8
  unsigned __int64 v121; // x10
  int32_t *v122; // x11
  __int64 v123; // x0
  __int64 v124; // x3
  Il2CppClass *v125; // x8
  unsigned int v126; // w21
  struct BattleData_o *v127; // x22
  unsigned __int64 v128; // x10
  int32_t *v129; // x11
  __int64 v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  unsigned __int64 v133; // x8
  unsigned int v134; // w10
  double v135; // d0
  _BOOL8 v136; // x0
  __int64 v137; // x1
  __int64 v138; // x3
  Il2CppObject *v139; // x25
  Il2CppClass *v140; // x8
  unsigned __int64 v141; // x10
  int32_t *v142; // x11
  __int64 v143; // x0
  __int64 v144; // x3
  Il2CppClass *v145; // x8
  __int64 v146; // x2
  struct BattleData_o *v147; // x23
  unsigned __int64 v148; // x10
  int32_t *v149; // x11
  unsigned int v150; // w26
  __int64 v151; // x0
  __int64 v152; // x0
  __int64 v153; // x1
  __int64 v154; // x9
  __int64 v155; // x10
  unsigned __int64 aiType; // x11
  __int64 v157; // x11
  _BOOL8 v158; // x0
  __int64 v159; // x1
  __int64 v160; // x3
  char v161; // w20
  __int64 v163; // x0
  __int64 v164; // x0
  __int64 v165; // x0
  __int64 v166; // x0
  __int64 v167; // x0
  _BOOL4 v168; // [xsp+0h] [xbp-E0h]
  int v169; // [xsp+Ch] [xbp-D4h]
  AiLogic_AiInfo_o *v170; // [xsp+10h] [xbp-D0h]
  ConditionsInformation_ISCheckFunction_o *func; // [xsp+18h] [xbp-C8h]
  System_Int64_array *entVals; // [xsp+20h] [xbp-C0h]
  AiLogic_o *v175; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v176[2]; // [xsp+38h] [xbp-A8h] BYREF
  int v177; // [xsp+6Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v178; // [xsp+70h] [xbp-70h] BYREF
  int32_t v179; // [xsp+8Ch] [xbp-54h] BYREF

  v175 = this;
  if ( (byte_4185A7C & 1) == 0 )
  {
    sub_B2C35C(&AiInterface_TypeInfo, aiInfo);
    sub_B2C35C(&Ai_COND_TypeInfo, v8);
    sub_B2C35C(&ConditionsInformation_TypeInfo, v9);
    sub_B2C35C(&double___TypeInfo, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Skip_long___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Take_long___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_long___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v16);
    sub_B2C35C(&long___TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiInterface__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiInterface___ctor__, v21);
    sub_B2C35C(&System_Collections_Generic_List_AiInterface__TypeInfo, v22);
    sub_B2C35C(&StringLiteral_9336/*"NOT_"*/, v23);
    this = (AiLogic_o *)sub_B2C35C(&StringLiteral_1/*""*/, v24);
    byte_4185A7C = 1;
  }
  v179 = 0;
  memset(&v178, 0, sizeof(v178));
  v177 = 0;
  if ( !aiEnt )
    goto LABEL_262;
  this = (AiLogic_o *)Ai__getCond(aiEnt->fields.cond, (const MethodInfo *)aiInfo);
  v179 = (int)this;
  if ( !aiInfo )
    goto LABEL_262;
  cond = aiEnt->fields.cond;
  v26 = (System_String_o *)StringLiteral_9336/*"NOT_"*/;
  v27 = (System_String_o *)StringLiteral_1/*""*/;
  this = (AiLogic_o *)j_il2cpp_value_box_0(Ai_COND_TypeInfo, &v179);
  if ( !this )
    goto LABEL_262;
  v28 = this;
  if ( cond >= 0 )
    v26 = v27;
  v29 = (System_String_o *)((__int64 (__fastcall *)(AiLogic_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  v179 = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
  System_String__Concat_44305532(v26, v29, 0LL);
  v30 = v179;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  v31 = ConditionsInformation__getCheckFunction(v30, 0LL);
  if ( !v31 )
    goto LABEL_257;
  v32 = v31;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v32->fields.target )
  {
    case 1:
      if ( !v33 )
        goto LABEL_262;
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v175->fields.Bdata;
      goto LABEL_79;
    case 2:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      uniqueId = aiInfo->fields.uniqueId;
      if ( aiInfo->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
      goto LABEL_79;
    case 3:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 4:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 5:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( aiInfo->fields.aiType != 1 )
      {
        if ( !this || !v33 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].fields.Bdata;
        goto LABEL_79;
      }
      if ( !this )
        goto LABEL_262;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
      v40 = v175->fields.Bdata;
      if ( !v40 )
        goto LABEL_262;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_48;
      goto LABEL_24;
    case 6:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        v40 = v175->fields.Bdata;
        if ( !v40 )
          goto LABEL_262;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_48:
          if ( !v33 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v40->fields.playerFieldStatus;
        }
        else
        {
LABEL_24:
          if ( !v33 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v40->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v33 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].monitor;
      }
LABEL_79:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        Bdata,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AiInterface__Add__);
      goto LABEL_84;
    case 7:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 8:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
      else
      {
        if ( !this )
          goto LABEL_262;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v33 )
          goto LABEL_262;
      }
LABEL_82:
      v39 = (System_Collections_Generic_IEnumerable_T__o *)this;
      v38 = (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
LABEL_83:
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v33,
        v39,
        v38);
LABEL_84:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, (const MethodInfo *)aiInfo);
      v46 = this;
      v170 = aiInfo;
      wkZero = v175->fields.wkZero;
      v169 = cond;
      if ( !v32->fields.isParams )
      {
        if ( v32->fields.isIndiv )
        {
          if ( !this )
            goto LABEL_262;
          if ( this->fields._aiType >= 2 )
          {
            v52 = System_Linq_Enumerable__Skip_long_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)this,
                    1,
                    (const MethodInfo_1A9A2A0 *)Method_System_Linq_Enumerable_Skip_long___);
            v53 = System_Linq_Enumerable__Take_long_(
                    v52,
                    v46->fields._aiType - 1,
                    (const MethodInfo_1A9A5F4 *)Method_System_Linq_Enumerable_Take_long___);
            v54 = System_Linq_Enumerable__ToArray_long_(
                    v53,
                    (const MethodInfo_1A9AF3C *)Method_System_Linq_Enumerable_ToArray_long___);
            this = (AiLogic_o *)sub_B2C374(long___TypeInfo, 1LL);
            if ( v46->fields._aiType )
            {
              if ( !this )
                goto LABEL_262;
              if ( this->fields._aiType )
              {
                thinkList = v46->fields._thinkList;
                v50 = wkZero;
                wkZero = v54;
                goto LABEL_99;
              }
            }
LABEL_277:
            v167 = sub_B2C460(this);
            sub_B2C400(v167, 0LL);
          }
        }
LABEL_94:
        v50 = v175->fields.wkZero;
        goto LABEL_100;
      }
      if ( !this )
        goto LABEL_262;
      if ( this->fields._aiType < 2 )
        goto LABEL_94;
      v48 = System_Linq_Enumerable__Skip_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)this,
              1,
              (const MethodInfo_1A9A2A0 *)Method_System_Linq_Enumerable_Skip_long___);
      v49 = System_Linq_Enumerable__Take_long_(
              v48,
              v46->fields._aiType - 1,
              (const MethodInfo_1A9A5F4 *)Method_System_Linq_Enumerable_Take_long___);
      v50 = System_Linq_Enumerable__ToArray_long_(
              v49,
              (const MethodInfo_1A9AF3C *)Method_System_Linq_Enumerable_ToArray_long___);
      this = (AiLogic_o *)sub_B2C374(long___TypeInfo, 1LL);
      if ( !v46->fields._aiType )
        goto LABEL_277;
      if ( !this )
        goto LABEL_262;
      if ( !this->fields._aiType )
        goto LABEL_277;
      thinkList = v46->fields._thinkList;
LABEL_99:
      v46 = this;
      this->fields._thinkList = thinkList;
LABEL_100:
      refine = v32->fields.refine;
      func = v32->fields.func;
      entVals = (System_Int64_array *)v46;
      if ( refine )
      {
        v56 = 0;
      }
      else
      {
        if ( !v33 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v176,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v178 = v176[0];
        while ( 1 )
        {
          v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v178,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v57 )
            break;
          current = v178.fields.current;
          if ( !v178.fields.current )
            sub_B2C434(v57, v58);
          klass = v178.fields.current->klass;
          if ( *(_WORD *)&v178.fields.current->klass->_2.bitflags1 )
          {
            v62 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              ++v62;
              p_offset += 4;
              if ( v62 >= *(unsigned __int16 *)&v178.fields.current->klass->_2.bitflags1 )
                goto LABEL_110;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_110:
            p_method = sub_AC5258(v178.fields.current, AiInterface_TypeInfo, 1LL, v59);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v32,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v66 = current->klass;
            paramater = v32->fields.paramater;
            v68 = v175->fields.Bdata;
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
              v71 = sub_AC5258(current, AiInterface_TypeInfo, 0LL, v65);
            }
            v72 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v71)(
                                           current,
                                           v68,
                                           paramater,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v50,
                                           aiEnt,
                                           *(_QWORD *)(v71 + 8));
            if ( !func )
              sub_B2C434(0LL, v72);
            if ( ConditionsInformation_ISCheckFunction__Invoke(func, v72, entVals, 0LL) )
            {
              v73 = 1;
              goto LABEL_123;
            }
          }
        }
        v73 = 0;
LABEL_123:
        *((_DWORD *)&v176[1].fields.list + v177++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v178,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v56 = v73 != 0;
        if ( v177 )
        {
          v74 = v177 - 1;
          if ( *((_DWORD *)&v176[0].fields.current + v177 + 1) == 1707 )
          {
LABEL_150:
            v177 = v74;
LABEL_187:
            v116 = cond;
            v115 = v170;
            goto LABEL_255;
          }
        }
        refine = v32->fields.refine;
      }
      if ( refine == 1 )
      {
        if ( !v33 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v176,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v178 = v176[0];
        while ( 1 )
        {
          v75 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v178,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v75 )
            break;
          v78 = v178.fields.current;
          if ( !v178.fields.current )
            sub_B2C434(v75, v76);
          v79 = v178.fields.current->klass;
          if ( *(_WORD *)&v178.fields.current->klass->_2.bitflags1 )
          {
            v80 = 0LL;
            v81 = &v79->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v81 - 1) != AiInterface_TypeInfo )
            {
              ++v80;
              v81 += 4;
              if ( v80 >= *(unsigned __int16 *)&v178.fields.current->klass->_2.bitflags1 )
                goto LABEL_135;
            }
            v82 = (__int64)&v79->vtable[*v81 + 1].method;
          }
          else
          {
LABEL_135:
            v82 = sub_AC5258(v178.fields.current, AiInterface_TypeInfo, 1LL, v77);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v82)(
                  v78,
                  v32,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v82 + 8)) & 1) != 0 )
          {
            v84 = v78->klass;
            v85 = v32->fields.paramater;
            v86 = v175->fields.Bdata;
            if ( *(_WORD *)&v78->klass->_2.bitflags1 )
            {
              v87 = 0LL;
              v88 = &v84->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v88 - 1) != AiInterface_TypeInfo )
              {
                ++v87;
                v88 += 4;
                if ( v87 >= *(unsigned __int16 *)&v78->klass->_2.bitflags1 )
                  goto LABEL_142;
              }
              v89 = (__int64)&v84->vtable[*v88].method;
            }
            else
            {
LABEL_142:
              v89 = sub_AC5258(v78, AiInterface_TypeInfo, 0LL, v83);
            }
            v90 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v89)(
                                           v78,
                                           v86,
                                           v85,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v50,
                                           aiEnt,
                                           *(_QWORD *)(v89 + 8));
            if ( !func )
              sub_B2C434(0LL, v90);
            if ( !ConditionsInformation_ISCheckFunction__Invoke(func, v90, entVals, 0LL) )
            {
              v91 = 0;
              goto LABEL_148;
            }
          }
        }
        v91 = 1;
LABEL_148:
        *((_DWORD *)&v176[1].fields.list + v177++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v178,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v56 = v91 != 0;
        if ( v177 )
        {
          v74 = v177 - 1;
          if ( *((_DWORD *)&v176[0].fields.current + v177 + 1) == 1707 )
            goto LABEL_150;
        }
      }
      v92 = v32->fields.refine;
      if ( v92 == 2 )
      {
        this = (AiLogic_o *)sub_B2C374(double___TypeInfo, 0LL);
        if ( v33 )
        {
          v93 = this;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            v176,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v178 = v176[0];
LABEL_247:
          while ( 1 )
          {
            v158 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v178,
                     (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v158 )
              break;
            v139 = v178.fields.current;
            if ( !v178.fields.current )
              sub_B2C434(v158, v159);
            v140 = v178.fields.current->klass;
            if ( *(_WORD *)&v178.fields.current->klass->_2.bitflags1 )
            {
              v141 = 0LL;
              v142 = &v140->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v142 - 1) != AiInterface_TypeInfo )
              {
                ++v141;
                v142 += 4;
                if ( v141 >= *(unsigned __int16 *)&v178.fields.current->klass->_2.bitflags1 )
                  goto LABEL_222;
              }
              v143 = (__int64)&v140->vtable[*v142 + 1].method;
            }
            else
            {
LABEL_222:
              v143 = sub_AC5258(v178.fields.current, AiInterface_TypeInfo, 1LL, v160);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v143)(
                    v139,
                    v32,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v143 + 8)) & 1) != 0 )
            {
              v145 = v139->klass;
              v146 = (unsigned int)v32->fields.paramater;
              v168 = v56;
              v147 = v175->fields.Bdata;
              if ( *(_WORD *)&v139->klass->_2.bitflags1 )
              {
                v148 = 0LL;
                v149 = &v145->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v149 - 1) != AiInterface_TypeInfo )
                {
                  ++v148;
                  v149 += 4;
                  if ( v148 >= *(unsigned __int16 *)&v139->klass->_2.bitflags1 )
                    goto LABEL_229;
                }
                v151 = (__int64)&v145->vtable[*v149].method;
              }
              else
              {
LABEL_229:
                v150 = v32->fields.paramater;
                v151 = sub_AC5258(v139, AiInterface_TypeInfo, 0LL, v144);
                v146 = v150;
              }
              v152 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, __int64, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v151)(
                       v139,
                       v147,
                       v146,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v50,
                       aiEnt,
                       *(_QWORD *)(v151 + 8));
              if ( !v152 )
                sub_B2C434(0LL, v153);
              v154 = *(_QWORD *)(v152 + 24);
              if ( v154 )
              {
                v56 = v168;
                if ( !v93 )
                  sub_B2C434(v152, v153);
                if ( !*(_QWORD *)&v93->fields._aiType )
                  v93 = (AiLogic_o *)v152;
              }
              else
              {
                v56 = v168;
              }
              if ( (int)v154 >= 1 )
              {
                v155 = 4LL;
                while ( 1 )
                {
                  if ( !v93 )
                    sub_B2C434(v152, v153);
                  aiType = (unsigned int)v93->fields._aiType;
                  if ( v155 - 4 < (int)aiType )
                  {
                    if ( v155 - 4 >= aiType )
                    {
                      v165 = sub_B2C460(v152);
                      sub_B2C400(v165, 0LL);
                    }
                    if ( *((double *)&v93->klass + v155) < *(double *)(v152 + 8 * v155) )
                      break;
                  }
                  v157 = v155 - 3;
                  ++v155;
                  if ( v157 >= (int)v154 )
                    goto LABEL_247;
                }
                v93 = (AiLogic_o *)v152;
              }
            }
          }
          *((_DWORD *)&v176[1].fields.list + v177++) = 1524;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v178,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          v116 = v169;
          v117 = entVals;
          v115 = v170;
          if ( v177 )
          {
            v118 = v177 - 1;
            if ( *((_DWORD *)&v176[0].fields.current + v177 + 1) == 1524 )
              goto LABEL_250;
          }
LABEL_251:
          if ( v93 )
          {
            if ( !*(_QWORD *)&v93->fields._aiType )
              goto LABEL_255;
            goto LABEL_253;
          }
        }
LABEL_262:
        sub_B2C434(this, aiInfo);
      }
      if ( v92 != 4 )
      {
        if ( v92 != 3 )
          goto LABEL_187;
        this = (AiLogic_o *)sub_B2C374(double___TypeInfo, 0LL);
        if ( !v33 )
          goto LABEL_262;
        v93 = this;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v176,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v178 = v176[0];
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
LABEL_183:
              v112 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v178,
                       (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
              if ( !v112 )
              {
                *((_DWORD *)&v176[1].fields.list + v177++) = 1335;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v178,
                  (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
                v115 = v170;
                v116 = cond;
                v117 = entVals;
                if ( !v177 )
                  goto LABEL_251;
                v118 = v177 - 1;
                if ( *((_DWORD *)&v176[0].fields.current + v177 + 1) != 1335 )
                  goto LABEL_251;
LABEL_250:
                v177 = v118;
                goto LABEL_251;
              }
              v94 = v178.fields.current;
              if ( !v178.fields.current )
                sub_B2C434(v112, v113);
              v95 = v178.fields.current->klass;
              if ( *(_WORD *)&v178.fields.current->klass->_2.bitflags1 )
              {
                v96 = 0LL;
                v97 = &v95->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v97 - 1) != AiInterface_TypeInfo )
                {
                  ++v96;
                  v97 += 4;
                  if ( v96 >= *(unsigned __int16 *)&v178.fields.current->klass->_2.bitflags1 )
                    goto LABEL_161;
                }
                v98 = (__int64)&v95->vtable[*v97 + 1].method;
              }
              else
              {
LABEL_161:
                v98 = sub_AC5258(v178.fields.current, AiInterface_TypeInfo, 1LL, v114);
              }
            }
            while ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v98)(
                       v94,
                       v32,
                       wkZero,
                       aiEnt,
                       *(_QWORD *)(v98 + 8)) & 1) == 0 );
            v100 = v94->klass;
            v101 = v32->fields.paramater;
            v102 = v175->fields.Bdata;
            if ( *(_WORD *)&v94->klass->_2.bitflags1 )
            {
              v103 = 0LL;
              v104 = &v100->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v104 - 1) != AiInterface_TypeInfo )
              {
                ++v103;
                v104 += 4;
                if ( v103 >= *(unsigned __int16 *)&v94->klass->_2.bitflags1 )
                  goto LABEL_168;
              }
              v105 = (__int64)&v100->vtable[*v104].method;
            }
            else
            {
LABEL_168:
              v105 = sub_AC5258(v94, AiInterface_TypeInfo, 0LL, v99);
            }
            v106 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v105)(
                     v94,
                     v102,
                     v101,
                     (unsigned int)turn,
                     (unsigned int)actcnt,
                     v50,
                     aiEnt,
                     *(_QWORD *)(v105 + 8));
            if ( !v106 )
              sub_B2C434(0LL, v107);
            v108 = *(_QWORD *)(v106 + 24);
            if ( !v108 )
              break;
            if ( !v93 )
              sub_B2C434(v106, v107);
            if ( *(_QWORD *)&v93->fields._aiType )
              break;
LABEL_182:
            v93 = (AiLogic_o *)v106;
          }
          if ( (int)v108 >= 1 )
          {
            v109 = 4LL;
            while ( 1 )
            {
              if ( !v93 )
                sub_B2C434(v106, v107);
              v110 = (unsigned int)v93->fields._aiType;
              if ( v109 - 4 < (int)v110 )
              {
                if ( v109 - 4 >= v110 )
                {
                  v166 = sub_B2C460(v106);
                  sub_B2C400(v166, 0LL);
                }
                if ( *(double *)(v106 + 8 * v109) < *((double *)&v93->klass + v109) )
                  goto LABEL_182;
              }
              v111 = v109 - 3;
              ++v109;
              if ( v111 >= (int)v108 )
                goto LABEL_183;
            }
          }
        }
      }
      this = (AiLogic_o *)sub_B2C374(double___TypeInfo, 1LL);
      if ( !v33 )
        goto LABEL_262;
      v93 = this;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v176,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v178 = v176[0];
      while ( 1 )
      {
        v136 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v178,
                 (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v136 )
          break;
        v119 = v178.fields.current;
        if ( !v178.fields.current )
          sub_B2C434(v136, v137);
        v120 = v178.fields.current->klass;
        if ( *(_WORD *)&v178.fields.current->klass->_2.bitflags1 )
        {
          v121 = 0LL;
          v122 = &v120->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v122 - 1) != AiInterface_TypeInfo )
          {
            ++v121;
            v122 += 4;
            if ( v121 >= *(unsigned __int16 *)&v178.fields.current->klass->_2.bitflags1 )
              goto LABEL_195;
          }
          v123 = (__int64)&v120->vtable[*v122 + 1].method;
        }
        else
        {
LABEL_195:
          v123 = sub_AC5258(v178.fields.current, AiInterface_TypeInfo, 1LL, v138);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v123)(
                v119,
                v32,
                wkZero,
                aiEnt,
                *(_QWORD *)(v123 + 8)) & 1) != 0 )
        {
          v125 = v119->klass;
          v126 = v32->fields.paramater;
          v127 = v175->fields.Bdata;
          if ( *(_WORD *)&v119->klass->_2.bitflags1 )
          {
            v128 = 0LL;
            v129 = &v125->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v129 - 1) != AiInterface_TypeInfo )
            {
              ++v128;
              v129 += 4;
              if ( v128 >= *(unsigned __int16 *)&v119->klass->_2.bitflags1 )
                goto LABEL_202;
            }
            v130 = (__int64)&v125->vtable[*v129].method;
          }
          else
          {
LABEL_202:
            v130 = sub_AC5258(v119, AiInterface_TypeInfo, 0LL, v124);
          }
          v131 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v130)(
                   v119,
                   v127,
                   v126,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v50,
                   aiEnt,
                   *(_QWORD *)(v130 + 8));
          if ( !v131 )
            sub_B2C434(0LL, v132);
          if ( (int)*(_QWORD *)(v131 + 24) >= 1 )
          {
            v133 = 0LL;
            v134 = *(_QWORD *)(v131 + 24);
            do
            {
              if ( v133 >= v134 )
              {
                v163 = sub_B2C460(v131);
                sub_B2C400(v163, 0LL);
              }
              if ( !v93 )
                sub_B2C434(v131, v132);
              if ( !v93->fields._aiType )
              {
                v164 = sub_B2C460(v131);
                sub_B2C400(v164, 0LL);
              }
              v135 = *(double *)(v131 + 32 + 8 * v133++);
              *(double *)&v93->fields._thinkList = v135 + *(double *)&v93->fields._thinkList;
              v134 = *(_DWORD *)(v131 + 24);
            }
            while ( (__int64)v133 < (int)v134 );
          }
        }
      }
      *((_DWORD *)&v176[1].fields.list + v177++) = 1694;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v178,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      v115 = v170;
      v116 = cond;
      v117 = entVals;
      if ( v177 && *((_DWORD *)&v176[0].fields.current + v177 + 1) == 1694 )
        --v177;
LABEL_253:
      this = (AiLogic_o *)func;
      if ( !func )
        goto LABEL_262;
      LOBYTE(v56) = ConditionsInformation_ISCheckFunction__Invoke(func, (System_Double_array *)v93, v117, 0LL);
LABEL_255:
      v161 = (v116 < 0) ^ v56;
      if ( (v161 & 1) != 0 && !AiLogic_AiInfo__CheckAiCanActionFromTargets(v115, aiEnt, 0LL) )
LABEL_257:
        v161 = 0;
      return v161 & 1;
    case 9:
      v41 = v175;
      v43 = 1;
      v42 = (System_Collections_Generic_List_AiInterface__o *)v33;
      goto LABEL_60;
    case 0xA:
      v43 = 1;
      v36 = 1;
      goto LABEL_57;
    case 0xB:
      v43 = 1;
      v36 = 2;
LABEL_57:
      v41 = v175;
      v42 = (System_Collections_Generic_List_AiInterface__o *)v33;
      goto LABEL_58;
    case 0xC:
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v33 )
        goto LABEL_262;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v33,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v175->fields.Bdata;
      if ( !this )
        goto LABEL_262;
      FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
      v38 = (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
      v39 = (System_Collections_Generic_IEnumerable_T__o *)FieldEnemyServantList;
      goto LABEL_83;
    case 0xD:
      v41 = v175;
      v42 = (System_Collections_Generic_List_AiInterface__o *)v33;
      v43 = 0;
LABEL_60:
      v45 = aiInfo;
      v36 = 0;
      goto LABEL_61;
    case 0xE:
      v36 = 1;
      goto LABEL_51;
    case 0xF:
      v36 = 2;
LABEL_51:
      v41 = v175;
      v42 = (System_Collections_Generic_List_AiInterface__o *)v33;
      v43 = 0;
LABEL_58:
      v45 = aiInfo;
LABEL_61:
      AiLogic__getTargetPosServant(v41, v42, v43, v45, v36, v34);
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
  AiLogic_AiInfo_o *v19; // x27
  int32_t v20; // w4
  const MethodInfo *v21; // x6
  AiEntity_o *result; // x0
  __int64 v23; // x10

  v15 = this;
  if ( (byte_4185A78 & 1) == 0 )
  {
    sub_B2C35C(&AiEntity_TypeInfo, svtData);
    this = (AiLogic_o *)sub_B2C35C(&AiLogic_AiInfo_TypeInfo, v16);
    byte_4185A78 = 1;
  }
  if ( !svtData )
    sub_B2C434(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v18 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v19 = (AiLogic_AiInfo_o *)sub_B2C42C(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v19, 1, uniqueId, v18, logicAi, procState, 0LL);
  *info = v19;
  sub_B2C2F8(info, v19);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v20, timingPriority, v21);
  if ( result )
  {
    v23 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
    {
      if ( (AiEntity_c *)result->klass->_2.typeHierarchy[v23 - 1] != AiEntity_TypeInfo )
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
  struct BattleData_o *v23; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v25; // x8
  struct BattleData_o *v26; // x8
  struct BattleData_o *v27; // x8

  v11 = this;
  if ( (byte_4185A7A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, aiInfo);
    this = (AiLogic_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4185A7A = 1;
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
                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
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
      v23 = v11->fields.Bdata;
      if ( !v23 )
        goto LABEL_37;
      playerNpCount = v23->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
      v23->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v25 = v11->fields.Bdata;
      if ( !v25 )
        goto LABEL_37;
      if ( (v25->fields.playerNpCount & 0x80000000) != 0 )
        v25->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v26 = v11->fields.Bdata;
      if ( !v26 )
        goto LABEL_37;
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
LABEL_37:
    sub_B2C434(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *__fastcall AiLogic__getAction_21172764(
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
  if ( (byte_4185A79 & 1) == 0 )
  {
    sub_B2C35C(&AiFieldEntity_TypeInfo, fieldData);
    this = (AiLogic_o *)sub_B2C35C(&AiLogic_AiInfo_TypeInfo, v14);
    byte_4185A79 = 1;
  }
  if ( !fieldData )
    sub_B2C434(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v17 = (AiLogic_AiInfo_o *)sub_B2C42C(AiLogic_AiInfo_TypeInfo);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v42; // x23
  AiLogic___c_c *v43; // x8
  struct AiLogic___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_1; // x24
  Il2CppObject *v46; // x25
  struct AiLogic___c_StaticFields *v47; // x0
  AiLogic___c__DisplayClass16_1_o *v48; // x24
  TitleInfoControl_EventEndTimeInfo_o *v49; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x25
  const MethodInfo *v51; // x5
  int v52; // w8
  char *v53; // x24
  WeightRate_int__o *v54; // x25
  const MethodInfo *v55; // x5
  __int64 v56; // x8
  unsigned __int64 v57; // x26
  char *v58; // x27
  int32_t Next; // w0
  const MethodInfo *v60; // x5
  AiBaseEntity_o *v61; // x24
  __int64 v63; // x0

  if ( (byte_4185A7B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_AiBaseEntity___ctor__, aiInfo);
    sub_B2C35C(&System_Comparison_AiBaseEntity__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v21);
    sub_B2C35C(&Method_System_Predicate_AiBaseEntity___ctor__, v22);
    sub_B2C35C(&System_Predicate_AiBaseEntity__TypeInfo, v23);
    sub_B2C35C(&Method_AiLogic___c__getBasicAct_b__16_1__, v24);
    sub_B2C35C(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v25);
    sub_B2C35C(&AiLogic___c__DisplayClass16_0_TypeInfo, v26);
    sub_B2C35C(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v27);
    sub_B2C35C(&AiLogic___c__DisplayClass16_1_TypeInfo, v28);
    sub_B2C35C(&AiLogic___c_TypeInfo, v29);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v30);
    sub_B2C35C(&Method_WeightRate_int__getCount__, v31);
    sub_B2C35C(&Method_WeightRate_int__getData__, v32);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v33);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v34);
    sub_B2C35C(&WeightRate_int__TypeInfo, v35);
    byte_4185A7B = 1;
  }
  v36 = (AiLogic___c__DisplayClass16_0_o *)sub_B2C42C(AiLogic___c__DisplayClass16_0_TypeInfo);
  AiLogic___c__DisplayClass16_0___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_44;
  v36->fields.procState = procState;
  v36->fields.actcnt = actcnt;
  v36->fields.timingPriority = timingPriority;
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = this->fields._thinkList;
  v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v41,
    (Il2CppObject *)v36,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_AiBaseEntity___ctor__);
  if ( !thinkList )
    goto LABEL_44;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
          (System_Predicate_T__o *)v41,
          (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v42 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)All;
  v43 = AiLogic___c_TypeInfo;
  if ( (BYTE3(AiLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v43 = AiLogic___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = AiLogic___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_1,
      v46,
      Method_AiLogic___c__getBasicAct_b__16_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_AiBaseEntity___ctor__);
    v47 = AiLogic___c_TypeInfo->static_fields;
    v47->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_B2C2F8(&v47->__9__16_1, _9__16_1);
  }
  if ( !v42 )
LABEL_44:
    sub_B2C434(All, v38);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v42,
    (System_Comparison_T__o *)_9__16_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v42->fields._size >= 1 )
  {
    while ( 1 )
    {
      v48 = (AiLogic___c__DisplayClass16_1_o *)sub_B2C42C(AiLogic___c__DisplayClass16_1_TypeInfo);
      AiLogic___c__DisplayClass16_1___ctor(v48, 0LL);
      if ( v42->fields._size < 1 )
        return 0LL;
      v49 = v42->fields._items->m_Items[0];
      if ( !v49 )
        goto LABEL_44;
      if ( !v48 )
        goto LABEL_44;
      v48->fields.priority = HIDWORD(v49->fields.end_time);
      v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v50,
        (Il2CppObject *)v48,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_AiBaseEntity___ctor__);
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v42,
              (System_Predicate_T__o *)v50,
              (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_44;
      All = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_44;
      v52 = *((_DWORD *)All + 6);
      v53 = (char *)All;
      if ( v52 <= 1 )
        break;
      v54 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v54, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
      v56 = *((_QWORD *)v53 + 3);
      if ( (int)v56 >= 1 )
      {
        v57 = 0LL;
        v58 = v53 + 32;
        while ( v57 < (unsigned int)v56 )
        {
          All = (void *)AiLogic__checkThinking_21174380(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v58[8 * v57],
                          turn,
                          v36->fields.actcnt,
                          v55);
          if ( v57 >= *((unsigned int *)v53 + 6) )
            break;
          v38 = *(_QWORD *)&v58[8 * v57];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v38 || !v54 )
              goto LABEL_44;
            WeightRate_int___setWeight(
              v54,
              *(_DWORD *)(v38 + 32),
              v57,
              (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v42,
                            (WarBoardManager_TaskList_o *)v38,
                            (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v56) = *((_DWORD *)v53 + 6);
          if ( (__int64)++v57 >= (int)v56 )
            goto LABEL_31;
        }
LABEL_43:
        v63 = sub_B2C460(All);
        sub_B2C400(v63, 0LL);
      }
LABEL_31:
      if ( !v54 )
        goto LABEL_44;
      if ( WeightRate_int___getCount(v54, (const MethodInfo_29E3680 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v54->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v54, Next, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v53 + 6) )
          goto LABEL_43;
        v61 = *(AiBaseEntity_o **)&v53[8 * (int)All + 32];
        if ( AiLogic__checkThinking_21174380(this, aiInfo, v61, turn, v36->fields.actcnt, v60) )
          return v61;
        goto LABEL_39;
      }
LABEL_40:
      if ( v42->fields._size <= 0 )
        return 0LL;
    }
    if ( !v52 )
      goto LABEL_43;
    All = (void *)AiLogic__checkThinking_21174380(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    v36->fields.actcnt,
                    v51);
    if ( !*((_DWORD *)v53 + 6) )
      goto LABEL_43;
    v61 = (AiBaseEntity_o *)*((_QWORD *)v53 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v61;
LABEL_39:
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v42,
      (WarBoardManager_TaskList_o *)v61,
      (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  if ( (byte_4185A7D & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B2C35C(&Method_System_Collections_Generic_List_AiInterface__Add__, targetList);
    byte_4185A7D = 1;
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
    sub_B2C434(this, targetList);
  this = (AiLogic_o *)BattleData__getServantDataFromIndex((BattleData_o *)this, pos, v13 & 1, 0LL);
  if ( this )
  {
    if ( targetList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)targetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AiInterface__Add__);
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
  _QWORD *p_thinkList; // x19
  int32_t aiType; // w8
  AiBaseEntity_o *v13; // x10
  _BOOL4 v14; // w10
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v17; // x21

  v6 = this;
  if ( (byte_4185A74 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___67299008, aiInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v8);
    this = (AiLogic_o *)sub_B2C35C(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v9);
    byte_4185A74 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  p_thinkList = &v6->fields._thinkList;
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
      sub_B2C434(this, aiInfo);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           (const MethodInfo *)aiInfo);
LABEL_18:
        v16 = ListFormGroupId;
        v17 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v17,
          v16,
          (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___67299008);
        *p_thinkList = v17;
        sub_B2C2F8(p_thinkList, v17);
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
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)v12, (System_Int32_array **)inLogicAi, v19, v20, v21, v22, v23, v24);
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
  __int64 v13; // x1
  void *checkedInfo; // x0
  _DWORD *v15; // x22
  int32_t v16; // w20
  int32_t v17; // w21

  if ( (byte_4186B9D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, svtData);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__, v11);
    byte_4186B9D = 1;
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
              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v12,
                      (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v12,
                      (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v12,
                      (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      v15 = (_DWORD *)*((_QWORD *)checkedInfo + 3);
      if ( !v15 )
        return;
      v17 = v15[4];
      v16 = v15[5];
      checkedInfo = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 392LL))(
                              *((_QWORD *)checkedInfo + 3),
                              *(_QWORD *)(*(_QWORD *)v15 + 400LL));
      if ( !svtData )
LABEL_17:
        sub_B2C434(checkedInfo, v13);
      BattleServantData__addSkillInfo(svtData, v17, v16, (int32_t)checkedInfo, v15[9], -1LL, -1, 0LL, 0LL);
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

  if ( (byte_4186B9C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      aiBaseEntity);
    byte_4186B9C = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                          aiBaseEntity,
                                          aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_B2C434(v7, v8);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)checkedInfo,
           v7,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
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
  __int64 v20; // x1
  System_Xml_XmlQualifiedName_o *v21; // x21

  if ( (byte_4186B9B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__, aiBaseEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v9);
    byte_4186B9B = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (BattleServantConfConponent_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v12,
        (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (BattleServantConfConponent_c *)v12;
      sub_B2C2F8(p_checkedInfo, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    }
    klass = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                               aiBaseEntity,
                                               aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                                               inCheckedInfo,
                                               method);
    if ( p_checkedInfo->klass )
    {
      v21 = klass;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (System_Xml_XmlQualifiedName_o *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)klass,
          v21,
          (System_Xml_Schema_XmlSchemaObject_o *)inCheckedInfo,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_B2C434(klass, v20);
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
  sub_B2C2F8(v8, inSkillInfo);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186B9A & 1) == 0 )
  {
    sub_B2C35C(&AiLogic___c_TypeInfo, v1);
    byte_4186B9A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AiLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return s->fields.priority == this->fields.priority;
}