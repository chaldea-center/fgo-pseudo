void AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59738FC & 1) == 0 )
  {
    sub_2213A60(&long___TypeInfo);
    byte_59738FC = 1;
  }
  v3 = (struct System_Int64_array *)sub_2213B20(long___TypeInfo, 0);
  this->fields.wkZero = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.wkZero, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AiLogic__INITLOG(AiLogic_o *this, const MethodInfo *method)
{
  ;
}


void AiLogic__Initialize(AiLogic_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_59738F1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59738F1 = 1;
  }
  this->fields.Bdata = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v11);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aiActMst,
    (int32_t)MasterData_object,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool AiLogic__IsNoTargetNoActionTask(
        AiLogic_o *this,
        int32_t type,
        System_Int32_array *opponentTargets,
        System_Int32_array *partyTargets,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL4 v9; // w0

  v6 = opponentTargets;
  if ( type == 3 )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0) )
      goto LABEL_17;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0);
    if ( IsNullOrEmpty )
      goto LABEL_17;
    if ( !v6 )
      goto LABEL_18;
    if ( !LODWORD(v6->max_length) )
      goto LABEL_19;
    if ( (v6->m_Items[0] & 0x80000000) == 0 )
    {
LABEL_17:
      LOBYTE(v9) = 0;
      return v9;
    }
  }
  else
  {
    if ( type != 2 )
    {
      if ( type == 1 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0);
        if ( !IsNullOrEmpty )
        {
          if ( v6 )
          {
            if ( !LODWORD(v6->max_length) )
LABEL_19:
              sub_2213CE4(IsNullOrEmpty);
            return (unsigned int)v6->m_Items[0] >> 31;
          }
LABEL_18:
          sub_2213CDC(IsNullOrEmpty, v8);
        }
      }
      goto LABEL_17;
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0);
    if ( IsNullOrEmpty )
      goto LABEL_17;
  }
  if ( !partyTargets )
    goto LABEL_18;
  v6 = partyTargets;
  if ( !LODWORD(partyTargets->max_length) )
    goto LABEL_19;
  return (unsigned int)v6->m_Items[0] >> 31;
}


