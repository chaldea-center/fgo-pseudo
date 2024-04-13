void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Int64_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E685D & 1) == 0 )
  {
    sub_B5D5C4(&long___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E685D = 1;
  }
  v5 = (struct System_Int64_array *)sub_B5D5DC(long___TypeInfo, 0LL);
  this->fields.wkZero = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.wkZero, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E6852 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_AiActMaster___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E6852 = 1;
  }
  this->fields.Bdata = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v14);
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
        v11 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v11, 0LL);
      }
LABEL_19:
      sub_B5D69C(IsNullOrEmpty, v8);
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
  if ( (byte_42E6854 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B5D5C4(&AiLogic_AiInfo_TypeInfo, (_DWORD)svtData, procState, logicAi);
    byte_42E6854 = 1;
  }
  if ( !svtData )
    sub_B5D69C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_B5D694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v13, 1, uniqueId, v12, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v10, v13, procState, timingPriority, v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinkingBase(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  AiLogic___c__DisplayClass12_0_o *v24; // x23
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x20

  if ( (byte_42E6856 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_AiBaseEntity__FindAll__,
      (_DWORD)aiInfo,
      procState,
      *(_QWORD *)&timingPriority);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Predicate_AiBaseEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Predicate_AiBaseEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v18, v19, v20);
    sub_B5D5C4(&AiLogic___c__DisplayClass12_0_TypeInfo, v21, v22, v23);
    byte_42E6856 = 1;
  }
  v24 = (AiLogic___c__DisplayClass12_0_o *)sub_B5D694(AiLogic___c__DisplayClass12_0_TypeInfo);
  AiLogic___c__DisplayClass12_0___ctor(v24, 0LL);
  if ( !v24
    || (v24->fields.procState = procState, v24->fields.timingPriority = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v27),
        thinkList = this->fields._thinkList,
        v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v29,
          (Il2CppObject *)v24,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_AiBaseEntity___ctor__),
        !thinkList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
                (System_Predicate_T__o *)v29,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_B5D69C(All, v26);
  }
  return All->fields._size > 0;
}


