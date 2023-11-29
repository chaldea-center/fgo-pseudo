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
  __int64 v5; // x1
  struct BattleActionData_o *beforeAction; // x20
  __int64 v7; // x19
  __int64 v8; // x19
  DataManager_o *v9; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v12; // x19
  int32_t v13; // w0
  struct BattleSkillInfoData_o *v14; // x8
  SkillLvEntity_o *Entity; // x0

  if ( (byte_40F6C3C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_40F6C3C = 1;
  }
  if ( !bData )
    goto LABEL_19;
  if ( taskActorType != 1 )
    return 0;
  if ( !bData->fields.isMultiTargetBattle )
    return 0;
  beforeAction = bData->fields.beforeAction;
  if ( !beforeAction || !beforeAction->fields.skillInfo )
    return 0;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(DataManager_o ***)(v8 + 184);
  if ( !v9
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v9,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v12 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster,
        v13 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                beforeAction->fields.skillInfo,
                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v14 = beforeAction->fields.skillInfo) == 0LL)
    || !v12 )
  {
LABEL_19:
    sub_B170D4();
  }
  Entity = SkillLvMaster__GetEntity(v12, v13, v14->fields.skilllv, 0LL);
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
  if ( BasicHelper__IsNullOrEmpty(AliveFieldEnemyServantIDList, 0LL) )
    return -1;
  if ( !v5 )