void AiLogic__LOG(AiLogic_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool AiLogic__checkThinking(
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
  if ( (byte_59738F3 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_2213A60(&AiLogic_AiInfo_TypeInfo);
    byte_59738F3 = 1;
  }
  if ( !svtData )
    sub_2213CDC(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                       svtData,
                       svtData->klass->vtable._18_getAiState.method,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_2213CCC(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v13, 1, uniqueId, v12, logicAi, procState, v14);
  return AiLogic__checkThinkingBase(v10, v13, procState, timingPriority, v15);
}


bool AiLogic__checkThinkingBase(
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

  if ( (byte_59738F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_2213A60(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_2213A60(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__);
    sub_2213A60(&AiLogic___c__DisplayClass12_0_TypeInfo);
    byte_59738F5 = 1;
  }
  v9 = sub_2213CCC(AiLogic___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = procState, *(_DWORD *)(v9 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v12),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v14 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v14,
                (const MethodInfo_448436C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0 )
  {
    sub_2213CDC(All, v11);
  }
  return All->fields._size > 0;
}


bool AiLogic__checkThinking_53686788(
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
  if ( (byte_59738F4 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_2213A60(&AiLogic_AiInfo_TypeInfo);
    byte_59738F4 = 1;
  }
  if ( !fieldData )
    sub_2213CDC(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_2213CCC(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool AiLogic__checkThinking_53689452(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
  AiLogic_AiInfo_o *v7; // x23
  int32_t Cond; // w20
  System_String_o **v9; // x8
  unsigned __int8 v10; // w24
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  ConditionsInformation_CheckInfo_o *v14; // x0
  ConditionsInformation_CheckInfo_o *v15; // x25
  System_Collections_Generic_List_object__o *v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  const MethodInfo *v20; // x5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  AiLogic_o *v27; // x0
  System_Collections_Generic_List_AiInterface__o *v28; // x1
  bool v29; // w2
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *Bdata; // x8
  AiLogic_o *playerFieldStatus; // x1
  void *v33; // x2
  AiLogic_AiInfo_o *v34; // x3
  int32_t v35; // w4
  AiLogic_o *v36; // x22
  System_Int64_array *wkZero; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Int64_array *v41; // x20
  System_Int64_array *v42; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Int64_array *v45; // x21
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x26
  bool v48; // w21
  _BOOL8 v49; // x0
  __int64 v50; // x1
  bool v51; // w20
  Il2CppObject *v52; // x21
  Il2CppClass *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  Il2CppClass *v57; // x8
  unsigned int v58; // w28
  __int64 v59; // x9
  struct BattleData_o *v60; // x22
  int32_t *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  struct System_Collections_Generic_List_T__o *v64; // x22
  __int64 v65; // x21
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x20
  Il2CppClass *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  Il2CppClass *v73; // x8
  unsigned int v74; // w23
  __int64 v75; // x9
  struct BattleData_o *v76; // x22
  int32_t *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x9
  __int64 v82; // x8
  __int64 v83; // x9
  double *v84; // x10
  double v85; // t1
  _BOOL8 v86; // x0
  __int64 v87; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v90; // x9
  int32_t *p_offset; // x10
  __int64 v92; // x0
  Il2CppClass *v93; // x8
  unsigned int paramater; // w22
  __int64 v95; // x9
  struct BattleData_o *v96; // x28
  int32_t *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  struct System_Collections_Generic_List_T__o *list; // x20
  __int64 v101; // x20
  _BOOL8 v102; // x0
  __int64 v103; // x1
  Il2CppObject *v104; // x28
  Il2CppClass *v105; // x8
  __int64 v106; // x9
  int32_t *v107; // x10
  __int64 v108; // x0
  Il2CppClass *v109; // x8
  unsigned int v110; // w23
  __int64 v111; // x9
  struct BattleData_o *v112; // x22
  int32_t *v113; // x10
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x1
  __int64 v117; // x11
  __int64 v118; // x8
  AiLogic_o *v119; // x22
  _BOOL8 v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x28
  Il2CppClass *v123; // x8
  __int64 v124; // x9
  int32_t *v125; // x10
  __int64 v126; // x0
  Il2CppClass *v127; // x8
  unsigned int v128; // w23
  __int64 v129; // x9
  struct BattleData_o *v130; // x22
  int32_t *v131; // x10
  __int64 v132; // x0
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x11
  __int64 v136; // x8
  char v137; // w0
  char v138; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  AiLogic_AiInfo_o *v141; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v142; // [xsp+18h] [xbp-B8h]
  AiLogic_AiInfo_o *v143; // [xsp+18h] [xbp-B8h]
  AiLogic_o *v144; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v147; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v148; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+50h] [xbp-80h] BYREF

  v7 = aiInfo;
  v147 = this;
  if ( (byte_59738FA & 1) == 0 )
  {
    sub_2213A60(&AiInterface_TypeInfo);
    sub_2213A60(&Ai_COND_TypeInfo);
    sub_2213A60(&ConditionsInformation_TypeInfo);
    sub_2213A60(&double___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Skip_long___);
    sub_2213A60(&Method_System_Linq_Enumerable_Take_long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AiInterface__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiInterface__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiInterface___ctor__);
    sub_2213A60(&System_Collections_Generic_List_AiInterface__TypeInfo);
    sub_2213A60(&StringLiteral_9690/*"NOT_"*/);
    this = (AiLogic_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59738FA = 1;
  }
  memset(&v149, 0, sizeof(v149));
  if ( !aiEnt )
    goto LABEL_256;
  Cond = Ai__getCond(aiEnt->fields.cond, 0);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0);
  if ( !v7 )
    goto LABEL_256;
  v9 = (System_String_o **)&StringLiteral_9690/*"NOT_"*/;
  v10 = (unsigned __int8)this;
  if ( ((unsigned __int8)this & 1) == 0 )
    v9 = (System_String_o **)&StringLiteral_1/*""*/;
  v11 = *v9;
  v148.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v148.fields._index = -1;
  LODWORD(v148.fields._current) = Cond;
  v12 = System_Enum__ToString((System_Enum_o *)&v148, 0);
  System_String__Concat_75651716(v11, v12, 0);
  if ( !*(&ConditionsInformation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo, v13);
  v14 = ConditionsInformation__getCheckFunction(Cond, v13);
  if ( !v14 )
  {
LABEL_250:
    v138 = 0;
    return v138 & 1;
  }
  v15 = v14;
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v15->fields.target )
  {
    case 1:
      if ( !v16 )
        goto LABEL_256;
      items = v16->fields._items;
      aiInfo = (AiLogic_AiInfo_o *)v147->fields.Bdata;
      v24 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_256;
      size = v16->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)aiInfo,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v26[4] = (Il2CppClass *)aiInfo;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v26 + 4),
          (int32_t)aiInfo,
          v17,
          v18,
          v19,
          (int32_t)v20,
          v21,
          v22);
      }
      goto LABEL_85;
    case 2:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, v7->fields.uniqueId, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      else
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, v7->fields.uniqueId, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      playerFieldStatus = this;
      goto LABEL_80;
    case 3:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, v7->fields.uniqueId, 0, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      else
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      goto LABEL_84;
    case 4:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      else
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      goto LABEL_84;
    case 5:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType != 1 )
      {
        if ( !this || !v16 )
          goto LABEL_256;
        playerFieldStatus = (AiLogic_o *)*((_QWORD *)this + 54);
        goto LABEL_80;
      }
      if ( !this )
        goto LABEL_256;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0);
      Bdata = v147->fields.Bdata;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      goto LABEL_23;
    case 6:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0);
        Bdata = v147->fields.Bdata;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_47:
          if ( !Bdata || !v16 )
            goto LABEL_256;
          playerFieldStatus = (AiLogic_o *)Bdata->fields.playerFieldStatus;
        }
        else
        {
LABEL_23:
          if ( !Bdata || !v16 )
            goto LABEL_256;
          playerFieldStatus = (AiLogic_o *)Bdata->fields.enemyFieldStatus;
        }
        v33 = Method_System_Collections_Generic_List_AiInterface__Add__;
      }
      else
      {
        if ( !this || !v16 )
          goto LABEL_256;
        playerFieldStatus = (AiLogic_o *)*((_QWORD *)this + 53);
LABEL_80:
        v33 = Method_System_Collections_Generic_List_AiInterface__Add__;
      }
      sub_1FFEDA8(v16, playerFieldStatus, v33);
      goto LABEL_85;
    case 7:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, v7->fields.uniqueId, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      else
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      goto LABEL_84;
    case 8:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0);
        if ( !v16 )
          goto LABEL_256;
      }
      else
      {
        if ( !this )
          goto LABEL_256;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0);
        if ( !v16 )
          goto LABEL_256;
      }
