void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF14D & 1) == 0 )
  {
    sub_1C21E38(&long___TypeInfo);
    byte_4BDF14D = 1;
  }
  v3 = (struct System_Int64_array *)sub_1C21EE0(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.wkZero, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BDF142 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF142 = 1;
  }
  this->fields.Bdata = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v11);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.aiActMst,
    (int64_t)MasterData_object,
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
        sub_1C2209C(IsNullOrEmpty, v8);
      }
LABEL_19:
      sub_1C22094(IsNullOrEmpty, v8);
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
  if ( (byte_4BDF144 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C21E38(&AiLogic_AiInfo_TypeInfo);
    byte_4BDF144 = 1;
  }
  if ( !svtData )
    sub_1C22094(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_1C22084(AiLogic_AiInfo_TypeInfo);
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
  __int64 v9; // x23
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *thinkList; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4BDF146 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C21E38(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_1C21E38(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__);
    sub_1C21E38(&AiLogic___c__DisplayClass12_0_TypeInfo);
    byte_4BDF146 = 1;
  }
  v9 = sub_1C22084(AiLogic___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = procState, *(_DWORD *)(v9 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v12),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v14 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0LL),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v14,
                (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_1C22094(All, v11);
  }
  return All->fields._size > 0;
}


bool __fastcall AiLogic__checkThinking_44677164(
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
  if ( (byte_4BDF145 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C21E38(&AiLogic_AiInfo_TypeInfo);
    byte_4BDF145 = 1;
  }
  if ( !fieldData )
    sub_1C22094(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_1C22084(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool __fastcall AiLogic__checkThinking_44679784(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  AiLogic_AiInfo_o *v7; // x29
  int32_t Cond; // w20
  System_String_o **v9; // x8
  System_String_o *v10; // x21
  unsigned __int8 v11; // w26
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  ConditionsInformation_CheckInfo_o *v14; // x0
  ConditionsInformation_CheckInfo_o *v15; // x25
  System_Collections_Generic_List_object__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t v23; // w4
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *Bdata; // x8
  AiLogic_o *v26; // x0
  System_Collections_Generic_List_AiInterface__o *v27; // x1
  bool v28; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  AiLogic_o *v35; // x21
  System_Int64_array *wkZero; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_List_object__o *v41; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Int64_array *v44; // x20
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x24
  bool v47; // w21
  _BOOL8 v48; // x0
  __int64 v49; // x1
  bool v50; // w20
  Il2CppObject *v51; // x27
  Il2CppClass *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  Il2CppClass *v56; // x8
  unsigned int v57; // w22
  struct BattleData_o *v58; // x23
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v67; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v70; // x8
  unsigned int paramater; // w27
  struct BattleData_o *v72; // x22
  __int64 v73; // x9
  int32_t *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  System_Collections_Generic_List_object__o *v77; // x9
  AiLogic_o *v78; // x20
  _BOOL8 v79; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x21
  Il2CppClass *v82; // x8
  __int64 v83; // x9
  int32_t *v84; // x10
  __int64 v85; // x0
  Il2CppClass *v86; // x8
  unsigned int v87; // w22
  struct BattleData_o *v88; // x23
  __int64 v89; // x9
  int32_t *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x8
  __int64 v95; // x9
  double *v96; // x10
  double v97; // t1
  AiLogic_AiInfo_o *v98; // x29
  _BOOL8 v99; // x0
  __int64 v100; // x1
  Il2CppObject *v101; // x27
  Il2CppClass *v102; // x8
  __int64 v103; // x9
  int32_t *v104; // x10
  __int64 v105; // x0
  Il2CppClass *v106; // x8
  unsigned int v107; // w22
  struct BattleData_o *v108; // x23
  __int64 v109; // x9
  int32_t *v110; // x10
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x11
  unsigned __int64 aiState_low; // x10
  unsigned __int64 v116; // x9
  AiLogic_o *v117; // x22
  _BOOL8 v118; // x0
  __int64 v119; // x1
  Il2CppObject *v120; // x27
  Il2CppClass *v121; // x8
  __int64 v122; // x9
  int32_t *v123; // x10
  __int64 v124; // x0
  Il2CppClass *v125; // x8
  unsigned int v126; // w22
  struct BattleData_o *v127; // x23
  __int64 v128; // x9
  int32_t *v129; // x10
  __int64 v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x11
  unsigned __int64 aiType; // x10
  unsigned __int64 v135; // x9
  struct AiState_o *aiState; // x8
  char v137; // w0
  char v138; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  System_Collections_Generic_List_object__o *v141; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v142; // [xsp+0h] [xbp-D0h]
  AiLogic_AiInfo_o *v143; // [xsp+8h] [xbp-C8h]
  unsigned __int8 v144; // [xsp+10h] [xbp-C0h]
  AiLogic_AiInfo_o *v145; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v146; // [xsp+18h] [xbp-B8h]
  System_Int64_array *v147; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v150; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+50h] [xbp-80h] BYREF

  v7 = aiInfo;
  v150 = this;
  if ( (byte_4BDF14B & 1) == 0 )
  {
    sub_1C21E38(&AiInterface_TypeInfo);
    sub_1C21E38(&Ai_COND_TypeInfo);
    sub_1C21E38(&ConditionsInformation_TypeInfo);
    sub_1C21E38(&double___TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Skip_long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Take_long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiInterface__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiInterface__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiInterface___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_AiInterface__TypeInfo);
    sub_1C21E38(&StringLiteral_9472/*"NOT_"*/);
    this = (AiLogic_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF14B = 1;
  }
  memset(&v152, 0, sizeof(v152));
  if ( !aiEnt )
    goto LABEL_260;
  Cond = Ai__getCond(aiEnt->fields.cond, 0LL);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0LL);
  if ( !v7 )
    goto LABEL_260;
  v9 = (System_String_o **)&StringLiteral_9472/*"NOT_"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v9 = (System_String_o **)&StringLiteral_1/*""*/;
  v10 = *v9;
  v11 = (unsigned __int8)this;
  v151.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v151.fields._index = -1LL;
  LODWORD(v151.fields._current) = Cond;
  v12 = System_Enum__ToString((System_Enum_o *)&v151, 0LL);
  System_String__Concat_63115476(v10, v12, 0LL);
  if ( !ConditionsInformation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  v14 = ConditionsInformation__getCheckFunction(Cond, v13);
  if ( !v14 )
    goto LABEL_255;
  v15 = v14;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v15->fields.target )
  {
    case 1:
      if ( !v16 )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)v150->fields.Bdata;
      goto LABEL_75;
    case 2:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      uniqueId = v7->fields.uniqueId;
      if ( v7->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      items = v16->fields._items;
      v32 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)this;
      goto LABEL_83;
    case 3:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 4:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 5:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( v7->fields.aiType != 1 )
      {
        if ( !this || !v16 )
          goto LABEL_260;
        aiInfo = *(AiLogic_AiInfo_o **)&this[7].fields._aiType;
        goto LABEL_75;
      }
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
      Bdata = v150->fields.Bdata;
      if ( !Bdata )
        goto LABEL_260;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_46;
      goto LABEL_22;
    case 6:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        Bdata = v150->fields.Bdata;
        if ( !Bdata )
          goto LABEL_260;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_46:
          if ( !v16 )
            goto LABEL_260;
          aiInfo = (AiLogic_AiInfo_o *)Bdata->fields.playerFieldStatus;
        }
        else
        {
LABEL_22:
          if ( !v16 )
            goto LABEL_260;
          aiInfo = (AiLogic_AiInfo_o *)Bdata->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v16 )
          goto LABEL_260;
        aiInfo = (AiLogic_AiInfo_o *)this[7].fields.Bdata;
      }
LABEL_75:
      items = v16->fields._items;
      v32 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_260;
LABEL_83:
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)aiInfo,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v34[4] = (Il2CppClass *)aiInfo;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)aiInfo, v17, v18, v19, v20, v21, v22);
      }
      goto LABEL_86;
    case 7:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 8:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v16 )
          goto LABEL_260;
      }
