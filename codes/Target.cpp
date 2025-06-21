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
  if ( (byte_4B1B476 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    bData = (BattleData_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4B1B476 = 1;
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
    v8 = sub_1C1B45C(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C(v3);
  bData = **(BattleData_o ***)(v9 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v11 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v12 = beforeAction->fields.skillInfo) == 0LL)
    || !v11 )
  {
LABEL_19:
    sub_1BCB254(bData, *(_QWORD *)&taskActorType);
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
  __int64 v9; // x2

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
    sub_1BCB254(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1BCB25C(Next, v8, v9);
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4B1B477 & 1) == 0 )
  {
    sub_1BCAFF8(&AllFieldTargetAggregator_TypeInfo, *(_QWORD *)&actorId);
    sub_1BCAFF8(&TargetAggregator_Args_TypeInfo, v15);
    sub_1BCAFF8(&NoneTargetAggregator_TypeInfo, v16);
    sub_1BCAFF8(&OpponentAllFieldTargetAggregator_TypeInfo, v17);
    sub_1BCAFF8(&OpponentFullTargetAggregator_TypeInfo, v18);
    sub_1BCAFF8(&OpponentOtherFullTargetAggregator_TypeInfo, v19);
    sub_1BCAFF8(&OpponentOtherTargetAggregator_TypeInfo, v20);
    sub_1BCAFF8(&OpponentRangeAggregator_TypeInfo, v21);
    sub_1BCAFF8(&PartyAllFieldTargetAggregator_TypeInfo, v22);
    sub_1BCAFF8(&PartyFullTargetAggregator_TypeInfo, v23);
    sub_1BCAFF8(&PartyLowsetHpRateTargetChoicer_TypeInfo, v24);
    sub_1BCAFF8(&PartyLowsetHpValueTargetChoicer_TypeInfo, v25);
    sub_1BCAFF8(&PartyOneOtherTargetAggregator_TypeInfo, v26);
    sub_1BCAFF8(&PartyOtherFullTargetAggregator_TypeInfo, v27);
    sub_1BCAFF8(&PartyOtherTargetAggregator_TypeInfo, v28);
    byte_4B1B477 = 1;
  }
  switch ( type )
  {
    case 3:
      v29 = sub_1BCB244(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v29, 0LL);
      break;
    case 6:
      v29 = sub_1BCB244(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v29, 0LL);
      break;
    case 7:
      v29 = sub_1BCB244(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v29, 0LL);
      break;
    case 8:
      v29 = sub_1BCB244(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v29, 0LL);
      break;
    case 9:
      v29 = sub_1BCB244(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 10:
      v29 = sub_1BCB244(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 12:
      v29 = sub_1BCB244(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 14:
      v29 = sub_1BCB244(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v29, 0LL);
      break;
    case 15:
      v29 = sub_1BCB244(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v29, 0LL);
      break;
    case 28:
      v29 = sub_1BCB244(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v29, 0LL);
      break;
    case 29:
      v29 = sub_1BCB244(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v29, 0LL);
      break;
    case 30:
      v29 = sub_1BCB244(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v29, 0LL);
      break;
    case 32:
      v29 = sub_1BCB244(AllFieldTargetAggregator_TypeInfo);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v29, 0LL);
      break;
    default:
      v29 = sub_1BCB244(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v29, 0LL);
      break;
  }
  v30 = (TargetAggregator_Args_o *)sub_1BCB244(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v30, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v29 )
    sub_1BCB254(v31, v32);
  *(_QWORD *)(v29 + 16) = v30;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 16), (int32_t)v30, v33, v34);
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
    sub_1BCB254(0LL, actorId);
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


bool __fastcall Target__IsFuncTargetTypeNoTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 33;
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
  __int64 v17; // x2

  if ( (byte_4B1B475 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_1BCAFF8(&Method_System_Array_Reverse_int___, v9);
    sub_1BCAFF8(&int___TypeInfo, v10);
    byte_4B1B475 = 1;
  }
  v11 = sub_1BCB0A0(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v13 = (System_Int32_array *)v11;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_2FDBA80 *)Method_System_Array_Reverse_int___);
    v14 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___);
    v15 = v14 - 1;
    if ( !isPrev )
      v15 = 0;
    v16 = v14 >= 1 ? v15 : v14 == 0;
    if ( (signed int)v16 < (signed int)checkIdArray->max_length )
    {
      v11 = sub_1BCB0A0(int___TypeInfo, 1LL);
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
        sub_1BCB25C(v11, v12, v17);
      }
LABEL_18:
      sub_1BCB254(v11, v12);
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

  return Target__getTargetIds_39644772(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_39644772(
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
  __int64 v28; // x2
  const MethodInfo *v29; // x7
  bool IsActorPlayerSide; // w29
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v32; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_Int32_array *v37; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Int32_array *v41; // x19
  bool v42; // w0
  const MethodInfo *v43; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  System_Int32_array *v48; // x0
  const MethodInfo *v49; // x4
  System_Int32_array *v50; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  BattleServantData_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  BattleServantData_o *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x19
  System_Int32_array *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  BattleServantData_o *ServantData; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v67; // x4
  __int64 v68; // x1
  __int64 v69; // x1
  DataVals_o *v70; // x0
  bool v71; // w8
  __int64 v72; // x21
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  struct DataVals_o *v76; // x8
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  bool isEnemyID; // w0
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  System_Int32_array *v89; // x0
  const MethodInfo *v90; // x4
  System_Int32_array *v91; // x0
  const MethodInfo *v92; // x4
  System_Int32_array *v93; // x21
  System_Collections_Generic_List_int__o *v94; // x20
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x8
  unsigned __int64 v99; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v101; // x9
  __int64 size; // x10
  int32_t v103; // w0
  int32_t Next; // w21
  __int64 v105; // x1
  __int64 v106; // x2
  System_Int32_array *v107; // x21
  System_Collections_Generic_List_int__o *v108; // x20
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x8
  unsigned __int64 v113; // x19
  struct System_Int32_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  int32_t v117; // w0
  int32_t v118; // w21
  __int64 v119; // x1
  __int64 v120; // x2
  System_Int32_array *v121; // x22
  System_Collections_Generic_List_int__o *v122; // x20
  __int64 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x8
  unsigned __int64 v127; // x19
  struct System_Int32_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  int32_t v131; // w0
  int32_t v132; // w21
  __int64 v133; // x1
  __int64 v134; // x2
  DataVals_o *dataVals; // x0
  bool v137; // w8
  System_Int32_array *v138; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1B474 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v23);
    byte_4B1B474 = 1;
  }
  cardIndex = 0;
  v24 = sub_1BCB0A0(int___TypeInfo, 0LL);
  v138 = (System_Int32_array *)v24;
  if ( !bdata )
    goto LABEL_147;
  v27 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v24 = sub_1BCB0A0(int___TypeInfo, 1LL);
  if ( !v24 )
LABEL_147:
    sub_1BCB254(v24, v25);
  v27 = (System_Int32_array *)v24;
  if ( !*(_DWORD *)(v24 + 24) )
    sub_1BCB25C(v24, v25, v28);
  *(_DWORD *)(v24 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v26);
  switch ( type )
  {
    case 0:
    case 25:
      v34 = sub_1BCB0A0(int___TypeInfo, 1LL);
      v37 = (System_Int32_array *)v34;
      if ( !v34 )
        sub_1BCB254(0LL, v35);
      if ( !*(_DWORD *)(v34 + 24) )
        sub_1BCB25C(v34, v35, v36);
      *(_DWORD *)(v34 + 32) = actorId;
      v138 = (System_Int32_array *)v34;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1BCB254(0LL, v39);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1BCB25C(FieldPlayerServantIDList, v39, v40);
        if ( !v37->max_length )
          sub_1BCB25C(FieldPlayerServantIDList, v39, v40);
        goto LABEL_78;
      }
      return v138;
    case 1:
      v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
      if ( !v41 )
        sub_1BCB254(ServantData, v64);
      if ( !v41->max_length )
        sub_1BCB25C(ServantData, v64, v65);
      goto LABEL_49;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v27, 0LL);
    case 4:
      v77 = sub_1BCB0A0(int___TypeInfo, 1LL);
      v41 = (System_Int32_array *)v77;
      if ( !v77 )
        sub_1BCB254(0LL, v78);
      if ( !*(_DWORD *)(v77 + 24) )
        sub_1BCB25C(v77, v78, v79);
      goto LABEL_68;
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
          sub_1BCB254(0LL, v68);
        v137 = !DataVals__isCheckDead(dataVals, 0LL);
      }
      else
      {
        v137 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v137, v27, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
      {
        v70 = args->fields.dataVals;
        if ( !v70 )
          sub_1BCB254(0LL, v69);
        v71 = !DataVals__isCheckDead(v70, 0LL);
      }
      else
      {
        v71 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v71, 0LL, 0LL);
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
                           v29);
      if ( !TargetAggregator )
        sub_1BCB254(0LL, v32);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v81);
      if ( !v41 )
        sub_1BCB254(AliveFieldRandomTargetId, v82);
      if ( !v41->max_length )
        sub_1BCB25C(AliveFieldRandomTargetId, v82, v83);
      goto LABEL_131;
    case 13:
      v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      v42 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v42, IsActorPlayerSide, v43);
      if ( !v41 )
        sub_1BCB254(AliveFieldRandomTargetId, v45);
      if ( !v41->max_length )
        sub_1BCB25C(AliveFieldRandomTargetId, v45, v46);
      goto LABEL_131;
    case 16:
      v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      v52 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v52 )
        return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
      if ( !v41 )
        sub_1BCB254(v52, v53);
      if ( !v41->max_length )
        sub_1BCB25C(v52, v53, v54);