LABEL_10:
    sub_B170D4();
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
  {
    sub_B17100(Next, v8, v9);
    sub_B170A0();
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
  __int64 v28; // x25
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  TargetAggregator_Args_o *v33; // x26
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F6C3D & 1) == 0 )
  {
    sub_B16FFC(&TargetAggregator_Args_TypeInfo, *(_QWORD *)&actorId);
    sub_B16FFC(&NoneTargetAggregator_TypeInfo, v15);
    sub_B16FFC(&OpponentAllFieldTargetAggregator_TypeInfo, v16);
    sub_B16FFC(&OpponentFullTargetAggregator_TypeInfo, v17);
    sub_B16FFC(&OpponentOtherFullTargetAggregator_TypeInfo, v18);
    sub_B16FFC(&OpponentOtherTargetAggregator_TypeInfo, v19);
    sub_B16FFC(&OpponentRangeAggregator_TypeInfo, v20);
    sub_B16FFC(&PartyAllFieldTargetAggregator_TypeInfo, v21);
    sub_B16FFC(&PartyFullTargetAggregator_TypeInfo, v22);
    sub_B16FFC(&PartyLowsetHpRateTargetChoicer_TypeInfo, v23);
    sub_B16FFC(&PartyLowsetHpValueTargetChoicer_TypeInfo, v24);
    sub_B16FFC(&PartyOneOtherTargetAggregator_TypeInfo, v25);
    sub_B16FFC(&PartyOtherFullTargetAggregator_TypeInfo, v26);
    sub_B16FFC(&PartyOtherTargetAggregator_TypeInfo, v27);
    byte_40F6C3D = 1;
  }
  switch ( type )
  {
    case 3:
      v28 = sub_B170CC(
              PartyAllFieldTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 6:
      v28 = sub_B170CC(
              OpponentAllFieldTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v28, 0LL);
      break;
    case 7:
      v28 = sub_B170CC(
              PartyFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v28, 0LL);
      break;
    case 8:
      v28 = sub_B170CC(
              OpponentFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v28, 0LL);
      break;
    case 9:
      v28 = sub_B170CC(
              PartyOtherTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 10:
      v28 = sub_B170CC(
              PartyOneOtherTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 12:
      v28 = sub_B170CC(
              OpponentOtherTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v28, 0LL);
      break;
    case 14:
      v28 = sub_B170CC(
              PartyOtherFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 15:
      v28 = sub_B170CC(
              OpponentOtherFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v28, 0LL);
      break;
    case 28:
      v28 = sub_B170CC(
              PartyLowsetHpValueTargetChoicer_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v28, 0LL);
      break;
    case 29:
      v28 = sub_B170CC(
              PartyLowsetHpRateTargetChoicer_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v28, 0LL);
      break;
    case 30:
      v28 = sub_B170CC(
              OpponentRangeAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v28, 0LL);
      break;
    default:
      v28 = sub_B170CC(
              NoneTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId,
              *(_QWORD *)&type);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v28, 0LL);
      break;
  }
  v33 = (TargetAggregator_Args_o *)sub_B170CC(TargetAggregator_Args_TypeInfo, v29, v30, v31, v32);
  TargetAggregator_Args___ctor(v33, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v28 )
    sub_B170D4();
  *(_QWORD *)(v28 + 16) = v33;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
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
    sub_B170D4();
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
  __int64 v13; // x2
  int v14; // w10
  il2cpp_array_size_t v15; // w20
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2

  if ( (byte_40F6C3B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_B16FFC(&int___TypeInfo, v9);
    byte_40F6C3B = 1;
  }
  v10 = sub_B17014(int___TypeInfo, 0LL, isOrderDesc);
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
            (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
    v14 = v12 - 1;
    if ( !isPrev )
      v14 = 0;
    v15 = v12 >= 1 ? v14 : v12 == 0;
    if ( (signed int)v15 < (signed int)checkIdArray->max_length )
    {
      v16 = sub_B17014(int___TypeInfo, 1LL, v13);
      if ( v15 >= checkIdArray->max_length )
        goto LABEL_19;
      v11 = (System_Int32_array *)v16;
      if ( v16 )
      {
        if ( *(_DWORD *)(v16 + 24) )
        {
          *(_DWORD *)(v16 + 32) = checkIdArray->m_Items[v15 + 1];
          return v11;
        }
LABEL_19:
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
LABEL_18:
      sub_B170D4();
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

  return Target__getTargetIds_19019748(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_19019748(
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
  int32_t RevengeTargetUniqueId; // w22
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x2
  const MethodInfo *v31; // x7
  bool IsActorPlayerSide; // w28
  System_Int32_array *result; // x0
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_Int32_array *v37; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Int32_array *v46; // x0
  const MethodInfo *v47; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v49; // x4
  BattleServantData_o *v50; // x0
  __int64 v51; // x2
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Int32_array *v55; // x19
  System_Int32_array *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  System_Int32_array *v65; // x0
  const MethodInfo *v66; // x4
  System_Int32_array *v67; // x21
  BattleServantData_o *ServantData; // x0
  __int64 v69; // x1
  bool v70; // w0
  const MethodInfo *v71; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  bool isEnemyID; // w0
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  __int64 v81; // x2
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  BattleServantData_o *v87; // x0
  __int64 v88; // x1
  System_Int32_array *v89; // x0
  const MethodInfo *v90; // x4
  System_Int32_array *v91; // x22
  System_Collections_Generic_List_int__o *v92; // x20
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x8
  unsigned __int64 v96; // x19
  int32_t v97; // w0
  unsigned int Next; // w21
  __int64 v99; // x2
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  System_Int32_array *v103; // x19
  System_Int32_array *v104; // x21
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x8
  unsigned __int64 v108; // x19
  int32_t v109; // w0
  __int64 v110; // x2
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  System_Int32_array *v114; // x21
  __int64 v115; // x0
  __int64 v116; // x1
  __int64 v117; // x8
  unsigned __int64 v118; // x19
  int32_t size; // w0
  __int64 v120; // x2
  __int64 v121; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  System_Int32_array *v124; // [xsp+8h] [xbp-58h]

  RevengeTargetUniqueId = targetId;
  if ( (byte_40F6C3A & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v23);
    byte_40F6C3A = 1;
  }
  v124 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, *(_QWORD *)&targetId);
  if ( !bdata )
    goto LABEL_123;
  v26 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v27 = sub_B17014(int___TypeInfo, 1LL, v24);
  if ( !v27 )
LABEL_123:
    sub_B170D4();
  v26 = (System_Int32_array *)v27;
  if ( !*(_DWORD *)(v27 + 24) )
  {
    sub_B17100(v27, v28, v29);
    sub_B170A0();
  }
  *(_DWORD *)(v27 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v25);
  result = v124;
  switch ( type )
  {
    case 0:
    case 25:
      result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v30);
      v37 = result;
      if ( !result )
        sub_B170D4();
      if ( !result->max_length )
      {
        sub_B17100(result, v35, v36);
        sub_B170A0();
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B170D4();
        if ( !FieldPlayerServantIDList->max_length )
        {
          sub_B17100(FieldPlayerServantIDList, v39, v40);
          sub_B170A0();
        }
        if ( !v37->max_length )
        {
          sub_B17100(FieldPlayerServantIDList, v39, v40);
          sub_B170A0();
        }
        goto LABEL_41;
      }
      return result;
    case 1:
      v67 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v30);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        goto LABEL_121;
      if ( !v67 )
        sub_B170D4();
      if ( !v67->max_length )
      {
        sub_B17100(ServantData, v69, v51);
        sub_B170A0();
      }
      goto LABEL_66;
    case 2:
    case 5:
      return result;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v26, 0LL);
    case 4:
      v75 = sub_B17014(int___TypeInfo, 1LL, v30);
      v55 = (System_Int32_array *)v75;
      if ( !v75 )
        sub_B170D4();
      if ( !*(_DWORD *)(v75 + 24) )
      {
        sub_B17100(v75, v76, v77);
        sub_B170A0();
      }
      goto LABEL_56;
    case 6:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        return BattleData__getFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
    case 7:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, 0, 0LL);
      else
        return BattleData__getPlayerServantIDList(bdata, 1, v26, 0LL);
    case 8:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getPlayerServantIDList(bdata, 1, 0LL, 0LL);
      else
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
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
                           RevengeTargetUniqueId,
                           pttargetId,
                           type,
                           taskActorType,
                           args,
                           v31);
      if ( !TargetAggregator )
        sub_B170D4();
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v37 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v30);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v79);
      if ( !v37 )
        sub_B170D4();
      if ( !v37->max_length )
      {
        sub_B17100(AliveFieldRandomTargetId, v80, v81);
        sub_B170A0();
      }
      goto LABEL_59;
    case 13:
      v37 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v30);
      v70 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v70, IsActorPlayerSide, v71);
      if ( !v37 )
        sub_B170D4();
      if ( !v37->max_length )
      {
        sub_B17100(AliveFieldRandomTargetId, v73, v74);
        sub_B170A0();
      }
