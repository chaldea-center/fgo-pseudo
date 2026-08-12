void Target___ctor(Target_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Target__Check(int32_t cktype, int32_t type, const MethodInfo *method)
{
  return cktype == type;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_596F6D2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    bData = (BattleData_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_596F6D2 = 1;
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
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v3);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_2213CDC(bData, *(_QWORD *)&taskActorType);
  }
  Entity = SkillLvMaster__GetEntity(v10, (int32_t)bData, v11->fields.skilllv, 0);
  if ( Entity )
    return SkillLvEntity__IsAress(Entity, 0);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t Target__GetAliveFieldRandomTargetId(
        BattleData_o *battleData,
        bool isEnemyID,
        bool isOpponentOnly,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *AliveFieldEnemyServantIDList; // x0
  System_Collections_ICollection_o *v5; // x19
  __int64 Next; // x0

  if ( isEnemyID )
  {
    if ( !battleData )
      goto LABEL_11;
    AliveFieldEnemyServantIDList = (System_Collections_ICollection_o *)BattleData__getAliveFieldEnemyServantIDList(
                                                                         battleData,
                                                                         isOpponentOnly,
                                                                         0);
  }
  else
  {
    if ( !battleData )
      goto LABEL_11;
    AliveFieldEnemyServantIDList = (System_Collections_ICollection_o *)BattleData__getAliveFieldPlayerServantIDList(
                                                                         battleData,
                                                                         0,
                                                                         0);
  }
  v5 = AliveFieldEnemyServantIDList;
  battleData = (BattleData_o *)BasicHelper__IsNullOrEmpty(AliveFieldEnemyServantIDList, 0);
  if ( ((unsigned __int8)battleData & 1) != 0 )
    return -1;
  if ( !v5 )
LABEL_11:
    sub_2213CDC(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_2213CE4(Next);
  return *((_DWORD *)&v5[2].klass + (int)Next);
}


// local variable allocation has failed, the output may be wrong!
int32_t Target__GetAliveLogicFieldRandomTargetId(
        BattleData_o *battleData,
        int32_t targetFlag,
        bool isOpponentTargetOnly,
        const MethodInfo *method)
{
  BattleData_o *v6; // x21
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Target___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  struct Target___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__9_0; // x20
  Il2CppObject *v14; // x21
  struct Target___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x19
  __int64 Next; // x0

  v6 = battleData;
  if ( (byte_596F6CF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_BattleServantData__int__TypeInfo);
    sub_2213A60(&Method_Target___c__GetAliveLogicFieldRandomTargetId_b__9_0__);
    battleData = (BattleData_o *)sub_2213A60(&Target___c_TypeInfo);
    byte_596F6CF = 1;
  }
  if ( !v6 )
    goto LABEL_15;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(v6, targetFlag, isOpponentTargetOnly, 0);
  v10 = Target___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldAliveLogicServantArray;
  if ( !*(&Target___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Target___c_TypeInfo, v8, v9);
    v10 = Target___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__9_0 = (System_Func_object__int__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8, v9);
      static_fields = Target___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_0, v14, Method_Target___c__GetAliveLogicFieldRandomTargetId_b__9_0__, 0);
    v15 = Target___c_TypeInfo->static_fields;
    v15->__9__9_0 = (struct System_Func_BattleServantData__int__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__9_0, (int32_t)_9__9_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  battleData = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v23, 0);
  if ( ((unsigned __int8)battleData & 1) != 0 )
    return -1;
  if ( !v23 )
LABEL_15:
    sub_2213CDC(battleData, *(_QWORD *)&targetFlag);
  Next = BattleRandom__getNext(v23->max_length, 0);
  if ( (unsigned int)Next >= LODWORD(v23->max_length) )
    sub_2213CE4(Next);
  return v23->m_Items[(int)Next];
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
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596F6D3 & 1) == 0 )
  {
    sub_2213A60(&AllFieldTargetAggregator_TypeInfo);
    sub_2213A60(&TargetAggregator_Args_TypeInfo);
    sub_2213A60(&NoneTargetAggregator_TypeInfo);
    sub_2213A60(&OpponentAllFieldTargetAggregator_TypeInfo);
    sub_2213A60(&OpponentFullTargetAggregator_TypeInfo);
    sub_2213A60(&OpponentOtherFullTargetAggregator_TypeInfo);
    sub_2213A60(&OpponentOtherTargetAggregator_TypeInfo);
    sub_2213A60(&OpponentRangeAggregator_TypeInfo);
    sub_2213A60(&PartyAllFieldTargetAggregator_TypeInfo);
    sub_2213A60(&PartyFullTargetAggregator_TypeInfo);
    sub_2213A60(&PartyLowsetHpRateTargetChoicer_TypeInfo);
    sub_2213A60(&PartyLowsetHpValueTargetChoicer_TypeInfo);
    sub_2213A60(&PartyOneOtherTargetAggregator_TypeInfo);
    sub_2213A60(&PartyOtherFullTargetAggregator_TypeInfo);
    sub_2213A60(&PartyOtherTargetAggregator_TypeInfo);
    byte_596F6D3 = 1;
  }
  switch ( type )
  {
    case 3:
      v15 = sub_2213CCC(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 6:
      v15 = sub_2213CCC(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 7:
      v15 = sub_2213CCC(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v15, 0);
      break;
    case 8:
      v15 = sub_2213CCC(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v15, 0);
      break;
    case 9:
      v15 = sub_2213CCC(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v15, 0);
      break;
    case 10:
      v15 = sub_2213CCC(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v15, 0);
      break;
    case 12:
      v15 = sub_2213CCC(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v15, 0);
      break;
    case 14:
      v15 = sub_2213CCC(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 15:
      v15 = sub_2213CCC(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 28:
      v15 = sub_2213CCC(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v15, 0);
      break;
    case 29:
      v15 = sub_2213CCC(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v15, 0);
      break;
    case 30:
      v15 = sub_2213CCC(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v15, 0);
      break;
    case 32:
      v15 = sub_2213CCC(AllFieldTargetAggregator_TypeInfo);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v15, 0);
      break;
    default:
      v15 = sub_2213CCC(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v15, 0);
      break;
  }
  v16 = (TargetAggregator_Args_o *)sub_2213CCC(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v16, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0);
  if ( !v15 )
    sub_2213CDC(v17, v18);
  *(_QWORD *)(v15 + 16) = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)v16, v19, v20, v21, v22, v23, v24);
  return (TargetAggregator_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool Target__IsActorPlayerSide(BattleData_o *bData, int32_t actorId, int32_t taskActorType, const MethodInfo *method)
{
  if ( actorId < 0 )
    return (taskActorType != 5) & !Target__CheckAressSkill(bData, taskActorType, *(const MethodInfo **)&taskActorType);
  if ( !bData )
    sub_2213CDC(0, *(_QWORD *)&actorId);
  return BattleData__isPlayerID(bData, actorId, 0);
}


bool Target__IsEnemyAllTarget(int32_t targetType, const MethodInfo *method)
{
  unsigned int v2; // w9

  v2 = targetType & 0xFFFFFFFB;
  return targetType == 6 || v2 == 8 || targetType == 15 || v2 == 26 || targetType == 32;
}


bool Target__IsFuncTargetTypeNoTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 33;
}


bool Target__IsPartyAllTarget(int32_t targetType, const MethodInfo *method)
{
  return targetType == 9 || (targetType & 0xFFFFFFFB) == 3 || targetType == 14;
}


System_Int32_array *Target__getOrderOneTargetIdArray(
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
  int v14; // w20

  if ( (byte_596F6D1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_System_Array_Reverse_int___);
    sub_2213A60(&int___TypeInfo);
    byte_596F6D1 = 1;
  }
  v9 = sub_2213B20(int___TypeInfo, 0);
  if ( !checkIdArray )
    goto LABEL_18;
  v11 = (System_Int32_array *)v9;
  if ( checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_37AA9F4 *)Method_System_Array_Reverse_int___);
    v12 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
    v13 = v12 - 1;
    if ( !isPrev )
      v13 = 0;
    v14 = v12 >= 1 ? v13 : v12 == 0;
    if ( v14 < SLODWORD(checkIdArray->max_length) )
    {
      v9 = sub_2213B20(int___TypeInfo, 1);
      if ( (unsigned int)v14 >= LODWORD(checkIdArray->max_length) )
        goto LABEL_19;
      v11 = (System_Int32_array *)v9;
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 24) )
        {
          *(_DWORD *)(v9 + 32) = checkIdArray->m_Items[v14];
          return v11;
        }
LABEL_19:
        sub_2213CE4(v9);
      }
