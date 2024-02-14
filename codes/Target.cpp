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
  __int64 v7; // x19
  __int64 v8; // x19
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v10; // x19
  struct BattleSkillInfoData_o *v11; // x8
  SkillLvEntity_o *Entity; // x0

  v4 = bData;
  if ( (byte_421192D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    bData = (BattleData_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_421192D = 1;
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
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v10 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v11 = beforeAction->fields.skillInfo) == 0LL)
    || !v10 )
  {
LABEL_19:
    sub_B0D97C(bData);
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
  __int64 v8; // x0

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
    sub_B0D97C(battleData);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
  {
    v8 = sub_B0D9A8(Next);
    sub_B0D948(v8, 0LL);
  }
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
  PartyAllFieldTargetAggregator_o *v28; // x25
  __int64 v29; // x1
  __int64 v30; // x2
  TargetAggregator_Args_o *v31; // x26
  __int64 v32; // x0

  if ( (byte_421192E & 1) == 0 )
  {
    sub_B0D8A4(&TargetAggregator_Args_TypeInfo, *(_QWORD *)&actorId);
    sub_B0D8A4(&NoneTargetAggregator_TypeInfo, v15);
    sub_B0D8A4(&OpponentAllFieldTargetAggregator_TypeInfo, v16);
    sub_B0D8A4(&OpponentFullTargetAggregator_TypeInfo, v17);
    sub_B0D8A4(&OpponentOtherFullTargetAggregator_TypeInfo, v18);
    sub_B0D8A4(&OpponentOtherTargetAggregator_TypeInfo, v19);
    sub_B0D8A4(&OpponentRangeAggregator_TypeInfo, v20);
    sub_B0D8A4(&PartyAllFieldTargetAggregator_TypeInfo, v21);
    sub_B0D8A4(&PartyFullTargetAggregator_TypeInfo, v22);
    sub_B0D8A4(&PartyLowsetHpRateTargetChoicer_TypeInfo, v23);
    sub_B0D8A4(&PartyLowsetHpValueTargetChoicer_TypeInfo, v24);
    sub_B0D8A4(&PartyOneOtherTargetAggregator_TypeInfo, v25);
    sub_B0D8A4(&PartyOtherFullTargetAggregator_TypeInfo, v26);
    sub_B0D8A4(&PartyOtherTargetAggregator_TypeInfo, v27);
    byte_421192E = 1;
  }
  switch ( type )
  {
    case 3:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 PartyAllFieldTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      PartyAllFieldTargetAggregator___ctor(v28, 0LL);
      break;
    case 6:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 OpponentAllFieldTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 7:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 PartyFullTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v28, 0LL);
      break;
    case 8:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 OpponentFullTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v28, 0LL);
      break;
    case 9:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 PartyOtherTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 10:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 PartyOneOtherTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 12:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 OpponentOtherTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 14:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 PartyOtherFullTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 15:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 OpponentOtherFullTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 28:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 PartyLowsetHpValueTargetChoicer_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v28, 0LL);
      break;
    case 29:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 PartyLowsetHpRateTargetChoicer_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v28, 0LL);
      break;
    case 30:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 OpponentRangeAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v28, 0LL);
      break;
    default:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B0D974(
                                                 NoneTargetAggregator_TypeInfo,
                                                 *(_QWORD *)&actorId,
                                                 *(_QWORD *)&targetId);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v28, 0LL);
      break;
  }
  v31 = (TargetAggregator_Args_o *)sub_B0D974(TargetAggregator_Args_TypeInfo, v29, v30);
  TargetAggregator_Args___ctor(v31, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v28 )
    sub_B0D97C(v32);
  v28->fields.args = v31;
  sub_B0D840(&v28->fields, v31);
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
    sub_B0D97C(0LL);
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
  __int64 v10; // x0
  System_Int32_array *v11; // x21
  int32_t v12; // w0
  int v13; // w10
  il2cpp_array_size_t v14; // w20
  __int64 v16; // x0

  if ( (byte_421192C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_B0D8A4(&int___TypeInfo, v9);
    byte_421192C = 1;
  }
  v10 = sub_B0D8BC(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v11 = (System_Int32_array *)v10;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse((System_Array_o *)checkIdArray, 0LL);
    v12 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
    v13 = v12 - 1;
    if ( !isPrev )
      v13 = 0;
    v14 = v12 >= 1 ? v13 : v12 == 0;
    if ( (signed int)v14 < (signed int)checkIdArray->max_length )
    {
      v10 = sub_B0D8BC(int___TypeInfo, 1LL);
      if ( v14 >= checkIdArray->max_length )
        goto LABEL_19;
      v11 = (System_Int32_array *)v10;
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 24) )
        {
          *(_DWORD *)(v10 + 32) = checkIdArray->m_Items[v14 + 1];
          return v11;
        }
LABEL_19:
        v16 = sub_B0D9A8(v10);
        sub_B0D948(v16, 0LL);
      }
