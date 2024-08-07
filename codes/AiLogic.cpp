void __fastcall AiLogic___ctor(AiLogic_o *this, const MethodInfo *method)
{
  struct System_Int64_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A014CB & 1) == 0 )
  {
    sub_1B64A00(&long___TypeInfo, method);
    byte_4A014CB = 1;
  }
  v3 = (struct System_Int64_array *)sub_1B64AA8(long___TypeInfo, 0LL);
  this->fields.wkZero = v3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.wkZero, (int32_t)v3, v4, v5);
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
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A014C0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_AiActMaster___, data);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A014C0 = 1;
  }
  this->fields.Bdata = data;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v8);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v10, v11);
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
        sub_1B64C64(IsNullOrEmpty, v8);
      }
LABEL_19:
      sub_1B64C5C(IsNullOrEmpty, v8);
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
  if ( (byte_4A014C2 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1B64A00(&AiLogic_AiInfo_TypeInfo, svtData);
    byte_4A014C2 = 1;
  }
  if ( !svtData )
    sub_1B64C5C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v12 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, BattleLogicBaseAi_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       logicAi,
                       *(_QWORD *)&timingPriority,
                       method);
  v13 = (AiLogic_AiInfo_o *)sub_1B64C4C(AiLogic_AiInfo_TypeInfo);
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

  if ( (byte_4A014C4 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, aiInfo);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v9);
    sub_1B64A00(&System_Predicate_AiBaseEntity__TypeInfo, v10);
    sub_1B64A00(&Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__, v11);
    sub_1B64A00(&AiLogic___c__DisplayClass12_0_TypeInfo, v12);
    byte_4A014C4 = 1;
  }
  v13 = sub_1B64C4C(AiLogic___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = procState, *(_DWORD *)(v13 + 20) = timingPriority, !aiInfo)
    || (AiLogic__updateThinkGroup(this, aiInfo, aiInfo->fields.aiState, v16),
        thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList,
        v18 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_AiBaseEntity__TypeInfo),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v13,
          Method_AiLogic___c__DisplayClass12_0__checkThinkingBase_b__0__,
          0LL),
        !thinkList)
    || (All = System_Collections_Generic_List_object___FindAll(
                thinkList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_34B06D8 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__)) == 0LL )
  {
    sub_1B64C5C(All, v15);
  }
  return All->fields._size > 0;
}


