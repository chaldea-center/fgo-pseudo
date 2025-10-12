void Target___ctor(Target_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Target__Check(int32_t cktype, int32_t type, const MethodInfo *method)
{
  return cktype == type;
}


bool Target__CheckAressSkill(BattleData_o *bData, int32_t taskActorType, const MethodInfo *method)
{
  long double v3; // q0
  BattleData_o *v5; // x19
  struct BattleActionData_o *beforeAction; // x20
  __int64 v7; // x0
  __int64 v8; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v10; // x19
  struct BattleSkillInfoData_o *v11; // x8
  SkillLvEntity_o *Entity; // x0

  v5 = bData;
  if ( (byte_4C368EA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    bData = (BattleData_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C368EA = 1;
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
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C83334(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334(v3);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (skillInfo = beforeAction->fields.skillInfo) == 0)
    || (v10 = (SkillLvMaster_o *)bData,
        bData = (BattleData_o *)((BattleData_o *(__fastcall *)(struct BattleSkillInfoData_o *__return_ptr, struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                  skillInfo,
                                  beforeAction->fields.skillInfo,
                                  skillInfo->klass->vtable._5_get_skillId.method),
        (v11 = beforeAction->fields.skillInfo) == 0)
    || !v10 )
  {
LABEL_19:
    sub_1C32E7C(bData);
  }
  Entity = SkillLvMaster__GetEntity(v10, (int32_t)bData, v11->fields.skilllv, 0);
  if ( Entity )
    return SkillLvEntity__IsAress(Entity, 0);
  return 0;
}


int32_t Target__GetAliveFieldRandomTargetId(
        BattleData_o *battleData,
        bool isEnemyID,
        bool isOpponentOnly,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *AliveFieldEnemyServantIDList; // x0
  System_Collections_ICollection_o *v5; // x19
  __int64 Next; // x0

  if ( !battleData )
    goto LABEL_10;
  if ( isEnemyID )
    AliveFieldEnemyServantIDList = (System_Collections_ICollection_o *)BattleData__getAliveFieldEnemyServantIDList(
                                                                         battleData,
                                                                         isOpponentOnly,
                                                                         0);
  else
    AliveFieldEnemyServantIDList = (System_Collections_ICollection_o *)BattleData__getAliveFieldPlayerServantIDList(
                                                                         battleData,
                                                                         0,
                                                                         0);
  v5 = AliveFieldEnemyServantIDList;
  battleData = (BattleData_o *)BasicHelper__IsNullOrEmpty(AliveFieldEnemyServantIDList, 0);
  if ( ((unsigned __int8)battleData & 1) != 0 )
    return -1;
  if ( !v5 )
LABEL_10:
    sub_1C32E7C(battleData);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1C32E84(Next);
  return *((_DWORD *)&v5[2].klass + (int)Next);
}


int32_t Target__GetAliveLogicFieldRandomTargetId(
        BattleData_o *battleData,
        int32_t targetFlag,
        bool isOpponentTargetOnly,
        const MethodInfo *method)
{
  BattleData_o *v6; // x21
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  Target___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__int__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct Target___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x19
  __int64 Next; // x0

  v6 = battleData;
  if ( (byte_4C368E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C32C20(&Method_Target___c__GetAliveLogicFieldRandomTargetId_b__8_0__);
    battleData = (BattleData_o *)sub_1C32C20(&Target___c_TypeInfo);
    byte_4C368E7 = 1;
  }
  if ( !v6 )
    goto LABEL_15;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(v6, targetFlag, isOpponentTargetOnly, 0);
  v8 = Target___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldAliveLogicServantArray;
  if ( !Target___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Target___c_TypeInfo);
    v8 = Target___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v8->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = Target___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v11, Method_Target___c__GetAliveLogicFieldRandomTargetId_b__8_0__, 0);
    static_fields = Target___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_BattleServantData__int__o *)_9__8_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__8_0,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  battleData = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16, 0);
  if ( ((unsigned __int8)battleData & 1) != 0 )
    return -1;
  if ( !v16 )
LABEL_15:
    sub_1C32E7C(battleData);
  Next = BattleRandom__getNext(v16->max_length, 0);
  if ( (unsigned int)Next >= LODWORD(v16->max_length) )
    sub_1C32E84(Next);
  return v16->m_Items[(int)Next];
}


TargetAggregator_o *Target__GetTargetAggregator(
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C368EB & 1) == 0 )
  {
    sub_1C32C20(&AllFieldTargetAggregator_TypeInfo);
    sub_1C32C20(&TargetAggregator_Args_TypeInfo);
    sub_1C32C20(&NoneTargetAggregator_TypeInfo);
    sub_1C32C20(&OpponentAllFieldTargetAggregator_TypeInfo);
    sub_1C32C20(&OpponentFullTargetAggregator_TypeInfo);
    sub_1C32C20(&OpponentOtherFullTargetAggregator_TypeInfo);
    sub_1C32C20(&OpponentOtherTargetAggregator_TypeInfo);
    sub_1C32C20(&OpponentRangeAggregator_TypeInfo);
    sub_1C32C20(&PartyAllFieldTargetAggregator_TypeInfo);
    sub_1C32C20(&PartyFullTargetAggregator_TypeInfo);
    sub_1C32C20(&PartyLowsetHpRateTargetChoicer_TypeInfo);
    sub_1C32C20(&PartyLowsetHpValueTargetChoicer_TypeInfo);
    sub_1C32C20(&PartyOneOtherTargetAggregator_TypeInfo);
    sub_1C32C20(&PartyOtherFullTargetAggregator_TypeInfo);
    sub_1C32C20(&PartyOtherTargetAggregator_TypeInfo);
    byte_4C368EB = 1;
  }
  switch ( type )
  {
    case 3:
      v15 = sub_1C32E6C(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 6:
      v15 = sub_1C32E6C(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 7:
      v15 = sub_1C32E6C(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v15, 0);
      break;
    case 8:
      v15 = sub_1C32E6C(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v15, 0);
      break;
    case 9:
      v15 = sub_1C32E6C(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v15, 0);
      break;
    case 10:
      v15 = sub_1C32E6C(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v15, 0);
      break;
    case 12:
      v15 = sub_1C32E6C(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v15, 0);
      break;
    case 14:
      v15 = sub_1C32E6C(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 15:
      v15 = sub_1C32E6C(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 28:
      v15 = sub_1C32E6C(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v15, 0);
      break;
    case 29:
      v15 = sub_1C32E6C(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v15, 0);
      break;
    case 30:
      v15 = sub_1C32E6C(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v15, 0);
      break;
    case 32:
      v15 = sub_1C32E6C(AllFieldTargetAggregator_TypeInfo);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v15, 0);
      break;
    default:
      v15 = sub_1C32E6C(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v15, 0);
      break;
  }
  v16 = (TargetAggregator_Args_o *)sub_1C32E6C(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v16, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0);
  if ( !v15 )
    sub_1C32E7C(v17);
  *(_QWORD *)(v15 + 16) = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 16), (int32_t)v16, v18, v19);
  return (TargetAggregator_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool Target__IsActorPlayerSide(BattleData_o *bData, int32_t actorId, int32_t taskActorType, const MethodInfo *method)
{
  if ( actorId < 0 )
    return (taskActorType != 5) & !Target__CheckAressSkill(bData, taskActorType, *(const MethodInfo **)&taskActorType);
  if ( !bData )
    sub_1C32E7C(0);
  return BattleData__isPlayerID(bData, actorId, 0);
}


bool Target__IsCommandCard(int32_t targetType, const MethodInfo *method)
{
  return targetType == 31;
}


bool Target__IsEnemyAllTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 32
      || (targetType & 0xFFFFFFFB) == 26
      || targetType == 15
      || targetType == 6
      || (targetType & 0xFFFFFFFB) == 8;
}


bool Target__IsFuncTargetTypeNoTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 33;
}


bool Target__IsPartyAllTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 14 || targetType == 9 || (targetType & 0xFFFFFFFB) == 3;
}


System_Int32_array *Target__getOrderOneTargetIdArray(
        System_Int32_array *checkIdArray,
        int32_t excludeId,
        bool isOrderDesc,
        bool isPrev,
        const MethodInfo *method)
{
  __int64 v9; // x0
  System_Int32_array *v10; // x21
  int32_t v11; // w0
  int v12; // w10
  int v13; // w20

  if ( (byte_4C368E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_System_Array_Reverse_int___);
    sub_1C32C20(&int___TypeInfo);
    byte_4C368E9 = 1;
  }
  v9 = sub_1C32CC8(int___TypeInfo, 0);
  if ( !checkIdArray )
    goto LABEL_18;
  v10 = (System_Int32_array *)v9;
  if ( checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_309DDFC *)Method_System_Array_Reverse_int___);
    v11 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___);
    v12 = v11 - 1;
    if ( !isPrev )
      v12 = 0;
    v13 = v11 >= 1 ? v12 : v11 == 0;
    if ( v13 < SLODWORD(checkIdArray->max_length) )
    {
      v9 = sub_1C32CC8(int___TypeInfo, 1);
      if ( (unsigned int)v13 >= LODWORD(checkIdArray->max_length) )
        goto LABEL_19;
      v10 = (System_Int32_array *)v9;
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 24) )
        {
          *(_DWORD *)(v9 + 32) = checkIdArray->m_Items[v13];
          return v10;
        }
