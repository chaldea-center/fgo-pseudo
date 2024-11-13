void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int64_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18D3C & 1) == 0 )
  {
    sub_1BCA7E0(&long___TypeInfo, method, v2);
    byte_4B18D3C = 1;
  }
  v4 = (struct System_Int64_array *)sub_1BCA888(long___TypeInfo, 0LL);
  this->fields.wkZero = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wkZero, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AiLogic__INITLOG(AiLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AiLogic__Initialize(AiLogic_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B18D31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AiActMaster___, data, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B18D31 = 1;
  }
  this->fields.Bdata = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v13);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.aiActMst,
    (int64_t)MasterData_object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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

  switch ( type )
  {
    case 3:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0LL) )
        break;
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0LL);
      if ( IsNullOrEmpty )
        break;
      if ( !opponentTargets )
        goto LABEL_19;
      if ( !opponentTargets->max_length )
        goto LABEL_20;
      if ( (opponentTargets->m_Items[1] & 0x80000000) == 0 )
        break;
LABEL_15:
      if ( partyTargets )
      {
        if ( partyTargets->max_length )
        {
          v9 = partyTargets->m_Items[1];
          return v9 >> 31;
        }
LABEL_20:
        sub_1BCAA44(IsNullOrEmpty, v8);
      }
LABEL_19:
      sub_1BCAA3C(IsNullOrEmpty, v8);
    case 2:
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0LL);
      if ( IsNullOrEmpty )
        break;
      goto LABEL_15;
    case 1:
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( opponentTargets )
        {
          if ( opponentTargets->max_length )
          {
            v9 = opponentTargets->m_Items[1];
            return v9 >> 31;
          }
          goto LABEL_20;
        }
        goto LABEL_19;
      }
      break;
  }
  LOBYTE(v10) = 0;
  return v10;
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
  __int64 v15; // x3
  AiLogic_AiInfo_o *v16; // x25
  const MethodInfo *v17; // x6
  const MethodInfo *v18; // x4

  v10 = this;
  if ( (byte_4B18D33 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1BCA7E0(&AiLogic_AiInfo_TypeInfo, svtData, *(_QWORD *)&procState);
    byte_4B18D33 = 1;
  }
  if ( !svtData )
    sub_1BCAA3C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v16 = (AiLogic_AiInfo_o *)sub_1BCAA2C(AiLogic_AiInfo_TypeInfo, v13, v14, v15);
  AiLogic_AiInfo___ctor(v16, 1, uniqueId, v12, logicAi, procState, v17);
  return AiLogic__checkThinkingBase(v10, v16, procState, timingPriority, v18);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x23
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *thinkList; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Predicate_object__o *v25; // x20

  if ( (byte_4B18D35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, aiInfo, *(_QWORD *)&procState);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Predicate_AiBaseEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v13, v14);
    sub_1BCA7E0(&AiLogic___c__DisplayClass12_0_TypeInfo, v15, v16);
    byte_4B18D35 = 1;
  }
  v17 = sub_1BCAA2C(AiLogic___c__DisplayClass12_0_TypeInfo, aiInfo, *(_QWORD *)&procState, *(_QWORD *)&timingPriority);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17
    || (*(_DWORD *)(v17 + 16) = procState, *(_DWORD *)(v17 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v20),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v25 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_AiBaseEntity__TypeInfo, v22, v23, v24),
        System_Predicate_object____ctor(
          v25,
          (Il2CppObject *)v17,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0LL),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v25,
                (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_1BCAA3C(All, v19);
  }
  return All->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinking_44105784(
        AiLogic_o *this,
        BattleFieldData_o *fieldData,
        int32_t procState,
        BattleLogicBaseAi_o *logicAi,
        const MethodInfo *method)
{
  AiLogic_o *v8; // x21
  int32_t index; // w23
  AiState_o *aiState; // x22
  AiLogic_AiInfo_o *v11; // x24
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x4

  v8 = this;
  if ( (byte_4B18D34 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1BCA7E0(&AiLogic_AiInfo_TypeInfo, fieldData, *(_QWORD *)&procState);
    byte_4B18D34 = 1;
  }
  if ( !fieldData )
    sub_1BCAA3C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_1BCAA2C(AiLogic_AiInfo_TypeInfo, fieldData, *(_QWORD *)&procState, logicAi);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool __fastcall AiLogic__checkThinking_44108404(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  AiLogic_AiInfo_o *v7; // x29
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t Cond; // w20
  System_String_o **v43; // x8
  System_String_o *v44; // x21
  unsigned __int8 v45; // w26
  System_String_o *v46; // x0
  const MethodInfo *v47; // x1
  ConditionsInformation_CheckInfo_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  ConditionsInformation_CheckInfo_o *v52; // x25
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int32_t v60; // w4
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *Bdata; // x8
  AiLogic_o *v63; // x0
  System_Collections_Generic_List_AiInterface__o *v64; // x1
  bool v65; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v67; // x3
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  AiLogic_o *v72; // x21
  System_Int64_array *wkZero; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_List_object__o *v78; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Int64_array *v81; // x20
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x24
  bool v84; // w21
  _BOOL8 v85; // x0
  __int64 v86; // x1
  bool v87; // w20
  Il2CppObject *v88; // x27
  Il2CppClass *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  Il2CppClass *v93; // x8
  unsigned int v94; // w22
  struct BattleData_o *v95; // x23
  __int64 v96; // x9
  int32_t *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  _BOOL8 v100; // x0
  __int64 v101; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v104; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v107; // x8
  unsigned int paramater; // w27
  struct BattleData_o *v109; // x22
  __int64 v110; // x9
  int32_t *v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  System_Collections_Generic_List_object__o *v114; // x9
  AiLogic_o *v115; // x20
  _BOOL8 v116; // x0
  __int64 v117; // x1
  Il2CppObject *v118; // x21
  Il2CppClass *v119; // x8
  __int64 v120; // x9
  int32_t *v121; // x10
  __int64 v122; // x0
  Il2CppClass *v123; // x8
  unsigned int v124; // w22
  struct BattleData_o *v125; // x23
  __int64 v126; // x9
  int32_t *v127; // x10
  __int64 v128; // x0
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x8
  __int64 v132; // x9
  double *v133; // x10
  double v134; // t1
  AiLogic_AiInfo_o *v135; // x29
  _BOOL8 v136; // x0
  __int64 v137; // x1
  Il2CppObject *v138; // x27
  Il2CppClass *v139; // x8
  __int64 v140; // x9
  int32_t *v141; // x10
  __int64 v142; // x0
  Il2CppClass *v143; // x8
  unsigned int v144; // w22
  struct BattleData_o *v145; // x23
  __int64 v146; // x9
  int32_t *v147; // x10
  __int64 v148; // x0
  __int64 v149; // x0
  __int64 v150; // x1
  __int64 v151; // x11
  unsigned __int64 aiState_low; // x10
  unsigned __int64 v153; // x9
  AiLogic_o *v154; // x22
  _BOOL8 v155; // x0
  __int64 v156; // x1
  Il2CppObject *v157; // x27
  Il2CppClass *v158; // x8
  __int64 v159; // x9
  int32_t *v160; // x10
  __int64 v161; // x0
  Il2CppClass *v162; // x8
  unsigned int v163; // w22
  struct BattleData_o *v164; // x23
  __int64 v165; // x9
  int32_t *v166; // x10
  __int64 v167; // x0
  __int64 v168; // x0
  __int64 v169; // x1
  __int64 v170; // x11
  unsigned __int64 aiType; // x10
  unsigned __int64 v172; // x9
  struct AiState_o *aiState; // x8
  char v174; // w0
  char v175; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  System_Collections_Generic_List_object__o *v178; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v179; // [xsp+0h] [xbp-D0h]
  AiLogic_AiInfo_o *v180; // [xsp+8h] [xbp-C8h]
  unsigned __int8 v181; // [xsp+10h] [xbp-C0h]
  AiLogic_AiInfo_o *v182; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v183; // [xsp+18h] [xbp-B8h]
  System_Int64_array *v184; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v187; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v188; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v189; // [xsp+50h] [xbp-80h] BYREF

  v7 = aiInfo;
  v187 = this;
  if ( (byte_4B18D3A & 1) == 0 )
  {
    sub_1BCA7E0(&AiInterface_TypeInfo, aiInfo, aiEnt);
    sub_1BCA7E0(&Ai_COND_TypeInfo, v8, v9);
    sub_1BCA7E0(&ConditionsInformation_TypeInfo, v10, v11);
    sub_1BCA7E0(&double___TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_long___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Take_long___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_long___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v24, v25);
    sub_1BCA7E0(&long___TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiInterface__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiInterface___ctor__, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_AiInterface__TypeInfo, v36, v37);
    sub_1BCA7E0(&StringLiteral_9410/*"NOT_"*/, v38, v39);
    this = (AiLogic_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    byte_4B18D3A = 1;
  }
  memset(&v189, 0, sizeof(v189));
  if ( !aiEnt )
    goto LABEL_260;
  Cond = Ai__getCond(aiEnt->fields.cond, 0LL);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0LL);
  if ( !v7 )
    goto LABEL_260;
  v43 = (System_String_o **)&StringLiteral_9410/*"NOT_"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v43 = (System_String_o **)&StringLiteral_1/*""*/;
  v44 = *v43;
  v45 = (unsigned __int8)this;
  v188.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v188.fields._index = -1LL;
  LODWORD(v188.fields._current) = Cond;
  v46 = System_Enum__ToString((System_Enum_o *)&v188, 0LL);
  System_String__Concat_62401220(v44, v46, 0LL);
  if ( !ConditionsInformation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo, v47);
  v48 = ConditionsInformation__getCheckFunction(Cond, v47);
  if ( !v48 )
    goto LABEL_255;
  v52 = v48;
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AiInterface__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v52->fields.target )
  {
    case 1:
      if ( !v53 )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)v187->fields.Bdata;
      goto LABEL_75;
    case 2:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      uniqueId = v7->fields.uniqueId;
      if ( v7->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      items = v53->fields._items;
      v69 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v53->fields._version;
      if ( !items )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)this;
      goto LABEL_83;
    case 3:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 4:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 5:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( v7->fields.aiType != 1 )
      {
        if ( !this || !v53 )
          goto LABEL_260;
        aiInfo = *(AiLogic_AiInfo_o **)&this[7].fields._aiType;
        goto LABEL_75;
      }
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
      Bdata = v187->fields.Bdata;
      if ( !Bdata )
        goto LABEL_260;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_46;
      goto LABEL_22;
    case 6:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        Bdata = v187->fields.Bdata;
        if ( !Bdata )
          goto LABEL_260;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_46:
          if ( !v53 )
            goto LABEL_260;
          aiInfo = (AiLogic_AiInfo_o *)Bdata->fields.playerFieldStatus;
        }
        else
        {
LABEL_22:
          if ( !v53 )
            goto LABEL_260;
          aiInfo = (AiLogic_AiInfo_o *)Bdata->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v53 )
          goto LABEL_260;
        aiInfo = (AiLogic_AiInfo_o *)this[7].fields.Bdata;
      }
