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
  if ( (byte_418452A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    bData = (BattleData_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_418452A = 1;
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
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(v8);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v10 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v11 = beforeAction->fields.skillInfo) == 0LL)
    || !v10 )
  {
LABEL_19:
    sub_B2C434(bData, *(_QWORD *)&taskActorType);
  }
  Entity = SkillLvMaster__GetEntity(v10, (int32_t)bData, v11->fields.skilllv, 0LL);
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
    sub_B2C434(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
  {
    v8 = sub_B2C460(Next);
    sub_B2C400(v8, 0LL);
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
  TargetAggregator_Args_o *v29; // x26
  __int64 v30; // x0
  __int64 v31; // x1

  if ( (byte_418452B & 1) == 0 )
  {
    sub_B2C35C(&TargetAggregator_Args_TypeInfo, *(_QWORD *)&actorId);
    sub_B2C35C(&NoneTargetAggregator_TypeInfo, v15);
    sub_B2C35C(&OpponentAllFieldTargetAggregator_TypeInfo, v16);
    sub_B2C35C(&OpponentFullTargetAggregator_TypeInfo, v17);
    sub_B2C35C(&OpponentOtherFullTargetAggregator_TypeInfo, v18);
    sub_B2C35C(&OpponentOtherTargetAggregator_TypeInfo, v19);
    sub_B2C35C(&OpponentRangeAggregator_TypeInfo, v20);
    sub_B2C35C(&PartyAllFieldTargetAggregator_TypeInfo, v21);
    sub_B2C35C(&PartyFullTargetAggregator_TypeInfo, v22);
    sub_B2C35C(&PartyLowsetHpRateTargetChoicer_TypeInfo, v23);
    sub_B2C35C(&PartyLowsetHpValueTargetChoicer_TypeInfo, v24);
    sub_B2C35C(&PartyOneOtherTargetAggregator_TypeInfo, v25);
    sub_B2C35C(&PartyOtherFullTargetAggregator_TypeInfo, v26);
    sub_B2C35C(&PartyOtherTargetAggregator_TypeInfo, v27);
    byte_418452B = 1;
  }
  switch ( type )
  {
    case 3:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor(v28, 0LL);
      break;
    case 6:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 7:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v28, 0LL);
      break;
    case 8:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v28, 0LL);
      break;
    case 9:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 10:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 12:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 14:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 15:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 28:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v28, 0LL);
      break;
    case 29:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v28, 0LL);
      break;
    case 30:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v28, 0LL);
      break;
    default:
      v28 = (PartyAllFieldTargetAggregator_o *)sub_B2C42C(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v28, 0LL);
      break;
  }
  v29 = (TargetAggregator_Args_o *)sub_B2C42C(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v29, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v28 )
    sub_B2C434(v30, v31);
  v28->fields.args = v29;
  sub_B2C2F8(&v28->fields, v29);
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
    sub_B2C434(0LL, actorId);
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
  __int64 v11; // x1
  System_Int32_array *v12; // x21
  int32_t v13; // w0
  int v14; // w10
  il2cpp_array_size_t v15; // w20
  __int64 v17; // x0

  if ( (byte_4184529 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_B2C35C(&int___TypeInfo, v9);
    byte_4184529 = 1;
  }
  v10 = sub_B2C374(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v12 = (System_Int32_array *)v10;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse((System_Array_o *)checkIdArray, 0LL);
    v13 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
    v14 = v13 - 1;
    if ( !isPrev )
      v14 = 0;
    v15 = v13 >= 1 ? v14 : v13 == 0;
    if ( (signed int)v15 < (signed int)checkIdArray->max_length )
    {
      v10 = sub_B2C374(int___TypeInfo, 1LL);
      if ( v15 >= checkIdArray->max_length )
        goto LABEL_19;
      v12 = (System_Int32_array *)v10;
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 24) )
        {
          *(_DWORD *)(v10 + 32) = checkIdArray->m_Items[v15 + 1];
          return v12;
        }
LABEL_19:
        v17 = sub_B2C460(v10);
        sub_B2C400(v17, 0LL);
      }
