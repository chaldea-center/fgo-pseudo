void AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C59D1C & 1) == 0 )
  {
    sub_1C3E564(&long___TypeInfo);
    byte_4C59D1C = 1;
  }
  v3 = (struct System_Int64_array *)sub_1C3E60C(long___TypeInfo, 0);
  this->fields.wkZero = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.wkZero, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AiLogic__INITLOG(AiLogic_o *this, const MethodInfo *method)
{
  ;
}


void AiLogic__Initialize(AiLogic_o *this, BattleData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C59D11 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59D11 = 1;
  }
  this->fields.Bdata = data;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v9, v10);
}


bool AiLogic__IsNoTargetNoActionTask(
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
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0) )
        break;
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0);
      if ( IsNullOrEmpty )
        break;
      if ( !opponentTargets )
        goto LABEL_19;
      if ( !LODWORD(opponentTargets->max_length) )
        goto LABEL_20;
      if ( (opponentTargets->m_Items[0] & 0x80000000) == 0 )
        break;
LABEL_15:
      if ( partyTargets )
      {
        if ( LODWORD(partyTargets->max_length) )
        {
          v9 = partyTargets->m_Items[0];
          return v9 >> 31;
        }
LABEL_20:
        sub_1C3E7C8(IsNullOrEmpty, v8);
      }
