void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEDA7 & 1) == 0 )
  {
    sub_1B640C8(&long___TypeInfo, method);
    byte_49FEDA7 = 1;
  }
  v3 = (struct System_Int64_array *)sub_1B64170(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wkZero, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AiLogic__INITLOG(AiLogic_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AiLogic__Initialize(AiLogic_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FED9C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_AiActMaster___, data);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FED9C = 1;
  }
  this->fields.Bdata = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v9, v10);
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
        sub_1B6432C(IsNullOrEmpty, v8);
      }
LABEL_19:
      sub_1B64324(IsNullOrEmpty);
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
  AiLogic_AiInfo_o *v15; // x25
  const MethodInfo *v16; // x6
  const MethodInfo *v17; // x4

  v10 = this;
  if ( (byte_49FED9E & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1B640C8(&AiLogic_AiInfo_TypeInfo, svtData);
    byte_49FED9E = 1;
  }
  if ( !svtData )
    sub_1B64324(this);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v15 = (AiLogic_AiInfo_o *)sub_1B64314(AiLogic_AiInfo_TypeInfo, v13, v14);
  AiLogic_AiInfo___ctor(v15, 1, uniqueId, v12, logicAi, procState, v16);
  return AiLogic__checkThinkingBase(v10, v15, procState, timingPriority, v17);
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
  __int64 v13; // x23
  System_Collections_Generic_List_T__o *All; // x0
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *thinkList; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Predicate_object__o *v19; // x20

  if ( (byte_49FEDA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, aiInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9);
    sub_1B640C8(&System_Predicate_AiBaseEntity__TypeInfo, v10);
    sub_1B640C8(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v11);
    sub_1B640C8(&AiLogic___c__DisplayClass12_0_TypeInfo, v12);
    byte_49FEDA0 = 1;
  }
  v13 = sub_1B64314(AiLogic___c__DisplayClass12_0_TypeInfo, aiInfo, *(_QWORD *)&procState);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = procState, *(_DWORD *)(v13 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v15),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v19 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_AiBaseEntity__TypeInfo, v17, v18),
        System_Predicate_object____ctor(
          v19,
          (Il2CppObject *)v13,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0LL),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v19,
                (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_1B64324(All);
  }
  return All->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiLogic__checkThinking_42882896(
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
  if ( (byte_49FED9F & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1B640C8(&AiLogic_AiInfo_TypeInfo, fieldData);
    byte_49FED9F = 1;
  }
  if ( !fieldData )
    sub_1B64324(this);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_1B64314(AiLogic_AiInfo_TypeInfo, fieldData, *(_QWORD *)&procState);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool __fastcall AiLogic__checkThinking_42885516(
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
  __int64 v32; // x1
  __int64 v33; // x2
  ConditionsInformation_CheckInfo_o *v34; // x25
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x5
  Il2CppObject *Bdata; // x1
  int32_t v40; // w4
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *v42; // x8
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
  __int64 v57; // x1
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_List_object__o *v59; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_Int64_array *v62; // x20
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x24
  bool v65; // w21
  _BOOL8 v66; // x0
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
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v83; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v86; // x8
  unsigned int paramater; // w27
  struct BattleData_o *v88; // x22
  __int64 v89; // x9
  int32_t *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  System_Collections_Generic_List_object__o *v93; // x9
  AiLogic_o *v94; // x20
  _BOOL8 v95; // x0
  Il2CppObject *v96; // x21
  Il2CppClass *v97; // x8
  __int64 v98; // x9
  int32_t *v99; // x10
  __int64 v100; // x0
  Il2CppClass *v101; // x8
  unsigned int v102; // w22
  struct BattleData_o *v103; // x23
  __int64 v104; // x9
  int32_t *v105; // x10
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x8
  __int64 v110; // x9
  double *v111; // x10
  double v112; // t1
  AiLogic_o *v113; // x29
  _BOOL8 v114; // x0
  Il2CppObject *v115; // x27
  Il2CppClass *v116; // x8
  __int64 v117; // x9
  int32_t *v118; // x10
  __int64 v119; // x0
  Il2CppClass *v120; // x8
  unsigned int v121; // w22
  struct BattleData_o *v122; // x23
  __int64 v123; // x9
  int32_t *v124; // x10
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  __int64 v128; // x11
  unsigned __int64 v129; // x10
  unsigned __int64 v130; // x9
  AiLogic_o *v131; // x22
  _BOOL8 v132; // x0
  Il2CppObject *v133; // x27
  Il2CppClass *v134; // x8
  __int64 v135; // x9
  int32_t *v136; // x10
  __int64 v137; // x0
  Il2CppClass *v138; // x8
  unsigned int v139; // w22
  struct BattleData_o *v140; // x23
  __int64 v141; // x9
  int32_t *v142; // x10
  __int64 v143; // x0
  __int64 v144; // x0
  __int64 v145; // x1
  __int64 v146; // x11
  unsigned __int64 aiType; // x10
  unsigned __int64 v148; // x9
  AiLogic_o *v149; // x1
  __int64 v150; // x8
  char v151; // w0
  char v152; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  System_Collections_Generic_List_object__o *v155; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v156; // [xsp+0h] [xbp-D0h]
  AiLogic_AiInfo_o *v157; // [xsp+8h] [xbp-C8h]
  unsigned __int8 v158; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v159; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v160; // [xsp+18h] [xbp-B8h]
  System_Int64_array *v161; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v164; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v165; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v166; // [xsp+50h] [xbp-80h] BYREF

  v7 = aiInfo;
  v164 = this;
  if ( (byte_49FEDA5 & 1) == 0 )
  {
    sub_1B640C8(&AiInterface_TypeInfo, aiInfo);
    sub_1B640C8(&Ai_COND_TypeInfo, v8);
    sub_1B640C8(&ConditionsInformation_TypeInfo, v9);
    sub_1B640C8(&double___TypeInfo, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Skip_long___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Take_long___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_long___, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v16);
    sub_1B640C8(&long___TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiInterface__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiInterface___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_AiInterface__TypeInfo, v22);
    sub_1B640C8(&StringLiteral_9236/*"NOT_"*/, v23);
    this = (AiLogic_o *)sub_1B640C8(&StringLiteral_1/*""*/, v24);
    byte_49FEDA5 = 1;
  }
  memset(&v166, 0, sizeof(v166));
  if ( !aiEnt )
    goto LABEL_260;
  Cond = Ai__getCond(aiEnt->fields.cond, 0LL);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0LL);
  if ( !v7 )
    goto LABEL_260;
  v26 = (System_String_o **)&StringLiteral_9236/*"NOT_"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v26 = (System_String_o **)&StringLiteral_1/*""*/;
  v27 = *v26;
  v28 = (unsigned __int8)this;
  v165.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v165.fields._index = -1LL;
  LODWORD(v165.fields._current) = Cond;
  v29 = System_Enum__ToString((System_Enum_o *)&v165, 0LL);
  System_String__Concat_61375396(v27, v29, 0LL);
  if ( !ConditionsInformation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  v31 = ConditionsInformation__getCheckFunction(Cond, v30);
  if ( !v31 )
    goto LABEL_255;
  v34 = v31;
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AiInterface__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v34->fields.target )
  {
    case 1:
      if ( !v35 )
        goto LABEL_260;
      Bdata = (Il2CppObject *)v164->fields.Bdata;
      goto LABEL_75;
    case 2:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      uniqueId = v7->fields.uniqueId;
      if ( v7->fields.aiType == 1 )
      {
        this = (AiLogic_o *)BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      else
      {
        this = (AiLogic_o *)BattleData__getBattleFieldData((BattleData_o *)this, uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      items = v35->fields._items;
      v49 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v35->fields._version;
      if ( !items )
        goto LABEL_260;
      Bdata = (Il2CppObject *)this;
      goto LABEL_83;
    case 3:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPTList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 4:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 5:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( v7->fields.aiType != 1 )
      {
        if ( !this || !v35 )
          goto LABEL_260;
        Bdata = *(Il2CppObject **)&this[7].fields._aiType;
        goto LABEL_75;
      }
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
      v42 = v164->fields.Bdata;
      if ( !v42 )
        goto LABEL_260;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_46;
      goto LABEL_22;
    case 6:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__isEnemyID((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        v42 = v164->fields.Bdata;
        if ( !v42 )
          goto LABEL_260;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_46:
          if ( !v35 )
            goto LABEL_260;
          Bdata = (Il2CppObject *)v42->fields.playerFieldStatus;
        }
        else
        {
LABEL_22:
          if ( !v35 )
            goto LABEL_260;
          Bdata = (Il2CppObject *)v42->fields.enemyFieldStatus;
        }
      }
      else
      {
        if ( !this || !v35 )
          goto LABEL_260;
        Bdata = (Il2CppObject *)this[7].fields.Bdata;
      }
LABEL_75:
      items = v35->fields._items;
      v49 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v35->fields._version;
      if ( !items )
        goto LABEL_260;
LABEL_83:
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          Bdata,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v51[4] = (Il2CppClass *)Bdata;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)Bdata, v36, v37);
      }
      goto LABEL_86;
    case 7:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPTList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      goto LABEL_79;
    case 8:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( v7->fields.aiType == 1 )
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getOpponentList((BattleData_o *)this, v7->fields.uniqueId, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
      else
      {
        if ( !this )
          goto LABEL_260;
        this = (AiLogic_o *)BattleData__getPlayerServantList((BattleData_o *)this, 0LL);
        if ( !v35 )
          goto LABEL_260;
      }
LABEL_79:
      System_Collections_Generic_List_object___AddRange(
        v35,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_86:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0LL);
      v52 = this;
      wkZero = v164->fields.wkZero;
      if ( v34->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_260;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v54 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_2E6FA60 *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v54,
                                (const MethodInfo_2E7133C *)Method_System_Linq_Enumerable_ToArray_long___);
          v52 = this;
        }
      }
      if ( v34->fields.isParams )
      {
        if ( !v52 )
          goto LABEL_260;
        if ( v52->fields._aiType >= 2 )
        {
          v55 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                  1,
                  (const MethodInfo_2E6FA60 *)Method_System_Linq_Enumerable_Skip_long___);
          v56 = System_Linq_Enumerable__Take_long_(
                  v55,
                  v52->fields._aiType - 1,
                  (const MethodInfo_2E702B0 *)Method_System_Linq_Enumerable_Take_long___);
          v161 = System_Linq_Enumerable__ToArray_long_(
                   v56,
                   (const MethodInfo_2E7133C *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1B64170(long___TypeInfo, 1LL);
          if ( v52->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v52->fields._thinkList;
              v160 = this;
LABEL_105:
              this->fields._thinkList = thinkList;
              goto LABEL_106;
            }
          }
          goto LABEL_153;
        }
      }
      else if ( v34->fields.isIndiv )
      {
        if ( !v52 )
          goto LABEL_260;
        if ( v52->fields._aiType >= 2 )
        {
          v59 = v35;
          v60 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                  1,
                  (const MethodInfo_2E6FA60 *)Method_System_Linq_Enumerable_Skip_long___);
          v61 = System_Linq_Enumerable__Take_long_(
                  v60,
                  v52->fields._aiType - 1,
                  (const MethodInfo_2E702B0 *)Method_System_Linq_Enumerable_Take_long___);
          v62 = System_Linq_Enumerable__ToArray_long_(
                  v61,
                  (const MethodInfo_2E7133C *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1B64170(long___TypeInfo, 1LL);
          if ( v52->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v52->fields._thinkList;
              v160 = this;
              v161 = wkZero;
              wkZero = v62;
              v35 = v59;
              goto LABEL_105;
            }
          }
LABEL_153:
          sub_1B6432C(this, v57);
        }
      }
      v160 = v52;
      v161 = wkZero;
LABEL_106:
      refine = v34->fields.refine;
      func = v34->fields.func;
      if ( !refine )
      {
        v158 = v28;
        if ( !v35 )
          goto LABEL_260;
        v156 = v35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v165,
          v35,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v166 = v165;
        while ( 1 )
        {
          v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v166,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v65 = v80;
          if ( !v80 )
            break;
          current = v166.fields._current;
          if ( !v166.fields._current )
            sub_1B64324(v80);
          klass = v166.fields._current->klass;
          v83 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v83;
              p_offset += 4;
              if ( !v83 )
                goto LABEL_136;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_136:
            p_method = sub_1BB60A8(v166.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v34,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v86 = current->klass;
            paramater = v34->fields.paramater;
            v88 = v164->fields.Bdata;
            v89 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
            {
              v90 = &v86->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v90 - 1) != AiInterface_TypeInfo )
              {
                --v89;
                v90 += 4;
                if ( !v89 )
                  goto LABEL_143;
              }
              v91 = (__int64)&v86->vtable[*v90].method;
            }
            else
            {
LABEL_143:
              v91 = sub_1BB60A8(current, AiInterface_TypeInfo, 0LL);
            }
            v92 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v91)(
                    current,
                    v88,
                    paramater,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v161,
                    aiEnt,
                    *(_QWORD *)(v91 + 8),
                    v156);
            if ( !func )
              sub_1B64324(v92);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v92,
                    v160,
                    *(_QWORD *)&func->fields.extra_arg) & 1) != 0 )
              break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v166,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
