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
  __int64 v7; // x2
  struct BattleActionData_o *beforeAction; // x20
  __int64 v9; // x0
  __int64 v10; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v12; // x19
  struct BattleSkillInfoData_o *v13; // x8
  SkillLvEntity_o *Entity; // x0

  v5 = bData;
  if ( (byte_4B151FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&taskActorType, method);
    bData = (BattleData_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6, v7);
    byte_4B151FC = 1;
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
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  bData = **(BattleData_o ***)(v10 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v12 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v13 = beforeAction->fields.skillInfo) == 0LL)
    || !v12 )
  {
LABEL_19:
    sub_1BCAA3C(bData, *(_QWORD *)&taskActorType);
  }
  Entity = SkillLvMaster__GetEntity(v12, (int32_t)bData, v13->fields.skilllv, 0LL);
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
    sub_1BCAA3C(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1BCAA44(Next, v8);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x25
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  TargetAggregator_Args_o *v47; // x26
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B151FD & 1) == 0 )
  {
    sub_1BCA7E0(&AllFieldTargetAggregator_TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&TargetAggregator_Args_TypeInfo, v15, v16);
    sub_1BCA7E0(&NoneTargetAggregator_TypeInfo, v17, v18);
    sub_1BCA7E0(&OpponentAllFieldTargetAggregator_TypeInfo, v19, v20);
    sub_1BCA7E0(&OpponentFullTargetAggregator_TypeInfo, v21, v22);
    sub_1BCA7E0(&OpponentOtherFullTargetAggregator_TypeInfo, v23, v24);
    sub_1BCA7E0(&OpponentOtherTargetAggregator_TypeInfo, v25, v26);
    sub_1BCA7E0(&OpponentRangeAggregator_TypeInfo, v27, v28);
    sub_1BCA7E0(&PartyAllFieldTargetAggregator_TypeInfo, v29, v30);
    sub_1BCA7E0(&PartyFullTargetAggregator_TypeInfo, v31, v32);
    sub_1BCA7E0(&PartyLowsetHpRateTargetChoicer_TypeInfo, v33, v34);
    sub_1BCA7E0(&PartyLowsetHpValueTargetChoicer_TypeInfo, v35, v36);
    sub_1BCA7E0(&PartyOneOtherTargetAggregator_TypeInfo, v37, v38);
    sub_1BCA7E0(&PartyOtherFullTargetAggregator_TypeInfo, v39, v40);
    sub_1BCA7E0(&PartyOtherTargetAggregator_TypeInfo, v41, v42);
    byte_4B151FD = 1;
  }
  switch ( type )
  {
    case 3:
      v43 = sub_1BCAA2C(
              PartyAllFieldTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v43, 0LL);
      break;
    case 6:
      v43 = sub_1BCAA2C(
              OpponentAllFieldTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v43, 0LL);
      break;
    case 7:
      v43 = sub_1BCAA2C(
              PartyFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v43, 0LL);
      break;
    case 8:
      v43 = sub_1BCAA2C(
              OpponentFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v43, 0LL);
      break;
    case 9:
      v43 = sub_1BCAA2C(
              PartyOtherTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v43, 0LL);
      break;
    case 10:
      v43 = sub_1BCAA2C(
              PartyOneOtherTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v43, 0LL);
      break;
    case 12:
      v43 = sub_1BCAA2C(
              OpponentOtherTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v43, 0LL);
      break;
    case 14:
      v43 = sub_1BCAA2C(
              PartyOtherFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v43, 0LL);
      break;
    case 15:
      v43 = sub_1BCAA2C(
              OpponentOtherFullTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v43, 0LL);
      break;
    case 28:
      v43 = sub_1BCAA2C(
              PartyLowsetHpValueTargetChoicer_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v43, 0LL);
      break;
    case 29:
      v43 = sub_1BCAA2C(
              PartyLowsetHpRateTargetChoicer_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v43, 0LL);
      break;
    case 30:
      v43 = sub_1BCAA2C(
              OpponentRangeAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v43, 0LL);
      break;
    case 32:
      v43 = sub_1BCAA2C(
              AllFieldTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v43, 0LL);
      break;
    default:
      v43 = sub_1BCAA2C(
              NoneTargetAggregator_TypeInfo,
              *(_QWORD *)&actorId,
              *(_QWORD *)&targetId,
              *(_QWORD *)&pttargetId);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v43, 0LL);
      break;
  }
  v47 = (TargetAggregator_Args_o *)sub_1BCAA2C(TargetAggregator_Args_TypeInfo, v44, v45, v46);
  TargetAggregator_Args___ctor(v47, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v43 )
    sub_1BCAA3C(v48, v49);
  *(_QWORD *)(v43 + 16) = v47;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)v47, v50, v51, v52, v53, v54, v55);
  return (TargetAggregator_o *)v43;
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
    sub_1BCAA3C(0LL, *(_QWORD *)&actorId);
  return BattleData__isPlayerID(bData, actorId, 0LL);
}