bool __fastcall AiLogic__checkThinking_42892528(
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
  if ( (byte_4A014C3 & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1B64A00(&AiLogic_AiInfo_TypeInfo, fieldData);
    byte_4A014C3 = 1;
  }
  if ( !fieldData )
    sub_1B64C5C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v11 = (AiLogic_AiInfo_o *)sub_1B64C4C(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v11, 2, index, aiState, logicAi, procState, v12);
  return AiLogic__checkThinkingBase(v8, v11, procState, 0, v13);
}


bool __fastcall AiLogic__checkThinking_42895148(
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
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x5
  int32_t v37; // w4
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  struct BattleData_o *Bdata; // x8
  AiLogic_o *v40; // x0
  System_Collections_Generic_List_AiInterface__o *v41; // x1
  bool v42; // w2
  int32_t uniqueId; // w1
  AiLogic_AiInfo_o *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  AiLogic_o *v49; // x21
  System_Int64_array *wkZero; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  struct System_Collections_Generic_List_AiBaseEntity__o *thinkList; // x8
  System_Collections_Generic_List_object__o *v55; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Int64_array *v58; // x20
  int32_t refine; // w8
  struct ConditionsInformation_ISCheckFunction_o *func; // x24
  bool v61; // w21
  _BOOL8 v62; // x0
  __int64 v63; // x1
  bool v64; // w20
  Il2CppObject *v65; // x27
  Il2CppClass *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  Il2CppClass *v70; // x8
  unsigned int v71; // w22
  struct BattleData_o *v72; // x23
  __int64 v73; // x9
  int32_t *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  _BOOL8 v77; // x0
  __int64 v78; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x8
  __int64 v81; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v84; // x8
  unsigned int paramater; // w27
  struct BattleData_o *v86; // x22
  __int64 v87; // x9
  int32_t *v88; // x10
  __int64 v89; // x0
  __int64 v90; // x0
  System_Collections_Generic_List_object__o *v91; // x9
  AiLogic_o *v92; // x20
  _BOOL8 v93; // x0
  __int64 v94; // x1
  Il2CppObject *v95; // x21
  Il2CppClass *v96; // x8
  __int64 v97; // x9
  int32_t *v98; // x10
  __int64 v99; // x0
  Il2CppClass *v100; // x8
  unsigned int v101; // w22
  struct BattleData_o *v102; // x23
  __int64 v103; // x9
  int32_t *v104; // x10
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  __int64 v108; // x8
  __int64 v109; // x9
  double *v110; // x10
  double v111; // t1
  AiLogic_AiInfo_o *v112; // x29
  _BOOL8 v113; // x0
  __int64 v114; // x1
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
  unsigned __int64 aiState_low; // x10
  unsigned __int64 v130; // x9
  AiLogic_o *v131; // x22
  _BOOL8 v132; // x0
  __int64 v133; // x1
  Il2CppObject *v134; // x27
  Il2CppClass *v135; // x8
  __int64 v136; // x9
  int32_t *v137; // x10
  __int64 v138; // x0
  Il2CppClass *v139; // x8
  unsigned int v140; // w22
  struct BattleData_o *v141; // x23
  __int64 v142; // x9
  int32_t *v143; // x10
  __int64 v144; // x0
  __int64 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x11
  unsigned __int64 aiType; // x10
  unsigned __int64 v149; // x9
  struct AiState_o *aiState; // x8
  char v151; // w0
  char v152; // w20
  struct BattleLogicBaseAi_o *logicAi; // x0
  System_Collections_Generic_List_object__o *v155; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v156; // [xsp+0h] [xbp-D0h]
  AiLogic_AiInfo_o *v157; // [xsp+8h] [xbp-C8h]
  unsigned __int8 v158; // [xsp+10h] [xbp-C0h]
  AiLogic_AiInfo_o *v159; // [xsp+10h] [xbp-C0h]
  AiLogic_o *v160; // [xsp+18h] [xbp-B8h]
  System_Int64_array *v161; // [xsp+20h] [xbp-B0h]
  AiLogic_o *v164; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v165; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v166; // [xsp+50h] [xbp-80h] BYREF

  v7 = aiInfo;
  v164 = this;
  if ( (byte_4A014C9 & 1) == 0 )
  {
    sub_1B64A00(&AiInterface_TypeInfo, aiInfo);
    sub_1B64A00(&Ai_COND_TypeInfo, v8);
    sub_1B64A00(&ConditionsInformation_TypeInfo, v9);
    sub_1B64A00(&double___TypeInfo, v10);
    sub_1B64A00(&Method_System_Linq_Enumerable_Skip_long___, v11);
    sub_1B64A00(&Method_System_Linq_Enumerable_Take_long___, v12);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_long___, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_AiInterface__get_Current__, v16);
    sub_1B64A00(&long___TypeInfo, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiInterface__AddRange__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiInterface__Add__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiInterface__GetEnumerator__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiInterface___ctor__, v21);
    sub_1B64A00(&System_Collections_Generic_List_AiInterface__TypeInfo, v22);
    sub_1B64A00(&StringLiteral_9239/*"NOT_"*/, v23);
    this = (AiLogic_o *)sub_1B64A00(&StringLiteral_1/*""*/, v24);
    byte_4A014C9 = 1;
  }
  memset(&v166, 0, sizeof(v166));
  if ( !aiEnt )
    goto LABEL_260;
  Cond = Ai__getCond(aiEnt->fields.cond, 0LL);
  this = (AiLogic_o *)Ai__getReversal(aiEnt->fields.cond, 0LL);
  if ( !v7 )
    goto LABEL_260;
  v26 = (System_String_o **)&StringLiteral_9239/*"NOT_"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v26 = (System_String_o **)&StringLiteral_1/*""*/;
  v27 = *v26;
  v28 = (unsigned __int8)this;
  v165.fields._list = (struct System_Collections_Generic_List_T__o *)Ai_COND_TypeInfo;
  *(_QWORD *)&v165.fields._index = -1LL;
  LODWORD(v165.fields._current) = Cond;
  v29 = System_Enum__ToString((System_Enum_o *)&v165, 0LL);
  System_String__Concat_61385136(v27, v29, 0LL);
  if ( !ConditionsInformation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  v31 = ConditionsInformation__getCheckFunction(Cond, v30);
  if ( !v31 )
    goto LABEL_255;
  v32 = v31;
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_AiInterface__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_AiInterface___ctor__);
  switch ( v32->fields.target )
  {
    case 1:
      if ( !v33 )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)v164->fields.Bdata;
      goto LABEL_75;
    case 2:
      this = (AiLogic_o *)v164->fields.Bdata;
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
      v46 = Method_System_Collections_Generic_List_AiInterface__Add__;
      ++v33->fields._version;
      if ( !items )
        goto LABEL_260;
      aiInfo = (AiLogic_AiInfo_o *)this;
      goto LABEL_83;
    case 3:
      this = (AiLogic_o *)v164->fields.Bdata;
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
      this = (AiLogic_o *)v164->fields.Bdata;
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
      this = (AiLogic_o *)v164->fields.Bdata;
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
      Bdata = v164->fields.Bdata;
      if ( !Bdata )
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
        Bdata = v164->fields.Bdata;
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
      v46 = Method_System_Collections_Generic_List_AiInterface__Add__;
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
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v48[4] = (Il2CppClass *)aiInfo;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)aiInfo, v34, v35);
      }
      goto LABEL_86;
    case 7:
      this = (AiLogic_o *)v164->fields.Bdata;
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
      this = (AiLogic_o *)v164->fields.Bdata;
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
        (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
LABEL_86:
      this = (AiLogic_o *)AiBaseEntity__getVals(aiEnt, 0LL);
      v49 = this;
      wkZero = v164->fields.wkZero;
      if ( v32->fields.paramater == 41 )
      {
        if ( !this )
          goto LABEL_260;
        if ( *(_QWORD *)&this->fields._aiType )
        {
          v51 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)this,
                  1,
                  (const MethodInfo_2E72354 *)Method_System_Linq_Enumerable_Skip_long___);
          this = (AiLogic_o *)System_Linq_Enumerable__ToArray_long_(
                                v51,
                                (const MethodInfo_2E73C30 *)Method_System_Linq_Enumerable_ToArray_long___);
          v49 = this;
        }
      }
      if ( v32->fields.isParams )
      {
        if ( !v49 )
          goto LABEL_260;
        if ( v49->fields._aiType >= 2 )
        {
          v52 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                  1,
                  (const MethodInfo_2E72354 *)Method_System_Linq_Enumerable_Skip_long___);
          v53 = System_Linq_Enumerable__Take_long_(
                  v52,
                  v49->fields._aiType - 1,
                  (const MethodInfo_2E72BA4 *)Method_System_Linq_Enumerable_Take_long___);
          v161 = System_Linq_Enumerable__ToArray_long_(
                   v53,
                   (const MethodInfo_2E73C30 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1B64AA8(long___TypeInfo, 1LL);
          if ( v49->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v49->fields._thinkList;
              v160 = this;
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
        if ( !v49 )
          goto LABEL_260;
        if ( v49->fields._aiType >= 2 )
        {
          v55 = v33;
          v56 = System_Linq_Enumerable__Skip_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                  1,
                  (const MethodInfo_2E72354 *)Method_System_Linq_Enumerable_Skip_long___);
          v57 = System_Linq_Enumerable__Take_long_(
                  v56,
                  v49->fields._aiType - 1,
                  (const MethodInfo_2E72BA4 *)Method_System_Linq_Enumerable_Take_long___);
          v58 = System_Linq_Enumerable__ToArray_long_(
                  v57,
                  (const MethodInfo_2E73C30 *)Method_System_Linq_Enumerable_ToArray_long___);
          this = (AiLogic_o *)sub_1B64AA8(long___TypeInfo, 1LL);
          if ( v49->fields._aiType )
          {
            if ( !this )
              goto LABEL_260;
            if ( this->fields._aiType )
            {
              thinkList = v49->fields._thinkList;
              v160 = this;
              v161 = wkZero;
              wkZero = v58;
              v33 = v55;
              goto LABEL_105;
            }
          }
LABEL_153:
          sub_1B64C64(this, aiInfo);
        }
      }
      v160 = v49;
      v161 = wkZero;
LABEL_106:
      refine = v32->fields.refine;
      func = v32->fields.func;
      if ( !refine )
      {
        v158 = v28;
        if ( !v33 )
          goto LABEL_260;
        v156 = v33;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v165,
          v33,
          (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v166 = v165;
        while ( 1 )
        {
          v77 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v166,
                  (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v61 = v77;
          if ( !v77 )
            break;
          current = v166.fields._current;
          if ( !v166.fields._current )
            sub_1B64C5C(v77, v78);
          klass = v166.fields._current->klass;
          v81 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)p_offset - 1) != AiInterface_TypeInfo )
            {
              --v81;
              p_offset += 4;
              if ( !v81 )
                goto LABEL_136;
            }
            p_method = (__int64)&klass->vtable[*p_offset + 1].method;
          }
          else
          {
LABEL_136:
            p_method = sub_1BB69E0(v166.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))p_method)(
                  current,
                  v32,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(p_method + 8)) & 1) != 0 )
          {
            v84 = current->klass;
            paramater = v32->fields.paramater;
            v86 = v164->fields.Bdata;
            v87 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
            {
              v88 = &v84->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v88 - 1) != AiInterface_TypeInfo )
              {
                --v87;
                v88 += 4;
                if ( !v87 )
                  goto LABEL_143;
              }
              v89 = (__int64)&v84->vtable[*v88].method;
            }
            else
            {
LABEL_143:
              v89 = sub_1BB69E0(current, AiInterface_TypeInfo, 0LL);
            }
            v90 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v89)(
                    current,
                    v86,
                    paramater,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v161,
                    aiEnt,
                    *(_QWORD *)(v89 + 8),
                    v156);
            if ( !func )
              sub_1B64C5C(v90, v90);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v90,
                    v160,
                    *(_QWORD *)&func->fields.extra_arg) & 1) != 0 )
              break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v166,
          (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
LABEL_148:
        v28 = v158;
        goto LABEL_252;
      }
      v61 = refine == 1;
      if ( refine == 1 )
      {
        v158 = v28;
        if ( !v33 )
          goto LABEL_260;
        v155 = v33;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v165,
          v33,
          (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v166 = v165;
        while ( 1 )
        {
          v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v166,
                  (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
          v64 = v62;
          if ( !v62 )
            break;
          v65 = v166.fields._current;
          if ( !v166.fields._current )
            sub_1B64C5C(v62, v63);
          v66 = v166.fields._current->klass;
          v67 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
          {
            v68 = &v66->_1.interfaceOffsets->offset;
            while ( *((AiInterface_c **)v68 - 1) != AiInterface_TypeInfo )
            {
              --v67;
              v68 += 4;
              if ( !v67 )
                goto LABEL_116;
            }
            v69 = (__int64)&v66->vtable[*v68 + 1].method;
          }
          else
          {
LABEL_116:
            v69 = sub_1BB69E0(v166.fields._current, AiInterface_TypeInfo, 1LL);
          }
          if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v69)(
                  v65,
                  v32,
                  wkZero,
                  aiEnt,
                  *(_QWORD *)(v69 + 8)) & 1) != 0 )
          {
            v70 = v65->klass;
            v71 = v32->fields.paramater;
            v72 = v164->fields.Bdata;
            v73 = *(unsigned __int16 *)(&v65->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v65->klass->_2.bitflags2 + 3) )
            {
              v74 = &v70->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v74 - 1) != AiInterface_TypeInfo )
              {
                --v73;
                v74 += 4;
                if ( !v73 )
                  goto LABEL_123;
              }
              v75 = (__int64)&v70->vtable[*v74].method;
            }
            else
            {
LABEL_123:
              v75 = sub_1BB69E0(v65, AiInterface_TypeInfo, 0LL);
            }
            v76 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD, System_Collections_Generic_List_object__o *))v75)(
                    v65,
                    v72,
                    v71,
                    (unsigned int)turn,
                    (unsigned int)actcnt,
                    v161,
                    aiEnt,
                    *(_QWORD *)(v75 + 8),
                    v155);
            if ( !func )
              sub_1B64C5C(v76, v76);
            if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, AiLogic_o *, _QWORD))func->fields.m_target)(
                    func->fields.original_method_info,
                    v76,
                    v160,
                    *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
              break;
          }
        }
        v61 = !v64;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v166,
          (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
        goto LABEL_148;
      }
      if ( refine == 2 )
      {
        this = (AiLogic_o *)sub_1B64AA8(double___TypeInfo, 0LL);
        if ( !v33 )
          goto LABEL_260;
        v131 = this;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v165,
          v33,
          (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
        v166 = v165;
        while ( 1 )
        {
LABEL_213:
          v159 = (AiLogic_AiInfo_o *)v131;
          while ( 1 )
          {
            v132 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v166,
                     (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v132 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v166,
                (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
              aiInfo = v159;
              if ( !v159 )
                goto LABEL_260;
              if ( v159->fields.aiState )
                goto LABEL_247;
              goto LABEL_252;
            }
            v134 = v166.fields._current;
            if ( !v166.fields._current )
              sub_1B64C5C(v132, v133);
            v135 = v166.fields._current->klass;
            v136 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
            {
              v137 = &v135->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v137 - 1) != AiInterface_TypeInfo )
              {
                --v136;
                v137 += 4;
                if ( !v136 )
                  goto LABEL_220;
              }
              v138 = (__int64)&v135->vtable[*v137 + 1].method;
            }
            else
            {
LABEL_220:
              v138 = sub_1BB69E0(v166.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v138)(
                    v134,
                    v32,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v138 + 8)) & 1) != 0 )
            {
              v139 = v134->klass;
              v140 = v32->fields.paramater;
              v141 = v164->fields.Bdata;
              v142 = *(unsigned __int16 *)(&v134->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v134->klass->_2.bitflags2 + 3) )
              {
                v143 = &v139->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v143 - 1) != AiInterface_TypeInfo )
                {
                  --v142;
                  v143 += 4;
                  if ( !v142 )
                    goto LABEL_227;
                }
                v144 = (__int64)&v139->vtable[*v143].method;
              }
              else
              {
LABEL_227:
                v144 = sub_1BB69E0(v134, AiInterface_TypeInfo, 0LL);
              }
              v145 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v144)(
                       v134,
                       v141,
                       v140,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v161,
                       aiEnt,
                       *(_QWORD *)(v144 + 8));
              if ( !v145 )
                sub_1B64C5C(0LL, v146);
              v147 = *(_QWORD *)(v145 + 24);
              if ( v147 )
                break;
            }
          }
          v131 = (AiLogic_o *)v159;
          if ( !v159 )
            sub_1B64C5C(v145, v146);
          if ( !v159->fields.aiState )
            v131 = (AiLogic_o *)v145;
          if ( (int)v147 >= 1 )
          {
            aiType = (unsigned int)v131->fields._aiType;
            v149 = 0LL;
            while ( 1 )
            {
              if ( (__int64)v149 < (int)aiType )
              {
                if ( v149 >= aiType )
                  sub_1B64C64(v145, v146);
                if ( *((double *)&v131->fields._thinkList + v149) < *(double *)(v145 + 8 * v149 + 32) )
                  break;
              }
              if ( (unsigned int)*(_QWORD *)(v145 + 24) == ++v149 )
                goto LABEL_213;
            }
            v131 = (AiLogic_o *)v145;
          }
        }
      }
      if ( refine != 3 )
      {
        if ( refine == 4 )
        {
          this = (AiLogic_o *)sub_1B64AA8(double___TypeInfo, 1LL);
          v91 = v33;
          if ( !v33 )
            goto LABEL_260;
          v92 = this;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v165,
            v91,
            (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
          v166 = v165;
          while ( 1 )
          {
            v93 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v166,
                    (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
            if ( !v93 )
              break;
            v95 = v166.fields._current;
            if ( !v166.fields._current )
              sub_1B64C5C(v93, v94);
            v96 = v166.fields._current->klass;
            v97 = *(unsigned __int16 *)(&v166.fields._current->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v166.fields._current->klass->_2.bitflags2 + 3) )
            {
              v98 = &v96->_1.interfaceOffsets->offset;
              while ( *((AiInterface_c **)v98 - 1) != AiInterface_TypeInfo )
              {
                --v97;
                v98 += 4;
                if ( !v97 )
                  goto LABEL_165;
              }
              v99 = (__int64)&v96->vtable[*v98 + 1].method;
            }
            else
            {
LABEL_165:
              v99 = sub_1BB69E0(v166.fields._current, AiInterface_TypeInfo, 1LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v99)(
                    v95,
                    v32,
                    wkZero,
                    aiEnt,
                    *(_QWORD *)(v99 + 8)) & 1) != 0 )
            {
              v100 = v95->klass;
              v101 = v32->fields.paramater;
              v102 = v164->fields.Bdata;
              v103 = *(unsigned __int16 *)(&v95->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v95->klass->_2.bitflags2 + 3) )
              {
                v104 = &v100->_1.interfaceOffsets->offset;
                while ( *((AiInterface_c **)v104 - 1) != AiInterface_TypeInfo )
                {
                  --v103;
                  v104 += 4;
                  if ( !v103 )
                    goto LABEL_172;
                }
                v105 = (__int64)&v100->vtable[*v104].method;
              }
              else
              {
LABEL_172:
                v105 = sub_1BB69E0(v95, AiInterface_TypeInfo, 0LL);
              }
              v106 = (*(__int64 (__fastcall **)(Il2CppObject *, struct BattleData_o *, _QWORD, _QWORD, _QWORD, System_Int64_array *, AiBaseEntity_o *, _QWORD))v105)(
                       v95,
                       v102,
                       v101,
                       (unsigned int)turn,
                       (unsigned int)actcnt,
                       v161,
                       aiEnt,
                       *(_QWORD *)(v105 + 8));
              if ( !v106 )
                sub_1B64C5C(0LL, v107);
              v108 = *(unsigned int *)(v106 + 24);
              if ( v108 << 32 >= 1 )
              {
                v109 = (int)v108;
                v110 = (double *)(v106 + 32);
                do
                {
                  if ( !v108 )
                    sub_1B64C64(v106, v107);
                  if ( !v92 )
                    sub_1B64C5C(v106, v107);
                  if ( !v92->fields._aiType )
                    sub_1B64C64(v106, v107);
                  v111 = *v110++;
                  --v109;
                  --v108;
                  *(double *)&v92->fields._thinkList = v111 + *(double *)&v92->fields._thinkList;
                }
                while ( v109 );
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v166,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
          if ( !func )
            goto LABEL_260;
          v151 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   v92,
                   v160,
                   *(_QWORD *)&func->fields.extra_arg);
LABEL_251:
          v61 = v151;
        }
        goto LABEL_252;
      }
      v157 = v7;
      this = (AiLogic_o *)sub_1B64AA8(double___TypeInfo, 0LL);
      if ( !v33 )
        goto LABEL_260;
      v112 = (AiLogic_AiInfo_o *)this;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v165,
        v33,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_AiInterface__GetEnumerator__);
      v166 = v165;