LABEL_18:
      sub_B0D97C(v10);
    }
  }
  return v11;
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
  const MethodInfo *v8; // [xsp+10h] [xbp-10h]

  return Target__getTargetIds_19028192(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_19028192(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x0
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x28
  const MethodInfo *v26; // x7
  bool IsActorPlayerSide; // w19
  System_Int32_array *result; // x0
  TargetAggregator_o *TargetAggregator; // x0
  System_Int32_array *v30; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v32; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_Int32_array *v36; // x0
  const MethodInfo *v37; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v39; // x4
  BattleServantData_o *v40; // x0
  System_Int32_array *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  bool v44; // w8
  int32_t v45; // w8
  System_Int32_array *v46; // x0
  const MethodInfo *v47; // x4
  System_Int32_array *v48; // x19
  BattleServantData_o *ServantData; // x0
  __int64 v50; // x0
  System_Int32_array *v51; // x22
  bool v52; // w0
  const MethodInfo *v53; // x3
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  bool isEnemyID; // w0
  const MethodInfo *v58; // x3
  __int64 AliveFieldRandomTargetId; // x0
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  BattleServantData_o *v63; // x0
  __int64 v64; // x0
  System_Int32_array *v65; // x0
  const MethodInfo *v66; // x4
  System_Int32_array *v67; // x19
  System_Collections_Generic_List_int__o *v68; // x20
  __int64 v69; // x0
  __int64 v70; // x8
  unsigned __int64 v71; // x22
  int32_t v72; // w1
  int32_t v73; // w0
  unsigned int Next; // w21
  __int64 v75; // x0
  __int64 v76; // x0
  System_Int32_array *v77; // x19
  __int64 v78; // x0
  __int64 v79; // x8
  unsigned __int64 v80; // x21
  int32_t v81; // w1
  int32_t v82; // w0
  __int64 v83; // x0
  __int64 v84; // x0
  bool v85; // w8
  System_Int32_array *v86; // x19
  __int64 v87; // x0
  __int64 v88; // x8
  unsigned __int64 v89; // x21
  int32_t v90; // w1
  int32_t size; // w0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  System_Int32_array *v108; // [xsp+8h] [xbp-58h]

  if ( (byte_421192B & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v22);
    byte_421192B = 1;
  }
  v23 = sub_B0D8BC(int___TypeInfo, 0LL);
  v108 = (System_Int32_array *)v23;
  if ( !bdata )
    goto LABEL_133;
  v25 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v23 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v23 )
LABEL_133:
    sub_B0D97C(v23);
  v25 = (System_Int32_array *)v23;
  if ( !*(_DWORD *)(v23 + 24) )
  {
    v97 = sub_B0D9A8(v23);
    sub_B0D948(v97, 0LL);
  }
  *(_DWORD *)(v23 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v24);
  result = v108;
  switch ( type )
  {
    case 0:
    case 25:
      result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      v30 = result;
      if ( !result )
        sub_B0D97C(0LL);
      if ( !result->max_length )
      {
        v98 = sub_B0D9A8(result);
        sub_B0D948(v98, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B0D97C(0LL);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v102 = sub_B0D9A8(FieldPlayerServantIDList);
          sub_B0D948(v102, 0LL);
        }
        if ( !v30->max_length )
        {
          v32 = sub_B0D9A8(FieldPlayerServantIDList);
          sub_B0D948(v32, 0LL);
        }
        goto LABEL_38;
      }
      return result;
    case 1:
      v48 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      if ( !v48 )
        sub_B0D97C(ServantData);
      if ( !v48->max_length )
      {
        v50 = sub_B0D9A8(ServantData);
        sub_B0D948(v50, 0LL);
      }
      goto LABEL_125;
    case 2:
    case 5:
      return result;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v25, 0LL);
    case 4:
      v55 = sub_B0D8BC(int___TypeInfo, 1LL);
      v48 = (System_Int32_array *)v55;
      if ( !v55 )
        sub_B0D97C(0LL);
      pttargetId = targetId;
      if ( !*(_DWORD *)(v55 + 24) )
      {
        v56 = sub_B0D9A8(v55);
        sub_B0D948(v56, 0LL);
      }
      goto LABEL_125;
    case 6:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        return BattleData__getFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
    case 7:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, 0, 0LL);
      if ( args )
        v85 = !Target_BattleTargetArgs__IsCheckDead(args, 0LL);
      else
        v85 = 1;
      return BattleData__getPlayerServantIDList(bdata, v85, v25, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
        v44 = !Target_BattleTargetArgs__IsCheckDead(args, 0LL);
      else
        v44 = 1;
      return BattleData__getPlayerServantIDList(bdata, v44, 0LL, 0LL);
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
                           v26);
      if ( !TargetAggregator )
        sub_B0D97C(0LL);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v48 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v58);
      if ( !v48 )
        sub_B0D97C(AliveFieldRandomTargetId);
      if ( !v48->max_length )
      {
        v101 = sub_B0D9A8(AliveFieldRandomTargetId);
        sub_B0D948(v101, 0LL);
      }
      v48->m_Items[1] = AliveFieldRandomTargetId;
      return v48;
    case 13:
      v51 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      v52 = BattleData__isEnemyID(bdata, actorId, 0LL);
      v54 = Target__GetAliveFieldRandomTargetId(bdata, !v52, IsActorPlayerSide, v53);
      if ( !v51 )
        sub_B0D97C(v54);
      if ( !v51->max_length )
      {
        v100 = sub_B0D9A8(v54);
        sub_B0D948(v100, 0LL);
      }
      v51->m_Items[1] = v54;
      return v51;
    case 16:
      v48 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      v63 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v63 )
        return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      if ( !v48 )
        sub_B0D97C(v63);
      if ( !v48->max_length )
      {
        v64 = sub_B0D9A8(v63);
        sub_B0D948(v64, 0LL);
      }
      goto LABEL_125;
    case 17:
      result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      v30 = result;
      if ( !result )
        sub_B0D97C(0LL);
      if ( !result->max_length )
      {
        v99 = sub_B0D9A8(result);
        sub_B0D948(v99, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B0D97C(0LL);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v105 = sub_B0D9A8(FieldPlayerServantIDList);
          sub_B0D948(v105, 0LL);
        }
        if ( !v30->max_length )
        {
          v106 = sub_B0D9A8(FieldPlayerServantIDList);
          sub_B0D948(v106, 0LL);
        }
LABEL_38:
        v45 = FieldPlayerServantIDList->m_Items[1];
        result = v30;
        v30->m_Items[1] = v45;
      }
      return result;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v86 = AliveFieldEnemyServantIDList;
      v68 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v61,
                                                        v62);
      System_Collections_Generic_List_int____ctor(
        v68,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v86 )
        sub_B0D97C(v87);
      v88 = *(_QWORD *)&v86->max_length;
      if ( (int)v88 >= 1 )
      {
        v89 = 0LL;
        do
        {
          if ( v89 >= (unsigned int)v88 )
          {
            v96 = sub_B0D9A8(v87);
            sub_B0D948(v96, 0LL);
          }
          v90 = v86->m_Items[v89 + 1];
          if ( v90 != pttargetId )
          {
            if ( !v68 )
              sub_B0D97C(v87);
            System_Collections_Generic_List_int___Add(
              v68,
              v90,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v88) = v86->max_length;
          ++v89;
        }
        while ( (__int64)v89 < (int)v88 );
      }
      if ( !v68 )
        sub_B0D97C(v87);
      size = v68->fields._size;
      if ( !size )
        return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(size, 0LL);
      v92 = sub_B0D8BC(int___TypeInfo, 1LL);
      v48 = (System_Int32_array *)v92;
      if ( v68->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v92 )
        sub_B0D97C(0LL);
      if ( !*(_DWORD *)(v92 + 24) )
      {
        v104 = sub_B0D9A8(v92);
        sub_B0D948(v104, 0LL);
      }
      goto LABEL_117;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v67 = AliveFieldPlayerServantIDList;
      v68 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v34,
                                                        v35);
      System_Collections_Generic_List_int____ctor(
        v68,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v67 )
        sub_B0D97C(v69);
      v70 = *(_QWORD *)&v67->max_length;
      if ( (int)v70 >= 1 )
      {
        v71 = 0LL;
        do
        {
          if ( v71 >= (unsigned int)v70 )
          {
            v94 = sub_B0D9A8(v69);
            sub_B0D948(v94, 0LL);
          }
          v72 = v67->m_Items[v71 + 1];
          if ( v72 != actorId )
          {
            if ( !v68 )
              sub_B0D97C(v69);
            System_Collections_Generic_List_int___Add(
              v68,
              v72,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v70) = v67->max_length;
          ++v71;
        }
        while ( (__int64)v71 < (int)v70 );
      }
      if ( !v68 )
        sub_B0D97C(v69);
      v73 = v68->fields._size;
      if ( !v73 )
        return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v73, 0LL);
      v75 = sub_B0D8BC(int___TypeInfo, 1LL);
      v48 = (System_Int32_array *)v75;
      if ( v68->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v75 )
        sub_B0D97C(0LL);
      if ( !*(_DWORD *)(v75 + 24) )
      {
        v76 = sub_B0D9A8(v75);
        sub_B0D948(v76, 0LL);
      }
      goto LABEL_117;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v41 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v41 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v77 = v41;
      v68 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v42,
                                                        v43);
      System_Collections_Generic_List_int____ctor(
        v68,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v77 )
        sub_B0D97C(v78);
      v79 = *(_QWORD *)&v77->max_length;
      if ( (int)v79 >= 1 )
      {
        v80 = 0LL;
        do
        {
          if ( v80 >= (unsigned int)v79 )
          {
            v95 = sub_B0D9A8(v78);
            sub_B0D948(v95, 0LL);
          }
          v81 = v77->m_Items[v80 + 1];
          if ( v81 != targetId )
          {
            if ( !v68 )
              sub_B0D97C(v78);
            System_Collections_Generic_List_int___Add(
              v68,
              v81,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v79) = v77->max_length;
          ++v80;
        }
        while ( (__int64)v80 < (int)v79 );
      }
      if ( !v68 )
        sub_B0D97C(v78);
      v82 = v68->fields._size;
      if ( !v82 )
        return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v82, 0LL);
      v83 = sub_B0D8BC(int___TypeInfo, 1LL);
      v48 = (System_Int32_array *)v83;
      if ( v68->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v83 )
        sub_B0D97C(0LL);
      if ( !*(_DWORD *)(v83 + 24) )
      {
        v84 = sub_B0D9A8(v83);
        sub_B0D948(v84, 0LL);
      }
