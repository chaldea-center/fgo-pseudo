void AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A932 & 1) == 0 )
  {
    sub_1C32C20(&long___TypeInfo);
    byte_4C3A932 = 1;
  }
  v3 = (struct System_Int64_array *)sub_1C32CC8(long___TypeInfo, 0);
  this->fields.wkZero = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.wkZero, (int32_t)v3, v4, v5);
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
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3A927 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A927 = 1;
  }
  this->fields.Bdata = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v8, v9);
}


bool AiLogic__IsNoTargetNoActionTask(
        AiLogic_o *this,
        int32_t type,
        System_Int32_array *opponentTargets,
        System_Int32_array *partyTargets,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  unsigned int v8; // w8
  _BOOL4 v9; // w0

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
          v8 = partyTargets->m_Items[0];
          return v8 >> 31;
        }
LABEL_20:
        sub_1C32E84(IsNullOrEmpty);
      }
LABEL_19:
      sub_1C32E7C(IsNullOrEmpty);
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
            v8 = opponentTargets->m_Items[0];
            return v8 >> 31;
          }
          goto LABEL_20;
        }
        goto LABEL_19;
      }
      break;
  }
  LOBYTE(v9) = 0;
  return v9;
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
  if ( (byte_4C3A929 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C32C20(&AiLogic_AiInfo_TypeInfo);
    byte_4C3A929 = 1;
  }
  if ( !svtData )
    sub_1C32E7C(this);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                       svtData,
                       svtData->klass->vtable._18_getAiState.method,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_1C32E6C(AiLogic_AiInfo_TypeInfo);
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *thinkList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4C3A92B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C32C20(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_1C32C20(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__);
    sub_1C32C20(&AiLogic___c__DisplayClass12_0_TypeInfo);
    byte_4C3A92B = 1;
  }
  v9 = sub_1C32E6C(AiLogic___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = procState, *(_DWORD *)(v9 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v11),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v13 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v13,
                (const MethodInfo_3798ECC *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0 )
  {
    sub_1C32E7C(All);
  }
  return All->fields._size > 0;
}


bool AiLogic__checkThinking_46518932(
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
  if ( (byte_4C3A92A & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C32C20(&AiLogic_AiInfo_TypeInfo);
    byte_4C3A92A = 1;
  }
  if ( !fieldData )
    sub_1C32E7C(this);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_1C32E6C(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool AiLogic__checkThinking_46521552(
        AiLogic_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiEnt,
        int32_t turn,
        int32_t actcnt,
        const MethodInfo *method)
{
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
  Il2CppObject *Bdata; // x1
  int32_t v21; // w4
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *v23; // x8
  AiLogic_o *v24; // x0
  System_Collections_Generic_List_AiInterface__o *v25; // x1
  bool v26; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  AiLogic_o *v33; // x21
  System_Int64_array *wkZero; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_List_object__o *v39; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Int64_array *v42; // x20
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x24
  bool v45; // w21
  _BOOL8 v46; // x0
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
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v63; // x9
  int32_t *p_offset; // x10
  __int64 v65; // x0
  Il2CppClass *v66; // x8
  unsigned int paramater; // w27
  struct BattleData_o *v68; // x22
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  System_Collections_Generic_List_object__o *v73; // x9
  AiLogic_o *v74; // x20
  _BOOL8 v75; // x0
  Il2CppObject *v76; // x21
  Il2CppClass *v77; // x8
  __int64 v78; // x9
  int32_t *v79; // x10
  __int64 v80; // x0
  Il2CppClass *v81; // x8
  unsigned int v82; // w22
  struct BattleData_o *v83; // x23
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x8
  __int64 v89; // x9
  double *v90; // x10
  double v91; // t1
  AiLogic_o *v92; // x29
  _BOOL8 v93; // x0
  Il2CppObject *v94; // x27
  Il2CppClass *v95; // x8
  __int64 v96; // x9
  int32_t *v97; // x10
  __int64 v98; // x0
  Il2CppClass *v99; // x8
  unsigned int v100; // w22
  struct BattleData_o *v101; // x23
  __int64 v102; // x9
  int32_t *v103; // x10
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x11
  unsigned __int64 v107; // x10
  unsigned __int64 v108; // x9
  AiLogic_o *v109; // x22
  _BOOL8 v110; // x0
  Il2CppObject *v111; // x27
  Il2CppClass *v112; // x8
  __int64 v113; // x9
  int32_t *v114; // x10
  __int64 v115; // x0
  Il2CppClass *v116; // x8
  unsigned int v117; // w22
  struct BattleData_o *v118; // x23
  __int64 v119; // x9
  int32_t *v120; // x10
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x11
  unsigned __int64 aiType; // x10
  unsigned __int64 v125; // x9
  AiLogic_o *v126; // x1
  __int64 v127; // x8
  char v128; // w0
  char v129; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  System_Collections_Generic_List_object__o *v132; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v133; // [xsp+0h] [xbp-D0h]
  AiLogic_AiInfo_o *v134; // [xsp+8h] [xbp-C8h]
  unsigned __int8 v135; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v136; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v137; // [xsp+18h] [xbp-B8h]
  System_Int64_array *v138; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v141; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v142; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v143; // [xsp+50h] [xbp-80h] BYREF

  v141 = this;
  if ( (byte_4C3A930 & 1) == 0 )
  {
    sub_1C32C20(&AiInterface_TypeInfo);
    sub_1C32C20(&Ai_COND_TypeInfo);
    sub_1C32C20(&ConditionsInformation_TypeInfo);
    sub_1C32C20(&double___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Skip_long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Take_long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiInterface__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiInterface__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiInterface___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_AiInterface__TypeInfo);
    sub_1C32C20(&StringLiteral_9303/*"NOT_"*/);
    this = (AiLogic_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A930 = 1;
  }
  memset(&v143, 0, sizeof(v143));
  if ( !aiEnt )
    goto LABEL_260;
  Cond = Ai__getCond(aiEnt->fields.cond, 0);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0);
  if ( !aiInfo )
    goto LABEL_260;
  v9 = (System_String_o **)&StringLiteral_9303/*"NOT_"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v9 = (System_String_o **)&StringLiteral_1/*""*/;
  v10 = *v9;
  v11 = (unsigned __int8)this;
  v142.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v142.fields._index = -1;
  LODWORD(v142.fields._current) = Cond;
  v12 = System_Enum__ToString((System_Enum_o *)&v142, 0);
  System_String__Concat_63518544(v10, v12, 0);
  if ( !ConditionsInformation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  v14 = ConditionsInformation__getCheckFunction(Cond, v13);
  if ( !v14 )
    goto LABEL_255;
  v15 = v14;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v15->fields.target )
  {
    case 1:
      if ( !v16 )
        goto LABEL_260;
      Bdata = (Il2CppObject *)v141->fields.Bdata;
      goto LABEL_75;
    case 2:
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      uniqueId = aiInfo->fields.uniqueId;
      if ( aiInfo->fields.aiType == 1 )
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
      v30 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_260;
      Bdata = (Il2CppObject *)this;
      goto LABEL_83;
    case 3:
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0);
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
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0, 0);
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
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( aiInfo->fields.aiType != 1 )
      {
        if ( !this || !v16 )
          goto LABEL_260;
        Bdata = (Il2CppObject *)this[7].fields._thinkList;
        goto LABEL_75;
      }
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0);
      v23 = v141->fields.Bdata;
      if ( !v23 )
        goto LABEL_260;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_46;
      goto LABEL_22;
    case 6:
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, aiInfo->fields.uniqueId, 0);
        v23 = v141->fields.Bdata;
        if ( !v23 )
          goto LABEL_260;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_46:
          if ( !v16 )
            goto LABEL_260;
          Bdata = (Il2CppObject *)v23->fields.playerFieldStatus;
        }
        else
        {
LABEL_22:
          if ( !v16 )
            goto LABEL_260;
          Bdata = (Il2CppObject *)v23->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v16 )
          goto LABEL_260;
        Bdata = *(Il2CppObject **)&this[7].fields._aiType;
      }