LABEL_148:
        v28 = v158;
        goto LABEL_252;
      }
      v65 = refine == 1;
      if ( refine == 1 )
      {
        v158 = v28;
        if ( !v35 )
          goto LABEL_260;
        v155 = v35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v165,
          v35,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v166 = v165;
        while ( 1 )
        {
          v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v166,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v67 = v66;
          if ( !v66 )
            break;
          v68 = v166.fields._current;
          if ( !v166.fields._current )
            sub_1B64324(v66);
          v69 = v166.fields._current->klass;
          v70 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
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
            v72 = sub_1BB60A8(v166.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v72)(
                  v68,
                  v34,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v72 + 8)) & 1) != 0 )
          {
            v73 = v68->klass;
            v74 = v34->fields.paramater;
            v75 = v164->fields.Bdata;
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
              v78 = sub_1BB60A8(v68, AiInterface_TypeInfo, 0LL);
            }
            v79 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v78)(
                    v68,
                    v75,
                    v74,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v161,
                    aiEnt,
                    *(_QWORD *)(v78 + 8),
                    v155);
            if ( !func )
              sub_1B64324(v79);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v79,
                    v160,
                    *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
              break;
          }
        }
        v65 = !v67;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v166,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        goto LABEL_148;
      }
      if ( refine == 2 )
      {
        this = (AiLogic_o *)sub_1B64170(double___TypeInfo, 0LL);
        if ( !v35 )
          goto LABEL_260;
        v131 = this;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v165,
          v35,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v166 = v165;
        while ( 1 )
        {
LABEL_213:
          v159 = v131;
          while ( 1 )
          {
            v132 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v166,
                     (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v132 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v166,
                (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
              v149 = v159;
              if ( !v159 )
                goto LABEL_260;
              if ( *(_QWORD *)&v159->fields._aiType )
                goto LABEL_247;
              goto LABEL_252;
            }
            v133 = v166.fields._current;
            if ( !v166.fields._current )
              sub_1B64324(v132);
            v134 = v166.fields._current->klass;
            v135 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
            {
              v136 = &v134->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v136 - 1) != AiInterface_TypeInfo )
              {
                --v135;
                v136 += 4;
                if ( !v135 )
                  goto LABEL_220;
              }
              v137 = (__int64)&v134->vtable[*v136 + 1].method;
            }
            else
            {
LABEL_220:
              v137 = sub_1BB60A8(v166.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v137)(
                    v133,
                    v34,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v137 + 8)) & 1) != 0 )
            {
              v138 = v133->klass;
              v139 = v34->fields.paramater;
              v140 = v164->fields.Bdata;
              v141 = *(unsigned __int16 *)(&v133->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v133->klass->_2.bitflags2 + 3) )
              {
                v142 = &v138->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v142 - 1) != AiInterface_TypeInfo )
                {
                  --v141;
                  v142 += 4;
                  if ( !v141 )
                    goto LABEL_227;
                }
                v143 = (__int64)&v138->vtable[*v142].method;
              }
              else
              {
LABEL_227:
                v143 = sub_1BB60A8(v133, AiInterface_TypeInfo, 0LL);
              }
              v144 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v143)(
                       v133,
                       v140,
                       v139,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v161,
                       aiEnt,
                       *(_QWORD *)(v143 + 8));
              if ( !v144 )
                sub_1B64324(0LL);
              v146 = *(_QWORD *)(v144 + 24);
              if ( v146 )
                break;
            }
          }
          v131 = v159;
          if ( !v159 )
            sub_1B64324(v144);
          if ( !*(_QWORD *)&v159->fields._aiType )
            v131 = (AiLogic_o *)v144;
          if ( (int)v146 >= 1 )
          {
            aiType = (unsigned int)v131->fields._aiType;
            v148 = 0LL;
            while ( 1 )
            {
              if ( (__int64)v148 < (int)aiType )
              {
                if ( v148 >= aiType )
                  sub_1B6432C(v144, v145);
                if ( *((double *)&v131->fields._thinkList + v148) < *(double *)(v144 + 8 * v148 + 32) )
                  break;
              }
              if ( (unsigned int)*(_QWORD *)(v144 + 24) == ++v148 )
                goto LABEL_213;
            }
            v131 = (AiLogic_o *)v144;
          }
        }
      }
      if ( refine != 3 )
      {
        if ( refine == 4 )
        {
          this = (AiLogic_o *)sub_1B64170(double___TypeInfo, 1LL);
          v93 = v35;
          if ( !v35 )
            goto LABEL_260;
          v94 = this;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v165,
            v93,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v166 = v165;
          while ( 1 )
          {
            v95 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v166,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v95 )
              break;
            v96 = v166.fields._current;
            if ( !v166.fields._current )
              sub_1B64324(v95);
            v97 = v166.fields._current->klass;
            v98 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
            {
              v99 = &v97->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v99 - 1) != AiInterface_TypeInfo )
              {
                --v98;
                v99 += 4;
                if ( !v98 )
                  goto LABEL_165;
              }
              v100 = (__int64)&v97->vtable[*v99 + 1].method;
            }
            else
            {
LABEL_165:
              v100 = sub_1BB60A8(v166.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v100)(
                    v96,
                    v34,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v100 + 8)) & 1) != 0 )
            {
              v101 = v96->klass;
              v102 = v34->fields.paramater;
              v103 = v164->fields.Bdata;
              v104 = *(unsigned __int16 *)(&v96->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v96->klass->_2.bitflags2 + 3) )
              {
                v105 = &v101->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v105 - 1) != AiInterface_TypeInfo )
                {
                  --v104;
                  v105 += 4;
                  if ( !v104 )
                    goto LABEL_172;
                }
                v106 = (__int64)&v101->vtable[*v105].method;
              }
              else
              {
LABEL_172:
                v106 = sub_1BB60A8(v96, AiInterface_TypeInfo, 0LL);
              }
              v107 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v106)(
                       v96,
                       v103,
                       v102,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v161,
                       aiEnt,
                       *(_QWORD *)(v106 + 8));
              if ( !v107 )
                sub_1B64324(0LL);
              v109 = *(unsigned int *)(v107 + 24);
              if ( v109 << 32 >= 1 )
              {
                v110 = (int)v109;
                v111 = (double *)(v107 + 32);
                do
                {
                  if ( !v109 )
                    sub_1B6432C(v107, v108);
                  if ( !v94 )
                    sub_1B64324(v107);
                  if ( !v94->fields._aiType )
                    sub_1B6432C(v107, v108);
                  v112 = *v111++;
                  --v110;
                  --v109;
                  *(double *)&v94->fields._thinkList = v112 + *(double *)&v94->fields._thinkList;
                }
                while ( v110 );
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v166,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          if ( !func )
            goto LABEL_260;
          v151 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   v94,
                   v160,
                   *(_QWORD *)&func->fields.extra_arg);
