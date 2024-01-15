void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int64_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F7EE0 & 1) == 0 )
  {
    sub_B16FFC(&long___TypeInfo, method);
    byte_40F7EE0 = 1;
  }
  v4 = (struct System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, v2);
  this->fields.wkZero = v4;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.wkZero, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_40F7ED5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_AiActMaster___, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F7ED5 = 1;
  }
  this->fields.Bdata = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
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
  __int64 v9; // x2
  unsigned int v10; // w8
  _BOOL4 v11; // w0

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
          v10 = partyTargets->m_Items[1];
          return v10 >> 31;
        }
LABEL_20:
        sub_B17100(IsNullOrEmpty, v8, v9);
        sub_B170A0();
      }
LABEL_19:
      sub_B170D4();
    }
LABEL_18:
    LOBYTE(v11) = 0;
    return v11;
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
  v10 = opponentTargets->m_Items[1];
  return v10 >> 31;
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
  int32_t uniqueId; // w24
  AiState_o *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  AiLogic_AiInfo_o *v17; // x25
  const MethodInfo *v18; // x4

  if ( (byte_40F7ED7 & 1) == 0 )
  {
    sub_B16FFC(&AiLogic_AiInfo_TypeInfo, svtData);
    byte_40F7ED7 = 1;
  }
  if ( !svtData )
    sub_B170D4();
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v17 = (AiLogic_AiInfo_o *)sub_B170CC(AiLogic_AiInfo_TypeInfo, v13, v14, v15, v16);
  AiLogic_AiInfo___ctor(v17, 1, uniqueId, v12, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(this, v17, procState, timingPriority, v18);
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
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x20
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40F7ED9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, aiInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9);
    sub_B16FFC(&Method_System_Predicate_AiBaseEntity___ctor__, v10);
    sub_B16FFC(&System_Predicate_AiBaseEntity__TypeInfo, v11);
    sub_B16FFC(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v12);
    sub_B16FFC(&AiLogic___c__DisplayClass12_0_TypeInfo, v13);
    byte_40F7ED9 = 1;
  }
  v14 = (AiLogic___c__DisplayClass12_0_o *)sub_B170CC(
                                             AiLogic___c__DisplayClass12_0_TypeInfo,
                                             aiInfo,
                                             *(_QWORD *)&procState,
                                             *(_QWORD *)&timingPriority,
                                             method);
  AiLogic___c__DisplayClass12_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.procState = procState, v14->fields.timingPriority = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v15),
        thinkList = this->fields._thinkList,
        v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_AiBaseEntity__TypeInfo,
                                                                         v17,
                                                                         v18,
                                                                         v19,
                                                                         v20),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v21,
          (Il2CppObject *)v14,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_AiBaseEntity___ctor__),
        !thinkList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_B170D4();
  }
  return All->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinking_21177852(
        AiLogic_o *this,
        BattleFieldData_o *fieldData,
        int32_t procState,
        BattleLogicBaseAi_o *logicAi,
        const MethodInfo *method)
{
  int32_t index; // w23
  AiState_o *aiState; // x22
  AiLogic_AiInfo_o *v11; // x24
  const MethodInfo *v12; // x4

  if ( (byte_40F7ED8 & 1) == 0 )
  {
    sub_B16FFC(&AiLogic_AiInfo_TypeInfo, fieldData);
    byte_40F7ED8 = 1;
  }
  if ( !fieldData )
    sub_B170D4();
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_B170CC(AiLogic_AiInfo_TypeInfo, fieldData, *(_QWORD *)&procState, logicAi, method);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(this, v11, procState, 0, v12);
}