LABEL_84:
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_85:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0);
      v36 = this;
      wkZero = v147->fields.wkZero;
      if ( v15->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_256;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v38 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_3899AEC *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v38,
                                (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
          v36 = this;
        }
      }
      v141 = v7;
      v142 = (AiLogic_o *)v16;
      if ( !v15->fields.isParams )
      {
        if ( v15->fields.isIndiv )
        {
          if ( !v36 )
            goto LABEL_256;
          if ( v36->fields._aiType >= 2 )
          {
            v43 = System_Linq_Enumerable__Skip_long_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                    1,
                    (const MethodInfo_3899AEC *)Method_System_Linq_Enumerable_Skip_long___);
            v44 = System_Linq_Enumerable__Take_long_(
                    v43,
                    v36->fields._aiType - 1,
                    (const MethodInfo_389A210 *)Method_System_Linq_Enumerable_Take_long___);
            v45 = System_Linq_Enumerable__ToArray_long_(
                    v44,
                    (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
            this = (AiLogic_o *)sub_2213B20(long___TypeInfo, 1);
            if ( !v36->fields._aiType )
              goto LABEL_268;
            if ( !this )
              goto LABEL_256;
            v41 = wkZero;
            wkZero = v45;
            if ( !this->fields._aiType )
LABEL_268:
              sub_2213CE4(this);
            goto LABEL_103;
          }
        }
LABEL_99:
        v144 = v36;
        v42 = wkZero;
        goto LABEL_104;
      }
      if ( !v36 )
        goto LABEL_256;
      if ( v36->fields._aiType < 2 )
        goto LABEL_99;
      v39 = System_Linq_Enumerable__Skip_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v36,
              1,
              (const MethodInfo_3899AEC *)Method_System_Linq_Enumerable_Skip_long___);
      v40 = System_Linq_Enumerable__Take_long_(
              v39,
              v36->fields._aiType - 1,
              (const MethodInfo_389A210 *)Method_System_Linq_Enumerable_Take_long___);
      v41 = System_Linq_Enumerable__ToArray_long_(
              v40,
              (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
      this = (AiLogic_o *)sub_2213B20(long___TypeInfo, 1);
      if ( !v36->fields._aiType )
        goto LABEL_268;
      if ( !this )
        goto LABEL_256;
      if ( !this->fields._aiType )
        goto LABEL_268;
LABEL_103:
      v42 = wkZero;
      wkZero = v41;
      v16 = (System_Collections_Generic_List_object__o *)v142;
      v144 = this;
      this->fields._thinkList = v36->fields._thinkList;
LABEL_104:
      refine = v15->fields.refine;
      func = v15->fields.func;
      if ( !refine )
      {
        if ( !v16 )
          goto LABEL_256;
        System_Collections_Generic_List_object___GetEnumerator(
          &v148,
          v16,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v149 = (System_Collections_Generic_List_Enumerator_object__o)v148;
        v148.fields._list = 0;
        *(_QWORD *)&v148.fields._index = &v149;
        while ( 1 )
        {
          v86 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v149,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v48 = v86;
          if ( !v86 )
            break;
          current = v149.fields._current;
          if ( !v149.fields._current )
            sub_2213CDC(v86, v87);
          klass = v149.fields._current->klass;
          v90 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
          if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v90;
              p_offset += 4;
              if ( !v90 )
                goto LABEL_163;
            }
            v92 = (__int64)&klass->vtable[*p_offset + 1];
          }
          else
          {
LABEL_163:
            v92 = sub_224BC3C(v149.fields._current, AiInterface_TypeInfo, 1);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v92)(
                  current,
                  v15,
                  v42,
                  aiEnt,
                  *(_QWORD *)(v92 + 8))
              & 1) != 0 )
          {
            v93 = current->klass;
            paramater = v15->fields.paramater;
            v95 = *(unsigned __int16 *)&current->klass->_2.rank;
            v96 = v147->fields.Bdata;
            if ( *(_WORD *)&current->klass->_2.rank )
            {
              v97 = &v93->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v97 - 1) != AiInterface_TypeInfo )
              {
                --v95;
                v97 += 4;
                if ( !v95 )
                  goto LABEL_170;
              }
              v98 = (__int64)&v93->vtable[*v97];
            }
            else
            {
LABEL_170:
              v98 = sub_224BC3C(current, AiInterface_TypeInfo, 0);
            }
            v99 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v98)(
                    current,
                    v96,
                    paramater,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v98 + 8));
            if ( !func )
              sub_2213CDC(v99, v99);
            if ( (((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                    func->fields.method_code,
                    v99,
                    v144,
                    func->fields.method)
                & 1) != 0 )
              break;
          }
        }
        list = v148.fields._list;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          *(System_Collections_Generic_List_Enumerator_object__o **)&v148.fields._index,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        if ( list )
          sub_2213CD4(list);
        goto LABEL_247;
      }
      v48 = 0;
      if ( refine == 1 )
      {
        if ( !v16 )
          goto LABEL_256;
        System_Collections_Generic_List_object___GetEnumerator(
          &v148,
          v16,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v149 = (System_Collections_Generic_List_Enumerator_object__o)v148;
        v148.fields._list = 0;
        *(_QWORD *)&v148.fields._index = &v149;
        while ( 1 )
        {
          v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v149,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v51 = v49;
          if ( !v49 )
            break;
          v52 = v149.fields._current;
          if ( !v149.fields._current )
            sub_2213CDC(v49, v50);
          v53 = v149.fields._current->klass;
          v54 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
          if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
          {
            v55 = &v53->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v55 - 1) != AiInterface_TypeInfo )
            {
              --v54;
              v55 += 4;
              if ( !v54 )
                goto LABEL_114;
            }
            v56 = (__int64)&v53->vtable[*v55 + 1];
          }
          else
          {
LABEL_114:
            v56 = sub_224BC3C(v149.fields._current, AiInterface_TypeInfo, 1);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v56)(
                  v52,
                  v15,
                  v42,
                  aiEnt,
                  *(_QWORD *)(v56 + 8))
              & 1) != 0 )
          {
            v57 = v52->klass;
            v58 = v15->fields.paramater;
            v59 = *(unsigned __int16 *)&v52->klass->_2.rank;
            v60 = v147->fields.Bdata;
            if ( *(_WORD *)&v52->klass->_2.rank )
            {
              v61 = &v57->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v61 - 1) != AiInterface_TypeInfo )
              {
                --v59;
                v61 += 4;
                if ( !v59 )
                  goto LABEL_121;
              }
              v62 = (__int64)&v57->vtable[*v61];
            }
            else
            {
LABEL_121:
              v62 = sub_224BC3C(v52, AiInterface_TypeInfo, 0);
            }
            v63 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v62)(
                    v52,
                    v60,
                    v58,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v62 + 8));
            if ( !func )
              sub_2213CDC(v63, v63);
            if ( (((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                    func->fields.method_code,
                    v63,
                    v144,
                    func->fields.method)
                & 1) == 0 )
              break;
          }
        }
        v64 = v148.fields._list;
        v48 = !v51;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          *(System_Collections_Generic_List_Enumerator_object__o **)&v148.fields._index,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        if ( v64 )
          sub_2213CD4(v64);
        goto LABEL_247;
      }
      if ( refine != 2 )
      {
        if ( refine != 3 )
        {
          if ( refine == 4 )
          {
            v65 = sub_2213B20(double___TypeInfo, 1);
            this = v142;
            if ( !v142 )
              goto LABEL_256;
            System_Collections_Generic_List_object___GetEnumerator(
              &v148,
              (System_Collections_Generic_List_object__o *)v142,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
            v149 = (System_Collections_Generic_List_Enumerator_object__o)v148;
            v148.fields._list = 0;
            *(_QWORD *)&v148.fields._index = &v149;
            while ( 1 )
            {
              v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v149,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
              if ( !v66 )
                break;
              v68 = v149.fields._current;
              if ( !v149.fields._current )
                sub_2213CDC(v66, v67);
              v69 = v149.fields._current->klass;
              v70 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
              if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
              {
                v71 = &v69->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v71 - 1) != AiInterface_TypeInfo )
                {
                  --v70;
                  v71 += 4;
                  if ( !v70 )
                    goto LABEL_138;
                }
                v72 = (__int64)&v69->vtable[*v71 + 1];
              }
              else
              {
LABEL_138:
                v72 = sub_224BC3C(v149.fields._current, AiInterface_TypeInfo, 1);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v72)(
                      v68,
                      v15,
                      v42,
                      aiEnt,
                      *(_QWORD *)(v72 + 8))
                  & 1) != 0 )
              {
                v73 = v68->klass;
                v74 = v15->fields.paramater;
                v75 = *(unsigned __int16 *)&v68->klass->_2.rank;
                v76 = v147->fields.Bdata;
                if ( *(_WORD *)&v68->klass->_2.rank )
                {
                  v77 = &v73->_1.interfaceOffsets->offset;
                  while ( *((AiInterface_c **)v77 - 1) != AiInterface_TypeInfo )
                  {
                    --v75;
                    v77 += 4;
                    if ( !v75 )
                      goto LABEL_145;
                  }
                  v78 = (__int64)&v73->vtable[*v77];
                }
                else
                {
LABEL_145:
                  v78 = sub_224BC3C(v68, AiInterface_TypeInfo, 0);
                }
                v79 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v78)(
                        v68,
                        v76,
                        v74,
                        (unsigned int)turn,
                        (unsigned int)actcnt,
                        wkZero,
                        aiEnt,
                        *(_QWORD *)(v78 + 8));
                if ( !v79 )
                  sub_2213CDC(0, v80);
                v81 = *(_QWORD *)(v79 + 24);
                if ( (int)v81 >= 1 )
                {
                  v82 = (unsigned int)v81 & ~((int)v81 >> 31);
                  v83 = (unsigned int)*(_QWORD *)(v79 + 24);
                  v84 = (double *)(v79 + 32);
                  do
                  {
                    if ( !v83 )
                      sub_2213CE4(v79);
                    if ( !v65 )
                      sub_2213CDC(v79, v80);
                    if ( !*(_DWORD *)(v65 + 24) )
                      sub_2213CE4(v79);
                    v85 = *v84++;
                    --v82;
                    --v83;
                    *(double *)(v65 + 32) = v85 + *(double *)(v65 + 32);
                  }
                  while ( v82 );
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v149,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
            if ( !func )
              goto LABEL_256;
            v137 = ((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                     func->fields.method_code,
                     v65,
                     v144,
                     func->fields.method);
LABEL_246:
            v48 = v137;
          }
          goto LABEL_247;
        }
        v101 = sub_2213B20(double___TypeInfo, 0);
        this = v142;
        if ( !v142 )
          goto LABEL_256;
        System_Collections_Generic_List_object___GetEnumerator(
          &v148,
          (System_Collections_Generic_List_object__o *)v142,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v149 = (System_Collections_Generic_List_Enumerator_object__o)v148;
        v148.fields._list = 0;
        *(_QWORD *)&v148.fields._index = &v149;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_178:
              v102 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v149,
                       (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
              if ( !v102 )
              {
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v149,
                  (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
                if ( !v101 )
                  goto LABEL_256;
                if ( *(_QWORD *)(v101 + 24) )
                {
                  if ( func )
                  {
                    v137 = ((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                             func->fields.method_code,
                             v101,
                             v144,
                             func->fields.method);
                    goto LABEL_246;
                  }
LABEL_256:
                  sub_2213CDC(this, aiInfo);
                }
                goto LABEL_247;
              }
              v104 = v149.fields._current;
              if ( !v149.fields._current )
                sub_2213CDC(v102, v103);
              v105 = v149.fields._current->klass;
              v106 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
              if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
              {
                v107 = &v105->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v107 - 1) != AiInterface_TypeInfo )
                {
                  --v106;
                  v107 += 4;
                  if ( !v106 )
                    goto LABEL_184;
                }
                v108 = (__int64)&v105->vtable[*v107 + 1];
              }
              else
              {
LABEL_184:
                v108 = sub_224BC3C(v149.fields._current, AiInterface_TypeInfo, 1);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v108)(
                      v104,
                      v15,
                      v42,
                      aiEnt,
                      *(_QWORD *)(v108 + 8))
                  & 1) != 0 )
              {
                v109 = v104->klass;
                v110 = v15->fields.paramater;
                v111 = *(unsigned __int16 *)&v104->klass->_2.rank;
                v112 = v147->fields.Bdata;
                if ( *(_WORD *)&v104->klass->_2.rank )
                {
                  v113 = &v109->_1.interfaceOffsets->offset;
                  while ( *((AiInterface_c **)v113 - 1) != AiInterface_TypeInfo )
                  {
                    --v111;
                    v113 += 4;
                    if ( !v111 )
                      goto LABEL_191;
                  }
                  v114 = (__int64)&v109->vtable[*v113];
                }
                else
                {
LABEL_191:
                  v114 = sub_224BC3C(v104, AiInterface_TypeInfo, 0);
                }
                v115 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v114)(
                         v104,
                         v112,
                         v110,
                         (unsigned int)turn,
                         (unsigned int)actcnt,
                         wkZero,
                         aiEnt,
                         *(_QWORD *)(v114 + 8));
                if ( !v115 )
                  sub_2213CDC(0, v116);
                v117 = *(_QWORD *)(v115 + 24);
                if ( v117 )
                  break;
              }
            }
            if ( !v101 )
              sub_2213CDC(v115, v116);
            if ( *(_QWORD *)(v101 + 24) )
              break;
