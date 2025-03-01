void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C003D0 & 1) == 0 )
  {
    sub_1C2E12C(&long___TypeInfo, method);
    byte_4C003D0 = 1;
  }
  v3 = (struct System_Int64_array *)sub_1C2E1D4(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.wkZero, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C003C5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_AiActMaster___, data);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C003C5 = 1;
  }
  this->fields.Bdata = data;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v12);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.aiActMst,
    (int64_t)MasterData_object,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
        sub_1C2E390(IsNullOrEmpty, v8);
      }
LABEL_19:
      sub_1C2E388(IsNullOrEmpty, v8);
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
  AiLogic_AiInfo_o *v13; // x25
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x4

  v10 = this;
  if ( (byte_4C003C7 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C2E12C(&AiLogic_AiInfo_TypeInfo, svtData);
    byte_4C003C7 = 1;
  }
  if ( !svtData )
    sub_1C2E388(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_1C2E378(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v13, 1, uniqueId, v12, logicAi, procState, v14);
  return AiLogic__checkThinkingBase(v10, v13, procState, timingPriority, v15);
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
  __int64 v13; // x23
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *thinkList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4C003C9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, aiInfo);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9);
    sub_1C2E12C(&System_Predicate_AiBaseEntity__TypeInfo, v10);
    sub_1C2E12C(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v11);
    sub_1C2E12C(&AiLogic___c__DisplayClass12_0_TypeInfo, v12);
    byte_4C003C9 = 1;
  }
  v13 = sub_1C2E378(AiLogic___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = procState, *(_DWORD *)(v13 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v16),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v18 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v13,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0LL),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_366BFBC *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_1C2E388(All, v15);
  }
  return All->fields._size > 0;
}