bool __fastcall AiLogic__checkThinking_21180536(
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
  int32_t v25; // w23
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x20
  System_String_o *v30; // x22
  int32_t v31; // w20
  ConditionsInformation_CheckInfo_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  ConditionsInformation_CheckInfo_o *v37; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x22
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *Bdata; // x1
  int32_t v42; // w4
  BattleData_o *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  BattleData_o *v45; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  const MethodInfo_2F25F28 *v47; // x2
  System_Collections_Generic_IEnumerable_T__o *v48; // x1
  struct BattleData_o *v49; // x0
  bool isEnemyID; // w0
  struct BattleData_o *v51; // x8
  AiLogic_o *v52; // x0
  System_Collections_Generic_List_AiInterface__o *v53; // x1
  bool v54; // w2
  BattleData_o *v55; // x0
  BattleServantData_array *FieldPTList; // x0
  BattleData_o *v57; // x0
  BattleData_o *v58; // x0
  BattleData_o *v59; // x0
  int32_t uniqueId; // w1
  EventMissionProgressRequest_Argument_ProgressData_o *ServantData; // x0
  struct BattleData_o *v62; // x0
  bool v63; // w0
  BattleData_o *v64; // x0
  AiLogic_AiInfo_o *v65; // x3
  System_Int64_array *Vals; // x0
  __int64 v67; // x2
  System_Int64_array *v68; // x21
  struct System_Int64_array *wkZero; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  struct System_Int64_array *v72; // x28
  __int64 v73; // x2
  __int64 v74; // x0
  __int64 v75; // x1
  int64_t v76; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Int64_array *v79; // x20
  __int64 v80; // x2
  int32_t refine; // w8
  _BOOL4 v82; // w26
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  unsigned __int64 v85; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppClass *v88; // x8
  unsigned int paramater; // w25
  struct BattleData_o *v90; // x21
  unsigned __int64 v91; // x10
  int32_t *v92; // x11
  __int64 v93; // x0
  System_Double_array *v94; // x1
  int v95; // w20
  int v96; // w8
  Il2CppObject *v97; // x20
  Il2CppClass *v98; // x8
  unsigned __int64 v99; // x10
  int32_t *v100; // x11
  __int64 v101; // x0
  Il2CppClass *v102; // x8
  unsigned int v103; // w25
  struct BattleData_o *v104; // x21
  unsigned __int64 v105; // x10
  int32_t *v106; // x11
  __int64 v107; // x0
  System_Double_array *v108; // x1
  int v109; // w20
  int32_t v110; // w8
  __int64 v111; // x0
  __int64 v112; // x20
  Il2CppObject *v113; // x25
  Il2CppClass *v114; // x8
  unsigned __int64 v115; // x10
  int32_t *v116; // x11
  __int64 v117; // x0
  Il2CppClass *v118; // x8
  unsigned int v119; // w21
  struct BattleData_o *v120; // x22
  unsigned __int64 v121; // x10
  int32_t *v122; // x11
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x9
  __int64 v128; // x10
  unsigned __int64 v129; // x11
  __int64 v130; // x11
  AiLogic_AiInfo_o *v131; // x22
  int v132; // w21
  System_Int64_array *v133; // x2
  int v134; // w8
  __int64 v135; // x0
  Il2CppObject *v136; // x25
  Il2CppClass *v137; // x8
  unsigned __int64 v138; // x10
  int32_t *v139; // x11
  __int64 v140; // x0
  Il2CppClass *v141; // x8
  unsigned int v142; // w21
  struct BattleData_o *v143; // x22
  unsigned __int64 v144; // x10
  int32_t *v145; // x11
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x1
  __int64 v149; // x2
  unsigned __int64 v150; // x8
  unsigned int v151; // w10
  double v152; // d0
  __int64 v153; // x0
  Il2CppObject *v154; // x25
  Il2CppClass *v155; // x8
  unsigned __int64 v156; // x10
  int32_t *v157; // x11
  __int64 v158; // x0
  Il2CppClass *v159; // x8
  __int64 v160; // x2
  struct BattleData_o *v161; // x23
  unsigned __int64 v162; // x10
  int32_t *v163; // x11
  unsigned int v164; // w26
  __int64 v165; // x0
  __int64 v166; // x0
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x9
  __int64 v170; // x10
  unsigned __int64 v171; // x11
  __int64 v172; // x11
  char v173; // w20
  _BOOL4 v175; // [xsp+0h] [xbp-E0h]
  int v176; // [xsp+Ch] [xbp-D4h]
  AiLogic_AiInfo_o *v177; // [xsp+10h] [xbp-D0h]
  ConditionsInformation_ISCheckFunction_o *func; // [xsp+18h] [xbp-C8h]
  System_Int64_array *entVals; // [xsp+20h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v183[2]; // [xsp+38h] [xbp-A8h] BYREF
  int v184; // [xsp+6Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v185; // [xsp+70h] [xbp-70h] BYREF
  int32_t Cond; // [xsp+8Ch] [xbp-54h] BYREF

  if ( (byte_40F7EDE & 1) == 0 )
  {
    sub_B16FFC(&AiInterface_TypeInfo, aiInfo);
    sub_B16FFC(&Ai_COND_TypeInfo, v8);
    sub_B16FFC(&ConditionsInformation_TypeInfo, v9);
    sub_B16FFC(&double___TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Skip_long___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Take_long___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_long___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v16);
    sub_B16FFC(&long___TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiInterface__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiInterface___ctor__, v21);
    sub_B16FFC(&System_Collections_Generic_List_AiInterface__TypeInfo, v22);
    sub_B16FFC(&StringLiteral_9306/*"NOT_"*/, v23);
    sub_B16FFC(&StringLiteral_1/*""*/, v24);
    byte_40F7EDE = 1;
  }
  Cond = 0;
  memset(&v185, 0, sizeof(v185));
  v184 = 0;
  if ( !aiEnt )
    goto LABEL_262;
  Cond = Ai__getCond(aiEnt->fields.cond, (const MethodInfo *)aiInfo);
  if ( !aiInfo )
    goto LABEL_262;
  v25 = aiEnt->fields.cond;
  v26 = (System_String_o *)StringLiteral_9306/*"NOT_"*/;
  v27 = (System_String_o *)StringLiteral_1/*""*/;
  v28 = j_il2cpp_value_box_0(Ai_COND_TypeInfo, &Cond);
  if ( !v28 )
    goto LABEL_262;
  v29 = v28;
  if ( v25 >= 0 )
    v26 = v27;
  v30 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 360LL))(
                             v28,
                             *(_QWORD *)(*(_QWORD *)v28 + 368LL));
  Cond = *(_DWORD *)j_il2cpp_object_unbox_0(v29);
  System_String__Concat_43743732(v26, v30, 0LL);
  v31 = Cond;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  v32 = ConditionsInformation__getCheckFunction(v31, 0LL);
  if ( !v32 )
    goto LABEL_257;
  v37 = v32;
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AiInterface__TypeInfo,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v37->fields.target )
  {
    case 1:
      if ( !v38 )
        goto LABEL_262;
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.Bdata;
      goto LABEL_79;
    case 2:
      v59 = this->fields.Bdata;
      if ( !v59 )
        goto LABEL_262;
      uniqueId = aiInfo->fields.uniqueId;
      if ( aiInfo->fields.aiType == 1 )
      {
        ServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getServantData(
                                                                               v59,
                                                                               uniqueId,
                                                                               0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      else
      {
        ServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getBattleFieldData(
                                                                               v59,
                                                                               uniqueId,
                                                                               0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      Bdata = ServantData;
      goto LABEL_79;
    case 3:
      v55 = this->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !v55 )
          goto LABEL_262;
        FieldPTList = BattleData__getFieldPTList(v55, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      else
      {
        if ( !v55 )
          goto LABEL_262;
        FieldPTList = BattleData__getFieldEnemyServantList(v55, 0, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 4:
      v57 = this->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !v57 )
          goto LABEL_262;
        FieldPTList = BattleData__getFieldOpponentList(v57, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      else
      {
        if ( !v57 )
          goto LABEL_262;
        FieldPTList = BattleData__getFieldPlayerServantList(v57, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 5:
      v49 = this->fields.Bdata;
      if ( aiInfo->fields.aiType != 1 )
      {
        if ( !v49 || !v38 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v49->fields.enemyFieldStatus;
        goto LABEL_79;
      }
      if ( !v49 )
        goto LABEL_262;
      isEnemyID = BattleData__isEnemyID(v49, aiInfo->fields.uniqueId, 0LL);
      v51 = this->fields.Bdata;
      if ( !v51 )
        goto LABEL_262;
      if ( !isEnemyID )
        goto LABEL_48;
      goto LABEL_24;
    case 6:
      v62 = this->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !v62 )
          goto LABEL_262;
        v63 = BattleData__isEnemyID(v62, aiInfo->fields.uniqueId, 0LL);
        v51 = this->fields.Bdata;
        if ( !v51 )
          goto LABEL_262;
        if ( v63 )
        {
LABEL_48:
          if ( !v38 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v51->fields.playerFieldStatus;
        }
        else
        {
LABEL_24:
          if ( !v38 )
            goto LABEL_262;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v51->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !v62 || !v38 )
          goto LABEL_262;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v62->fields.playerFieldStatus;
      }
LABEL_79:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v38,
        Bdata,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AiInterface__Add__);
      goto LABEL_84;
    case 7:
      v64 = this->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !v64 )
          goto LABEL_262;
        FieldPTList = BattleData__getPTList(v64, aiInfo->fields.uniqueId, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      else
      {
        if ( !v64 )
          goto LABEL_262;
        FieldPTList = BattleData__getEnemyServantList(v64, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      goto LABEL_82;
    case 8:
      v58 = this->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !v58 )
          goto LABEL_262;
        FieldPTList = BattleData__getOpponentList(v58, aiInfo->fields.uniqueId, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
      else
      {
        if ( !v58 )
          goto LABEL_262;
        FieldPTList = BattleData__getPlayerServantList(v58, 0LL);
        if ( !v38 )
          goto LABEL_262;
      }
LABEL_82:
      v48 = (System_Collections_Generic_IEnumerable_T__o *)FieldPTList;
      v47 = (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
LABEL_83:
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
        v48,
        v47);
LABEL_84:
      Vals = AiBaseEntity__getVals(aiEnt, v39);
      v68 = Vals;
      v177 = aiInfo;
      wkZero = this->fields.wkZero;
      v176 = v25;
      if ( !v37->fields.isParams )
      {
        if ( v37->fields.isIndiv )
        {
          if ( !Vals )
            goto LABEL_262;
          if ( (int)Vals->max_length >= 2 )
          {
            v77 = System_Linq_Enumerable__Skip_long_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)Vals,
                    1,
                    (const MethodInfo_19C3F84 *)Method_System_Linq_Enumerable_Skip_long___);
            v78 = System_Linq_Enumerable__Take_long_(
                    v77,
                    v68->max_length - 1,
                    (const MethodInfo_19C42D8 *)Method_System_Linq_Enumerable_Take_long___);
            v79 = System_Linq_Enumerable__ToArray_long_(
                    v78,
                    (const MethodInfo_19C4B40 *)Method_System_Linq_Enumerable_ToArray_long___);
            v74 = sub_B17014(long___TypeInfo, 1LL, v80);
            if ( v68->max_length )
            {
              if ( !v74 )
                goto LABEL_262;
              if ( *(_DWORD *)(v74 + 24) )
              {
                v76 = v68->m_Items[0];
                v72 = wkZero;
                wkZero = v79;
                goto LABEL_99;
              }
            }
LABEL_277:
            sub_B17100(v74, v75, v67);
            sub_B170A0();
          }
        }
LABEL_94:
        v72 = this->fields.wkZero;
        goto LABEL_100;
      }
      if ( !Vals )
        goto LABEL_262;
      if ( (int)Vals->max_length < 2 )
        goto LABEL_94;
      v70 = System_Linq_Enumerable__Skip_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Vals,
              1,
              (const MethodInfo_19C3F84 *)Method_System_Linq_Enumerable_Skip_long___);
      v71 = System_Linq_Enumerable__Take_long_(
              v70,
              v68->max_length - 1,
              (const MethodInfo_19C42D8 *)Method_System_Linq_Enumerable_Take_long___);
      v72 = System_Linq_Enumerable__ToArray_long_(
              v71,
              (const MethodInfo_19C4B40 *)Method_System_Linq_Enumerable_ToArray_long___);
      v74 = sub_B17014(long___TypeInfo, 1LL, v73);
      if ( !v68->max_length )
        goto LABEL_277;
      if ( !v74 )
        goto LABEL_262;
      if ( !*(_DWORD *)(v74 + 24) )
        goto LABEL_277;
      v76 = v68->m_Items[0];
LABEL_99:
      v68 = (System_Int64_array *)v74;
      *(_QWORD *)(v74 + 32) = v76;
LABEL_100:
      refine = v37->fields.refine;
      func = v37->fields.func;
      entVals = v68;
      if ( refine )
      {
        v82 = 0;
      }
      else
      {
        if ( !v38 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v183,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v185 = v183[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v185,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__) )
        {
          current = v185.fields.current;
          if ( !v185.fields.current )
            sub_B170D4();
          klass = v185.fields.current->klass;
          if ( *(_WORD *)&v185.fields.current->klass->_2.bitflags1 )
          {
            v85 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              ++v85;
              p_offset += 4;
              if ( v85 >= *(unsigned __int16 *)&v185.fields.current->klass->_2.bitflags1 )
                goto LABEL_110;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_110:
            p_method = sub_AAFEF8(v185.fields.current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v37,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v88 = current->klass;
            paramater = v37->fields.paramater;
            v90 = this->fields.Bdata;
            if ( *(_WORD *)&current->klass->_2.bitflags1 )
            {
              v91 = 0LL;
              v92 = &v88->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v92 - 1) != AiInterface_TypeInfo )
              {
                ++v91;
                v92 += 4;
                if ( v91 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
                  goto LABEL_117;
              }
              v93 = (__int64)&v88->vtable[*v92].method;
            }
            else
            {
LABEL_117:
              v93 = sub_AAFEF8(current, AiInterface_TypeInfo, 0LL);
            }
            v94 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v93)(
                                           current,
                                           v90,
                                           paramater,
                                           (unsigned int)turn,
                                           (unsigned int)actcnt,
                                           v72,
                                           aiEnt,
                                           *(_QWORD *)(v93 + 8));
            if ( !func )
              sub_B170D4();
            if ( ConditionsInformation_ISCheckFunction__Invoke(func, v94, entVals, 0LL) )
            {
              v95 = 1;
              goto LABEL_123;
            }
          }
        }
        v95 = 0;
LABEL_123:
        *((_DWORD *)&v183[1].fields.list + v184++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v185,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v82 = v95 != 0;
        if ( v184 )
        {
          v96 = v184 - 1;
          if ( *((_DWORD *)&v183[0].fields.current + v184 + 1) == 1707 )
          {
LABEL_150:
            v184 = v96;
LABEL_187:
            v132 = v25;
            v131 = v177;
            goto LABEL_255;
          }
        }
        refine = v37->fields.refine;
      }
      if ( refine == 1 )
      {
        if ( !v38 )
          goto LABEL_262;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v183,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v185 = v183[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v185,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__) )
        {
          v97 = v185.fields.current;
          if ( !v185.fields.current )
            sub_B170D4();
          v98 = v185.fields.current->klass;
          if ( *(_WORD *)&v185.fields.current->klass->_2.bitflags1 )
          {
            v99 = 0LL;
            v100 = &v98->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v100 - 1) != AiInterface_TypeInfo )
            {
              ++v99;
              v100 += 4;
              if ( v99 >= *(unsigned __int16 *)&v185.fields.current->klass->_2.bitflags1 )
                goto LABEL_135;
            }
            v101 = (__int64)&v98->vtable[*v100 + 1].method;
          }
          else
          {
LABEL_135:
            v101 = sub_AAFEF8(v185.fields.current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v101)(
                  v97,
                  v37,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v101 + 8)) & 1) != 0 )
          {
            v102 = v97->klass;
            v103 = v37->fields.paramater;
            v104 = this->fields.Bdata;
            if ( *(_WORD *)&v97->klass->_2.bitflags1 )
            {
              v105 = 0LL;
              v106 = &v102->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v106 - 1) != AiInterface_TypeInfo )
              {
                ++v105;
                v106 += 4;
                if ( v105 >= *(unsigned __int16 *)&v97->klass->_2.bitflags1 )
                  goto LABEL_142;
              }
              v107 = (__int64)&v102->vtable[*v106].method;
            }
            else
            {
LABEL_142:
              v107 = sub_AAFEF8(v97, AiInterface_TypeInfo, 0LL);
            }
            v108 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v107)(
                                            v97,
                                            v104,
                                            v103,
                                            (unsigned int)turn,
                                            (unsigned int)actcnt,
                                            v72,
                                            aiEnt,
                                            *(_QWORD *)(v107 + 8));
            if ( !func )
              sub_B170D4();
            if ( !ConditionsInformation_ISCheckFunction__Invoke(func, v108, entVals, 0LL) )
            {
              v109 = 0;
              goto LABEL_148;
            }
          }
        }
        v109 = 1;