LABEL_19:
        sub_1C32E84(v9);
      }
LABEL_18:
      sub_1C32E7C(v9);
    }
  }
  return v10;
}


System_Int32_array *Target__getTargetIds(
        BattleData_o *bdata,
        int32_t actorId,
        int32_t targetId,
        int32_t pttargetId,
        int32_t tgType,
        System_Int32_array *tvals,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+10h] [xbp-20h]

  return Target__getTargetIds_40355556(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0, v8);
}


System_Int32_array *Target__getTargetIds_40355556(
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
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x28
  const MethodInfo *v22; // x7
  bool IsActorPlayerSide; // w29
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v26; // x0
  __int64 v27; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v29; // x19
  const MethodInfo *v30; // x3
  __int64 AliveFieldRandomTargetId; // x0
  System_Int32_array *v32; // x0
  const MethodInfo *v33; // x4
  System_Int32_array *v34; // x0
  const MethodInfo *v35; // x4
  DataVals_o *v36; // x0
  bool v37; // w8
  bool isEnemyID; // w0
  const MethodInfo *v39; // x3
  __int64 v40; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v42; // x0
  bool v43; // w0
  const MethodInfo *v44; // x3
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  System_Int32_array *v46; // x0
  const MethodInfo *v47; // x4
  System_Int32_array *v48; // x0
  BattleServantData_o *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x19
  System_Int32_array *v52; // x0
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  BattleServantData_o *v54; // x0
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v56; // x4
  __int64 v57; // x21
  __int64 PlayerServantFromRandomCommandCard; // x0
  struct DataVals_o *v59; // x8
  DataVals_o *dataVals; // x0
  bool v61; // w8
  System_Int32_array *v62; // x21
  System_Collections_Generic_List_int__o *v63; // x20
  __int64 v64; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v66; // x19
  int32_t v67; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  int32_t v71; // w0
  int32_t Next; // w21
  System_Int32_array *v73; // x21
  System_Collections_Generic_List_int__o *v74; // x20
  __int64 v75; // x0
  il2cpp_array_size_t v76; // x8
  unsigned __int64 v77; // x19
  int32_t v78; // w1
  struct System_Int32_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  int32_t v82; // w0
  int32_t v83; // w21
  System_Int32_array *v84; // x22
  System_Collections_Generic_List_int__o *v85; // x20
  __int64 v86; // x0
  il2cpp_array_size_t v87; // x8
  unsigned __int64 v88; // x19
  int32_t v89; // w1
  struct System_Int32_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  int32_t v93; // w0
  int32_t v94; // w21
  System_Int32_array *v96; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C368E8 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C368E8 = 1;
  }
  cardIndex = 0;
  v19 = sub_1C32CC8(int___TypeInfo, 0);
  v96 = (System_Int32_array *)v19;
  if ( !bdata )
    goto LABEL_150;
  v21 = 0;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0) )
    goto LABEL_8;
  v19 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v19 )