bool __fastcall AiLogic__checkThinking_21304820(
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
  if ( (byte_42E6855 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B5D5C4(&AiLogic_AiInfo_TypeInfo, (_DWORD)fieldData, procState, logicAi);
    byte_42E6855 = 1;
  }
  if ( !fieldData )
    sub_B5D69C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_B5D694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, 0LL);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinking_21307504(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int32_t cond; // w23
  System_String_o *v60; // x21
  System_String_o *v61; // x22
  AiLogic_o *v62; // x20
  System_String_o *v63; // x22
  int32_t v64; // w20
  ConditionsInformation_CheckInfo_o *v65; // x0
  ConditionsInformation_CheckInfo_o *v66; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x22
  const MethodInfo *v68; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *Bdata; // x1
  int32_t v70; // w4
  BattleServantData_array *FieldEnemyServantList; // x0
  const MethodInfo_3057210 *v72; // x2
  System_Collections_Generic_IEnumerable_T__o *v73; // x1
  struct BattleData_o *v74; // x8
  AiLogic_o *v75; // x0
  System_Collections_Generic_List_AiInterface__o *v76; // x1
  bool v77; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v79; // x3
  AiLogic_o *v80; // x21
  System_Int64_array *wkZero; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Int64_array *v85; // x28
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Int64_array *v89; // x20
  int32_t refine; // w8
  _BOOL4 v91; // w26
  _BOOL8 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x3
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  unsigned __int64 v97; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v100; // x3
  Il2CppClass *v101; // x8
  unsigned int paramater; // w21
  struct BattleData_o *v103; // x22
  unsigned __int64 v104; // x10
  int32_t *v105; // x11
  __int64 v106; // x0
  System_Double_array *v107; // x1
  int v108; // w20
  int v109; // w8
  _BOOL8 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x3
  Il2CppObject *v113; // x20
  Il2CppClass *v114; // x8
  unsigned __int64 v115; // x10
  int32_t *v116; // x11
  __int64 v117; // x0
  __int64 v118; // x3
  Il2CppClass *v119; // x8
  unsigned int v120; // w21
  struct BattleData_o *v121; // x22
  unsigned __int64 v122; // x10
  int32_t *v123; // x11
  __int64 v124; // x0
  System_Double_array *v125; // x1
  int v126; // w20
  int32_t v127; // w8
  AiLogic_o *v128; // x20
  Il2CppObject *v129; // x21
  Il2CppClass *v130; // x8
  unsigned __int64 v131; // x10
  int32_t *v132; // x11
  __int64 v133; // x0
  __int64 v134; // x3
  Il2CppClass *v135; // x8
  unsigned int v136; // w22
  struct BattleData_o *v137; // x25
  unsigned __int64 v138; // x10
  int32_t *v139; // x11
  __int64 v140; // x0
  __int64 v141; // x0
  __int64 v142; // x1
  __int64 v143; // x9
  __int64 v144; // x10
  unsigned __int64 v145; // x11
  __int64 v146; // x11
  _BOOL8 v147; // x0
  __int64 v148; // x1
  __int64 v149; // x3
  AiLogic_AiInfo_o *v150; // x22
  int v151; // w21
  System_Int64_array *v152; // x2
  int v153; // w8
  Il2CppObject *v154; // x21
  Il2CppClass *v155; // x8
  unsigned __int64 v156; // x10
  int32_t *v157; // x11
  __int64 v158; // x0
  __int64 v159; // x3
  Il2CppClass *v160; // x8
  unsigned int v161; // w22
  struct BattleData_o *v162; // x25
  unsigned __int64 v163; // x10
  int32_t *v164; // x11
  __int64 v165; // x0
  __int64 v166; // x0
  __int64 v167; // x1
  unsigned __int64 v168; // x8
  unsigned int v169; // w10
  double v170; // d0
  _BOOL8 v171; // x0
  __int64 v172; // x1
  __int64 v173; // x3
  Il2CppObject *v174; // x21
  Il2CppClass *v175; // x8
  unsigned __int64 v176; // x10
  int32_t *v177; // x11
  __int64 v178; // x0
  __int64 v179; // x3
  Il2CppClass *v180; // x8
  __int64 v181; // x2
  struct BattleData_o *v182; // x23
  unsigned __int64 v183; // x10
  int32_t *v184; // x11
  unsigned int v185; // w26
  __int64 v186; // x0
  __int64 v187; // x0
  __int64 v188; // x1
  __int64 v189; // x9
  __int64 v190; // x10
  unsigned __int64 aiType; // x11
  __int64 v192; // x11
  _BOOL8 v193; // x0
  __int64 v194; // x1
  __int64 v195; // x3
  char v196; // w20
  __int64 v198; // x0
  __int64 v199; // x0
  __int64 v200; // x0
  __int64 v201; // x0
  __int64 v202; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v203; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v204; // [xsp+0h] [xbp-E0h]
  _BOOL4 v205; // [xsp+0h] [xbp-E0h]
  int v206; // [xsp+Ch] [xbp-D4h]
  AiLogic_AiInfo_o *v207; // [xsp+10h] [xbp-D0h]
  ConditionsInformation_ISCheckFunction_o *func; // [xsp+18h] [xbp-C8h]
  System_Int64_array *entVals; // [xsp+20h] [xbp-C0h]
  AiLogic_o *v212; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v213[2]; // [xsp+38h] [xbp-A8h] BYREF
  int v214; // [xsp+6Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v215; // [xsp+70h] [xbp-70h] BYREF
  int32_t v216; // [xsp+8Ch] [xbp-54h] BYREF

  v212 = this;
  if ( (byte_42E685B & 1) == 0 )
  {
    sub_B5D5C4(&AiInterface_TypeInfo, (_DWORD)aiInfo, (_DWORD)aiEnt, *(_QWORD *)&turn);
    sub_B5D5C4(&Ai_COND_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ConditionsInformation_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&double___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_long___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_long___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_long___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v32, v33, v34);
    sub_B5D5C4(&long___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiInterface__Add__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiInterface___ctor__, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_List_AiInterface__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_9431/*"NOT_"*/, v53, v54, v55);
    this = (AiLogic_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v56, v57, v58);
    byte_42E685B = 1;
  }
  v216 = 0;
  memset(&v215, 0, sizeof(v215));
  v214 = 0;
  if ( !aiEnt )
    goto LABEL_266;
  this = (AiLogic_o *)Ai__getCond(aiEnt->fields.cond, (const MethodInfo *)aiInfo);
  v216 = (int)this;
  if ( !aiInfo )
    goto LABEL_266;
  cond = aiEnt->fields.cond;
  v60 = (System_String_o *)StringLiteral_9431/*"NOT_"*/;
  v61 = (System_String_o *)StringLiteral_1/*""*/;
  this = (AiLogic_o *)j_il2cpp_value_box_0(Ai_COND_TypeInfo, &v216);
  if ( !this )
    goto LABEL_266;
  v62 = this;
  if ( cond >= 0 )
    v60 = v61;
  v63 = (System_String_o *)((__int64 (__fastcall *)(AiLogic_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  v216 = *(_DWORD *)j_il2cpp_object_unbox_0(v62);
  System_String__Concat_44577788(v60, v63, 0LL);
  v64 = v216;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  v65 = ConditionsInformation__getCheckFunction(v64, 0LL);
  if ( !v65 )
    goto LABEL_261;
  v66 = v65;
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v66->fields.target )
  {
    case 1:
      if ( !v67 )
        goto LABEL_266;
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v212->fields.Bdata;
      goto LABEL_79;
    case 2:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( !this )
        goto LABEL_266;
      uniqueId = aiInfo->fields.uniqueId;
      if ( aiInfo->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
      goto LABEL_79;
    case 3:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      else
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      goto LABEL_82;
    case 4:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      else
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      goto LABEL_82;
    case 5:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( aiInfo->fields.aiType != 1 )
      {
        if ( !this || !v67 )
          goto LABEL_266;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].fields.Bdata;
        goto LABEL_79;
      }
      if ( !this )
        goto LABEL_266;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
      v74 = v212->fields.Bdata;
      if ( !v74 )
        goto LABEL_266;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_48;
      goto LABEL_24;
    case 6:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        v74 = v212->fields.Bdata;
        if ( !v74 )
          goto LABEL_266;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_48:
          if ( !v67 )
            goto LABEL_266;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v74->fields.playerFieldStatus;
        }
        else
        {
LABEL_24:
          if ( !v67 )
            goto LABEL_266;
          Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)v74->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v67 )
          goto LABEL_266;
        Bdata = (EventMissionProgressRequest_Argument_ProgressData_o *)this[7].monitor;
      }
LABEL_79:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v67,
        Bdata,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AiInterface__Add__);
      goto LABEL_84;
    case 7:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      else
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      goto LABEL_82;
    case 8:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
      else
      {
        if ( !this )
          goto LABEL_266;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v67 )
          goto LABEL_266;
      }
LABEL_82:
      v73 = (System_Collections_Generic_IEnumerable_T__o *)this;
      v72 = (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
LABEL_83:
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v67,
        v73,
        v72);