LABEL_204:
            v101 = v115;
          }
          if ( (int)v117 >= 1 )
          {
            v118 = 0;
            while ( 1 )
            {
              if ( v118 < *(int *)(v101 + 24) )
              {
                if ( !*(_DWORD *)(v101 + 24) )
                  sub_2213CE4(v115);
                if ( *(double *)(v115 + 8 * v118 + 32) < *(double *)(v101 + 8 * v118 + 32) )
                  goto LABEL_204;
              }
              if ( (unsigned int)*(_QWORD *)(v115 + 24) == ++v118 )
                goto LABEL_178;
            }
          }
        }
      }
      this = (AiLogic_o *)sub_2213B20(double___TypeInfo, 0);
      if ( !v16 )
        goto LABEL_256;
      v119 = this;
      System_Collections_Generic_List_object___GetEnumerator(
        &v148,
        v16,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v149 = (System_Collections_Generic_List_Enumerator_object__o)v148;
      v148.fields._list = 0;
      *(_QWORD *)&v148.fields._index = &v149;
LABEL_207:
      v143 = (AiLogic_AiInfo_o *)v119;
      while ( 1 )
      {
        v120 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v149,
                 (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v120 )
          break;
        v122 = v149.fields._current;
        if ( !v149.fields._current )
          sub_2213CDC(v120, v121);
        v123 = v149.fields._current->klass;
        v124 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
        if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
        {
          v125 = &v123->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v125 - 1) != AiInterface_TypeInfo )
          {
            --v124;
            v125 += 4;
            if ( !v124 )
              goto LABEL_214;
          }
          v126 = (__int64)&v123->vtable[*v125 + 1];
        }
        else
        {
LABEL_214:
          v126 = sub_224BC3C(v149.fields._current, AiInterface_TypeInfo, 1);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v126)(
                v122,
                v15,
                v42,
                aiEnt,
                *(_QWORD *)(v126 + 8))
            & 1) != 0 )
        {
          v127 = v122->klass;
          v128 = v15->fields.paramater;
          v129 = *(unsigned __int16 *)&v122->klass->_2.rank;
          v130 = v147->fields.Bdata;
          if ( *(_WORD *)&v122->klass->_2.rank )
          {
            v131 = &v127->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v131 - 1) != AiInterface_TypeInfo )
            {
              --v129;
              v131 += 4;
              if ( !v129 )
                goto LABEL_221;
            }
            v132 = (__int64)&v127->vtable[*v131];
          }
          else
          {
LABEL_221:
            v132 = sub_224BC3C(v122, AiInterface_TypeInfo, 0);
          }
          v133 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v132)(
                   v122,
                   v130,
                   v128,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   wkZero,
                   aiEnt,
                   *(_QWORD *)(v132 + 8));
          if ( !v133 )
            sub_2213CDC(0, v134);
          v135 = *(_QWORD *)(v133 + 24);
          if ( v135 )
          {
            v119 = (AiLogic_o *)v143;
            if ( !v143 )
              sub_2213CDC(v133, v134);
            if ( !v143->fields.aiState )
              v119 = (AiLogic_o *)v133;
            if ( (int)v135 >= 1 )
            {
              v136 = 0;
              while ( 1 )
              {
                if ( v136 < v119->fields._aiType )
                {
                  if ( !v119->fields._aiType )
                    sub_2213CE4(v133);
                  if ( *((double *)&v119->fields._thinkList + v136) < *(double *)(v133 + 8 * v136 + 32) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v133 + 24) == ++v136 )
                  goto LABEL_207;
              }
              v119 = (AiLogic_o *)v133;
            }
            goto LABEL_207;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v149,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      aiInfo = v143;
      if ( !v143 )
        goto LABEL_256;
      if ( v143->fields.aiState )
      {
        if ( func )
        {
          v137 = ((__int64 (__fastcall *)(intptr_t, AiLogic_AiInfo_o *, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                   func->fields.method_code,
                   v143,
                   v144,
                   func->fields.method);
          goto LABEL_246;
        }
        goto LABEL_256;
      }
LABEL_247:
      v138 = v10 ^ v48;
      if ( ((v10 ^ v48) & 1) != 0 )
      {
        logicAi = v141->fields.logicAi;
        if ( logicAi )
        {
          if ( (((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, const MethodInfo *))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr)(
                  logicAi,
                  v141,
                  aiEnt,
                  logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method)
              & 1) == 0 )
            goto LABEL_250;
        }
      }
      return v138 & 1;
    case 9:
      v27 = v147;
      v28 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v29 = 1;
      goto LABEL_60;
    case 0xA:
      v27 = v147;
      v28 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v29 = 1;
      goto LABEL_52;
    case 0xB:
      v27 = v147;
      v28 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v29 = 1;
      goto LABEL_58;
    case 0xC:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( !this )
        goto LABEL_256;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0);
      if ( !v16 )
        goto LABEL_256;
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( !this )
        goto LABEL_256;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0);
      System_Collections_Generic_List_object___AddRange(
        v16,
        FieldEnemyServantList,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_85;
    case 0xD:
      v27 = v147;
      v28 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v29 = 0;
LABEL_60:
      v34 = v7;
      v35 = 0;
      goto LABEL_61;
    case 0xE:
      v27 = v147;
      v28 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v29 = 0;
LABEL_52:
      v34 = v7;
      v35 = 1;
      goto LABEL_61;
    case 0xF:
      v27 = v147;
      v28 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v29 = 0;
LABEL_58:
      v34 = v7;
      v35 = 2;
LABEL_61:
      AiLogic__getTargetPosServant(v27, v28, v29, v34, v35, v20);
      goto LABEL_85;
    default:
      goto LABEL_85;
  }
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *AiLogic__getAction(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w4
  const MethodInfo *v27; // x6
  AiEntity_o *result; // x0
  __int64 naturalAligment; // x10

  v15 = this;
  if ( (byte_59738F6 & 1) == 0 )
  {
    sub_2213A60(&AiEntity_TypeInfo);
    this = (AiLogic_o *)sub_2213A60(&AiLogic_AiInfo_TypeInfo);
    byte_59738F6 = 1;
  }
  if ( !svtData )
    sub_2213CDC(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v17 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.methodPtr)(
                       svtData,
                       svtData->klass->vtable._18_getAiState.method,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v18 = (AiLogic_AiInfo_o *)sub_2213CCC(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v18, 1, uniqueId, v17, logicAi, procState, v19);
  *info = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)info, (int32_t)v18, v20, v21, v22, v23, v24, v25);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v26, timingPriority, v27);
  if ( result )
  {
    naturalAligment = AiEntity_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (AiEntity_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != AiEntity_TypeInfo )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
AiBaseEntity_o *AiLogic__getActionBase(
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
  AiState_o *v13; // x2
  const MethodInfo *v14; // x6
  int v15; // w29
  AiBaseEntity_o *BasicAct; // x21
  AiLogic_o *v17; // x26
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  int32_t v21; // w8
  UnityEngine_Object_c *v22; // x0
  UnityEngine_Object_o *Bdata; // x26
  int v24; // w9
  struct BattleData_o *v25; // x8
  UnityEngine_Object_o *v26; // x22
  struct BattleData_o *v27; // x22
  int32_t playerNpCount; // w23
  struct BattleData_o *v29; // x8
  struct BattleData_o *v30; // x8

  v11 = this;
  if ( (byte_59738F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    this = (AiLogic_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59738F8 = 1;
  }
  if ( !aiInfo )
    goto LABEL_36;
  aiState = aiInfo->fields.aiState;
  if ( procState == 1 )
  {
    if ( !aiState )
      goto LABEL_36;
    v13 = aiInfo->fields.aiState;
    ++aiState->fields.actCount;
    AiLogic__updateThinkGroup(v11, aiInfo, v13, *(const MethodInfo **)&turnCount);
  }
  else
  {
    AiLogic__updateThinkGroup(v11, aiInfo, aiInfo->fields.aiState, *(const MethodInfo **)&turnCount);
    if ( !aiState )
      goto LABEL_36;
  }
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
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_36;
    v17 = this;
    if ( AiActEntity__isThinkEnd((AiActEntity_o *)this, 0) )
      break;
    if ( HIDWORD(v17->fields.Bdata) == 99 )
    {
      v21 = AiBaseEntity__getChangeAiId(BasicAct, 0);
      v22 = UnityEngine_Object_TypeInfo;
      Bdata = (UnityEngine_Object_o *)v11->fields.Bdata;
      aiState->fields.aiGroupId = v21;
      v24 = *(&v22->_2.cctor_finished + 1);
      aiState->fields.actCount = 0;
      if ( !v24 )
        j_il2cpp_runtime_class_init_0(v22, v20);
      this = (AiLogic_o *)UnityEngine_Object__op_Inequality(Bdata, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = v11->fields.Bdata;
        if ( !v25 )
          goto LABEL_36;
        this = (AiLogic_o *)v25->fields.battleEvent;
        if ( !this )
          goto LABEL_36;
        ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
          this,
          aiState,
          BasicAct,
          this->klass[1].vtable._3_ToString.methodPtr);
      }
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v19);
    --v15;
  }
  while ( v15 );
  v26 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0);
    if ( (_DWORD)this )
    {
      v27 = v11->fields.Bdata;
      if ( !v27 )
        goto LABEL_36;
      playerNpCount = v27->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0);
      v29 = v11->fields.Bdata;
      v27->fields.playerNpCount = (_DWORD)this + playerNpCount;
      if ( !v29 )
        goto LABEL_36;
      if ( v29->fields.playerNpCount < 0 )
        v29->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, 0);
    v30 = v11->fields.Bdata;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_36;
      v30->fields.playerNpCount = 0;
    }
    else if ( !v30 )
    {
      goto LABEL_36;
    }
    this = (AiLogic_o *)v30->fields.battleEvent;
    if ( this )
    {
      ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
        this,
        aiState,
        BasicAct,
        this->klass[1].vtable._3_ToString.methodPtr);
      return BasicAct;
    }