LABEL_49:
      v41->m_Items[1] = pttargetId;
      return v41;
    case 17:
      v84 = sub_1BCB0A0(int___TypeInfo, 1LL);
      v37 = (System_Int32_array *)v84;
      if ( !v84 )
        sub_1BCB254(0LL, v85);
      if ( !*(_DWORD *)(v84 + 24) )
        sub_1BCB25C(v84, v85, v86);
      *(_DWORD *)(v84 + 32) = actorId;
      v138 = (System_Int32_array *)v84;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1BCB254(0LL, v87);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1BCB25C(FieldPlayerServantIDList, v87, v88);
        if ( !v37->max_length )
          sub_1BCB25C(FieldPlayerServantIDList, v87, v88);
LABEL_78:
        v138 = v37;
        v37->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      }
      return v138;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v93 = AliveFieldEnemyServantIDList;
      v94 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v94,
        (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v93 )
        sub_1BCB254(v95, v96);
      v98 = *(_QWORD *)&v93->max_length;
      if ( (int)v98 >= 1 )
      {
        v99 = 0LL;
        do
        {
          if ( v99 >= (unsigned int)v98 )
            sub_1BCB25C(v95, v96, v97);
          v96 = (unsigned int)v93->m_Items[v99 + 1];
          if ( (_DWORD)v96 != pttargetId )
          {
            if ( !v94 )
              sub_1BCB254(v95, v96);
            items = v94->fields._items;
            v101 = Method_System_Collections_Generic_List_int__Add__;
            ++v94->fields._version;
            if ( !items )
              sub_1BCB254(v95, v96);
            size = v94->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v94,
                v96,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v94->fields._size = size + 1;
              items->m_Items[size + 1] = v96;
            }
          }
          LODWORD(v98) = v93->max_length;
          ++v99;
        }
        while ( (__int64)v99 < (int)v98 );
      }
      if ( !v94 )
        sub_1BCB254(v95, v96);
      v103 = v94->fields._size;
      if ( !v103 )
        return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v103, 0LL);
      v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v94,
                                   Next,
                                   (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v41 )
        sub_1BCB254(AliveFieldRandomTargetId, v105);
      if ( !v41->max_length )
        sub_1BCB25C(AliveFieldRandomTargetId, v105, v106);
      goto LABEL_131;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v121 = AliveFieldPlayerServantIDList;
      v122 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v122,
        (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v121 )
        sub_1BCB254(v123, v124);
      v126 = *(_QWORD *)&v121->max_length;
      if ( (int)v126 >= 1 )
      {
        v127 = 0LL;
        do
        {
          if ( v127 >= (unsigned int)v126 )
            sub_1BCB25C(v123, v124, v125);
          v124 = (unsigned int)v121->m_Items[v127 + 1];
          if ( (_DWORD)v124 != actorId )
          {
            if ( !v122 )
              sub_1BCB254(v123, v124);
            v128 = v122->fields._items;
            v129 = Method_System_Collections_Generic_List_int__Add__;
            ++v122->fields._version;
            if ( !v128 )
              sub_1BCB254(v123, v124);
            v130 = v122->fields._size;
            if ( (unsigned int)v130 >= v128->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v122,
                v124,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
            }
            else
            {
              v122->fields._size = v130 + 1;
              v128->m_Items[v130 + 1] = v124;
            }
          }
          LODWORD(v126) = v121->max_length;
          ++v127;
        }
        while ( (__int64)v127 < (int)v126 );
      }
      if ( !v122 )
        sub_1BCB254(v123, v124);
      v131 = v122->fields._size;
      if ( !v131 )
        return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
      v132 = BattleRandom__getNext(v131, 0LL);
      v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v122,
                                   v132,
                                   (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v41 )
        sub_1BCB254(AliveFieldRandomTargetId, v133);
      if ( !v41->max_length )
        sub_1BCB25C(AliveFieldRandomTargetId, v133, v134);
      goto LABEL_131;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v50 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v50 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v107 = v50;
      v108 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v108,
        (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v107 )
        sub_1BCB254(v109, v110);
      v112 = *(_QWORD *)&v107->max_length;
      if ( (int)v112 >= 1 )
      {
        v113 = 0LL;
        do
        {
          if ( v113 >= (unsigned int)v112 )
            sub_1BCB25C(v109, v110, v111);
          v110 = (unsigned int)v107->m_Items[v113 + 1];
          if ( (_DWORD)v110 != targetId )
          {
            if ( !v108 )
              sub_1BCB254(v109, v110);
            v114 = v108->fields._items;
            v115 = Method_System_Collections_Generic_List_int__Add__;
            ++v108->fields._version;
            if ( !v114 )
              sub_1BCB254(v109, v110);
            v116 = v108->fields._size;
            if ( (unsigned int)v116 >= v114->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v108,
                v110,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
            }
            else
            {
              v108->fields._size = v116 + 1;
              v114->m_Items[v116 + 1] = v110;
            }
          }
          LODWORD(v112) = v107->max_length;
          ++v113;
        }
        while ( (__int64)v113 < (int)v112 );
      }
      if ( !v108 )
        sub_1BCB254(v109, v110);
      v117 = v108->fields._size;
      if ( !v117 )
        return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
      v118 = BattleRandom__getNext(v117, 0LL);
      v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v108,
                                   v118,
                                   (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v41 )
        sub_1BCB254(AliveFieldRandomTargetId, v119);
      if ( !v41->max_length )
        sub_1BCB25C(AliveFieldRandomTargetId, v119, v120);