LABEL_75:
      items = v16->fields._items;
      v30 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_260;
LABEL_83:
      size = v16->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          Bdata,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v32[4] = (Il2CppClass *)Bdata;
        sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)Bdata, v17, v18);
      }
      goto LABEL_86;
    case 7:
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, aiInfo->fields.uniqueId, 0);
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
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( aiInfo->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, aiInfo->fields.uniqueId, 0);
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
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_86:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0);
      v33 = this;
      wkZero = v141->fields.wkZero;
      if ( v15->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_260;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v35 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_311ACE0 *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v35,
                                (const MethodInfo_311CA04 *)Method_System_Linq_Enumerable_ToArray_long___);
          v33 = this;
        }
      }
      if ( v15->fields.isParams )
      {
        if ( !v33 )
          goto LABEL_260;
        if ( v33->fields._aiType >= 2 )
        {
          v36 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                  1,
                  (const MethodInfo_311ACE0 *)Method_System_Linq_Enumerable_Skip_long___);
          v37 = System_Linq_Enumerable__Take_long_(
                  v36,
                  v33->fields._aiType - 1,
                  (const MethodInfo_311B318 *)Method_System_Linq_Enumerable_Take_long___);
          v138 = System_Linq_Enumerable__ToArray_long_(
                   v37,
                   (const MethodInfo_311CA04 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C32CC8(long___TypeInfo, 1);
          if ( v33->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v33->fields._thinkList;
              v137 = this;
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
        if ( !v33 )
          goto LABEL_260;
        if ( v33->fields._aiType >= 2 )
        {
          v39 = v16;
          v40 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                  1,
                  (const MethodInfo_311ACE0 *)Method_System_Linq_Enumerable_Skip_long___);
          v41 = System_Linq_Enumerable__Take_long_(
                  v40,
                  v33->fields._aiType - 1,
                  (const MethodInfo_311B318 *)Method_System_Linq_Enumerable_Take_long___);
          v42 = System_Linq_Enumerable__ToArray_long_(
                  v41,
                  (const MethodInfo_311CA04 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1C32CC8(long___TypeInfo, 1);
          if ( v33->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v33->fields._thinkList;
              v137 = this;
              v138 = wkZero;
              wkZero = v42;
              v16 = v39;
              goto LABEL_105;
            }
          }
LABEL_153:
          sub_1C32E84(this);
        }
      }
      v137 = v33;
      v138 = wkZero;
LABEL_106:
      refine = v15->fields.refine;
      func = v15->fields.func;
      if ( !refine )
      {
        v135 = v11;
        if ( !v16 )
          goto LABEL_260;
        v133 = v16;
        System_Collections_Generic_List_object___GetEnumerator(
          &v142,
          v16,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v143 = v142;
        while ( 1 )
        {
          v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v143,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v45 = v60;
          if ( !v60 )
            break;
          current = v143.fields._current;
          if ( !v143.fields._current )
            sub_1C32E7C(v60);
          klass = v143.fields._current->klass;
          v63 = *(unsigned __int16 *)&v143.fields._current->klass->_2.rank;
          if ( *(_WORD *)&v143.fields._current->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v63;
              p_offset += 4;
              if ( !v63 )
                goto LABEL_136;
            }
            v65 = (__int64)&klass->vtable[*p_offset + 1];
          }
          else
          {
LABEL_136:
            v65 = sub_1C83438(v143.fields._current, AiInterface_TypeInfo, 1);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v65)(
                  current,
                  v15,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v65 + 8))
              & 1) != 0 )
          {
            v66 = current->klass;
            paramater = v15->fields.paramater;
            v68 = v141->fields.Bdata;
            v69 = *(unsigned __int16 *)&current->klass->_2.rank;
            if ( *(_WORD *)&current->klass->_2.rank )
            {
              v70 = &v66->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v70 - 1) != AiInterface_TypeInfo )
              {
                --v69;
                v70 += 4;
                if ( !v69 )
                  goto LABEL_143;
              }
              v71 = (__int64)&v66->vtable[*v70];
            }
            else
            {
LABEL_143:
              v71 = sub_1C83438(current, AiInterface_TypeInfo, 0);
            }
            v72 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v71)(
                    current,
                    v68,
                    paramater,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v138,
                    aiEnt,
                    *(_QWORD *)(v71 + 8),
                    v133);
            if ( !func )
              sub_1C32E7C(v72);
            if ( (((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                    func->fields.method_code,
                    v72,
                    v137,
                    func->fields.method)
                & 1) != 0 )
              break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v143,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
LABEL_148:
        v11 = v135;
        goto LABEL_252;
      }
      v45 = refine == 1;
      if ( refine == 1 )
      {
        v135 = v11;
        if ( !v16 )
          goto LABEL_260;
        v132 = v16;
        System_Collections_Generic_List_object___GetEnumerator(
          &v142,
          v16,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v143 = v142;
        while ( 1 )
        {
          v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v143,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v47 = v46;
          if ( !v46 )
            break;
          v48 = v143.fields._current;
          if ( !v143.fields._current )
            sub_1C32E7C(v46);
          v49 = v143.fields._current->klass;
          v50 = *(unsigned __int16 *)&v143.fields._current->klass->_2.rank;
          if ( *(_WORD *)&v143.fields._current->klass->_2.rank )
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
            v52 = sub_1C83438(v143.fields._current, AiInterface_TypeInfo, 1);
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
            v55 = v141->fields.Bdata;
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
              v58 = sub_1C83438(v48, AiInterface_TypeInfo, 0);
            }
            v59 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v58)(
                    v48,
                    v55,
                    v54,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v138,
                    aiEnt,
                    *(_QWORD *)(v58 + 8),
                    v132);
            if ( !func )
              sub_1C32E7C(v59);
            if ( (((__int64 (__fastcall *)(intptr_t, __int64, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                    func->fields.method_code,
                    v59,
                    v137,
                    func->fields.method)
                & 1) == 0 )
              break;
          }
        }
        v45 = !v47;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v143,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        goto LABEL_148;
      }
      if ( refine == 2 )
      {
        this = (AiLogic_o *)sub_1C32CC8(double___TypeInfo, 0);
        if ( !v16 )
          goto LABEL_260;
        v109 = this;
        System_Collections_Generic_List_object___GetEnumerator(
          &v142,
          v16,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v143 = v142;
        while ( 1 )
        {
LABEL_213:
          v136 = v109;
          while ( 1 )
          {
            v110 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     (System_Collections_Generic_List_Enumerator_object__o *)&v143,
                     (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v110 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                (System_Collections_Generic_List_Enumerator_object__o *)&v143,
                (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
              v126 = v136;
              if ( !v136 )
                goto LABEL_260;
              if ( *(_QWORD *)&v136->fields._aiType )
                goto LABEL_247;
              goto LABEL_252;
            }
            v111 = v143.fields._current;
            if ( !v143.fields._current )
              sub_1C32E7C(v110);
            v112 = v143.fields._current->klass;
            v113 = *(unsigned __int16 *)&v143.fields._current->klass->_2.rank;
            if ( *(_WORD *)&v143.fields._current->klass->_2.rank )
            {
              v114 = &v112->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v114 - 1) != AiInterface_TypeInfo )
              {
                --v113;
                v114 += 4;
                if ( !v113 )
                  goto LABEL_220;
              }
              v115 = (__int64)&v112->vtable[*v114 + 1];
            }
            else
            {
LABEL_220:
              v115 = sub_1C83438(v143.fields._current, AiInterface_TypeInfo, 1);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v115)(
                    v111,
                    v15,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v115 + 8))
                & 1) != 0 )
            {
              v116 = v111->klass;
              v117 = v15->fields.paramater;
              v118 = v141->fields.Bdata;
              v119 = *(unsigned __int16 *)&v111->klass->_2.rank;
              if ( *(_WORD *)&v111->klass->_2.rank )
              {
                v120 = &v116->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v120 - 1) != AiInterface_TypeInfo )
                {
                  --v119;
                  v120 += 4;
                  if ( !v119 )
                    goto LABEL_227;
                }
                v121 = (__int64)&v116->vtable[*v120];
              }
              else
              {
LABEL_227:
                v121 = sub_1C83438(v111, AiInterface_TypeInfo, 0);
              }
              v122 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v121)(
                       v111,
                       v118,
                       v117,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v138,
                       aiEnt,
                       *(_QWORD *)(v121 + 8));
              if ( !v122 )
                sub_1C32E7C(0);
              v123 = *(_QWORD *)(v122 + 24);
              if ( v123 )
                break;
            }
          }
          v109 = v136;
          if ( !v136 )
            sub_1C32E7C(v122);
          if ( !*(_QWORD *)&v136->fields._aiType )
            v109 = (AiLogic_o *)v122;
          if ( (int)v123 >= 1 )
          {
            aiType = (unsigned int)v109->fields._aiType;
            v125 = 0;
            while ( 1 )
            {
              if ( (__int64)v125 < (int)aiType )
              {
                if ( v125 >= aiType )
                  sub_1C32E84(v122);
                if ( *((double *)&v109->fields._thinkList + v125) < *(double *)(v122 + 8 * v125 + 32) )
                  break;
              }
              if ( (unsigned int)*(_QWORD *)(v122 + 24) == ++v125 )
                goto LABEL_213;
            }
            v109 = (AiLogic_o *)v122;
          }
        }
      }
      if ( refine != 3 )
      {
        if ( refine == 4 )
        {
          this = (AiLogic_o *)sub_1C32CC8(double___TypeInfo, 1);
          v73 = v16;
          if ( !v16 )
            goto LABEL_260;
          v74 = this;
          System_Collections_Generic_List_object___GetEnumerator(
            &v142,
            v73,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v143 = v142;
          while ( 1 )
          {
            v75 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    (System_Collections_Generic_List_Enumerator_object__o *)&v143,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v75 )
              break;
            v76 = v143.fields._current;
            if ( !v143.fields._current )
              sub_1C32E7C(v75);
            v77 = v143.fields._current->klass;
            v78 = *(unsigned __int16 *)&v143.fields._current->klass->_2.rank;
            if ( *(_WORD *)&v143.fields._current->klass->_2.rank )
            {
              v79 = &v77->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v79 - 1) != AiInterface_TypeInfo )
              {
                --v78;
                v79 += 4;
                if ( !v78 )
                  goto LABEL_165;
              }
              v80 = (__int64)&v77->vtable[*v79 + 1];
            }
            else
            {
LABEL_165:
              v80 = sub_1C83438(v143.fields._current, AiInterface_TypeInfo, 1);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v80)(
                    v76,
                    v15,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v80 + 8))
                & 1) != 0 )
            {
              v81 = v76->klass;
              v82 = v15->fields.paramater;
              v83 = v141->fields.Bdata;
              v84 = *(unsigned __int16 *)&v76->klass->_2.rank;
              if ( *(_WORD *)&v76->klass->_2.rank )
              {
                v85 = &v81->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v85 - 1) != AiInterface_TypeInfo )
                {
                  --v84;
                  v85 += 4;
                  if ( !v84 )
                    goto LABEL_172;
                }
                v86 = (__int64)&v81->vtable[*v85];
              }
              else
              {
LABEL_172:
                v86 = sub_1C83438(v76, AiInterface_TypeInfo, 0);
              }
              v87 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v86)(
                      v76,
                      v83,
                      v82,
                      (unsigned int)turn,
                      (unsigned int)actcnt,
                      v138,
                      aiEnt,
                      *(_QWORD *)(v86 + 8));
              if ( !v87 )
                sub_1C32E7C(0);
              v88 = *(unsigned int *)(v87 + 24);
              if ( v88 << 32 >= 1 )
              {
                v89 = (int)v88;
                v90 = (double *)(v87 + 32);
                do
                {
                  if ( !v88 )
                    sub_1C32E84(v87);
                  if ( !v74 )
                    sub_1C32E7C(v87);
                  if ( !v74->fields._aiType )
                    sub_1C32E84(v87);
                  v91 = *v90++;
                  --v89;
                  --v88;
                  *(double *)&v74->fields._thinkList = v91 + *(double *)&v74->fields._thinkList;
                }
                while ( v89 );
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            (System_Collections_Generic_List_Enumerator_object__o *)&v143,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          if ( !func )
            goto LABEL_260;
          v128 = ((__int64 (__fastcall *)(intptr_t, AiLogic_o *, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                   func->fields.method_code,
                   v74,
                   v137,
                   func->fields.method);
LABEL_251:
          v45 = v128;
        }
        goto LABEL_252;
      }
      v134 = aiInfo;
      this = (AiLogic_o *)sub_1C32CC8(double___TypeInfo, 0);
      if ( !v16 )
        goto LABEL_260;
      v92 = this;
      System_Collections_Generic_List_object___GetEnumerator(
        &v142,
        v16,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v143 = v142;
LABEL_184:
      while ( 1 )
      {
        v93 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                (System_Collections_Generic_List_Enumerator_object__o *)&v143,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v93 )
          break;
        v94 = v143.fields._current;
        if ( !v143.fields._current )
          sub_1C32E7C(v93);
        v95 = v143.fields._current->klass;
        v96 = *(unsigned __int16 *)&v143.fields._current->klass->_2.rank;
        if ( *(_WORD *)&v143.fields._current->klass->_2.rank )
        {
          v97 = &v95->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v97 - 1) != AiInterface_TypeInfo )
          {
            --v96;
            v97 += 4;
            if ( !v96 )
              goto LABEL_190;
          }
          v98 = (__int64)&v95->vtable[*v97 + 1];
        }
        else
        {
LABEL_190:
          v98 = sub_1C83438(v143.fields._current, AiInterface_TypeInfo, 1);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v98)(
                v94,
                v15,
                wkZero,
                aiEnt,
                *(_QWORD *)(v98 + 8))
            & 1) != 0 )
        {
          v99 = v94->klass;
          v100 = v15->fields.paramater;
          v101 = v141->fields.Bdata;
          v102 = *(unsigned __int16 *)&v94->klass->_2.rank;
          if ( *(_WORD *)&v94->klass->_2.rank )
          {
            v103 = &v99->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v103 - 1) != AiInterface_TypeInfo )
            {
              --v102;
              v103 += 4;
              if ( !v102 )
                goto LABEL_197;
            }
            v104 = (__int64)&v99->vtable[*v103];
          }
          else
          {
LABEL_197:
            v104 = sub_1C83438(v94, AiInterface_TypeInfo, 0);
          }
          v105 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v104)(
                   v94,
                   v101,
                   v100,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v138,
                   aiEnt,
                   *(_QWORD *)(v104 + 8));
          if ( !v105 )
            sub_1C32E7C(0);
          v106 = *(_QWORD *)(v105 + 24);
          if ( v106 )
          {
            if ( !v92 )
              sub_1C32E7C(v105);
            if ( !*(_QWORD *)&v92->fields._aiType )
              goto LABEL_210;
            if ( (int)v106 >= 1 )
            {
              v107 = (unsigned int)v92->fields._aiType;
              v108 = 0;
              while ( 1 )
              {
                if ( (__int64)v108 < (int)v107 )
                {
                  if ( v108 >= v107 )
                    sub_1C32E84(v105);
                  if ( *(double *)(v105 + 8 * v108 + 32) < *((double *)&v92->fields._thinkList + v108) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v105 + 24) == ++v108 )
                  goto LABEL_184;
              }
LABEL_210:
              v92 = (AiLogic_o *)v105;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        (System_Collections_Generic_List_Enumerator_object__o *)&v143,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      if ( !v92 )
        goto LABEL_260;
      v126 = v92;
      v127 = *(_QWORD *)&v92->fields._aiType;
      aiInfo = v134;
      if ( v127 )
      {
LABEL_247:
        if ( func )
        {
          v128 = ((__int64 (__fastcall *)(intptr_t, AiLogic_o *, AiLogic_o *, intptr_t))func->fields.invoke_impl)(
                   func->fields.method_code,
                   v126,
                   v137,
                   func->fields.method);
          goto LABEL_251;
        }
LABEL_260:
        sub_1C32E7C(this);
      }
LABEL_252:
      v129 = v11 ^ v45;
      if ( ((v11 ^ v45) & 1) != 0 )
      {
        logicAi = aiInfo->fields.logicAi;
        if ( logicAi )
        {
          if ( (((__int64 (__fastcall *)(struct BattleLogicBaseAi_o *, AiLogic_AiInfo_o *, AiBaseEntity_o *, const MethodInfo *))logicAi->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr)(
                  logicAi,
                  aiInfo,
                  aiEnt,
                  logicAi->klass->vtable._18_CheckAiCanActionFromTargets.method)
              & 1) == 0 )
LABEL_255:
            v129 = 0;
        }
      }
      return v129 & 1;
    case 9:
      v24 = v141;
      v26 = 1;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_58;
    case 0xA:
      v26 = 1;
      v21 = 1;
      goto LABEL_55;
    case 0xB:
      v26 = 1;
      v21 = 2;
LABEL_55:
      v24 = v141;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      goto LABEL_56;
    case 0xC:
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0);
      if ( !v16 )
        goto LABEL_260;
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v141->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0);
      System_Collections_Generic_List_object___AddRange(
        v16,
        FieldEnemyServantList,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_86;
    case 0xD:
      v24 = v141;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v26 = 0;
LABEL_58:
      v28 = aiInfo;
      v21 = 0;
      goto LABEL_59;
    case 0xE:
      v21 = 1;
      goto LABEL_49;
    case 0xF:
      v21 = 2;
LABEL_49:
      v24 = v141;
      v25 = (System_Collections_Generic_List_AiInterface__o *)v16;
      v26 = 0;
LABEL_56:
      v28 = aiInfo;
LABEL_59:
      AiLogic__getTargetPosServant(v24, v25, v26, v28, v21, v19);
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
  if ( (byte_4C3A92C & 1) == 0 )
  {
    sub_1C32C20(&AiEntity_TypeInfo);
    this = (AiLogic_o *)sub_1C32C20(&AiLogic_AiInfo_TypeInfo);
    byte_4C3A92C = 1;
  }
  if ( !svtData )
    sub_1C32E7C(this);
  uniqueId = svtData->fields.uniqueId;
  v17 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.methodPtr)(
                       svtData,
                       svtData->klass->vtable._18_getAiState.method,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v18 = (AiLogic_AiInfo_o *)sub_1C32E6C(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v18, 1, uniqueId, v17, logicAi, procState, v19);
  *info = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)info, (int32_t)v18, v20, v21);
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
  if ( (byte_4C3A92E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    this = (AiLogic_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A92E = 1;
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
                          (const MethodInfo_3396838 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
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
    sub_1C32E7C(this);
  }
  return BasicAct;
}


AiFieldEntity_o *AiLogic__getAction_46519988(
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
  if ( (byte_4C3A92D & 1) == 0 )
  {
    sub_1C32C20(&AiFieldEntity_TypeInfo);
    this = (AiLogic_o *)sub_1C32C20(&AiLogic_AiInfo_TypeInfo);
    byte_4C3A92D = 1;
  }
  if ( !fieldData )
    sub_1C32E7C(this);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v16 = (AiLogic_AiInfo_o *)sub_1C32E6C(AiLogic_AiInfo_TypeInfo);
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
  System_Collections_Generic_List_object__o *v15; // x0
  System_Collections_Generic_List_object__o *thinkList; // x23
  System_Predicate_object__o *v17; // x24
  AiLogic___c_c *v18; // x8
  System_Collections_Generic_List_object__o *v19; // x23
  System_Comparison_T__o *_9__16_1; // x24
  Il2CppObject *v21; // x25
  struct AiLogic___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x24
  System_Predicate_object__o *v26; // x25
  const MethodInfo *v27; // x5
  int v28; // w8
  char *v29; // x24
  WeightRate_int__o *v30; // x25
  const MethodInfo *v31; // x5
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  char *v34; // x29
  __int64 v35; // x1
  int32_t Next; // w0
  const MethodInfo *v37; // x5
  AiBaseEntity_o *v38; // x24

  if ( (byte_4C3A92F & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_AiBaseEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    sub_1C32C20(&System_Predicate_AiBaseEntity__TypeInfo);
    sub_1C32C20(&Method_AiLogic___c__getBasicAct_b__16_1__);
    sub_1C32C20(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__);
    sub_1C32C20(&AiLogic___c__DisplayClass16_0_TypeInfo);
    sub_1C32C20(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__);
    sub_1C32C20(&AiLogic___c__DisplayClass16_1_TypeInfo);
    sub_1C32C20(&AiLogic___c_TypeInfo);
    sub_1C32C20(&Method_WeightRate_int___ctor__);
    sub_1C32C20(&Method_WeightRate_int__getCount__);
    sub_1C32C20(&Method_WeightRate_int__getData__);
    sub_1C32C20(&Method_WeightRate_int__getTotalWeight__);
    sub_1C32C20(&Method_WeightRate_int__setWeight__);
    sub_1C32C20(&WeightRate_int__TypeInfo);
    byte_4C3A92F = 1;
  }
  v13 = sub_1C32E6C(AiLogic___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_42;
  *(_DWORD *)(v13 + 16) = procState;
  *(_DWORD *)(v13 + 20) = actcnt;
  *(_DWORD *)(v13 + 24) = timingPriority;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v17 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_AiBaseEntity__TypeInfo);
  System_Predicate_object____ctor(v17, (Il2CppObject *)v13, Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, 0);
  if ( !thinkList )
    goto LABEL_42;
  All = System_Collections_Generic_List_object___FindAll(
          thinkList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_3798ECC *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v18 = AiLogic___c_TypeInfo;
  v19 = (System_Collections_Generic_List_object__o *)All;
  if ( !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v18 = AiLogic___c_TypeInfo;
  }
  _9__16_1 = (System_Comparison_T__o *)v18->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AiLogic___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__16_1 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__16_1, v21, Method_AiLogic___c__getBasicAct_b__16_1__, 0);
    static_fields = AiLogic___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_1, (int32_t)_9__16_1, v23, v24);
  }
  if ( !v19 )
LABEL_42:
    sub_1C32E7C(All);
  System_Collections_Generic_List_object___Sort_58303104(
    v19,
    _9__16_1,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v19->fields._size >= 1 )
  {
    while ( 1 )
    {
      v25 = sub_1C32E6C(AiLogic___c__DisplayClass16_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0);
      if ( v19->fields._size < 1 )
        return 0;
      All = System_Collections_Generic_List_object___get_Item(
              v19,
              0,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_42;
      if ( !v25 )
        goto LABEL_42;
      *(_DWORD *)(v25 + 16) = *((_DWORD *)All + 7);
      v26 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v25,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0);
      All = System_Collections_Generic_List_object___FindAll(
              v19,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_3798ECC *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_42;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_42;
      v28 = *((_DWORD *)All + 6);
      v29 = (char *)All;
      if ( v28 <= 1 )
        break;
      v30 = (WeightRate_int__o *)sub_1C32E6C(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v30, (const MethodInfo_3B8A1D4 *)Method_WeightRate_int___ctor__);
      v32 = *((_QWORD *)v29 + 3);
      if ( (int)v32 >= 1 )
      {
        v33 = 0;
        v34 = v29 + 32;
        while ( v33 < (unsigned int)v32 )
        {
          All = (void *)AiLogic__checkThinking_46521552(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v34[8 * v33],
                          turn,
                          *(_DWORD *)(v13 + 20),
                          v31);
          if ( v33 >= *((unsigned int *)v29 + 6) )
            break;
          v35 = *(_QWORD *)&v34[8 * v33];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v35 || !v30 )
              goto LABEL_42;
            WeightRate_int___setWeight(
              v30,
              *(_DWORD *)(v35 + 32),
              v33,
              (const MethodInfo_3B896F0 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v19,
                            (Il2CppObject *)v35,
                            (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v32) = *((_DWORD *)v29 + 6);
          if ( (__int64)++v33 >= (int)v32 )
            goto LABEL_29;
        }
LABEL_41:
        sub_1C32E84(All);
      }
LABEL_29:
      if ( !v30 )
        goto LABEL_42;
      if ( WeightRate_int___getCount(v30, (const MethodInfo_3B89AAC *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v30->fields.totalweight, 0);
        All = (void *)WeightRate_int___getData(v30, Next, (const MethodInfo_3B89B64 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v29 + 6) )
          goto LABEL_41;
        v38 = *(AiBaseEntity_o **)&v29[8 * (int)All + 32];
        if ( AiLogic__checkThinking_46521552(this, aiInfo, v38, turn, *(_DWORD *)(v13 + 20), v37) )
          return v38;
        goto LABEL_37;
      }
LABEL_38:
      if ( v19->fields._size <= 0 )
        return 0;
    }
    if ( !v28 )
      goto LABEL_41;
    All = (void *)AiLogic__checkThinking_46521552(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v13 + 20),
                    v27);
    if ( !*((_DWORD *)v29 + 6) )
      goto LABEL_41;
    v38 = (AiBaseEntity_o *)*((_QWORD *)v29 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v38;
LABEL_37:
    System_Collections_Generic_List_object___Remove(
      v19,
      (Il2CppObject *)v38,
      (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  if ( (byte_4C3A931 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1C32C20(&Method_System_Collections_Generic_List_AiInterface__Add__);
    byte_4C3A931 = 1;
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
    sub_1C32E7C(this);
  }
  size = targetList->fields._size;
  v17 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    targetList->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
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
  if ( (byte_4C3A928 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___77995672);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
    this = (AiLogic_o *)sub_1C32C20(&System_Collections_Generic_List_AiBaseEntity__TypeInfo);
    byte_4C3A928 = 1;
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
                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
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
      sub_1C32E7C(this);
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
        v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_58294448(
          v12,
          v11,
          (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___77995672);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v12;
        sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields._thinkList, (int32_t)v12, v13, v14);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->fields.aiState, (int32_t)inAiSate, v13, v14);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_1C32BC4((CGThumbnailListItem_o *)v12, (int32_t)inLogicAi, v15, v16);
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
  void *checkedInfo; // x0
  _DWORD *v13; // x22
  int32_t v14; // w20
  int32_t v15; // w21

  if ( (byte_4C3A935 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
    byte_4C3A935 = 1;
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
              (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v11,
                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      v13 = (_DWORD *)*((_QWORD *)checkedInfo + 3);
      if ( !v13 )
        return;
      v15 = v13[4];
      v14 = v13[5];
      checkedInfo = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13 + 392LL))(
                              *((_QWORD *)checkedInfo + 3),
                              *(_QWORD *)(*(_QWORD *)v13 + 400LL));
      if ( !svtData )
LABEL_17:
        sub_1C32E7C(checkedInfo);
      BattleServantData__addSkillInfo(svtData, v15, v14, (int32_t)checkedInfo, v13[9], -1, -1, 0, 0);
    }
  }
}


bool AiLogic_AiInfo__IsChecked(AiLogic_AiInfo_o *this, AiBaseEntity_o *aiBaseEntity, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // x20
  Il2CppObject *v7; // x0

  if ( (byte_4C3A934 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    byte_4C3A934 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._4_get_PrimaryKey.method);
  if ( !checkedInfo )
    sub_1C32E7C(v7);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
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
  Il2CppObject *v13; // x21

  if ( (byte_4C3A933 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
    byte_4C3A933 = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (CGThumbnailListItem_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v9,
        (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (CGThumbnailListItem_c *)v9;
      sub_1C32BC4(p_checkedInfo, (int32_t)v9, v10, v11);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._4_get_PrimaryKey.method,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v13 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (Il2CppObject *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)klass,
          v13,
          (Il2CppObject *)inCheckedInfo,
          (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_1C32E7C(klass);
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
  sub_1C32BC4((CGThumbnailListItem_o *)v7, (int32_t)inSkillInfo, v9, v10);
}


void AiLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A936 & 1) == 0 )
  {
    sub_1C32C20(&AiLogic___c_TypeInfo);
    byte_4C3A936 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(AiLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)AiLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return s->fields.priority == this->fields.priority;
}