LABEL_36:
    sub_2213CDC(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *AiLogic__getAction_53687868(
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
  __int64 naturalAligment; // x10

  v13 = this;
  if ( (byte_59738F7 & 1) == 0 )
  {
    sub_2213A60(&AiFieldEntity_TypeInfo);
    this = (AiLogic_o *)sub_2213A60(&AiLogic_AiInfo_TypeInfo);
    byte_59738F7 = 1;
  }
  if ( !fieldData )
    sub_2213CDC(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v16 = (AiLogic_AiInfo_o *)sub_2213CCC(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v16, 2, index, aiState, logicAi, procState, v17);
  result = (AiFieldEntity_o *)AiLogic__getActionBase(v13, v16, procState, turnCount, v18, timingPriority, v19);
  if ( result )
  {
    naturalAligment = AiFieldEntity_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (AiFieldEntity_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != AiFieldEntity_TypeInfo )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


AiBaseEntity_o *AiLogic__getBasicAct(
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
  System_Collections_Generic_List_AiBaseEntity__c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  System_Collections_Generic_List_object__o *thinkList; // x23
  System_Predicate_object__o *v19; // x24
  AiLogic___c_c *v20; // x8
  System_Collections_Generic_List_object__o *v21; // x23
  struct AiLogic___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__16_1; // x24
  Il2CppObject *v24; // x25
  struct AiLogic___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x24
  int v33; // w8
  System_Predicate_AiBaseEntity__c *v34; // x0
  System_Predicate_object__o *v35; // x25
  const MethodInfo *v36; // x5
  int v37; // w8
  char *v38; // x24
  WeightRate_int__o *v39; // x25
  const MethodInfo *v40; // x5
  __int64 v41; // x8
  unsigned __int64 v42; // x26
  char *v43; // x29
  unsigned __int64 v44; // x8
  __int64 v45; // x8
  int32_t Next; // w0
  const MethodInfo *v47; // x5
  AiBaseEntity_o *v48; // x24

  if ( (byte_59738F9 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_AiBaseEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    sub_2213A60(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_2213A60(&Method_AiLogic___c__getBasicAct_b__16_1__);
    sub_2213A60(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__);
    sub_2213A60(&AiLogic___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__);
    sub_2213A60(&AiLogic___c__DisplayClass16_1_TypeInfo);
    sub_2213A60(&AiLogic___c_TypeInfo);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getCount__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_59738F9 = 1;
  }
  v13 = sub_2213CCC(AiLogic___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_46;
  *(_DWORD *)(v13 + 16) = procState;
  *(_DWORD *)(v13 + 20) = actcnt;
  v16 = System_Collections_Generic_List_AiBaseEntity__TypeInfo;
  *(_DWORD *)(v13 + 24) = timingPriority;
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v19 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_object____ctor(v19, (Il2CppObject *)v13, Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, 0);
  if ( !thinkList )
    goto LABEL_46;
  All = System_Collections_Generic_List_object___FindAll(
          thinkList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v20 = AiLogic___c_TypeInfo;
  v21 = (System_Collections_Generic_List_object__o *)All;
  if ( !*(&AiLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo, v15);
    v20 = AiLogic___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__16_1 = (System_Comparison_T__o *)static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v15);
      static_fields = AiLogic___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__16_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__16_1, v24, Method_AiLogic___c__getBasicAct_b__16_1__, 0);
    v25 = AiLogic___c_TypeInfo->static_fields;
    v25->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__16_1, (int32_t)_9__16_1, v26, v27, v28, v29, v30, v31);
  }
  if ( !v21 )
LABEL_46:
    sub_2213CDC(All, v15);
  System_Collections_Generic_List_object___Sort_71849708(
    v21,
    _9__16_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v21->fields._size >= 1 )
  {
    while ( 1 )
    {
      v32 = sub_2213CCC(AiLogic___c__DisplayClass16_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v32, 0);
      if ( v21->fields._size < 1 )
        return 0;
      All = System_Collections_Generic_List_object___get_Item(
              v21,
              0,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_46;
      if ( !v32 )
        goto LABEL_46;
      v33 = *((_DWORD *)All + 7);
      v34 = System_Predicate_AiBaseEntity__TypeInfo;
      *(_DWORD *)(v32 + 16) = v33;
      v35 = (System_Predicate_object__o *)sub_2213CCC(v34);
      System_Predicate_object____ctor(
        v35,
        (Il2CppObject *)v32,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0);
      All = System_Collections_Generic_List_object___FindAll(
              v21,
              (System_Predicate_T__o *)v35,
              (const MethodInfo_448436C *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_46;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_46;
      v37 = *((_DWORD *)All + 6);
      v38 = (char *)All;
      if ( v37 <= 1 )
        break;
      v39 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v39, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
      v41 = *((_QWORD *)v38 + 3);
      if ( (int)v41 >= 1 )
      {
        v42 = 0;
        v43 = v38 + 32;
        while ( v42 < (unsigned int)v41 )
        {
          All = (void *)AiLogic__checkThinking_53689452(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v43[8 * v42],
                          turn,
                          *(_DWORD *)(v13 + 20),
                          v40);
          v44 = *((unsigned int *)v38 + 6);
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( v42 >= v44 )
              goto LABEL_45;
            v45 = *(_QWORD *)&v43[8 * v42];
            if ( !v45 || !v39 )
              goto LABEL_46;
            WeightRate_int___setWeight(
              v39,
              *(_DWORD *)(v45 + 32),
              v42,
              (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            if ( v42 >= v44 )
              goto LABEL_45;
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v21,
                            *(Il2CppObject **)&v43[8 * v42],
                            (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v41) = *((_DWORD *)v38 + 6);
          if ( (__int64)++v42 >= (int)v41 )
            goto LABEL_30;
        }
        goto LABEL_45;
      }
LABEL_30:
      if ( !v39 )
        goto LABEL_46;
      if ( WeightRate_int___getCount(v39, (const MethodInfo_3DA15D4 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v39->fields.totalweight, 0);
        All = (void *)WeightRate_int___getData(v39, Next, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v38 + 6) )
          goto LABEL_45;
        v48 = *(AiBaseEntity_o **)&v38[8 * (int)All + 32];
        if ( AiLogic__checkThinking_53689452(this, aiInfo, v48, turn, *(_DWORD *)(v13 + 20), v47) )
          return v48;
LABEL_39:
        System_Collections_Generic_List_object___Remove(
          v21,
          (Il2CppObject *)v48,
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
      }
      if ( v21->fields._size <= 0 )
        return 0;
    }
    if ( !v37 )
      goto LABEL_45;
    All = (void *)AiLogic__checkThinking_53689452(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v13 + 20),
                    v36);
    if ( ((unsigned __int8)All & 1) != 0 )
    {
      if ( *((_DWORD *)v38 + 6) )
        return (AiBaseEntity_o *)*((_QWORD *)v38 + 4);
LABEL_45:
      sub_2213CE4(All);
    }
    if ( !*((_DWORD *)v38 + 6) )
      goto LABEL_45;
    v48 = (AiBaseEntity_o *)*((_QWORD *)v38 + 4);
    goto LABEL_39;
  }
  return 0;
}


void AiLogic__getTargetPosServant(
        AiLogic_o *this,
        System_Collections_Generic_List_AiInterface__o *targetList,
        bool isOpponent,
        AiLogic_AiInfo_o *aiInfo,
        int32_t pos,
        const MethodInfo *method)
{
  AiLogic_o *v10; // x21
  char v11; // w8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct AiInterface_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  AiLogic_o *v21; // x1
  Il2CppClass **v22; // x0

  v10 = this;
  if ( (byte_59738FB & 1) == 0 )
  {
    this = (AiLogic_o *)sub_2213A60(&Method_System_Collections_Generic_List_AiInterface__Add__);
    byte_59738FB = 1;
  }
  if ( !aiInfo )
    goto LABEL_16;
  if ( aiInfo->fields.aiType == 1 )
  {
    this = (AiLogic_o *)v10->fields.Bdata;
    if ( !this )
      goto LABEL_16;
    v11 = BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0) ^ isOpponent;
  }
  else
  {
    v11 = !isOpponent;
  }
  this = (AiLogic_o *)v10->fields.Bdata;
  if ( !this )
    goto LABEL_16;
  this = (AiLogic_o *)BattleData__getServantDataFromIndex((BattleData_o *)this, pos, v11 & 1, 0);
  if ( !this )
    return;
  if ( !targetList
    || (items = targetList->fields._items,
        v19 = Method_System_Collections_Generic_List_AiInterface__Add__,
        ++targetList->fields._version,
        !items) )
  {
LABEL_16:
    sub_2213CDC(this, targetList);
  }
  size = targetList->fields._size;
  v21 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    targetList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
  }
}


void AiLogic__updateThinkGroup(AiLogic_o *this, AiLogic_AiInfo_o *aiInfo, AiState_o *aiState, const MethodInfo *method)
{
  AiLogic_o *v6; // x22
  _BOOL4 v7; // w23
  _BOOL4 v8; // w8
  int32_t aiType; // w8
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x21
  System_Collections_Generic_List_object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v6 = this;
  if ( (byte_59738F2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___91638040);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    this = (AiLogic_o *)sub_2213A60(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    byte_59738F2 = 1;
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
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
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
                                                                           0);
        goto LABEL_18;
      }
LABEL_19:
      sub_2213CDC(this, aiInfo);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           0);
LABEL_18:
        v11 = ListFormGroupId;
        v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_71841080(
          v12,
          v11,
          (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___91638040);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v12;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v6->fields._thinkList,
          (int32_t)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        return;
      }
      goto LABEL_19;
    }
  }
}


void AiLogic_AiInfo___ctor(
        AiLogic_AiInfo_o *this,
        int32_t inAiType,
        int32_t inUniqueId,
        AiState_o *inAiSate,
        BattleLogicBaseAi_o *inLogicAi,
        int32_t inProcState,
        const MethodInfo *method)
{
  AiLogic_AiInfo_o *v12; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields.aiType = inAiType;
  v12->fields.uniqueId = inUniqueId;
  v12->fields.aiState = inAiSate;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.aiState, (int32_t)inAiSate, v13, v14, v15, v16, v17, v18);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v12, (int32_t)inLogicAi, v19, v20, v21, v22, v23, v24);
  LODWORD(v12->monitor) = inProcState;
}


bool AiLogic_AiInfo__CheckAiCanActionFromTargets(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  struct BattleLogicBaseAi_o *logicAi; // x0

  logicAi = this->fields.logicAi;
  return !logicAi
      || ((bool (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, const MethodInfo *))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr)(
           logicAi,
           this,
           aiBaseEntity,
           logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method);
}


void AiLogic_AiInfo__GetCheckedResult(
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
  int32_t v14; // w8
  _DWORD *v15; // x20
  int32_t v16; // w21
  int32_t v17; // w22

  if ( (byte_59738FF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
    byte_59738FF = 1;
  }
  if ( aiBaseEntity )
  {
    v11 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *, AiBaseEntity_o *, int32_t *, bool *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                            aiBaseEntity,
                            aiBaseEntity->klass->vtable._4_get_PrimaryKey.method,
                            aiBaseEntity,
                            aiActType,
                            noMessage,
                            method);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0) )
    {
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
              v11,
              (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      v14 = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      *aiActType = v14;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      v15 = (_DWORD *)*((_QWORD *)checkedInfo + 3);
      if ( !v15 )
        return;
      v16 = v15[4];
      v17 = v15[5];
      checkedInfo = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 392LL))(
                              *((_QWORD *)checkedInfo + 3),
                              *(_QWORD *)(*(_QWORD *)v15 + 400LL));
      if ( !svtData )
LABEL_17:
        sub_2213CDC(checkedInfo, v12);
      BattleServantData__addSkillInfo(svtData, v16, v17, (int32_t)checkedInfo, v15[9], -1, -1, 0, 0);
    }
  }
}


