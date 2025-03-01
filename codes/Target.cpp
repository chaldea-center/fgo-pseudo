void __fastcall Target___ctor(Target_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Target__Check(int32_t cktype, int32_t type, const MethodInfo *method)
{
  return cktype == type;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Target__CheckAressSkill(BattleData_o *bData, int32_t taskActorType, const MethodInfo *method)
{
  long double v3; // q0
  BattleData_o *v5; // x19
  __int64 v6; // x1
  struct BattleActionData_o *beforeAction; // x20
  __int64 v8; // x0
  __int64 v9; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v11; // x19
  struct BattleSkillInfoData_o *v12; // x8
  SkillLvEntity_o *Entity; // x0

  v5 = bData;
  if ( (byte_4BFC730 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    bData = (BattleData_o *)sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4BFC730 = 1;
  }
  if ( !v5 )
    goto LABEL_19;
  if ( taskActorType != 1 )
    return 0;
  if ( !v5->fields.isMultiTargetBattle )
    return 0;
  beforeAction = v5->fields.beforeAction;
  if ( !beforeAction || !beforeAction->fields.skillInfo )
    return 0;
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C80008(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C80008(v3);
  bData = **(BattleData_o ***)(v9 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v11 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v12 = beforeAction->fields.skillInfo) == 0LL)
    || !v11 )
  {
LABEL_19:
    sub_1C2E388(bData, *(_QWORD *)&taskActorType);
  }
  Entity = SkillLvMaster__GetEntity(v11, (int32_t)bData, v12->fields.skilllv, 0LL);
  if ( Entity )
    return SkillLvEntity__IsAress(Entity, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Target__GetAliveFieldRandomTargetId(
        BattleData_o *battleData,
        bool isEnemyID,
        bool isOpponentOnly,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *AliveFieldEnemyServantIDList; // x0
  System_Collections_ICollection_o *v5; // x19
  __int64 Next; // x0
  __int64 v8; // x1

  if ( !battleData )
    goto LABEL_10;
  if ( isEnemyID )
    AliveFieldEnemyServantIDList = (System_Collections_ICollection_o *)BattleData__getAliveFieldEnemyServantIDList(
                                                                         battleData,
                                                                         isOpponentOnly,
                                                                         0LL);
  else
    AliveFieldEnemyServantIDList = (System_Collections_ICollection_o *)BattleData__getAliveFieldPlayerServantIDList(
                                                                         battleData,
                                                                         0LL,
                                                                         0LL);
  v5 = AliveFieldEnemyServantIDList;
  battleData = (BattleData_o *)BasicHelper__IsNullOrEmpty(AliveFieldEnemyServantIDList, 0LL);
  if ( ((unsigned __int8)battleData & 1) != 0 )
    return -1;
  if ( !v5 )
LABEL_10:
    sub_1C2E388(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1C2E390(Next, v8);
  return *((_DWORD *)&v5[2].klass + (int)Next);
}


// local variable allocation has failed, the output may be wrong!
TargetAggregator_o *__fastcall Target__GetTargetAggregator(
        BattleData_o *battleData,
        int32_t actorId,
        int32_t targetId,
        int32_t pttargetId,
        int32_t type,
        int32_t taskActorType,
        Target_BattleTargetArgs_o *battleTargetArgs,
        const MethodInfo *method)
{
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
  __int64 v29; // x25
  TargetAggregator_Args_o *v30; // x26
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BFC731 & 1) == 0 )
  {
    sub_1C2E12C(&AllFieldTargetAggregator_TypeInfo, *(_QWORD *)&actorId);
    sub_1C2E12C(&TargetAggregator_Args_TypeInfo, v15);
    sub_1C2E12C(&NoneTargetAggregator_TypeInfo, v16);
    sub_1C2E12C(&OpponentAllFieldTargetAggregator_TypeInfo, v17);
    sub_1C2E12C(&OpponentFullTargetAggregator_TypeInfo, v18);
    sub_1C2E12C(&OpponentOtherFullTargetAggregator_TypeInfo, v19);
    sub_1C2E12C(&OpponentOtherTargetAggregator_TypeInfo, v20);
    sub_1C2E12C(&OpponentRangeAggregator_TypeInfo, v21);
    sub_1C2E12C(&PartyAllFieldTargetAggregator_TypeInfo, v22);
    sub_1C2E12C(&PartyFullTargetAggregator_TypeInfo, v23);
    sub_1C2E12C(&PartyLowsetHpRateTargetChoicer_TypeInfo, v24);
    sub_1C2E12C(&PartyLowsetHpValueTargetChoicer_TypeInfo, v25);
    sub_1C2E12C(&PartyOneOtherTargetAggregator_TypeInfo, v26);
    sub_1C2E12C(&PartyOtherFullTargetAggregator_TypeInfo, v27);
    sub_1C2E12C(&PartyOtherTargetAggregator_TypeInfo, v28);
    byte_4BFC731 = 1;
  }
  switch ( type )
  {
    case 3:
      v29 = sub_1C2E378(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v29, 0LL);
      break;
    case 6:
      v29 = sub_1C2E378(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v29, 0LL);
      break;
    case 7:
      v29 = sub_1C2E378(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v29, 0LL);
      break;
    case 8:
      v29 = sub_1C2E378(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v29, 0LL);
      break;
    case 9:
      v29 = sub_1C2E378(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 10:
      v29 = sub_1C2E378(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 12:
      v29 = sub_1C2E378(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 14:
      v29 = sub_1C2E378(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v29, 0LL);
      break;
    case 15:
      v29 = sub_1C2E378(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v29, 0LL);
      break;
    case 28:
      v29 = sub_1C2E378(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v29, 0LL);
      break;
    case 29:
      v29 = sub_1C2E378(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v29, 0LL);
      break;
    case 30:
      v29 = sub_1C2E378(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v29, 0LL);
      break;
    case 32:
      v29 = sub_1C2E378(AllFieldTargetAggregator_TypeInfo);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v29, 0LL);
      break;
    default:
      v29 = sub_1C2E378(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v29, 0LL);
      break;
  }
  v30 = (TargetAggregator_Args_o *)sub_1C2E378(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v30, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v29 )
    sub_1C2E388(v31, v32);
  *(_QWORD *)(v29 + 16) = v30;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)v30, v33, v34, v35, v36, v37, v38);
  return (TargetAggregator_o *)v29;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall Target__IsActorPlayerSide(
        BattleData_o *bData,
        int32_t actorId,
        int32_t taskActorType,
        const MethodInfo *method)
{
  if ( (actorId & 0x80000000) != 0 )
    return (taskActorType != 5) & !Target__CheckAressSkill(bData, taskActorType, *(const MethodInfo **)&taskActorType);
  if ( !bData )
    sub_1C2E388(0LL, actorId);
  return BattleData__isPlayerID(bData, actorId, 0LL);
}


bool __fastcall Target__IsCommandCard(int32_t targetType, const MethodInfo *method)
{
  return targetType == 31;
}


bool __fastcall Target__IsEnemyAllTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 32
      || (targetType & 0xFFFFFFFB) == 26
      || targetType == 15
      || targetType == 6
      || (targetType & 0xFFFFFFFB) == 8;
}


bool __fastcall Target__IsPartyAllTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 14 || targetType == 9 || (targetType & 0xFFFFFFFB) == 3;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getOrderOneTargetIdArray(
        System_Int32_array *checkIdArray,
        int32_t excludeId,
        bool isOrderDesc,
        bool isPrev,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  System_Int32_array *v13; // x21
  int32_t v14; // w0
  int v15; // w10
  il2cpp_array_size_t v16; // w20

  if ( (byte_4BFC72F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_1C2E12C(&Method_System_Array_Reverse_int___, v9);
    sub_1C2E12C(&int___TypeInfo, v10);
    byte_4BFC72F = 1;
  }
  v11 = sub_1C2E1D4(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v13 = (System_Int32_array *)v11;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_2F92D3C *)Method_System_Array_Reverse_int___);
    v14 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_30CF08C *)Method_System_Array_IndexOf_int___);
    v15 = v14 - 1;
    if ( !isPrev )
      v15 = 0;
    v16 = v14 >= 1 ? v15 : v14 == 0;
    if ( (signed int)v16 < (signed int)checkIdArray->max_length )
    {
      v11 = sub_1C2E1D4(int___TypeInfo, 1LL);
      if ( v16 >= checkIdArray->max_length )
        goto LABEL_19;
      v13 = (System_Int32_array *)v11;
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 24) )
        {
          *(_DWORD *)(v11 + 32) = checkIdArray->m_Items[v16 + 1];
          return v13;
        }
LABEL_19:
        sub_1C2E390(v11, v12);
      }