LABEL_184:
      while ( 1 )
      {
        v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v166,
                 (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__MoveNext__);
        if ( !v113 )
          break;
        v115 = v166.fields._current;
        if ( !v166.fields._current )
          sub_1B64C5C(v113, v114);
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
          v119 = sub_1BB69E0(v166.fields._current, AiInterface_TypeInfo, 1LL);
        }
        if ( ((*(__int64 (__fastcall **)(Il2CppObject *, ConditionsInformation_CheckInfo_o *, System_Int64_array *, AiBaseEntity_o *, _QWORD))v119)(
                v115,
                v32,
                wkZero,
                aiEnt,
                *(_QWORD *)(v119 + 8)) & 1) != 0 )
        {
          v120 = v115->klass;
          v121 = v32->fields.paramater;
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
            v125 = sub_1BB69E0(v115, AiInterface_TypeInfo, 0LL);
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
            sub_1B64C5C(0LL, v127);
          v128 = *(_QWORD *)(v126 + 24);
          if ( v128 )
          {
            if ( !v112 )
              sub_1B64C5C(v126, v127);
            if ( !v112->fields.aiState )
              goto LABEL_210;
            if ( (int)v128 >= 1 )
            {
              aiState_low = LODWORD(v112->fields.aiState);
              v130 = 0LL;
              while ( 1 )
              {
                if ( (__int64)v130 < (int)aiState_low )
                {
                  if ( v130 >= aiState_low )
                    sub_1B64C64(v126, v127);
                  if ( *(double *)(v126 + 8 * v130 + 32) < *((double *)&v112->fields.logicAi + v130) )
                    break;
                }
                if ( (unsigned int)*(_QWORD *)(v126 + 24) == ++v130 )
                  goto LABEL_184;
              }
LABEL_210:
              v112 = (AiLogic_AiInfo_o *)v126;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v166,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_AiInterface__Dispose__);
      if ( !v112 )
        goto LABEL_260;
      aiInfo = v112;
      aiState = v112->fields.aiState;
      v7 = v157;
      if ( aiState )
      {
LABEL_247:
        if ( func )
        {
          v151 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, AiLogic_AiInfo_o *, AiLogic_o *, _QWORD))func->fields.m_target)(
                   func->fields.original_method_info,
                   aiInfo,
                   v160,
                   *(_QWORD *)&func->fields.extra_arg);
          goto LABEL_251;
        }