bool __fastcall AiLogic__checkThinking_44797900(
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
  if ( (byte_4C003C8 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C2E12C(&AiLogic_AiInfo_TypeInfo, fieldData);
    byte_4C003C8 = 1;
  }
  if ( !fieldData )
    sub_1C2E388(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_1C2E378(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool __fastcall AiLogic__checkThinking_44800520(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  AiLogic_AiInfo_o *v7; // x29
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
  int32_t Cond; // w20
  System_String_o **v26; // x8
  System_String_o *v27; // x21
  unsigned __int8 v28; // w26
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1
  ConditionsInformation_CheckInfo_o *v31; // x0
  ConditionsInformation_CheckInfo_o *v32; // x25
  System_Collections_Generic_List_object__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t v40; // w4
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *Bdata; // x8
  AiLogic_o *v43; // x0
  System_Collections_Generic_List_AiInterface__o *v44; // x1
  bool v45; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v47; // x3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  AiLogic_o *v52; // x21
  System_Int64_array *wkZero; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_List_object__o *v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Int64_array *v61; // x20
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x24
  bool v64; // w21
  _BOOL8 v65; // x0
  __int64 v66; // x1
  bool v67; // w20
  Il2CppObject *v68; // x27
  Il2CppClass *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  Il2CppClass *v73; // x8
  unsigned int v74; // w22
  struct BattleData_o *v75; // x23
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  _BOOL8 v80; // x0
  __int64 v81; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v84; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v87; // x8
  unsigned int paramater; // w27
  struct BattleData_o *v89; // x22
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  System_Collections_Generic_List_object__o *v94; // x9
  AiLogic_o *v95; // x20
  _BOOL8 v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x21
  Il2CppClass *v99; // x8
  __int64 v100; // x9
  int32_t *v101; // x10
  __int64 v102; // x0
  Il2CppClass *v103; // x8
  unsigned int v104; // w22
  struct BattleData_o *v105; // x23
  __int64 v106; // x9
  int32_t *v107; // x10
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x8
  __int64 v112; // x9
  double *v113; // x10
  double v114; // t1
  AiLogic_AiInfo_o *v115; // x29
  _BOOL8 v116; // x0
  __int64 v117; // x1
  Il2CppObject *v118; // x27
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
  __int64 v131; // x11
  unsigned __int64 aiState_low; // x10
  unsigned __int64 v133; // x9
  AiLogic_o *v134; // x22
  _BOOL8 v135; // x0
  __int64 v136; // x1
  Il2CppObject *v137; // x27
  Il2CppClass *v138; // x8
  __int64 v139; // x9
  int32_t *v140; // x10
  __int64 v141; // x0
  Il2CppClass *v142; // x8
  unsigned int v143; // w22
  struct BattleData_o *v144; // x23
  __int64 v145; // x9
  int32_t *v146; // x10
  __int64 v147; // x0
  __int64 v148; // x0
  __int64 v149; // x1
  __int64 v150; // x11
  unsigned __int64 aiType; // x10
  unsigned __int64 v152; // x9
  struct AiState_o *aiState; // x8
  char v154; // w0
  char v155; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  System_Collections_Generic_List_object__o *v158; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v159; // [xsp+0h] [xbp-D0h]
  AiLogic_AiInfo_o *v160; // [xsp+8h] [xbp-C8h]
  unsigned __int8 v161; // [xsp+10h] [xbp-C0h]
  AiLogic_AiInfo_o *v162; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v163; // [xsp+18h] [xbp-B8h]
  System_Int64_array *v164; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v167; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v169; // [xsp+50h] [xbp-80h] BYREF

  v7 = aiInfo;
  v167 = this;
  if ( (byte_4C003CE & 1) == 0 )
  {
    sub_1C2E12C(&AiInterface_TypeInfo, aiInfo);
    sub_1C2E12C(&Ai_COND_TypeInfo, v8);
    sub_1C2E12C(&ConditionsInformation_TypeInfo, v9);
    sub_1C2E12C(&double___TypeInfo, v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Skip_long___, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Take_long___, v12);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_long___, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v16);
    sub_1C2E12C(&long___TypeInfo, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiInterface__Add__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiInterface___ctor__, v21);
    sub_1C2E12C(&System_Collections_Generic_List_AiInterface__TypeInfo, v22);
    sub_1C2E12C(&StringLiteral_9466/*"NOT_"*/, v23);
    this = (AiLogic_o *)sub_1C2E12C(&StringLiteral_1/*""*/, v24);
    byte_4C003CE = 1;
  }
  memset(&v169, 0, sizeof(v169));
  if ( !aiEnt )
    goto LABEL_260;
  Cond = Ai__getCond(aiEnt->fields.cond, 0LL);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0LL);
  if ( !v7 )
    goto LABEL_260;
  v26 = (System_String_o **)&StringLiteral_9466/*"NOT_"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v26 = (System_String_o **)&StringLiteral_1/*""*/;
  v27 = *v26;
  v28 = (unsigned __int8)this;
  v168.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v168.fields._index = -1LL;
  LODWORD(v168.fields._current) = Cond;
  v29 = System_Enum__ToString((System_Enum_o *)&v168, 0LL);
  System_String__Concat_63235584(v27, v29, 0LL);
  if ( !ConditionsInformation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  v31 = ConditionsInformation__getCheckFunction(Cond, v30);
  if ( !v31 )
    goto LABEL_255;
  v32 = v31;
  v33 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v32->fields.target )
  {
    case 1:
      if ( !v33 )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)v167->fields.Bdata;
      goto LABEL_75;
    case 2:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      uniqueId = v7->fields.uniqueId;
      if ( v7->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      items = v33->fields._items;
      v49 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v33->fields._version;
      if ( !items )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)this;
      goto LABEL_83;
    case 3:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 4:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 5:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( v7->fields.aiType != 1 )
      {
        if ( !this || !v33 )
          goto LABEL_260;
        aiInfo = *(AiLogic_AiInfo_o **)&this[7].fields._aiType;
        goto LABEL_75;
      }
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
      Bdata = v167->fields.Bdata;
      if ( !Bdata )
        goto LABEL_260;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_46;
      goto LABEL_22;
    case 6:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        Bdata = v167->fields.Bdata;
        if ( !Bdata )
          goto LABEL_260;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_46:
          if ( !v33 )
            goto LABEL_260;
          aiInfo = (AiLogic_AiInfo_o *)Bdata->fields.playerFieldStatus;
        }
        else
        {
LABEL_22:
          if ( !v33 )
            goto LABEL_260;
          aiInfo = (AiLogic_AiInfo_o *)Bdata->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v33 )
          goto LABEL_260;
        aiInfo = (AiLogic_AiInfo_o *)this[7].fields.Bdata;
      }
LABEL_75:
      items = v33->fields._items;
      v49 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v33->fields._version;
      if ( !items )
        goto LABEL_260;
LABEL_83:
      size = v33->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)aiInfo,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v51[4] = (Il2CppClass *)aiInfo;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)aiInfo, v34, v35, v36, v37, v38, v39);
      }
      goto LABEL_86;
    case 7:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 8:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v33 )
          goto LABEL_260;
      }
