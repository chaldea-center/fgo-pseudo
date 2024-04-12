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
  struct BattleActionData_o *beforeAction; // x20
  __int64 v6; // x19
  __int64 v7; // x19
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v9; // x19
  struct BattleSkillInfoData_o *v10; // x8
  SkillLvEntity_o *Entity; // x0

  v4 = bData;
  if ( (byte_42ACFEA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    bData = (BattleData_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42ACFEA = 1;
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
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AEB684(v7);
  bData = **(BattleData_o ***)(v7 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v9 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v10 = beforeAction->fields.skillInfo) == 0LL)
    || !v9 )
  {
LABEL_19:
    sub_B52A5C(bData, *(_QWORD *)&taskActorType);
  }
  Entity = SkillLvMaster__GetEntity(v9, (int32_t)bData, v10->fields.skilllv, 0LL);
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
    sub_B52A5C(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
  {
    v8 = sub_B52A88(Next);
    sub_B52A28(v8, 0LL);
  }
  return *((_DWORD *)&v5[2].klass + (int)Next);
}


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
  PartyAllFieldTargetAggregator_o *v15; // x25
  TargetAggregator_Args_o *v16; // x26
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_42ACFEB & 1) == 0 )
  {
    sub_B52984(&TargetAggregator_Args_TypeInfo);
    sub_B52984(&NoneTargetAggregator_TypeInfo);
    sub_B52984(&OpponentAllFieldTargetAggregator_TypeInfo);
    sub_B52984(&OpponentFullTargetAggregator_TypeInfo);
    sub_B52984(&OpponentOtherFullTargetAggregator_TypeInfo);
    sub_B52984(&OpponentOtherTargetAggregator_TypeInfo);
    sub_B52984(&OpponentRangeAggregator_TypeInfo);
    sub_B52984(&PartyAllFieldTargetAggregator_TypeInfo);
    sub_B52984(&PartyFullTargetAggregator_TypeInfo);
    sub_B52984(&PartyLowsetHpRateTargetChoicer_TypeInfo);
    sub_B52984(&PartyLowsetHpValueTargetChoicer_TypeInfo);
    sub_B52984(&PartyOneOtherTargetAggregator_TypeInfo);
    sub_B52984(&PartyOtherFullTargetAggregator_TypeInfo);
    sub_B52984(&PartyOtherTargetAggregator_TypeInfo);
    byte_42ACFEB = 1;
  }
  switch ( type )
  {
    case 3:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor(v15, 0LL);
      break;
    case 6:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v15, 0LL);
      break;
    case 7:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v15, 0LL);
      break;
    case 8:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v15, 0LL);
      break;
    case 9:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v15, 0LL);
      break;
    case 10:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v15, 0LL);
      break;
    case 12:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v15, 0LL);
      break;
    case 14:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v15, 0LL);
      break;
    case 15:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v15, 0LL);
      break;
    case 28:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v15, 0LL);
      break;
    case 29:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v15, 0LL);
      break;
    case 30:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v15, 0LL);
      break;
    default:
      v15 = (PartyAllFieldTargetAggregator_o *)sub_B52A54(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v15, 0LL);
      break;
  }
  v16 = (TargetAggregator_Args_o *)sub_B52A54(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v16, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v15 )
    sub_B52A5C(v17, v18);
  v15->fields.args = v16;
  sub_B52920(&v15->fields);
  return (TargetAggregator_o *)v15;
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
    sub_B52A5C(0LL, actorId);
  return BattleData__isPlayerID(bData, actorId, 0LL);
}


System_Int32_array *__fastcall Target__getOrderOneTargetIdArray(
        System_Int32_array *checkIdArray,
        int32_t excludeId,
        bool isOrderDesc,
        bool isPrev,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *v11; // x21
  int32_t v12; // w0
  int v13; // w10
  il2cpp_array_size_t v14; // w20
  __int64 v16; // x0

  if ( (byte_42ACFE9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&int___TypeInfo);
    byte_42ACFE9 = 1;
  }
  v9 = sub_B5299C(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v11 = (System_Int32_array *)v9;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse((System_Array_o *)checkIdArray, 0LL);
    v12 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
    v13 = v12 - 1;
    if ( !isPrev )
      v13 = 0;
    v14 = v12 >= 1 ? v13 : v12 == 0;
    if ( (signed int)v14 < (signed int)checkIdArray->max_length )
    {
      v9 = sub_B5299C(int___TypeInfo, 1LL);
      if ( v14 >= checkIdArray->max_length )
        goto LABEL_19;
      v11 = (System_Int32_array *)v9;
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 24) )
        {
          *(_DWORD *)(v9 + 32) = checkIdArray->m_Items[v14 + 1];
          return v11;
        }
LABEL_19:
        v16 = sub_B52A88(v9);
        sub_B52A28(v16, 0LL);
      }
