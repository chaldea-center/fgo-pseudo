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
  if ( (byte_49FD557 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    bData = (BattleData_o *)sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_49FD557 = 1;
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
    v7 = sub_1BB674C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB674C(v8);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v10 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v11 = beforeAction->fields.skillInfo) == 0LL)
    || !v10 )
  {
LABEL_19:
    sub_1B64ACC(bData, *(_QWORD *)&taskActorType);
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
    sub_1B64ACC(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1B64AD4(Next, v8);
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
  TargetAggregator_Args_o *v29; // x26
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FD558 & 1) == 0 )
  {
    sub_1B64870(&TargetAggregator_Args_TypeInfo, *(_QWORD *)&actorId);
    sub_1B64870(&NoneTargetAggregator_TypeInfo, v15);
    sub_1B64870(&OpponentAllFieldTargetAggregator_TypeInfo, v16);
    sub_1B64870(&OpponentFullTargetAggregator_TypeInfo, v17);
    sub_1B64870(&OpponentOtherFullTargetAggregator_TypeInfo, v18);
    sub_1B64870(&OpponentOtherTargetAggregator_TypeInfo, v19);
    sub_1B64870(&OpponentRangeAggregator_TypeInfo, v20);
    sub_1B64870(&PartyAllFieldTargetAggregator_TypeInfo, v21);
    sub_1B64870(&PartyFullTargetAggregator_TypeInfo, v22);
    sub_1B64870(&PartyLowsetHpRateTargetChoicer_TypeInfo, v23);
    sub_1B64870(&PartyLowsetHpValueTargetChoicer_TypeInfo, v24);
    sub_1B64870(&PartyOneOtherTargetAggregator_TypeInfo, v25);
    sub_1B64870(&PartyOtherFullTargetAggregator_TypeInfo, v26);
    sub_1B64870(&PartyOtherTargetAggregator_TypeInfo, v27);
    byte_49FD558 = 1;
  }
  switch ( type )
  {
    case 3:
      v28 = sub_1B64ABC(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 6:
      v28 = sub_1B64ABC(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 7:
      v28 = sub_1B64ABC(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v28, 0LL);
      break;
    case 8:
      v28 = sub_1B64ABC(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v28, 0LL);
      break;
    case 9:
      v28 = sub_1B64ABC(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 10:
      v28 = sub_1B64ABC(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 12:
      v28 = sub_1B64ABC(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 14:
      v28 = sub_1B64ABC(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 15:
      v28 = sub_1B64ABC(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 28:
      v28 = sub_1B64ABC(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v28, 0LL);
      break;
    case 29:
      v28 = sub_1B64ABC(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v28, 0LL);
      break;
    case 30:
      v28 = sub_1B64ABC(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v28, 0LL);
      break;
    default:
      v28 = sub_1B64ABC(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v28, 0LL);
      break;
  }
  v29 = (TargetAggregator_Args_o *)sub_1B64ABC(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v29, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v28 )
    sub_1B64ACC(v30, v31);
  *(_QWORD *)(v28 + 16) = v29;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v29, v32, v33);
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
    sub_1B64ACC(0LL, actorId);
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
  __int64 v12; // x1
  System_Int32_array *v13; // x21
  int32_t v14; // w0
  int v15; // w10
  il2cpp_array_size_t v16; // w20

  if ( (byte_49FD556 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_1B64870(&Method_System_Array_Reverse_int___, v9);
    sub_1B64870(&int___TypeInfo, v10);
    byte_49FD556 = 1;
  }
  v11 = sub_1B64918(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v13 = (System_Int32_array *)v11;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_2DFD6A0 *)Method_System_Array_Reverse_int___);
    v14 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___);
    v15 = v14 - 1;
    if ( !isPrev )
      v15 = 0;
    v16 = v14 >= 1 ? v15 : v14 == 0;
    if ( (signed int)v16 < (signed int)checkIdArray->max_length )
    {
      v11 = sub_1B64918(int___TypeInfo, 1LL);
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
        sub_1B64AD4(v11, v12);
      }
LABEL_18:
      sub_1B64ACC(v11, v12);
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

  return Target__getTargetIds_37405888(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_37405888(
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
  __int64 v34; // x0
  __int64 v35; // x1
  System_Int32_array *v36; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v38; // x1
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  System_Int32_array *v40; // x0
  const MethodInfo *v41; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v43; // x4
  BattleServantData_o *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  System_Int32_array *v47; // x19
  System_Int32_array *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  DataVals_o *v51; // x0
  bool v52; // w8
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x1
  System_Int32_array *v56; // x0
  const MethodInfo *v57; // x4
  System_Int32_array *v58; // x21
  BattleServantData_o *ServantData; // x0
  __int64 v60; // x1
  System_Int32_array *v61; // x22
  bool v62; // w0
  const MethodInfo *v63; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v65; // x1
  __int64 v66; // x0
  __int64 v67; // x1
  bool isEnemyID; // w0
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  BattleServantData_o *v72; // x0
  __int64 v73; // x1
  System_Int32_array *v74; // x0
  const MethodInfo *v75; // x4
  System_Int32_array *v76; // x22
  System_Collections_Generic_List_int__o *v77; // x20
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x8
  unsigned __int64 v81; // x19
  struct System_Int32_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  int32_t v85; // w0
  int32_t v86; // w21
  __int64 Item; // x0
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
  DataVals_o *dataVals; // x0
  bool v102; // w8
  System_Int32_array *v103; // x21
  System_Collections_Generic_List_int__o *v104; // x20
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x8
  unsigned __int64 v108; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  int32_t v112; // w0
  int32_t Next; // w21
  __int64 v114; // x1
  System_Int32_array *v115; // [xsp+8h] [xbp-68h]

  if ( (byte_49FD555 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Item__, v22);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v23);
    byte_49FD555 = 1;
  }
  v24 = sub_1B64918(int___TypeInfo, 0LL);
  v115 = (System_Int32_array *)v24;
  if ( !bdata )
    goto LABEL_137;
  v27 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v24 = sub_1B64918(int___TypeInfo, 1LL);
  if ( !v24 )
LABEL_137:
    sub_1B64ACC(v24, v25);
  v27 = (System_Int32_array *)v24;
  if ( !*(_DWORD *)(v24 + 24) )
    sub_1B64AD4(v24, v25);
  *(_DWORD *)(v24 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v26);
  switch ( type )
  {
    case 0:
    case 25:
      v34 = sub_1B64918(int___TypeInfo, 1LL);
      v36 = (System_Int32_array *)v34;
      if ( !v34 )
        sub_1B64ACC(0LL, v35);
      if ( !*(_DWORD *)(v34 + 24) )
        sub_1B64AD4(v34, v35);
      *(_DWORD *)(v34 + 32) = actorId;
      v115 = (System_Int32_array *)v34;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1B64ACC(0LL, v38);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1B64AD4(FieldPlayerServantIDList, v38);
        if ( !v36->max_length )
          sub_1B64AD4(FieldPlayerServantIDList, v38);
        goto LABEL_45;
      }
      return v115;
    case 1:
      v58 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
      if ( !v58 )
        sub_1B64ACC(ServantData, v60);
      if ( !v58->max_length )
        sub_1B64AD4(ServantData, v60);
      goto LABEL_69;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v27, 0LL);
    case 4:
      v66 = sub_1B64918(int___TypeInfo, 1LL);
      v47 = (System_Int32_array *)v66;
      if ( !v66 )
        sub_1B64ACC(0LL, v67);
      if ( !*(_DWORD *)(v66 + 24) )
        sub_1B64AD4(v66, v67);
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
          sub_1B64ACC(0LL, v49);
        v102 = !DataVals__isCheckDead(dataVals, 0LL);
      }
      else
      {
        v102 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v102, v27, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
      {
        v51 = args->fields.dataVals;
        if ( !v51 )
          sub_1B64ACC(0LL, v50);
        v52 = !DataVals__isCheckDead(v51, 0LL);
      }
      else
      {
        v52 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v52, 0LL, 0LL);
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
        sub_1B64ACC(0LL, v31);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v61 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v69);
      if ( !v61 )
        sub_1B64ACC(AliveFieldRandomTargetId, v70);
      if ( !v61->max_length )
        sub_1B64AD4(AliveFieldRandomTargetId, v70);
      goto LABEL_63;
    case 13:
      v61 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      v62 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v62, IsActorPlayerSide, v63);
      if ( !v61 )
        sub_1B64ACC(AliveFieldRandomTargetId, v65);
      if ( !v61->max_length )
        sub_1B64AD4(AliveFieldRandomTargetId, v65);
LABEL_63:
      v61->m_Items[1] = AliveFieldRandomTargetId;
      return v61;
    case 16:
      v58 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      v72 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v72 )
        return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
      if ( !v58 )
        sub_1B64ACC(v72, v73);
      if ( !v58->max_length )
        sub_1B64AD4(v72, v73);
LABEL_69:
      v58->m_Items[1] = pttargetId;
      return v58;
    case 17:
      v53 = sub_1B64918(int___TypeInfo, 1LL);
      v36 = (System_Int32_array *)v53;
      if ( !v53 )
        sub_1B64ACC(0LL, v54);
      if ( !*(_DWORD *)(v53 + 24) )
        sub_1B64AD4(v53, v54);
      *(_DWORD *)(v53 + 32) = actorId;
      v115 = (System_Int32_array *)v53;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1B64ACC(0LL, v55);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1B64AD4(FieldPlayerServantIDList, v55);
        if ( !v36->max_length )
          sub_1B64AD4(FieldPlayerServantIDList, v55);
LABEL_45:
        v115 = v36;
        v36->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      }
      return v115;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v103 = AliveFieldEnemyServantIDList;
      v104 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v104,
        (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v103 )
        sub_1B64ACC(v105, v106);
      v107 = *(_QWORD *)&v103->max_length;
      if ( (int)v107 >= 1 )
      {
        v108 = 0LL;
        do
        {
          if ( v108 >= (unsigned int)v107 )
            sub_1B64AD4(v105, v106);
          v106 = (unsigned int)v103->m_Items[v108 + 1];
          if ( (_DWORD)v106 != pttargetId )
          {
            if ( !v104 )
              sub_1B64ACC(v105, v106);
            items = v104->fields._items;
            v110 = Method_System_Collections_Generic_List_int__Add__;
            ++v104->fields._version;
            if ( !items )
              sub_1B64ACC(v105, v106);
            size = v104->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v104,
                v106,
                *(const MethodInfo_34921B8 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
            }
            else
            {
              v104->fields._size = size + 1;
              items->m_Items[size + 1] = v106;
            }
          }
          LODWORD(v107) = v103->max_length;
          ++v108;
        }
        while ( (__int64)v108 < (int)v107 );
      }
      if ( !v104 )
        sub_1B64ACC(v105, v106);
      v112 = v104->fields._size;
      if ( !v112 )
        return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v112, 0LL);
      v47 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      Item = System_Collections_Generic_List_int___get_Item(
               v104,
               Next,
               (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v47 )
        sub_1B64ACC(Item, v114);
      if ( !v47->max_length )
        sub_1B64AD4(Item, v114);
      goto LABEL_128;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v76 = AliveFieldPlayerServantIDList;
      v77 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v77,
        (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v76 )
        sub_1B64ACC(v78, v79);
      v80 = *(_QWORD *)&v76->max_length;
      if ( (int)v80 >= 1 )
      {
        v81 = 0LL;
        do
        {
          if ( v81 >= (unsigned int)v80 )
            sub_1B64AD4(v78, v79);
          v79 = (unsigned int)v76->m_Items[v81 + 1];
          if ( (_DWORD)v79 != actorId )
          {
            if ( !v77 )
              sub_1B64ACC(v78, v79);
            v82 = v77->fields._items;
            v83 = Method_System_Collections_Generic_List_int__Add__;
            ++v77->fields._version;
            if ( !v82 )
              sub_1B64ACC(v78, v79);
            v84 = v77->fields._size;
            if ( (unsigned int)v84 >= v82->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v77,
                v79,
                *(const MethodInfo_34921B8 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
            }
            else
            {
              v77->fields._size = v84 + 1;
              v82->m_Items[v84 + 1] = v79;
            }
          }
          LODWORD(v80) = v76->max_length;
          ++v81;
        }
        while ( (__int64)v81 < (int)v80 );
      }
      if ( !v77 )
        sub_1B64ACC(v78, v79);
      v85 = v77->fields._size;
      if ( !v85 )
        return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
      v86 = BattleRandom__getNext(v85, 0LL);
      v47 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      Item = System_Collections_Generic_List_int___get_Item(
               v77,
               v86,
               (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v47 )
        sub_1B64ACC(Item, v88);
      if ( !v47->max_length )
        sub_1B64AD4(Item, v88);
      goto LABEL_128;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v48 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v48 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v89 = v48;
      v90 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v90,
        (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v89 )
        sub_1B64ACC(v91, v92);
      v93 = *(_QWORD *)&v89->max_length;
      if ( (int)v93 >= 1 )
      {
        v94 = 0LL;
        do
        {
          if ( v94 >= (unsigned int)v93 )
            sub_1B64AD4(v91, v92);
          v92 = (unsigned int)v89->m_Items[v94 + 1];
          if ( (_DWORD)v92 != targetId )
          {
            if ( !v90 )
              sub_1B64ACC(v91, v92);
            v95 = v90->fields._items;
            v96 = Method_System_Collections_Generic_List_int__Add__;
            ++v90->fields._version;
            if ( !v95 )
              sub_1B64ACC(v91, v92);
            v97 = v90->fields._size;
            if ( (unsigned int)v97 >= v95->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v90,
                v92,
                *(const MethodInfo_34921B8 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
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
        sub_1B64ACC(v91, v92);
      v98 = v90->fields._size;
      if ( !v98 )
        return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
      v99 = BattleRandom__getNext(v98, 0LL);
      v47 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      Item = System_Collections_Generic_List_int___get_Item(
               v90,
               v99,
               (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v47 )
        sub_1B64ACC(Item, v100);
      if ( !v47->max_length )
        sub_1B64AD4(Item, v100);
LABEL_128:
      v47->m_Items[1] = Item;
      return v47;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v43);
    case 22:
      v56 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v56, actorId, 0, 1, v57);
    case 23:
      v40 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v40, actorId, 1, 1, v41);
    case 24:
      v74 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v74, actorId, 1, 0, v75);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v44 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v44 && checkRevengeId )
        targetId = BattleServantData__getRevengeTargetUniqueId(v44, 0LL);
      if ( BattleData__getServantData(bdata, targetId, 0LL) )
      {
        v45 = sub_1B64918(int___TypeInfo, 1LL);
        v47 = (System_Int32_array *)v45;
        if ( !v45 )
          sub_1B64ACC(0LL, v46);
        if ( !*(_DWORD *)(v45 + 24) )
          sub_1B64AD4(v45, v46);
LABEL_60:
        v47->m_Items[1] = targetId;
        return v47;
      }
      else
      {
        return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
      }
    default:
      return v115;
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)dataVals, v5, v6);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1B64ACC(0LL, method);
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

  if ( (byte_49FD559 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_int___, method);
    byte_49FD559 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1B64ACC(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 134, 0LL);
    if ( !enemyRange )
    {
      v7 = Method_System_Array_Empty_int___;
      v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v8 )
      {
        sub_1BB67A8(Method_System_Array_Empty_int___);
        v8 = v7[7];
      }
      v9 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1BB674C(v9);
      if ( !*(_DWORD *)(v9 + 224) )
        j_il2cpp_runtime_class_init_0(v9);
      v10 = *(_QWORD *)(v7[7] + 16LL);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BB674C(v10);
      enemyRange = **(struct System_Int32_array ***)(v10 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6);
  }
  return enemyRange;
}