LABEL_18:
      sub_B2C434(v10, v11);
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
  const MethodInfo *v8; // [xsp+10h] [xbp-10h]

  return Target__getTargetIds_18697816(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_18697816(
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
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x28
  const MethodInfo *v27; // x7
  bool IsActorPlayerSide; // w19
  System_Int32_array *result; // x0
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  System_Int32_array *v33; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v35; // x1
  __int64 v36; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  System_Int32_array *v38; // x0
  const MethodInfo *v39; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v41; // x4
  BattleServantData_o *v42; // x0
  System_Int32_array *v43; // x0
  bool v44; // w8
  __int64 v45; // x1
  __int64 v46; // x1
  int32_t v47; // w8
  System_Int32_array *v48; // x0
  const MethodInfo *v49; // x4
  System_Int32_array *v50; // x19
  BattleServantData_o *ServantData; // x0
  __int64 v52; // x1
  __int64 v53; // x0
  System_Int32_array *v54; // x22
  bool v55; // w0
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x0
  bool isEnemyID; // w0
  const MethodInfo *v63; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v65; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  BattleServantData_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  System_Int32_array *v70; // x0
  const MethodInfo *v71; // x4
  System_Int32_array *v72; // x19
  System_Collections_Generic_List_int__o *v73; // x20
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x8
  unsigned __int64 v77; // x22
  int32_t v78; // w0
  unsigned int Next; // w21
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x0
  System_Int32_array *v83; // x19
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x8
  unsigned __int64 v87; // x21
  int32_t v88; // w0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x0
  bool v92; // w8
  System_Int32_array *v93; // x19
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x8
  unsigned __int64 v97; // x21
  int32_t size; // w0
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x0
  __int64 v102; // x1
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x0
  System_Int32_array *v117; // [xsp+8h] [xbp-58h]

  if ( (byte_4184528 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v22);
    byte_4184528 = 1;
  }
  v23 = sub_B2C374(int___TypeInfo, 0LL);
  v117 = (System_Int32_array *)v23;
  if ( !bdata )
    goto LABEL_133;
  v26 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v23 = sub_B2C374(int___TypeInfo, 1LL);
  if ( !v23 )
LABEL_133:
    sub_B2C434(v23, v24);
  v26 = (System_Int32_array *)v23;
  if ( !*(_DWORD *)(v23 + 24) )
  {
    v106 = sub_B2C460(v23);
    sub_B2C400(v106, 0LL);
  }
  *(_DWORD *)(v23 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v25);
  result = v117;
  switch ( type )
  {
    case 0:
    case 25:
      result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      v33 = result;
      if ( !result )
        sub_B2C434(0LL, v32);
      if ( !result->max_length )
      {
        v107 = sub_B2C460(result);
        sub_B2C400(v107, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B2C434(0LL, v35);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v111 = sub_B2C460(FieldPlayerServantIDList);
          sub_B2C400(v111, 0LL);
        }
        if ( !v33->max_length )
        {
          v36 = sub_B2C460(FieldPlayerServantIDList);
          sub_B2C400(v36, 0LL);
        }
        goto LABEL_38;
      }
      return result;
    case 1:
      v50 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      if ( !v50 )
        sub_B2C434(ServantData, v52);
      if ( !v50->max_length )
      {
        v53 = sub_B2C460(ServantData);
        sub_B2C400(v53, 0LL);
      }
      goto LABEL_125;
    case 2:
    case 5:
      return result;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v26, 0LL);
    case 4:
      v59 = sub_B2C374(int___TypeInfo, 1LL);
      v50 = (System_Int32_array *)v59;
      if ( !v59 )
        sub_B2C434(0LL, v60);
      pttargetId = targetId;
      if ( !*(_DWORD *)(v59 + 24) )
      {
        v61 = sub_B2C460(v59);
        sub_B2C400(v61, 0LL);
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
        v92 = !Target_BattleTargetArgs__IsCheckDead(args, 0LL);
      else
        v92 = 1;
      return BattleData__getPlayerServantIDList(bdata, v92, v26, 0LL);
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
                           v27);
      if ( !TargetAggregator )
        sub_B2C434(0LL, v31);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v50 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v63);
      if ( !v50 )
        sub_B2C434(AliveFieldRandomTargetId, v65);
      if ( !v50->max_length )
      {
        v110 = sub_B2C460(AliveFieldRandomTargetId);
        sub_B2C400(v110, 0LL);
      }
      v50->m_Items[1] = AliveFieldRandomTargetId;
      return v50;
    case 13:
      v54 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      v55 = BattleData__isEnemyID(bdata, actorId, 0LL);
      v57 = Target__GetAliveFieldRandomTargetId(bdata, !v55, IsActorPlayerSide, v56);
      if ( !v54 )
        sub_B2C434(v57, v58);
      if ( !v54->max_length )
      {
        v109 = sub_B2C460(v57);
        sub_B2C400(v109, 0LL);
      }
      v54->m_Items[1] = v57;
      return v54;
    case 16:
      v50 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      v67 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v67 )
        return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      if ( !v50 )
        sub_B2C434(v67, v68);
      if ( !v50->max_length )
      {
        v69 = sub_B2C460(v67);
        sub_B2C400(v69, 0LL);
      }
      goto LABEL_125;
    case 17:
      result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      v33 = result;
      if ( !result )
        sub_B2C434(0LL, v45);
      if ( !result->max_length )
      {
        v108 = sub_B2C460(result);
        sub_B2C400(v108, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B2C434(0LL, v46);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v114 = sub_B2C460(FieldPlayerServantIDList);
          sub_B2C400(v114, 0LL);
        }
        if ( !v33->max_length )
        {
          v115 = sub_B2C460(FieldPlayerServantIDList);
          sub_B2C400(v115, 0LL);
        }
LABEL_38:
        v47 = FieldPlayerServantIDList->m_Items[1];
        result = v33;
        v33->m_Items[1] = v47;
      }
      return result;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v93 = AliveFieldEnemyServantIDList;
      v73 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v73,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v93 )
        sub_B2C434(v94, v95);
      v96 = *(_QWORD *)&v93->max_length;
      if ( (int)v96 >= 1 )
      {
        v97 = 0LL;
        do
        {
          if ( v97 >= (unsigned int)v96 )
          {
            v105 = sub_B2C460(v94);
            sub_B2C400(v105, 0LL);
          }
          v95 = (unsigned int)v93->m_Items[v97 + 1];
          if ( (_DWORD)v95 != pttargetId )
          {
            if ( !v73 )
              sub_B2C434(v94, v95);
            System_Collections_Generic_List_int___Add(
              v73,
              v95,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v96) = v93->max_length;
          ++v97;
        }
        while ( (__int64)v97 < (int)v96 );
      }
      if ( !v73 )
        sub_B2C434(v94, v95);
      size = v73->fields._size;
      if ( !size )
        return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(size, 0LL);
      v99 = sub_B2C374(int___TypeInfo, 1LL);
      v50 = (System_Int32_array *)v99;
      if ( v73->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v99 )
        sub_B2C434(0LL, v100);
      if ( !*(_DWORD *)(v99 + 24) )
      {
        v113 = sub_B2C460(v99);
        sub_B2C400(v113, 0LL);
      }
      goto LABEL_117;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v72 = AliveFieldPlayerServantIDList;
      v73 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v73,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v72 )
        sub_B2C434(v74, v75);
      v76 = *(_QWORD *)&v72->max_length;
      if ( (int)v76 >= 1 )
      {
        v77 = 0LL;
        do
        {
          if ( v77 >= (unsigned int)v76 )
          {
            v103 = sub_B2C460(v74);
            sub_B2C400(v103, 0LL);
          }
          v75 = (unsigned int)v72->m_Items[v77 + 1];
          if ( (_DWORD)v75 != actorId )
          {
            if ( !v73 )
              sub_B2C434(v74, v75);
            System_Collections_Generic_List_int___Add(
              v73,
              v75,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v76) = v72->max_length;
          ++v77;
        }
        while ( (__int64)v77 < (int)v76 );
      }
      if ( !v73 )
        sub_B2C434(v74, v75);
      v78 = v73->fields._size;
      if ( !v78 )
        return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v78, 0LL);
      v80 = sub_B2C374(int___TypeInfo, 1LL);
      v50 = (System_Int32_array *)v80;
      if ( v73->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v80 )
        sub_B2C434(0LL, v81);
      if ( !*(_DWORD *)(v80 + 24) )
      {
        v82 = sub_B2C460(v80);
        sub_B2C400(v82, 0LL);
      }
      goto LABEL_117;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v43 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v43 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v83 = v43;
      v73 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v73,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v83 )
        sub_B2C434(v84, v85);
      v86 = *(_QWORD *)&v83->max_length;
      if ( (int)v86 >= 1 )
      {
        v87 = 0LL;
        do
        {
          if ( v87 >= (unsigned int)v86 )
          {
            v104 = sub_B2C460(v84);
            sub_B2C400(v104, 0LL);
          }
          v85 = (unsigned int)v83->m_Items[v87 + 1];
          if ( (_DWORD)v85 != targetId )
          {
            if ( !v73 )
              sub_B2C434(v84, v85);
            System_Collections_Generic_List_int___Add(
              v73,
              v85,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v86) = v83->max_length;
          ++v87;
        }
        while ( (__int64)v87 < (int)v86 );
      }
      if ( !v73 )
        sub_B2C434(v84, v85);
      v88 = v73->fields._size;
      if ( !v88 )
        return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v88, 0LL);
      v89 = sub_B2C374(int___TypeInfo, 1LL);
      v50 = (System_Int32_array *)v89;
      if ( v73->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v89 )
        sub_B2C434(0LL, v90);
      if ( !*(_DWORD *)(v89 + 24) )
      {
        v91 = sub_B2C460(v89);
        sub_B2C400(v91, 0LL);
      }
