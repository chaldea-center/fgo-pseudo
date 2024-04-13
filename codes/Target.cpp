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
  __int64 v3; // x3
  BattleData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattleActionData_o *beforeAction; // x20
  __int64 v10; // x19
  __int64 v11; // x19
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v13; // x19
  struct BattleSkillInfoData_o *v14; // x8
  SkillLvEntity_o *Entity; // x0

  v5 = bData;
  if ( (byte_42E5B23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, taskActorType, (_DWORD)method, v3);
    bData = (BattleData_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6, v7, v8);
    byte_42E5B23 = 1;
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
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(v11);
  bData = **(BattleData_o ***)(v11 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0LL)
    || (v13 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        (v14 = beforeAction->fields.skillInfo) == 0LL)
    || !v13 )
  {
LABEL_19:
    sub_B5D69C(bData, *(_QWORD *)&taskActorType);
  }
  Entity = SkillLvMaster__GetEntity(v13, (int32_t)bData, v14->fields.skilllv, 0LL);
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
    sub_B5D69C(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0LL);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
  {
    v8 = sub_B5D6C8(Next);
    sub_B5D668(v8, 0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  PartyAllFieldTargetAggregator_o *v54; // x25
  TargetAggregator_Args_o *v55; // x26
  __int64 v56; // x0
  __int64 v57; // x1

  if ( (byte_42E5B24 & 1) == 0 )
  {
    sub_B5D5C4(&TargetAggregator_Args_TypeInfo, actorId, targetId, *(_QWORD *)&pttargetId);
    sub_B5D5C4(&NoneTargetAggregator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&OpponentAllFieldTargetAggregator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&OpponentFullTargetAggregator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&OpponentOtherFullTargetAggregator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&OpponentOtherTargetAggregator_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&OpponentRangeAggregator_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&PartyAllFieldTargetAggregator_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&PartyFullTargetAggregator_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&PartyLowsetHpRateTargetChoicer_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&PartyLowsetHpValueTargetChoicer_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&PartyOneOtherTargetAggregator_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&PartyOtherFullTargetAggregator_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&PartyOtherTargetAggregator_TypeInfo, v51, v52, v53);
    byte_42E5B24 = 1;
  }
  switch ( type )
  {
    case 3:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor(v54, 0LL);
      break;
    case 6:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v54, 0LL);
      break;
    case 7:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v54, 0LL);
      break;
    case 8:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v54, 0LL);
      break;
    case 9:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v54, 0LL);
      break;
    case 10:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v54, 0LL);
      break;
    case 12:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v54, 0LL);
      break;
    case 14:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v54, 0LL);
      break;
    case 15:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v54, 0LL);
      break;
    case 28:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v54, 0LL);
      break;
    case 29:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v54, 0LL);
      break;
    case 30:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v54, 0LL);
      break;
    default:
      v54 = (PartyAllFieldTargetAggregator_o *)sub_B5D694(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v54, 0LL);
      break;
  }
  v55 = (TargetAggregator_Args_o *)sub_B5D694(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v55, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0LL);
  if ( !v54 )
    sub_B5D69C(v56, v57);
  v54->fields.args = v55;
  sub_B5D560(&v54->fields);
  return (TargetAggregator_o *)v54;
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
    sub_B5D69C(0LL, actorId);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  System_Int32_array *v14; // x21
  int32_t v15; // w0
  int v16; // w10
  il2cpp_array_size_t v17; // w20
  __int64 v19; // x0

  if ( (byte_42E5B22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, excludeId, isOrderDesc, isPrev);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    byte_42E5B22 = 1;
  }
  v12 = sub_B5D5DC(int___TypeInfo, 0LL);
  if ( !checkIdArray )
    goto LABEL_18;
  v14 = (System_Int32_array *)v12;
  if ( *(_QWORD *)&checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse((System_Array_o *)checkIdArray, 0LL);
    v15 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
    v16 = v15 - 1;
    if ( !isPrev )
      v16 = 0;
    v17 = v15 >= 1 ? v16 : v15 == 0;
    if ( (signed int)v17 < (signed int)checkIdArray->max_length )
    {
      v12 = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( v17 >= checkIdArray->max_length )
        goto LABEL_19;
      v14 = (System_Int32_array *)v12;
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 24) )
        {
          *(_DWORD *)(v12 + 32) = checkIdArray->m_Items[v17 + 1];
          return v14;
        }
LABEL_19:
        v19 = sub_B5D6C8(v12);
        sub_B5D668(v19, 0LL);
      }