LABEL_18:
      sub_2213CDC(v9, v10);
    }
  }
  return v11;
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

  return Target__getTargetIds_47416160(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0, v8);
}


System_Int32_array *Target__getTargetIds_47416160(
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
  System_Int32_array *v22; // x19
  const MethodInfo *v23; // x7
  bool IsActorPlayerSide; // w28
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v33; // x1
  __int64 v34; // x19
  const MethodInfo *v35; // x3
  __int64 AliveLogicFieldRandomTargetId; // x0
  __int64 v37; // x1
  System_Int32_array *v38; // x0
  const MethodInfo *v39; // x4
  System_Int32_array *v40; // x0
  const MethodInfo *v41; // x4
  bool isEnemyID; // w0
  const MethodInfo *v43; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v45; // x1
  __int64 v46; // x9
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  const MethodInfo *v50; // x1
  bool v51; // w8
  int v52; // w21
  BattleServantData_o *ServantData; // x0
  __int64 v54; // x1
  bool v55; // w0
  const MethodInfo *v56; // x3
  __int64 v57; // x1
  const MethodInfo *v58; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  System_Int32_array *v62; // x0
  const MethodInfo *v63; // x4
  System_Int32_array *v64; // x0
  BattleServantData_o *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x19
  System_Int32_array *v69; // x0
  __int64 v70; // x1
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  BattleServantData_o *v72; // x0
  __int64 v73; // x1
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v75; // x4
  __int64 v76; // x19
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v78; // x1
  struct DataVals_o *dataVals; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x19
  _BOOL4 v82; // w0
  bool v83; // w8
  System_Int32_array *v84; // x19
  System_Collections_Generic_List_int__o *v85; // x20
  __int64 v86; // x0
  __int64 v87; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v89; // x21
  int32_t size; // w0
  int32_t Next; // w19
  __int64 v92; // x21
  __int64 Item; // x0
  __int64 v94; // x1
  System_Int32_array *v95; // x19
  System_Collections_Generic_List_int__o *v96; // x20
  __int64 v97; // x0
  __int64 v98; // x1
  il2cpp_array_size_t v99; // x8
  unsigned __int64 v100; // x21
  int32_t v101; // w0
  int32_t v102; // w19
  __int64 v103; // x1
  System_Int32_array *v104; // x19
  System_Collections_Generic_List_int__o *v105; // x20
  __int64 v106; // x0
  __int64 v107; // x1
  il2cpp_array_size_t v108; // x8
  unsigned __int64 v109; // x22
  int32_t v110; // w0
  int32_t v111; // w19
  __int64 v112; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // [xsp+0h] [xbp-80h]
  int32_t cardIndex; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_596F6D0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596F6D0 = 1;
  }
  cardIndex = 0;
  v19 = sub_2213B20(int___TypeInfo, 0);
  v116 = v19;
  if ( !bdata )
    goto LABEL_158;
  v22 = 0;
  if ( BattleData__IsAiNpcID(bdata, actorId, 0) )
  {
    v19 = sub_2213B20(int___TypeInfo, 1);
    if ( v19 )
    {
      v22 = (System_Int32_array *)v19;
      if ( !*(_DWORD *)(v19 + 24) )
        sub_2213CE4(v19);
      *(_DWORD *)(v19 + 32) = actorId;
      goto LABEL_8;
    }
LABEL_158:
    sub_2213CDC(v19, v20);
  }
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v21);
  switch ( type )
  {
    case 0:
    case 25:
      v29 = sub_2213B20(int___TypeInfo, 1);
      v31 = v29;
      if ( !v29 )
        sub_2213CDC(0, v30);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_2213CE4(v29);
      *(_DWORD *)(v29 + 32) = actorId;
      if ( actorId != -1 )
        return (System_Int32_array *)v31;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      if ( !FieldPlayerServantIDList )
        sub_2213CDC(0, v33);
      if ( !LODWORD(FieldPlayerServantIDList->max_length) || !*(_DWORD *)(v31 + 24) )
        sub_2213CE4(FieldPlayerServantIDList);
      goto LABEL_34;
    case 1:
      v34 = sub_2213B20(int___TypeInfo, 1);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !ServantData )
        return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      if ( !v34 )
        sub_2213CDC(ServantData, v54);
      if ( !*(_DWORD *)(v34 + 24) )
        sub_2213CE4(ServantData);
      goto LABEL_81;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v22, 0);
    case 4:
      v60 = sub_2213B20(int___TypeInfo, 1);
      v34 = v60;
      if ( !v60 )
        sub_2213CDC(0, v61);
      if ( !*(_DWORD *)(v60 + 24) )
        sub_2213CE4(v60);
      goto LABEL_70;
    case 6:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      else
        return BattleData__getFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0);
    case 7:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getEnemyServantIDList(bdata, 1, 0, 0);
      if ( args )
        v83 = !Target_BattleTargetArgs__IsCheckDead(args, v58);
      else
        v83 = 1;
      return BattleData__getPlayerServantIDList(bdata, v83, v22, 0);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0);
      if ( args )
        v51 = !Target_BattleTargetArgs__IsCheckDead(args, v50);
      else
        v51 = 1;
      return BattleData__getPlayerServantIDList(bdata, v51, 0, 0);
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
                           v23);
      if ( !TargetAggregator )
        sub_2213CDC(0, v26);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, void *))TargetAggregator->klass[1]._1.image)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.gc_desc);
    case 11:
      v116 = sub_2213B20(int___TypeInfo, 1);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v43);
      v46 = v116;
      if ( !v116 )
        sub_2213CDC(AliveFieldRandomTargetId, v45);
      if ( !*(_DWORD *)(v116 + 24) )
        sub_2213CE4(AliveFieldRandomTargetId);
      goto LABEL_50;
    case 13:
      v116 = sub_2213B20(int___TypeInfo, 1);
      v55 = BattleData__isEnemyID(bdata, actorId, 0);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v55, IsActorPlayerSide, v56);
      v46 = v116;
      if ( !v116 )
        sub_2213CDC(AliveFieldRandomTargetId, v57);
      if ( !*(_DWORD *)(v116 + 24) )
        sub_2213CE4(AliveFieldRandomTargetId);