LABEL_148:
        *((_DWORD *)&v183[1].fields.list + v184++) = 1707;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v185,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v82 = v109 != 0;
        if ( v184 )
        {
          v96 = v184 - 1;
          if ( *((_DWORD *)&v183[0].fields.current + v184 + 1) == 1707 )
            goto LABEL_150;
        }
      }
      v110 = v37->fields.refine;
      if ( v110 == 2 )
      {
        v153 = sub_B17014(double___TypeInfo, 0LL, v67);
        if ( v38 )
        {
          v112 = v153;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            v183,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v185 = v183[0];
LABEL_247:
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v185,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__) )
          {
            v154 = v185.fields.current;
            if ( !v185.fields.current )
              sub_B170D4();
            v155 = v185.fields.current->klass;
            if ( *(_WORD *)&v185.fields.current->klass->_2.bitflags1 )
            {
              v156 = 0LL;
              v157 = &v155->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v157 - 1) != AiInterface_TypeInfo )
              {
                ++v156;
                v157 += 4;
                if ( v156 >= *(unsigned __int16 *)&v185.fields.current->klass->_2.bitflags1 )
                  goto LABEL_222;
              }
              v158 = (__int64)&v155->vtable[*v157 + 1].method;
            }
            else
            {
LABEL_222:
              v158 = sub_AAFEF8(v185.fields.current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v158)(
                    v154,
                    v37,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v158 + 8)) & 1) != 0 )
            {
              v159 = v154->klass;
              v160 = (unsigned int)v37->fields.paramater;
              v175 = v82;
              v161 = this->fields.Bdata;
              if ( *(_WORD *)&v154->klass->_2.bitflags1 )
              {
                v162 = 0LL;
                v163 = &v159->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v163 - 1) != AiInterface_TypeInfo )
                {
                  ++v162;
                  v163 += 4;
                  if ( v162 >= *(unsigned __int16 *)&v154->klass->_2.bitflags1 )
                    goto LABEL_229;
                }
                v165 = (__int64)&v159->vtable[*v163].method;
              }
              else
              {
LABEL_229:
                v164 = v37->fields.paramater;
                v165 = sub_AAFEF8(v154, AiInterface_TypeInfo, 0LL);
                v160 = v164;
              }
              v166 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, __int64, _QWORD, _QWORD, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v165)(
                       v154,
                       v161,
                       v160,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v72,
                       aiEnt,
                       *(_QWORD *)(v165 + 8));
              if ( !v166 )
                sub_B170D4();
              v169 = *(_QWORD *)(v166 + 24);
              if ( v169 )
              {
                v82 = v175;
                if ( !v112 )
                  sub_B170D4();
                if ( !*(_QWORD *)(v112 + 24) )
                  v112 = v166;
              }
              else
              {
                v82 = v175;
              }
              if ( (int)v169 >= 1 )
              {
                v170 = 4LL;
                while ( 1 )
                {
                  if ( !v112 )
                    sub_B170D4();
                  v171 = *(unsigned int *)(v112 + 24);
                  if ( v170 - 4 < (int)v171 )
                  {
                    if ( v170 - 4 >= v171 )
                    {
                      sub_B17100(v166, v167, v168);
                      sub_B170A0();
                    }
                    if ( *(double *)(v112 + 8 * v170) < *(double *)(v166 + 8 * v170) )
                      break;
                  }
                  v172 = v170 - 3;
                  ++v170;
                  if ( v172 >= (int)v169 )
                    goto LABEL_247;
                }
                v112 = v166;
              }
            }
          }
          *((_DWORD *)&v183[1].fields.list + v184++) = 1524;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v185,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          v132 = v176;
          v133 = entVals;
          v131 = v177;
          if ( v184 )
          {
            v134 = v184 - 1;
            if ( *((_DWORD *)&v183[0].fields.current + v184 + 1) == 1524 )
              goto LABEL_250;
          }