LABEL_260:
        sub_1B64C5C(this, aiInfo);
      }
LABEL_252:
      v152 = v28 ^ v61;
      if ( ((v28 ^ v61) & 1) != 0 )
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
      v40 = v164;
      v42 = 1;
      v41 = (System_Collections_Generic_List_AiInterface__o *)v33;
      goto LABEL_58;
    case 0xA:
      v42 = 1;
      v37 = 1;
      goto LABEL_55;
    case 0xB:
      v42 = 1;
      v37 = 2;
LABEL_55:
      v40 = v164;
      v41 = (System_Collections_Generic_List_AiInterface__o *)v33;
      goto LABEL_56;
    case 0xC:
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      this = (AiLogic_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
      if ( !v33 )
        goto LABEL_260;
      System_Collections_Generic_List_object___AddRange(
        v33,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      this = (AiLogic_o *)v164->fields.Bdata;
      if ( !this )
        goto LABEL_260;
      FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                               (BattleData_o *)this,
                                                                               0,
                                                                               0LL);
      System_Collections_Generic_List_object___AddRange(
        v33,
        FieldEnemyServantList,
        (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_AiInterface__AddRange__);
      goto LABEL_86;
    case 0xD:
      v40 = v164;
      v41 = (System_Collections_Generic_List_AiInterface__o *)v33;
      v42 = 0;
LABEL_58:
      v44 = v7;
      v37 = 0;
      goto LABEL_59;
    case 0xE:
      v37 = 1;
      goto LABEL_49;
    case 0xF:
      v37 = 2;
LABEL_49:
      v40 = v164;
      v41 = (System_Collections_Generic_List_AiInterface__o *)v33;
      v42 = 0;
LABEL_56:
      v44 = v7;
LABEL_59:
      AiLogic__getTargetPosServant(v40, v41, v42, v44, v37, v36);
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
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w4
  const MethodInfo *v24; // x6
  AiEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  v15 = this;
  if ( (byte_4A014C5 & 1) == 0 )
  {
    sub_1B64A00(&AiEntity_TypeInfo, svtData);
    this = (AiLogic_o *)sub_1B64A00(&AiLogic_AiInfo_TypeInfo, v16);
    byte_4A014C5 = 1;
  }
  if ( !svtData )
    sub_1B64C5C(this, svtData);
  uniqueId = svtData->fields.uniqueId;
  v18 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr,
                       *(_QWORD *)&procState,
                       *(_QWORD *)&turnCount,
                       *(_QWORD *)&actCount);
  v19 = (AiLogic_AiInfo_o *)sub_1B64C4C(AiLogic_AiInfo_TypeInfo);
  AiLogic_AiInfo___ctor(v19, 1, uniqueId, v18, logicAi, procState, v20);
  *info = v19;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)info, (int32_t)v19, v21, v22);
  result = (AiEntity_o *)AiLogic__getActionBase(v15, *info, procState, turnCount, v23, timingPriority, v24);
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
  if ( (byte_4A014C7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, aiInfo);
    this = (AiLogic_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    byte_4A014C7 = 1;
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
                          (const MethodInfo_30D6798 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
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
    sub_1B64C5C(this, aiInfo);
  }
  return BasicAct;
}


AiFieldEntity_o *__fastcall AiLogic__getAction_42893584(
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
  if ( (byte_4A014C6 & 1) == 0 )
  {
    sub_1B64A00(&AiFieldEntity_TypeInfo, fieldData);
    this = (AiLogic_o *)sub_1B64A00(&AiLogic_AiInfo_TypeInfo, v14);
    byte_4A014C6 = 1;
  }
  if ( !fieldData )
    sub_1B64C5C(this, fieldData);
  index = fieldData->fields.index;
  aiState = fieldData->fields.aiState;
  v17 = (AiLogic_AiInfo_o *)sub_1B64C4C(AiLogic_AiInfo_TypeInfo);
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
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x24
  System_Predicate_object__o *v48; // x25
  const MethodInfo *v49; // x5
  int v50; // w8
  char *v51; // x24
  WeightRate_int__o *v52; // x25
  const MethodInfo *v53; // x5
  __int64 v54; // x8
  unsigned __int64 v55; // x26
  char *v56; // x29
  int32_t Next; // w0
  const MethodInfo *v58; // x5
  AiBaseEntity_o *v59; // x24

  if ( (byte_4A014C8 & 1) == 0 )
  {
    sub_1B64A00(&System_Comparison_AiBaseEntity__TypeInfo, aiInfo);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__FindAll__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__Remove__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__Sort__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__ToArray__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity___ctor__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v19);
    sub_1B64A00(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v20);
    sub_1B64A00(&System_Predicate_AiBaseEntity__TypeInfo, v21);
    sub_1B64A00(&Method_AiLogic___c__getBasicAct_b__16_1__, v22);
    sub_1B64A00(&Method_AiLogic___c__DisplayClass16_0__getBasicAct_b__0__, v23);
    sub_1B64A00(&AiLogic___c__DisplayClass16_0_TypeInfo, v24);
    sub_1B64A00(&Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__, v25);
    sub_1B64A00(&AiLogic___c__DisplayClass16_1_TypeInfo, v26);
    sub_1B64A00(&AiLogic___c_TypeInfo, v27);
    sub_1B64A00(&Method_WeightRate_int___ctor__, v28);
    sub_1B64A00(&Method_WeightRate_int__getCount__, v29);
    sub_1B64A00(&Method_WeightRate_int__getData__, v30);
    sub_1B64A00(&Method_WeightRate_int__getTotalWeight__, v31);
    sub_1B64A00(&Method_WeightRate_int__setWeight__, v32);
    sub_1B64A00(&WeightRate_int__TypeInfo, v33);
    byte_4A014C8 = 1;
  }
  v34 = sub_1B64C4C(AiLogic___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_42;
  *(_DWORD *)(v34 + 16) = procState;
  *(_DWORD *)(v34 + 20) = actcnt;
  *(_DWORD *)(v34 + 24) = timingPriority;
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_AiBaseEntity___ctor__);
  thinkList = (System_Collections_Generic_List_object__o *)this->fields._thinkList;
  v39 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_AiBaseEntity__TypeInfo);
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
          (const MethodInfo_34B06D8 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
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
    _9__16_1 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_AiBaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__16_1, v43, Method_AiLogic___c__getBasicAct_b__16_1__, 0LL);
    static_fields = AiLogic___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Comparison_AiBaseEntity__o *)_9__16_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_1, (int32_t)_9__16_1, v45, v46);
  }
  if ( !v41 )