LABEL_79:
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_86:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0LL);
      v35 = this;
      wkZero = v150->fields.wkZero;
      if ( v15->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_260;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v37 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_2FE7F00 *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v37,
                                (const MethodInfo_2FE975C *)Method_System_Linq_Enumerable_ToArray_long___);
          v35 = this;
        }
      }
      if ( v15->fields.isParams )
      {
        if ( !v35 )
          goto LABEL_260;
        if ( v35->fields._aiType >= 2 )
        {
          v38 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                  1,
                  (const MethodInfo_2FE7F00 *)Method_System_Linq_Enumerable_Skip_long___);
          v39 = System_Linq_Enumerable__Take_long_(
                  v38,
                  v35->fields._aiType - 1,
                  (const MethodInfo_2FE8538 *)Method_System_Linq_Enumerable_Take_long___);
          v147 = System_Linq_Enumerable__ToArray_long_(
                   v39,
                   (const MethodInfo_2FE975C *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C21EE0(long___TypeInfo, 1LL);
          if ( v35->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v35->fields._thinkList;
              v146 = this;
LABEL_105:
              this->fields._thinkList = thinkList;
              goto LABEL_106;
            }
          }
          goto LABEL_153;
        }
      }
      else if ( v15->fields.isIndiv )
      {
        if ( !v35 )
          goto LABEL_260;
        if ( v35->fields._aiType >= 2 )
        {
          v41 = v16;
          v42 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                  1,
                  (const MethodInfo_2FE7F00 *)Method_System_Linq_Enumerable_Skip_long___);
          v43 = System_Linq_Enumerable__Take_long_(
                  v42,
                  v35->fields._aiType - 1,
                  (const MethodInfo_2FE8538 *)Method_System_Linq_Enumerable_Take_long___);
          v44 = System_Linq_Enumerable__ToArray_long_(
                  v43,
                  (const MethodInfo_2FE975C *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C21EE0(long___TypeInfo, 1LL);
          if ( v35->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v35->fields._thinkList;
              v146 = this;
              v147 = wkZero;
              wkZero = v44;
              v16 = v41;
              goto LABEL_105;
            }
          }
LABEL_153:
          sub_1C2209C(this, aiInfo);
        }
      }
      v146 = v35;
      v147 = wkZero;