LABEL_59:
      v37->m_Items[1] = AliveFieldRandomTargetId;
      return v37;
    case 16:
      v67 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v30);
      v87 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v87 )
        goto LABEL_121;
      if ( !v67 )
        sub_B170D4();
      if ( !v67->max_length )
      {
        sub_B17100(v87, v88, v51);
        sub_B170A0();
      }
LABEL_66:
      v67->m_Items[1] = pttargetId;
      return v67;
    case 17:
      result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v30);
      v37 = result;
      if ( !result )
        sub_B170D4();
      if ( !result->max_length )
      {
        sub_B17100(result, v61, v62);
        sub_B170A0();
      }
      result->m_Items[1] = actorId;
      if ( actorId != -1 )
        return result;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
      if ( !FieldPlayerServantIDList )
        sub_B170D4();
      if ( !FieldPlayerServantIDList->max_length )
      {
        sub_B17100(FieldPlayerServantIDList, v63, v64);
        sub_B170A0();
      }
      if ( !v37->max_length )
      {
        sub_B17100(FieldPlayerServantIDList, v63, v64);
        sub_B170A0();
      }
LABEL_41:
      v37->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      return v37;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v114 = AliveFieldEnemyServantIDList;
      v92 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v83,
                                                        v84,
                                                        v85,
                                                        v86);
      System_Collections_Generic_List_int____ctor(
        v92,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v114 )
        sub_B170D4();
      v117 = *(_QWORD *)&v114->max_length;
      if ( (int)v117 >= 1 )
      {
        v118 = 0LL;
        do
        {
          if ( v118 >= (unsigned int)v117 )
          {
            sub_B17100(v115, v116, v51);
            sub_B170A0();
          }
          v116 = (unsigned int)v114->m_Items[v118 + 1];
          if ( (_DWORD)v116 != pttargetId )
          {
            if ( !v92 )
              sub_B170D4();
            System_Collections_Generic_List_int___Add(
              v92,
              v116,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v117) = v114->max_length;
          ++v118;
        }
        while ( (__int64)v118 < (int)v117 );
      }
      if ( !v92 )
        sub_B170D4();
      size = v92->fields._size;
      if ( !size )
        goto LABEL_121;
      Next = BattleRandom__getNext(size, 0LL);
      v121 = sub_B17014(int___TypeInfo, 1LL, v120);
      v103 = (System_Int32_array *)v121;
      if ( v92->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v121 )
        sub_B170D4();
      if ( !*(_DWORD *)(v121 + 24) )
      {
        sub_B17100(v121, v122, v123);
        sub_B170A0();
      }
      goto LABEL_120;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v91 = AliveFieldPlayerServantIDList;
      v92 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v42,
                                                        v43,
                                                        v44,
                                                        v45);
      System_Collections_Generic_List_int____ctor(
        v92,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v91 )
        sub_B170D4();
      v95 = *(_QWORD *)&v91->max_length;
      if ( (int)v95 >= 1 )
      {
        v96 = 0LL;
        do
        {
          if ( v96 >= (unsigned int)v95 )
          {
            sub_B17100(v93, v94, v51);
            sub_B170A0();
          }
          v94 = (unsigned int)v91->m_Items[v96 + 1];
          if ( (_DWORD)v94 != actorId )
          {
            if ( !v92 )
              sub_B170D4();
            System_Collections_Generic_List_int___Add(
              v92,
              v94,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v95) = v91->max_length;
          ++v96;
        }
        while ( (__int64)v96 < (int)v95 );
      }
      if ( !v92 )
        sub_B170D4();
      v97 = v92->fields._size;
      if ( !v97 )
        goto LABEL_121;
      Next = BattleRandom__getNext(v97, 0LL);
      v100 = sub_B17014(int___TypeInfo, 1LL, v99);
      v103 = (System_Int32_array *)v100;
      if ( v92->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v100 )
        sub_B170D4();
      if ( !*(_DWORD *)(v100 + 24) )
      {
        sub_B17100(v100, v101, v102);
        sub_B170A0();
      }
      goto LABEL_120;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v56 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v56 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v104 = v56;
      v92 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v57,
                                                        v58,
                                                        v59,
                                                        v60);
      System_Collections_Generic_List_int____ctor(
        v92,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v104 )
        sub_B170D4();
      v107 = *(_QWORD *)&v104->max_length;
      if ( (int)v107 >= 1 )
      {
        v108 = 0LL;
        do
        {
          if ( v108 >= (unsigned int)v107 )
          {
            sub_B17100(v105, v106, v51);
            sub_B170A0();
          }
          v106 = (unsigned int)v104->m_Items[v108 + 1];
          if ( (_DWORD)v106 != RevengeTargetUniqueId )
          {
            if ( !v92 )
              sub_B170D4();
            System_Collections_Generic_List_int___Add(
              v92,
              v106,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v107) = v104->max_length;
          ++v108;
        }
        while ( (__int64)v108 < (int)v107 );
      }
      if ( !v92 )
        sub_B170D4();
      v109 = v92->fields._size;
      if ( !v109 )
        goto LABEL_121;
      Next = BattleRandom__getNext(v109, 0LL);
      v111 = sub_B17014(int___TypeInfo, 1LL, v110);
      v103 = (System_Int32_array *)v111;
      if ( v92->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v111 )
        sub_B170D4();
      if ( !*(_DWORD *)(v111 + 24) )
      {
        sub_B17100(v111, v112, v113);
        sub_B170A0();
      }
LABEL_120:
      result = v103;
      v103->m_Items[1] = v92->fields._items->m_Items[Next + 1];
      break;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v49);
    case 22:
      v65 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v65, actorId, 0, 1, v66);
    case 23:
      v46 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v46, actorId, 1, 1, v47);
    case 24:
      v89 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v89, actorId, 1, 0, v90);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v50 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v50 && checkRevengeId )
        RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(v50, 0LL);
      if ( BattleData__getServantData(bdata, RevengeTargetUniqueId, 0LL) )
      {
        v52 = sub_B17014(int___TypeInfo, 1LL, v51);
        v55 = (System_Int32_array *)v52;
        if ( !v52 )
          sub_B170D4();
        if ( !*(_DWORD *)(v52 + 24) )
        {
          sub_B17100(v52, v53, v54);
          sub_B170A0();
        }
LABEL_56:
        v55->m_Items[1] = RevengeTargetUniqueId;
        result = v55;
      }
      else
      {
LABEL_121:
        result = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v51);
      }
      break;
    default:
      result = v124;
      break;
  }
  return result;
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dataVals = dataVals;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)dataVals, v5, v6, v7, v8, v9, v10);
}