LABEL_251:
          if ( v112 )
          {
            if ( !*(_QWORD *)(v112 + 24) )
              goto LABEL_255;
            goto LABEL_253;
          }
        }
LABEL_262:
        sub_B170D4();
      }
      if ( v110 != 4 )
      {
        if ( v110 != 3 )
          goto LABEL_187;
        v111 = sub_B17014(double___TypeInfo, 0LL, v67);
        if ( !v38 )
          goto LABEL_262;
        v112 = v111;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v183,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v185 = v183[0];
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
LABEL_183:
              if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v185,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__) )
              {
                *((_DWORD *)&v183[1].fields.list + v184++) = 1335;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v185,
                  (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
                v131 = v177;
                v132 = v25;
                v133 = entVals;
                if ( !v184 )
                  goto LABEL_251;
                v134 = v184 - 1;
                if ( *((_DWORD *)&v183[0].fields.current + v184 + 1) != 1335 )
                  goto LABEL_251;
LABEL_250:
                v184 = v134;
                goto LABEL_251;
              }
              v113 = v185.fields.current;
              if ( !v185.fields.current )
                sub_B170D4();
              v114 = v185.fields.current->klass;
              if ( *(_WORD *)&v185.fields.current->klass->_2.bitflags1 )
              {
                v115 = 0LL;
                v116 = &v114->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v116 - 1) != AiInterface_TypeInfo )
                {
                  ++v115;
                  v116 += 4;
                  if ( v115 >= *(unsigned __int16 *)&v185.fields.current->klass->_2.bitflags1 )
                    goto LABEL_161;
                }
                v117 = (__int64)&v114->vtable[*v116 + 1].method;
              }
              else
              {
LABEL_161:
                v117 = sub_AAFEF8(v185.fields.current, AiInterface_TypeInfo, 1LL);
              }
            }
            while ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v117)(
                       v113,
                       v37,
                       wkZero,
                       aiEnt,
                       *(_QWORD *)(v117 + 8)) & 1) == 0 );
            v118 = v113->klass;
            v119 = v37->fields.paramater;
            v120 = this->fields.Bdata;
            if ( *(_WORD *)&v113->klass->_2.bitflags1 )
            {
              v121 = 0LL;
              v122 = &v118->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v122 - 1) != AiInterface_TypeInfo )
              {
                ++v121;
                v122 += 4;
                if ( v121 >= *(unsigned __int16 *)&v113->klass->_2.bitflags1 )
                  goto LABEL_168;
              }
              v123 = (__int64)&v118->vtable[*v122].method;
            }
            else
            {
LABEL_168:
              v123 = sub_AAFEF8(v113, AiInterface_TypeInfo, 0LL);
            }
            v124 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v123)(
                     v113,
                     v120,
                     v119,
                     (unsigned int)turn,
                     (unsigned int)actcnt,
                     v72,
                     aiEnt,
                     *(_QWORD *)(v123 + 8));
            if ( !v124 )
              sub_B170D4();
            v127 = *(_QWORD *)(v124 + 24);
            if ( !v127 )
              break;
            if ( !v112 )
              sub_B170D4();
            if ( *(_QWORD *)(v112 + 24) )
              break;