LABEL_106:
      refine = v15->fields.refine;
      func = v15->fields.func;
      if ( !refine )
      {
        v144 = v11;
        if ( !v16 )
          goto LABEL_260;
        v142 = v16;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v151,
          v16,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v152 = v151;
        while ( 1 )
        {
          v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v152,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v47 = v63;
          if ( !v63 )
            break;
          current = v152.fields._current;
          if ( !v152.fields._current )
            sub_1C22094(v63, v64);
          klass = v152.fields._current->klass;
          v67 = *(unsigned __int16 *)(&v152.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v152.fields._current->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v67;
              p_offset += 4;
              if ( !v67 )
                goto LABEL_136;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_136:
            p_method = sub_1C73E18(v152.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v15,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v70 = current->klass;
            paramater = v15->fields.paramater;
            v72 = v150->fields.Bdata;
            v73 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
            {
              v74 = &v70->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v74 - 1) != AiInterface_TypeInfo )
              {
                --v73;
                v74 += 4;
                if ( !v73 )
                  goto LABEL_143;
              }
              v75 = (__int64)&v70->vtable[*v74].method;
            }
            else
            {
LABEL_143:
              v75 = sub_1C73E18(current, AiInterface_TypeInfo, 0LL);
            }
            v76 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v75)(
                    current,
                    v72,
                    paramater,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v147,
                    aiEnt,
                    *(_QWORD *)(v75 + 8),
                    v142);
            if ( !func )
              sub_1C22094(v76, v76);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v76,
                    v146,
                    *(_QWORD *)&func->fields.extra_arg) & 1) != 0 )
              break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v152,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
