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
  __int64 v6; // x0
  __int64 v7; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v9; // x19
  struct BattleSkillInfoData_o *v10; // x8
  SkillLvEntity_o *Entity; // x0

  v4 = bData;
  if ( (byte_4A5A193 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    bData = (BattleData_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5A193 = 1;
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
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  bData = **(BattleData_o ***)(v7 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v9 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v10 = beforeAction->fields.skillInfo) == 0LL)
    || !v9 )
  {
LABEL_19:
    sub_1B8880C(bData, *(_QWORD *)&taskActorType);
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
    sub_1B8880C(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1B88814(Next, v8);
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
  __int64 v15; // x25
  TargetAggregator_Args_o *v16; // x26
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5A194 & 1) == 0 )
  {
    sub_1B885B0(&TargetAggregator_Args_TypeInfo);
    sub_1B885B0(&NoneTargetAggregator_TypeInfo);
    sub_1B885B0(&OpponentAllFieldTargetAggregator_TypeInfo);
    sub_1B885B0(&OpponentFullTargetAggregator_TypeInfo);
    sub_1B885B0(&OpponentOtherFullTargetAggregator_TypeInfo);
    sub_1B885B0(&OpponentOtherTargetAggregator_TypeInfo);
    sub_1B885B0(&OpponentRangeAggregator_TypeInfo);
    sub_1B885B0(&PartyAllFieldTargetAggregator_TypeInfo);
    sub_1B885B0(&PartyFullTargetAggregator_TypeInfo);
    sub_1B885B0(&PartyLowsetHpRateTargetChoicer_TypeInfo);
    sub_1B885B0(&PartyLowsetHpValueTargetChoicer_TypeInfo);
    sub_1B885B0(&PartyOneOtherTargetAggregator_TypeInfo);
    sub_1B885B0(&PartyOtherFullTargetAggregator_TypeInfo);
    sub_1B885B0(&PartyOtherTargetAggregator_TypeInfo);
    byte_4A5A194 = 1;
  }
  switch ( type )
  {
    case 3:
      v15 = sub_1B887FC(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v15, 0LL);
      break;
    case 6:
      v15 = sub_1B887FC(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v15, 0LL);
      break;
    case 7:
      v15 = sub_1B887FC(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v15, 0LL);
      break;
    case 8:
      v15 = sub_1B887FC(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v15, 0LL);
      break;
    case 9:
      v15 = sub_1B887FC(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v15, 0LL);
      break;
    case 10:
      v15 = sub_1B887FC(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v15, 0LL);
      break;
    case 12:
      v15 = sub_1B887FC(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v15, 0LL);
      break;
    case 14:
      v15 = sub_1B887FC(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v15, 0LL);
      break;
    case 15:
      v15 = sub_1B887FC(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v15, 0LL);
      break;
    case 28:
      v15 = sub_1B887FC(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v15, 0LL);
      break;
    case 29:
      v15 = sub_1B887FC(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v15, 0LL);
      break;
    case 30:
      v15 = sub_1B887FC(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v15, 0LL);
      break;
    default:
      v15 = sub_1B887FC(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v15, 0LL);
      break;
  }
  v16 = (TargetAggregator_Args_o *)sub_1B887FC(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v16, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v15 )
    sub_1B8880C(v17, v18);
  *(_QWORD *)(v15 + 16) = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v16, v19, v20);
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
    sub_1B8880C(0LL, actorId);
  return BattleData__isPlayerID(bData, actorId, 0LL);
}


bool __fastcall Target__IsCommandCard(int32_t targetType, const MethodInfo *method)
{
  return targetType == 31;
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

  if ( (byte_4A5A192 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_System_Array_Reverse_int___);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5A192 = 1;
  }
  v9 = sub_1B88658(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v11 = (System_Int32_array *)v9;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_2E414CC *)Method_System_Array_Reverse_int___);
    v12 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
    v13 = v12 - 1;
    if ( !isPrev )
      v13 = 0;
    v14 = v12 >= 1 ? v13 : v12 == 0;
    if ( (signed int)v14 < (signed int)checkIdArray->max_length )
    {
      v9 = sub_1B88658(int___TypeInfo, 1LL);
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
        sub_1B88814(v9, v10);
      }