LABEL_150:
    sub_1C32E7C(v19);
  v21 = (System_Int32_array *)v19;
  if ( !*(_DWORD *)(v19 + 24) )
    sub_1C32E84(v19);
  *(_DWORD *)(v19 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v20);
  switch ( type )
  {
    case 0:
    case 25:
      v26 = sub_1C32CC8(int___TypeInfo, 1);
      v27 = v26;
      if ( !v26 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v26 + 24) )
        sub_1C32E84(v26);
      *(_DWORD *)(v26 + 32) = actorId;
      v96 = (System_Int32_array *)v26;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        if ( !FieldPlayerServantIDList )
          sub_1C32E7C(0);
        if ( !LODWORD(FieldPlayerServantIDList->max_length) )
          sub_1C32E84(FieldPlayerServantIDList);
        if ( !*(_DWORD *)(v27 + 24) )
          sub_1C32E84(FieldPlayerServantIDList);
        goto LABEL_39;
      }
      return v96;
    case 1:
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !ServantData )
        return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
      if ( !v29 )
        sub_1C32E7C(ServantData);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(ServantData);
      goto LABEL_77;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v21, 0);
    case 4:
      v42 = sub_1C32CC8(int___TypeInfo, 1);
      v29 = v42;
      if ( !v42 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v42 + 24) )
        sub_1C32E84(v42);
      goto LABEL_66;
    case 6:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      else
        return BattleData__getFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0);
    case 7:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getEnemyServantIDList(bdata, 1, 0, 0);
      if ( args )
      {
        dataVals = args->fields.dataVals;
        if ( !dataVals )
          sub_1C32E7C(0);
        v61 = !DataVals__isCheckDead(dataVals, 0);
      }
      else
      {
        v61 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v61, v21, 0);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0);
      if ( args )
      {
        v36 = args->fields.dataVals;
        if ( !v36 )
          sub_1C32E7C(0);
        v37 = !DataVals__isCheckDead(v36, 0);
      }
      else
      {
        v37 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v37, 0, 0);
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
                           v22);
      if ( !TargetAggregator )
        sub_1C32E7C(0);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, void *))TargetAggregator->klass[1]._1.image)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.gc_desc);
    case 11:
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v39);
      if ( !v29 )
        sub_1C32E7C(AliveFieldRandomTargetId);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(AliveFieldRandomTargetId);
      goto LABEL_140;
    case 13:
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      v43 = BattleData__isEnemyID(bdata, actorId, 0);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v43, IsActorPlayerSide, v44);
      if ( !v29 )
        sub_1C32E7C(AliveFieldRandomTargetId);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(AliveFieldRandomTargetId);
      goto LABEL_140;
    case 16:
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      v54 = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !v54 )
        return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
      if ( !v29 )
        sub_1C32E7C(v54);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(v54);