LABEL_75:
      items = v53->fields._items;
      v69 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v53->fields._version;
      if ( !items )
        goto LABEL_260;
LABEL_83:
      size = v53->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          (Il2CppObject *)aiInfo,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &items->obj.klass + size;
        v53->fields._size = size + 1;
        v71[4] = (Il2CppClass *)aiInfo;
        sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)aiInfo, v54, v55, v56, v57, v58, v59);
      }
      goto LABEL_86;
    case 7:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 8:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v53 )
          goto LABEL_260;
      }
LABEL_79:
      System_Collections_Generic_List_object___AddRange(
        v53,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_86:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0LL);
      v72 = this;
      wkZero = v187->fields.wkZero;
      if ( v52->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_260;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v74 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_2F4A124 *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v74,
                                (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
          v72 = this;
        }
      }
      if ( v52->fields.isParams )
      {
        if ( !v72 )
          goto LABEL_260;
        if ( v72->fields._aiType >= 2 )
        {
          v75 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v72,
                  1,
                  (const MethodInfo_2F4A124 *)Method_System_Linq_Enumerable_Skip_long___);
          v76 = System_Linq_Enumerable__Take_long_(
                  v75,
                  v72->fields._aiType - 1,
                  (const MethodInfo_2F4A75C *)Method_System_Linq_Enumerable_Take_long___);
          v184 = System_Linq_Enumerable__ToArray_long_(
                   v76,
                   (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1BCA888(long___TypeInfo, 1LL);
          if ( v72->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v72->fields._thinkList;
              v183 = this;
LABEL_105:
              this->fields._thinkList = thinkList;
              goto LABEL_106;
            }
          }
          goto LABEL_153;
        }
      }
      else if ( v52->fields.isIndiv )
      {
        if ( !v72 )
          goto LABEL_260;
        if ( v72->fields._aiType >= 2 )
        {
          v78 = v53;
          v79 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v72,
                  1,
                  (const MethodInfo_2F4A124 *)Method_System_Linq_Enumerable_Skip_long___);
          v80 = System_Linq_Enumerable__Take_long_(
                  v79,
                  v72->fields._aiType - 1,
                  (const MethodInfo_2F4A75C *)Method_System_Linq_Enumerable_Take_long___);
          v81 = System_Linq_Enumerable__ToArray_long_(
                  v80,
                  (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1BCA888(long___TypeInfo, 1LL);
          if ( v72->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v72->fields._thinkList;
              v183 = this;
              v184 = wkZero;
              wkZero = v81;
              v53 = v78;
              goto LABEL_105;
            }
          }
LABEL_153:
          sub_1BCAA44(this, aiInfo);
        }
      }
      v183 = v72;
      v184 = wkZero;