LABEL_251:
          v65 = v151;
        }
        goto LABEL_252;
      }
      v157 = v7;
      this = (AiLogic_o *)sub_1B64170(double___TypeInfo, 0LL);
      if ( !v35 )
        goto LABEL_260;
      v113 = this;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v165,
        v35,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v166 = v165;
LABEL_184:
      while ( 1 )
      {
        v114 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v166,
                 (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v114 )
          break;
        v115 = v166.fields._current;
        if ( !v166.fields._current )
          sub_1B64324(v114);
        v116 = v166.fields._current->klass;
        v117 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
        {
          v118 = &v116->_1.interfaceOffsets->offset;
          while ( *((AiInterface_c **)v118 - 1) != AiInterface_TypeInfo )
          {
            --v117;
            v118 += 4;
            if ( !v117 )
              goto LABEL_190;
          }
          v119 = (__int64)&v116->vtable[*v118 + 1].method;
        }
        else
        {
LABEL_190:
          v119 = sub_1BB60A8(v166.fields._current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v119)(
                v115,
                v34,
                wkZero,
                aiEnt,
                *(_QWORD *)(v119 + 8)) & 1) != 0 )
        {
          v120 = v115->klass;
          v121 = v34->fields.paramater;
          v122 = v164->fields.Bdata;
          v123 = *(unsigned __int16 *)(&v115->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v115->klass->_2.bitflags2 + 3) )
          {
            v124 = &v120->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v124 - 1) != AiInterface_TypeInfo )
            {
              --v123;
              v124 += 4;
              if ( !v123 )
                goto LABEL_197;
            }
            v125 = (__int64)&v120->vtable[*v124].method;
          }
          else
          {
LABEL_197:
            v125 = sub_1BB60A8(v115, AiInterface_TypeInfo, 0LL);
          }
          v126 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v125)(
                   v115,
                   v122,
                   v121,
                   (unsigned int)turn,
                   (unsigned int)actcnt,
                   v161,
                   aiEnt,
                   *(_QWORD *)(v125 + 8));
          if ( !v126 )
            sub_1B64324(0LL);
          v128 = *(_QWORD *)(v126 + 24);
          if ( v128 )
          {
            if ( !v113 )
              sub_1B64324(v126);
            if ( !*(_QWORD *)&v113->fields._aiType )
              goto LABEL_210;
            if ( (int)v128 >= 1 )
            {
              v129 = (unsigned int)v113->fields._aiType;
              v130 = 0LL;
              while ( 1 )
              {
                if ( (__int64)v130 < (int)v129 )
                {
                  if ( v130 >= v129 )
                    sub_1B6432C(v126, v127);
                  if ( *(double *)(v126 + 8 * v130 + 32) < *((double *)&v113->fields._thinkList + v130) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v126 + 24) == ++v130 )
                  goto LABEL_184;
              }
LABEL_210:
              v113 = (AiLogic_o *)v126;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v166,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      if ( !v113 )
        goto LABEL_260;
      v149 = v113;
      v150 = *(_QWORD *)&v113->fields._aiType;
      v7 = v157;
      if ( v150 )
      {
LABEL_247:
        if ( func )
        {
          v151 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   v149,
                   v160,
                   *(_QWORD *)&func->fields.extra_arg);
          goto LABEL_251;
        }
LABEL_260:
        sub_1B64324(this);
      }
LABEL_252:
      v152 = v28 ^ v65;
      if ( ((v28 ^ v65) & 1) != 0 )
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
            v152 = 0;
        }
      }
      return v152 & 1;
    case 9:
      v43 = v164;
      v45 = 1;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v35;
      goto LABEL_58;
    case 0xA:
      v45 = 1;
      v40 = 1;
      goto LABEL_55;
    case 0xB:
      v45 = 1;
      v40 = 2;