LABEL_18:
      sub_B5D69C(v12, v13);
    }
  }
  return v14;
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

  return Target__getTargetIds_19913408(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0LL, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall Target__getTargetIds_19913408(
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
  int32_t RevengeTargetUniqueId; // w23
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Int32_array *v36; // x28
  const MethodInfo *v37; // x7
  bool IsActorPlayerSide; // w19
  System_Int32_array *result; // x0
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  System_Int32_array *v43; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v45; // x1
  __int64 v46; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  System_Int32_array *v48; // x0
  const MethodInfo *v49; // x4
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v51; // x4
  BattleServantData_o *v52; // x0
  System_Int32_array *v53; // x0
  bool v54; // w8
  __int64 v55; // x1
  __int64 v56; // x1
  int32_t v57; // w8
  System_Int32_array *v58; // x0
  const MethodInfo *v59; // x4
  System_Int32_array *v60; // x19
  BattleServantData_o *ServantData; // x0
  __int64 v62; // x1
  __int64 v63; // x0
  System_Int32_array *v64; // x22
  bool v65; // w0
  const MethodInfo *v66; // x3
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x0
  bool isEnemyID; // w0
  const MethodInfo *v73; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v75; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  BattleServantData_o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x0
  System_Int32_array *v80; // x0
  const MethodInfo *v81; // x4
  System_Int32_array *v82; // x19
  System_Collections_Generic_List_int__o *v83; // x20
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x8
  unsigned __int64 v87; // x22
  int32_t v88; // w0
  unsigned int Next; // w21
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x0
  System_Int32_array *v93; // x19
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x8
  unsigned __int64 v97; // x21
  int32_t v98; // w0
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x0
  bool v102; // w8
  System_Int32_array *v103; // x19
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x8
  unsigned __int64 v107; // x21
  int32_t size; // w0
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x0
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x0
  System_Int32_array *v127; // [xsp+8h] [xbp-58h]

  RevengeTargetUniqueId = pttargetId;
  if ( (byte_42E5B21 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, actorId, targetId, *(_QWORD *)&pttargetId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v30, v31, v32);
    byte_42E5B21 = 1;
  }
  v33 = sub_B5D5DC(int___TypeInfo, 0LL);
  v127 = (System_Int32_array *)v33;
  if ( !bdata )
    goto LABEL_133;
  v36 = 0LL;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0LL) )
    goto LABEL_8;
  v33 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v33 )
LABEL_133:
    sub_B5D69C(v33, v34);
  v36 = (System_Int32_array *)v33;
  if ( !*(_DWORD *)(v33 + 24) )
  {
    v116 = sub_B5D6C8(v33);
    sub_B5D668(v116, 0LL);
  }
  *(_DWORD *)(v33 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v35);
  result = v127;
  switch ( type )
  {
    case 0:
    case 25:
      result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      v43 = result;
      if ( !result )
        sub_B5D69C(0LL, v42);
      if ( !result->max_length )
      {
        v117 = sub_B5D6C8(result);
        sub_B5D668(v117, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B5D69C(0LL, v45);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v121 = sub_B5D6C8(FieldPlayerServantIDList);
          sub_B5D668(v121, 0LL);
        }
        if ( !v43->max_length )
        {
          v46 = sub_B5D6C8(FieldPlayerServantIDList);
          sub_B5D668(v46, 0LL);
        }
        goto LABEL_38;
      }
      return result;
    case 1:
      v60 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      ServantData = BattleData__getServantData(bdata, RevengeTargetUniqueId, 0LL);
      if ( !ServantData )
        return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      if ( !v60 )
        sub_B5D69C(ServantData, v62);
      if ( !v60->max_length )
      {
        v63 = sub_B5D6C8(ServantData);
        sub_B5D668(v63, 0LL);
      }
      goto LABEL_125;
    case 2:
    case 5:
      return result;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v36, 0LL);
    case 4:
      v69 = sub_B5D5DC(int___TypeInfo, 1LL);
      v60 = (System_Int32_array *)v69;
      if ( !v69 )
        sub_B5D69C(0LL, v70);
      RevengeTargetUniqueId = targetId;
      if ( !*(_DWORD *)(v69 + 24) )
      {
        v71 = sub_B5D6C8(v69);
        sub_B5D668(v71, 0LL);
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
        v102 = !Target_BattleTargetArgs__IsCheckDead(args, 0LL);
      else
        v102 = 1;
      return BattleData__getPlayerServantIDList(bdata, v102, v36, 0LL);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0LL) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0LL);
      if ( args )
        v54 = !Target_BattleTargetArgs__IsCheckDead(args, 0LL);
      else
        v54 = 1;
      return BattleData__getPlayerServantIDList(bdata, v54, 0LL, 0LL);
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
                           RevengeTargetUniqueId,
                           type,
                           taskActorType,
                           args,
                           v37);
      if ( !TargetAggregator )
        sub_B5D69C(0LL, v41);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, const char *))TargetAggregator->klass[1]._1.gc_desc)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.name);
    case 11:
      v60 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0LL);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v73);
      if ( !v60 )
        sub_B5D69C(AliveFieldRandomTargetId, v75);
      if ( !v60->max_length )
      {
        v120 = sub_B5D6C8(AliveFieldRandomTargetId);
        sub_B5D668(v120, 0LL);
      }
      v60->m_Items[1] = AliveFieldRandomTargetId;
      return v60;
    case 13:
      v64 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      v65 = BattleData__isEnemyID(bdata, actorId, 0LL);
      v67 = Target__GetAliveFieldRandomTargetId(bdata, !v65, IsActorPlayerSide, v66);
      if ( !v64 )
        sub_B5D69C(v67, v68);
      if ( !v64->max_length )
      {
        v119 = sub_B5D6C8(v67);
        sub_B5D668(v119, 0LL);
      }
      v64->m_Items[1] = v67;
      return v64;
    case 16:
      v60 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      v77 = BattleData__getServantData(bdata, RevengeTargetUniqueId, 0LL);
      if ( !v77 )
        return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      if ( !v60 )
        sub_B5D69C(v77, v78);
      if ( !v60->max_length )
      {
        v79 = sub_B5D6C8(v77);
        sub_B5D668(v79, 0LL);
      }
      goto LABEL_125;
    case 17:
      result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      v43 = result;
      if ( !result )
        sub_B5D69C(0LL, v55);
      if ( !result->max_length )
      {
        v118 = sub_B5D6C8(result);
        sub_B5D668(v118, 0LL);
      }
      result->m_Items[1] = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0LL, 0LL);
        if ( !FieldPlayerServantIDList )
          sub_B5D69C(0LL, v56);
        if ( !FieldPlayerServantIDList->max_length )
        {
          v124 = sub_B5D6C8(FieldPlayerServantIDList);
          sub_B5D668(v124, 0LL);
        }
        if ( !v43->max_length )
        {
          v125 = sub_B5D6C8(FieldPlayerServantIDList);
          sub_B5D668(v125, 0LL);
        }