LABEL_117:
      v50->m_Items[1] = v73->fields._items->m_Items[Next + 1];
      return v50;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v41);
    case 22:
      v48 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v48, actorId, 0, 1, v49);
    case 23:
      v38 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v38, actorId, 1, 1, v39);
    case 24:
      v70 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v70, actorId, 1, 0, v71);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v42 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v42 )
      {
        pttargetId = targetId;
        if ( checkRevengeId )
          pttargetId = BattleServantData__getRevengeTargetUniqueId(v42, 0LL);
      }
      else
      {
        pttargetId = targetId;
      }
      if ( !BattleData__getServantData(bdata, pttargetId, 0LL) )
        return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      v101 = sub_B2C374(int___TypeInfo, 1LL);
      v50 = (System_Int32_array *)v101;
      if ( !v101 )
        sub_B2C434(0LL, v102);
      if ( !*(_DWORD *)(v101 + 24) )
      {
        v112 = sub_B2C460(v101);
        sub_B2C400(v112, 0LL);
      }
LABEL_125:
      v50->m_Items[1] = pttargetId;
      return v50;
    default:
      return v117;
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
  sub_B2C2F8(&this->fields, dataVals);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_B2C434(0LL, method);
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

  if ( (byte_41847E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, method);
    byte_41847E5 = 1;
  }
  p_enemyRange = &this->fields.enemyRange;
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_B2C434(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v6 = (_QWORD **)Method_System_Array_Empty_int___;
      v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v8 = *(_WORD *)(v7 + 306);
      if ( (v8 & 1) == 0 )
      {
        sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v8 = *(_WORD *)(v7 + 306);
      }
      if ( (v8 & 0x400) != 0 )
      {
        v9 = *v6[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AC505C(*v6[6]);
        if ( !*(_DWORD *)(v9 + 224) )
        {
          v10 = *v6[6];
          if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
            sub_AC505C(*v6[6]);
          j_il2cpp_runtime_class_init_0(v10);
        }
      }
      v11 = *v6[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AC505C(*v6[6]);
      enemyRange = **(System_Int32_array ***)(v11 + 184);
    }
    *p_enemyRange = enemyRange;
    sub_B2C2F8(p_enemyRange, enemyRange);
  }
  return enemyRange;
}