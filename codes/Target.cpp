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
  BattleData_o *v4; // x19
  __int64 v5; // x1
  struct BattleActionData_o *beforeAction; // x20
  __int64 v7; // x0
  __int64 v8; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v10; // x19
  struct BattleSkillInfoData_o *v11; // x8
  SkillLvEntity_o *Entity; // x0

  v4 = bData;
  if ( (byte_49FB45F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    bData = (BattleData_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_49FB45F = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  if ( taskActorType != 1 )
    return 0;
  if ( !v4->fields.isMultiTargetBattle )
    return 0;
  beforeAction = v4->fields.beforeAction;
  if ( !beforeAction || !beforeAction->fields.skillInfo )
    return 0;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v10 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v11 = beforeAction->fields.skillInfo) == 0LL)
    || !v10 )
  {
LABEL_19:
    sub_1B64324(bData);
  }
  Entity = SkillLvMaster__GetEntity(v10, (int32_t)bData, v11->fields.skilllv, 0LL);
  if ( Entity )
    return SkillLvEntity__IsAress(Entity, 0LL);
  return 0;
}


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
    sub_1B64324(battleData);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1B6432C(Next, v8);
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
  __int64 v28; // x25
  __int64 v29; // x1
  __int64 v30; // x2
  TargetAggregator_Args_o *v31; // x26
  __int64 v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_49FB460 & 1) == 0 )
  {
    sub_1B640C8(&TargetAggregator_Args_TypeInfo, *(_QWORD *)&actorId);
    sub_1B640C8(&NoneTargetAggregator_TypeInfo, v15);
    sub_1B640C8(&OpponentAllFieldTargetAggregator_TypeInfo, v16);
    sub_1B640C8(&OpponentFullTargetAggregator_TypeInfo, v17);
    sub_1B640C8(&OpponentOtherFullTargetAggregator_TypeInfo, v18);
    sub_1B640C8(&OpponentOtherTargetAggregator_TypeInfo, v19);
    sub_1B640C8(&OpponentRangeAggregator_TypeInfo, v20);
    sub_1B640C8(&PartyAllFieldTargetAggregator_TypeInfo, v21);
    sub_1B640C8(&PartyFullTargetAggregator_TypeInfo, v22);
    sub_1B640C8(&PartyLowsetHpRateTargetChoicer_TypeInfo, v23);
    sub_1B640C8(&PartyLowsetHpValueTargetChoicer_TypeInfo, v24);
    sub_1B640C8(&PartyOneOtherTargetAggregator_TypeInfo, v25);
    sub_1B640C8(&PartyOtherFullTargetAggregator_TypeInfo, v26);
    sub_1B640C8(&PartyOtherTargetAggregator_TypeInfo, v27);
    byte_49FB460 = 1;
  }
  switch ( type )
  {
    case 3:
      v28 = sub_1B64314(PartyAllFieldTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 6:
      v28 = sub_1B64314(OpponentAllFieldTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 7:
      v28 = sub_1B64314(PartyFullTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v28, 0LL);
      break;
    case 8:
      v28 = sub_1B64314(OpponentFullTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v28, 0LL);
      break;
    case 9:
      v28 = sub_1B64314(PartyOtherTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 10:
      v28 = sub_1B64314(PartyOneOtherTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 12:
      v28 = sub_1B64314(OpponentOtherTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 14:
      v28 = sub_1B64314(PartyOtherFullTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 15:
      v28 = sub_1B64314(OpponentOtherFullTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 28:
      v28 = sub_1B64314(PartyLowsetHpValueTargetChoicer_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v28, 0LL);
      break;
    case 29:
      v28 = sub_1B64314(PartyLowsetHpRateTargetChoicer_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v28, 0LL);
      break;
    case 30:
      v28 = sub_1B64314(OpponentRangeAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v28, 0LL);
      break;
    default:
      v28 = sub_1B64314(NoneTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v28, 0LL);
      break;
  }
  v31 = (TargetAggregator_Args_o *)sub_1B64314(TargetAggregator_Args_TypeInfo, v29, v30);
  TargetAggregator_Args___ctor(v31, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v28 )
    sub_1B64324(v32);
  *(_QWORD *)(v28 + 16) = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v31, v33, v34);
  return (TargetAggregator_o *)v28;
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
    sub_1B64324(0LL);
  return BattleData__isPlayerID(bData, actorId, 0LL);
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
  System_Int32_array *v12; // x21
  int32_t v13; // w0
  int v14; // w10
  il2cpp_array_size_t v15; // w20
  __int64 v16; // x1

  if ( (byte_49FB45E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_1B640C8(&Method_System_Array_Reverse_int___, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    byte_49FB45E = 1;
  }
  v11 = sub_1B64170(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v12 = (System_Int32_array *)v11;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_2DFB3C4 *)Method_System_Array_Reverse_int___);
    v13 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
    v14 = v13 - 1;
    if ( !isPrev )
      v14 = 0;
    v15 = v13 >= 1 ? v14 : v13 == 0;
    if ( (signed int)v15 < (signed int)checkIdArray->max_length )
    {
      v11 = sub_1B64170(int___TypeInfo, 1LL);
      if ( v15 >= checkIdArray->max_length )
        goto LABEL_19;
      v12 = (System_Int32_array *)v11;
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 24) )
        {
          *(_DWORD *)(v11 + 32) = checkIdArray->m_Items[v15 + 1];
          return v12;
        }
LABEL_19:
        sub_1B6432C(v11, v16);
      }
LABEL_18:
      sub_1B64324(v11);
    }
  }
  return v12;
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

  return Target__getTargetIds_37401508(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_37401508(
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
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x28
  __int64 v27; // x1
  const MethodInfo *v28; // x7
  bool IsActorPlayerSide; // w29
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  System_Int32_array *v35; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v37; // x1
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Int32_array *v41; // x0
  const MethodInfo *v42; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v44; // x4
  BattleServantData_o *v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  System_Int32_array *v48; // x19
  System_Int32_array *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  DataVals_o *v52; // x0
  bool v53; // w8
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  System_Int32_array *v57; // x0
  const MethodInfo *v58; // x4
  System_Int32_array *v59; // x21
  BattleServantData_o *ServantData; // x0
  __int64 v61; // x1
  System_Int32_array *v62; // x22
  bool v63; // w0
  const MethodInfo *v64; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x1
  bool isEnemyID; // w0
  const MethodInfo *v70; // x3
  __int64 v71; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  BattleServantData_o *v75; // x0
  __int64 v76; // x1
  System_Int32_array *v77; // x0
  const MethodInfo *v78; // x4
  System_Int32_array *v79; // x22
  System_Collections_Generic_List_int__o *v80; // x20
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x8
  unsigned __int64 v84; // x19
  struct System_Int32_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  int32_t v88; // w0
  int32_t v89; // w21
  __int64 Item; // x0
  __int64 v91; // x1
  System_Int32_array *v92; // x21
  System_Collections_Generic_List_int__o *v93; // x20
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x8
  unsigned __int64 v97; // x19
  struct System_Int32_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  int32_t v101; // w0
  int32_t v102; // w21
  __int64 v103; // x1
  DataVals_o *dataVals; // x0
  bool v105; // w8
  System_Int32_array *v106; // x21
  System_Collections_Generic_List_int__o *v107; // x20
  __int64 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x8
  unsigned __int64 v111; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v113; // x9
  __int64 size; // x10
  int32_t v115; // w0
  int32_t Next; // w21
  __int64 v117; // x1
  System_Int32_array *v118; // [xsp+8h] [xbp-68h]

  if ( (byte_49FB45D & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v22);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v23);
    byte_49FB45D = 1;
  }
  v24 = sub_1B64170(int___TypeInfo, 0LL);
  v118 = (System_Int32_array *)v24;
  if ( !bdata )
    goto LABEL_137;
  v26 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v24 = sub_1B64170(int___TypeInfo, 1LL);
  if ( !v24 )
LABEL_137:
    sub_1B64324(v24);
  v26 = (System_Int32_array *)v24;
  if ( !*(_DWORD *)(v24 + 24) )
    sub_1B6432C(v24, v27);
  *(_DWORD *)(v24 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v25);
  switch ( type )
  {
    case 0:
    case 25:
      v33 = sub_1B64170(int___TypeInfo, 1LL);
      v35 = (System_Int32_array *)v33;
      if ( !v33 )
        sub_1B64324(0LL);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1B6432C(v33, v34);
      *(_DWORD *)(v33 + 32) = actorId;
      v118 = (System_Int32_array *)v33;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1B64324(0LL);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1B6432C(FieldPlayerServantIDList, v37);
        if ( !v35->max_length )
          sub_1B6432C(FieldPlayerServantIDList, v37);
        goto LABEL_45;
      }
      return v118;
    case 1:
      v59 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
      if ( !v59 )
        sub_1B64324(ServantData);
      if ( !v59->max_length )
        sub_1B6432C(ServantData, v61);
      goto LABEL_69;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v26, 0LL);
    case 4:
      v67 = sub_1B64170(int___TypeInfo, 1LL);
      v48 = (System_Int32_array *)v67;
      if ( !v67 )
        sub_1B64324(0LL);
      if ( !*(_DWORD *)(v67 + 24) )
        sub_1B6432C(v67, v68);
      goto LABEL_60;
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
          sub_1B64324(0LL);
        v105 = !DataVals__isCheckDead(dataVals, 0LL);
      }
      else
      {
        v105 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v105, v26, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
      {
        v52 = args->fields.dataVals;
        if ( !v52 )
          sub_1B64324(0LL);
        v53 = !DataVals__isCheckDead(v52, 0LL);
      }
      else
      {
        v53 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v53, 0LL, 0LL);
    case 9:
    case 10:
    case 12:
    case 14:
    case 15:
    case 28:
    case 29:
    case 30:
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
        sub_1B64324(0LL);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v62 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v70);
      if ( !v62 )
        sub_1B64324(AliveFieldRandomTargetId);
      if ( !v62->max_length )
        sub_1B6432C(AliveFieldRandomTargetId, v71);
      goto LABEL_63;
    case 13:
      v62 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      v63 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v63, IsActorPlayerSide, v64);
      if ( !v62 )
        sub_1B64324(AliveFieldRandomTargetId);
      if ( !v62->max_length )
        sub_1B6432C(AliveFieldRandomTargetId, v66);
LABEL_63:
      v62->m_Items[1] = AliveFieldRandomTargetId;
      return v62;
    case 16:
      v59 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      v75 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v75 )
        return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
      if ( !v59 )
        sub_1B64324(v75);
      if ( !v59->max_length )
        sub_1B6432C(v75, v76);
