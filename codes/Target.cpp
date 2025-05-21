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
  if ( (byte_4B439FD & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType);
    bData = (BattleData_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4B439FD = 1;
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
    v8 = sub_1C2BF08(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08(v3);
  bData = **(BattleData_o ***)(v9 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v11 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v12 = beforeAction->fields.skillInfo) == 0LL)
    || !v11 )
  {
LABEL_19:
    sub_1BDBAD4(bData, *(_QWORD *)&taskActorType);
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
    sub_1BDBAD4(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1BDBADC(Next, v8, v9);
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

  if ( (byte_4B439FE & 1) == 0 )
  {
    sub_1BDB878(&AllFieldTargetAggregator_TypeInfo, *(_QWORD *)&actorId);
    sub_1BDB878(&TargetAggregator_Args_TypeInfo, v15);
    sub_1BDB878(&NoneTargetAggregator_TypeInfo, v16);
    sub_1BDB878(&OpponentAllFieldTargetAggregator_TypeInfo, v17);
    sub_1BDB878(&OpponentFullTargetAggregator_TypeInfo, v18);
    sub_1BDB878(&OpponentOtherFullTargetAggregator_TypeInfo, v19);
    sub_1BDB878(&OpponentOtherTargetAggregator_TypeInfo, v20);
    sub_1BDB878(&OpponentRangeAggregator_TypeInfo, v21);
    sub_1BDB878(&PartyAllFieldTargetAggregator_TypeInfo, v22);
    sub_1BDB878(&PartyFullTargetAggregator_TypeInfo, v23);
    sub_1BDB878(&PartyLowsetHpRateTargetChoicer_TypeInfo, v24);
    sub_1BDB878(&PartyLowsetHpValueTargetChoicer_TypeInfo, v25);
    sub_1BDB878(&PartyOneOtherTargetAggregator_TypeInfo, v26);
    sub_1BDB878(&PartyOtherFullTargetAggregator_TypeInfo, v27);
    sub_1BDB878(&PartyOtherTargetAggregator_TypeInfo, v28);
    byte_4B439FE = 1;
  }
  switch ( type )
  {
    case 3:
      v29 = sub_1BDBAC4(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v29, 0LL);
      break;
    case 6:
      v29 = sub_1BDBAC4(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v29, 0LL);
      break;
    case 7:
      v29 = sub_1BDBAC4(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v29, 0LL);
      break;
    case 8:
      v29 = sub_1BDBAC4(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v29, 0LL);
      break;
    case 9:
      v29 = sub_1BDBAC4(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 10:
      v29 = sub_1BDBAC4(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 12:
      v29 = sub_1BDBAC4(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v29, 0LL);
      break;
    case 14:
      v29 = sub_1BDBAC4(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v29, 0LL);
      break;
    case 15:
      v29 = sub_1BDBAC4(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v29, 0LL);
      break;
    case 28:
      v29 = sub_1BDBAC4(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v29, 0LL);
      break;
    case 29:
      v29 = sub_1BDBAC4(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v29, 0LL);
      break;
    case 30:
      v29 = sub_1BDBAC4(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v29, 0LL);
      break;
    case 32:
      v29 = sub_1BDBAC4(AllFieldTargetAggregator_TypeInfo);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v29, 0LL);
      break;
    default:
      v29 = sub_1BDBAC4(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v29, 0LL);
      break;
  }
  v30 = (TargetAggregator_Args_o *)sub_1BDBAC4(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v30, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v29 )
    sub_1BDBAD4(v31, v32);
  *(_QWORD *)(v29 + 16) = v30;
  sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 16), (int32_t)v30, v33, v34);
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
    sub_1BDBAD4(0LL, actorId);
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
  __int64 v17; // x2

  if ( (byte_4B439FC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId);
    sub_1BDB878(&Method_System_Array_Reverse_int___, v9);
    sub_1BDB878(&int___TypeInfo, v10);
    byte_4B439FC = 1;
  }
  v11 = sub_1BDB920(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v13 = (System_Int32_array *)v11;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_2FF4960 *)Method_System_Array_Reverse_int___);
    v14 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
    v15 = v14 - 1;
    if ( !isPrev )
      v15 = 0;
    v16 = v14 >= 1 ? v15 : v14 == 0;
    if ( (signed int)v16 < (signed int)checkIdArray->max_length )
    {
      v11 = sub_1BDB920(int___TypeInfo, 1LL);
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
        sub_1BDBADC(v11, v12, v17);
      }
LABEL_18:
      sub_1BDBAD4(v11, v12);
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

  return Target__getTargetIds_39476520(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_39476520(
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
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  System_Int32_array *v42; // x0
  const MethodInfo *v43; // x4
  System_Int32_array *v44; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  System_Int32_array *v46; // x19
  BattleServantData_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  BattleServantData_o *v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  BattleServantData_o *ServantData; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v58; // x4
  __int64 v59; // x1
  __int64 v60; // x1
  DataVals_o *v61; // x0
  bool v62; // w8
  __int64 v63; // x21
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  struct DataVals_o *v67; // x8
  bool isEnemyID; // w0
  const MethodInfo *v69; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  bool v81; // w0
  const MethodInfo *v82; // x3
  __int64 v83; // x1
  __int64 v84; // x2
  System_Int32_array *v85; // x0
  const MethodInfo *v86; // x4
  System_Int32_array *v87; // x0
  const MethodInfo *v88; // x4
  System_Int32_array *v89; // x21
  System_Collections_Generic_List_int__o *v90; // x20
  __int64 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x8
  unsigned __int64 v95; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  int32_t v99; // w0
  int32_t Next; // w21
  __int64 v101; // x1
  __int64 v102; // x2
  System_Int32_array *v103; // x21
  System_Collections_Generic_List_int__o *v104; // x20
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x8
  unsigned __int64 v109; // x19
  struct System_Int32_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  int32_t v113; // w0
  int32_t v114; // w21
  __int64 v115; // x1
  __int64 v116; // x2
  System_Int32_array *v117; // x22
  System_Collections_Generic_List_int__o *v118; // x20
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x8
  unsigned __int64 v123; // x19
  struct System_Int32_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  int32_t v127; // w0
  int32_t v128; // w21
  __int64 v129; // x1
  __int64 v130; // x2
  DataVals_o *dataVals; // x0
  bool v133; // w8
  System_Int32_array *v134; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B439FB & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, *(_QWORD *)&actorId);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v22);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v23);
    byte_4B439FB = 1;
  }
  cardIndex = 0;
  v24 = sub_1BDB920(int___TypeInfo, 0LL);
  v134 = (System_Int32_array *)v24;
  if ( !bdata )
    goto LABEL_142;
  v27 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v24 = sub_1BDB920(int___TypeInfo, 1LL);
  if ( !v24 )