LABEL_79:
      System_Collections_Generic_List_object___AddRange(
        v33,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_86:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0LL);
      v52 = this;
      wkZero = v167->fields.wkZero;
      if ( v32->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_260;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v54 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_300A4D8 *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v54,
                                (const MethodInfo_300BD34 *)Method_System_Linq_Enumerable_ToArray_long___);
          v52 = this;
        }
      }
      if ( v32->fields.isParams )
      {
        if ( !v52 )
          goto LABEL_260;
        if ( v52->fields._aiType >= 2 )
        {
          v55 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                  1,
                  (const MethodInfo_300A4D8 *)Method_System_Linq_Enumerable_Skip_long___);
          v56 = System_Linq_Enumerable__Take_long_(
                  v55,
                  v52->fields._aiType - 1,
                  (const MethodInfo_300AB10 *)Method_System_Linq_Enumerable_Take_long___);
          v164 = System_Linq_Enumerable__ToArray_long_(
                   v56,
                   (const MethodInfo_300BD34 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C2E1D4(long___TypeInfo, 1LL);
          if ( v52->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v52->fields._thinkList;
              v163 = this;
LABEL_105:
              this->fields._thinkList = thinkList;
              goto LABEL_106;
            }
          }
          goto LABEL_153;
        }
      }
      else if ( v32->fields.isIndiv )
      {
        if ( !v52 )
          goto LABEL_260;
        if ( v52->fields._aiType >= 2 )
        {
          v58 = v33;
          v59 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                  1,
                  (const MethodInfo_300A4D8 *)Method_System_Linq_Enumerable_Skip_long___);
          v60 = System_Linq_Enumerable__Take_long_(
                  v59,
                  v52->fields._aiType - 1,
                  (const MethodInfo_300AB10 *)Method_System_Linq_Enumerable_Take_long___);
          v61 = System_Linq_Enumerable__ToArray_long_(
                  v60,
                  (const MethodInfo_300BD34 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C2E1D4(long___TypeInfo, 1LL);
          if ( v52->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v52->fields._thinkList;
              v163 = this;
              v164 = wkZero;
              wkZero = v61;
              v33 = v58;
              goto LABEL_105;
            }
          }
LABEL_153:
          sub_1C2E390(this, aiInfo);
        }
      }
      v163 = v52;
      v164 = wkZero;
LABEL_106:
      refine = v32->fields.refine;
      func = v32->fields.func;
      if ( !refine )
      {
        v161 = v28;
        if ( !v33 )
          goto LABEL_260;
        v159 = v33;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v168,
          v33,
          (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v169 = v168;
        while ( 1 )
        {
          v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v169,
                  (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v64 = v80;
          if ( !v80 )
            break;
          current = v169.fields._current;
          if ( !v169.fields._current )
            sub_1C2E388(v80, v81);
          klass = v169.fields._current->klass;
          v84 = *(unsigned __int16 *)(&v169.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v169.fields._current->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v84;
              p_offset += 4;
              if ( !v84 )
                goto LABEL_136;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_136:
            p_method = sub_1C8010C(v169.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v32,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v87 = current->klass;
            paramater = v32->fields.paramater;
            v89 = v167->fields.Bdata;
            v90 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
            {
              v91 = &v87->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v91 - 1) != AiInterface_TypeInfo )
              {
                --v90;
                v91 += 4;
                if ( !v90 )
                  goto LABEL_143;
              }
              v92 = (__int64)&v87->vtable[*v91].method;
            }
            else
            {
LABEL_143:
              v92 = sub_1C8010C(current, AiInterface_TypeInfo, 0LL);
            }
            v93 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v92)(
                    current,
                    v89,
                    paramater,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v164,
                    aiEnt,
                    *(_QWORD *)(v92 + 8),
                    v159);
            if ( !func )
              sub_1C2E388(v93, v93);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v93,
                    v163,
                    *(_QWORD *)&func->fields.extra_arg) & 1) != 0 )
              break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v169,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