LABEL_69:
      v59->m_Items[1] = pttargetId;
      return v59;
    case 17:
      v54 = sub_1B64170(int___TypeInfo, 1LL);
      v35 = (System_Int32_array *)v54;
      if ( !v54 )
        sub_1B64324(0LL);
      if ( !*(_DWORD *)(v54 + 24) )
        sub_1B6432C(v54, v55);
      *(_DWORD *)(v54 + 32) = actorId;
      v118 = (System_Int32_array *)v54;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1B64324(0LL);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1B6432C(FieldPlayerServantIDList, v56);
        if ( !v35->max_length )
          sub_1B6432C(FieldPlayerServantIDList, v56);
LABEL_45:
        v118 = v35;
        v35->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      }
      return v118;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v106 = AliveFieldEnemyServantIDList;
      v107 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v73,
                                                         v74);
      System_Collections_Generic_List_int____ctor(
        v107,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v106 )
        sub_1B64324(v108);
      v110 = *(_QWORD *)&v106->max_length;
      if ( (int)v110 >= 1 )
      {
        v111 = 0LL;
        do
        {
          if ( v111 >= (unsigned int)v110 )
            sub_1B6432C(v108, v109);
          v109 = (unsigned int)v106->m_Items[v111 + 1];
          if ( (_DWORD)v109 != pttargetId )
          {
            if ( !v107 )
              sub_1B64324(v108);
            items = v107->fields._items;
            v113 = Method_System_Collections_Generic_List_int__Add__;
            ++v107->fields._version;
            if ( !items )
              sub_1B64324(v108);
            size = v107->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v107,
                v109,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
            }
            else
            {
              v107->fields._size = size + 1;
              items->m_Items[size + 1] = v109;
            }
          }
          LODWORD(v110) = v106->max_length;
          ++v111;
        }
        while ( (__int64)v111 < (int)v110 );
      }
      if ( !v107 )
        sub_1B64324(v108);
      v115 = v107->fields._size;
      if ( !v115 )
        return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v115, 0LL);
      v48 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      Item = System_Collections_Generic_List_int___get_Item(
               v107,
               Next,
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v48 )
        sub_1B64324(Item);
      if ( !v48->max_length )
        sub_1B6432C(Item, v117);
      goto LABEL_128;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v79 = AliveFieldPlayerServantIDList;
      v80 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v39,
                                                        v40);
      System_Collections_Generic_List_int____ctor(
        v80,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v79 )
        sub_1B64324(v81);
      v83 = *(_QWORD *)&v79->max_length;
      if ( (int)v83 >= 1 )
      {
        v84 = 0LL;
        do
        {
          if ( v84 >= (unsigned int)v83 )
            sub_1B6432C(v81, v82);
          v82 = (unsigned int)v79->m_Items[v84 + 1];
          if ( (_DWORD)v82 != actorId )
          {
            if ( !v80 )
              sub_1B64324(v81);
            v85 = v80->fields._items;
            v86 = Method_System_Collections_Generic_List_int__Add__;
            ++v80->fields._version;
            if ( !v85 )
              sub_1B64324(v81);
            v87 = v80->fields._size;
            if ( (unsigned int)v87 >= v85->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v80,
                v82,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
            }
            else
            {
              v80->fields._size = v87 + 1;
              v85->m_Items[v87 + 1] = v82;
            }
          }
          LODWORD(v83) = v79->max_length;
          ++v84;
        }
        while ( (__int64)v84 < (int)v83 );
      }
      if ( !v80 )
        sub_1B64324(v81);
      v88 = v80->fields._size;
      if ( !v88 )
        return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
      v89 = BattleRandom__getNext(v88, 0LL);
      v48 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      Item = System_Collections_Generic_List_int___get_Item(
               v80,
               v89,
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v48 )
        sub_1B64324(Item);
      if ( !v48->max_length )
        sub_1B6432C(Item, v91);
      goto LABEL_128;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v49 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v49 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v92 = v49;
      v93 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v50,
                                                        v51);
      System_Collections_Generic_List_int____ctor(
        v93,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v92 )
        sub_1B64324(v94);
      v96 = *(_QWORD *)&v92->max_length;
      if ( (int)v96 >= 1 )
      {
        v97 = 0LL;
        do
        {
          if ( v97 >= (unsigned int)v96 )
            sub_1B6432C(v94, v95);
          v95 = (unsigned int)v92->m_Items[v97 + 1];
          if ( (_DWORD)v95 != targetId )
          {
            if ( !v93 )
              sub_1B64324(v94);
            v98 = v93->fields._items;
            v99 = Method_System_Collections_Generic_List_int__Add__;
            ++v93->fields._version;
            if ( !v98 )
              sub_1B64324(v94);
            v100 = v93->fields._size;
            if ( (unsigned int)v100 >= v98->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v93,
                v95,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
            }
            else
            {
              v93->fields._size = v100 + 1;
              v98->m_Items[v100 + 1] = v95;
            }
          }
          LODWORD(v96) = v92->max_length;
          ++v97;
        }
        while ( (__int64)v97 < (int)v96 );
      }
      if ( !v93 )
        sub_1B64324(v94);
      v101 = v93->fields._size;
      if ( !v101 )
        return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
      v102 = BattleRandom__getNext(v101, 0LL);
      v48 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      Item = System_Collections_Generic_List_int___get_Item(
               v93,
               v102,
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v48 )
        sub_1B64324(Item);
      if ( !v48->max_length )
        sub_1B6432C(Item, v103);