LABEL_84:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, (const MethodInfo *)aiInfo);
      v80 = this;
      wkZero = v212->fields.wkZero;
      if ( v66->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_266;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v82 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_1CB6AAC *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v82,
                                (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
          v80 = this;
        }
      }
      v207 = aiInfo;
      v206 = cond;
      if ( !v66->fields.isParams )
      {
        if ( v66->fields.isIndiv )
        {
          if ( !v80 )
            goto LABEL_266;
          if ( v80->fields._aiType >= 2 )
          {
            v87 = System_Linq_Enumerable__Skip_long_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v80,
                    1,
                    (const MethodInfo_1CB6AAC *)Method_System_Linq_Enumerable_Skip_long___);
            v88 = System_Linq_Enumerable__Take_long_(
                    v87,
                    v80->fields._aiType - 1,
                    (const MethodInfo_1CB6E00 *)Method_System_Linq_Enumerable_Take_long___);
            v89 = System_Linq_Enumerable__ToArray_long_(
                    v88,
                    (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
            this = (AiLogic_o *)sub_B5D5DC(long___TypeInfo, 1LL);
            if ( v80->fields._aiType )
            {
              if ( !this )
                goto LABEL_266;
              if ( this->fields._aiType )
              {
                thinkList = v80->fields._thinkList;
                v85 = wkZero;
                wkZero = v89;
                goto LABEL_103;
              }
            }
LABEL_281:
            v202 = sub_B5D6C8(this);
            sub_B5D668(v202, 0LL);
          }
        }
LABEL_98:
        entVals = (System_Int64_array *)v80;
        v85 = wkZero;
        goto LABEL_104;
      }
      if ( !v80 )
        goto LABEL_266;
      if ( v80->fields._aiType < 2 )
        goto LABEL_98;
      v83 = System_Linq_Enumerable__Skip_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v80,
              1,
              (const MethodInfo_1CB6AAC *)Method_System_Linq_Enumerable_Skip_long___);
      v84 = System_Linq_Enumerable__Take_long_(
              v83,
              v80->fields._aiType - 1,
              (const MethodInfo_1CB6E00 *)Method_System_Linq_Enumerable_Take_long___);
      v85 = System_Linq_Enumerable__ToArray_long_(
              v84,
              (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
      this = (AiLogic_o *)sub_B5D5DC(long___TypeInfo, 1LL);
      if ( !v80->fields._aiType )
        goto LABEL_281;
      if ( !this )
        goto LABEL_266;
      if ( !this->fields._aiType )
        goto LABEL_281;
      thinkList = v80->fields._thinkList;
LABEL_103:
      entVals = (System_Int64_array *)this;
      this->fields._thinkList = thinkList;
LABEL_104:
      refine = v66->fields.refine;
      func = v66->fields.func;
      if ( refine )
      {
        v91 = 0;
      }
      else
      {
        if ( !v67 )
          goto LABEL_266;
        v203 = v67;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v213,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v215 = v213[0];
        while ( 1 )
        {
          v92 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v215,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v92 )
            break;
          current = v215.fields.current;
          if ( !v215.fields.current )
            sub_B5D69C(v92, v93);
          klass = v215.fields.current->klass;
          if ( *(_WORD *)&v215.fields.current->klass->_2.bitflags1 )
          {
            v97 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              ++v97;
              p_offset += 4;
              if ( v97 >= *(unsigned __int16 *)&v215.fields.current->klass->_2.bitflags1 )
                goto LABEL_114;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_114:
            p_method = sub_AF54C0(v215.fields.current, AiInterface_TypeInfo, 1LL, v94);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v66,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v101 = current->klass;
            paramater = v66->fields.paramater;
            v103 = v212->fields.Bdata;
            if ( *(_WORD *)&current->klass->_2.bitflags1 )
            {
              v104 = 0LL;
              v105 = &v101->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v105 - 1) != AiInterface_TypeInfo )
              {
                ++v104;
                v105 += 4;
                if ( v104 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
                  goto LABEL_121;
              }
              v106 = (__int64)&v101->vtable[*v105].method;
            }
            else
            {
LABEL_121:
              v106 = sub_AF54C0(current, AiInterface_TypeInfo, 0LL, v100);
            }
            v107 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v106)(
                                            current,
                                            v103,
                                            paramater,
                                            (unsigned int)turn,
                                            (unsigned int)actcnt,
                                            v85,
                                            aiEnt,
                                            *(_QWORD *)(v106 + 8));
            if ( !func )
              sub_B5D69C(0LL, v107);
            if ( ConditionsInformation_ISCheckFunction__Invoke(func, v107, entVals, 0LL) )
            {
              v108 = 1;
              goto LABEL_127;
            }
          }
        }
        v108 = 0;
LABEL_127:
        *((_DWORD *)&v213[1].fields.list + v214++) = 1755;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v215,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v67 = v203;
        v91 = v108 != 0;
        if ( v214 )
        {
          v109 = v214 - 1;
          if ( *((_DWORD *)&v213[0].fields.current + v214 + 1) == 1755 )
          {
LABEL_154:
            v214 = v109;
LABEL_191:
            v151 = cond;
            v150 = aiInfo;
            goto LABEL_259;
          }
        }
        refine = v66->fields.refine;
      }
      if ( refine == 1 )
      {
        if ( !v67 )
          goto LABEL_266;
        v204 = v67;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v213,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v215 = v213[0];
        while ( 1 )
        {
          v110 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v215,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          if ( !v110 )
            break;
          v113 = v215.fields.current;
          if ( !v215.fields.current )
            sub_B5D69C(v110, v111);
          v114 = v215.fields.current->klass;
          if ( *(_WORD *)&v215.fields.current->klass->_2.bitflags1 )
          {
            v115 = 0LL;
            v116 = &v114->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v116 - 1) != AiInterface_TypeInfo )
            {
              ++v115;
              v116 += 4;
              if ( v115 >= *(unsigned __int16 *)&v215.fields.current->klass->_2.bitflags1 )
                goto LABEL_139;
            }
            v117 = (__int64)&v114->vtable[*v116 + 1].method;
          }
          else
          {
LABEL_139:
            v117 = sub_AF54C0(v215.fields.current, AiInterface_TypeInfo, 1LL, v112);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v117)(
                  v113,
                  v66,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v117 + 8)) & 1) != 0 )
          {
            v119 = v113->klass;
            v120 = v66->fields.paramater;
            v121 = v212->fields.Bdata;
            if ( *(_WORD *)&v113->klass->_2.bitflags1 )
            {
              v122 = 0LL;
              v123 = &v119->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v123 - 1) != AiInterface_TypeInfo )
              {
                ++v122;
                v123 += 4;
                if ( v122 >= *(unsigned __int16 *)&v113->klass->_2.bitflags1 )
                  goto LABEL_146;
              }
              v124 = (__int64)&v119->vtable[*v123].method;
            }
            else
            {
LABEL_146:
              v124 = sub_AF54C0(v113, AiInterface_TypeInfo, 0LL, v118);
            }
            v125 = (System_Double_array *)(*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v124)(
                                            v113,
                                            v121,
                                            v120,
                                            (unsigned int)turn,
                                            (unsigned int)actcnt,
                                            v85,
                                            aiEnt,
                                            *(_QWORD *)(v124 + 8));
            if ( !func )
              sub_B5D69C(0LL, v125);
            if ( !ConditionsInformation_ISCheckFunction__Invoke(func, v125, entVals, 0LL) )
            {
              v126 = 0;
              goto LABEL_152;
            }
          }
        }
        v126 = 1;