LABEL_148:
        v28 = v161;
        goto LABEL_252;
      }
      v64 = refine == 1;
      if ( refine == 1 )
      {
        v161 = v28;
        if ( !v33 )
          goto LABEL_260;
        v158 = v33;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v168,
          v33,
          (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v169 = v168;
        while ( 1 )
        {
          v65 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v169,
                  (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v67 = v65;
          if ( !v65 )
            break;
          v68 = v169.fields._current;
          if ( !v169.fields._current )
            sub_1C2E388(v65, v66);
          v69 = v169.fields._current->klass;
          v70 = *(unsigned __int16 *)(&v169.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v169.fields._current->klass->_2.bitflags2 + 3) )
          {
            v71 = &v69->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v71 - 1) != AiInterface_TypeInfo )
            {
              --v70;
              v71 += 4;
              if ( !v70 )
                goto LABEL_116;
            }
            v72 = (__int64)&v69->vtable[*v71 + 1].method;
          }
          else
          {
LABEL_116:
            v72 = sub_1C8010C(v169.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v72)(
                  v68,
                  v32,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v72 + 8)) & 1) != 0 )
          {
            v73 = v68->klass;
            v74 = v32->fields.paramater;
            v75 = v167->fields.Bdata;
            v76 = *(unsigned __int16 *)(&v68->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v68->klass->_2.bitflags2 + 3) )
            {
              v77 = &v73->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v77 - 1) != AiInterface_TypeInfo )
              {
                --v76;
                v77 += 4;
                if ( !v76 )
                  goto LABEL_123;
              }
              v78 = (__int64)&v73->vtable[*v77].method;
            }
            else
            {
LABEL_123:
              v78 = sub_1C8010C(v68, AiInterface_TypeInfo, 0LL);
            }
            v79 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v78)(
                    v68,
                    v75,
                    v74,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v164,
                    aiEnt,
                    *(_QWORD *)(v78 + 8),
                    v158);
            if ( !func )
              sub_1C2E388(v79, v79);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v79,
                    v163,
                    *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
              break;
          }
        }
        v64 = !v67;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v169,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        goto LABEL_148;
      }
      if ( refine == 2 )
      {
        this = (AiLogic_o *)sub_1C2E1D4(double___TypeInfo, 0LL);
        if ( !v33 )
          goto LABEL_260;
        v134 = this;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v168,
          v33,
          (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v169 = v168;
        while ( 1 )
        {
LABEL_213:
          v162 = (AiLogic_AiInfo_o *)v134;
          while ( 1 )
          {
            v135 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v169,
                     (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v135 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v169,
                (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
              aiInfo = v162;
              if ( !v162 )
                goto LABEL_260;
              if ( v162->fields.aiState )
                goto LABEL_247;
              goto LABEL_252;
            }
            v137 = v169.fields._current;
            if ( !v169.fields._current )
              sub_1C2E388(v135, v136);
            v138 = v169.fields._current->klass;
            v139 = *(unsigned __int16 *)(&v169.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v169.fields._current->klass->_2.bitflags2 + 3) )
            {
              v140 = &v138->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v140 - 1) != AiInterface_TypeInfo )
              {
                --v139;
                v140 += 4;
                if ( !v139 )
                  goto LABEL_220;
              }
              v141 = (__int64)&v138->vtable[*v140 + 1].method;
            }
            else
            {
LABEL_220:
              v141 = sub_1C8010C(v169.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v141)(
                    v137,
                    v32,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v141 + 8)) & 1) != 0 )
            {
              v142 = v137->klass;
              v143 = v32->fields.paramater;
              v144 = v167->fields.Bdata;
              v145 = *(unsigned __int16 *)(&v137->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v137->klass->_2.bitflags2 + 3) )
              {
                v146 = &v142->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v146 - 1) != AiInterface_TypeInfo )
                {
                  --v145;
                  v146 += 4;
                  if ( !v145 )
                    goto LABEL_227;
                }
                v147 = (__int64)&v142->vtable[*v146].method;
              }
              else
              {
LABEL_227:
                v147 = sub_1C8010C(v137, AiInterface_TypeInfo, 0LL);
              }
              v148 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v147)(
                       v137,
                       v144,
                       v143,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v164,
                       aiEnt,
                       *(_QWORD *)(v147 + 8));
              if ( !v148 )
                sub_1C2E388(0LL, v149);
              v150 = *(_QWORD *)(v148 + 24);
              if ( v150 )
                break;
            }
          }
          v134 = (AiLogic_o *)v162;
          if ( !v162 )
            sub_1C2E388(v148, v149);
          if ( !v162->fields.aiState )
            v134 = (AiLogic_o *)v148;
          if ( (int)v150 >= 1 )
          {
            aiType = (unsigned int)v134->fields._aiType;
            v152 = 0LL;
            while ( 1 )
            {
              if ( (__int64)v152 < (int)aiType )
              {
                if ( v152 >= aiType )
                  sub_1C2E390(v148, v149);
                if ( *((double *)&v134->fields._thinkList + v152) < *(double *)(v148 + 8 * v152 + 32) )
                  break;
              }
              if ( (unsigned int)*(_QWORD *)(v148 + 24) == ++v152 )
                goto LABEL_213;
            }
            v134 = (AiLogic_o *)v148;
          }
        }
      }
      if ( refine != 3 )
      {
        if ( refine == 4 )
        {
          this = (AiLogic_o *)sub_1C2E1D4(double___TypeInfo, 1LL);
          v94 = v33;
          if ( !v33 )
            goto LABEL_260;
          v95 = this;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v168,
            v94,
            (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v169 = v168;
          while ( 1 )
          {
            v96 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v169,
                    (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v96 )
              break;
            v98 = v169.fields._current;
            if ( !v169.fields._current )
              sub_1C2E388(v96, v97);
            v99 = v169.fields._current->klass;
            v100 = *(unsigned __int16 *)(&v169.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v169.fields._current->klass->_2.bitflags2 + 3) )
            {
              v101 = &v99->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v101 - 1) != AiInterface_TypeInfo )
              {
                --v100;
                v101 += 4;
                if ( !v100 )
                  goto LABEL_165;
              }
              v102 = (__int64)&v99->vtable[*v101 + 1].method;
            }
            else
            {
LABEL_165:
              v102 = sub_1C8010C(v169.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v102)(
                    v98,
                    v32,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v102 + 8)) & 1) != 0 )
            {
              v103 = v98->klass;
              v104 = v32->fields.paramater;
              v105 = v167->fields.Bdata;
              v106 = *(unsigned __int16 *)(&v98->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v98->klass->_2.bitflags2 + 3) )
              {
                v107 = &v103->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v107 - 1) != AiInterface_TypeInfo )
                {
                  --v106;
                  v107 += 4;
                  if ( !v106 )
                    goto LABEL_172;
                }
                v108 = (__int64)&v103->vtable[*v107].method;
              }
              else
              {
LABEL_172:
                v108 = sub_1C8010C(v98, AiInterface_TypeInfo, 0LL);
              }
              v109 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v108)(
                       v98,
                       v105,
                       v104,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v164,
                       aiEnt,
                       *(_QWORD *)(v108 + 8));
              if ( !v109 )
                sub_1C2E388(0LL, v110);
              v111 = *(unsigned int *)(v109 + 24);
              if ( v111 << 32 >= 1 )
              {
                v112 = (int)v111;
                v113 = (double *)(v109 + 32);
                do
                {
                  if ( !v111 )
                    sub_1C2E390(v109, v110);
                  if ( !v95 )
                    sub_1C2E388(v109, v110);
                  if ( !v95->fields._aiType )
                    sub_1C2E390(v109, v110);
                  v114 = *v113++;
                  --v112;
                  --v111;
                  *(double *)&v95->fields._thinkList = v114 + *(double *)&v95->fields._thinkList;
                }
                while ( v112 );
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v169,
            (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          if ( !func )
            goto LABEL_260;
          v154 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   v95,
                   v163,
                   *(_QWORD *)&func->fields.extra_arg);
LABEL_251:
          v64 = v154;
        }
        goto LABEL_252;
      }
      v160 = v7;
      this = (AiLogic_o *)sub_1C2E1D4(double___TypeInfo, 0LL);
      if ( !v33 )
        goto LABEL_260;
      v115 = (AiLogic_AiInfo_o *)this;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v168,
        v33,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v169 = v168;