LABEL_106:
      refine = v52->fields.refine;
      func = v52->fields.func;
      if ( !refine )
      {
        v181 = v45;
        if ( !v53 )
          goto LABEL_260;
        v179 = v53;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v188,
          v53,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v189 = v188;
        while ( 1 )
        {
          v100 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v189,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v84 = v100;
          if ( !v100 )
            break;
          current = v189.fields._current;
          if ( !v189.fields._current )
            sub_1BCAA3C(v100, v101);
          klass = v189.fields._current->klass;
          v104 = *(unsigned __int16 *)(&v189.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v189.fields._current->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v104;
              p_offset += 4;
              if ( !v104 )
                goto LABEL_136;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_136:
            p_method = sub_1C1C7C0(v189.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v52,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v107 = current->klass;
            paramater = v52->fields.paramater;
            v109 = v187->fields.Bdata;
            v110 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
            {
              v111 = &v107->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v111 - 1) != AiInterface_TypeInfo )
              {
                --v110;
                v111 += 4;
                if ( !v110 )
                  goto LABEL_143;
              }
              v112 = (__int64)&v107->vtable[*v111].method;
            }
            else
            {
LABEL_143:
              v112 = sub_1C1C7C0(current, AiInterface_TypeInfo, 0LL);
            }
            v113 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v112)(
                     current,
                     v109,
                     paramater,
                     (unsigned int)turn,
                     (unsigned int)actcnt,
                     v184,
                     aiEnt,
                     *(_QWORD *)(v112 + 8),
                     v179);
            if ( !func )
              sub_1BCAA3C(v113, v113);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v113,
                    v183,
                    *(_QWORD *)&func->fields.extra_arg) & 1) != 0 )
              break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v189,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