LABEL_152:
        *((_DWORD *)&v213[1].fields.list + v214++) = 1755;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v215,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        v67 = v204;
        v91 = v126 != 0;
        if ( v214 )
        {
          v109 = v214 - 1;
          if ( *((_DWORD *)&v213[0].fields.current + v214 + 1) == 1755 )
            goto LABEL_154;
        }
      }
      v127 = v66->fields.refine;
      if ( v127 == 2 )
      {
        this = (AiLogic_o *)sub_B5D5DC(double___TypeInfo, 0LL);
        if ( v67 )
        {
          v128 = this;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            v213,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v215 = v213[0];
LABEL_251:
          while ( 1 )
          {
            v193 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v215,
                     (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v193 )
              break;
            v174 = v215.fields.current;
            if ( !v215.fields.current )
              sub_B5D69C(v193, v194);
            v175 = v215.fields.current->klass;
            if ( *(_WORD *)&v215.fields.current->klass->_2.bitflags1 )
            {
              v176 = 0LL;
              v177 = &v175->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v177 - 1) != AiInterface_TypeInfo )
              {
                ++v176;
                v177 += 4;
                if ( v176 >= *(unsigned __int16 *)&v215.fields.current->klass->_2.bitflags1 )
                  goto LABEL_226;
              }
              v178 = (__int64)&v175->vtable[*v177 + 1].method;
            }
            else
            {
LABEL_226:
              v178 = sub_AF54C0(v215.fields.current, AiInterface_TypeInfo, 1LL, v195);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v178)(
                    v174,
                    v66,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v178 + 8)) & 1) != 0 )
            {
              v180 = v174->klass;
              v181 = (unsigned int)v66->fields.paramater;
              v205 = v91;
              v182 = v212->fields.Bdata;
              if ( *(_WORD *)&v174->klass->_2.bitflags1 )
              {
                v183 = 0LL;
                v184 = &v180->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v184 - 1) != AiInterface_TypeInfo )
                {
                  ++v183;
                  v184 += 4;
                  if ( v183 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
                    goto LABEL_233;
                }
                v186 = (__int64)&v180->vtable[*v184].method;
              }
              else
              {
LABEL_233:
                v185 = v66->fields.paramater;
                v186 = sub_AF54C0(v174, AiInterface_TypeInfo, 0LL, v179);
                v181 = v185;
              }
              v187 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, __int64, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v186)(
                       v174,
                       v182,
                       v181,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v85,
                       aiEnt,
                       *(_QWORD *)(v186 + 8));
              if ( !v187 )
                sub_B5D69C(0LL, v188);
              v189 = *(_QWORD *)(v187 + 24);
              if ( v189 )
              {
                v91 = v205;
                if ( !v128 )
                  sub_B5D69C(v187, v188);
                if ( !*(_QWORD *)&v128->fields._aiType )
                  v128 = (AiLogic_o *)v187;
              }
              else
              {
                v91 = v205;
              }
              if ( (int)v189 >= 1 )
              {
                v190 = 4LL;
                while ( 1 )
                {
                  if ( !v128 )
                    sub_B5D69C(v187, v188);
                  aiType = (unsigned int)v128->fields._aiType;
                  if ( v190 - 4 < (int)aiType )
                  {
                    if ( v190 - 4 >= aiType )
                    {
                      v200 = sub_B5D6C8(v187);
                      sub_B5D668(v200, 0LL);
                    }
                    if ( *((double *)&v128->klass + v190) < *(double *)(v187 + 8 * v190) )
                      break;
                  }
                  v192 = v190 - 3;
                  ++v190;
                  if ( v192 >= (int)v189 )
                    goto LABEL_251;
                }
                v128 = (AiLogic_o *)v187;
              }
            }
          }
          *((_DWORD *)&v213[1].fields.list + v214++) = 1572;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v215,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          v151 = v206;
          v152 = entVals;
          v150 = aiInfo;
          if ( v214 )
          {
            v153 = v214 - 1;
            if ( *((_DWORD *)&v213[0].fields.current + v214 + 1) == 1572 )
              goto LABEL_254;
          }
LABEL_255:
          if ( v128 )
          {
            if ( !*(_QWORD *)&v128->fields._aiType )
              goto LABEL_259;
            goto LABEL_257;
          }
        }