LABEL_18:
      sub_B52A5C(v9, v10);
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

  return Target__getTargetIds_19412132(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


System_Int32_array *__fastcall Target__getTargetIds_19412132(
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
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x28
  const MethodInfo *v22; // x7
  bool IsActorPlayerSide; // w19
  System_Int32_array *result; // x0
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_Int32_array *v28; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  System_Int32_array *v33; // x0
  const MethodInfo *v34; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v36; // x4
  BattleServantData_o *v37; // x0
  System_Int32_array *v38; // x0
  bool v39; // w8
  __int64 v40; // x1
  __int64 v41; // x1
  int32_t v42; // w8
  System_Int32_array *v43; // x0
  const MethodInfo *v44; // x4
  System_Int32_array *v45; // x19
  BattleServantData_o *ServantData; // x0
  __int64 v47; // x1
  __int64 v48; // x0
  System_Int32_array *v49; // x22
  bool v50; // w0
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x0
  bool isEnemyID; // w0
  const MethodInfo *v58; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v60; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  BattleServantData_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x0
  System_Int32_array *v65; // x0
  const MethodInfo *v66; // x4
  System_Int32_array *v67; // x19
  System_Collections_Generic_List_int__o *v68; // x20
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x8
  unsigned __int64 v72; // x22
  int32_t v73; // w0
  unsigned int Next; // w21
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x0
  System_Int32_array *v78; // x19
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x8
  unsigned __int64 v82; // x21
  int32_t v83; // w0
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x0
  bool v87; // w8
  System_Int32_array *v88; // x19
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x8
  unsigned __int64 v92; // x21
  int32_t size; // w0
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x0
  System_Int32_array *v112; // [xsp+8h] [xbp-58h]

  if ( (byte_42ACFE8 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42ACFE8 = 1;
  }
  v18 = sub_B5299C(int___TypeInfo, 0LL);
  v112 = (System_Int32_array *)v18;
  if ( !bdata )
    goto LABEL_133;
  v21 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v18 = sub_B5299C(int___TypeInfo, 1LL);
  if ( !v18 )
LABEL_133:
    sub_B52A5C(v18, v19);
  v21 = (System_Int32_array *)v18;
  if ( !*(_DWORD *)(v18 + 24) )
  {
    v101 = sub_B52A88(v18);
    sub_B52A28(v101, 0LL);
  }
  *(_DWORD *)(v18 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v20);
  result = v112;
  switch ( type )
  {
    case 0:
    case 25:
      result = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      v28 = result;
      if ( !result )
        sub_B52A5C(0LL, v27);
      if ( !result->max_length )
      {
        v102 = sub_B52A88(result);
        sub_B52A28(v102, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B52A5C(0LL, v30);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v106 = sub_B52A88(FieldPlayerServantIDList);
          sub_B52A28(v106, 0LL);
        }
        if ( !v28->max_length )
        {
          v31 = sub_B52A88(FieldPlayerServantIDList);
          sub_B52A28(v31, 0LL);
        }
        goto LABEL_38;
      }
      return result;
    case 1:
      v45 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
      if ( !v45 )
        sub_B52A5C(ServantData, v47);
      if ( !v45->max_length )
      {
        v48 = sub_B52A88(ServantData);
        sub_B52A28(v48, 0LL);
      }
      goto LABEL_125;
    case 2:
    case 5:
      return result;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v21, 0LL);
    case 4:
      v54 = sub_B5299C(int___TypeInfo, 1LL);
      v45 = (System_Int32_array *)v54;
      if ( !v54 )
        sub_B52A5C(0LL, v55);
      pttargetId = targetId;
      if ( !*(_DWORD *)(v54 + 24) )
      {
        v56 = sub_B52A88(v54);
        sub_B52A28(v56, 0LL);
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
        v87 = !Target_BattleTargetArgs__IsCheckDead(args, 0LL);
      else
        v87 = 1;
      return BattleData__getPlayerServantIDList(bdata, v87, v21, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
        v39 = !Target_BattleTargetArgs__IsCheckDead(args, 0LL);
      else
        v39 = 1;
      return BattleData__getPlayerServantIDList(bdata, v39, 0LL, 0LL);
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
                           v22);
      if ( !TargetAggregator )
        sub_B52A5C(0LL, v26);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v45 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v58);
      if ( !v45 )
        sub_B52A5C(AliveFieldRandomTargetId, v60);
      if ( !v45->max_length )
      {
        v105 = sub_B52A88(AliveFieldRandomTargetId);
        sub_B52A28(v105, 0LL);
      }
      v45->m_Items[1] = AliveFieldRandomTargetId;
      return v45;
    case 13:
      v49 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      v50 = BattleData__isEnemyID(bdata, actorId, 0LL);
      v52 = Target__GetAliveFieldRandomTargetId(bdata, !v50, IsActorPlayerSide, v51);
      if ( !v49 )
        sub_B52A5C(v52, v53);
      if ( !v49->max_length )
      {
        v104 = sub_B52A88(v52);
        sub_B52A28(v104, 0LL);
      }
      v49->m_Items[1] = v52;
      return v49;
    case 16:
      v45 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      v62 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v62 )
        return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
      if ( !v45 )
        sub_B52A5C(v62, v63);
      if ( !v45->max_length )
      {
        v64 = sub_B52A88(v62);
        sub_B52A28(v64, 0LL);
      }
      goto LABEL_125;
    case 17:
      result = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      v28 = result;
      if ( !result )
        sub_B52A5C(0LL, v40);
      if ( !result->max_length )
      {
        v103 = sub_B52A88(result);
        sub_B52A28(v103, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B52A5C(0LL, v41);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v109 = sub_B52A88(FieldPlayerServantIDList);
          sub_B52A28(v109, 0LL);
        }
        if ( !v28->max_length )
        {
          v110 = sub_B52A88(FieldPlayerServantIDList);
          sub_B52A28(v110, 0LL);
        }
LABEL_38:
        v42 = FieldPlayerServantIDList->m_Items[1];
        result = v28;
        v28->m_Items[1] = v42;
      }
      return result;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v88 = AliveFieldEnemyServantIDList;
      v68 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v68,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v88 )
        sub_B52A5C(v89, v90);
      v91 = *(_QWORD *)&v88->max_length;
      if ( (int)v91 >= 1 )
      {
        v92 = 0LL;
        do
        {
          if ( v92 >= (unsigned int)v91 )
          {
            v100 = sub_B52A88(v89);
            sub_B52A28(v100, 0LL);
          }
          v90 = (unsigned int)v88->m_Items[v92 + 1];
          if ( (_DWORD)v90 != pttargetId )
          {
            if ( !v68 )
              sub_B52A5C(v89, v90);
            System_Collections_Generic_List_int___Add(
              v68,
              v90,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v91) = v88->max_length;
          ++v92;
        }
        while ( (__int64)v92 < (int)v91 );
      }
      if ( !v68 )
        sub_B52A5C(v89, v90);
      size = v68->fields._size;
      if ( !size )
        return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(size, 0LL);
      v94 = sub_B5299C(int___TypeInfo, 1LL);
      v45 = (System_Int32_array *)v94;
      if ( v68->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v94 )
        sub_B52A5C(0LL, v95);
      if ( !*(_DWORD *)(v94 + 24) )
      {
        v108 = sub_B52A88(v94);
        sub_B52A28(v108, 0LL);
      }
      goto LABEL_117;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v67 = AliveFieldPlayerServantIDList;
      v68 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v68,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v67 )
        sub_B52A5C(v69, v70);
      v71 = *(_QWORD *)&v67->max_length;
      if ( (int)v71 >= 1 )
      {
        v72 = 0LL;
        do
        {
          if ( v72 >= (unsigned int)v71 )
          {
            v98 = sub_B52A88(v69);
            sub_B52A28(v98, 0LL);
          }
          v70 = (unsigned int)v67->m_Items[v72 + 1];
          if ( (_DWORD)v70 != actorId )
          {
            if ( !v68 )
              sub_B52A5C(v69, v70);
            System_Collections_Generic_List_int___Add(
              v68,
              v70,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v71) = v67->max_length;
          ++v72;
        }
        while ( (__int64)v72 < (int)v71 );
      }
      if ( !v68 )
        sub_B52A5C(v69, v70);
      v73 = v68->fields._size;
      if ( !v73 )
        return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v73, 0LL);
      v75 = sub_B5299C(int___TypeInfo, 1LL);
      v45 = (System_Int32_array *)v75;
      if ( v68->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v75 )
        sub_B52A5C(0LL, v76);
      if ( !*(_DWORD *)(v75 + 24) )
      {
        v77 = sub_B52A88(v75);
        sub_B52A28(v77, 0LL);
      }
      goto LABEL_117;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v38 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v38 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v78 = v38;
      v68 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v68,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v78 )
        sub_B52A5C(v79, v80);
      v81 = *(_QWORD *)&v78->max_length;
      if ( (int)v81 >= 1 )
      {
        v82 = 0LL;
        do
        {
          if ( v82 >= (unsigned int)v81 )
          {
            v99 = sub_B52A88(v79);
            sub_B52A28(v99, 0LL);
          }
          v80 = (unsigned int)v78->m_Items[v82 + 1];
          if ( (_DWORD)v80 != targetId )
          {
            if ( !v68 )
              sub_B52A5C(v79, v80);
            System_Collections_Generic_List_int___Add(
              v68,
              v80,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v81) = v78->max_length;
          ++v82;
        }
        while ( (__int64)v82 < (int)v81 );
      }
      if ( !v68 )
        sub_B52A5C(v79, v80);
      v83 = v68->fields._size;
      if ( !v83 )
        return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v83, 0LL);
      v84 = sub_B5299C(int___TypeInfo, 1LL);
      v45 = (System_Int32_array *)v84;
      if ( v68->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v84 )
        sub_B52A5C(0LL, v85);
      if ( !*(_DWORD *)(v84 + 24) )
      {
        v86 = sub_B52A88(v84);
        sub_B52A28(v86, 0LL);
      }