LABEL_142:
    sub_1BDBAD4(v24, v25);
  v27 = (System_Int32_array *)v24;
  if ( !*(_DWORD *)(v24 + 24) )
    sub_1BDBADC(v24, v25, v28);
  *(_DWORD *)(v24 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v26);
  switch ( type )
  {
    case 0:
    case 25:
      v34 = sub_1BDB920(int___TypeInfo, 1LL);
      v37 = (System_Int32_array *)v34;
      if ( !v34 )
        sub_1BDBAD4(0LL, v35);
      if ( !*(_DWORD *)(v34 + 24) )
        sub_1BDBADC(v34, v35, v36);
      *(_DWORD *)(v34 + 32) = actorId;
      v134 = (System_Int32_array *)v34;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1BDBAD4(0LL, v39);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1BDBADC(FieldPlayerServantIDList, v39, v40);
        if ( !v37->max_length )
          sub_1BDBADC(FieldPlayerServantIDList, v39, v40);
        goto LABEL_70;
      }
      return v134;
    case 1:
      v46 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
      if ( !v46 )
        sub_1BDBAD4(ServantData, v55);
      if ( !v46->max_length )
        sub_1BDBADC(ServantData, v55, v56);
      goto LABEL_41;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v27, 0LL);
    case 4:
      v73 = sub_1BDB920(int___TypeInfo, 1LL);
      v46 = (System_Int32_array *)v73;
      if ( !v73 )
        sub_1BDBAD4(0LL, v74);
      if ( !*(_DWORD *)(v73 + 24) )
        sub_1BDBADC(v73, v74, v75);
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
          sub_1BDBAD4(0LL, v59);
        v133 = !DataVals__isCheckDead(dataVals, 0LL);
      }
      else
      {
        v133 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v133, v27, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
      {
        v61 = args->fields.dataVals;
        if ( !v61 )
          sub_1BDBAD4(0LL, v60);
        v62 = !DataVals__isCheckDead(v61, 0LL);
      }
      else
      {
        v62 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v62, 0LL, 0LL);
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
        sub_1BDBAD4(0LL, v32);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v46 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v69);
      if ( !v46 )
        sub_1BDBAD4(AliveFieldRandomTargetId, v71);
      if ( !v46->max_length )
        sub_1BDBADC(AliveFieldRandomTargetId, v71, v72);
      goto LABEL_126;
    case 13:
      v46 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      v81 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v81, IsActorPlayerSide, v82);
      if ( !v46 )
        sub_1BDBAD4(AliveFieldRandomTargetId, v83);
      if ( !v46->max_length )
        sub_1BDBADC(AliveFieldRandomTargetId, v83, v84);
      goto LABEL_126;
    case 16:
      v46 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      v47 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v47 )
        return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
      if ( !v46 )
        sub_1BDBAD4(v47, v48);
      if ( !v46->max_length )
        sub_1BDBADC(v47, v48, v49);