bool __fastcall Target__IsCommandCard(int32_t targetType, const MethodInfo *method)
{
  return targetType == 31;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  System_Int32_array *v15; // x21
  int32_t v16; // w0
  int v17; // w10
  il2cpp_array_size_t v18; // w20

  if ( (byte_4B151FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&excludeId, isOrderDesc);
    sub_1BCA7E0(&Method_System_Array_Reverse_int___, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    byte_4B151FB = 1;
  }
  v13 = sub_1BCA888(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v15 = (System_Int32_array *)v13;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_2ED4490 *)Method_System_Array_Reverse_int___);
    v16 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
    v17 = v16 - 1;
    if ( !isPrev )
      v17 = 0;
    v18 = v16 >= 1 ? v17 : v16 == 0;
    if ( (signed int)v18 < (signed int)checkIdArray->max_length )
    {
      v13 = sub_1BCA888(int___TypeInfo, 1LL);
      if ( v18 >= checkIdArray->max_length )
        goto LABEL_19;
      v15 = (System_Int32_array *)v13;
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 24) )
        {
          *(_DWORD *)(v13 + 32) = checkIdArray->m_Items[v18 + 1];
          return v15;
        }
LABEL_19:
        sub_1BCAA44(v13, v14);
      }
LABEL_18:
      sub_1BCAA3C(v13, v14);
    }
  }
  return v15;
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

  return Target__getTargetIds_38428440(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_38428440(
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x28
  const MethodInfo *v33; // x7
  bool IsActorPlayerSide; // w29
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v36; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  System_Int32_array *v40; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v42; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Int32_array *v47; // x0
  const MethodInfo *v48; // x4
  System_Int32_array *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Int32_array *v57; // x19
  BattleServantData_o *v58; // x0
  __int64 v59; // x1
  BattleServantData_o *v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  BattleServantData_o *ServantData; // x0
  __int64 v64; // x1
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v66; // x4
  __int64 v67; // x1
  __int64 v68; // x1
  DataVals_o *v69; // x0
  bool v70; // w8
  __int64 v71; // x21
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v73; // x1
  struct DataVals_o *v74; // x8
  bool isEnemyID; // w0
  const MethodInfo *v76; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v78; // x1
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x1
  bool v84; // w0
  const MethodInfo *v85; // x3
  __int64 v86; // x1
  System_Int32_array *v87; // x0
  const MethodInfo *v88; // x4
  System_Int32_array *v89; // x0
  const MethodInfo *v90; // x4
  System_Int32_array *v91; // x21
  System_Collections_Generic_List_int__o *v92; // x20
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x8
  unsigned __int64 v96; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  int32_t v100; // w0
  int32_t Next; // w21
  __int64 v102; // x1
  System_Int32_array *v103; // x21
  System_Collections_Generic_List_int__o *v104; // x20
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x8
  unsigned __int64 v108; // x19
  struct System_Int32_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  int32_t v112; // w0
  int32_t v113; // w21
  __int64 v114; // x1
  System_Int32_array *v115; // x22
  System_Collections_Generic_List_int__o *v116; // x20
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x8
  unsigned __int64 v120; // x19
  struct System_Int32_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  int32_t v124; // w0
  int32_t v125; // w21
  __int64 v126; // x1
  DataVals_o *dataVals; // x0
  bool v129; // w8
  System_Int32_array *v130; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  RevengeTargetUniqueId = targetId;
  if ( (byte_4B151FA & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&actorId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v27, v28);
    byte_4B151FA = 1;
  }
  cardIndex = 0;
  v29 = sub_1BCA888(int___TypeInfo, 0LL);
  v130 = (System_Int32_array *)v29;
  if ( !bdata )
    goto LABEL_142;
  v32 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v29 = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v29 )
LABEL_142:
    sub_1BCAA3C(v29, v30);
  v32 = (System_Int32_array *)v29;
  if ( !*(_DWORD *)(v29 + 24) )
    sub_1BCAA44(v29, v30);
  *(_DWORD *)(v29 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v31);
  switch ( type )
  {
    case 0:
    case 25:
      v38 = sub_1BCA888(int___TypeInfo, 1LL);
      v40 = (System_Int32_array *)v38;
      if ( !v38 )
        sub_1BCAA3C(0LL, v39);
      if ( !*(_DWORD *)(v38 + 24) )
        sub_1BCAA44(v38, v39);
      *(_DWORD *)(v38 + 32) = actorId;
      v130 = (System_Int32_array *)v38;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1BCAA3C(0LL, v42);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1BCAA44(FieldPlayerServantIDList, v42);
        if ( !v40->max_length )
          sub_1BCAA44(FieldPlayerServantIDList, v42);
        goto LABEL_70;
      }
      return v130;
    case 1:
      v57 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
      if ( !v57 )
        sub_1BCAA3C(ServantData, v64);
      if ( !v57->max_length )
        sub_1BCAA44(ServantData, v64);
      goto LABEL_41;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v32, 0LL);
    case 4:
      v79 = sub_1BCA888(int___TypeInfo, 1LL);
      v57 = (System_Int32_array *)v79;
      if ( !v79 )
        sub_1BCAA3C(0LL, v80);
      if ( !*(_DWORD *)(v79 + 24) )
        sub_1BCAA44(v79, v80);
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
          sub_1BCAA3C(0LL, v67);
        v129 = !DataVals__isCheckDead(dataVals, 0LL);
      }
      else
      {
        v129 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v129, v32, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
      {
        v69 = args->fields.dataVals;
        if ( !v69 )
          sub_1BCAA3C(0LL, v68);
        v70 = !DataVals__isCheckDead(v69, 0LL);
      }
      else
      {
        v70 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v70, 0LL, 0LL);
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
                           RevengeTargetUniqueId,
                           pttargetId,
                           type,
                           taskActorType,
                           args,
                           v33);
      if ( !TargetAggregator )
        sub_1BCAA3C(0LL, v36);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v57 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v76);
      if ( !v57 )
        sub_1BCAA3C(AliveFieldRandomTargetId, v78);
      if ( !v57->max_length )
        sub_1BCAA44(AliveFieldRandomTargetId, v78);
      goto LABEL_126;
    case 13:
      v57 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      v84 = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v84, IsActorPlayerSide, v85);
      if ( !v57 )
        sub_1BCAA3C(AliveFieldRandomTargetId, v86);
      if ( !v57->max_length )
        sub_1BCAA44(AliveFieldRandomTargetId, v86);
      goto LABEL_126;
    case 16:
      v57 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      v58 = BattleData__getServantData(bdata, pttargetId, 0LL);
      if ( !v58 )
        return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
      if ( !v57 )
        sub_1BCAA3C(v58, v59);
      if ( !v57->max_length )
        sub_1BCAA44(v58, v59);