LABEL_117:
      v45->m_Items[1] = v68->fields._items->m_Items[Next + 1];
      return v45;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v36);
    case 22:
      v43 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v43, actorId, 0, 1, v44);
    case 23:
      v33 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v33, actorId, 1, 1, v34);
    case 24:
      v65 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v65, actorId, 1, 0, v66);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v37 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v37 )
      {
        pttargetId = targetId;
        if ( checkRevengeId )
          pttargetId = BattleServantData__getRevengeTargetUniqueId(v37, 0LL);
      }
      else
      {
        pttargetId = targetId;
      }
      if ( !BattleData__getServantData(bdata, pttargetId, 0LL) )
        return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
      v96 = sub_B5299C(int___TypeInfo, 1LL);
      v45 = (System_Int32_array *)v96;
      if ( !v96 )
        sub_B52A5C(0LL, v97);
      if ( !*(_DWORD *)(v96 + 24) )
      {
        v107 = sub_B52A88(v96);
        sub_B52A28(v107, 0LL);
      }
LABEL_125:
      v45->m_Items[1] = pttargetId;
      return v45;
    default:
      return v112;
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
  sub_B52920(&this->fields);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_B52A5C(0LL, method);
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

  if ( (byte_42ADDC1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    byte_42ADDC1 = 1;
  }
  p_enemyRange = &this->fields.enemyRange;
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_B52A5C(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v6 = (_QWORD **)Method_System_Array_Empty_int___;
      v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v8 = *(_WORD *)(v7 + 306);
      if ( (v8 & 1) == 0 )
      {
        sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v8 = *(_WORD *)(v7 + 306);
      }
      if ( (v8 & 0x400) != 0 )
      {
        v9 = *v6[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AEB684(*v6[6]);
        if ( !*(_DWORD *)(v9 + 224) )
        {
          v10 = *v6[6];
          if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
            sub_AEB684(*v6[6]);
          j_il2cpp_runtime_class_init_0(v10);
        }
      }
      v11 = *v6[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AEB684(*v6[6]);
      enemyRange = **(System_Int32_array ***)(v11 + 184);
    }
    *p_enemyRange = enemyRange;
    sub_B52920(p_enemyRange);
  }
  return enemyRange;
}