LABEL_266:
        sub_B5D69C(this, aiInfo);
      }
      if ( v127 != 4 )
      {
        if ( v127 != 3 )
          goto LABEL_191;
        this = (AiLogic_o *)sub_B5D5DC(double___TypeInfo, 0LL);
        if ( !v67 )
          goto LABEL_266;
        v128 = this;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v213,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v215 = v213[0];
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
LABEL_187:
              v147 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v215,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
              if ( !v147 )
              {
                *((_DWORD *)&v213[1].fields.list + v214++) = 1383;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v215,
                  (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
                v150 = v207;
                v151 = cond;
                v152 = entVals;
                if ( !v214 )
                  goto LABEL_255;
                v153 = v214 - 1;
                if ( *((_DWORD *)&v213[0].fields.current + v214 + 1) != 1383 )
                  goto LABEL_255;
LABEL_254:
                v214 = v153;
                goto LABEL_255;
              }
              v129 = v215.fields.current;
              if ( !v215.fields.current )
                sub_B5D69C(v147, v148);
              v130 = v215.fields.current->klass;
              if ( *(_WORD *)&v215.fields.current->klass->_2.bitflags1 )
              {
                v131 = 0LL;
                v132 = &v130->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v132 - 1) != AiInterface_TypeInfo )
                {
                  ++v131;
                  v132 += 4;
                  if ( v131 >= *(unsigned __int16 *)&v215.fields.current->klass->_2.bitflags1 )
                    goto LABEL_165;
                }
                v133 = (__int64)&v130->vtable[*v132 + 1].method;
              }
              else
              {
LABEL_165:
                v133 = sub_AF54C0(v215.fields.current, AiInterface_TypeInfo, 1LL, v149);
              }
            }
            while ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v133)(
                       v129,
                       v66,
                       wkZero,
                       aiEnt,
                       *(_QWORD *)(v133 + 8)) & 1) == 0 );
            v135 = v129->klass;
            v136 = v66->fields.paramater;
            v137 = v212->fields.Bdata;
            if ( *(_WORD *)&v129->klass->_2.bitflags1 )
            {
              v138 = 0LL;
              v139 = &v135->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v139 - 1) != AiInterface_TypeInfo )
              {
                ++v138;
                v139 += 4;
                if ( v138 >= *(unsigned __int16 *)&v129->klass->_2.bitflags1 )
                  goto LABEL_172;
              }
              v140 = (__int64)&v135->vtable[*v139].method;
            }
            else
            {
LABEL_172:
              v140 = sub_AF54C0(v129, AiInterface_TypeInfo, 0LL, v134);
            }
            v141 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v140)(
                     v129,
                     v137,
                     v136,
                     (unsigned int)turn,
                     (unsigned int)actcnt,
                     v85,
                     aiEnt,
                     *(_QWORD *)(v140 + 8));
            if ( !v141 )
              sub_B5D69C(0LL, v142);
            v143 = *(_QWORD *)(v141 + 24);
            if ( !v143 )
              break;
            if ( !v128 )
              sub_B5D69C(v141, v142);
            if ( *(_QWORD *)&v128->fields._aiType )
              break;
LABEL_186:
            v128 = (AiLogic_o *)v141;
          }
          if ( (int)v143 >= 1 )
          {
            v144 = 4LL;
            while ( 1 )
            {
              if ( !v128 )
                sub_B5D69C(v141, v142);
              v145 = (unsigned int)v128->fields._aiType;
              if ( v144 - 4 < (int)v145 )
              {
                if ( v144 - 4 >= v145 )
                {
                  v201 = sub_B5D6C8(v141);
                  sub_B5D668(v201, 0LL);
                }
                if ( *(double *)(v141 + 8 * v144) < *((double *)&v128->klass + v144) )
                  goto LABEL_186;
              }
              v146 = v144 - 3;
              ++v144;
              if ( v146 >= (int)v143 )
                goto LABEL_187;
            }
          }
        }
      }
      this = (AiLogic_o *)sub_B5D5DC(double___TypeInfo, 1LL);
      if ( !v67 )
        goto LABEL_266;
      v128 = this;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v213,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v215 = v213[0];
      while ( 1 )
      {
        v171 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v215,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v171 )
          break;
        v154 = v215.fields.current;
        if ( !v215.fields.current )
          sub_B5D69C(v171, v172);
        v155 = v215.fields.current->klass;
        if ( *(_WORD *)&v215.fields.current->klass->_2.bitflags1 )
        {
          v156 = 0LL;
          v157 = &v155->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v157 - 1) != AiInterface_TypeInfo )
          {
            ++v156;
            v157 += 4;
            if ( v156 >= *(unsigned __int16 *)&v215.fields.current->klass->_2.bitflags1 )
              goto LABEL_199;
          }
          v158 = (__int64)&v155->vtable[*v157 + 1].method;
        }
        else
        {
LABEL_199:
          v158 = sub_AF54C0(v215.fields.current, AiInterface_TypeInfo, 1LL, v173);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v158)(
                v154,
                v66,
                wkZero,
                aiEnt,
                *(_QWORD *)(v158 + 8)) & 1) != 0 )
        {
          v160 = v154->klass;
          v161 = v66->fields.paramater;
          v162 = v212->fields.Bdata;
          if ( *(_WORD *)&v154->klass->_2.bitflags1 )
          {
            v163 = 0LL;
            v164 = &v160->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v164 - 1) != AiInterface_TypeInfo )
            {
              ++v163;
              v164 += 4;
              if ( v163 >= *(unsigned __int16 *)&v154->klass->_2.bitflags1 )
                goto LABEL_206;
            }
            v165 = (__int64)&v160->vtable[*v164].method;
          }
          else
          {
LABEL_206:
            v165 = sub_AF54C0(v154, AiInterface_TypeInfo, 0LL, v159);
          }
          v166 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v165)(
                   v154,
                   v162,
                   v161,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v85,
                   aiEnt,
                   *(_QWORD *)(v165 + 8));
          if ( !v166 )
            sub_B5D69C(0LL, v167);
          if ( (int)*(_QWORD *)(v166 + 24) >= 1 )
          {
            v168 = 0LL;
            v169 = *(_QWORD *)(v166 + 24);
            do
            {
              if ( v168 >= v169 )
              {
                v199 = sub_B5D6C8(v166);
                sub_B5D668(v199, 0LL);
              }
              if ( !v128 )
                sub_B5D69C(v166, v167);
              if ( !v128->fields._aiType )
              {
                v198 = sub_B5D6C8(v166);
                sub_B5D668(v198, 0LL);
              }
              v170 = *(double *)(v166 + 32 + 8 * v168++);
              *(double *)&v128->fields._thinkList = v170 + *(double *)&v128->fields._thinkList;
              v169 = *(_DWORD *)(v166 + 24);
            }
            while ( (__int64)v168 < (int)v169 );
          }
        }
      }
      *((_DWORD *)&v213[1].fields.list + v214++) = 1742;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v215,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      v150 = v207;
      v151 = cond;
      v152 = entVals;
      if ( v214 && *((_DWORD *)&v213[0].fields.current + v214 + 1) == 1742 )
        --v214;