LABEL_184:
      while ( 1 )
      {
        v116 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v169,
                 (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v116 )
          break;
        v118 = v169.fields._current;
        if ( !v169.fields._current )
          sub_1C2E388(v116, v117);
        v119 = v169.fields._current->klass;
        v120 = *(unsigned __int16 *)(&v169.fields._current->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v169.fields._current->klass->_2.bitflags2 + 3) )
        {
          v121 = &v119->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v121 - 1) != AiInterface_TypeInfo )
          {
            --v120;
            v121 += 4;
            if ( !v120 )
              goto LABEL_190;
          }
          v122 = (__int64)&v119->vtable[*v121 + 1].method;
        }
        else
        {
LABEL_190:
          v122 = sub_1C8010C(v169.fields._current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v122)(
                v118,
                v32,
                wkZero,
                aiEnt,
                *(_QWORD *)(v122 + 8)) & 1) != 0 )
        {
          v123 = v118->klass;
          v124 = v32->fields.paramater;
          v125 = v167->fields.Bdata;
          v126 = *(unsigned __int16 *)(&v118->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v118->klass->_2.bitflags2 + 3) )
          {
            v127 = &v123->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v127 - 1) != AiInterface_TypeInfo )
            {
              --v126;
              v127 += 4;
              if ( !v126 )
                goto LABEL_197;
            }
            v128 = (__int64)&v123->vtable[*v127].method;
          }
          else
          {
LABEL_197:
            v128 = sub_1C8010C(v118, AiInterface_TypeInfo, 0LL);
          }
          v129 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v128)(
                   v118,
                   v125,
                   v124,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v164,
                   aiEnt,
                   *(_QWORD *)(v128 + 8));
          if ( !v129 )
            sub_1C2E388(0LL, v130);
          v131 = *(_QWORD *)(v129 + 24);
          if ( v131 )
          {
            if ( !v115 )
              sub_1C2E388(v129, v130);
            if ( !v115->fields.aiState )
              goto LABEL_210;
            if ( (int)v131 >= 1 )
            {
              aiState_low = LODWORD(v115->fields.aiState);
              v133 = 0LL;
              while ( 1 )
              {
                if ( (__int64)v133 < (int)aiState_low )
                {
                  if ( v133 >= aiState_low )
                    sub_1C2E390(v129, v130);
                  if ( *(double *)(v129 + 8 * v133 + 32) < *((double *)&v115->fields.logicAi + v133) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v129 + 24) == ++v133 )
                  goto LABEL_184;
              }
LABEL_210:
              v115 = (AiLogic_AiInfo_o *)v129;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v169,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      if ( !v115 )
        goto LABEL_260;
      aiInfo = v115;
      aiState = v115->fields.aiState;
      v7 = v160;
      if ( aiState )
      {
LABEL_247:
        if ( func )
        {
          v154 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_AiInfo_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   aiInfo,
                   v163,
                   *(_QWORD *)&func->fields.extra_arg);
          goto LABEL_251;
        }
LABEL_260:
        sub_1C2E388(this, aiInfo);
      }
LABEL_252:
      v155 = v28 ^ v64;
      if ( ((v28 ^ v64) & 1) != 0 )
      {
        logicAi = v7->fields.logicAi;
        if ( logicAi )
        {
          if ( (((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, Il2CppMethodPointer))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method)(
                  logicAi,
                  v7,
                  aiEnt,
                  logicAi->klass->vtable._19_AddBattleEndNotRelatedSurvivalStatusInstantlyTask.methodPtr) & 1) == 0 )
LABEL_255:
            v155 = 0;
        }
      }
      return v155 & 1;
    case 9:
      v43 = v167;
      v45 = 1;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v33;
      goto LABEL_58;
    case 0xA:
      v45 = 1;
      v40 = 1;
      goto LABEL_55;
    case 0xB:
      v45 = 1;
      v40 = 2;