LABEL_18:
      sub_1C2E388(v11, v12);
    }
  }
  return v13;
}


System_Int32_array *__fastcall Target__getTargetIds(
        BattleData_o *bdata,
        int32_t actorId,
        int32_t targetId,
        int32_t pttargetId,
        int32_t tgType,
        System_Int32_array *tvals,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+10h] [xbp-20h]

  return Target__getTargetIds_39026548(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_39026548(
        BattleData_o *bdata,
        int32_t actorId,
        int32_t targetId,
        int32_t pttargetId,
        int32_t type,
        int32_t taskActorType,
        bool checkRevengeId,
        System_Int32_array *tvals,
        bool isIncludeIgnoreIndiv,
        Target_BattleTargetArgs_o *args,
        const MethodInfo *method)
{
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x28
  const MethodInfo *v28; // x7
  bool IsActorPlayerSide; // w29
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v31; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  System_Int32_array *v35; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v37; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  System_Int32_array *v39; // x0
  const MethodInfo *v40; // x4
  System_Int32_array *v41; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  System_Int32_array *v43; // x19
  BattleServantData_o *v44; // x0
  __int64 v45; // x1
  BattleServantData_o *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  BattleServantData_o *ServantData; // x0
  __int64 v50; // x1
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v52; // x4
  __int64 v53; // x1
  __int64 v54; // x1
  DataVals_o *v55; // x0
  bool v56; // w8
  __int64 v57; // x21
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v59; // x1
  struct DataVals_o *v60; // x8
  bool isEnemyID; // w0
  const MethodInfo *v62; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x1
  bool v70; // w0
  const MethodInfo *v71; // x3
  __int64 v72; // x1
  System_Int32_array *v73; // x0
  const MethodInfo *v74; // x4
  System_Int32_array *v75; // x0
  const MethodInfo *v76; // x4
  System_Int32_array *v77; // x21
  System_Collections_Generic_List_int__o *v78; // x20
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x8
  unsigned __int64 v82; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  int32_t v86; // w0
  int32_t Next; // w21
  __int64 v88; // x1
  System_Int32_array *v89; // x21
  System_Collections_Generic_List_int__o *v90; // x20
  __int64 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x8
  unsigned __int64 v94; // x19
  struct System_Int32_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  int32_t v98; // w0
  int32_t v99; // w21
  __int64 v100; // x1
  System_Int32_array *v101; // x22
  System_Collections_Generic_List_int__o *v102; // x20
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x8
  unsigned __int64 v106; // x19
  struct System_Int32_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  int32_t v110; // w0
  int32_t v111; // w21
  __int64 v112; // x1
  DataVals_o *dataVals; // x0
  bool v115; // w8
  System_Int32_array *v116; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BFC72E & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v22);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v23);
    byte_4BFC72E = 1;
  }
  cardIndex = 0;
  v24 = sub_1C2E1D4(int___TypeInfo, 0LL);
  v116 = (System_Int32_array *)v24;
  if ( !bdata )
    goto LABEL_142;
  v27 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v24 = sub_1C2E1D4(int___TypeInfo, 1LL);
  if ( !v24 )