LABEL_55:
      v43 = v164;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v35;
      goto LABEL_56;
    case 0xC:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v35 )
        goto LABEL_260;
      System_Collections_Generic_List_object___AddRange(
        v35,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0LL);
      System_Collections_Generic_List_object___AddRange(
        v35,
        FieldEnemyServantList,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_86;
    case 0xD:
      v43 = v164;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v35;
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
      v43 = v164;
      v44 = (System_Collections_Generic_List_AiInterface__o *)v35;
      v45 = 0;
LABEL_56:
      v47 = v7;
LABEL_59:
      AiLogic__getTargetPosServant(v43, v44, v45, v47, v40, v38);
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
  __int64 v19; // x1
  __int64 v20; // x2
  AiLogic_AiInfo_o *v21; // x27
  const MethodInfo *v22; // x6
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w4
  const MethodInfo *v26; // x6
  AiEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v15 = this;
  if ( (byte_49FEDA1 & 1) == 0 )
  {
    sub_1B640C8(&AiEntity_TypeInfo, svtData);
    this = (AiLogic_o *)sub_1B640C8(&AiLogic_AiInfo_TypeInfo, v16);
    byte_49FEDA1 = 1;
  }
  if ( !svtData )
    sub_1B64324(this);
  uniqueId = svtData->fields.uniqueId;
  v18 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v21 = (AiLogic_AiInfo_o *)sub_1B64314(AiLogic_AiInfo_TypeInfo, v19, v20);
  AiLogic_AiInfo___ctor(v21, 1, uniqueId, v18, logicAi, procState, v22);
  *info = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)info, (int32_t)v21, v23, v24);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v25, timingPriority, v26);
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
  if ( (byte_49FEDA3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, aiInfo);
    this = (AiLogic_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49FEDA3 = 1;
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
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
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
    sub_1B64324(this);
  }
  return BasicAct;
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiLogic__getAction_42883952(
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
  if ( (byte_49FEDA2 & 1) == 0 )
  {
    sub_1B640C8(&AiFieldEntity_TypeInfo, fieldData);
    this = (AiLogic_o *)sub_1B640C8(&AiLogic_AiInfo_TypeInfo, v14);
    byte_49FEDA2 = 1;
  }
  if ( !fieldData )
    sub_1B64324(this);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v17 = (AiLogic_AiInfo_o *)sub_1B64314(AiLogic_AiInfo_TypeInfo, fieldData, *(_QWORD *)&procState);
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
  __int64 v34; // x22
  void *All; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_object__o *v38; // x0
  System_Collections_Generic_List_object__o *thinkList; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Predicate_object__o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  AiLogic___c_c *v45; // x8
  System_Collections_Generic_List_object__o *v46; // x23
  System_Comparison_T__o *_9__16_1; // x24
  Il2CppObject *v48; // x25
  struct AiLogic___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  System_Predicate_object__o *v57; // x25
  __int64 v58; // x1
  __int64 v59; // x2
  const MethodInfo *v60; // x5
  int v61; // w8
  char *v62; // x24
  WeightRate_int__o *v63; // x25
  const MethodInfo *v64; // x5
  __int64 v65; // x8
  unsigned __int64 v66; // x26
  char *v67; // x29
  __int64 v68; // x1
  int32_t Next; // w0
  const MethodInfo *v70; // x5
  AiBaseEntity_o *v71; // x24

  if ( (byte_49FEDA4 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_AiBaseEntity__TypeInfo, aiInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v20);
    sub_1B640C8(&System_Predicate_AiBaseEntity__TypeInfo, v21);
    sub_1B640C8(&Method_AiLogic___c__getBasicAct_b__16_1__, v22);
    sub_1B640C8(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v23);
    sub_1B640C8(&AiLogic___c__DisplayClass16_0_TypeInfo, v24);
    sub_1B640C8(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v25);
    sub_1B640C8(&AiLogic___c__DisplayClass16_1_TypeInfo, v26);
    sub_1B640C8(&AiLogic___c_TypeInfo, v27);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v28);
    sub_1B640C8(&Method_WeightRate_int__getCount__, v29);
    sub_1B640C8(&Method_WeightRate_int__getData__, v30);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v31);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v32);
    sub_1B640C8(&WeightRate_int__TypeInfo, v33);
    byte_49FEDA4 = 1;
  }
  v34 = sub_1B64314(AiLogic___c__DisplayClass16_0_TypeInfo, aiInfo, *(_QWORD *)&procState);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_42;
  *(_DWORD *)(v34 + 16) = procState;
  *(_DWORD *)(v34 + 20) = actcnt;
  *(_DWORD *)(v34 + 24) = timingPriority;
  v38 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v42 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_AiBaseEntity__TypeInfo, v40, v41);
  System_Predicate_object____ctor(
    v42,
    (Il2CppObject *)v34,
    Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__,
    0LL);
  if ( !thinkList )
    goto LABEL_42;
  All = System_Collections_Generic_List_object___FindAll(
          thinkList,
          (System_Predicate_T__o *)v42,
          (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
  v45 = AiLogic___c_TypeInfo;
  v46 = (System_Collections_Generic_List_object__o *)All;
  if ( !AiLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiLogic___c_TypeInfo);
    v45 = AiLogic___c_TypeInfo;
  }
  _9__16_1 = (System_Comparison_T__o *)v45->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = AiLogic___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__16_1 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_AiBaseEntity__TypeInfo, v43, v44);
    System_Comparison_object____ctor(_9__16_1, v48, Method_AiLogic___c__getBasicAct_b__16_1__, 0LL);
    static_fields = AiLogic___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_1, (int32_t)_9__16_1, v50, v51);
  }
  if ( !v46 )