LABEL_42:
    sub_1B64C5C(All, v36);
  System_Collections_Generic_List_object___Sort_55253804(
    v41,
    _9__16_1,
    (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_AiBaseEntity__Sort__);
  if ( v41->fields._size >= 1 )
  {
    while ( 1 )
    {
      v47 = sub_1B64C4C(AiLogic___c__DisplayClass16_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v47, 0LL);
      if ( v41->fields._size < 1 )
        return 0LL;
      All = System_Collections_Generic_List_object___get_Item(
              v41,
              0,
              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
      if ( !All )
        goto LABEL_42;
      if ( !v47 )
        goto LABEL_42;
      *(_DWORD *)(v47 + 16) = *((_DWORD *)All + 7);
      v48 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_AiBaseEntity__TypeInfo);
      System_Predicate_object____ctor(
        v48,
        (Il2CppObject *)v47,
        Method_AiLogic___c__DisplayClass16_1__getBasicAct_b__2__,
        0LL);
      All = System_Collections_Generic_List_object___FindAll(
              v41,
              (System_Predicate_T__o *)v48,
              (const MethodInfo_34B06D8 *)Method_System_Collections_Generic_List_AiBaseEntity__FindAll__);
      if ( !All )
        goto LABEL_42;
      All = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)All,
              (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_AiBaseEntity__ToArray__);
      if ( !All )
        goto LABEL_42;
      v50 = *((_DWORD *)All + 6);
      v51 = (char *)All;
      if ( v50 <= 1 )
        break;
      v52 = (WeightRate_int__o *)sub_1B64C4C(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v52, (const MethodInfo_388F188 *)Method_WeightRate_int___ctor__);
      v54 = *((_QWORD *)v51 + 3);
      if ( (int)v54 >= 1 )
      {
        v55 = 0LL;
        v56 = v51 + 32;
        while ( v55 < (unsigned int)v54 )
        {
          All = (void *)AiLogic__checkThinking_42895148(
                          this,
                          aiInfo,
                          *(AiBaseEntity_o **)&v56[8 * v55],
                          turn,
                          *(_DWORD *)(v34 + 20),
                          v53);
          if ( v55 >= *((unsigned int *)v51 + 6) )
            break;
          v36 = *(_QWORD *)&v56[8 * v55];
          if ( ((unsigned __int8)All & 1) != 0 )
          {
            if ( !v36 || !v52 )
              goto LABEL_42;
            WeightRate_int___setWeight(
              v52,
              *(_DWORD *)(v36 + 32),
              v55,
              (const MethodInfo_388E764 *)Method_WeightRate_int__setWeight__);
          }
          else
          {
            All = (void *)System_Collections_Generic_List_object___Remove(
                            v41,
                            (Il2CppObject *)v36,
                            (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
          }
          LODWORD(v54) = *((_DWORD *)v51 + 6);
          if ( (__int64)++v55 >= (int)v54 )
            goto LABEL_29;
        }
LABEL_41:
        sub_1B64C64(All, v36);
      }
LABEL_29:
      if ( !v52 )
        goto LABEL_42;
      if ( WeightRate_int___getCount(v52, (const MethodInfo_388EA60 *)Method_WeightRate_int__getCount__) )
      {
        Next = BattleRandom__getNext(v52->fields.totalweight, 0LL);
        All = (void *)WeightRate_int___getData(v52, Next, (const MethodInfo_388EB18 *)Method_WeightRate_int__getData__);
        if ( (unsigned int)All >= *((_DWORD *)v51 + 6) )
          goto LABEL_41;
        v59 = *(AiBaseEntity_o **)&v51[8 * (int)All + 32];
        if ( AiLogic__checkThinking_42895148(this, aiInfo, v59, turn, *(_DWORD *)(v34 + 20), v58) )
          return v59;
        goto LABEL_37;
      }
LABEL_38:
      if ( v41->fields._size <= 0 )
        return 0LL;
    }
    if ( !v50 )
      goto LABEL_41;
    All = (void *)AiLogic__checkThinking_42895148(
                    this,
                    aiInfo,
                    *((AiBaseEntity_o **)All + 4),
                    turn,
                    *(_DWORD *)(v34 + 20),
                    v49);
    if ( !*((_DWORD *)v51 + 6) )
      goto LABEL_41;
    v59 = (AiBaseEntity_o *)*((_QWORD *)v51 + 4);
    if ( ((unsigned __int8)All & 1) != 0 )
      return v59;
LABEL_37:
    System_Collections_Generic_List_object___Remove(
      v41,
      (Il2CppObject *)v59,
      (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_AiBaseEntity__Remove__);
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
  if ( (byte_4A014CA & 1) == 0 )
  {
    this = (AiLogic_o *)sub_1B64A00(&Method_System_Collections_Generic_List_AiInterface__Add__, targetList);
    byte_4A014CA = 1;
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
    sub_1B64C5C(this, targetList);
  }
  size = targetList->fields._size;
  v17 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)targetList,
      (Il2CppObject *)this,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    targetList->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
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
  int32_t v16; // w2
  int32_t v17; // w3

  v6 = this;
  if ( (byte_4A014C1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity___ctor___75653320, aiInfo);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__get_Count__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_AiBaseEntity__get_Item__, v8);
    this = (AiLogic_o *)sub_1B64A00(&System_Collections_Generic_List_AiBaseEntity__TypeInfo, v9);
    byte_4A014C1 = 1;
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
                          (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_AiBaseEntity__get_Item__);
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
      sub_1B64C5C(this, aiInfo);
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
        v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_AiBaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_55244988(
          v15,
          v14,
          (const MethodInfo_34AF8BC *)Method_System_Collections_Generic_List_AiBaseEntity___ctor___75653320);
        v6->fields._thinkList = (struct System_Collections_Generic_List_AiBaseEntity__o *)v15;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v6->fields._thinkList, (int32_t)v15, v16, v17);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->fields.aiState, (int32_t)inAiSate, v13, v14);
  v12->fields.logicAi = inLogicAi;
  v12 = (AiLogic_AiInfo_o *)((char *)v12 + 32);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v12, (int32_t)inLogicAi, v15, v16);
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
  __int64 v13; // x1
  void *checkedInfo; // x0
  _DWORD *v15; // x22
  int32_t v16; // w20
  int32_t v17; // w21

  if ( (byte_4A014CE & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      svtData);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__, v11);
    byte_4A014CE = 1;
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
              (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
        return;
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *aiActType = *((_DWORD *)checkedInfo + 4);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
      if ( !checkedInfo )
        goto LABEL_17;
      *noMessage = *((_BYTE *)checkedInfo + 20);
      checkedInfo = this->fields.checkedInfo;
      if ( !checkedInfo )
        goto LABEL_17;
      checkedInfo = System_Collections_Generic_Dictionary_object__object___get_Item(
                      (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
                      v12,
                      (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__get_Item__);
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
        sub_1B64C5C(checkedInfo, v13);
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

  if ( (byte_4A014CD & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__,
      aiBaseEntity);
    byte_4A014CD = 1;
  }
  if ( !aiBaseEntity || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.checkedInfo, 0LL) )
    return 0;
  checkedInfo = this->fields.checkedInfo;
  v7 = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                         aiBaseEntity,
                         aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
  if ( !checkedInfo )
    sub_1B64C5C(v7, v8);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)checkedInfo,
           v7,
           (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__);
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
  __int64 v16; // x1
  Il2CppObject *v17; // x21

  if ( (byte_4A014CC & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__, aiBaseEntity);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo, v9);
    byte_4A014CC = 1;
  }
  if ( aiBaseEntity )
  {
    checkedInfo = this->fields.checkedInfo;
    p_checkedInfo = (ServantStatusBattleListViewItem_o *)&this->fields.checkedInfo;
    if ( !checkedInfo )
    {
      v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v12,
        (const MethodInfo_317B33C *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo___ctor__);
      p_checkedInfo->klass = (ServantStatusBattleListViewItem_c *)v12;
      sub_1B649A4(p_checkedInfo, (int32_t)v12, v13, v14);
    }
    klass = (Il2CppObject *)((__int64 (__fastcall *)(AiBaseEntity_o *, Il2CppMethodPointer, AiLogic_AiInfo_CheckedInfo_o *, const MethodInfo *))aiBaseEntity->klass->vtable._4_get_PrimaryKey.method)(
                              aiBaseEntity,
                              aiBaseEntity->klass->vtable._5_CreatePrimaryKey.methodPtr,
                              inCheckedInfo,
                              method);
    if ( p_checkedInfo->klass )
    {
      v17 = klass;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)p_checkedInfo->klass,
             klass,
             (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__ContainsKey__) )
      {
        return;
      }
      klass = (Il2CppObject *)p_checkedInfo->klass;
      if ( p_checkedInfo->klass )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)klass,
          v17,
          (Il2CppObject *)inCheckedInfo,
          (const MethodInfo_317BCEC *)Method_System_Collections_Generic_Dictionary_string__AiLogic_AiInfo_CheckedInfo__Add__);
        return;
      }
    }
    sub_1B64C5C(klass, v16);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v7, (int32_t)inSkillInfo, v9, v10);
}


void __fastcall AiLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A014CF & 1) == 0 )
  {
    sub_1B64A00(&AiLogic___c_TypeInfo, v1);
    byte_4A014CF = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(AiLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AiLogic___c_TypeInfo->static_fields->__9 = (struct AiLogic___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)AiLogic___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64C5C(this, a);
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
  return s->fields.priority == this->fields.priority;
}