LABEL_148:
        v45 = v181;
        goto LABEL_252;
      }
      v84 = refine == 1;
      if ( refine == 1 )
      {
        v181 = v45;
        if ( !v53 )
          goto LABEL_260;
        v178 = v53;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v188,
          v53,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v189 = v188;
        while ( 1 )
        {
          v85 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v189,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v87 = v85;
          if ( !v85 )
            break;
          v88 = v189.fields._current;
          if ( !v189.fields._current )
            sub_1BCAA3C(v85, v86);
          v89 = v189.fields._current->klass;
          v90 = *(unsigned __int16 *)(&v189.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v189.fields._current->klass->_2.bitflags2 + 3) )
          {
            v91 = &v89->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v91 - 1) != AiInterface_TypeInfo )
            {
              --v90;
              v91 += 4;
              if ( !v90 )
                goto LABEL_116;
            }
            v92 = (__int64)&v89->vtable[*v91 + 1].method;
          }
          else
          {
LABEL_116:
            v92 = sub_1C1C7C0(v189.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v92)(
                  v88,
                  v52,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v92 + 8)) & 1) != 0 )
          {
            v93 = v88->klass;
            v94 = v52->fields.paramater;
            v95 = v187->fields.Bdata;
            v96 = *(unsigned __int16 *)(&v88->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v88->klass->_2.bitflags2 + 3) )
            {
              v97 = &v93->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v97 - 1) != AiInterface_TypeInfo )
              {
                --v96;
                v97 += 4;
                if ( !v96 )
                  goto LABEL_123;
              }
              v98 = (__int64)&v93->vtable[*v97].method;
            }
            else
            {
LABEL_123:
              v98 = sub_1C1C7C0(v88, AiInterface_TypeInfo, 0LL);
            }
            v99 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v98)(
                    v88,
                    v95,
                    v94,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v184,
                    aiEnt,
                    *(_QWORD *)(v98 + 8),
                    v178);
            if ( !func )
              sub_1BCAA3C(v99, v99);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v99,
                    v183,
                    *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
              break;
          }
        }
        v84 = !v87;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v189,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        goto LABEL_148;
      }
      if ( refine == 2 )
      {
        this = (AiLogic_o *)sub_1BCA888(double___TypeInfo, 0LL);
        if ( !v53 )
          goto LABEL_260;
        v154 = this;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v188,
          v53,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v189 = v188;
        while ( 1 )
        {
LABEL_213:
          v182 = (AiLogic_AiInfo_o *)v154;
          while ( 1 )
          {
            v155 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v189,
                     (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v155 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v189,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
              aiInfo = v182;
              if ( !v182 )
                goto LABEL_260;
              if ( v182->fields.aiState )
                goto LABEL_247;
              goto LABEL_252;
            }
            v157 = v189.fields._current;
            if ( !v189.fields._current )
              sub_1BCAA3C(v155, v156);
            v158 = v189.fields._current->klass;
            v159 = *(unsigned __int16 *)(&v189.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v189.fields._current->klass->_2.bitflags2 + 3) )
            {
              v160 = &v158->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v160 - 1) != AiInterface_TypeInfo )
              {
                --v159;
                v160 += 4;
                if ( !v159 )
                  goto LABEL_220;
              }
              v161 = (__int64)&v158->vtable[*v160 + 1].method;
            }
            else
            {
LABEL_220:
              v161 = sub_1C1C7C0(v189.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v161)(
                    v157,
                    v52,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v161 + 8)) & 1) != 0 )
            {
              v162 = v157->klass;
              v163 = v52->fields.paramater;
              v164 = v187->fields.Bdata;
              v165 = *(unsigned __int16 *)(&v157->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v157->klass->_2.bitflags2 + 3) )
              {
                v166 = &v162->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v166 - 1) != AiInterface_TypeInfo )
                {
                  --v165;
                  v166 += 4;
                  if ( !v165 )
                    goto LABEL_227;
                }
                v167 = (__int64)&v162->vtable[*v166].method;
              }
              else
              {
LABEL_227:
                v167 = sub_1C1C7C0(v157, AiInterface_TypeInfo, 0LL);
              }
              v168 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v167)(
                       v157,
                       v164,
                       v163,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v184,
                       aiEnt,
                       *(_QWORD *)(v167 + 8));
              if ( !v168 )
                sub_1BCAA3C(0LL, v169);
              v170 = *(_QWORD *)(v168 + 24);
              if ( v170 )
                break;
            }
          }
          v154 = (AiLogic_o *)v182;
          if ( !v182 )
            sub_1BCAA3C(v168, v169);
          if ( !v182->fields.aiState )
            v154 = (AiLogic_o *)v168;
          if ( (int)v170 >= 1 )
          {
            aiType = (unsigned int)v154->fields._aiType;
            v172 = 0LL;
            while ( 1 )
            {
              if ( (__int64)v172 < (int)aiType )
              {
                if ( v172 >= aiType )
                  sub_1BCAA44(v168, v169);
                if ( *((double *)&v154->fields._thinkList + v172) < *(double *)(v168 + 8 * v172 + 32) )
                  break;
              }
              if ( (unsigned int)*(_QWORD *)(v168 + 24) == ++v172 )
                goto LABEL_213;
            }
            v154 = (AiLogic_o *)v168;
          }
        }
      }
      if ( refine != 3 )
      {
        if ( refine == 4 )
        {
          this = (AiLogic_o *)sub_1BCA888(double___TypeInfo, 1LL);
          v114 = v53;
          if ( !v53 )
            goto LABEL_260;
          v115 = this;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v188,
            v114,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v189 = v188;
          while ( 1 )
          {
            v116 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v189,
                     (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v116 )
              break;
            v118 = v189.fields._current;
            if ( !v189.fields._current )
              sub_1BCAA3C(v116, v117);
            v119 = v189.fields._current->klass;
            v120 = *(unsigned __int16 *)(&v189.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v189.fields._current->klass->_2.bitflags2 + 3) )
            {
              v121 = &v119->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v121 - 1) != AiInterface_TypeInfo )
              {
                --v120;
                v121 += 4;
                if ( !v120 )
                  goto LABEL_165;
              }
              v122 = (__int64)&v119->vtable[*v121 + 1].method;
            }
            else
            {
LABEL_165:
              v122 = sub_1C1C7C0(v189.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v122)(
                    v118,
                    v52,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v122 + 8)) & 1) != 0 )
            {
              v123 = v118->klass;
              v124 = v52->fields.paramater;
              v125 = v187->fields.Bdata;
              v126 = *(unsigned __int16 *)(&v118->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v118->klass->_2.bitflags2 + 3) )
              {
                v127 = &v123->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v127 - 1) != AiInterface_TypeInfo )
                {
                  --v126;
                  v127 += 4;
                  if ( !v126 )
                    goto LABEL_172;
                }
                v128 = (__int64)&v123->vtable[*v127].method;
              }
              else
              {
LABEL_172:
                v128 = sub_1C1C7C0(v118, AiInterface_TypeInfo, 0LL);
              }
              v129 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v128)(
                       v118,
                       v125,
                       v124,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v184,
                       aiEnt,
                       *(_QWORD *)(v128 + 8));
              if ( !v129 )
                sub_1BCAA3C(0LL, v130);
              v131 = *(unsigned int *)(v129 + 24);
              if ( v131 << 32 >= 1 )
              {
                v132 = (int)v131;
                v133 = (double *)(v129 + 32);
                do
                {
                  if ( !v131 )
                    sub_1BCAA44(v129, v130);
                  if ( !v115 )
                    sub_1BCAA3C(v129, v130);
                  if ( !v115->fields._aiType )
                    sub_1BCAA44(v129, v130);
                  v134 = *v133++;
                  --v132;
                  --v131;
                  *(double *)&v115->fields._thinkList = v134 + *(double *)&v115->fields._thinkList;
                }
                while ( v132 );
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v189,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          if ( !func )
            goto LABEL_260;
          v174 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   v115,
                   v183,
                   *(_QWORD *)&func->fields.extra_arg);
LABEL_251:
          v84 = v174;
        }
        goto LABEL_252;
      }
      v180 = v7;
      this = (AiLogic_o *)sub_1BCA888(double___TypeInfo, 0LL);
      if ( !v53 )
        goto LABEL_260;
      v135 = (AiLogic_AiInfo_o *)this;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v188,
        v53,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v189 = v188;