LABEL_41:
      v46->m_Items[1] = pttargetId;
      return v46;
    case 17:
      v76 = sub_1BDB920(int___TypeInfo, 1LL);
      v37 = (System_Int32_array *)v76;
      if ( !v76 )
        sub_1BDBAD4(0LL, v77);
      if ( !*(_DWORD *)(v76 + 24) )
        sub_1BDBADC(v76, v77, v78);
      *(_DWORD *)(v76 + 32) = actorId;
      v134 = (System_Int32_array *)v76;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1BDBAD4(0LL, v79);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1BDBADC(FieldPlayerServantIDList, v79, v80);
        if ( !v37->max_length )
          sub_1BDBADC(FieldPlayerServantIDList, v79, v80);
LABEL_70:
        v134 = v37;
        v37->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      }
      return v134;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v89 = AliveFieldEnemyServantIDList;
      v90 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v90,
        (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v89 )
        sub_1BDBAD4(v91, v92);
      v94 = *(_QWORD *)&v89->max_length;
      if ( (int)v94 >= 1 )
      {
        v95 = 0LL;
        do
        {
          if ( v95 >= (unsigned int)v94 )
            sub_1BDBADC(v91, v92, v93);
          v92 = (unsigned int)v89->m_Items[v95 + 1];
          if ( (_DWORD)v92 != pttargetId )
          {
            if ( !v90 )
              sub_1BDBAD4(v91, v92);
            items = v90->fields._items;
            v97 = Method_System_Collections_Generic_List_int__Add__;
            ++v90->fields._version;
            if ( !items )
              sub_1BDBAD4(v91, v92);
            size = v90->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v90,
                v92,
                *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
            }
            else
            {
              v90->fields._size = size + 1;
              items->m_Items[size + 1] = v92;
            }
          }
          LODWORD(v94) = v89->max_length;
          ++v95;
        }
        while ( (__int64)v95 < (int)v94 );
      }
      if ( !v90 )
        sub_1BDBAD4(v91, v92);
      v99 = v90->fields._size;
      if ( !v99 )
        return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v99, 0LL);
      v46 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v90,
                                   Next,
                                   (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v46 )
        sub_1BDBAD4(AliveFieldRandomTargetId, v101);
      if ( !v46->max_length )
        sub_1BDBADC(AliveFieldRandomTargetId, v101, v102);
      goto LABEL_126;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v117 = AliveFieldPlayerServantIDList;
      v118 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v118,
        (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v117 )
        sub_1BDBAD4(v119, v120);
      v122 = *(_QWORD *)&v117->max_length;
      if ( (int)v122 >= 1 )
      {
        v123 = 0LL;
        do
        {
          if ( v123 >= (unsigned int)v122 )
            sub_1BDBADC(v119, v120, v121);
          v120 = (unsigned int)v117->m_Items[v123 + 1];
          if ( (_DWORD)v120 != actorId )
          {
            if ( !v118 )
              sub_1BDBAD4(v119, v120);
            v124 = v118->fields._items;
            v125 = Method_System_Collections_Generic_List_int__Add__;
            ++v118->fields._version;
            if ( !v124 )
              sub_1BDBAD4(v119, v120);
            v126 = v118->fields._size;
            if ( (unsigned int)v126 >= v124->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v118,
                v120,
                *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
            }
            else
            {
              v118->fields._size = v126 + 1;
              v124->m_Items[v126 + 1] = v120;
            }
          }
          LODWORD(v122) = v117->max_length;
          ++v123;
        }
        while ( (__int64)v123 < (int)v122 );
      }
      if ( !v118 )
        sub_1BDBAD4(v119, v120);
      v127 = v118->fields._size;
      if ( !v127 )
        return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
      v128 = BattleRandom__getNext(v127, 0LL);
      v46 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v118,
                                   v128,
                                   (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v46 )
        sub_1BDBAD4(AliveFieldRandomTargetId, v129);
      if ( !v46->max_length )
        sub_1BDBADC(AliveFieldRandomTargetId, v129, v130);
      goto LABEL_126;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v44 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v44 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v103 = v44;
      v104 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v104,
        (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v103 )
        sub_1BDBAD4(v105, v106);
      v108 = *(_QWORD *)&v103->max_length;
      if ( (int)v108 >= 1 )
      {
        v109 = 0LL;
        do
        {
          if ( v109 >= (unsigned int)v108 )
            sub_1BDBADC(v105, v106, v107);
          v106 = (unsigned int)v103->m_Items[v109 + 1];
          if ( (_DWORD)v106 != targetId )
          {
            if ( !v104 )
              sub_1BDBAD4(v105, v106);
            v110 = v104->fields._items;
            v111 = Method_System_Collections_Generic_List_int__Add__;
            ++v104->fields._version;
            if ( !v110 )
              sub_1BDBAD4(v105, v106);
            v112 = v104->fields._size;
            if ( (unsigned int)v112 >= v110->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v104,
                v106,
                *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
            }
            else
            {
              v104->fields._size = v112 + 1;
              v110->m_Items[v112 + 1] = v106;
            }
          }
          LODWORD(v108) = v103->max_length;
          ++v109;
        }
        while ( (__int64)v109 < (int)v108 );
      }
      if ( !v104 )
        sub_1BDBAD4(v105, v106);
      v113 = v104->fields._size;
      if ( !v113 )
        return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
      v114 = BattleRandom__getNext(v113, 0LL);
      v46 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v104,
                                   v114,
                                   (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v46 )
        sub_1BDBAD4(AliveFieldRandomTargetId, v115);
      if ( !v46->max_length )
        sub_1BDBADC(AliveFieldRandomTargetId, v115, v116);