LABEL_41:
      v57->m_Items[1] = pttargetId;
      return v57;
    case 17:
      v81 = sub_1BCA888(int___TypeInfo, 1LL);
      v40 = (System_Int32_array *)v81;
      if ( !v81 )
        sub_1BCAA3C(0LL, v82);
      if ( !*(_DWORD *)(v81 + 24) )
        sub_1BCAA44(v81, v82);
      *(_DWORD *)(v81 + 32) = actorId;
      v130 = (System_Int32_array *)v81;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_1BCAA3C(0LL, v83);
        if ( !FieldPlayerServantIDList->max_length )
          sub_1BCAA44(FieldPlayerServantIDList, v83);
        if ( !v40->max_length )
          sub_1BCAA44(FieldPlayerServantIDList, v83);
LABEL_70:
        v130 = v40;
        v40->m_Items[1] = FieldPlayerServantIDList->m_Items[1];
      }
      return v130;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v91 = AliveFieldEnemyServantIDList;
      v92 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v44,
                                                        v45,
                                                        v46);
      System_Collections_Generic_List_int____ctor(
        v92,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v91 )
        sub_1BCAA3C(v93, v94);
      v95 = *(_QWORD *)&v91->max_length;
      if ( (int)v95 >= 1 )
      {
        v96 = 0LL;
        do
        {
          if ( v96 >= (unsigned int)v95 )
            sub_1BCAA44(v93, v94);
          v94 = (unsigned int)v91->m_Items[v96 + 1];
          if ( (_DWORD)v94 != pttargetId )
          {
            if ( !v92 )
              sub_1BCAA3C(v93, v94);
            items = v92->fields._items;
            v98 = Method_System_Collections_Generic_List_int__Add__;
            ++v92->fields._version;
            if ( !items )
              sub_1BCAA3C(v93, v94);
            size = v92->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v92,
                v94,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v92->fields._size = size + 1;
              items->m_Items[size + 1] = v94;
            }
          }
          LODWORD(v95) = v91->max_length;
          ++v96;
        }
        while ( (__int64)v96 < (int)v95 );
      }
      if ( !v92 )
        sub_1BCAA3C(v93, v94);
      v100 = v92->fields._size;
      if ( !v100 )
        return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v100, 0LL);
      v57 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v92,
                                   Next,
                                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v57 )
        sub_1BCAA3C(AliveFieldRandomTargetId, v102);
      if ( !v57->max_length )
        sub_1BCAA44(AliveFieldRandomTargetId, v102);
      goto LABEL_126;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v115 = AliveFieldPlayerServantIDList;
      v116 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v54,
                                                         v55,
                                                         v56);
      System_Collections_Generic_List_int____ctor(
        v116,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v115 )
        sub_1BCAA3C(v117, v118);
      v119 = *(_QWORD *)&v115->max_length;
      if ( (int)v119 >= 1 )
      {
        v120 = 0LL;
        do
        {
          if ( v120 >= (unsigned int)v119 )
            sub_1BCAA44(v117, v118);
          v118 = (unsigned int)v115->m_Items[v120 + 1];
          if ( (_DWORD)v118 != actorId )
          {
            if ( !v116 )
              sub_1BCAA3C(v117, v118);
            v121 = v116->fields._items;
            v122 = Method_System_Collections_Generic_List_int__Add__;
            ++v116->fields._version;
            if ( !v121 )
              sub_1BCAA3C(v117, v118);
            v123 = v116->fields._size;
            if ( (unsigned int)v123 >= v121->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v116,
                v118,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
            }
            else
            {
              v116->fields._size = v123 + 1;
              v121->m_Items[v123 + 1] = v118;
            }
          }
          LODWORD(v119) = v115->max_length;
          ++v120;
        }
        while ( (__int64)v120 < (int)v119 );
      }
      if ( !v116 )
        sub_1BCAA3C(v117, v118);
      v124 = v116->fields._size;
      if ( !v124 )
        return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
      v125 = BattleRandom__getNext(v124, 0LL);
      v57 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v116,
                                   v125,
                                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v57 )
        sub_1BCAA3C(AliveFieldRandomTargetId, v126);
      if ( !v57->max_length )
        sub_1BCAA44(AliveFieldRandomTargetId, v126);
      goto LABEL_126;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v49 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v49 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v103 = v49;
      v104 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v50,
                                                         v51,
                                                         v52);
      System_Collections_Generic_List_int____ctor(
        v104,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v103 )
        sub_1BCAA3C(v105, v106);
      v107 = *(_QWORD *)&v103->max_length;
      if ( (int)v107 >= 1 )
      {
        v108 = 0LL;
        do
        {
          if ( v108 >= (unsigned int)v107 )
            sub_1BCAA44(v105, v106);
          v106 = (unsigned int)v103->m_Items[v108 + 1];
          if ( (_DWORD)v106 != RevengeTargetUniqueId )
          {
            if ( !v104 )
              sub_1BCAA3C(v105, v106);
            v109 = v104->fields._items;
            v110 = Method_System_Collections_Generic_List_int__Add__;
            ++v104->fields._version;
            if ( !v109 )
              sub_1BCAA3C(v105, v106);
            v111 = v104->fields._size;
            if ( (unsigned int)v111 >= v109->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v104,
                v106,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
            }
            else
            {
              v104->fields._size = v111 + 1;
              v109->m_Items[v111 + 1] = v106;
            }
          }
          LODWORD(v107) = v103->max_length;
          ++v108;
        }
        while ( (__int64)v108 < (int)v107 );
      }
      if ( !v104 )
        sub_1BCAA3C(v105, v106);
      v112 = v104->fields._size;
      if ( !v112 )
        return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
      v113 = BattleRandom__getNext(v112, 0LL);
      v57 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v104,
                                   v113,
                                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v57 )
        sub_1BCAA3C(AliveFieldRandomTargetId, v114);
      if ( !v57->max_length )
        sub_1BCAA44(AliveFieldRandomTargetId, v114);