LABEL_184:
      while ( 1 )
      {
        v136 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v189,
                 (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v136 )
          break;
        v138 = v189.fields._current;
        if ( !v189.fields._current )
          sub_1BCAA3C(v136, v137);
        v139 = v189.fields._current->klass;
        v140 = *(unsigned __int16 *)(&v189.fields._current->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v189.fields._current->klass->_2.bitflags2 + 3) )
        {
          v141 = &v139->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v141 - 1) != AiInterface_TypeInfo )
          {
            --v140;
            v141 += 4;
            if ( !v140 )
              goto LABEL_190;
          }
          v142 = (__int64)&v139->vtable[*v141 + 1].method;
        }
        else
        {
LABEL_190:
          v142 = sub_1C1C7C0(v189.fields._current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v142)(
                v138,
                v52,
                wkZero,
                aiEnt,
                *(_QWORD *)(v142 + 8)) & 1) != 0 )
        {
          v143 = v138->klass;
          v144 = v52->fields.paramater;
          v145 = v187->fields.Bdata;
          v146 = *(unsigned __int16 *)(&v138->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v138->klass->_2.bitflags2 + 3) )
          {
            v147 = &v143->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v147 - 1) != AiInterface_TypeInfo )
            {
              --v146;
              v147 += 4;
              if ( !v146 )
                goto LABEL_197;
            }
            v148 = (__int64)&v143->vtable[*v147].method;
          }
          else
          {
LABEL_197:
            v148 = sub_1C1C7C0(v138, AiInterface_TypeInfo, 0LL);
          }
          v149 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v148)(
                   v138,
                   v145,
                   v144,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v184,
                   aiEnt,
                   *(_QWORD *)(v148 + 8));
          if ( !v149 )
            sub_1BCAA3C(0LL, v150);
          v151 = *(_QWORD *)(v149 + 24);
          if ( v151 )
          {
            if ( !v135 )
              sub_1BCAA3C(v149, v150);
            if ( !v135->fields.aiState )
              goto LABEL_210;
            if ( (int)v151 >= 1 )
            {
              aiState_low = LODWORD(v135->fields.aiState);
              v153 = 0LL;
              while ( 1 )
              {
                if ( (__int64)v153 < (int)aiState_low )
                {
                  if ( v153 >= aiState_low )
                    sub_1BCAA44(v149, v150);
                  if ( *(double *)(v149 + 8 * v153 + 32) < *((double *)&v135->fields.logicAi + v153) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v149 + 24) == ++v153 )
                  goto LABEL_184;
              }
LABEL_210:
              v135 = (AiLogic_AiInfo_o *)v149;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v189,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      if ( !v135 )
        goto LABEL_260;
      aiInfo = v135;
      aiState = v135->fields.aiState;
      v7 = v180;
      if ( aiState )
      {
LABEL_247:
        if ( func )
        {
          v174 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_AiInfo_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   aiInfo,
                   v183,
                   *(_QWORD *)&func->fields.extra_arg);
          goto LABEL_251;
        }
LABEL_260:
        sub_1BCAA3C(this, aiInfo);
      }
LABEL_252:
      v175 = v45 ^ v84;
      if ( ((v45 ^ v84) & 1) != 0 )
      {
        logicAi = v7->fields.logicAi;
        if ( logicAi )
        {
          if ( (((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, void *))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method)(
                  logicAi,
                  v7,
                  aiEnt,
                  logicAi->klass[1]._1.image) & 1) == 0 )
LABEL_255:
            v175 = 0;
        }
      }
      return v175 & 1;
    case 9:
      v63 = v187;
      v65 = 1;
      v64 = (System_Collections_Generic_List_AiInterface__o *)v53;
      goto LABEL_58;
    case 0xA:
      v65 = 1;
      v60 = 1;
      goto LABEL_55;
    case 0xB:
      v65 = 1;
      v60 = 2;