LABEL_18:
      sub_1B8880C(v9, v10);
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
  const MethodInfo *v8; // [xsp+10h] [xbp-20h]

  return Target__getTargetIds_37713320(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


System_Int32_array *__fastcall Target__getTargetIds_37713320(
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
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x28
  const MethodInfo *v23; // x7
  bool IsActorPlayerSide; // w29
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v26; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  System_Int32_array *v30; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v32; // x1
  System_Int32_array *v33; // x19
  BattleServantData_o *v34; // x0
  __int64 v35; // x1
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  System_Int32_array *v37; // x0
  const MethodInfo *v38; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v40; // x4
  BattleServantData_o *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  System_Int32_array *v44; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x21
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v52; // x1
  struct DataVals_o *v53; // x8
  System_Int32_array *v54; // x0
  const MethodInfo *v55; // x4
  __int64 v56; // x1
  __int64 v57; // x1
  DataVals_o *v58; // x0
  bool v59; // w8
  __int64 v60; // x0
  __int64 v61; // x1
  bool v62; // w0
  const MethodInfo *v63; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v65; // x1
  bool isEnemyID; // w0
  const MethodInfo *v67; // x3
  __int64 v68; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  System_Int32_array *v70; // x0
  const MethodInfo *v71; // x4
  System_Int32_array *v72; // x22
  System_Collections_Generic_List_int__o *v73; // x20
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x8
  unsigned __int64 v77; // x19
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  int32_t v81; // w0
  int32_t v82; // w21
  __int64 v83; // x1
  System_Int32_array *v84; // x21
  System_Collections_Generic_List_int__o *v85; // x20
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x8
  unsigned __int64 v89; // x19
  struct System_Int32_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  int32_t v93; // w0
  int32_t v94; // w21
  __int64 v95; // x1
  DataVals_o *dataVals; // x0
  bool v97; // w8
  System_Int32_array *v98; // x21
  System_Collections_Generic_List_int__o *v99; // x20
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x8
  unsigned __int64 v103; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  int32_t v107; // w0
  int32_t Next; // w21
  __int64 v109; // x1
  System_Int32_array *v111; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5A191 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5A191 = 1;
  }
  cardIndex = 0;
  v19 = sub_1B88658(int___TypeInfo, 0LL);
  v111 = (System_Int32_array *)v19;
  if ( !bdata )
    goto LABEL_142;
  v22 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v19 = sub_1B88658(int___TypeInfo, 1LL);
  if ( !v19 )
LABEL_142:
    sub_1B8880C(v19, v20);
  v22 = (System_Int32_array *)v19;
  if ( !*(_DWORD *)(v19 + 24) )
    sub_1B88814(v19, v20);
  *(_DWORD *)(v19 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v21);
  switch ( type )
  {
    case 0:
    case 25:
      v28 = sub_1B88658(int___TypeInfo, 1LL);
      v30 = (System_Int32_array *)v28;
      if ( !v28 )
        sub_1B8880C(0LL, v29);
      if ( !*(_DWORD *)(v28 + 24) )
        sub_1B88814(v28, v29);
      *(_DWORD *)(v28 + 32) = actorId;
      v111 = (System_Int32_array *)v28;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1B8880C(0LL, v32);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1B88814(FieldPlayerServantIDList, v32);
        if ( !v30->max_length )
          sub_1B88814(FieldPlayerServantIDList, v32);
        goto LABEL_48;
      }
      return v111;
    case 1:
      v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
      if ( !v33 )
        sub_1B8880C(ServantData, v46);
      if ( !v33->max_length )
        sub_1B88814(ServantData, v46);
      goto LABEL_39;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v22, 0LL);
    case 4:
      v60 = sub_1B88658(int___TypeInfo, 1LL);
      v33 = (System_Int32_array *)v60;
      if ( !v60 )
        sub_1B8880C(0LL, v61);
      if ( !*(_DWORD *)(v60 + 24) )
        sub_1B88814(v60, v61);
      goto LABEL_65;
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
          sub_1B8880C(0LL, v56);
        v97 = !DataVals__isCheckDead(dataVals, 0LL);
      }
      else
      {
        v97 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v97, v22, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
      {
        v58 = args->fields.dataVals;
        if ( !v58 )
          sub_1B8880C(0LL, v57);
        v59 = !DataVals__isCheckDead(v58, 0LL);
      }
      else
      {
        v59 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v59, 0LL, 0LL);
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
                           v23);
      if ( !TargetAggregator )
        sub_1B8880C(0LL, v26);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v67);
      if ( !v33 )
        sub_1B8880C(AliveFieldRandomTargetId, v68);
      if ( !v33->max_length )
        sub_1B88814(AliveFieldRandomTargetId, v68);
      goto LABEL_132;
    case 13:
      v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      v62 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v62, IsActorPlayerSide, v63);
      if ( !v33 )
        sub_1B8880C(AliveFieldRandomTargetId, v65);
      if ( !v33->max_length )
        sub_1B88814(AliveFieldRandomTargetId, v65);
      goto LABEL_132;
    case 16:
      v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      v34 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v34 )
        return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
      if ( !v33 )
        sub_1B8880C(v34, v35);
      if ( !v33->max_length )
        sub_1B88814(v34, v35);