LABEL_182:
            v112 = v124;
          }
          if ( (int)v127 >= 1 )
          {
            v128 = 4LL;
            while ( 1 )
            {
              if ( !v112 )
                sub_B170D4();
              v129 = *(unsigned int *)(v112 + 24);
              if ( v128 - 4 < (int)v129 )
              {
                if ( v128 - 4 >= v129 )
                {
                  sub_B17100(v124, v125, v126);
                  sub_B170A0();
                }
                if ( *(double *)(v124 + 8 * v128) < *(double *)(v112 + 8 * v128) )
                  goto LABEL_182;
              }
              v130 = v128 - 3;
              ++v128;
              if ( v130 >= (int)v127 )
                goto LABEL_183;
            }
          }
        }
      }
      v135 = sub_B17014(double___TypeInfo, 1LL, v67);
      if ( !v38 )
        goto LABEL_262;
      v112 = v135;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v183,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v185 = v183[0];
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v185,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__) )
      {
        v136 = v185.fields.current;
        if ( !v185.fields.current )
          sub_B170D4();
        v137 = v185.fields.current->klass;
        if ( *(_WORD *)&v185.fields.current->klass->_2.bitflags1 )
        {
          v138 = 0LL;
          v139 = &v137->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v139 - 1) != AiInterface_TypeInfo )
          {
            ++v138;
            v139 += 4;
            if ( v138 >= *(unsigned __int16 *)&v185.fields.current->klass->_2.bitflags1 )
              goto LABEL_195;
          }
          v140 = (__int64)&v137->vtable[*v139 + 1].method;
        }
        else
        {
LABEL_195:
          v140 = sub_AAFEF8(v185.fields.current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v140)(
                v136,
                v37,
                wkZero,
                aiEnt,
                *(_QWORD *)(v140 + 8)) & 1) != 0 )
        {
          v141 = v136->klass;
          v142 = v37->fields.paramater;
          v143 = this->fields.Bdata;
          if ( *(_WORD *)&v136->klass->_2.bitflags1 )
          {
            v144 = 0LL;
            v145 = &v141->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v145 - 1) != AiInterface_TypeInfo )
            {
              ++v144;
              v145 += 4;
              if ( v144 >= *(unsigned __int16 *)&v136->klass->_2.bitflags1 )
                goto LABEL_202;
            }
            v146 = (__int64)&v141->vtable[*v145].method;
          }
          else
          {
LABEL_202:
            v146 = sub_AAFEF8(v136, AiInterface_TypeInfo, 0LL);
          }
          v147 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, struct System_Int64_array *, AiBaseEntity_o *, _QWORD))v146)(
                   v136,
                   v143,
                   v142,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v72,
                   aiEnt,
                   *(_QWORD *)(v146 + 8));
          if ( !v147 )
            sub_B170D4();
          if ( (int)*(_QWORD *)(v147 + 24) >= 1 )
          {
            v150 = 0LL;
            v151 = *(_QWORD *)(v147 + 24);
            do
            {
              if ( v150 >= v151 )
              {
                sub_B17100(v147, v148, v149);
                sub_B170A0();
              }
              if ( !v112 )
                sub_B170D4();
              if ( !*(_DWORD *)(v112 + 24) )
              {
                sub_B17100(v147, v148, v149);
                sub_B170A0();
              }
              v152 = *(double *)(v147 + 32 + 8 * v150++);
              *(double *)(v112 + 32) = v152 + *(double *)(v112 + 32);
              v151 = *(_DWORD *)(v147 + 24);
            }
            while ( (__int64)v150 < (int)v151 );
          }
        }
      }
      *((_DWORD *)&v183[1].fields.list + v184++) = 1694;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v185,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      v131 = v177;
      v132 = v25;
      v133 = entVals;
      if ( v184 && *((_DWORD *)&v183[0].fields.current + v184 + 1) == 1694 )
        --v184;
LABEL_253:
      if ( !func )
        goto LABEL_262;
      LOBYTE(v82) = ConditionsInformation_ISCheckFunction__Invoke(func, (System_Double_array *)v112, v133, 0LL);
LABEL_255:
      v173 = (v132 < 0) ^ v82;
      if ( (v173 & 1) != 0 && !AiLogic_AiInfo__CheckAiCanActionFromTargets(v131, aiEnt, 0LL) )
LABEL_257:
        v173 = 0;
      return v173 & 1;
    case 9:
      v52 = this;
      v54 = 1;
      v53 = (System_Collections_Generic_List_AiInterface__o *)v38;
      goto LABEL_60;
    case 0xA:
      v54 = 1;
      v42 = 1;
      goto LABEL_57;
    case 0xB:
      v54 = 1;
      v42 = 2;