LABEL_142:
    sub_1C2E388(v24, v25);
  v27 = (System_Int32_array *)v24;
  if ( !*(_DWORD *)(v24 + 24) )
    sub_1C2E390(v24, v25);
  *(_DWORD *)(v24 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v26);
  switch ( type )
  {
    case 0:
    case 25:
      v33 = sub_1C2E1D4(int___TypeInfo, 1LL);
      v35 = (System_Int32_array *)v33;
      if ( !v33 )
        sub_1C2E388(0LL, v34);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1C2E390(v33, v34);
      *(_DWORD *)(v33 + 32) = actorId;
      v116 = (System_Int32_array *)v33;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1C2E388(0LL, v37);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1C2E390(FieldPlayerServantIDList, v37);
        if ( !v35->max_length )
          sub_1C2E390(FieldPlayerServantIDList, v37);
        goto LABEL_70;
      }
      return v116;
    case 1:
      v43 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
      if ( !v43 )
        sub_1C2E388(ServantData, v50);
      if ( !v43->max_length )
        sub_1C2E390(ServantData, v50);
      goto LABEL_41;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v27, 0LL);
    case 4:
      v65 = sub_1C2E1D4(int___TypeInfo, 1LL);
      v43 = (System_Int32_array *)v65;
      if ( !v65 )
        sub_1C2E388(0LL, v66);
      if ( !*(_DWORD *)(v65 + 24) )
        sub_1C2E390(v65, v66);
      goto LABEL_63;
    case 6:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        return BattleData__getFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
    case 7:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, 0, 0LL);
      if ( args )
      {
        dataVals = args->fields.dataVals;
        if ( !dataVals )
          sub_1C2E388(0LL, v53);
        v115 = !DataVals__isCheckDead(dataVals, 0LL);
      }
      else
      {
        v115 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v115, v27, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
      {
        v55 = args->fields.dataVals;
        if ( !v55 )
          sub_1C2E388(0LL, v54);
        v56 = !DataVals__isCheckDead(v55, 0LL);
      }
      else
      {
        v56 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v56, 0LL, 0LL);
    case 9:
    case 10:
    case 12:
    case 14:
    case 15:
    case 28:
    case 29:
    case 30:
    case 32:
      TargetAggregator = Target__GetTargetAggregator(
                           bdata,
                           actorId,
                           targetId,
                           pttargetId,
                           type,
                           taskActorType,
                           args,
                           v28);
      if ( !TargetAggregator )
        sub_1C2E388(0LL, v31);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v43 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v62);
      if ( !v43 )
        sub_1C2E388(AliveFieldRandomTargetId, v64);
      if ( !v43->max_length )
        sub_1C2E390(AliveFieldRandomTargetId, v64);
      goto LABEL_126;
    case 13:
      v43 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      v70 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v70, IsActorPlayerSide, v71);
      if ( !v43 )
        sub_1C2E388(AliveFieldRandomTargetId, v72);
      if ( !v43->max_length )
        sub_1C2E390(AliveFieldRandomTargetId, v72);
      goto LABEL_126;
    case 16:
      v43 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      v44 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v44 )
        return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
      if ( !v43 )
        sub_1C2E388(v44, v45);
      if ( !v43->max_length )
        sub_1C2E390(v44, v45);