LABEL_55:
      v63 = v187;
      v64 = (System_Collections_Generic_List_AiInterface__o *)v53;
      goto LABEL_56;
    case 0xC:
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v53 )
        goto LABEL_260;
      System_Collections_Generic_List_object___AddRange(
        v53,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v187->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0LL);
      System_Collections_Generic_List_object___AddRange(
        v53,
        FieldEnemyServantList,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_86;
    case 0xD:
      v63 = v187;
      v64 = (System_Collections_Generic_List_AiInterface__o *)v53;
      v65 = 0;
LABEL_58:
      v67 = v7;
      v60 = 0;
      goto LABEL_59;
    case 0xE:
      v60 = 1;
      goto LABEL_49;
    case 0xF:
      v60 = 2;
LABEL_49:
      v63 = v187;
      v64 = (System_Collections_Generic_List_AiInterface__o *)v53;
      v65 = 0;
LABEL_56:
      v67 = v7;
LABEL_59:
      AiLogic__getTargetPosServant(v63, v64, v65, v67, v60, (const MethodInfo *)v57);
      goto LABEL_86;
    default:
      goto LABEL_86;
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
  __int64 v17; // x2
  int32_t uniqueId; // w26
  AiState_o *v19; // x25
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  AiLogic_AiInfo_o *v23; // x27
  const MethodInfo *v24; // x6
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // w4
  const MethodInfo *v32; // x6
  AiEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v15 = this;
  if ( (byte_4B18D36 & 1) == 0 )
  {
    sub_1BCA7E0(&AiEntity_TypeInfo, svtData, *(_QWORD *)&procState);
    this = (AiLogic_o *)sub_1BCA7E0(&AiLogic_AiInfo_TypeInfo, v16, v17);
    byte_4B18D36 = 1;
  }
  if ( !svtData )
    sub_1BCAA3C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v19 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v23 = (AiLogic_AiInfo_o *)sub_1BCAA2C(AiLogic_AiInfo_TypeInfo, v20, v21, v22);
  AiLogic_AiInfo___ctor(v23, 1, uniqueId, v19, logicAi, procState, v24);
  *info = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)info, (int64_t)v23, v25, v26, v27, v28, v29, v30);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v31, timingPriority, v32);
  if ( result )
  {
    methodPtr_low = LOBYTE(AiEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (AiEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != AiEntity_TypeInfo )
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
  AiLogic_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  struct AiState_o *aiState; // x19
  const MethodInfo *v15; // x6
  int v16; // w29
  AiBaseEntity_o *BasicAct; // x21
  AiLogic_o *v18; // x26
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  UnityEngine_Object_o *Bdata; // x26
  struct BattleData_o *v23; // x8
  UnityEngine_Object_o *v24; // x22
  struct BattleData_o *v25; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v27; // x8
  struct BattleData_o *v28; // x8

  v11 = this;
  if ( (byte_4B18D38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, aiInfo, *(_QWORD *)&procState);
    this = (AiLogic_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B18D38 = 1;
  }
  if ( !aiInfo )
    goto LABEL_36;
  aiState = aiInfo->fields.aiState;
  if ( procState == 1 )
  {
    if ( !aiState )
      goto LABEL_36;
    ++aiState->fields.actCount;
  }
  AiLogic__updateThinkGroup(v11, aiInfo, aiState, *(const MethodInfo **)&turnCount);
  if ( !aiState )
    goto LABEL_36;
  v16 = 10;
  do
  {
    BasicAct = AiLogic__getBasicAct(
                 v11,
                 aiInfo,
                 procState,
                 turnCount - aiState->fields.baseTurn,
                 aiState->fields.actCount,
                 timingPriority,
                 v15);
    if ( !BasicAct )
      return BasicAct;
    this = (AiLogic_o *)v11->fields.aiActMst;
    if ( !this )
      goto LABEL_36;
    this = (AiLogic_o *)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          BasicAct->fields.aiActId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_36;
    v18 = this;
    if ( AiActEntity__isThinkEnd((AiActEntity_o *)this, 0LL) )
      break;
    if ( HIDWORD(v18->fields.Bdata) == 99 )
    {
      aiState->fields.aiGroupId = AiBaseEntity__getChangeAiId(BasicAct, 0LL);
      aiState->fields.actCount = 0;
      Bdata = (UnityEngine_Object_o *)v11->fields.Bdata;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      this = (AiLogic_o *)UnityEngine_Object__op_Inequality(Bdata, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v23 = v11->fields.Bdata;
        if ( !v23 )
          goto LABEL_36;
        this = (AiLogic_o *)v23->fields.battleEvent;
        if ( !this )
          goto LABEL_36;
        ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
          this,
          aiState,
          BasicAct,
          this->klass[2]._1.image);
      }
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v20);
    --v16;
  }
  while ( v16 );
  v24 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0LL);
    if ( (_DWORD)this )
    {
      v25 = v11->fields.Bdata;
      if ( !v25 )
        goto LABEL_36;
      playerNpCount = v25->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0LL);
      v25->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v27 = v11->fields.Bdata;
      if ( !v27 )
        goto LABEL_36;
      if ( (v27->fields.playerNpCount & 0x80000000) != 0 )
        v27->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, 0LL);
    v28 = v11->fields.Bdata;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_36;
      v28->fields.playerNpCount = 0;
    }
    else if ( !v28 )
    {
      goto LABEL_36;
    }
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
LABEL_36:
    sub_1BCAA3C(this, aiInfo);
  }
  return BasicAct;
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiLogic__getAction_44106840(
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
  __int64 v15; // x2
  int32_t index; // w25
  AiState_o *aiState; // x24
  AiLogic_AiInfo_o *v18; // x26
  const MethodInfo *v19; // x6
  int32_t v20; // w4
  const MethodInfo *v21; // x6
  AiFieldEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v13 = this;
  if ( (byte_4B18D37 & 1) == 0 )
  {
    sub_1BCA7E0(&AiFieldEntity_TypeInfo, fieldData, *(_QWORD *)&procState);
    this = (AiLogic_o *)sub_1BCA7E0(&AiLogic_AiInfo_TypeInfo, v14, v15);
    byte_4B18D37 = 1;
  }
  if ( !fieldData )
    sub_1BCAA3C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v18 = (AiLogic_AiInfo_o *)sub_1BCAA2C(
                              AiLogic_AiInfo_TypeInfo,
                              fieldData,
                              *(_QWORD *)&procState,
                              *(_QWORD *)&turnCount);
  AiLogic_AiInfo___ctor(v18, 2, index, aiState, logicAi, procState, v19);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(v13, v18, procState, turnCount, v20, timingPriority, v21);
  if ( result )
  {
    methodPtr_low = LOBYTE(AiFieldEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (AiFieldEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != AiFieldEntity_TypeInfo )
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x22
  void *All; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_List_object__o *v60; // x0
  System_Collections_Generic_List_object__o *thinkList; // x23
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Predicate_object__o *v65; // x24
  __int64 v66; // x2
  __int64 v67; // x3
  AiLogic___c_c *v68; // x8
  System_Collections_Generic_List_object__o *v69; // x23
  System_Comparison_T__o *_9__16_1; // x24
  Il2CppObject *v71; // x25
  struct AiLogic___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x24
  __int64 v83; // x2
  __int64 v84; // x3
  System_Predicate_object__o *v85; // x25
  __int64 v86; // x2
  __int64 v87; // x3
  const MethodInfo *v88; // x5
  int v89; // w8
  char *v90; // x24
  WeightRate_int__o *v91; // x25
  const MethodInfo *v92; // x5
  __int64 v93; // x8
  unsigned __int64 v94; // x26
  char *v95; // x29
  int32_t Next; // w0
  const MethodInfo *v97; // x5
  AiBaseEntity_o *v98; // x24

  if ( (byte_4B18D39 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_AiBaseEntity__TypeInfo, aiInfo, *(_QWORD *)&procState);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Predicate_AiBaseEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_AiLogic___c__getBasicAct_b__16_1__, v31, v32);
    sub_1BCA7E0(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v33, v34);
    sub_1BCA7E0(&AiLogic___c__DisplayClass16_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v37, v38);
    sub_1BCA7E0(&AiLogic___c__DisplayClass16_1_TypeInfo, v39, v40);
    sub_1BCA7E0(&AiLogic___c_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v43, v44);
    sub_1BCA7E0(&Method_WeightRate_int__getCount__, v45, v46);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v47, v48);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v49, v50);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v51, v52);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v53, v54);
    byte_4B18D39 = 1;
  }
  v55 = sub_1BCAA2C(AiLogic___c__DisplayClass16_0_TypeInfo, aiInfo, *(_QWORD *)&procState, *(_QWORD *)&turn);
  System_Object___ctor((Il2CppObject *)v55, 0LL);
  if ( !v55 )
    goto LABEL_42;
  *(_DWORD *)(v55 + 16) = procState;
  *(_DWORD *)(v55 + 20) = actcnt;
  *(_DWORD *)(v55 + 24) = timingPriority;
  v60 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                       v57,
                                                       v58,
                                                       v59);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v65 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_AiBaseEntity__TypeInfo, v62, v63, v64);
  System_Predicate_object____ctor(
    v65,
    (Il2CppObject *)v55,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    0LL);
  if ( !thinkList )
    goto LABEL_42;
  All = System_Collections_Generic_List_object___FindAll(
          thinkList,
          (System_Predicate_T__o *)v65,
          (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v68 = AiLogic___c_TypeInfo;
  v69 = (System_Collections_Generic_List_object__o *)All;
  if ( !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo, v57);
    v68 = AiLogic___c_TypeInfo;
  }
  _9__16_1 = (System_Comparison_T__o *)v68->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68, v57);
      v68 = AiLogic___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__16_1 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_AiBaseEntity__TypeInfo, v57, v66, v67);
    System_Comparison_object____ctor(_9__16_1, v71, Method_AiLogic___c__getBasicAct_b__16_1__, 0LL);
    static_fields = AiLogic___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_1,
      (int64_t)_9__16_1,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !v69 )