LABEL_148:
        v11 = v144;
        goto LABEL_252;
      }
      v47 = refine == 1;
      if ( refine == 1 )
      {
        v144 = v11;
        if ( !v16 )
          goto LABEL_260;
        v141 = v16;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v151,
          v16,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v152 = v151;
        while ( 1 )
        {
          v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v152,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v50 = v48;
          if ( !v48 )
            break;
          v51 = v152.fields._current;
          if ( !v152.fields._current )
            sub_1C22094(v48, v49);
          v52 = v152.fields._current->klass;
          v53 = *(unsigned __int16 *)(&v152.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v152.fields._current->klass->_2.bitflags2 + 3) )
          {
            v54 = &v52->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v54 - 1) != AiInterface_TypeInfo )
            {
              --v53;
              v54 += 4;
              if ( !v53 )
                goto LABEL_116;
            }
            v55 = (__int64)&v52->vtable[*v54 + 1].method;
          }
          else
          {
LABEL_116:
            v55 = sub_1C73E18(v152.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v55)(
                  v51,
                  v15,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v55 + 8)) & 1) != 0 )
          {
            v56 = v51->klass;
            v57 = v15->fields.paramater;
            v58 = v150->fields.Bdata;
            v59 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
            {
              v60 = &v56->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v60 - 1) != AiInterface_TypeInfo )
              {
                --v59;
                v60 += 4;
                if ( !v59 )
                  goto LABEL_123;
              }
              v61 = (__int64)&v56->vtable[*v60].method;
            }
            else
            {
LABEL_123:
              v61 = sub_1C73E18(v51, AiInterface_TypeInfo, 0LL);
            }
            v62 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v61)(
                    v51,
                    v58,
                    v57,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v147,
                    aiEnt,
                    *(_QWORD *)(v61 + 8),
                    v141);
            if ( !func )
              sub_1C22094(v62, v62);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v62,
                    v146,
                    *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
              break;
          }
        }
        v47 = !v50;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v152,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        goto LABEL_148;
      }
      if ( refine == 2 )
      {
        this = (AiLogic_o *)sub_1C21EE0(double___TypeInfo, 0LL);
        if ( !v16 )
          goto LABEL_260;
        v117 = this;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v151,
          v16,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v152 = v151;
        while ( 1 )
        {
LABEL_213:
          v145 = (AiLogic_AiInfo_o *)v117;
          while ( 1 )
          {
            v118 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v152,
                     (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v118 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v152,
                (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
              aiInfo = v145;
              if ( !v145 )
                goto LABEL_260;
              if ( v145->fields.aiState )
                goto LABEL_247;
              goto LABEL_252;
            }
            v120 = v152.fields._current;
            if ( !v152.fields._current )
              sub_1C22094(v118, v119);
            v121 = v152.fields._current->klass;
            v122 = *(unsigned __int16 *)(&v152.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v152.fields._current->klass->_2.bitflags2 + 3) )
            {
              v123 = &v121->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v123 - 1) != AiInterface_TypeInfo )
              {
                --v122;
                v123 += 4;
                if ( !v122 )
                  goto LABEL_220;
              }
              v124 = (__int64)&v121->vtable[*v123 + 1].method;
            }
            else
            {
LABEL_220:
              v124 = sub_1C73E18(v152.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v124)(
                    v120,
                    v15,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v124 + 8)) & 1) != 0 )
            {
              v125 = v120->klass;
              v126 = v15->fields.paramater;
              v127 = v150->fields.Bdata;
              v128 = *(unsigned __int16 *)(&v120->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v120->klass->_2.bitflags2 + 3) )
              {
                v129 = &v125->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v129 - 1) != AiInterface_TypeInfo )
                {
                  --v128;
                  v129 += 4;
                  if ( !v128 )
                    goto LABEL_227;
                }
                v130 = (__int64)&v125->vtable[*v129].method;
              }
              else
              {
LABEL_227:
                v130 = sub_1C73E18(v120, AiInterface_TypeInfo, 0LL);
              }
              v131 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v130)(
                       v120,
                       v127,
                       v126,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v147,
                       aiEnt,
                       *(_QWORD *)(v130 + 8));
              if ( !v131 )
                sub_1C22094(0LL, v132);
              v133 = *(_QWORD *)(v131 + 24);
              if ( v133 )
                break;
            }
          }
          v117 = (AiLogic_o *)v145;
          if ( !v145 )
            sub_1C22094(v131, v132);
          if ( !v145->fields.aiState )
            v117 = (AiLogic_o *)v131;
          if ( (int)v133 >= 1 )
          {
            aiType = (unsigned int)v117->fields._aiType;
            v135 = 0LL;
            while ( 1 )
            {
              if ( (__int64)v135 < (int)aiType )
              {
                if ( v135 >= aiType )
                  sub_1C2209C(v131, v132);
                if ( *((double *)&v117->fields._thinkList + v135) < *(double *)(v131 + 8 * v135 + 32) )
                  break;
              }
              if ( (unsigned int)*(_QWORD *)(v131 + 24) == ++v135 )
                goto LABEL_213;
            }
            v117 = (AiLogic_o *)v131;
          }
        }
      }
      if ( refine != 3 )
      {
        if ( refine == 4 )
        {
          this = (AiLogic_o *)sub_1C21EE0(double___TypeInfo, 1LL);
          v77 = v16;
          if ( !v16 )
            goto LABEL_260;
          v78 = this;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v151,
            v77,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v152 = v151;
          while ( 1 )
          {
            v79 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v152,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v79 )
              break;
            v81 = v152.fields._current;
            if ( !v152.fields._current )
              sub_1C22094(v79, v80);
            v82 = v152.fields._current->klass;
            v83 = *(unsigned __int16 *)(&v152.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v152.fields._current->klass->_2.bitflags2 + 3) )
            {
              v84 = &v82->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v84 - 1) != AiInterface_TypeInfo )
              {
                --v83;
                v84 += 4;
                if ( !v83 )
                  goto LABEL_165;
              }
              v85 = (__int64)&v82->vtable[*v84 + 1].method;
            }
            else
            {
LABEL_165:
              v85 = sub_1C73E18(v152.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v85)(
                    v81,
                    v15,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v85 + 8)) & 1) != 0 )
            {
              v86 = v81->klass;
              v87 = v15->fields.paramater;
              v88 = v150->fields.Bdata;
              v89 = *(unsigned __int16 *)(&v81->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v81->klass->_2.bitflags2 + 3) )
              {
                v90 = &v86->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v90 - 1) != AiInterface_TypeInfo )
                {
                  --v89;
                  v90 += 4;
                  if ( !v89 )
                    goto LABEL_172;
                }
                v91 = (__int64)&v86->vtable[*v90].method;
              }
              else
              {
LABEL_172:
                v91 = sub_1C73E18(v81, AiInterface_TypeInfo, 0LL);
              }
              v92 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v91)(
                      v81,
                      v88,
                      v87,
                      (unsigned int)turn,
                      (unsigned int)actcnt,
                      v147,
                      aiEnt,
                      *(_QWORD *)(v91 + 8));
              if ( !v92 )
                sub_1C22094(0LL, v93);
              v94 = *(unsigned int *)(v92 + 24);
              if ( v94 << 32 >= 1 )
              {
                v95 = (int)v94;
                v96 = (double *)(v92 + 32);
                do
                {
                  if ( !v94 )
                    sub_1C2209C(v92, v93);
                  if ( !v78 )
                    sub_1C22094(v92, v93);
                  if ( !v78->fields._aiType )
                    sub_1C2209C(v92, v93);
                  v97 = *v96++;
                  --v95;
                  --v94;
                  *(double *)&v78->fields._thinkList = v97 + *(double *)&v78->fields._thinkList;
                }
                while ( v95 );
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v152,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          if ( !func )
            goto LABEL_260;
          v137 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   v78,
                   v146,
                   *(_QWORD *)&func->fields.extra_arg);