LABEL_42:
    sub_1B64324(All);
  System_Collections_Generic_List_object___Sort_55243320(
    v46,
    _9__16_1,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v46->fields._size >= 1 )
  {
    while ( 1 )
    {
      v54 = sub_1B64314(AiLogic___c__DisplayClass16_1_TypeInfo, v52, v53);
      System_Object___ctor((Il2CppObject *)v54, 0LL);
      if ( v46->fields._size < 1 )
        return 0LL;
      All = System_Collections_Generic_List_object___get_Item(
              v46,
              0,
              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_42;
      if ( !v54 )
        goto LABEL_42;
      *(_DWORD *)(v54 + 16) = *((_DWORD *)All + 7);
      v57 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_AiBaseEntity__TypeInfo, v55, v56);
      System_Predicate_object____ctor(
        v57,
        (Il2CppObject *)v54,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0LL);
      All = System_Collections_Generic_List_object___FindAll(
              v46,
              (System_Predicate_T__o *)v57,
              (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_42;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_42;
      v61 = *((_DWORD *)All + 6);
      v62 = (char *)All;
      if ( v61 <= 1 )
        break;
      v63 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v58, v59);
      WeightRate_int____ctor(v63, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
      v65 = *((_QWORD *)v62 + 3);
      if ( (int)v65 >= 1 )
      {
        v66 = 0LL;
        v67 = v62 + 32;
        while ( v66 < (unsigned int)v65 )
        {
          All = (void *)AiLogic__checkThinking_42885516(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v67[8 * v66],
                          turn,
                          *(_DWORD *)(v34 + 20),
                          v64);
          if ( v66 >= *((unsigned int *)v62 + 6) )
            break;
          v68 = *(_QWORD *)&v67[8 * v66];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v68 || !v63 )
              goto LABEL_42;
            WeightRate_int___setWeight(
              v63,
              *(_DWORD *)(v68 + 32),
              v66,
              (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v46,
                            (Il2CppObject *)v68,
                            (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v65) = *((_DWORD *)v62 + 6);
          if ( (__int64)++v66 >= (int)v65 )
            goto LABEL_29;
        }
LABEL_41:
        sub_1B6432C(All, v58);
      }
LABEL_29:
      if ( !v63 )
        goto LABEL_42;
      if ( WeightRate_int___getCount(v63, (const MethodInfo_388C16C *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v63->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v63, Next, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v62 + 6) )
          goto LABEL_41;
        v71 = *(AiBaseEntity_o **)&v62[8 * (int)All + 32];
        if ( AiLogic__checkThinking_42885516(this, aiInfo, v71, turn, *(_DWORD *)(v34 + 20), v70) )
          return v71;
        goto LABEL_37;
      }
LABEL_38:
      if ( v46->fields._size <= 0 )
        return 0LL;
    }
    if ( !v61 )
      goto LABEL_41;
    All = (void *)AiLogic__checkThinking_42885516(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v34 + 20),
                    v60);
    if ( !*((_DWORD *)v62 + 6) )
      goto LABEL_41;
    v71 = (AiBaseEntity_o *)*((_QWORD *)v62 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v71;
LABEL_37:
    System_Collections_Generic_List_object___Remove(
      v46,
      (Il2CppObject *)v71,
      (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct AiInterface_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  AiLogic_o *v17; // x1
  Il2CppClass **v18; // x0

  v10 = this;
  if ( (byte_49FEDA6 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1B640C8(&Method_System_Collections_Generic_List_AiInterface__Add__, targetList);
    byte_49FEDA6 = 1;
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
        v15 = Method_System_Collections_Generic_List_AiInterface__Add__,
        ++targetList->fields._version,
        !items) )
  {
LABEL_16:
    sub_1B64324(this);
  }
  size = targetList->fields._size;
  v17 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    targetList->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3

  v6 = this;
  if ( (byte_49FED9D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___75643312, aiInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v8);
    this = (AiLogic_o *)sub_1B640C8(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v9);
    byte_49FED9D = 1;
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
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
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
      sub_1B64324(this);
    }
    if ( aiType == 1 )
    {
      if ( aiState )
      {
        ListFormGroupId = (System_Collections_Generic_IEnumerable_T__o *)AiMaster__getListFormGroupId(
                                                                           aiState->fields.aiGroupId,
                                                                           0LL);
LABEL_18:
        v16 = ListFormGroupId;
        v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_AiBaseEntity__TypeInfo,
                                                             v14,
                                                             v15);
        System_Collections_Generic_List_object____ctor_55234504(
          v17,
          v16,
          (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___75643312);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields._thinkList, (int32_t)v17, v18, v19);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.aiType = inAiType;
  v12->fields.uniqueId = inUniqueId;
  v12->fields.aiState = inAiSate;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->fields.aiState, (int32_t)inAiSate, v13, v14);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v12, (int32_t)inLogicAi, v15, v16);
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
  Il2CppObject *v12; // x23
  void *checkedInfo; // x0
  _DWORD *v14; // x22
  int32_t v15; // w20
  int32_t v16; // w21

  if ( (byte_49FEDAA & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      svtData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__, v11);
    byte_49FEDAA = 1;
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
              (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
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
        sub_1B64324(checkedInfo);
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

  if ( (byte_49FEDA9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      aiBaseEntity);
    byte_49FEDA9 = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_1B64324(v7);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
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
  ServantStatusBattleListViewItem_o *p_checkedInfo; // x20
  struct System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__o *checkedInfo; // t1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *klass; // x0
  Il2CppObject *v16; // x21

  if ( (byte_49FEDA8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__, aiBaseEntity);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v9);
    byte_49FEDA8 = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (ServantStatusBattleListViewItem_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo,
                                                                         aiBaseEntity,
                                                                         inCheckedInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v12,
        (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (ServantStatusBattleListViewItem_c *)v12;
      sub_1B6406C(p_checkedInfo, (int32_t)v12, v13, v14);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v16 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (Il2CppObject *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)klass,
          v16,
          (Il2CppObject *)inCheckedInfo,
          (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_1B64324(klass);
  }
}


void __fastcall AiLogic_AiInfo_CheckedInfo___ctor(
        AiLogic_AiInfo_CheckedInfo_o *this,
        int32_t inActType,
        bool inNoMessage,
        BattleSkillInfoData_o *inSkillInfo,
        const MethodInfo *method)
{
  AiLogic_AiInfo_CheckedInfo_o *v7; // x21
  bool v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3

  v7 = this;
  v8 = inNoMessage;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7->fields.tempSkillInfo = inSkillInfo;
  v7 = (AiLogic_AiInfo_CheckedInfo_o *)((char *)v7 + 24);
  LODWORD(v7[-1].fields.tempSkillInfo) = inActType;
  BYTE4(v7[-1].fields.tempSkillInfo) = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v7, (int32_t)inSkillInfo, v9, v10);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEDAB & 1) == 0 )
  {
    sub_1B640C8(&AiLogic___c_TypeInfo, v1);
    byte_49FEDAB = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AiLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)AiLogic___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return s->fields.priority == this->fields.priority;
}