LABEL_41:
      v43->m_Items[1] = pttargetId;
      return v43;
    case 17:
      v67 = sub_1C2E1D4(int___TypeInfo, 1LL);
      v35 = (System_Int32_array *)v67;
      if ( !v67 )
        sub_1C2E388(0LL, v68);
      if ( !*(_DWORD *)(v67 + 24) )
        sub_1C2E390(v67, v68);
      *(_DWORD *)(v67 + 32) = actorId;
      v116 = (System_Int32_array *)v67;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1C2E388(0LL, v69);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1C2E390(FieldPlayerServantIDList, v69);
        if ( !v35->max_length )
          sub_1C2E390(FieldPlayerServantIDList, v69);
LABEL_70:
        v116 = v35;
        v35->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      }
      return v116;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v77 = AliveFieldEnemyServantIDList;
      v78 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v78,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v77 )
        sub_1C2E388(v79, v80);
      v81 = *(_QWORD *)&v77->max_length;
      if ( (int)v81 >= 1 )
      {
        v82 = 0LL;
        do
        {
          if ( v82 >= (unsigned int)v81 )
            sub_1C2E390(v79, v80);
          v80 = (unsigned int)v77->m_Items[v82 + 1];
          if ( (_DWORD)v80 != pttargetId )
          {
            if ( !v78 )
              sub_1C2E388(v79, v80);
            items = v78->fields._items;
            v84 = Method_System_Collections_Generic_List_int__Add__;
            ++v78->fields._version;
            if ( !items )
              sub_1C2E388(v79, v80);
            size = v78->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v78,
                v80,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v78->fields._size = size + 1;
              items->m_Items[size + 1] = v80;
            }
          }
          LODWORD(v81) = v77->max_length;
          ++v82;
        }
        while ( (__int64)v82 < (int)v81 );
      }
      if ( !v78 )
        sub_1C2E388(v79, v80);
      v86 = v78->fields._size;
      if ( !v86 )
        return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v86, 0LL);
      v43 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v78,
                                   Next,
                                   (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v43 )
        sub_1C2E388(AliveFieldRandomTargetId, v88);
      if ( !v43->max_length )
        sub_1C2E390(AliveFieldRandomTargetId, v88);
      goto LABEL_126;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v101 = AliveFieldPlayerServantIDList;
      v102 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v102,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v101 )
        sub_1C2E388(v103, v104);
      v105 = *(_QWORD *)&v101->max_length;
      if ( (int)v105 >= 1 )
      {
        v106 = 0LL;
        do
        {
          if ( v106 >= (unsigned int)v105 )
            sub_1C2E390(v103, v104);
          v104 = (unsigned int)v101->m_Items[v106 + 1];
          if ( (_DWORD)v104 != actorId )
          {
            if ( !v102 )
              sub_1C2E388(v103, v104);
            v107 = v102->fields._items;
            v108 = Method_System_Collections_Generic_List_int__Add__;
            ++v102->fields._version;
            if ( !v107 )
              sub_1C2E388(v103, v104);
            v109 = v102->fields._size;
            if ( (unsigned int)v109 >= v107->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v102,
                v104,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
            }
            else
            {
              v102->fields._size = v109 + 1;
              v107->m_Items[v109 + 1] = v104;
            }
          }
          LODWORD(v105) = v101->max_length;
          ++v106;
        }
        while ( (__int64)v106 < (int)v105 );
      }
      if ( !v102 )
        sub_1C2E388(v103, v104);
      v110 = v102->fields._size;
      if ( !v110 )
        return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
      v111 = BattleRandom__getNext(v110, 0LL);
      v43 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v102,
                                   v111,
                                   (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v43 )
        sub_1C2E388(AliveFieldRandomTargetId, v112);
      if ( !v43->max_length )
        sub_1C2E390(AliveFieldRandomTargetId, v112);
      goto LABEL_126;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v41 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v41 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v89 = v41;
      v90 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v90,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v89 )
        sub_1C2E388(v91, v92);
      v93 = *(_QWORD *)&v89->max_length;
      if ( (int)v93 >= 1 )
      {
        v94 = 0LL;
        do
        {
          if ( v94 >= (unsigned int)v93 )
            sub_1C2E390(v91, v92);
          v92 = (unsigned int)v89->m_Items[v94 + 1];
          if ( (_DWORD)v92 != targetId )
          {
            if ( !v90 )
              sub_1C2E388(v91, v92);
            v95 = v90->fields._items;
            v96 = Method_System_Collections_Generic_List_int__Add__;
            ++v90->fields._version;
            if ( !v95 )
              sub_1C2E388(v91, v92);
            v97 = v90->fields._size;
            if ( (unsigned int)v97 >= v95->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v90,
                v92,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
            }
            else
            {
              v90->fields._size = v97 + 1;
              v95->m_Items[v97 + 1] = v92;
            }
          }
          LODWORD(v93) = v89->max_length;
          ++v94;
        }
        while ( (__int64)v94 < (int)v93 );
      }
      if ( !v90 )
        sub_1C2E388(v91, v92);
      v98 = v90->fields._size;
      if ( !v98 )
        return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
      v99 = BattleRandom__getNext(v98, 0LL);
      v43 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v90,
                                   v99,
                                   (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v43 )
        sub_1C2E388(AliveFieldRandomTargetId, v100);
      if ( !v43->max_length )
        sub_1C2E390(AliveFieldRandomTargetId, v100);