LABEL_50:
      *(_DWORD *)(v46 + 32) = AliveFieldRandomTargetId;
      return (System_Int32_array *)v116;
    case 16:
      v34 = sub_2213B20(int___TypeInfo, 1);
      v72 = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !v72 )
        return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      if ( !v34 )
        sub_2213CDC(v72, v73);
      if ( !*(_DWORD *)(v34 + 24) )
        sub_2213CE4(v72);
LABEL_81:
      *(_DWORD *)(v34 + 32) = pttargetId;
      return (System_Int32_array *)v34;
    case 17:
      v47 = sub_2213B20(int___TypeInfo, 1);
      v31 = v47;
      if ( !v47 )
        sub_2213CDC(0, v48);
      if ( !*(_DWORD *)(v47 + 24) )
        sub_2213CE4(v47);
      *(_DWORD *)(v47 + 32) = actorId;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        if ( !FieldPlayerServantIDList )
          sub_2213CDC(0, v49);
        if ( !LODWORD(FieldPlayerServantIDList->max_length) || !*(_DWORD *)(v31 + 24) )
          sub_2213CE4(FieldPlayerServantIDList);
LABEL_34:
        *(_DWORD *)(v31 + 32) = FieldPlayerServantIDList->m_Items[0];
      }
      return (System_Int32_array *)v31;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v84 = AliveFieldEnemyServantIDList;
      v85 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v85,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v84 )
        sub_2213CDC(v86, v87);
      max_length = v84->max_length;
      if ( (int)max_length >= 1 )
      {
        v89 = 0;
        do
        {
          if ( v89 >= (unsigned int)max_length )
            sub_2213CE4(v86);
          v87 = (unsigned int)v84->m_Items[v89];
          if ( (_DWORD)v87 != pttargetId )
          {
            if ( !v85 )
              sub_2213CDC(v86, v87);
            v86 = sub_20047CC(v85, v87, Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(max_length) = v84->max_length;
          ++v89;
        }
        while ( (__int64)v89 < (int)max_length );
      }
      if ( !v85 )
        sub_2213CDC(v86, v87);
      size = v85->fields._size;
      if ( !size )
        return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      Next = BattleRandom__getNext(size, 0);
      v92 = sub_2213B20(int___TypeInfo, 1);
      v116 = v92;
      Item = System_Collections_Generic_List_int___get_Item(
               v85,
               Next,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v92 )
        sub_2213CDC(Item, v94);
      if ( !*(_DWORD *)(v92 + 24) )
        sub_2213CE4(Item);
      goto LABEL_140;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v104 = AliveFieldPlayerServantIDList;
      v105 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v105,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v104 )
        sub_2213CDC(v106, v107);
      v108 = v104->max_length;
      if ( (int)v108 >= 1 )
      {
        v109 = 0;
        do
        {
          if ( v109 >= (unsigned int)v108 )
            sub_2213CE4(v106);
          v107 = (unsigned int)v104->m_Items[v109];
          if ( (_DWORD)v107 != actorId )
          {
            if ( !v105 )
              sub_2213CDC(v106, v107);
            v106 = sub_20047CC(v105, v107, Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v108) = v104->max_length;
          ++v109;
        }
        while ( (__int64)v109 < (int)v108 );
      }
      if ( !v105 )
        sub_2213CDC(v106, v107);
      v110 = v105->fields._size;
      if ( !v110 )
        return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      v111 = BattleRandom__getNext(v110, 0);
      v92 = sub_2213B20(int___TypeInfo, 1);
      v116 = v92;
      Item = System_Collections_Generic_List_int___get_Item(
               v105,
               v111,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v92 )
        sub_2213CDC(Item, v112);
      if ( !*(_DWORD *)(v92 + 24) )
        sub_2213CE4(Item);
      goto LABEL_140;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        v64 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      else
        v64 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0);
      v95 = v64;
      v96 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v96,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v95 )
        sub_2213CDC(v97, v98);
      v99 = v95->max_length;
      if ( (int)v99 >= 1 )
      {
        v100 = 0;
        do
        {
          if ( v100 >= (unsigned int)v99 )
            sub_2213CE4(v97);
          v98 = (unsigned int)v95->m_Items[v100];
          if ( (_DWORD)v98 != targetId )
          {
            if ( !v96 )
              sub_2213CDC(v97, v98);
            v97 = sub_20047CC(v96, v98, Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v99) = v95->max_length;
          ++v100;
        }
        while ( (__int64)v100 < (int)v99 );
      }
      if ( !v96 )
        sub_2213CDC(v97, v98);
      v101 = v96->fields._size;
      if ( !v101 )
        return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      v102 = BattleRandom__getNext(v101, 0);
      v92 = sub_2213B20(int___TypeInfo, 1);
      v116 = v92;
      Item = System_Collections_Generic_List_int___get_Item(
               v96,
               v102,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v92 )
        sub_2213CDC(Item, v103);
      if ( !*(_DWORD *)(v92 + 24) )
        sub_2213CE4(Item);
LABEL_140:
      *(_DWORD *)(v92 + 32) = Item;
      return (System_Int32_array *)v116;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v75);
    case 22:
      v62 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v62, actorId, 0, 1, v63);
    case 23:
      v40 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v40, actorId, 1, 1, v41);
    case 24:
      v38 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0, 0, 0);
      return Target__getOrderOneTargetIdArray(v38, actorId, 1, 0, v39);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0);
    case 27:
      v65 = BattleData__getServantData(bdata, actorId, 0);
      if ( v65 && checkRevengeId )
        targetId = BattleServantData__GetRevengeTargetUniqueIdIncludeSelfDamage(v65, 0);
      if ( !BattleData__getServantData(bdata, targetId, 0) )
        return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      v66 = sub_2213B20(int___TypeInfo, 1);
      v34 = v66;
      if ( !v66 )
        sub_2213CDC(0, v67);
      if ( !*(_DWORD *)(v66 + 24) )
        sub_2213CE4(v66);