LABEL_117:
      v48->m_Items[1] = v68->fields._items->m_Items[Next + 1];
      return v48;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v39);
    case 22:
      v46 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v46, actorId, 0, 1, v47);
    case 23:
      v36 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v36, actorId, 1, 1, v37);
    case 24:
      v65 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v65, actorId, 1, 0, v66);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v40 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v40 )
      {
        pttargetId = targetId;
        if ( checkRevengeId )
          pttargetId = BattleServantData__getRevengeTargetUniqueId(v40, 0LL);
      }
      else
      {
        pttargetId = targetId;
      }
      if ( !BattleData__getServantData(bdata, pttargetId, 0LL) )
        return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      v93 = sub_B0D8BC(int___TypeInfo, 1LL);
      v48 = (System_Int32_array *)v93;
      if ( !v93 )
        sub_B0D97C(0LL);
      if ( !*(_DWORD *)(v93 + 24) )
      {
        v103 = sub_B0D9A8(v93);
        sub_B0D948(v103, 0LL);
      }
LABEL_125:
      v48->m_Items[1] = pttargetId;
      return v48;
    default:
      return v108;
  }
}


bool __fastcall Target__isAllTargets(int32_t targetType, const MethodInfo *method)
{
  return (targetType | 4) == 7 || targetType == 6 || targetType == 8;
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
  return (unsigned int)targetType <= 0x14 && ((1 << targetType) & 0x10B170) != 0 || targetType == 27 || targetType == 30;
}