LABEL_126:
      v43->m_Items[1] = AliveFieldRandomTargetId;
      return v43;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v52);
    case 22:
      v39 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v39, actorId, 0, 1, v40);
    case 23:
      v75 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v75, actorId, 1, 1, v76);
    case 24:
      v73 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v73, actorId, 1, 0, v74);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v46 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v46 && checkRevengeId )
        targetId = BattleServantData__getRevengeTargetUniqueId(v46, 0LL);
      if ( BattleData__getServantData(bdata, targetId, 0LL) )
      {
        v47 = sub_1C2E1D4(int___TypeInfo, 1LL);
        v43 = (System_Int32_array *)v47;
        if ( !v47 )
          sub_1C2E388(0LL, v48);
        if ( !*(_DWORD *)(v47 + 24) )
          sub_1C2E390(v47, v48);
LABEL_63:
        v43->m_Items[1] = targetId;
        return v43;
      }
      else
      {
        return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
      }
    case 31:
      v57 = sub_1C2E1D4(int___TypeInfo, 1LL);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0LL);
      if ( !v57 )
        sub_1C2E388(PlayerServantFromRandomCommandCard, v59);
      if ( !*(_DWORD *)(v57 + 24) )
        sub_1C2E390(PlayerServantFromRandomCommandCard, v59);
      *(_DWORD *)(v57 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1C2E388(PlayerServantFromRandomCommandCard, v59);
      v60 = args->fields.dataVals;
      if ( !v60 )
        sub_1C2E388(PlayerServantFromRandomCommandCard, v59);
      v116 = (System_Int32_array *)v57;
      v60->fields.targetCardIndex = cardIndex;
      return v116;
    default:
      return v116;
  }
}