LABEL_257:
      this = (AiLogic_o *)func;
      if ( !func )
        goto LABEL_266;
      LOBYTE(v91) = ConditionsInformation_ISCheckFunction__Invoke(func, (System_Double_array *)v128, v152, 0LL);
LABEL_259:
      v196 = (v151 < 0) ^ v91;
      if ( (v196 & 1) != 0 && !AiLogic_AiInfo__CheckAiCanActionFromTargets(v150, aiEnt, 0LL) )
LABEL_261:
        v196 = 0;
      return v196 & 1;
    case 9:
      v75 = v212;
      v77 = 1;
      v76 = (System_Collections_Generic_List_AiInterface__o *)v67;
      goto LABEL_60;
    case 0xA:
      v77 = 1;
      v70 = 1;
      goto LABEL_57;
    case 0xB:
      v77 = 1;
      v70 = 2;
LABEL_57:
      v75 = v212;
      v76 = (System_Collections_Generic_List_AiInterface__o *)v67;
      goto LABEL_58;
    case 0xC:
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( !this )
        goto LABEL_266;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v67 )
        goto LABEL_266;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v67,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v212->fields.Bdata;
      if ( !this )
        goto LABEL_266;
      FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
      v72 = (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_AiInterface__AddRange__;
      v73 = (System_Collections_Generic_IEnumerable_T__o *)FieldEnemyServantList;
      goto LABEL_83;
    case 0xD:
      v75 = v212;
      v76 = (System_Collections_Generic_List_AiInterface__o *)v67;
      v77 = 0;
LABEL_60:
      v79 = aiInfo;
      v70 = 0;
      goto LABEL_61;
    case 0xE:
      v70 = 1;
      goto LABEL_51;
    case 0xF:
      v70 = 2;
LABEL_51:
      v75 = v212;
      v76 = (System_Collections_Generic_List_AiInterface__o *)v67;
      v77 = 0;
LABEL_58:
      v79 = aiInfo;
LABEL_61:
      AiLogic__getTargetPosServant(v75, v76, v77, v79, v70, v68);
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t uniqueId; // w26
  AiState_o *v20; // x25
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
  if ( (byte_42E6857 & 1) == 0 )
  {
    sub_B5D5C4(&AiEntity_TypeInfo, (_DWORD)svtData, procState, *(_QWORD *)&turnCount);
    this = (AiLogic_o *)sub_B5D5C4(&AiLogic_AiInfo_TypeInfo, v16, v17, v18);
    byte_42E6857 = 1;
  }
  if ( !svtData )
    sub_B5D69C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v20 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v21 = (AiLogic_AiInfo_o *)sub_B5D694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v21, 1, uniqueId, v20, logicAi, procState, 0LL);
  *info = v21;
  sub_B5D560((BattleServantConfConponent_o *)info, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct AiState_o *aiState; // x20
  const MethodInfo *v16; // x6
  unsigned int i; // w28
  AiBaseEntity_o *BasicAct; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *Bdata; // x26
  const MethodInfo *v21; // x3
  struct BattleData_o *v22; // x8
  UnityEngine_Object_o *v23; // x22
  const MethodInfo *v24; // x1
  struct BattleData_o *v25; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v27; // x8
  struct BattleData_o *v28; // x8
  struct BattleData_o *v29; // x8

  v11 = this;
  if ( (byte_42E6859 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__,
      (_DWORD)aiInfo,
      procState,
      *(_QWORD *)&turnCount);
    this = (AiLogic_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E6859 = 1;
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
                 v16);
    if ( !BasicAct )
      return BasicAct;
    this = (AiLogic_o *)v11->fields.aiActMst;
    if ( !this )
      goto LABEL_37;
    this = (AiLogic_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          BasicAct->fields.aiActId,
                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    if ( HIDWORD(this->fields.Bdata) != 99 )
      break;
    aiState->fields.aiGroupId = AiBaseEntity__getIndexAval(BasicAct, 0, v19);
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
      v22 = v11->fields.Bdata;
      if ( !v22 )
        goto LABEL_37;
      this = (AiLogic_o *)v22->fields.battleEvent;
      if ( !this )
        goto LABEL_37;
      ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
        this,
        aiState,
        BasicAct,
        this->klass[2]._1.image);
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v21);
  }
  v23 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, v24);
    if ( (_DWORD)this )
    {
      v25 = v11->fields.Bdata;
      if ( !v25 )
        goto LABEL_37;
      playerNpCount = v25->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
      v25->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v27 = v11->fields.Bdata;
      if ( !v27 )
        goto LABEL_37;
      if ( (v27->fields.playerNpCount & 0x80000000) != 0 )
        v27->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, (const MethodInfo *)aiInfo);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v28 = v11->fields.Bdata;
      if ( !v28 )
        goto LABEL_37;
      v28->fields.playerNpCount = 0;
    }
    v29 = v11->fields.Bdata;
    if ( v29 )
    {
      this = (AiLogic_o *)v29->fields.battleEvent;
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
    sub_B5D69C(this, aiInfo);
  }
  return BasicAct;
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiLogic__getAction_21305888(
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t index; // w25
  AiState_o *aiState; // x24
  AiLogic_AiInfo_o *v19; // x26
  int32_t v20; // w4
  const MethodInfo *v21; // x6
  AiFieldEntity_o *result; // x0
  __int64 v23; // x10

  v13 = this;
  if ( (byte_42E6858 & 1) == 0 )
  {
    sub_B5D5C4(&AiFieldEntity_TypeInfo, (_DWORD)fieldData, procState, *(_QWORD *)&turnCount);
    this = (AiLogic_o *)sub_B5D5C4(&AiLogic_AiInfo_TypeInfo, v14, v15, v16);
    byte_42E6858 = 1;
  }
  if ( !fieldData )
    sub_B5D69C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v19 = (AiLogic_AiInfo_o *)sub_B5D694(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v19, 2, index, aiState, logicAi, procState, 0LL);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(v13, v19, procState, turnCount, v20, timingPriority, v21);
  if ( result )
  {
    v23 = *(&AiFieldEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
    {
      if ( (AiFieldEntity_c *)result->klass->_2.typeHierarchy[v23 - 1] != AiFieldEntity_TypeInfo )
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  AiLogic___c__DisplayClass16_0_o *v82; // x22
  void *All; // x0
  __int64 v84; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v87; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v88; // x23
  AiLogic___c_c *v89; // x8
  struct AiLogic___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_1; // x24
  Il2CppObject *v92; // x25
  struct AiLogic___c_StaticFields *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  AiLogic___c__DisplayClass16_1_o *v100; // x24
  TitleInfoControl_EventEndTimeInfo_o *v101; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v102; // x25
  const MethodInfo *v103; // x5
  int v104; // w8
  char *v105; // x24
  WeightRate_int__o *v106; // x25
  const MethodInfo *v107; // x5
  __int64 v108; // x8
  unsigned __int64 v109; // x26
  char *v110; // x27
  int32_t Next; // w0
  const MethodInfo *v112; // x5
  AiBaseEntity_o *v113; // x24
  __int64 v115; // x0

  if ( (byte_42E685A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_AiBaseEntity___ctor__, (_DWORD)aiInfo, procState, *(_QWORD *)&turn);
    sub_B5D5C4(&System_Comparison_AiBaseEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Predicate_AiBaseEntity___ctor__, v40, v41, v42);
    sub_B5D5C4(&System_Predicate_AiBaseEntity__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_AiLogic___c__getBasicAct_b__16_1__, v46, v47, v48);
    sub_B5D5C4(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v49, v50, v51);
    sub_B5D5C4(&AiLogic___c__DisplayClass16_0_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v55, v56, v57);
    sub_B5D5C4(&AiLogic___c__DisplayClass16_1_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&AiLogic___c_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v64, v65, v66);
    sub_B5D5C4(&Method_WeightRate_int__getCount__, v67, v68, v69);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v70, v71, v72);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v73, v74, v75);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v76, v77, v78);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v79, v80, v81);
    byte_42E685A = 1;
  }
  v82 = (AiLogic___c__DisplayClass16_0_o *)sub_B5D694(AiLogic___c__DisplayClass16_0_TypeInfo);
  AiLogic___c__DisplayClass16_0___ctor(v82, 0LL);
  if ( !v82 )
    goto LABEL_44;
  v82->fields.procState = procState;
  v82->fields.actcnt = actcnt;
  v82->fields.timingPriority = timingPriority;
  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v85,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = this->fields._thinkList;
  v87 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v87,
    (Il2CppObject *)v82,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_AiBaseEntity___ctor__);
  if ( !thinkList )
    goto LABEL_44;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)thinkList,
          (System_Predicate_T__o *)v87,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v88 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)All;
  v89 = AiLogic___c_TypeInfo;
  if ( (BYTE3(AiLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v89 = AiLogic___c_TypeInfo;
  }
  static_fields = v89->static_fields;
  _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      static_fields = AiLogic___c_TypeInfo->static_fields;
    }
    v92 = (Il2CppObject *)static_fields->__9;
    _9__16_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_1,
      v92,
      Method_AiLogic___c__getBasicAct_b__16_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_AiBaseEntity___ctor__);
    v93 = AiLogic___c_TypeInfo->static_fields;
    v93->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v93->__9__16_1,
      (System_Int32_array **)_9__16_1,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
  if ( !v88 )