LABEL_128:
      v48->m_Items[1] = Item;
      return v48;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v44);
    case 22:
      v57 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v57, actorId, 0, 1, v58);
    case 23:
      v41 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v41, actorId, 1, 1, v42);
    case 24:
      v77 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v77, actorId, 1, 0, v78);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v45 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v45 && checkRevengeId )
        targetId = BattleServantData__getRevengeTargetUniqueId(v45, 0LL);
      if ( BattleData__getServantData(bdata, targetId, 0LL) )
      {
        v46 = sub_1B64170(int___TypeInfo, 1LL);
        v48 = (System_Int32_array *)v46;
        if ( !v46 )
          sub_1B64324(0LL);
        if ( !*(_DWORD *)(v46 + 24) )
          sub_1B6432C(v46, v47);
LABEL_60:
        v48->m_Items[1] = targetId;
        return v48;
      }
      else
      {
        return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
      }
    default:
      return v118;
  }
}


bool __fastcall Target__isAllTargets(int32_t targetType, const MethodInfo *method)
{
  return targetType == 8 || targetType == 6 || (targetType & 0xFFFFFFFB) == 3;
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
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dataVals = dataVals;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)dataVals, v5, v6);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1B64324(0LL);
  return DataVals__isCheckDead(dataVals, 0LL);
}


System_Int32_array *__fastcall Target_BattleTargetArgs__get_EnemyRange(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_49FB461 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, method);
    byte_49FB461 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1B64324(0LL);
    enemyRange = DataVals__GetParamArray(dataVals, 134, 0LL);
    if ( !enemyRange )
    {
      v7 = Method_System_Array_Empty_int___;
      v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v8 )
      {
        sub_1BB6000(Method_System_Array_Empty_int___);
        v8 = v7[7];
      }
      v9 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1BB5FA4(v9);
      if ( !*(_DWORD *)(v9 + 224) )
        j_il2cpp_runtime_class_init_0(v9);
      v10 = *(_QWORD *)(v7[7] + 16LL);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BB5FA4(v10);
      enemyRange = **(struct System_Int32_array ***)(v10 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6);
  }
  return enemyRange;
}