LABEL_251:
          v47 = v137;
        }
        goto LABEL_252;
      }
      v143 = v7;
      this = (AiLogic_o *)sub_1C21EE0(double___TypeInfo, 0LL);
      if ( !v16 )
        goto LABEL_260;
      v98 = (AiLogic_AiInfo_o *)this;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v151,
        v16,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v152 = v151;
LABEL_184:
      while ( 1 )
      {
        v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v152,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v99 )
          break;
        v101 = v152.fields._current;
        if ( !v152.fields._current )
          sub_1C22094(v99, v100);
        v102 = v152.fields._current->klass;
        v103 = *(unsigned __int16 *)(&v152.fields._current->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v152.fields._current->klass->_2.bitflags2 + 3) )
        {
          v104 = &v102->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v104 - 1) != AiInterface_TypeInfo )
          {
            --v103;
            v104 += 4;
            if ( !v103 )
              goto LABEL_190;
          }
          v105 = (__int64)&v102->vtable[*v104 + 1].method;
        }
        else
        {
LABEL_190:
          v105 = sub_1C73E18(v152.fields._current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v105)(
                v101,
                v15,
                wkZero,
                aiEnt,
                *(_QWORD *)(v105 + 8)) & 1) != 0 )
        {
          v106 = v101->klass;
          v107 = v15->fields.paramater;
          v108 = v150->fields.Bdata;
          v109 = *(unsigned __int16 *)(&v101->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v101->klass->_2.bitflags2 + 3) )
          {
            v110 = &v106->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v110 - 1) != AiInterface_TypeInfo )
            {
              --v109;
              v110 += 4;
              if ( !v109 )
                goto LABEL_197;
            }
            v111 = (__int64)&v106->vtable[*v110].method;
          }
          else
          {
LABEL_197:
            v111 = sub_1C73E18(v101, AiInterface_TypeInfo, 0LL);
          }
          v112 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v111)(
                   v101,
                   v108,
                   v107,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v147,
                   aiEnt,
                   *(_QWORD *)(v111 + 8));
          if ( !v112 )
            sub_1C22094(0LL, v113);
          v114 = *(_QWORD *)(v112 + 24);
          if ( v114 )
          {
            if ( !v98 )
              sub_1C22094(v112, v113);
            if ( !v98->fields.aiState )
              goto LABEL_210;
            if ( (int)v114 >= 1 )
            {
              aiState_low = LODWORD(v98->fields.aiState);
              v116 = 0LL;
              while ( 1 )
              {
                if ( (__int64)v116 < (int)aiState_low )
                {
                  if ( v116 >= aiState_low )
                    sub_1C2209C(v112, v113);
                  if ( *(double *)(v112 + 8 * v116 + 32) < *((double *)&v98->fields.logicAi + v116) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v112 + 24) == ++v116 )
                  goto LABEL_184;
              }
LABEL_210:
              v98 = (AiLogic_AiInfo_o *)v112;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v152,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      if ( !v98 )
        goto LABEL_260;
      aiInfo = v98;
      aiState = v98->fields.aiState;
      v7 = v143;
      if ( aiState )
      {
LABEL_247:
        if ( func )
        {
          v137 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_AiInfo_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   aiInfo,
                   v146,
                   *(_QWORD *)&func->fields.extra_arg);
          goto LABEL_251;
        }
LABEL_260:
        sub_1C22094(this, aiInfo);
      }
LABEL_252:
      v138 = v11 ^ v47;
      if ( ((v11 ^ v47) & 1) != 0 )
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
            v138 = 0;
        }
      }
      return v138 & 1;
    case 9:
      v26 = v150;
      v28 = 1;
      v27 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_58;
    case 0xA:
      v28 = 1;
      v23 = 1;
      goto LABEL_55;
    case 0xB:
      v28 = 1;
      v23 = 2;