LABEL_44:
    sub_B5D69C(All, v84);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v88,
    (System_Comparison_T__o *)_9__16_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v88->fields._size >= 1 )
  {
    while ( 1 )
    {
      v100 = (AiLogic___c__DisplayClass16_1_o *)sub_B5D694(AiLogic___c__DisplayClass16_1_TypeInfo);
      AiLogic___c__DisplayClass16_1___ctor(v100, 0LL);
      if ( v88->fields._size < 1 )
        return 0LL;
      v101 = v88->fields._items->m_Items[0];
      if ( !v101 )
        goto LABEL_44;
      if ( !v100 )
        goto LABEL_44;
      v100->fields.priority = HIDWORD(v101->fields.end_time);
      v102 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v102,
        (Il2CppObject *)v100,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_AiBaseEntity___ctor__);
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v88,
              (System_Predicate_T__o *)v102,
              (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_44;
      All = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_44;
      v104 = *((_DWORD *)All + 6);
      v105 = (char *)All;
      if ( v104 <= 1 )
        break;
      v106 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v106, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
      v108 = *((_QWORD *)v105 + 3);
      if ( (int)v108 >= 1 )
      {
        v109 = 0LL;
        v110 = v105 + 32;
        while ( v109 < (unsigned int)v108 )
        {
          All = (void *)AiLogic__checkThinking_21307504(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v110[8 * v109],
                          turn,
                          v82->fields.actcnt,
                          v107);
          if ( v109 >= *((unsigned int *)v105 + 6) )
            break;
          v84 = *(_QWORD *)&v110[8 * v109];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v84 || !v106 )
              goto LABEL_44;
            WeightRate_int___setWeight(
              v106,
              *(_DWORD *)(v84 + 32),
              v109,
              (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v88,
                            (WarBoardManager_TaskList_o *)v84,
                            (const MethodInfo_305896C *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v108) = *((_DWORD *)v105 + 6);
          if ( (__int64)++v109 >= (int)v108 )
            goto LABEL_31;
        }
LABEL_43:
        v115 = sub_B5D6C8(All);
        sub_B5D668(v115, 0LL);
      }
LABEL_31:
      if ( !v106 )
        goto LABEL_44;
      if ( WeightRate_int___getCount(v106, (const MethodInfo_2BF9180 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v106->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v106, Next, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v105 + 6) )
          goto LABEL_43;
        v113 = *(AiBaseEntity_o **)&v105[8 * (int)All + 32];
        if ( AiLogic__checkThinking_21307504(this, aiInfo, v113, turn, v82->fields.actcnt, v112) )
          return v113;
        goto LABEL_39;
      }
LABEL_40:
      if ( v88->fields._size <= 0 )
        return 0LL;
    }
    if ( !v104 )
      goto LABEL_43;
    All = (void *)AiLogic__checkThinking_21307504(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    v82->fields.actcnt,
                    v103);
    if ( !*((_DWORD *)v105 + 6) )
      goto LABEL_43;
    v113 = (AiBaseEntity_o *)*((_QWORD *)v105 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v113;
LABEL_39:
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v88,
      (WarBoardManager_TaskList_o *)v113,
      (const MethodInfo_305896C *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  if ( (byte_42E685C & 1) == 0 )
  {
    this = (AiLogic_o *)sub_B5D5C4(
                          &Method_System_Collections_Generic_List_AiInterface__Add__,
                          (_DWORD)targetList,
                          isOpponent,
                          aiInfo);
    byte_42E685C = 1;
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
    sub_B5D69C(this, targetList);
  this = (AiLogic_o *)BattleData__getServantDataFromIndex((BattleData_o *)this, pos, v13 & 1, 0LL);
  if ( this )
  {
    if ( targetList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)targetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AiInterface__Add__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x10
  BattleServantConfConponent_o *p_thinkList; // x19
  int32_t aiType; // w8
  AiBaseEntity_o *v19; // x10
  _BOOL4 v20; // w10
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  v6 = this;
  if ( (byte_42E6853 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_AiBaseEntity___ctor___68727704,
      (_DWORD)aiInfo,
      (_DWORD)aiState,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v10, v11, v12);
    this = (AiLogic_o *)sub_B5D5C4(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v13, v14, v15);
    byte_42E6853 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  p_thinkList = (BattleServantConfConponent_o *)&v6->fields._thinkList;
  thinkList = v6->fields._thinkList;
  aiType = aiInfo->fields.aiType;
  if ( thinkList && thinkList->fields._size )
  {
    v19 = thinkList->fields._items->m_Items[0];
    if ( !v19 || !aiState )
      goto LABEL_19;
    v20 = v19->fields.id != aiState->fields.aiGroupId;
  }
  else
  {
    v20 = 1;
  }
  if ( v20 || v6->fields._aiType != aiType )
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
      sub_B5D69C(this, aiInfo);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           (const MethodInfo *)aiInfo);
LABEL_18:
        v22 = ListFormGroupId;
        v23 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v23,
          v22,
          (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___68727704);
        p_thinkList->klass = (BattleServantConfConponent_c *)v23;
        sub_B5D560(p_thinkList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)v12, (System_Int32_array **)inLogicAi, v19, v20, v21, v22, v23, v24);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Xml_XmlQualifiedName_o *v14; // x23
  __int64 v15; // x1
  void *checkedInfo; // x0
  _DWORD *v17; // x22
  int32_t v18; // w20
  int32_t v19; // w21

  if ( (byte_42E7509 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      (_DWORD)svtData,
      (_DWORD)aiBaseEntity,
      aiActType);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__,
      v11,
      v12,
      v13);
    byte_42E7509 = 1;
  }
  if ( aiBaseEntity )
  {
    v14 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiBaseEntity_o *, int32_t *, bool *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
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
              v14,
              (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v14,
                      (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v14,
                      (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)checkedInfo,
                      (System_Type_o *)v14,
                      (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      v17 = (_DWORD *)*((_QWORD *)checkedInfo + 3);
      if ( !v17 )
        return;
      v19 = v17[4];
      v18 = v17[5];
      checkedInfo = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v17 + 392LL))(
                              *((_QWORD *)checkedInfo + 3),
                              *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      if ( !svtData )
LABEL_17:
        sub_B5D69C(checkedInfo, v15);
      BattleServantData__addSkillInfo(svtData, v19, v18, (int32_t)checkedInfo, v17[9], -1LL, -1, 0LL, 0LL);
    }
  }
}


bool __fastcall AiLogic_AiInfo__IsChecked(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // x20
  System_Xml_XmlQualifiedName_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E7508 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      (_DWORD)aiBaseEntity,
      (_DWORD)method,
      v3);
    byte_42E7508 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v8 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                          aiBaseEntity,
                                          aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_B5D69C(v8, v9);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)checkedInfo,
           v8,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void __fastcall AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BattleServantConfConponent_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Xml_XmlQualifiedName_o *klass; // x0
  __int64 v26; // x1
  System_Xml_XmlQualifiedName_o *v27; // x21

  if ( (byte_42E7507 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__,
      (_DWORD)aiBaseEntity,
      (_DWORD)inCheckedInfo,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v13, v14, v15);
    byte_42E7507 = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (BattleServantConfConponent_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v18 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v18,
        (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (BattleServantConfConponent_c *)v18;
      sub_B5D560(p_checkedInfo, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
    }
    klass = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                                               aiBaseEntity,
                                               aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                                               inCheckedInfo,
                                               method);
    if ( p_checkedInfo->klass )
    {
      v27 = klass;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (System_Xml_XmlQualifiedName_o *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)klass,
          v27,
          (System_Xml_Schema_XmlSchemaObject_o *)inCheckedInfo,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_B5D69C(klass, v26);
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
  sub_B5D560(v8);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7506 & 1) == 0 )
  {
    sub_B5D5C4(&AiLogic___c_TypeInfo, v1, v2, v3);
    byte_42E7506 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AiLogic___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return s->fields.priority == this->fields.priority;
}