LABEL_126:
      v46->m_Items[1] = AliveFieldRandomTargetId;
      return v46;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v58);
    case 22:
      v42 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v42, actorId, 0, 1, v43);
    case 23:
      v87 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v87, actorId, 1, 1, v88);
    case 24:
      v85 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v85, actorId, 1, 0, v86);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v50 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v50 && checkRevengeId )
        targetId = BattleServantData__getRevengeTargetUniqueId(v50, 0LL);
      if ( BattleData__getServantData(bdata, targetId, 0LL) )
      {
        v51 = sub_1BDB920(int___TypeInfo, 1LL);
        v46 = (System_Int32_array *)v51;
        if ( !v51 )
          sub_1BDBAD4(0LL, v52);
        if ( !*(_DWORD *)(v51 + 24) )
          sub_1BDBADC(v51, v52, v53);
LABEL_63:
        v46->m_Items[1] = targetId;
        return v46;
      }
      else
      {
        return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
      }
    case 31:
      v63 = sub_1BDB920(int___TypeInfo, 1LL);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0LL);
      if ( !v63 )
        sub_1BDBAD4(PlayerServantFromRandomCommandCard, v65);
      if ( !*(_DWORD *)(v63 + 24) )
        sub_1BDBADC(PlayerServantFromRandomCommandCard, v65, v66);
      *(_DWORD *)(v63 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1BDBAD4(PlayerServantFromRandomCommandCard, v65);
      v67 = args->fields.dataVals;
      if ( !v67 )
        sub_1BDBAD4(PlayerServantFromRandomCommandCard, v65);
      v134 = (System_Int32_array *)v63;
      v67->fields.targetCardIndex = cardIndex;
      return v134;
    default:
      return v134;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)dataVals, v5, v6);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(this, cardIndex);
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

  if ( (byte_4B439FF & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, method);
    byte_4B439FF = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1BDBAD4(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v8 = Method_System_Array_Empty_int___;
      v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v9 )
      {
        sub_1C2BF64(Method_System_Array_Empty_int___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C2BF08(inited);
      if ( !*(_DWORD *)(v10 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C2BF08(inited);
      enemyRange = **(struct System_Int32_array ***)(v11 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6);
  }
  return enemyRange;
}