LABEL_39:
      v33->m_Items[1] = pttargetId;
      return v33;
    case 17:
      v47 = sub_1B88658(int___TypeInfo, 1LL);
      v30 = (System_Int32_array *)v47;
      if ( !v47 )
        sub_1B8880C(0LL, v48);
      if ( !*(_DWORD *)(v47 + 24) )
        sub_1B88814(v47, v48);
      *(_DWORD *)(v47 + 32) = actorId;
      v111 = (System_Int32_array *)v47;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1B8880C(0LL, v49);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1B88814(FieldPlayerServantIDList, v49);
        if ( !v30->max_length )
          sub_1B88814(FieldPlayerServantIDList, v49);
LABEL_48:
        v111 = v30;
        v30->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      }
      return v111;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v98 = AliveFieldEnemyServantIDList;
      v99 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v99,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v98 )
        sub_1B8880C(v100, v101);
      v102 = *(_QWORD *)&v98->max_length;
      if ( (int)v102 >= 1 )
      {
        v103 = 0LL;
        do
        {
          if ( v103 >= (unsigned int)v102 )
            sub_1B88814(v100, v101);
          v101 = (unsigned int)v98->m_Items[v103 + 1];
          if ( (_DWORD)v101 != pttargetId )
          {
            if ( !v99 )
              sub_1B8880C(v100, v101);
            items = v99->fields._items;
            v105 = Method_System_Collections_Generic_List_int__Add__;
            ++v99->fields._version;
            if ( !items )
              sub_1B8880C(v100, v101);
            size = v99->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v99,
                v101,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v99->fields._size = size + 1;
              items->m_Items[size + 1] = v101;
            }
          }
          LODWORD(v102) = v98->max_length;
          ++v103;
        }
        while ( (__int64)v103 < (int)v102 );
      }
      if ( !v99 )
        sub_1B8880C(v100, v101);
      v107 = v99->fields._size;
      if ( !v107 )
        return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v107, 0LL);
      v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v99,
                                   Next,
                                   (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v33 )
        sub_1B8880C(AliveFieldRandomTargetId, v109);
      if ( !v33->max_length )
        sub_1B88814(AliveFieldRandomTargetId, v109);
      goto LABEL_132;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v72 = AliveFieldPlayerServantIDList;
      v73 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v73,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v72 )
        sub_1B8880C(v74, v75);
      v76 = *(_QWORD *)&v72->max_length;
      if ( (int)v76 >= 1 )
      {
        v77 = 0LL;
        do
        {
          if ( v77 >= (unsigned int)v76 )
            sub_1B88814(v74, v75);
          v75 = (unsigned int)v72->m_Items[v77 + 1];
          if ( (_DWORD)v75 != actorId )
          {
            if ( !v73 )
              sub_1B8880C(v74, v75);
            v78 = v73->fields._items;
            v79 = Method_System_Collections_Generic_List_int__Add__;
            ++v73->fields._version;
            if ( !v78 )
              sub_1B8880C(v74, v75);
            v80 = v73->fields._size;
            if ( (unsigned int)v80 >= v78->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v73,
                v75,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v73->fields._size = v80 + 1;
              v78->m_Items[v80 + 1] = v75;
            }
          }
          LODWORD(v76) = v72->max_length;
          ++v77;
        }
        while ( (__int64)v77 < (int)v76 );
      }
      if ( !v73 )
        sub_1B8880C(v74, v75);
      v81 = v73->fields._size;
      if ( !v81 )
        return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
      v82 = BattleRandom__getNext(v81, 0LL);
      v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v73,
                                   v82,
                                   (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v33 )
        sub_1B8880C(AliveFieldRandomTargetId, v83);
      if ( !v33->max_length )
        sub_1B88814(AliveFieldRandomTargetId, v83);
      goto LABEL_132;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v44 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v44 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v84 = v44;
      v85 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v85,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v84 )
        sub_1B8880C(v86, v87);
      v88 = *(_QWORD *)&v84->max_length;
      if ( (int)v88 >= 1 )
      {
        v89 = 0LL;
        do
        {
          if ( v89 >= (unsigned int)v88 )
            sub_1B88814(v86, v87);
          v87 = (unsigned int)v84->m_Items[v89 + 1];
          if ( (_DWORD)v87 != targetId )
          {
            if ( !v85 )
              sub_1B8880C(v86, v87);
            v90 = v85->fields._items;
            v91 = Method_System_Collections_Generic_List_int__Add__;
            ++v85->fields._version;
            if ( !v90 )
              sub_1B8880C(v86, v87);
            v92 = v85->fields._size;
            if ( (unsigned int)v92 >= v90->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v85,
                v87,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v85->fields._size = v92 + 1;
              v90->m_Items[v92 + 1] = v87;
            }
          }
          LODWORD(v88) = v84->max_length;
          ++v89;
        }
        while ( (__int64)v89 < (int)v88 );
      }
      if ( !v85 )
        sub_1B8880C(v86, v87);
      v93 = v85->fields._size;
      if ( !v93 )
        return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
      v94 = BattleRandom__getNext(v93, 0LL);
      v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v85,
                                   v94,
                                   (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v33 )
        sub_1B8880C(AliveFieldRandomTargetId, v95);
      if ( !v33->max_length )
        sub_1B88814(AliveFieldRandomTargetId, v95);