LABEL_57:
      v52 = this;
      v53 = (System_Collections_Generic_List_AiInterface__o *)v38;
      goto LABEL_58;
    case 0xC:
      v43 = this->fields.Bdata;
      if ( !v43 )
        goto LABEL_262;
      FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                                v43,
                                                                                0LL);
      if ( !v38 )
        goto LABEL_262;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
        FieldPlayerServantList,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      v45 = this->fields.Bdata;
      if ( !v45 )
        goto LABEL_262;
      FieldEnemyServantList = BattleData__getFieldEnemyServantList(v45, 0, 0LL);
      v47 = (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
      v48 = (System_Collections_Generic_IEnumerable_T__o *)FieldEnemyServantList;
      goto LABEL_83;
    case 0xD:
      v52 = this;
      v53 = (System_Collections_Generic_List_AiInterface__o *)v38;
      v54 = 0;
LABEL_60:
      v65 = aiInfo;
      v42 = 0;
      goto LABEL_61;
    case 0xE:
      v42 = 1;
      goto LABEL_51;
    case 0xF:
      v42 = 2;
LABEL_51:
      v52 = this;
      v53 = (System_Collections_Generic_List_AiInterface__o *)v38;
      v54 = 0;
LABEL_58:
      v65 = aiInfo;
LABEL_61:
      AiLogic__getTargetPosServant(v52, v53, v54, v65, v42, v40);
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
  __int64 v16; // x1
  int32_t uniqueId; // w26
  AiState_o *v18; // x25
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  AiLogic_AiInfo_o *v23; // x27
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w4
  const MethodInfo *v31; // x6
  AiEntity_o *result; // x0
  __int64 v33; // x10

  if ( (byte_40F7EDA & 1) == 0 )
  {
    sub_B16FFC(&AiEntity_TypeInfo, svtData);
    sub_B16FFC(&AiLogic_AiInfo_TypeInfo, v16);
    byte_40F7EDA = 1;
  }
  if ( !svtData )
    sub_B170D4();
  uniqueId = svtData->fields.uniqueId;
  v18 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v23 = (AiLogic_AiInfo_o *)sub_B170CC(AiLogic_AiInfo_TypeInfo, v19, v20, v21, v22);
  AiLogic_AiInfo___ctor(v23, 1, uniqueId, v18, logicAi, procState, 0LL);
  *info = v23;
  sub_B16F98((BattleServantConfConponent_o *)info, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  result = (AiEntity_o *)AiLogic__getActionBase(this, *info, procState, turnCount, v30, timingPriority, v31);
  if ( result )
  {
    v33 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v33 )
    {
      if ( (AiEntity_c *)result->klass->_2.typeHierarchy[v33 - 1] != AiEntity_TypeInfo )
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
  __int64 v12; // x1
  struct AiState_o *aiState; // x20
  const MethodInfo *v14; // x6
  unsigned int i; // w28
  AiBaseEntity_o *BasicAct; // x21
  struct AiActMaster_o *aiActMst; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *Bdata; // x26
  const MethodInfo *v21; // x3
  struct BattleData_o *v22; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  UnityEngine_Object_o *v24; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  struct BattleData_o *v27; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v29; // x8
  struct BattleData_o *v30; // x8
  struct BattleData_o *v31; // x8
  struct BaseBattleEvent_o *v32; // x0

  if ( (byte_40F7EDC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, aiInfo);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40F7EDC = 1;
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
  AiLogic__updateThinkGroup(this, aiInfo, aiState, *(const MethodInfo **)&turnCount);
  if ( !aiState )
    goto LABEL_37;
  for ( i = 1; i < 0xB; ++i )
  {
    BasicAct = AiLogic__getBasicAct(
                 this,
                 aiInfo,
                 procState,
                 turnCount - aiState->fields.baseTurn,
                 aiState->fields.actCount,
                 timingPriority,
                 v14);
    if ( !BasicAct )
      return BasicAct;
    aiActMst = this->fields.aiActMst;
    if ( !aiActMst )
      goto LABEL_37;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)aiActMst,
               BasicAct->fields.aiActId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_37;
    if ( *(&Entity->fields.id + 1) != 99 )
      break;
    aiState->fields.aiGroupId = AiBaseEntity__getIndexAval(BasicAct, 0, v19);
    aiState->fields.actCount = 0;
    Bdata = (UnityEngine_Object_o *)this->fields.Bdata;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Bdata, 0LL, 0LL) )
    {
      v22 = this->fields.Bdata;
      if ( !v22 )
        goto LABEL_37;
      battleEvent = v22->fields.battleEvent;
      if ( !battleEvent )
        goto LABEL_37;
      ((void (__fastcall *)(struct BaseBattleEvent_o *, struct AiState_o *, AiBaseEntity_o *, Il2CppMethodPointer))battleEvent->klass->vtable._26_ProcOnActAiFixed.method)(
        battleEvent,
        aiState,
        BasicAct,
        battleEvent->klass->vtable._27_PrevEndLoadNStage.methodPtr);
    }
    AiLogic__updateThinkGroup(this, aiInfo, aiState, v21);
  }
  v24 = (UnityEngine_Object_o *)this->fields.Bdata;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    if ( AiBaseEntity__ChangeNpCountPlayer(BasicAct, v25) )
    {
      v27 = this->fields.Bdata;
      if ( !v27 )
        goto LABEL_37;
      playerNpCount = v27->fields.playerNpCount;
      v27->fields.playerNpCount = AiBaseEntity__ChangeNpCountPlayer(BasicAct, v26) + playerNpCount;
      v29 = this->fields.Bdata;
      if ( !v29 )
        goto LABEL_37;
      if ( (v29->fields.playerNpCount & 0x80000000) != 0 )
        v29->fields.playerNpCount = 0;
    }
    if ( AiBaseEntity__IsResetNpCountPlayer(BasicAct, v26) )
    {
      v30 = this->fields.Bdata;
      if ( !v30 )
        goto LABEL_37;
      v30->fields.playerNpCount = 0;
    }
    v31 = this->fields.Bdata;
    if ( v31 )
    {
      v32 = v31->fields.battleEvent;
      if ( v32 )
      {
        ((void (__fastcall *)(struct BaseBattleEvent_o *, struct AiState_o *, AiBaseEntity_o *, Il2CppMethodPointer))v32->klass->vtable._26_ProcOnActAiFixed.method)(
          v32,
          aiState,
          BasicAct,
          v32->klass->vtable._27_PrevEndLoadNStage.methodPtr);
        return BasicAct;
      }
    }
LABEL_37:
    sub_B170D4();
  }
  return BasicAct;
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiLogic__getAction_21178920(
        AiLogic_o *this,
        BattleFieldData_o *fieldData,
        int32_t procState,
        int32_t turnCount,
        int32_t actCount,
        BattleLogicBaseAi_o *logicAi,
        int32_t timingPriority,
        const MethodInfo *method)
{
  __int64 v14; // x1
  int32_t index; // w25
  AiState_o *aiState; // x24
  AiLogic_AiInfo_o *v17; // x26
  int32_t v18; // w4
  const MethodInfo *v19; // x6
  AiFieldEntity_o *result; // x0
  __int64 v21; // x10

  if ( (byte_40F7EDB & 1) == 0 )
  {
    sub_B16FFC(&AiFieldEntity_TypeInfo, fieldData);
    sub_B16FFC(&AiLogic_AiInfo_TypeInfo, v14);
    byte_40F7EDB = 1;
  }
  if ( !fieldData )
    sub_B170D4();
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v17 = (AiLogic_AiInfo_o *)sub_B170CC(
                              AiLogic_AiInfo_TypeInfo,
                              fieldData,
                              *(_QWORD *)&procState,
                              *(_QWORD *)&turnCount,
                              *(_QWORD *)&actCount);
  AiLogic_AiInfo___ctor(v17, 2, index, aiState, logicAi, procState, 0LL);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(this, v17, procState, turnCount, v18, timingPriority, v19);
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
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *All; // x23
  AiLogic___c_c *v53; // x8
  struct AiLogic___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_1; // x24
  Il2CppObject *v56; // x25
  struct AiLogic___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  AiLogic___c__DisplayClass16_1_o *v68; // x24
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  TitleInfoControl_EventEndTimeInfo_o *v73; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v74; // x25
  System_Collections_Generic_List_T__o *v75; // x0
  WarBoardUiData_SaveData_array *Data; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  const MethodInfo *v81; // x5
  int max_length; // w8
  WarBoardUiData_SaveData_array *v83; // x24
  WeightRate_int__o *v84; // x25
  const MethodInfo *v85; // x5
  __int64 v86; // x8
  unsigned __int64 v87; // x26
  WarBoardUiData_SaveData_o **m_Items; // x27
  WarBoardUiData_SaveData_o *v89; // x1
  int32_t Next; // w0
  const MethodInfo *v91; // x5
  AiBaseEntity_o *v92; // x24

  if ( (byte_40F7EDD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_AiBaseEntity___ctor__, aiInfo);
    sub_B16FFC(&System_Comparison_AiBaseEntity__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v21);
    sub_B16FFC(&Method_System_Predicate_AiBaseEntity___ctor__, v22);
    sub_B16FFC(&System_Predicate_AiBaseEntity__TypeInfo, v23);
    sub_B16FFC(&Method_AiLogic___c__getBasicAct_b__16_1__, v24);
    sub_B16FFC(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v25);
    sub_B16FFC(&AiLogic___c__DisplayClass16_0_TypeInfo, v26);
    sub_B16FFC(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v27);
    sub_B16FFC(&AiLogic___c__DisplayClass16_1_TypeInfo, v28);
    sub_B16FFC(&AiLogic___c_TypeInfo, v29);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v30);
    sub_B16FFC(&Method_WeightRate_int__getCount__, v31);
    sub_B16FFC(&Method_WeightRate_int__getData__, v32);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v33);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v34);
    sub_B16FFC(&WeightRate_int__TypeInfo, v35);
    byte_40F7EDD = 1;
  }
  v36 = (AiLogic___c__DisplayClass16_0_o *)sub_B170CC(
                                             AiLogic___c__DisplayClass16_0_TypeInfo,
                                             aiInfo,
                                             *(_QWORD *)&procState,
                                             *(_QWORD *)&turn,
                                             *(_QWORD *)&actcnt);
  AiLogic___c__DisplayClass16_0___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_44;
  v36->fields.procState = procState;
  v36->fields.actcnt = actcnt;
  v36->fields.timingPriority = timingPriority;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = this->fields._thinkList;
  v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_AiBaseEntity__TypeInfo,
                                                                   v43,
                                                                   v44,
                                                                   v45,
                                                                   v46);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v47,
    (Il2CppObject *)v36,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_AiBaseEntity___ctor__);
  if ( !thinkList )
    goto LABEL_44;
  All = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
                                                                                  (System_Predicate_T__o *)v47,
                                                                                  (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v53 = AiLogic___c_TypeInfo;
  if ( (BYTE3(AiLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v53 = AiLogic___c_TypeInfo;
  }
  static_fields = v53->static_fields;
  _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      static_fields = AiLogic___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)static_fields->__9;
    _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_AiBaseEntity__TypeInfo,
                                                                           v48,
                                                                           v49,
                                                                           v50,
                                                                           v51);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_1,
      v56,
      Method_AiLogic___c__getBasicAct_b__16_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_AiBaseEntity___ctor__);
    v57 = AiLogic___c_TypeInfo->static_fields;
    v57->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v57->__9__16_1,
      (System_Int32_array **)_9__16_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !All )