LABEL_70:
      *(_DWORD *)(v34 + 32) = targetId;
      return (System_Int32_array *)v34;
    case 31:
      v76 = sub_2213B20(int___TypeInfo, 1);
      v116 = v76;
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0);
      if ( !v76 )
        sub_2213CDC(PlayerServantFromRandomCommandCard, v78);
      if ( !*(_DWORD *)(v76 + 24) )
        sub_2213CE4(PlayerServantFromRandomCommandCard);
      *(_DWORD *)(v76 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args || (dataVals = args->fields.dataVals) == 0 )
        sub_2213CDC(PlayerServantFromRandomCommandCard, v78);
      dataVals->fields.targetCardIndex = cardIndex;
      return (System_Int32_array *)v116;
    case 33:
      v68 = sub_2213B20(int___TypeInfo, 1);
      v69 = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      if ( !v69 )
        sub_2213CDC(0, v70);
      if ( !LODWORD(v69->max_length) )
        goto LABEL_169;
      if ( !v68 )
        sub_2213CDC(v69, v70);
      if ( !*(_DWORD *)(v68 + 24) )
LABEL_169:
        sub_2213CE4(v69);
      v116 = v68;
      *(_DWORD *)(v68 + 32) = v69->m_Items[0];
      return (System_Int32_array *)v116;
    case 34:
      v34 = sub_2213B20(int___TypeInfo, 1);
      AliveLogicFieldRandomTargetId = Target__GetAliveLogicFieldRandomTargetId(bdata, 3, 1, v35);
      if ( !v34 )
        sub_2213CDC(AliveLogicFieldRandomTargetId, v37);
      if ( !*(_DWORD *)(v34 + 24) )
        sub_2213CE4(AliveLogicFieldRandomTargetId);
      *(_DWORD *)(v34 + 32) = AliveLogicFieldRandomTargetId;
      return (System_Int32_array *)v34;
    case 35:
      if ( args && args->fields._IsPlayerAttackPreselectTargetExecution_k__BackingField )
      {
        targetId = args->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField;
        v52 = 0;
      }
      else
      {
        v52 = 1;
      }
      v80 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      v81 = v80;
      if ( !v80 )
      {
        if ( (v52 & 1) != 0 )
          return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
        goto LABEL_142;
      }
      v82 = System_Linq_Enumerable__Contains_int_(
              v80,
              targetId,
              (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( ((v52 | v82) & 1) == 0 )
      {
LABEL_142:
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v81, 0);
        if ( IsNullOrEmpty )
          return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
        if ( !v81 )
          sub_2213CDC(IsNullOrEmpty, v114);
        if ( !LODWORD(v81[1].monitor) )
          sub_2213CE4(IsNullOrEmpty);
        targetId = (int32_t)v81[2].klass;
        if ( targetId == -1 )
          return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
        goto LABEL_146;
      }
      if ( !v82 )
        return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
LABEL_146:
      v27 = sub_2213B20(int___TypeInfo, 1);
      if ( !v27 )
        sub_2213CDC(0, v115);
      if ( !*(_DWORD *)(v27 + 24) )
        sub_2213CE4(v27);
      *(_DWORD *)(v27 + 32) = targetId;
      return (System_Int32_array *)v27;
    default:
      return (System_Int32_array *)v116;
  }
}