LABEL_42:
    sub_1BCAA3C(All, v57);
  System_Collections_Generic_List_object___Sort_56244000(
    v69,
    _9__16_1,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v69->fields._size >= 1 )
  {
    while ( 1 )
    {
      v82 = sub_1BCAA2C(AiLogic___c__DisplayClass16_1_TypeInfo, v79, v80, v81);
      System_Object___ctor((Il2CppObject *)v82, 0LL);
      if ( v69->fields._size < 1 )
        return 0LL;
      All = System_Collections_Generic_List_object___get_Item(
              v69,
              0,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_42;
      if ( !v82 )
        goto LABEL_42;
      *(_DWORD *)(v82 + 16) = *((_DWORD *)All + 7);
      v85 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_AiBaseEntity__TypeInfo, v57, v83, v84);
      System_Predicate_object____ctor(
        v85,
        (Il2CppObject *)v82,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0LL);
      All = System_Collections_Generic_List_object___FindAll(
              v69,
              (System_Predicate_T__o *)v85,
              (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_42;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_42;
      v89 = *((_DWORD *)All + 6);
      v90 = (char *)All;
      if ( v89 <= 1 )
        break;
      v91 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, v57, v86, v87);
      WeightRate_int____ctor(v91, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
      v93 = *((_QWORD *)v90 + 3);
      if ( (int)v93 >= 1 )
      {
        v94 = 0LL;
        v95 = v90 + 32;
        while ( v94 < (unsigned int)v93 )
        {
          All = (void *)AiLogic__checkThinking_44108404(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v95[8 * v94],
                          turn,
                          *(_DWORD *)(v55 + 20),
                          v92);
          if ( v94 >= *((unsigned int *)v90 + 6) )
            break;
          v57 = *(_QWORD *)&v95[8 * v94];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v57 || !v91 )
              goto LABEL_42;
            WeightRate_int___setWeight(
              v91,
              *(_DWORD *)(v57 + 32),
              v94,
              (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v69,
                            (Il2CppObject *)v57,
                            (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v93) = *((_DWORD *)v90 + 6);
          if ( (__int64)++v94 >= (int)v93 )
            goto LABEL_29;
        }
LABEL_41:
        sub_1BCAA44(All, v57);
      }
LABEL_29:
      if ( !v91 )
        goto LABEL_42;
      if ( WeightRate_int___getCount(v91, (const MethodInfo_39842E4 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v91->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v91, Next, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v90 + 6) )
          goto LABEL_41;
        v98 = *(AiBaseEntity_o **)&v90[8 * (int)All + 32];
        if ( AiLogic__checkThinking_44108404(this, aiInfo, v98, turn, *(_DWORD *)(v55 + 20), v97) )
          return v98;
        goto LABEL_37;
      }
LABEL_38:
      if ( v69->fields._size <= 0 )
        return 0LL;
    }
    if ( !v89 )
      goto LABEL_41;
    All = (void *)AiLogic__checkThinking_44108404(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v55 + 20),
                    v88);
    if ( !*((_DWORD *)v90 + 6) )
      goto LABEL_41;
    v98 = (AiBaseEntity_o *)*((_QWORD *)v90 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v98;
LABEL_37:
    System_Collections_Generic_List_object___Remove(
      v69,
      (Il2CppObject *)v98,
      (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    goto LABEL_38;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiLogic__getTargetPosServant(
        AiLogic_o *this,
        System_Collections_Generic_List_AiInterface__o *targetList,
        bool isOpponent,
        AiLogic_AiInfo_o *aiInfo,
        int32_t pos,
        const MethodInfo *method)
{
  AiLogic_o *v10; // x21
  char v11; // w8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct AiInterface_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  AiLogic_o *v21; // x1
  Il2CppClass **v22; // x0

  v10 = this;
  if ( (byte_4B18D3B & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_AiInterface__Add__, targetList, isOpponent);
    byte_4B18D3B = 1;
  }
  if ( !aiInfo )
    goto LABEL_16;
  if ( aiInfo->fields.aiType == 1 )
  {
    this = (AiLogic_o *)v10->fields.Bdata;
    if ( !this )
      goto LABEL_16;
    v11 = BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0LL) ^ isOpponent;
  }
  else
  {
    v11 = !isOpponent;
  }
  this = (AiLogic_o *)v10->fields.Bdata;
  if ( !this )
    goto LABEL_16;
  this = (AiLogic_o *)BattleData__getServantDataFromIndex((BattleData_o *)this, pos, v11 & 1, 0LL);
  if ( !this )
    return;
  if ( !targetList
    || (items = targetList->fields._items,
        v19 = Method_System_Collections_Generic_List_AiInterface__Add__,
        ++targetList->fields._version,
        !items) )
  {
LABEL_16:
    sub_1BCAA3C(this, targetList);
  }
  size = targetList->fields._size;
  v21 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    targetList->fields._size = size + 1;
    v22 = &items->obj.klass + size;
    v22[4] = (Il2CppClass *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v21, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall AiLogic__updateThinkGroup(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiState_o *aiState,
        const MethodInfo *method)
{
  AiLogic_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _BOOL4 v13; // w23
  _BOOL4 v14; // w8
  int32_t aiType; // w8
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  System_Collections_Generic_List_object__o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v6 = this;
  if ( (byte_4B18D32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___76773424, aiInfo, aiState);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v9, v10);
    this = (AiLogic_o *)sub_1BCA7E0(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v11, v12);
    byte_4B18D32 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  this = (AiLogic_o *)v6->fields._thinkList;
  v13 = v6->fields._aiType != aiInfo->fields.aiType;
  if ( this && this->fields._aiType )
  {
    this = (AiLogic_o *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)this,
                          0,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    if ( !this || !aiState )
      goto LABEL_19;
    v14 = LODWORD(this->fields.Bdata) != aiState->fields.aiGroupId;
  }
  else
  {
    v14 = 1;
  }
  if ( v14 || v13 )
  {
    aiType = aiInfo->fields.aiType;
    v6->fields._aiType = aiType;
    if ( aiType == 2 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiFieldMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           0LL);
        goto LABEL_18;
      }
LABEL_19:
      sub_1BCAA3C(this, aiInfo);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           0LL);
LABEL_18:
        v20 = ListFormGroupId;
        v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                             v17,
                                                             v18,
                                                             v19);
        System_Collections_Generic_List_object____ctor_56235344(
          v21,
          v20,
          (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___76773424);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v21;
        sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields._thinkList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.aiType = inAiType;
  v12->fields.uniqueId = inUniqueId;
  v12->fields.aiState = inAiSate;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.aiState, (int64_t)inAiSate, v13, v14, v15, v16, v17, v18);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)v12, (int64_t)inLogicAi, v19, v20, v21, v22, v23, v24);
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
  __int64 v12; // x2
  Il2CppObject *v13; // x23
  __int64 v14; // x1
  void *checkedInfo; // x0
  _DWORD *v16; // x22
  int32_t v17; // w20
  int32_t v18; // w21

  if ( (byte_4B18D3F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      svtData,
      aiBaseEntity);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__, v11, v12);
    byte_4B18D3F = 1;
  }
  if ( aiBaseEntity )
  {
    v13 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiBaseEntity_o *, int32_t *, bool *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
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
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
              v13,
              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v13,
                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v13,
                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v13,
                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      v16 = (_DWORD *)*((_QWORD *)checkedInfo + 3);
      if ( !v16 )
        return;
      v18 = v16[4];
      v17 = v16[5];
      checkedInfo = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 392LL))(
                              *((_QWORD *)checkedInfo + 3),
                              *(_QWORD *)(*(_QWORD *)v16 + 400LL));
      if ( !svtData )
LABEL_17:
        sub_1BCAA3C(checkedInfo, v14);
      BattleServantData__addSkillInfo(svtData, v18, v17, (int32_t)checkedInfo, v16[9], -1LL, -1, 0LL, 0LL);
    }
  }
}