LABEL_44:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    All,
    (System_Comparison_T__o *)_9__16_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( All->fields._size >= 1 )
  {
    while ( 1 )
    {
      v68 = (AiLogic___c__DisplayClass16_1_o *)sub_B170CC(AiLogic___c__DisplayClass16_1_TypeInfo, v64, v65, v66, v67);
      AiLogic___c__DisplayClass16_1___ctor(v68, 0LL);
      if ( All->fields._size < 1 )
        return 0LL;
      v73 = All->fields._items->m_Items[0];
      if ( !v73 )
        goto LABEL_44;
      if ( !v68 )
        goto LABEL_44;
      v68->fields.priority = HIDWORD(v73->fields.end_time);
      v74 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_AiBaseEntity__TypeInfo,
                                                                       v69,
                                                                       v70,
                                                                       v71,
                                                                       v72);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v74,
        (Il2CppObject *)v68,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_AiBaseEntity___ctor__);
      v75 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)All,
              (System_Predicate_T__o *)v74,
              (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !v75 )
        goto LABEL_44;
      Data = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v75,
               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !Data )
        goto LABEL_44;
      max_length = Data->max_length;
      v83 = Data;
      if ( max_length <= 1 )
        break;
      v84 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v77, v78, v79, v80);
      WeightRate_int____ctor(v84, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
      v86 = *(_QWORD *)&v83->max_length;
      if ( (int)v86 >= 1 )
      {
        v87 = 0LL;
        m_Items = v83->m_Items;
        while ( v87 < (unsigned int)v86 )
        {
          Data = (WarBoardUiData_SaveData_array *)AiLogic__checkThinking_21180536(
                                                    this,
                                                    aiInfo,
                                                    (AiBaseEntity_o *)m_Items[v87],
                                                    turn,
                                                    v36->fields.actcnt,
                                                    v85);
          if ( v87 >= v83->max_length )
            break;
          v89 = m_Items[v87];
          if ( ((unsigned __int8)Data & 1) != 0 )
          {
            if ( !v89 || !v84 )
              goto LABEL_44;
            WeightRate_int___setWeight(
              v84,
              (int32_t)v89->fields.keys,
              v87,
              (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            Data = (WarBoardUiData_SaveData_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)All,
                                                      (WarBoardManager_TaskList_o *)v89,
                                                      (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v86) = v83->max_length;
          if ( (__int64)++v87 >= (int)v86 )
            goto LABEL_31;
        }
LABEL_43:
        sub_B17100(Data, v77, v78);
        sub_B170A0();
      }
LABEL_31:
      if ( !v84 )
        goto LABEL_44;
      if ( WeightRate_int___getCount(v84, (const MethodInfo_2ADC7DC *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v84->fields.totalweight, 0LL);
        Data = (WarBoardUiData_SaveData_array *)WeightRate_int___getData(
                                                  v84,
                                                  Next,
                                                  (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)Data >= v83->max_length )
          goto LABEL_43;
        v92 = (AiBaseEntity_o *)v83->m_Items[(int)Data];
        if ( AiLogic__checkThinking_21180536(this, aiInfo, v92, turn, v36->fields.actcnt, v91) )
          return v92;
        goto LABEL_39;
      }
LABEL_40:
      if ( All->fields._size <= 0 )
        return 0LL;
    }
    if ( !max_length )
      goto LABEL_43;
    Data = (WarBoardUiData_SaveData_array *)AiLogic__checkThinking_21180536(
                                              this,
                                              aiInfo,
                                              (AiBaseEntity_o *)Data->m_Items[0],
                                              turn,
                                              v36->fields.actcnt,
                                              v81);
    if ( !v83->max_length )
      goto LABEL_43;
    v92 = (AiBaseEntity_o *)v83->m_Items[0];
    if ( ((unsigned __int8)Data & 1) != 0 )
      return v92;
LABEL_39:
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)All,
      (WarBoardManager_TaskList_o *)v92,
      (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  BattleData_o *v11; // x0
  AiLogic_Fields *p_fields; // x21
  struct BattleData_o *Bdata; // t1
  char v14; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *ServantDataFromIndex; // x0

  if ( (byte_40F7EDF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AiInterface__Add__, targetList);
    byte_40F7EDF = 1;
  }
  if ( !aiInfo )
    goto LABEL_13;
  if ( aiInfo->fields.aiType == 1 )
  {
    Bdata = this->fields.Bdata;
    p_fields = &this->fields;
    v11 = Bdata;
    if ( !Bdata )
      goto LABEL_13;
    v14 = BattleData__isEnemyID(v11, aiInfo->fields.uniqueId, 0LL) ^ isOpponent;
  }
  else
  {
    v14 = !isOpponent;
    p_fields = &this->fields;
  }
  if ( !p_fields->Bdata )
LABEL_13:
    sub_B170D4();
  ServantDataFromIndex = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getServantDataFromIndex(
                                                                                  p_fields->Bdata,
                                                                                  pos,
                                                                                  v14 & 1,
                                                                                  0LL);
  if ( ServantDataFromIndex )
  {
    if ( targetList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)targetList,
        ServantDataFromIndex,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AiInterface__Add__);
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F7ED6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___66724856, aiInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v9);
    byte_40F7ED6 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  p_thinkList = (BattleServantConfConponent_o *)&this->fields._thinkList;
  thinkList = this->fields._thinkList;
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
  if ( v14 || this->fields._aiType != aiType )
  {
    this->fields._aiType = aiType;
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
      sub_B170D4();
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           (const MethodInfo *)aiInfo);
LABEL_18:
        v20 = ListFormGroupId;
        v21 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                                                v16,
                                                                                v17,
                                                                                v18,
                                                                                v19);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v21,
          v20,
          (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___66724856);
        p_thinkList->klass = (BattleServantConfConponent_c *)v21;
        sub_B16F98(p_thinkList, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
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
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)v12, (System_Int32_array **)inLogicAi, v19, v20, v21, v22, v23, v24);
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
    return ((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, void *))logicAi->klass->vtable._17_CheckAiCanActionFromTargets.method)(
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
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // x0
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *v14; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *v16; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v17; // x0
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *v18; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v19; // x0
  _DWORD *monitor; // x22
  int32_t v21; // w20
  int32_t v22; // w21
  int32_t v23; // w0

  if ( (byte_40F9113 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, svtData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__, v11);
    byte_40F9113 = 1;
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
              (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      v14 = this->fields.checkedInfo;
      if ( !v14 )
        goto LABEL_17;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
               (System_Type_o *)v12,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !Item )
        goto LABEL_17;
      *aiActType = (int32_t)Item[1].klass;
      v16 = this->fields.checkedInfo;
      if ( !v16 )
        goto LABEL_17;
      v17 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
              (System_Type_o *)v12,
              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !v17 )
        goto LABEL_17;
      *noMessage = BYTE4(v17[1].klass);
      v18 = this->fields.checkedInfo;
      if ( !v18 )
        goto LABEL_17;
      v19 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v18,
              (System_Type_o *)v12,
              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !v19 )
        goto LABEL_17;
      monitor = v19[1].monitor;
      if ( !monitor )
        return;
      v22 = monitor[4];
      v21 = monitor[5];
      v23 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 392LL))(
              v19[1].monitor,
              *(_QWORD *)(*(_QWORD *)monitor + 400LL));
      if ( !svtData )