LABEL_131:
      v41->m_Items[1] = AliveFieldRandomTargetId;
      return v41;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v67);
    case 22:
      v48 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v48, actorId, 0, 1, v49);
    case 23:
      v91 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v91, actorId, 1, 1, v92);
    case 24:
      v89 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v89, actorId, 1, 0, v90);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v55 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v55 && checkRevengeId )
        targetId = BattleServantData__getRevengeTargetUniqueId(v55, 0LL);
      if ( BattleData__getServantData(bdata, targetId, 0LL) )
      {
        v56 = sub_1BCB0A0(int___TypeInfo, 1LL);
        v41 = (System_Int32_array *)v56;
        if ( !v56 )
          sub_1BCB254(0LL, v57);
        if ( !*(_DWORD *)(v56 + 24) )
          sub_1BCB25C(v56, v57, v58);
LABEL_68:
        v41->m_Items[1] = targetId;
        return v41;
      }
      else
      {
        return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
      }
    case 31:
      v72 = sub_1BCB0A0(int___TypeInfo, 1LL);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0LL);
      if ( !v72 )
        sub_1BCB254(PlayerServantFromRandomCommandCard, v74);
      if ( !*(_DWORD *)(v72 + 24) )
        sub_1BCB25C(PlayerServantFromRandomCommandCard, v74, v75);
      *(_DWORD *)(v72 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1BCB254(PlayerServantFromRandomCommandCard, v74);
      v76 = args->fields.dataVals;
      if ( !v76 )
        sub_1BCB254(PlayerServantFromRandomCommandCard, v74);
      v138 = (System_Int32_array *)v72;
      v76->fields.targetCardIndex = cardIndex;
      return v138;
    case 33:
      v59 = sub_1BCB0A0(int___TypeInfo, 1LL);
      v60 = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
      if ( !v60 )
        sub_1BCB254(0LL, v61);
      if ( !v60->max_length )
        sub_1BCB25C(v60, v61, v62);
      if ( !v59 )
        sub_1BCB254(v60, v61);
      if ( !*(_DWORD *)(v59 + 24) )
        sub_1BCB25C(v60, v61, v62);
      v138 = (System_Int32_array *)v59;
      *(_DWORD *)(v59 + 32) = v60->m_Items[1];
      return v138;
    default:
      return v138;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dataVals = dataVals;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)dataVals, v5, v6);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1BCB254(0LL, method);
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
    sub_1BCB254(this, cardIndex);
  dataVals->fields.targetCardIndex = cardIndex;
}


System_Int32_array *__fastcall Target_BattleTargetArgs__get_EnemyRange(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  long double inited; // q0
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4B1B478 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_int___, method);
    byte_4B1B478 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1BCB254(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v8 = Method_System_Array_Empty_int___;
      v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v9 )
      {
        sub_1C1B4B8(Method_System_Array_Empty_int___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C1B45C(inited);
      if ( !*(_DWORD *)(v10 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C1B45C(inited);
      enemyRange = **(struct System_Int32_array ***)(v11 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6);
  }
  return enemyRange;
}