LABEL_77:
      *(_DWORD *)(v29 + 32) = pttargetId;
      return (System_Int32_array *)v29;
    case 17:
      v40 = sub_1C32CC8(int___TypeInfo, 1);
      v27 = v40;
      if ( !v40 )
        sub_1C32E7C(0);
      if ( !*(_DWORD *)(v40 + 24) )
        sub_1C32E84(v40);
      *(_DWORD *)(v40 + 32) = actorId;
      v96 = (System_Int32_array *)v40;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        if ( !FieldPlayerServantIDList )
          sub_1C32E7C(0);
        if ( !LODWORD(FieldPlayerServantIDList->max_length) )
          sub_1C32E84(FieldPlayerServantIDList);
        if ( !*(_DWORD *)(v27 + 24) )
          sub_1C32E84(FieldPlayerServantIDList);
LABEL_39:
        v96 = (System_Int32_array *)v27;
        *(_DWORD *)(v27 + 32) = FieldPlayerServantIDList->m_Items[0];
      }
      return v96;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v62 = AliveFieldEnemyServantIDList;
      v63 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v63,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v62 )
        sub_1C32E7C(v64);
      max_length = v62->max_length;
      if ( (int)max_length >= 1 )
      {
        v66 = 0;
        do
        {
          if ( v66 >= (unsigned int)max_length )
            sub_1C32E84(v64);
          v67 = v62->m_Items[v66];
          if ( v67 != pttargetId )
          {
            if ( !v63 )
              sub_1C32E7C(v64);
            items = v63->fields._items;
            v69 = Method_System_Collections_Generic_List_int__Add__;
            ++v63->fields._version;
            if ( !items )
              sub_1C32E7C(v64);
            size = v63->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v63,
                v67,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              v63->fields._size = size + 1;
              items->m_Items[size] = v67;
            }
          }
          LODWORD(max_length) = v62->max_length;
          ++v66;
        }
        while ( (__int64)v66 < (int)max_length );
      }
      if ( !v63 )
        sub_1C32E7C(v64);
      v71 = v63->fields._size;
      if ( !v71 )
        return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
      Next = BattleRandom__getNext(v71, 0);
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v63,
                                   Next,
                                   (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v29 )
        sub_1C32E7C(AliveFieldRandomTargetId);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(AliveFieldRandomTargetId);
      goto LABEL_140;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v84 = AliveFieldPlayerServantIDList;
      v85 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v85,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v84 )
        sub_1C32E7C(v86);
      v87 = v84->max_length;
      if ( (int)v87 >= 1 )
      {
        v88 = 0;
        do
        {
          if ( v88 >= (unsigned int)v87 )
            sub_1C32E84(v86);
          v89 = v84->m_Items[v88];
          if ( v89 != actorId )
          {
            if ( !v85 )
              sub_1C32E7C(v86);
            v90 = v85->fields._items;
            v91 = Method_System_Collections_Generic_List_int__Add__;
            ++v85->fields._version;
            if ( !v90 )
              sub_1C32E7C(v86);
            v92 = v85->fields._size;
            if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v85,
                v89,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v85->fields._size = v92 + 1;
              v90->m_Items[v92] = v89;
            }
          }
          LODWORD(v87) = v84->max_length;
          ++v88;
        }
        while ( (__int64)v88 < (int)v87 );
      }
      if ( !v85 )
        sub_1C32E7C(v86);
      v93 = v85->fields._size;
      if ( !v93 )
        return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
      v94 = BattleRandom__getNext(v93, 0);
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v85,
                                   v94,
                                   (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v29 )
        sub_1C32E7C(AliveFieldRandomTargetId);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(AliveFieldRandomTargetId);
      goto LABEL_140;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        v48 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      else
        v48 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0);
      v73 = v48;
      v74 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v74,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v73 )
        sub_1C32E7C(v75);
      v76 = v73->max_length;
      if ( (int)v76 >= 1 )
      {
        v77 = 0;
        do
        {
          if ( v77 >= (unsigned int)v76 )
            sub_1C32E84(v75);
          v78 = v73->m_Items[v77];
          if ( v78 != targetId )
          {
            if ( !v74 )
              sub_1C32E7C(v75);
            v79 = v74->fields._items;
            v80 = Method_System_Collections_Generic_List_int__Add__;
            ++v74->fields._version;
            if ( !v79 )
              sub_1C32E7C(v75);
            v81 = v74->fields._size;
            if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v74,
                v78,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
            }
            else
            {
              v74->fields._size = v81 + 1;
              v79->m_Items[v81] = v78;
            }
          }
          LODWORD(v76) = v73->max_length;
          ++v77;
        }
        while ( (__int64)v77 < (int)v76 );
      }
      if ( !v74 )
        sub_1C32E7C(v75);
      v82 = v74->fields._size;
      if ( !v82 )
        return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
      v83 = BattleRandom__getNext(v82, 0);
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v74,
                                   v83,
                                   (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v29 )
        sub_1C32E7C(AliveFieldRandomTargetId);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(AliveFieldRandomTargetId);
      goto LABEL_140;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v56);
    case 22:
      v46 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v46, actorId, 0, 1, v47);
    case 23:
      v34 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v34, actorId, 1, 1, v35);
    case 24:
      v32 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0, 0, 0);
      return Target__getOrderOneTargetIdArray(v32, actorId, 1, 0, v33);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0);
    case 27:
      v49 = BattleData__getServantData(bdata, actorId, 0);
      if ( v49 && checkRevengeId )
        targetId = BattleServantData__GetRevengeTargetUniqueIdIncludeSelfDamage(v49, 0);
      if ( BattleData__getServantData(bdata, targetId, 0) )
      {
        v50 = sub_1C32CC8(int___TypeInfo, 1);
        v29 = v50;
        if ( !v50 )
          sub_1C32E7C(0);
        if ( !*(_DWORD *)(v50 + 24) )
          sub_1C32E84(v50);
LABEL_66:
        *(_DWORD *)(v29 + 32) = targetId;
        return (System_Int32_array *)v29;
      }
      else
      {
        return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
      }
    case 31:
      v57 = sub_1C32CC8(int___TypeInfo, 1);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0);
      if ( !v57 )
        sub_1C32E7C(PlayerServantFromRandomCommandCard);
      if ( !*(_DWORD *)(v57 + 24) )
        sub_1C32E84(PlayerServantFromRandomCommandCard);
      *(_DWORD *)(v57 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1C32E7C(PlayerServantFromRandomCommandCard);
      v59 = args->fields.dataVals;
      if ( !v59 )
        sub_1C32E7C(PlayerServantFromRandomCommandCard);
      v96 = (System_Int32_array *)v57;
      v59->fields.targetCardIndex = cardIndex;
      return v96;
    case 33:
      v51 = sub_1C32CC8(int___TypeInfo, 1);
      v52 = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      if ( !v52 )
        sub_1C32E7C(0);
      if ( !LODWORD(v52->max_length) )
        sub_1C32E84(v52);
      if ( !v51 )
        sub_1C32E7C(v52);
      if ( !*(_DWORD *)(v51 + 24) )
        sub_1C32E84(v52);
      v96 = (System_Int32_array *)v51;
      *(_DWORD *)(v51 + 32) = v52->m_Items[0];
      return v96;
    case 34:
      v29 = sub_1C32CC8(int___TypeInfo, 1);
      AliveFieldRandomTargetId = Target__GetAliveLogicFieldRandomTargetId(bdata, 3, 1, v30);
      if ( !v29 )
        sub_1C32E7C(AliveFieldRandomTargetId);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C32E84(AliveFieldRandomTargetId);
LABEL_140:
      *(_DWORD *)(v29 + 32) = AliveFieldRandomTargetId;
      return (System_Int32_array *)v29;
    default:
      return v96;
  }
}