LABEL_17:
        sub_B170D4();
      BattleServantData__addSkillInfo(svtData, v22, v21, v23, monitor[9], -1LL, -1, 0LL, 0LL);
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

  if ( (byte_40F9112 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      aiBaseEntity);
    byte_40F9112 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                          aiBaseEntity,
                                          aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)checkedInfo,
           v7,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void __fastcall AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Xml_XmlQualifiedName_o *v20; // x0
  System_Xml_XmlQualifiedName_o *v21; // x21

  if ( (byte_40F9111 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__, aiBaseEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v10);
    byte_40F9111 = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (BattleServantConfConponent_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                            System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo,
                                                                                            aiBaseEntity,
                                                                                            inCheckedInfo,
                                                                                            method,
                                                                                            v4);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v13,
        (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (BattleServantConfConponent_c *)v13;
      sub_B16F98(p_checkedInfo, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    }
    v20 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                             aiBaseEntity,
                                             aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                                             inCheckedInfo,
                                             method);
    if ( p_checkedInfo->klass )
    {
      v21 = v20;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_checkedInfo->klass,
             v20,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_checkedInfo->klass,
          v21,
          (System_Xml_Schema_XmlSchemaObject_o *)inCheckedInfo,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_B170D4();
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
  sub_B16F98(v8, (System_Int32_array **)inSkillInfo, v9, v10, v11, v12, v13, v14);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9110 & 1) == 0 )
  {
    sub_B16FFC(&AiLogic___c_TypeInfo, v1);
    byte_40F9110 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AiLogic___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return s->fields.priority == this->fields.priority;
}