LABEL_132:
      v33->m_Items[1] = AliveFieldRandomTargetId;
      return v33;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v40);
    case 22:
      v54 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v54, actorId, 0, 1, v55);
    case 23:
      v37 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v37, actorId, 1, 1, v38);
    case 24:
      v70 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v70, actorId, 1, 0, v71);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v41 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v41 && checkRevengeId )
        targetId = BattleServantData__getRevengeTargetUniqueId(v41, 0LL);
      if ( BattleData__getServantData(bdata, targetId, 0LL) )
      {
        v42 = sub_1B88658(int___TypeInfo, 1LL);
        v33 = (System_Int32_array *)v42;
        if ( !v42 )
          sub_1B8880C(0LL, v43);
        if ( !*(_DWORD *)(v42 + 24) )
          sub_1B88814(v42, v43);
LABEL_65:
        v33->m_Items[1] = targetId;
        return v33;
      }
      else
      {
        return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
      }
    case 31:
      v50 = sub_1B88658(int___TypeInfo, 1LL);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0LL);
      if ( !v50 )
        sub_1B8880C(PlayerServantFromRandomCommandCard, v52);
      if ( !*(_DWORD *)(v50 + 24) )
        sub_1B88814(PlayerServantFromRandomCommandCard, v52);
      *(_DWORD *)(v50 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1B8880C(PlayerServantFromRandomCommandCard, v52);
      v53 = args->fields.dataVals;
      if ( !v53 )
        sub_1B8880C(PlayerServantFromRandomCommandCard, v52);
      v111 = (System_Int32_array *)v50;
      v53->fields.targetCardIndex = cardIndex;
      return v111;
    default:
      return v111;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)dataVals, v5, v6);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, cardIndex);
  dataVals->fields.targetCardIndex = cardIndex;
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

  if ( (byte_4A5A195 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5A195 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1B8880C(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 134, 0LL);
    if ( !enemyRange )
    {
      v7 = Method_System_Array_Empty_int___;
      v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v8 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v8 = v7[7];
      }
      v9 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1BDA48C(v9);
      if ( !*(_DWORD *)(v9 + 224) )
        j_il2cpp_runtime_class_init_0(v9);
      v10 = *(_QWORD *)(v7[7] + 16LL);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BDA48C(v10);
      enemyRange = **(struct System_Int32_array ***)(v10 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6);
  }
  return enemyRange;
}