bool Target__isAllTargets(int32_t targetType, const MethodInfo *method)
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


bool Target__isChoose(int32_t targetType, const MethodInfo *method)
{
  return targetType == 1 || targetType == 10;
}


bool Target__isCommandType(int32_t targetType, const MethodInfo *method)
{
  return targetType == 25;
}


bool Target__isEnemy(int32_t targetType, const MethodInfo *method)
{
  return targetType == 30
      || targetType == 27
      || targetType == 20
      || (targetType & 0xFFFFFFFD) == 13
      || (targetType & 0xFFFFFFFB) == 8
      || targetType == 6
      || (targetType & 0xFFFFFFFE) == 4;
}


bool Target__isFieldEnemy(int32_t targetType, const MethodInfo *method)
{
  return targetType == 30 || targetType == 27 || targetType == 20 || (targetType & 0xFFFFFFF6) == 4 || targetType == 6;
}


bool Target__isFieldPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)(targetType - 21) < 5
      || (targetType & 0xFFFFFFFC) == 16
      || (unsigned int)targetType < 4
      || (unsigned int)(targetType - 9) < 3;
}


bool Target__isPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)(targetType - 21) < 5
      || (targetType & 0xFFFFFFFC) == 16
      || targetType == 14
      || (unsigned int)(targetType - 9) < 3
      || (unsigned int)targetType < 4
      || targetType == 7;
}