LABEL_38:
        v57 = FieldPlayerServantIDList->m_Items[1];
        result = v43;
        v43->m_Items[1] = v57;
      }
      return result;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v103 = AliveFieldEnemyServantIDList;
      v83 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v83,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      if ( !v103 )
        sub_B5D69C(v104, v105);
      v106 = *(_QWORD *)&v103->max_length;
      if ( (int)v106 >= 1 )
      {
        v107 = 0LL;
        do
        {
          if ( v107 >= (unsigned int)v106 )
          {
            v115 = sub_B5D6C8(v104);
            sub_B5D668(v115, 0LL);
          }
          v105 = (unsigned int)v103->m_Items[v107 + 1];
          if ( (_DWORD)v105 != RevengeTargetUniqueId )
          {
            if ( !v83 )
              sub_B5D69C(v104, v105);
            System_Collections_Generic_List_int___Add(
              v83,
              v105,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v106) = v103->max_length;
          ++v107;
        }
        while ( (__int64)v107 < (int)v106 );
      }
      if ( !v83 )
        sub_B5D69C(v104, v105);
      size = v83->fields._size;
      if ( !size )
        return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(size, 0LL);
      v109 = sub_B5D5DC(int___TypeInfo, 1LL);
      v60 = (System_Int32_array *)v109;
      if ( v83->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v109 )
        sub_B5D69C(0LL, v110);
      if ( !*(_DWORD *)(v109 + 24) )
      {
        v123 = sub_B5D6C8(v109);
        sub_B5D668(v123, 0LL);
      }
      goto LABEL_117;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0LL);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      v82 = AliveFieldPlayerServantIDList;
      v83 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v83,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      if ( !v82 )
        sub_B5D69C(v84, v85);
      v86 = *(_QWORD *)&v82->max_length;
      if ( (int)v86 >= 1 )
      {
        v87 = 0LL;
        do
        {
          if ( v87 >= (unsigned int)v86 )
          {
            v113 = sub_B5D6C8(v84);
            sub_B5D668(v113, 0LL);
          }
          v85 = (unsigned int)v82->m_Items[v87 + 1];
          if ( (_DWORD)v85 != actorId )
          {
            if ( !v83 )
              sub_B5D69C(v84, v85);
            System_Collections_Generic_List_int___Add(
              v83,
              v85,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v86) = v82->max_length;
          ++v87;
        }
        while ( (__int64)v87 < (int)v86 );
      }
      if ( !v83 )
        sub_B5D69C(v84, v85);
      v88 = v83->fields._size;
      if ( !v88 )
        return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v88, 0LL);
      v90 = sub_B5D5DC(int___TypeInfo, 1LL);
      v60 = (System_Int32_array *)v90;
      if ( v83->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v90 )
        sub_B5D69C(0LL, v91);
      if ( !*(_DWORD *)(v90 + 24) )
      {
        v92 = sub_B5D6C8(v90);
        sub_B5D668(v92, 0LL);
      }
      goto LABEL_117;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0LL) )
        v53 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0LL, 0LL);
      else
        v53 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0LL);
      v93 = v53;
      v83 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v83,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      if ( !v93 )
        sub_B5D69C(v94, v95);
      v96 = *(_QWORD *)&v93->max_length;
      if ( (int)v96 >= 1 )
      {
        v97 = 0LL;
        do
        {
          if ( v97 >= (unsigned int)v96 )
          {
            v114 = sub_B5D6C8(v94);
            sub_B5D668(v114, 0LL);
          }
          v95 = (unsigned int)v93->m_Items[v97 + 1];
          if ( (_DWORD)v95 != targetId )
          {
            if ( !v83 )
              sub_B5D69C(v94, v95);
            System_Collections_Generic_List_int___Add(
              v83,
              v95,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v96) = v93->max_length;
          ++v97;
        }
        while ( (__int64)v97 < (int)v96 );
      }
      if ( !v83 )
        sub_B5D69C(v94, v95);
      v98 = v83->fields._size;
      if ( !v98 )
        return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      Next = BattleRandom__getNext(v98, 0LL);
      v99 = sub_B5D5DC(int___TypeInfo, 1LL);
      v60 = (System_Int32_array *)v99;
      if ( v83->fields._size <= Next )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v99 )
        sub_B5D69C(0LL, v100);
      if ( !*(_DWORD *)(v99 + 24) )
      {
        v101 = sub_B5D6C8(v99);
        sub_B5D668(v101, 0LL);
      }