bool __fastcall AiLogic_AiInfo__IsChecked(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4B18D3E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      aiBaseEntity,
      method);
    byte_4B18D3E = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_1BCAA3C(v7, v8);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void __fastcall AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  PartyOrganizationUtility_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_object__object__o *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *klass; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x21

  if ( (byte_4B18D3D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__,
      aiBaseEntity,
      inCheckedInfo);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v11, v12);
    byte_4B18D3D = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (PartyOrganizationUtility_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo,
                                                                         aiBaseEntity,
                                                                         inCheckedInfo,
                                                                         method);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v15,
        (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (PartyOrganizationUtility_c *)v15;
      sub_1BCA784(p_checkedInfo, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v24 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (Il2CppObject *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)klass,
          v24,
          (Il2CppObject *)inCheckedInfo,
          (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_1BCAA3C(klass, v23);
  }
}


void __fastcall AiLogic_AiInfo_CheckedInfo___ctor(
        AiLogic_AiInfo_CheckedInfo_o *this,
        int32_t inActType,
        bool inNoMessage,
        BattleSkillInfoData_o *inSkillInfo,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v7; // x21
  bool v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v7 = (PartyOrganizationUtility_o *)this;
  v8 = inNoMessage;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7->fields._normalFollowerInfo = (struct FollowerInfo_o *)inSkillInfo;
  v7 = (PartyOrganizationUtility_o *)((char *)v7 + 24);
  *(_DWORD *)&v7[-1].fields._IsQuestStartMenuMode_k__BackingField = inActType;
  *(&v7[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = v8;
  sub_1BCA784(v7, (int64_t)inSkillInfo, v9, v10, v11, v12, v13, v14);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18D40 & 1) == 0 )
  {
    sub_1BCA7E0(&AiLogic___c_TypeInfo, v1, v2);
    byte_4B18D40 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AiLogic___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v4;
  sub_1BCA784((PartyOrganizationUtility_o *)AiLogic___c_TypeInfo->static_fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return s->fields.priority == this->fields.priority;
}