System_Int32_array *__fastcall Target_BattleTargetArgs__get_EnemyRange(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_enemyRange; // x19
  System_Int32_array **enemyRange; // x20
  DataVals_o *dataVals; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  _QWORD **v12; // x21
  __int64 v13; // x20
  __int16 v14; // w8
  __int64 v15; // x20
  __int64 v16; // x20
  __int64 v17; // x20

  if ( (byte_40F779A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, method);
    byte_40F779A = 1;
  }
  p_enemyRange = (BattleServantConfConponent_o *)&this->fields.enemyRange;
  enemyRange = (System_Int32_array **)this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_B170D4();
    enemyRange = (System_Int32_array **)DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v12 = (_QWORD **)Method_System_Array_Empty_int___;
      v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v14 = *(_WORD *)(v13 + 306);
      if ( (v14 & 1) == 0 )
      {
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v14 = *(_WORD *)(v13 + 306);
      }
      if ( (v14 & 0x400) != 0 )
      {
        v15 = *v12[6];
        if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
          sub_AAFCFC(*v12[6]);
        if ( !*(_DWORD *)(v15 + 224) )
        {
          v16 = *v12[6];
          if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
            sub_AAFCFC(*v12[6]);
          j_il2cpp_runtime_class_init_0(v16);
        }
      }
      v17 = *v12[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*v12[6]);
      enemyRange = **(System_Int32_array ****)(v17 + 184);
    }
    p_enemyRange->klass = (BattleServantConfConponent_c *)enemyRange;
    sub_B16F98(p_enemyRange, enemyRange, v6, v7, v8, v9, v10, v11);
  }
  return (System_Int32_array *)enemyRange;
}