LABEL_126:
      v57->m_Items[1] = AliveFieldRandomTargetId;
      return v57;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v66);
    case 22:
      v47 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v47, actorId, 0, 1, v48);
    case 23:
      v89 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v89, actorId, 1, 1, v90);
    case 24:
      v87 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v87, actorId, 1, 0, v88);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v60 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v60 && checkRevengeId )
        RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(v60, 0LL);
      if ( BattleData__getServantData(bdata, RevengeTargetUniqueId, 0LL) )
      {
        v61 = sub_1BCA888(int___TypeInfo, 1LL);
        v57 = (System_Int32_array *)v61;
        if ( !v61 )
          sub_1BCAA3C(0LL, v62);
        if ( !*(_DWORD *)(v61 + 24) )
          sub_1BCAA44(v61, v62);
LABEL_63:
        v57->m_Items[1] = RevengeTargetUniqueId;
        return v57;
      }
      else
      {
        return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
      }
    case 31:
      v71 = sub_1BCA888(int___TypeInfo, 1LL);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0LL);
      if ( !v71 )
        sub_1BCAA3C(PlayerServantFromRandomCommandCard, v73);
      if ( !*(_DWORD *)(v71 + 24) )
        sub_1BCAA44(PlayerServantFromRandomCommandCard, v73);
      *(_DWORD *)(v71 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1BCAA3C(PlayerServantFromRandomCommandCard, v73);
      v74 = args->fields.dataVals;
      if ( !v74 )
        sub_1BCAA3C(PlayerServantFromRandomCommandCard, v73);
      v130 = (System_Int32_array *)v71;
      v74->fields.targetCardIndex = cardIndex;
      return v130;
    default:
      return v130;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)dataVals, v5, v6, v7, v8, v9, v10);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1BCAA3C(0LL, method);
  return DataVals__isCheckDead(dataVals, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Target_BattleTargetArgs__SetTargetCardIndex(
        Target_BattleTargetArgs_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals; // x8

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1BCAA3C(this, *(_QWORD *)&cardIndex);
  dataVals->fields.targetCardIndex = cardIndex;
}


System_Int32_array *__fastcall Target_BattleTargetArgs__get_EnemyRange(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  long double inited; // q0
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4B151FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    byte_4B151FE = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1BCAA3C(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 134, 0LL);
    if ( !enemyRange )
    {
      v14 = Method_System_Array_Empty_int___;
      v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v15 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v6);
        v15 = v14[7];
      }
      v16 = *(_QWORD *)(v15 + 16);
      if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
        v16 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v16 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v16, v6);
      v17 = *(_QWORD *)(v14[7] + 16LL);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1C1C6BC(inited);
      enemyRange = **(struct System_Int32_array ***)(v17 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enemyRange, (int64_t)enemyRange, v7, v8, v9, v10, v11, v12);
  }
  return enemyRange;
}