bool Target__isAllTargets(int32_t targetType, const MethodInfo *method)
{
  return targetType == 6
      || (targetType & 0xFFFFFFFB) == 3
      || (targetType & 0xFFFFFFFE) == 8
      || targetType == 10
      || (targetType & 0xFFFFFFFD) == 12
      || targetType == 15
      || targetType == 26
      || targetType == 32;
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
  return targetType == 6
      || (targetType & 0xFFFFFFFE) == 4
      || (targetType & 0xFFFFFFFB) == 8
      || (targetType & 0xFFFFFFFD) == 13
      || targetType == 20
      || targetType == 27
      || targetType == 30;
}


bool Target__isFieldEnemy(int32_t targetType, const MethodInfo *method)
{
  return vmaxv_u16(vmovn_s32(vceqq_s32(vdupq_n_s32(targetType), (int32x4_t)xmmword_E9D8F0))) & 1
       | ((targetType & 0xFFFFFFF6) == 4);
}


bool Target__isFieldPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)targetType < 4
      || (unsigned int)(targetType - 9) < 3
      || (targetType & 0xFFFFFFFC) == 16
      || (unsigned int)(targetType - 21) < 5;
}


bool Target__isPlayer(int32_t targetType, const MethodInfo *method)
{
  return (unsigned int)targetType < 4
      || (unsigned int)(targetType - 9) < 3
      || targetType == 7
      || targetType == 14
      || (targetType & 0xFFFFFFFC) == 16
      || (unsigned int)(targetType - 21) < 5;
}