LABEL_117:
      v60->m_Items[1] = v83->fields._items->m_Items[Next + 1];
      return v60;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v51);
    case 22:
      v58 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v58, actorId, 0, 1, v59);
    case 23:
      v48 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0LL);
      return Target__getOrderOneTargetIdArray(v48, actorId, 1, 1, v49);
    case 24:
      v80 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0LL, 0, 0LL);
      return Target__getOrderOneTargetIdArray(v80, actorId, 1, 0, v81);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0LL);
    case 27:
      v52 = BattleData__getServantData(bdata, actorId, 0LL);
      if ( v52 )
      {
        RevengeTargetUniqueId = targetId;
        if ( checkRevengeId )
          RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(v52, 0LL);
      }
      else
      {
        RevengeTargetUniqueId = targetId;
      }
      if ( !BattleData__getServantData(bdata, RevengeTargetUniqueId, 0LL) )
        return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      v111 = sub_B5D5DC(int___TypeInfo, 1LL);
      v60 = (System_Int32_array *)v111;
      if ( !v111 )
        sub_B5D69C(0LL, v112);
      if ( !*(_DWORD *)(v111 + 24) )
      {
        v122 = sub_B5D6C8(v111);
        sub_B5D668(v122, 0LL);
      }
LABEL_125:
      v60->m_Items[1] = RevengeTargetUniqueId;
      return v60;
    default:
      return v127;
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
  sub_B5D560(&this->fields);
}


bool __fastcall Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_B5D69C(0LL, method);
  return DataVals__isCheckDead(dataVals, 0LL);
}


System_Int32_array *__fastcall Target_BattleTargetArgs__get_EnemyRange(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Int32_array **p_enemyRange; // x19
  System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  _QWORD **v8; // x21
  __int64 v9; // x20
  __int16 v10; // w8
  __int64 v11; // x20
  __int64 v12; // x20
  __int64 v13; // x20

  if ( (byte_42E649B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)method, v2, v3);
    byte_42E649B = 1;
  }
  p_enemyRange = &this->fields.enemyRange;
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_B5D69C(0LL, method);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0LL);
    if ( !enemyRange )
    {
      v8 = (_QWORD **)Method_System_Array_Empty_int___;
      v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v10 = *(_WORD *)(v9 + 306);
      if ( (v10 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v10 = *(_WORD *)(v9 + 306);
      }
      if ( (v10 & 0x400) != 0 )
      {
        v11 = *v8[6];
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AF52C4(*v8[6]);
        if ( !*(_DWORD *)(v11 + 224) )
        {
          v12 = *v8[6];
          if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
            sub_AF52C4(*v8[6]);
          j_il2cpp_runtime_class_init_0(v12);
        }
      }
      v13 = *v8[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AF52C4(*v8[6]);
      enemyRange = **(System_Int32_array ***)(v13 + 184);
    }
    *p_enemyRange = enemyRange;
    sub_B5D560(p_enemyRange);
  }
  return enemyRange;
}