bool __fastcall Target__isFieldEnemy(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)targetType <= 0x14 && ((1 << targetType) & 0x103070) != 0 || targetType == 27 || targetType == 30;
}


bool __fastcall Target__isFieldPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)targetType <= 0x17 && ((1 << targetType) & 0xEF0E0F) != 0 || (targetType | 1) == 25;
}


bool __fastcall Target__isPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)targetType <= 0x17 && ((1 << targetType) & 0xEF4E8F) != 0 || (targetType | 1) == 25;
}


bool __fastcall Target__isSubChoose(int32_t targetType, const MethodInfo *method)
{
  return (targetType | 1) == 17;
}


void __fastcall Target_BattleTargetArgs___ctor(
        Target_BattleTargetArgs_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dataVals = dataVals;
  sub_B0D840(&this->fields, dataVals);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_B0D97C(0LL);
  return DataVals__isCheckDead(dataVals, 0LL);
}


System_Int32_array *__fastcall Target_BattleTargetArgs__get_EnemyRange(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array **p_enemyRange; // x19
  System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  _QWORD **v6; // x21
  __int64 v7; // x20
  __int16 v8; // w8
  __int64 v9; // x20
  __int64 v10; // x20
  __int64 v11; // x20

  if ( (byte_421177A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, method);
    byte_421177A = 1;
  }
  p_enemyRange = &this->fields.enemyRange;
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_B0D97C(0LL);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v6 = (_QWORD **)Method_System_Array_Empty_int___;
      v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v8 = *(_WORD *)(v7 + 306);
      if ( (v8 & 1) == 0 )
      {
        sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v8 = *(_WORD *)(v7 + 306);
      }
      if ( (v8 & 0x400) != 0 )
      {
        v9 = *v6[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AA65A4(*v6[6]);
        if ( !*(_DWORD *)(v9 + 224) )
        {
          v10 = *v6[6];
          if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
            sub_AA65A4(*v6[6]);
          j_il2cpp_runtime_class_init_0(v10);
        }
      }
      v11 = *v6[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AA65A4(*v6[6]);
      enemyRange = **(System_Int32_array ***)(v11 + 184);
    }
    *p_enemyRange = enemyRange;
    sub_B0D840(p_enemyRange, enemyRange);
  }
  return enemyRange;
}