LABEL_55:
      v43 = v167;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v33;
      goto LABEL_56;
    case 0xC:
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v33 )
        goto LABEL_260;
      System_Collections_Generic_List_object___AddRange(
        v33,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v167->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0LL);
      System_Collections_Generic_List_object___AddRange(
        v33,
        FieldEnemyServantList,
        (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_86;
    case 0xD:
      v43 = v167;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v33;
      v45 = 0;
LABEL_58:
      v47 = v7;
      v40 = 0;
      goto LABEL_59;
    case 0xE:
      v40 = 1;
      goto LABEL_49;
    case 0xF:
      v40 = 2;
LABEL_49:
      v43 = v167;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v33;
      v45 = 0;
LABEL_56:
      v47 = v7;
LABEL_59:
      AiLogic__getTargetPosServant(v43, v44, v45, v47, v40, (const MethodInfo *)v37);
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
  int32_t uniqueId; // w26
  AiState_o *v18; // x25
  AiLogic_AiInfo_o *v19; // x27
  const MethodInfo *v20; // x6
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t v27; // w4
  const MethodInfo *v28; // x6
  AiEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v15 = this;
  if ( (byte_4C003CA & 1) == 0 )
  {
    sub_1C2E12C(&AiEntity_TypeInfo, svtData);
    this = (AiLogic_o *)sub_1C2E12C(&AiLogic_AiInfo_TypeInfo, v16);
    byte_4C003CA = 1;
  }
  if ( !svtData )
    sub_1C2E388(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v18 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v19 = (AiLogic_AiInfo_o *)sub_1C2E378(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v19, 1, uniqueId, v18, logicAi, procState, v20);
  *info = v19;
  sub_1C2E0D0((PartyOrganizationUtility_o *)info, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v27, timingPriority, v28);
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
  struct AiState_o *aiState; // x19
  const MethodInfo *v14; // x6
  int v15; // w29
  AiBaseEntity_o *BasicAct; // x21
  AiLogic_o *v17; // x26
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *Bdata; // x26
  struct BattleData_o *v20; // x8
  UnityEngine_Object_o *v21; // x22
  struct BattleData_o *v22; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v24; // x8
  struct BattleData_o *v25; // x8

  v11 = this;
  if ( (byte_4C003CC & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, aiInfo);
    this = (AiLogic_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    byte_4C003CC = 1;
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
  v15 = 10;
  do
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
      goto LABEL_36;
    this = (AiLogic_o *)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          BasicAct->fields.aiActId,
                          (const MethodInfo_327B180 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_36;
    v17 = this;
    if ( AiActEntity__isThinkEnd((AiActEntity_o *)this, 0LL) )
      break;
    if ( HIDWORD(v17->fields.Bdata) == 99 )
    {
      aiState->fields.aiGroupId = AiBaseEntity__getChangeAiId(BasicAct, 0LL);
      aiState->fields.actCount = 0;
      Bdata = (UnityEngine_Object_o *)v11->fields.Bdata;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AiLogic_o *)UnityEngine_Object__op_Inequality(Bdata, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v20 = v11->fields.Bdata;
        if ( !v20 )
          goto LABEL_36;
        this = (AiLogic_o *)v20->fields.battleEvent;
        if ( !this )
          goto LABEL_36;
        ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
          this,
          aiState,
          BasicAct,
          this->klass[2]._1.image);
      }
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v18);
    --v15;
  }
  while ( v15 );
  v21 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0LL);
    if ( (_DWORD)this )
    {
      v22 = v11->fields.Bdata;
      if ( !v22 )
        goto LABEL_36;
      playerNpCount = v22->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0LL);
      v22->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v24 = v11->fields.Bdata;
      if ( !v24 )
        goto LABEL_36;
      if ( (v24->fields.playerNpCount & 0x80000000) != 0 )
        v24->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, 0LL);
    v25 = v11->fields.Bdata;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_36;
      v25->fields.playerNpCount = 0;
    }
    else if ( !v25 )
    {
      goto LABEL_36;
    }
    this = (AiLogic_o *)v25->fields.battleEvent;
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
    sub_1C2E388(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *__fastcall AiLogic__getAction_44798956(
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
  const MethodInfo *v18; // x6
  int32_t v19; // w4
  const MethodInfo *v20; // x6
  AiFieldEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v13 = this;
  if ( (byte_4C003CB & 1) == 0 )
  {
    sub_1C2E12C(&AiFieldEntity_TypeInfo, fieldData);
    this = (AiLogic_o *)sub_1C2E12C(&AiLogic_AiInfo_TypeInfo, v14);
    byte_4C003CB = 1;
  }
  if ( !fieldData )
    sub_1C2E388(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v17 = (AiLogic_AiInfo_o *)sub_1C2E378(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v17, 2, index, aiState, logicAi, procState, v18);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(v13, v17, procState, turnCount, v19, timingPriority, v20);
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
  __int64 v34; // x22
  void *All; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_object__o *v37; // x0
  System_Collections_Generic_List_object__o *thinkList; // x23
  System_Predicate_object__o *v39; // x24
  AiLogic___c_c *v40; // x8
  System_Collections_Generic_List_object__o *v41; // x23
  System_Comparison_T__o *_9__16_1; // x24
  Il2CppObject *v43; // x25
  struct AiLogic___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x24
  System_Predicate_object__o *v52; // x25
  const MethodInfo *v53; // x5
  int v54; // w8
  char *v55; // x24
  WeightRate_int__o *v56; // x25
  const MethodInfo *v57; // x5
  __int64 v58; // x8
  unsigned __int64 v59; // x26
  char *v60; // x29
  int32_t Next; // w0
  const MethodInfo *v62; // x5
  AiBaseEntity_o *v63; // x24

  if ( (byte_4C003CD & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_AiBaseEntity__TypeInfo, aiInfo);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v19);
    sub_1C2E12C(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v20);
    sub_1C2E12C(&System_Predicate_AiBaseEntity__TypeInfo, v21);
    sub_1C2E12C(&Method_AiLogic___c__getBasicAct_b__16_1__, v22);
    sub_1C2E12C(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v23);
    sub_1C2E12C(&AiLogic___c__DisplayClass16_0_TypeInfo, v24);
    sub_1C2E12C(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v25);
    sub_1C2E12C(&AiLogic___c__DisplayClass16_1_TypeInfo, v26);
    sub_1C2E12C(&AiLogic___c_TypeInfo, v27);
    sub_1C2E12C(&Method_WeightRate_int___ctor__, v28);
    sub_1C2E12C(&Method_WeightRate_int__getCount__, v29);
    sub_1C2E12C(&Method_WeightRate_int__getData__, v30);
    sub_1C2E12C(&Method_WeightRate_int__getTotalWeight__, v31);
    sub_1C2E12C(&Method_WeightRate_int__setWeight__, v32);
    sub_1C2E12C(&WeightRate_int__TypeInfo, v33);
    byte_4C003CD = 1;
  }
  v34 = sub_1C2E378(AiLogic___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_42;
  *(_DWORD *)(v34 + 16) = procState;
  *(_DWORD *)(v34 + 20) = actcnt;
  *(_DWORD *)(v34 + 24) = timingPriority;
  v37 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v39 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v39,
    (Il2CppObject *)v34,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    0LL);
  if ( !thinkList )
    goto LABEL_42;
  All = System_Collections_Generic_List_object___FindAll(
          thinkList,
          (System_Predicate_T__o *)v39,
          (const MethodInfo_366BFBC *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v40 = AiLogic___c_TypeInfo;
  v41 = (System_Collections_Generic_List_object__o *)All;
  if ( !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v40 = AiLogic___c_TypeInfo;
  }
  _9__16_1 = (System_Comparison_T__o *)v40->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = AiLogic___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__16_1 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__16_1, v43, Method_AiLogic___c__getBasicAct_b__16_1__, 0LL);
    static_fields = AiLogic___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_1,
      (int64_t)_9__16_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !v41 )
LABEL_42:
    sub_1C2E388(All, v36);
  System_Collections_Generic_List_object___Sort_57070448(
    v41,
    _9__16_1,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v41->fields._size >= 1 )
  {
    while ( 1 )
    {
      v51 = sub_1C2E378(AiLogic___c__DisplayClass16_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v51, 0LL);
      if ( v41->fields._size < 1 )
        return 0LL;
      All = System_Collections_Generic_List_object___get_Item(
              v41,
              0,
              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_42;
      if ( !v51 )
        goto LABEL_42;
      *(_DWORD *)(v51 + 16) = *((_DWORD *)All + 7);
      v52 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_object____ctor(
        v52,
        (Il2CppObject *)v51,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0LL);
      All = System_Collections_Generic_List_object___FindAll(
              v41,
              (System_Predicate_T__o *)v52,
              (const MethodInfo_366BFBC *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_42;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_42;
      v54 = *((_DWORD *)All + 6);
      v55 = (char *)All;
      if ( v54 <= 1 )
        break;
      v56 = (WeightRate_int__o *)sub_1C2E378(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v56, (const MethodInfo_3A513FC *)Method_WeightRate_int___ctor__);
      v58 = *((_QWORD *)v55 + 3);
      if ( (int)v58 >= 1 )
      {
        v59 = 0LL;
        v60 = v55 + 32;
        while ( v59 < (unsigned int)v58 )
        {
          All = (void *)AiLogic__checkThinking_44800520(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v60[8 * v59],
                          turn,
                          *(_DWORD *)(v34 + 20),
                          v57);
          if ( v59 >= *((unsigned int *)v55 + 6) )
            break;
          v36 = *(_QWORD *)&v60[8 * v59];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v36 || !v56 )
              goto LABEL_42;
            WeightRate_int___setWeight(
              v56,
              *(_DWORD *)(v36 + 32),
              v59,
              (const MethodInfo_3A50918 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v41,
                            (Il2CppObject *)v36,
                            (const MethodInfo_366CDD4 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v58) = *((_DWORD *)v55 + 6);
          if ( (__int64)++v59 >= (int)v58 )
            goto LABEL_29;
        }
LABEL_41:
        sub_1C2E390(All, v36);
      }
LABEL_29:
      if ( !v56 )
        goto LABEL_42;
      if ( WeightRate_int___getCount(v56, (const MethodInfo_3A50CD4 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v56->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v56, Next, (const MethodInfo_3A50D8C *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v55 + 6) )
          goto LABEL_41;
        v63 = *(AiBaseEntity_o **)&v55[8 * (int)All + 32];
        if ( AiLogic__checkThinking_44800520(this, aiInfo, v63, turn, *(_DWORD *)(v34 + 20), v62) )
          return v63;
        goto LABEL_37;
      }
LABEL_38:
      if ( v41->fields._size <= 0 )
        return 0LL;
    }
    if ( !v54 )
      goto LABEL_41;
    All = (void *)AiLogic__checkThinking_44800520(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v34 + 20),
                    v53);
    if ( !*((_DWORD *)v55 + 6) )
      goto LABEL_41;
    v63 = (AiBaseEntity_o *)*((_QWORD *)v55 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v63;
LABEL_37:
    System_Collections_Generic_List_object___Remove(
      v41,
      (Il2CppObject *)v63,
      (const MethodInfo_366CDD4 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    goto LABEL_38;
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
  if ( (byte_4C003CF & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C2E12C(&Method_System_Collections_Generic_List_AiInterface__Add__, targetList);
    byte_4C003CF = 1;
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
    sub_1C2E388(this, targetList);
  }
  size = targetList->fields._size;
  v21 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    targetList->fields._size = size + 1;
    v22 = &items->obj.klass + size;
    v22[4] = (Il2CppClass *)v21;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v21, v12, v13, v14, v15, v16, v17);
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
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL4 v10; // w23
  _BOOL4 v11; // w8
  int32_t aiType; // w8
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  System_Collections_Generic_List_object__o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  v6 = this;
  if ( (byte_4C003C6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___77693296, aiInfo);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v8);
    this = (AiLogic_o *)sub_1C2E12C(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v9);
    byte_4C003C6 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  this = (AiLogic_o *)v6->fields._thinkList;
  v10 = v6->fields._aiType != aiInfo->fields.aiType;
  if ( this && this->fields._aiType )
  {
    this = (AiLogic_o *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)this,
                          0,
                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    if ( !this || !aiState )
      goto LABEL_19;
    v11 = LODWORD(this->fields.Bdata) != aiState->fields.aiGroupId;
  }
  else
  {
    v11 = 1;
  }
  if ( v11 || v10 )
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
      sub_1C2E388(this, aiInfo);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           0LL);
LABEL_18:
        v14 = ListFormGroupId;
        v15 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_57061792(
          v15,
          v14,
          (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___77693296);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v15;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v6->fields._thinkList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v12->fields.aiState, (int64_t)inAiSate, v13, v14, v15, v16, v17, v18);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_1C2E0D0((PartyOrganizationUtility_o *)v12, (int64_t)inLogicAi, v19, v20, v21, v22, v23, v24);
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
    return ((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, Il2CppMethodPointer))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method)(
             logicAi,
             this,
             aiBaseEntity,
             logicAi->klass->vtable._19_AddBattleEndNotRelatedSurvivalStatusInstantlyTask.methodPtr);
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
  Il2CppObject *v12; // x23
  __int64 v13; // x1
  void *checkedInfo; // x0
  _DWORD *v15; // x22
  int32_t v16; // w20
  int32_t v17; // w21

  if ( (byte_4C003D3 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      svtData);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__, v11);
    byte_4C003D3 = 1;
  }
  if ( aiBaseEntity )
  {
    v12 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiBaseEntity_o *, int32_t *, bool *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
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
              v12,
              (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
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
        sub_1C2E388(checkedInfo, v13);
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
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4C003D2 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      aiBaseEntity);
    byte_4C003D2 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_1C2E388(v7, v8);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
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
  PartyOrganizationUtility_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *klass; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21

  if ( (byte_4C003D1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__, aiBaseEntity);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v9);
    byte_4C003D1 = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (PartyOrganizationUtility_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v12,
        (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (PartyOrganizationUtility_c *)v12;
      sub_1C2E0D0(p_checkedInfo, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v21 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (Il2CppObject *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)klass,
          v21,
          (Il2CppObject *)inCheckedInfo,
          (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_1C2E388(klass, v20);
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
  sub_1C2E0D0(v7, (int64_t)inSkillInfo, v9, v10, v11, v12, v13, v14);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C003D4 & 1) == 0 )
  {
    sub_1C2E12C(&AiLogic___c_TypeInfo, v1);
    byte_4C003D4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(AiLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v2;
  sub_1C2E0D0((PartyOrganizationUtility_o *)AiLogic___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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
    sub_1C2E388(this, a);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
  return s->fields.priority == this->fields.priority;
}