LABEL_19:
      sub_1C3E7C0(IsNullOrEmpty, v8);
    case 2:
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)partyTargets, 0);
      if ( IsNullOrEmpty )
        break;
      goto LABEL_15;
    case 1:
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)opponentTargets, 0);
      if ( !IsNullOrEmpty )
      {
        if ( opponentTargets )
        {
          if ( LODWORD(opponentTargets->max_length) )
          {
            v9 = opponentTargets->m_Items[0];
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
  if ( (byte_4C59D13 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C3E564(&AiLogic_AiInfo_TypeInfo);
    byte_4C59D13 = 1;
  }
  if ( !svtData )
    sub_1C3E7C0(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                       svtData,
                       svtData->klass->vtable._18_getAiState.method,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_1C3E7B0(AiLogic_AiInfo_TypeInfo);
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

  if ( (byte_4C59D15 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C3E564(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_1C3E564(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__);
    sub_1C3E564(&AiLogic___c__DisplayClass12_0_TypeInfo);
    byte_4C59D15 = 1;
  }
  v9 = sub_1C3E7B0(AiLogic___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = procState, *(_DWORD *)(v9 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v12),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v14 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v14,
                (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0 )
  {
    sub_1C3E7C0(All, v11);
  }
  return All->fields._size > 0;
}


bool AiLogic__checkThinking_46695132(
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
  if ( (byte_4C59D14 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C3E564(&AiLogic_AiInfo_TypeInfo);
    byte_4C59D14 = 1;
  }
  if ( !fieldData )
    sub_1C3E7C0(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_1C3E7B0(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool AiLogic__checkThinking_46697752(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x5
  int32_t v20; // w4
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *Bdata; // x8
  AiLogic_o *v23; // x0
  System_Collections_Generic_List_AiInterface__o *v24; // x1
  bool v25; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  AiLogic_o *v32; // x21
  System_Int64_array *wkZero; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_List_object__o *v38; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Int64_array *v41; // x20
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x24
  bool v44; // w21
  _BOOL8 v45; // x0
  __int64 v46; // x1
  bool v47; // w20
  Il2CppObject *v48; // x27
  Il2CppClass *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  Il2CppClass *v53; // x8
  unsigned int v54; // w22
  struct BattleData_o *v55; // x23
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  _BOOL8 v60; // x0
  __int64 v61; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 v66; // x0
  Il2CppClass *v67; // x8
  unsigned int paramater; // w27
  struct BattleData_o *v69; // x22
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  System_Collections_Generic_List_object__o *v74; // x9
  AiLogic_o *v75; // x20
  _BOOL8 v76; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x21
  Il2CppClass *v79; // x8
  __int64 v80; // x9
  int32_t *v81; // x10
  __int64 v82; // x0
  Il2CppClass *v83; // x8
  unsigned int v84; // w22
  struct BattleData_o *v85; // x23
  __int64 v86; // x9
  int32_t *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x8
  __int64 v92; // x9
  double *v93; // x10
  double v94; // t1
  AiLogic_AiInfo_o *v95; // x29
  _BOOL8 v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x27
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
  __int64 v111; // x11
  unsigned __int64 aiState_low; // x10
  unsigned __int64 v113; // x9
  AiLogic_o *v114; // x22
  _BOOL8 v115; // x0
  __int64 v116; // x1
  Il2CppObject *v117; // x27
  Il2CppClass *v118; // x8
  __int64 v119; // x9
  int32_t *v120; // x10
  __int64 v121; // x0
  Il2CppClass *v122; // x8
  unsigned int v123; // w22
  struct BattleData_o *v124; // x23
  __int64 v125; // x9
  int32_t *v126; // x10
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  __int64 v130; // x11
  unsigned __int64 aiType; // x10
  unsigned __int64 v132; // x9
  struct AiState_o *aiState; // x8
  char v134; // w0
  char v135; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  System_Collections_Generic_List_object__o *v138; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v139; // [xsp+0h] [xbp-D0h]
  AiLogic_AiInfo_o *v140; // [xsp+8h] [xbp-C8h]
  unsigned __int8 v141; // [xsp+10h] [xbp-C0h]
  AiLogic_AiInfo_o *v142; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v143; // [xsp+18h] [xbp-B8h]
  System_Int64_array *v144; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v147; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v148; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v149; // [xsp+50h] [xbp-80h] BYREF

  v7 = aiInfo;
  v147 = this;
  if ( (byte_4C59D1A & 1) == 0 )
  {
    sub_1C3E564(&AiInterface_TypeInfo);
    sub_1C3E564(&Ai_COND_TypeInfo);
    sub_1C3E564(&ConditionsInformation_TypeInfo);
    sub_1C3E564(&double___TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Skip_long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Take_long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiInterface__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiInterface__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiInterface___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_AiInterface__TypeInfo);
    sub_1C3E564(&StringLiteral_9304/*"NOT_"*/);
    this = (AiLogic_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C59D1A = 1;
  }
  memset(&v149, 0, sizeof(v149));
  if ( !aiEnt )
    goto LABEL_260;
  Cond = Ai__getCond(aiEnt->fields.cond, 0);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0);
  if ( !v7 )
    goto LABEL_260;
  v9 = (System_String_o **)&StringLiteral_9304/*"NOT_"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v9 = (System_String_o **)&StringLiteral_1/*""*/;
  v10 = *v9;
  v11 = (unsigned __int8)this;
  v148.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v148.fields._index = -1;
  LODWORD(v148.fields._current) = Cond;
  v12 = System_Enum__ToString((System_Enum_o *)&v148, 0);
  System_String__Concat_63636468(v10, v12, 0);
  if ( !ConditionsInformation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  v14 = ConditionsInformation__getCheckFunction(Cond, v13);
  if ( !v14 )
    goto LABEL_255;
  v15 = v14;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v15->fields.target )
  {
    case 1:
      if ( !v16 )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)v147->fields.Bdata;
      goto LABEL_75;
    case 2:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      uniqueId = v7->fields.uniqueId;
      if ( v7->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      items = v16->fields._items;
      v29 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)this;
      goto LABEL_83;
    case 3:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, v7->fields.uniqueId, 0, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 4:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 5:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType != 1 )
      {
        if ( !this || !v16 )
          goto LABEL_260;
        aiInfo = (AiLogic_AiInfo_o *)this[7].fields._thinkList;
        goto LABEL_75;
      }
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0);
      Bdata = v147->fields.Bdata;
      if ( !Bdata )
        goto LABEL_260;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_46;
      goto LABEL_22;
    case 6:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0);
        Bdata = v147->fields.Bdata;
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
        aiInfo = *(AiLogic_AiInfo_o **)&this[7].fields._aiType;
      }
LABEL_75:
      items = v16->fields._items;
      v29 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_260;
LABEL_83:
      size = v16->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)aiInfo,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v31[4] = (Il2CppClass *)aiInfo;
        sub_1C3E508((CGThumbnailListItem_o *)(v31 + 4), (int32_t)aiInfo, v17, v18);
      }
      goto LABEL_86;
    case 7:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, v7->fields.uniqueId, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 8:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0);
        if ( !v16 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0);
        if ( !v16 )
          goto LABEL_260;
      }
LABEL_79:
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_86:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0);
      v32 = this;
      wkZero = v147->fields.wkZero;
      if ( v15->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_260;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v34 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_313743C *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v34,
                                (const MethodInfo_3139160 *)Method_System_Linq_Enumerable_ToArray_long___);
          v32 = this;
        }
      }
      if ( v15->fields.isParams )
      {
        if ( !v32 )
          goto LABEL_260;
        if ( v32->fields._aiType >= 2 )
        {
          v35 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                  1,
                  (const MethodInfo_313743C *)Method_System_Linq_Enumerable_Skip_long___);
          v36 = System_Linq_Enumerable__Take_long_(
                  v35,
                  v32->fields._aiType - 1,
                  (const MethodInfo_3137A74 *)Method_System_Linq_Enumerable_Take_long___);
          v144 = System_Linq_Enumerable__ToArray_long_(
                   v36,
                   (const MethodInfo_3139160 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C3E60C(long___TypeInfo, 1);
          if ( v32->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v32->fields._thinkList;
              v143 = this;
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
        if ( !v32 )
          goto LABEL_260;
        if ( v32->fields._aiType >= 2 )
        {
          v38 = v16;
          v39 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                  1,
                  (const MethodInfo_313743C *)Method_System_Linq_Enumerable_Skip_long___);
          v40 = System_Linq_Enumerable__Take_long_(
                  v39,
                  v32->fields._aiType - 1,
                  (const MethodInfo_3137A74 *)Method_System_Linq_Enumerable_Take_long___);
          v41 = System_Linq_Enumerable__ToArray_long_(
                  v40,
                  (const MethodInfo_3139160 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C3E60C(long___TypeInfo, 1);
          if ( v32->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v32->fields._thinkList;
              v143 = this;
              v144 = wkZero;
              wkZero = v41;
              v16 = v38;
              goto LABEL_105;
            }
          }
LABEL_153:
          sub_1C3E7C8(this, aiInfo);
        }
      }
      v143 = v32;
      v144 = wkZero;
LABEL_106:
      refine = v15->fields.refine;
      func = v15->fields.func;
      if ( !refine )
      {
        v141 = v11;
        if ( !v16 )
          goto LABEL_260;
        v139 = v16;
        System_Collections_Generic_List_object___GetEnumerator(
          &v148,
          v16,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v149 = v148;
        while ( 1 )
        {
          v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v149,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v44 = v60;
          if ( !v60 )
            break;
          current = v149.fields._current;
          if ( !v149.fields._current )
            sub_1C3E7C0(v60, v61);
          klass = v149.fields._current->klass;
          v64 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
          if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v64;
              p_offset += 4;
              if ( !v64 )
                goto LABEL_136;
            }
            v66 = (__int64)&klass->vtable[*p_offset + 1];
          }
          else
          {
LABEL_136:
            v66 = sub_1C8ED7C(v149.fields._current, AiInterface_TypeInfo, 1);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v66)(
                  current,
                  v15,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v66 + 8))
              & 1) != 0 )
          {
            v67 = current->klass;
            paramater = v15->fields.paramater;
            v69 = v147->fields.Bdata;
            v70 = *(unsigned __int16 *)&current->klass->_2.rank;
            if ( *(_WORD *)&current->klass->_2.rank )
            {
              v71 = &v67->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v71 - 1) != AiInterface_TypeInfo )
              {
                --v70;
                v71 += 4;
                if ( !v70 )
                  goto LABEL_143;
              }
              v72 = (__int64)&v67->vtable[*v71];
            }
            else
            {
LABEL_143:
              v72 = sub_1C8ED7C(current, AiInterface_TypeInfo, 0);
            }
            v73 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v72)(
                    current,
                    v69,
                    paramater,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v144,
                    aiEnt,
                    *(_QWORD *)(v72 + 8),
                    v139);
            if ( !func )
              sub_1C3E7C0(v73, v73);
            if ( (((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                    func->fields.method_code,
                    v73,
                    v143,
                    func->fields.method)
                & 1) != 0 )
              break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v149,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
LABEL_148:
        v11 = v141;
        goto LABEL_252;
      }
      v44 = refine == 1;
      if ( refine == 1 )
      {
        v141 = v11;
        if ( !v16 )
          goto LABEL_260;
        v138 = v16;
        System_Collections_Generic_List_object___GetEnumerator(
          &v148,
          v16,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v149 = v148;
        while ( 1 )
        {
          v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v149,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v47 = v45;
          if ( !v45 )
            break;
          v48 = v149.fields._current;
          if ( !v149.fields._current )
            sub_1C3E7C0(v45, v46);
          v49 = v149.fields._current->klass;
          v50 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
          if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
          {
            v51 = &v49->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v51 - 1) != AiInterface_TypeInfo )
            {
              --v50;
              v51 += 4;
              if ( !v50 )
                goto LABEL_116;
            }
            v52 = (__int64)&v49->vtable[*v51 + 1];
          }
          else
          {
LABEL_116:
            v52 = sub_1C8ED7C(v149.fields._current, AiInterface_TypeInfo, 1);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v52)(
                  v48,
                  v15,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v52 + 8))
              & 1) != 0 )
          {
            v53 = v48->klass;
            v54 = v15->fields.paramater;
            v55 = v147->fields.Bdata;
            v56 = *(unsigned __int16 *)&v48->klass->_2.rank;
            if ( *(_WORD *)&v48->klass->_2.rank )
            {
              v57 = &v53->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v57 - 1) != AiInterface_TypeInfo )
              {
                --v56;
                v57 += 4;
                if ( !v56 )
                  goto LABEL_123;
              }
              v58 = (__int64)&v53->vtable[*v57];
            }
            else
            {
LABEL_123:
              v58 = sub_1C8ED7C(v48, AiInterface_TypeInfo, 0);
            }
            v59 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v58)(
                    v48,
                    v55,
                    v54,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v144,
                    aiEnt,
                    *(_QWORD *)(v58 + 8),
                    v138);
            if ( !func )
              sub_1C3E7C0(v59, v59);
            if ( (((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                    func->fields.method_code,
                    v59,
                    v143,
                    func->fields.method)
                & 1) == 0 )
              break;
          }
        }
        v44 = !v47;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v149,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        goto LABEL_148;
      }
      if ( refine == 2 )
      {
        this = (AiLogic_o *)sub_1C3E60C(double___TypeInfo, 0);
        if ( !v16 )
          goto LABEL_260;
        v114 = this;
        System_Collections_Generic_List_object___GetEnumerator(
          &v148,
          v16,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v149 = v148;
        while ( 1 )
        {
LABEL_213:
          v142 = (AiLogic_AiInfo_o *)v114;
          while ( 1 )
          {
            v115 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     (System_Collections_Generic_List_Enumerator_object__o *)&v149,
                     (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v115 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                (System_Collections_Generic_List_Enumerator_object__o *)&v149,
                (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
              aiInfo = v142;
              if ( !v142 )
                goto LABEL_260;
              if ( v142->fields.aiState )
                goto LABEL_247;
              goto LABEL_252;
            }
            v117 = v149.fields._current;
            if ( !v149.fields._current )
              sub_1C3E7C0(v115, v116);
            v118 = v149.fields._current->klass;
            v119 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
            if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
            {
              v120 = &v118->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v120 - 1) != AiInterface_TypeInfo )
              {
                --v119;
                v120 += 4;
                if ( !v119 )
                  goto LABEL_220;
              }
              v121 = (__int64)&v118->vtable[*v120 + 1];
            }
            else
            {
LABEL_220:
              v121 = sub_1C8ED7C(v149.fields._current, AiInterface_TypeInfo, 1);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v121)(
                    v117,
                    v15,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v121 + 8))
                & 1) != 0 )
            {
              v122 = v117->klass;
              v123 = v15->fields.paramater;
              v124 = v147->fields.Bdata;
              v125 = *(unsigned __int16 *)&v117->klass->_2.rank;
              if ( *(_WORD *)&v117->klass->_2.rank )
              {
                v126 = &v122->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v126 - 1) != AiInterface_TypeInfo )
                {
                  --v125;
                  v126 += 4;
                  if ( !v125 )
                    goto LABEL_227;
                }
                v127 = (__int64)&v122->vtable[*v126];
              }
              else
              {
LABEL_227:
                v127 = sub_1C8ED7C(v117, AiInterface_TypeInfo, 0);
              }
              v128 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v127)(
                       v117,
                       v124,
                       v123,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v144,
                       aiEnt,
                       *(_QWORD *)(v127 + 8));
              if ( !v128 )
                sub_1C3E7C0(0, v129);
              v130 = *(_QWORD *)(v128 + 24);
              if ( v130 )
                break;
            }
          }
          v114 = (AiLogic_o *)v142;
          if ( !v142 )
            sub_1C3E7C0(v128, v129);
          if ( !v142->fields.aiState )
            v114 = (AiLogic_o *)v128;
          if ( (int)v130 >= 1 )
          {
            aiType = (unsigned int)v114->fields._aiType;
            v132 = 0;
            while ( 1 )
            {
              if ( (__int64)v132 < (int)aiType )
              {
                if ( v132 >= aiType )
                  sub_1C3E7C8(v128, v129);
                if ( *((double *)&v114->fields._thinkList + v132) < *(double *)(v128 + 8 * v132 + 32) )
                  break;
              }
              if ( (unsigned int)*(_QWORD *)(v128 + 24) == ++v132 )
                goto LABEL_213;
            }
            v114 = (AiLogic_o *)v128;
          }
        }
      }
      if ( refine != 3 )
      {
        if ( refine == 4 )
        {
          this = (AiLogic_o *)sub_1C3E60C(double___TypeInfo, 1);
          v74 = v16;
          if ( !v16 )
            goto LABEL_260;
          v75 = this;
          System_Collections_Generic_List_object___GetEnumerator(
            &v148,
            v74,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v149 = v148;
          while ( 1 )
          {
            v76 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    (System_Collections_Generic_List_Enumerator_object__o *)&v149,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v76 )
              break;
            v78 = v149.fields._current;
            if ( !v149.fields._current )
              sub_1C3E7C0(v76, v77);
            v79 = v149.fields._current->klass;
            v80 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
            if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
            {
              v81 = &v79->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v81 - 1) != AiInterface_TypeInfo )
              {
                --v80;
                v81 += 4;
                if ( !v80 )
                  goto LABEL_165;
              }
              v82 = (__int64)&v79->vtable[*v81 + 1];
            }
            else
            {
LABEL_165:
              v82 = sub_1C8ED7C(v149.fields._current, AiInterface_TypeInfo, 1);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v82)(
                    v78,
                    v15,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v82 + 8))
                & 1) != 0 )
            {
              v83 = v78->klass;
              v84 = v15->fields.paramater;
              v85 = v147->fields.Bdata;
              v86 = *(unsigned __int16 *)&v78->klass->_2.rank;
              if ( *(_WORD *)&v78->klass->_2.rank )
              {
                v87 = &v83->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v87 - 1) != AiInterface_TypeInfo )
                {
                  --v86;
                  v87 += 4;
                  if ( !v86 )
                    goto LABEL_172;
                }
                v88 = (__int64)&v83->vtable[*v87];
              }
              else
              {
LABEL_172:
                v88 = sub_1C8ED7C(v78, AiInterface_TypeInfo, 0);
              }
              v89 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v88)(
                      v78,
                      v85,
                      v84,
                      (unsigned int)turn,
                      (unsigned int)actcnt,
                      v144,
                      aiEnt,
                      *(_QWORD *)(v88 + 8));
              if ( !v89 )
                sub_1C3E7C0(0, v90);
              v91 = *(unsigned int *)(v89 + 24);
              if ( v91 << 32 >= 1 )
              {
                v92 = (int)v91;
                v93 = (double *)(v89 + 32);
                do
                {
                  if ( !v91 )
                    sub_1C3E7C8(v89, v90);
                  if ( !v75 )
                    sub_1C3E7C0(v89, v90);
                  if ( !v75->fields._aiType )
                    sub_1C3E7C8(v89, v90);
                  v94 = *v93++;
                  --v92;
                  --v91;
                  *(double *)&v75->fields._thinkList = v94 + *(double *)&v75->fields._thinkList;
                }
                while ( v92 );
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            (System_Collections_Generic_List_Enumerator_object__o *)&v149,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          if ( !func )
            goto LABEL_260;
          v134 = ((__int64 (__fastcall *)(intptr_t, AiLogic_o *, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                   func->fields.method_code,
                   v75,
                   v143,
                   func->fields.method);
LABEL_251:
          v44 = v134;
        }
        goto LABEL_252;
      }
      v140 = v7;
      this = (AiLogic_o *)sub_1C3E60C(double___TypeInfo, 0);
      if ( !v16 )
        goto LABEL_260;
      v95 = (AiLogic_AiInfo_o *)this;
      System_Collections_Generic_List_object___GetEnumerator(
        &v148,
        v16,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v149 = v148;
LABEL_184:
      while ( 1 )
      {
        v96 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                (System_Collections_Generic_List_Enumerator_object__o *)&v149,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v96 )
          break;
        v98 = v149.fields._current;
        if ( !v149.fields._current )
          sub_1C3E7C0(v96, v97);
        v99 = v149.fields._current->klass;
        v100 = *(unsigned __int16 *)&v149.fields._current->klass->_2.rank;
        if ( *(_WORD *)&v149.fields._current->klass->_2.rank )
        {
          v101 = &v99->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v101 - 1) != AiInterface_TypeInfo )
          {
            --v100;
            v101 += 4;
            if ( !v100 )
              goto LABEL_190;
          }
          v102 = (__int64)&v99->vtable[*v101 + 1];
        }
        else
        {
LABEL_190:
          v102 = sub_1C8ED7C(v149.fields._current, AiInterface_TypeInfo, 1);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v102)(
                v98,
                v15,
                wkZero,
                aiEnt,
                *(_QWORD *)(v102 + 8))
            & 1) != 0 )
        {
          v103 = v98->klass;
          v104 = v15->fields.paramater;
          v105 = v147->fields.Bdata;
          v106 = *(unsigned __int16 *)&v98->klass->_2.rank;
          if ( *(_WORD *)&v98->klass->_2.rank )
          {
            v107 = &v103->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v107 - 1) != AiInterface_TypeInfo )
            {
              --v106;
              v107 += 4;
              if ( !v106 )
                goto LABEL_197;
            }
            v108 = (__int64)&v103->vtable[*v107];
          }
          else
          {
LABEL_197:
            v108 = sub_1C8ED7C(v98, AiInterface_TypeInfo, 0);
          }
          v109 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v108)(
                   v98,
                   v105,
                   v104,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v144,
                   aiEnt,
                   *(_QWORD *)(v108 + 8));
          if ( !v109 )
            sub_1C3E7C0(0, v110);
          v111 = *(_QWORD *)(v109 + 24);
          if ( v111 )
          {
            if ( !v95 )
              sub_1C3E7C0(v109, v110);
            if ( !v95->fields.aiState )
              goto LABEL_210;
            if ( (int)v111 >= 1 )
            {
              aiState_low = LODWORD(v95->fields.aiState);
              v113 = 0;
              while ( 1 )
              {
                if ( (__int64)v113 < (int)aiState_low )
                {
                  if ( v113 >= aiState_low )
                    sub_1C3E7C8(v109, v110);
                  if ( *(double *)(v109 + 8 * v113 + 32) < *((double *)&v95->fields.logicAi + v113) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v109 + 24) == ++v113 )
                  goto LABEL_184;
              }
LABEL_210:
              v95 = (AiLogic_AiInfo_o *)v109;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        (System_Collections_Generic_List_Enumerator_object__o *)&v149,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      if ( !v95 )
        goto LABEL_260;
      aiInfo = v95;
      aiState = v95->fields.aiState;
      v7 = v140;
      if ( aiState )
      {
LABEL_247:
        if ( func )
        {
          v134 = ((__int64 (__fastcall *)(intptr_t, AiLogic_AiInfo_o *, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                   func->fields.method_code,
                   aiInfo,
                   v143,
                   func->fields.method);
          goto LABEL_251;
        }
LABEL_260:
        sub_1C3E7C0(this, aiInfo);
      }
LABEL_252:
      v135 = v11 ^ v44;
      if ( ((v11 ^ v44) & 1) != 0 )
      {
        logicAi = v7->fields.logicAi;
        if ( logicAi )
        {
          if ( (((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, const MethodInfo *))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr)(
                  logicAi,
                  v7,
                  aiEnt,
                  logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method)
              & 1) == 0 )
LABEL_255:
            v135 = 0;
        }
      }
      return v135 & 1;
    case 9:
      v23 = v147;
      v25 = 1;
      v24 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_58;
    case 0xA:
      v25 = 1;
      v20 = 1;
      goto LABEL_55;
    case 0xB:
      v25 = 1;
      v20 = 2;
LABEL_55:
      v23 = v147;
      v24 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_56;
    case 0xC:
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0);
      if ( !v16 )
        goto LABEL_260;
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v147->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0);
      System_Collections_Generic_List_object___AddRange(
        v16,
        FieldEnemyServantList,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_86;
    case 0xD:
      v23 = v147;
      v24 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v25 = 0;
LABEL_58:
      v27 = v7;
      v20 = 0;
      goto LABEL_59;
    case 0xE:
      v20 = 1;
      goto LABEL_49;
    case 0xF:
      v20 = 2;
LABEL_49:
      v23 = v147;
      v24 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v25 = 0;
LABEL_56:
      v27 = v7;
LABEL_59:
      AiLogic__getTargetPosServant(v23, v24, v25, v27, v20, v19);
      goto LABEL_86;
    default:
      goto LABEL_86;
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w4
  const MethodInfo *v23; // x6
  AiEntity_o *result; // x0
  __int64 naturalAligment; // x10

  v15 = this;
  if ( (byte_4C59D16 & 1) == 0 )
  {
    sub_1C3E564(&AiEntity_TypeInfo);
    this = (AiLogic_o *)sub_1C3E564(&AiLogic_AiInfo_TypeInfo);
    byte_4C59D16 = 1;
  }
  if ( !svtData )
    sub_1C3E7C0(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v17 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.methodPtr)(
                       svtData,
                       svtData->klass->vtable._18_getAiState.method,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v18 = (AiLogic_AiInfo_o *)sub_1C3E7B0(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v18, 1, uniqueId, v17, logicAi, procState, v19);
  *info = v18;
  sub_1C3E508((CGThumbnailListItem_o *)info, (int32_t)v18, v20, v21);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v22, timingPriority, v23);
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
  if ( (byte_4C59D18 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    this = (AiLogic_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59D18 = 1;
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
                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_36;
    v16 = this;
    if ( AiActEntity__isThinkEnd((AiActEntity_o *)this, 0) )
      break;
    if ( HIDWORD(v16->fields.Bdata) == 99 )
    {
      aiState->fields.aiGroupId = AiBaseEntity__getChangeAiId(BasicAct, 0);
      aiState->fields.actCount = 0;
      Bdata = (UnityEngine_Object_o *)v11->fields.Bdata;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AiLogic_o *)UnityEngine_Object__op_Inequality(Bdata, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v19 = v11->fields.Bdata;
        if ( !v19 )
          goto LABEL_36;
        this = (AiLogic_o *)v19->fields.battleEvent;
        if ( !this )
          goto LABEL_36;
        ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
          this,
          aiState,
          BasicAct,
          this->klass[1].vtable._3_ToString.methodPtr);
      }
    }
    AiLogic__updateThinkGroup(v11, aiInfo, aiState, v17);
    --v14;
  }
  while ( v14 );
  v20 = (UnityEngine_Object_o *)v11->fields.Bdata;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0);
    if ( (_DWORD)this )
    {
      v21 = v11->fields.Bdata;
      if ( !v21 )
        goto LABEL_36;
      playerNpCount = v21->fields.playerNpCount;
      this = (AiLogic_o *)AiBaseEntity__ChangeNpCountPlayer(BasicAct, 0);
      v21->fields.playerNpCount = (_DWORD)this + playerNpCount;
      v23 = v11->fields.Bdata;
      if ( !v23 )
        goto LABEL_36;
      if ( v23->fields.playerNpCount < 0 )
        v23->fields.playerNpCount = 0;
    }
    this = (AiLogic_o *)AiBaseEntity__IsResetNpCountPlayer(BasicAct, 0);
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
      ((void (__fastcall *)(AiLogic_o *, struct AiState_o *, AiBaseEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
        this,
        aiState,
        BasicAct,
        this->klass[1].vtable._3_ToString.methodPtr);
      return BasicAct;
    }
LABEL_36:
    sub_1C3E7C0(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *AiLogic__getAction_46696188(
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
  if ( (byte_4C59D17 & 1) == 0 )
  {
    sub_1C3E564(&AiFieldEntity_TypeInfo);
    this = (AiLogic_o *)sub_1C3E564(&AiLogic_AiInfo_TypeInfo);
    byte_4C59D17 = 1;
  }
  if ( !fieldData )
    sub_1C3E7C0(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v16 = (AiLogic_AiInfo_o *)sub_1C3E7B0(AiLogic_AiInfo_TypeInfo);
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
  System_Collections_Generic_List_object__o *v16; // x0
  System_Collections_Generic_List_object__o *thinkList; // x23
  System_Predicate_object__o *v18; // x24
  AiLogic___c_c *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x23
  System_Comparison_T__o *_9__16_1; // x24
  Il2CppObject *v22; // x25
  struct AiLogic___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x24
  System_Predicate_object__o *v27; // x25
  const MethodInfo *v28; // x5
  int v29; // w8
  char *v30; // x24
  WeightRate_int__o *v31; // x25
  const MethodInfo *v32; // x5
  __int64 v33; // x8
  unsigned __int64 v34; // x26
  char *v35; // x29
  int32_t Next; // w0
  const MethodInfo *v37; // x5
  AiBaseEntity_o *v38; // x24

  if ( (byte_4C59D19 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_AiBaseEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    sub_1C3E564(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_1C3E564(&Method_AiLogic___c__getBasicAct_b__16_1__);
    sub_1C3E564(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__);
    sub_1C3E564(&AiLogic___c__DisplayClass16_0_TypeInfo);
    sub_1C3E564(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__);
    sub_1C3E564(&AiLogic___c__DisplayClass16_1_TypeInfo);
    sub_1C3E564(&AiLogic___c_TypeInfo);
    sub_1C3E564(&Method_WeightRate_int___ctor__);
    sub_1C3E564(&Method_WeightRate_int__getCount__);
    sub_1C3E564(&Method_WeightRate_int__getData__);
    sub_1C3E564(&Method_WeightRate_int__getTotalWeight__);
    sub_1C3E564(&Method_WeightRate_int__setWeight__);
    sub_1C3E564(&WeightRate_int__TypeInfo);
    byte_4C59D19 = 1;
  }
  v13 = sub_1C3E7B0(AiLogic___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_42;
  *(_DWORD *)(v13 + 16) = procState;
  *(_DWORD *)(v13 + 20) = actcnt;
  *(_DWORD *)(v13 + 24) = timingPriority;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v18 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_object____ctor(v18, (Il2CppObject *)v13, Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, 0);
  if ( !thinkList )
    goto LABEL_42;
  All = System_Collections_Generic_List_object___FindAll(
          thinkList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
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
    _9__16_1 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__16_1, v22, Method_AiLogic___c__getBasicAct_b__16_1__, 0);
    static_fields = AiLogic___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__16_1, (int32_t)_9__16_1, v24, v25);
  }
  if ( !v20 )
LABEL_42:
    sub_1C3E7C0(All, v15);
  System_Collections_Generic_List_object___Sort_58421028(
    v20,
    _9__16_1,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v20->fields._size >= 1 )
  {
    while ( 1 )
    {
      v26 = sub_1C3E7B0(AiLogic___c__DisplayClass16_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v26, 0);
      if ( v20->fields._size < 1 )
        return 0;
      All = System_Collections_Generic_List_object___get_Item(
              v20,
              0,
              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_42;
      if ( !v26 )
        goto LABEL_42;
      *(_DWORD *)(v26 + 16) = *((_DWORD *)All + 7);
      v27 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_object____ctor(
        v27,
        (Il2CppObject *)v26,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0);
      All = System_Collections_Generic_List_object___FindAll(
              v20,
              (System_Predicate_T__o *)v27,
              (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_42;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_42;
      v29 = *((_DWORD *)All + 6);
      v30 = (char *)All;
      if ( v29 <= 1 )
        break;
      v31 = (WeightRate_int__o *)sub_1C3E7B0(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v31, (const MethodInfo_3BA6E78 *)Method_WeightRate_int___ctor__);
      v33 = *((_QWORD *)v30 + 3);
      if ( (int)v33 >= 1 )
      {
        v34 = 0;
        v35 = v30 + 32;
        while ( v34 < (unsigned int)v33 )
        {
          All = (void *)AiLogic__checkThinking_46697752(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v35[8 * v34],
                          turn,
                          *(_DWORD *)(v13 + 20),
                          v32);
          if ( v34 >= *((unsigned int *)v30 + 6) )
            break;
          v15 = *(_QWORD *)&v35[8 * v34];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v15 || !v31 )
              goto LABEL_42;
            WeightRate_int___setWeight(
              v31,
              *(_DWORD *)(v15 + 32),
              v34,
              (const MethodInfo_3BA6394 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v20,
                            (Il2CppObject *)v15,
                            (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v33) = *((_DWORD *)v30 + 6);
          if ( (__int64)++v34 >= (int)v33 )
            goto LABEL_29;
        }
LABEL_41:
        sub_1C3E7C8(All, v15);
      }
LABEL_29:
      if ( !v31 )
        goto LABEL_42;
      if ( WeightRate_int___getCount(v31, (const MethodInfo_3BA6750 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v31->fields.totalweight, 0);
        All = (void *)WeightRate_int___getData(v31, Next, (const MethodInfo_3BA6808 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v30 + 6) )
          goto LABEL_41;
        v38 = *(AiBaseEntity_o **)&v30[8 * (int)All + 32];
        if ( AiLogic__checkThinking_46697752(this, aiInfo, v38, turn, *(_DWORD *)(v13 + 20), v37) )
          return v38;
        goto LABEL_37;
      }
LABEL_38:
      if ( v20->fields._size <= 0 )
        return 0;
    }
    if ( !v29 )
      goto LABEL_41;
    All = (void *)AiLogic__checkThinking_46697752(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v13 + 20),
                    v28);
    if ( !*((_DWORD *)v30 + 6) )
      goto LABEL_41;
    v38 = (AiBaseEntity_o *)*((_QWORD *)v30 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v38;
LABEL_37:
    System_Collections_Generic_List_object___Remove(
      v20,
      (Il2CppObject *)v38,
      (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    goto LABEL_38;
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct AiInterface_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  AiLogic_o *v17; // x1
  Il2CppClass **v18; // x0

  v10 = this;
  if ( (byte_4C59D1B & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C3E564(&Method_System_Collections_Generic_List_AiInterface__Add__);
    byte_4C59D1B = 1;
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
        v15 = Method_System_Collections_Generic_List_AiInterface__Add__,
        ++targetList->fields._version,
        !items) )
  {
LABEL_16:
    sub_1C3E7C0(this, targetList);
  }
  size = targetList->fields._size;
  v17 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    targetList->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
  }
}


void AiLogic__updateThinkGroup(AiLogic_o *this, AiLogic_AiInfo_o *aiInfo, AiState_o *aiState, const MethodInfo *method)
{
  AiLogic_o *v6; // x22
  _BOOL4 v7; // w23
  _BOOL4 v8; // w8
  int32_t aiType; // w8
  System_Collections_Generic_IEnumerable_T__o *ListFormGroupId; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v6 = this;
  if ( (byte_4C59D12 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___78121368);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    this = (AiLogic_o *)sub_1C3E564(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    byte_4C59D12 = 1;
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
                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
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
      sub_1C3E7C0(this, aiInfo);
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
        v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_58412372(
          v12,
          v11,
          (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___78121368);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)&v6->fields._thinkList, (int32_t)v12, v13, v14);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields.aiType = inAiType;
  v12->fields.uniqueId = inUniqueId;
  v12->fields.aiState = inAiSate;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.aiState, (int32_t)inAiSate, v13, v14);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_1C3E508((CGThumbnailListItem_o *)v12, (int32_t)inLogicAi, v15, v16);
  LODWORD(v12->monitor) = inProcState;
}


bool AiLogic_AiInfo__CheckAiCanActionFromTargets(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  struct BattleLogicBaseAi_o *logicAi; // x0

  logicAi = this->fields.logicAi;
  if ( logicAi )
    return ((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, const MethodInfo *))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr)(
             logicAi,
             this,
             aiBaseEntity,
             logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method);
  else
    return 1;
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
  _DWORD *v14; // x22
  int32_t v15; // w20
  int32_t v16; // w21

  if ( (byte_4C59D1F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
    byte_4C59D1F = 1;
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
              (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
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
        sub_1C3E7C0(checkedInfo, v12);
      BattleServantData__addSkillInfo(svtData, v16, v15, (int32_t)checkedInfo, v14[9], -1, -1, 0, 0);
    }
  }
}


bool AiLogic_AiInfo__IsChecked(AiLogic_AiInfo_o *this, AiBaseEntity_o *aiBaseEntity, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4C59D1E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    byte_4C59D1E = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._4_get_PrimaryKey.method);
  if ( !checkedInfo )
    sub_1C3E7C0(v7, v8);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
}


void AiLogic_AiInfo__SetCheckedResult(
        AiLogic_AiInfo_o *this,
        AiBaseEntity_o *aiBaseEntity,
        AiLogic_AiInfo_CheckedInfo_o *inCheckedInfo,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *klass; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x21

  if ( (byte_4C59D1D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
    byte_4C59D1D = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (CGThumbnailListItem_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v9,
        (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (CGThumbnailListItem_c *)v9;
      sub_1C3E508(p_checkedInfo, (int32_t)v9, v10, v11);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._4_get_PrimaryKey.method,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v14 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (Il2CppObject *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)klass,
          v14,
          (Il2CppObject *)inCheckedInfo,
          (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_1C3E7C0(klass, v13);
  }
}


void AiLogic_AiInfo_CheckedInfo___ctor(
        AiLogic_AiInfo_CheckedInfo_o *this,
        int32_t inActType,
        bool inNoMessage,
        BattleSkillInfoData_o *inSkillInfo,
        const MethodInfo *method)
{
  AiLogic_AiInfo_CheckedInfo_o *v7; // x21
  bool v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v7 = this;
  v8 = inNoMessage;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7->fields.tempSkillInfo = inSkillInfo;
  v7 = (AiLogic_AiInfo_CheckedInfo_o *)((char *)v7 + 24);
  LODWORD(v7[-1].fields.tempSkillInfo) = inActType;
  BYTE4(v7[-1].fields.tempSkillInfo) = v8;
  sub_1C3E508((CGThumbnailListItem_o *)v7, (int32_t)inSkillInfo, v9, v10);
}


void AiLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C59D20 & 1) == 0 )
  {
    sub_1C3E564(&AiLogic___c_TypeInfo);
    byte_4C59D20 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(AiLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)AiLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, a);
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
    sub_1C3E7C0(this, 0);
  return ((__int64 (__fastcall *)(AiBaseEntity_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._6_isTiming.methodPtr)(
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
    sub_1C3E7C0(this, 0);
  return ((__int64 (__fastcall *)(AiBaseEntity_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._6_isTiming.methodPtr)(
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
    sub_1C3E7C0(this, 0);
  return s->fields.priority == this->fields.priority;
}