bool Target__isSubChoose(int32_t targetType, const MethodInfo *method)
{
  return (targetType & 0xFFFFFFFE) == 16;
}


void Target_BattleTargetArgs___ctor(Target_BattleTargetArgs_o *this, DataVals_o *dataVals, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  this->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.dataVals = dataVals;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)dataVals, v5, v6, v7, v8, v9, v10);
}


bool Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_2213CDC(0, method);
  return DataVals__isCheckDead(dataVals, 0);
}


void Target_BattleTargetArgs__SetPlayerAttackPreselectTargetUniqueId(
        Target_BattleTargetArgs_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  this->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField = uniqueId;
  this->fields._IsPlayerAttackPreselectTargetExecution_k__BackingField = 1;
}


// local variable allocation has failed, the output may be wrong!
void Target_BattleTargetArgs__SetTargetCardIndex(
        Target_BattleTargetArgs_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals; // x8

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_2213CDC(this, *(_QWORD *)&cardIndex);
  dataVals->fields.targetCardIndex = cardIndex;
}


System_Int32_array *Target_BattleTargetArgs__get_EnemyRange(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  struct System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  long double v12; // q0
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_596F6D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_596F6D4 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_2213CDC(0, method);
    enemyRange = DataVals__GetParamArray(dataVals, 138, 0);
    if ( !enemyRange )
    {
      v13 = Method_System_Array_Empty_int___;
      v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v14 )
      {
        sub_224B964(Method_System_Array_Empty_int___);
        v14 = v13[7];
      }
      v15 = *(_QWORD *)(v14 + 16);
      if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
        v15 = sub_224B908(v12);
      if ( !*(_DWORD *)(v15 + 228) )
        *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(v15, v5, v6);
      v16 = *(_QWORD *)(v13[7] + 16LL);
      if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
        v16 = sub_224B908(v12);
      enemyRange = **(struct System_Int32_array ***)(v16 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.enemyRange,
      (int32_t)enemyRange,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return enemyRange;
}


bool Target_BattleTargetArgs__get_HasPlayerAttackPreselectTargetUniqueId(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField >= 0;
}


bool Target_BattleTargetArgs__get_IsPlayerAttackPreselectTargetExecution(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayerAttackPreselectTargetExecution_k__BackingField;
}


int32_t Target_BattleTargetArgs__get_PlayerAttackPreselectTargetUniqueId(
        Target_BattleTargetArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField;
}


void Target_BattleTargetArgs__set_IsPlayerAttackPreselectTargetExecution(
        Target_BattleTargetArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayerAttackPreselectTargetExecution_k__BackingField = value;
}


void Target_BattleTargetArgs__set_PlayerAttackPreselectTargetUniqueId(
        Target_BattleTargetArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField = value;
}


void Target___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F6D5 & 1) == 0 )
  {
    sub_2213A60(&Target___c_TypeInfo);
    byte_596F6D5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(Target___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Target___c_TypeInfo->static_fields->__9 = (struct Target___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)Target___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void Target___c___ctor(Target___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t Target___c___GetAliveLogicFieldRandomTargetId_b__9_0(
        Target___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.uniqueId;
}