bool __fastcall Target__isAllTargets(int32_t targetType, const MethodInfo *method)
{
  return targetType == 32
      || targetType == 26
      || targetType == 15
      || (targetType & 0xFFFFFFFD) == 12
      || targetType == 10
      || (targetType & 0xFFFFFFFE) == 8
      || targetType == 6
      || (targetType & 0xFFFFFFFB) == 3;
}


bool __fastcall Target__isChoose(int32_t targetType, const MethodInfo *method)
{
  return targetType == 1 || targetType == 10;
}


bool __fastcall Target__isCommandType(int32_t targetType, const MethodInfo *method)
{
  return targetType == 25;
}


bool __fastcall Target__isEnemy(int32_t targetType, const MethodInfo *method)
{
  return targetType == 30
      || targetType == 27
      || targetType == 20
      || (targetType & 0xFFFFFFFD) == 13
      || (targetType & 0xFFFFFFFB) == 8
      || targetType == 6
      || (targetType & 0xFFFFFFFE) == 4;
}


bool __fastcall Target__isFieldEnemy(int32_t targetType, const MethodInfo *method)
{
  return targetType == 30 || targetType == 27 || targetType == 20 || (targetType & 0xFFFFFFF6) == 4 || targetType == 6;
}


bool __fastcall Target__isFieldPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)(targetType - 21) < 5
      || (targetType & 0xFFFFFFFC) == 16
      || (unsigned int)targetType < 4
      || (unsigned int)(targetType - 9) < 3;
}


bool __fastcall Target__isPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)(targetType - 21) < 5
      || (targetType & 0xFFFFFFFC) == 16
      || targetType == 14
      || (unsigned int)(targetType - 9) < 3
      || (unsigned int)targetType < 4
      || targetType == 7;
}


bool __fastcall Target__isSubChoose(int32_t targetType, const MethodInfo *method)
{
  return (targetType & 0xFFFFFFFE) == 16;
}


void __fastcall Target_BattleTargetArgs___ctor(
        Target_BattleTargetArgs_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dataVals = dataVals;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)dataVals, v5, v6, v7, v8, v9, v10);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1C2E388(0LL, method);
  return DataVals__isCheckDead(dataVals, 0LL);
}


void __fastcall Target_BattleTargetArgs__SetTargetCardIndex(
        Target_BattleTargetArgs_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals; // x8

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1C2E388(this, cardIndex);
  dataVals->fields.targetCardIndex = cardIndex;
}


System_Int32_array *__fastcall Target_BattleTargetArgs__get_EnemyRange(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  long double inited; // q0
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_4BFC732 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_int___, method);
    byte_4BFC732 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1C2E388(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v12 = Method_System_Array_Empty_int___;
      v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v13 )
      {
        sub_1C80064(Method_System_Array_Empty_int___);
        v13 = v12[7];
      }
      v14 = *(_QWORD *)(v13 + 16);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C80008(inited);
      if ( !*(_DWORD *)(v14 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v14);
      v15 = *(_QWORD *)(v12[7] + 16LL);
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
        v15 = sub_1C80008(inited);
      enemyRange = **(struct System_Int32_array ***)(v15 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.enemyRange, (int64_t)enemyRange, v5, v6, v7, v8, v9, v10);
  }
  return enemyRange;
}