bool Target__isSubChoose(int32_t targetType, const MethodInfo *method)
{
  return (targetType & 0xFFFFFFFE) == 16;
}


void Target_BattleTargetArgs___ctor(Target_BattleTargetArgs_o *this, DataVals_o *dataVals, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.dataVals = dataVals;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)dataVals, v5, v6);
}


bool Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1C32E7C(0);
  return DataVals__isCheckDead(dataVals, 0);
}


void Target_BattleTargetArgs__SetTargetCardIndex(
        Target_BattleTargetArgs_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals; // x8

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1C32E7C(this);
  dataVals->fields.targetCardIndex = cardIndex;
}


System_Int32_array *Target_BattleTargetArgs__get_EnemyRange(Target_BattleTargetArgs_o *this, const MethodInfo *method)
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

  if ( (byte_4C368EC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    byte_4C368EC = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1C32E7C(0);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0);
    if ( !enemyRange )
    {
      v8 = Method_System_Array_Empty_int___;
      v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v9 )
      {
        sub_1C83390(Method_System_Array_Empty_int___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C83334(inited);
      if ( !*(_DWORD *)(v10 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C83334(inited);
      enemyRange = **(struct System_Int32_array ***)(v11 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6);
  }
  return enemyRange;
}


void Target___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C368ED & 1) == 0 )
  {
    sub_1C32C20(&Target___c_TypeInfo);
    byte_4C368ED = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(Target___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Target___c_TypeInfo->static_fields->__9 = (struct Target___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)Target___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void Target___c___ctor(Target___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t Target___c___GetAliveLogicFieldRandomTargetId_b__8_0(
        Target___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.uniqueId;
}