bool AiLogic_AiInfo__IsChecked(AiLogic_AiInfo_o *this, AiBaseEntity_o *aiBaseEntity, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_59738FE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    byte_59738FE = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._4_get_PrimaryKey.method);
  if ( !checkedInfo )
    sub_2213CDC(v7, v8);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *klass; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x21

  if ( (byte_59738FD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
    byte_59738FD = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v9,
        (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (MissionNaviTransitionBoardItem_c *)v9;
      sub_2213A04(p_checkedInfo, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._4_get_PrimaryKey.method,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v18 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
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
          (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_2213CDC(klass, v17);
  }
}


void AiLogic_AiInfo_CheckedInfo___ctor(
        AiLogic_AiInfo_CheckedInfo_o *this,
        int32_t inActType,
        bool inNoMessage,
        BattleSkillInfoData_o *inSkillInfo,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.tempSkillInfo = inSkillInfo;
  this->fields.actType = inActType;
  this->fields.noMessage = inNoMessage;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tempSkillInfo,
    (int32_t)inSkillInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void AiLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973900 & 1) == 0 )
  {
    sub_2213A60(&AiLogic___c_TypeInfo);
    byte_5973900 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AiLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AiLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiLogic___c___ctor(AiLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AiLogic___c___getBasicAct_b__16_1(
        AiLogic___c_o *this,
        AiBaseEntity_o *a,
        AiBaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


void AiLogic___c__DisplayClass12_0___ctor(AiLogic___c__DisplayClass12_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AiLogic___c__DisplayClass12_0___checkThinkingBase_b__0(
        AiLogic___c__DisplayClass12_0_o *this,
        AiBaseEntity_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return ((bool (__fastcall *)(AiBaseEntity_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._6_isTiming.methodPtr)(
           s,
           (unsigned int)this->fields.procState,
           0,
           (unsigned int)this->fields.timingPriority,
           s->klass->vtable._6_isTiming.method);
}


void AiLogic___c__DisplayClass16_0___ctor(AiLogic___c__DisplayClass16_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AiLogic___c__DisplayClass16_0___getBasicAct_b__0(
        AiLogic___c__DisplayClass16_0_o *this,
        AiBaseEntity_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return ((bool (__fastcall *)(AiBaseEntity_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._6_isTiming.methodPtr)(
           s,
           (unsigned int)this->fields.procState,
           (unsigned int)this->fields.actcnt,
           (unsigned int)this->fields.timingPriority,
           s->klass->vtable._6_isTiming.method);
}


void AiLogic___c__DisplayClass16_1___ctor(AiLogic___c__DisplayClass16_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AiLogic___c__DisplayClass16_1___getBasicAct_b__2(
        AiLogic___c__DisplayClass16_1_o *this,
        AiBaseEntity_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.priority == this->fields.priority;
}