LABEL_55:
      v26 = v150;
      v27 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_56;
    case 0xC:
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v16 )
        goto LABEL_260;
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v150->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0LL);
      System_Collections_Generic_List_object___AddRange(
        v16,
        FieldEnemyServantList,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_86;
    case 0xD:
      v26 = v150;
      v27 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v28 = 0;
LABEL_58:
      v30 = v7;
      v23 = 0;
      goto LABEL_59;
    case 0xE:
      v23 = 1;
      goto LABEL_49;
    case 0xF:
      v23 = 2;
LABEL_49:
      v26 = v150;
      v27 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v28 = 0;
LABEL_56:
      v30 = v7;
LABEL_59:
      AiLogic__getTargetPosServant(v26, v27, v28, v30, v23, (const MethodInfo *)v20);
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
  int32_t uniqueId; // w26
  AiState_o *v17; // x25
  AiLogic_AiInfo_o *v18; // x27
  const MethodInfo *v19; // x6
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w4
  const MethodInfo *v27; // x6
  AiEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v15 = this;
  if ( (byte_4BDF147 & 1) == 0 )
  {
    sub_1C21E38(&AiEntity_TypeInfo);
    this = (AiLogic_o *)sub_1C21E38(&AiLogic_AiInfo_TypeInfo);
    byte_4BDF147 = 1;
  }
  if ( !svtData )
    sub_1C22094(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v17 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v18 = (AiLogic_AiInfo_o *)sub_1C22084(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v18, 1, uniqueId, v17, logicAi, procState, v19);
  *info = v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)info, (int64_t)v18, v20, v21, v22, v23, v24, v25);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v26, timingPriority, v27);
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
  struct AiState_o *aiState; // x19
  const MethodInfo *v13; // x6
  int v14; // w29
  AiBaseEntity_o *BasicAct; // x21
  AiLogic_o *v16; // x26
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *Bdata; // x26
  struct BattleData_o *v19; // x8
  UnityEngine_Object_o *v20; // x22
  struct BattleData_o *v21; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v23; // x8
  struct BattleData_o *v24; // x8

  v11 = this;
  if ( (byte_4BDF149 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    this = (AiLogic_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF149 = 1;
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
  v14 = 10;
  do
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
      goto LABEL_36;
    this = (AiLogic_o *)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          BasicAct->fields.aiActId,
                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_36;
    v16 = this;
    if ( AiActEntity__isThinkEnd((AiActEntity_o *)this, 0LL) )
      break;
    if ( HIDWORD(v16->fields.Bdata) == 99 )
    {
      aiState->fields.aiGroupId = AiBaseEntity__getChangeAiId(BasicAct, 0LL);
      aiState->fields.actCount = 0;
      Bdata = (UnityEngine_Object_o *)v11->fields.Bdata;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AiLogic_o *)UnityEngine_Object__op_Inequality(Bdata, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v19 = v11->fields.Bdata;
        if ( !v19 )
          goto LABEL_36;
        this = (AiLogic_o *)v19->fields.battleEvent;
        if ( !this )
          goto LABEL_36;
        ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, void *))this->klass[1].vtable._3_ToString.method)(
          this,
          aiState,
          BasicAct,
          this->klass[2]._1.image);
      }
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v17);
    --v14;
  }
  while ( v14 );
  v20 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0LL);
    if ( (_DWORD)this )
    {
      v21 = v11->fields.Bdata;
      if ( !v21 )
        goto LABEL_36;
      playerNpCount = v21->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0LL);
      v21->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v23 = v11->fields.Bdata;
      if ( !v23 )
        goto LABEL_36;
      if ( (v23->fields.playerNpCount & 0x80000000) != 0 )
        v23->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, 0LL);
    v24 = v11->fields.Bdata;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_36;
      v24->fields.playerNpCount = 0;
    }
    else if ( !v24 )
    {
      goto LABEL_36;
    }
    this = (AiLogic_o *)v24->fields.battleEvent;
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
    sub_1C22094(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *__fastcall AiLogic__getAction_44678220(
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
  const MethodInfo *v17; // x6
  int32_t v18; // w4
  const MethodInfo *v19; // x6
  AiFieldEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v13 = this;
  if ( (byte_4BDF148 & 1) == 0 )
  {
    sub_1C21E38(&AiFieldEntity_TypeInfo);
    this = (AiLogic_o *)sub_1C21E38(&AiLogic_AiInfo_TypeInfo);
    byte_4BDF148 = 1;
  }
  if ( !fieldData )
    sub_1C22094(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v16 = (AiLogic_AiInfo_o *)sub_1C22084(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v16, 2, index, aiState, logicAi, procState, v17);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(v13, v16, procState, turnCount, v18, timingPriority, v19);
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
  __int64 v13; // x22
  void *All; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x0
  System_Collections_Generic_List_object__o *thinkList; // x23
  System_Predicate_object__o *v18; // x24
  AiLogic___c_c *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x23
  System_Comparison_T__o *_9__16_1; // x24
  Il2CppObject *v22; // x25
  struct AiLogic___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x24
  System_Predicate_object__o *v31; // x25
  const MethodInfo *v32; // x5
  int v33; // w8
  char *v34; // x24
  WeightRate_int__o *v35; // x25
  const MethodInfo *v36; // x5
  __int64 v37; // x8
  unsigned __int64 v38; // x26
  char *v39; // x29
  int32_t Next; // w0
  const MethodInfo *v41; // x5
  AiBaseEntity_o *v42; // x24

  if ( (byte_4BDF14A & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_AiBaseEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    sub_1C21E38(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_1C21E38(&Method_AiLogic___c__getBasicAct_b__16_1__);
    sub_1C21E38(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__);
    sub_1C21E38(&AiLogic___c__DisplayClass16_0_TypeInfo);
    sub_1C21E38(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__);
    sub_1C21E38(&AiLogic___c__DisplayClass16_1_TypeInfo);
    sub_1C21E38(&AiLogic___c_TypeInfo);
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&Method_WeightRate_int__getCount__);
    sub_1C21E38(&Method_WeightRate_int__getData__);
    sub_1C21E38(&Method_WeightRate_int__getTotalWeight__);
    sub_1C21E38(&Method_WeightRate_int__setWeight__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    byte_4BDF14A = 1;
  }
  v13 = sub_1C22084(AiLogic___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_42;
  *(_DWORD *)(v13 + 16) = procState;
  *(_DWORD *)(v13 + 20) = actcnt;
  *(_DWORD *)(v13 + 24) = timingPriority;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v18 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    0LL);
  if ( !thinkList )
    goto LABEL_42;
  All = System_Collections_Generic_List_object___FindAll(
          thinkList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v19 = AiLogic___c_TypeInfo;
  v20 = (System_Collections_Generic_List_object__o *)All;
  if ( !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v19 = AiLogic___c_TypeInfo;
  }
  _9__16_1 = (System_Comparison_T__o *)v19->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = AiLogic___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__16_1 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__16_1, v22, Method_AiLogic___c__getBasicAct_b__16_1__, 0LL);
    static_fields = AiLogic___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_1,
      (int64_t)_9__16_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v20 )
LABEL_42:
    sub_1C22094(All, v15);
  System_Collections_Generic_List_object___Sort_56953720(
    v20,
    _9__16_1,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v20->fields._size >= 1 )
  {
    while ( 1 )
    {
      v30 = sub_1C22084(AiLogic___c__DisplayClass16_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v30, 0LL);
      if ( v20->fields._size < 1 )
        return 0LL;
      All = System_Collections_Generic_List_object___get_Item(
              v20,
              0,
              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_42;
      if ( !v30 )
        goto LABEL_42;
      *(_DWORD *)(v30 + 16) = *((_DWORD *)All + 7);
      v31 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_object____ctor(
        v31,
        (Il2CppObject *)v30,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0LL);
      All = System_Collections_Generic_List_object___FindAll(
              v20,
              (System_Predicate_T__o *)v31,
              (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_42;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_42;
      v33 = *((_DWORD *)All + 6);
      v34 = (char *)All;
      if ( v33 <= 1 )
        break;
      v35 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v35, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
      v37 = *((_QWORD *)v34 + 3);
      if ( (int)v37 >= 1 )
      {
        v38 = 0LL;
        v39 = v34 + 32;
        while ( v38 < (unsigned int)v37 )
        {
          All = (void *)AiLogic__checkThinking_44679784(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v39[8 * v38],
                          turn,
                          *(_DWORD *)(v13 + 20),
                          v36);
          if ( v38 >= *((unsigned int *)v34 + 6) )
            break;
          v15 = *(_QWORD *)&v39[8 * v38];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v15 || !v35 )
              goto LABEL_42;
            WeightRate_int___setWeight(
              v35,
              *(_DWORD *)(v15 + 32),
              v38,
              (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v20,
                            (Il2CppObject *)v15,
                            (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v37) = *((_DWORD *)v34 + 6);
          if ( (__int64)++v38 >= (int)v37 )
            goto LABEL_29;
        }
LABEL_41:
        sub_1C2209C(All, v15);
      }
LABEL_29:
      if ( !v35 )
        goto LABEL_42;
      if ( WeightRate_int___getCount(v35, (const MethodInfo_3A34C9C *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v35->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v35, Next, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v34 + 6) )
          goto LABEL_41;
        v42 = *(AiBaseEntity_o **)&v34[8 * (int)All + 32];
        if ( AiLogic__checkThinking_44679784(this, aiInfo, v42, turn, *(_DWORD *)(v13 + 20), v41) )
          return v42;
        goto LABEL_37;
      }
LABEL_38:
      if ( v20->fields._size <= 0 )
        return 0LL;
    }
    if ( !v33 )
      goto LABEL_41;
    All = (void *)AiLogic__checkThinking_44679784(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v13 + 20),
                    v32);
    if ( !*((_DWORD *)v34 + 6) )
      goto LABEL_41;
    v42 = (AiBaseEntity_o *)*((_QWORD *)v34 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v42;
LABEL_37:
    System_Collections_Generic_List_object___Remove(
      v20,
      (Il2CppObject *)v42,
      (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  if ( (byte_4BDF14C & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C21E38(&Method_System_Collections_Generic_List_AiInterface__Add__);
    byte_4BDF14C = 1;
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
    sub_1C22094(this, targetList);
  }
  size = targetList->fields._size;
  v21 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    targetList->fields._size = size + 1;
    v22 = &items->obj.klass + size;
    v22[4] = (Il2CppClass *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v21, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall AiLogic__updateThinkGroup(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiState_o *aiState,
        const MethodInfo *method)
{
  AiLogic_o *v6; // x22
  _BOOL4 v7; // w23
  _BOOL4 v8; // w8
  int32_t aiType; // w8
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  System_Collections_Generic_List_object__o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v6 = this;
  if ( (byte_4BDF143 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___77562408);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    this = (AiLogic_o *)sub_1C21E38(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    byte_4BDF143 = 1;
  }
  if ( !aiInfo )
    goto LABEL_19;
  this = (AiLogic_o *)v6->fields._thinkList;
  v7 = v6->fields._aiType != aiInfo->fields.aiType;
  if ( this && this->fields._aiType )
  {
    this = (AiLogic_o *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)this,
                          0,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    if ( !this || !aiState )
      goto LABEL_19;
    v8 = LODWORD(this->fields.Bdata) != aiState->fields.aiGroupId;
  }
  else
  {
    v8 = 1;
  }
  if ( v8 || v7 )
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
      sub_1C22094(this, aiInfo);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           0LL);
LABEL_18:
        v11 = ListFormGroupId;
        v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_56945064(
          v12,
          v11,
          (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___77562408);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v12;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields._thinkList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->fields.aiState, (int64_t)inAiSate, v13, v14, v15, v16, v17, v18);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)v12, (int64_t)inLogicAi, v19, v20, v21, v22, v23, v24);
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
  Il2CppObject *v11; // x23
  __int64 v12; // x1
  void *checkedInfo; // x0
  _DWORD *v14; // x22
  int32_t v15; // w20
  int32_t v16; // w21

  if ( (byte_4BDF150 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
    byte_4BDF150 = 1;
  }
  if ( aiBaseEntity )
  {
    v11 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiBaseEntity_o *, int32_t *, bool *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
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
              v11,
              (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
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
        sub_1C22094(checkedInfo, v12);
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
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDF14F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    byte_4BDF14F = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_1C22094(v7, v8);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void __fastcall AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *klass; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x21

  if ( (byte_4BDF14E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
    byte_4BDF14E = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (PartyOrganizationUtility_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v9,
        (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (PartyOrganizationUtility_c *)v9;
      sub_1C21DDC(p_checkedInfo, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v18 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (Il2CppObject *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)klass,
          v18,
          (Il2CppObject *)inCheckedInfo,
          (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_1C22094(klass, v17);
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
  sub_1C21DDC(v7, (int64_t)inSkillInfo, v9, v10, v11, v12, v13, v14);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF151 & 1) == 0 )
  {
    sub_1C21E38(&AiLogic___c_TypeInfo);
    byte_4BDF151 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AiLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)AiLogic___c_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
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
    sub_1C22094(this, a);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return s->fields.priority == this->fields.priority;
}