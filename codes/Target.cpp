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
  if ( (byte_4C26212 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    bData = (BattleData_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C26212 = 1;
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
    v7 = sub_1C7DBA4(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4(v3);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1C2D6EC(bData, *(_QWORD *)&taskActorType);
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
  __int64 v8; // x1
  __int64 v9; // x2

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
    sub_1C2D6EC(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1C2D6F4(Next, v8, v9);
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
  __int64 v19; // x1
  __int64 v20; // x2

  v6 = battleData;
  if ( (byte_4C2620F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C2D490(&Method_Target___c__GetAliveLogicFieldRandomTargetId_b__8_0__);
    battleData = (BattleData_o *)sub_1C2D490(&Target___c_TypeInfo);
    byte_4C2620F = 1;
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
    _9__8_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v11, Method_Target___c__GetAliveLogicFieldRandomTargetId_b__8_0__, 0);
    static_fields = Target___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_BattleServantData__int__o *)_9__8_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__8_0,
                                                               (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  battleData = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16, 0);
  if ( ((unsigned __int8)battleData & 1) != 0 )
    return -1;
  if ( !v16 )
LABEL_15:
    sub_1C2D6EC(battleData, *(_QWORD *)&targetFlag);
  Next = BattleRandom__getNext(v16->max_length, 0);
  if ( (unsigned int)Next >= LODWORD(v16->max_length) )
    sub_1C2D6F4(Next, v19, v20);
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
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C26213 & 1) == 0 )
  {
    sub_1C2D490(&AllFieldTargetAggregator_TypeInfo);
    sub_1C2D490(&TargetAggregator_Args_TypeInfo);
    sub_1C2D490(&NoneTargetAggregator_TypeInfo);
    sub_1C2D490(&OpponentAllFieldTargetAggregator_TypeInfo);
    sub_1C2D490(&OpponentFullTargetAggregator_TypeInfo);
    sub_1C2D490(&OpponentOtherFullTargetAggregator_TypeInfo);
    sub_1C2D490(&OpponentOtherTargetAggregator_TypeInfo);
    sub_1C2D490(&OpponentRangeAggregator_TypeInfo);
    sub_1C2D490(&PartyAllFieldTargetAggregator_TypeInfo);
    sub_1C2D490(&PartyFullTargetAggregator_TypeInfo);
    sub_1C2D490(&PartyLowsetHpRateTargetChoicer_TypeInfo);
    sub_1C2D490(&PartyLowsetHpValueTargetChoicer_TypeInfo);
    sub_1C2D490(&PartyOneOtherTargetAggregator_TypeInfo);
    sub_1C2D490(&PartyOtherFullTargetAggregator_TypeInfo);
    sub_1C2D490(&PartyOtherTargetAggregator_TypeInfo);
    byte_4C26213 = 1;
  }
  switch ( type )
  {
    case 3:
      v15 = sub_1C2D6DC(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 6:
      v15 = sub_1C2D6DC(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 7:
      v15 = sub_1C2D6DC(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v15, 0);
      break;
    case 8:
      v15 = sub_1C2D6DC(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v15, 0);
      break;
    case 9:
      v15 = sub_1C2D6DC(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v15, 0);
      break;
    case 10:
      v15 = sub_1C2D6DC(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v15, 0);
      break;
    case 12:
      v15 = sub_1C2D6DC(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v15, 0);
      break;
    case 14:
      v15 = sub_1C2D6DC(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 15:
      v15 = sub_1C2D6DC(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 28:
      v15 = sub_1C2D6DC(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v15, 0);
      break;
    case 29:
      v15 = sub_1C2D6DC(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v15, 0);
      break;
    case 30:
      v15 = sub_1C2D6DC(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v15, 0);
      break;
    case 32:
      v15 = sub_1C2D6DC(AllFieldTargetAggregator_TypeInfo);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v15, 0);
      break;
    default:
      v15 = sub_1C2D6DC(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v15, 0);
      break;
  }
  v16 = (TargetAggregator_Args_o *)sub_1C2D6DC(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v16, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0);
  if ( !v15 )
    sub_1C2D6EC(v17, v18);
  *(_QWORD *)(v15 + 16) = v16;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 16), (int32_t)v16, v19, v20);
  return (TargetAggregator_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool Target__IsActorPlayerSide(BattleData_o *bData, int32_t actorId, int32_t taskActorType, const MethodInfo *method)
{
  if ( actorId < 0 )
    return (taskActorType != 5) & !Target__CheckAressSkill(bData, taskActorType, *(const MethodInfo **)&taskActorType);
  if ( !bData )
    sub_1C2D6EC(0, actorId);
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
  __int64 v10; // x1
  System_Int32_array *v11; // x21
  int32_t v12; // w0
  int v13; // w10
  int v14; // w20
  __int64 v15; // x2

  if ( (byte_4C26211 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_System_Array_Reverse_int___);
    sub_1C2D490(&int___TypeInfo);
    byte_4C26211 = 1;
  }
  v9 = sub_1C2D538(int___TypeInfo, 0);
  if ( !checkIdArray )
    goto LABEL_18;
  v11 = (System_Int32_array *)v9;
  if ( checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_308F35C *)Method_System_Array_Reverse_int___);
    v12 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
    v13 = v12 - 1;
    if ( !isPrev )
      v13 = 0;
    v14 = v12 >= 1 ? v13 : v12 == 0;
    if ( v14 < SLODWORD(checkIdArray->max_length) )
    {
      v9 = sub_1C2D538(int___TypeInfo, 1);
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
        sub_1C2D6F4(v9, v10, v15);
      }
LABEL_18:
      sub_1C2D6EC(v9, v10);
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

  return Target__getTargetIds_40233328(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0, v8);
}


System_Int32_array *Target__getTargetIds_40233328(
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
  __int64 v23; // x2
  const MethodInfo *v24; // x7
  bool IsActorPlayerSide; // w29
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v27; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x19
  const MethodInfo *v37; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Int32_array *v41; // x0
  const MethodInfo *v42; // x4
  System_Int32_array *v43; // x0
  const MethodInfo *v44; // x4
  __int64 v45; // x1
  DataVals_o *v46; // x0
  bool v47; // w8
  __int64 v48; // x1
  bool isEnemyID; // w0
  const MethodInfo *v50; // x3
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  BattleServantData_o *ServantData; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  bool v64; // w0
  const MethodInfo *v65; // x3
  __int64 v66; // x1
  __int64 v67; // x2
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  System_Int32_array *v69; // x0
  const MethodInfo *v70; // x4
  System_Int32_array *v71; // x0
  BattleServantData_o *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x19
  System_Int32_array *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  BattleServantData_o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v85; // x4
  __int64 v86; // x21
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  struct DataVals_o *v90; // x8
  DataVals_o *dataVals; // x0
  bool v92; // w8
  System_Int32_array *v93; // x21
  System_Collections_Generic_List_int__o *v94; // x20
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v99; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v101; // x9
  __int64 size; // x10
  int32_t v103; // w0
  int32_t Next; // w21
  __int64 v105; // x1
  __int64 v106; // x2
  System_Int32_array *v107; // x21
  System_Collections_Generic_List_int__o *v108; // x20
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  il2cpp_array_size_t v112; // x8
  unsigned __int64 v113; // x19
  struct System_Int32_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  int32_t v117; // w0
  int32_t v118; // w21
  __int64 v119; // x1
  __int64 v120; // x2
  System_Int32_array *v121; // x22
  System_Collections_Generic_List_int__o *v122; // x20
  __int64 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  il2cpp_array_size_t v126; // x8
  unsigned __int64 v127; // x19
  struct System_Int32_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  int32_t v131; // w0
  int32_t v132; // w21
  __int64 v133; // x1
  __int64 v134; // x2
  System_Int32_array *v136; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C26210 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C26210 = 1;
  }
  cardIndex = 0;
  v19 = sub_1C2D538(int___TypeInfo, 0);
  v136 = (System_Int32_array *)v19;
  if ( !bdata )
    goto LABEL_150;
  v22 = 0;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0) )
    goto LABEL_8;
  v19 = sub_1C2D538(int___TypeInfo, 1);
  if ( !v19 )
LABEL_150:
    sub_1C2D6EC(v19, v20);
  v22 = (System_Int32_array *)v19;
  if ( !*(_DWORD *)(v19 + 24) )
    sub_1C2D6F4(v19, v20, v23);
  *(_DWORD *)(v19 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v21);
  switch ( type )
  {
    case 0:
    case 25:
      v29 = sub_1C2D538(int___TypeInfo, 1);
      v32 = v29;
      if ( !v29 )
        sub_1C2D6EC(0, v30);
      if ( !*(_DWORD *)(v29 + 24) )
        sub_1C2D6F4(v29, v30, v31);
      *(_DWORD *)(v29 + 32) = actorId;
      v136 = (System_Int32_array *)v29;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        if ( !FieldPlayerServantIDList )
          sub_1C2D6EC(0, v34);
        if ( !LODWORD(FieldPlayerServantIDList->max_length) )
          sub_1C2D6F4(FieldPlayerServantIDList, v34, v35);
        if ( !*(_DWORD *)(v32 + 24) )
          sub_1C2D6F4(FieldPlayerServantIDList, v34, v35);
        goto LABEL_39;
      }
      return v136;
    case 1:
      v36 = sub_1C2D538(int___TypeInfo, 1);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !ServantData )
        return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      if ( !v36 )
        sub_1C2D6EC(ServantData, v59);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(ServantData, v59, v60);
      goto LABEL_77;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v22, 0);
    case 4:
      v61 = sub_1C2D538(int___TypeInfo, 1);
      v36 = v61;
      if ( !v61 )
        sub_1C2D6EC(0, v62);
      if ( !*(_DWORD *)(v61 + 24) )
        sub_1C2D6F4(v61, v62, v63);
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
          sub_1C2D6EC(0, v48);
        v92 = !DataVals__isCheckDead(dataVals, 0);
      }
      else
      {
        v92 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v92, v22, 0);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0);
      if ( args )
      {
        v46 = args->fields.dataVals;
        if ( !v46 )
          sub_1C2D6EC(0, v45);
        v47 = !DataVals__isCheckDead(v46, 0);
      }
      else
      {
        v47 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v47, 0, 0);
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
                           v24);
      if ( !TargetAggregator )
        sub_1C2D6EC(0, v27);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, void *))TargetAggregator->klass[1]._1.image)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.gc_desc);
    case 11:
      v36 = sub_1C2D538(int___TypeInfo, 1);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v50);
      if ( !v36 )
        sub_1C2D6EC(AliveFieldRandomTargetId, v51);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(AliveFieldRandomTargetId, v51, v52);
      goto LABEL_140;
    case 13:
      v36 = sub_1C2D538(int___TypeInfo, 1);
      v64 = BattleData__isEnemyID(bdata, actorId, 0);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, !v64, IsActorPlayerSide, v65);
      if ( !v36 )
        sub_1C2D6EC(AliveFieldRandomTargetId, v66);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(AliveFieldRandomTargetId, v66, v67);
      goto LABEL_140;
    case 16:
      v36 = sub_1C2D538(int___TypeInfo, 1);
      v81 = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !v81 )
        return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      if ( !v36 )
        sub_1C2D6EC(v81, v82);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(v81, v82, v83);
LABEL_77:
      *(_DWORD *)(v36 + 32) = pttargetId;
      return (System_Int32_array *)v36;
    case 17:
      v53 = sub_1C2D538(int___TypeInfo, 1);
      v32 = v53;
      if ( !v53 )
        sub_1C2D6EC(0, v54);
      if ( !*(_DWORD *)(v53 + 24) )
        sub_1C2D6F4(v53, v54, v55);
      *(_DWORD *)(v53 + 32) = actorId;
      v136 = (System_Int32_array *)v53;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        if ( !FieldPlayerServantIDList )
          sub_1C2D6EC(0, v56);
        if ( !LODWORD(FieldPlayerServantIDList->max_length) )
          sub_1C2D6F4(FieldPlayerServantIDList, v56, v57);
        if ( !*(_DWORD *)(v32 + 24) )
          sub_1C2D6F4(FieldPlayerServantIDList, v56, v57);
LABEL_39:
        v136 = (System_Int32_array *)v32;
        *(_DWORD *)(v32 + 32) = FieldPlayerServantIDList->m_Items[0];
      }
      return v136;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v93 = AliveFieldEnemyServantIDList;
      v94 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v94,
        (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v93 )
        sub_1C2D6EC(v95, v96);
      max_length = v93->max_length;
      if ( (int)max_length >= 1 )
      {
        v99 = 0;
        do
        {
          if ( v99 >= (unsigned int)max_length )
            sub_1C2D6F4(v95, v96, v97);
          v96 = (unsigned int)v93->m_Items[v99];
          if ( (_DWORD)v96 != pttargetId )
          {
            if ( !v94 )
              sub_1C2D6EC(v95, v96);
            items = v94->fields._items;
            v101 = Method_System_Collections_Generic_List_int__Add__;
            ++v94->fields._version;
            if ( !items )
              sub_1C2D6EC(v95, v96);
            size = v94->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v94,
                v96,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v94->fields._size = size + 1;
              items->m_Items[size] = v96;
            }
          }
          LODWORD(max_length) = v93->max_length;
          ++v99;
        }
        while ( (__int64)v99 < (int)max_length );
      }
      if ( !v94 )
        sub_1C2D6EC(v95, v96);
      v103 = v94->fields._size;
      if ( !v103 )
        return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      Next = BattleRandom__getNext(v103, 0);
      v36 = sub_1C2D538(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v94,
                                   Next,
                                   (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v36 )
        sub_1C2D6EC(AliveFieldRandomTargetId, v105);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(AliveFieldRandomTargetId, v105, v106);
      goto LABEL_140;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v121 = AliveFieldPlayerServantIDList;
      v122 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v122,
        (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v121 )
        sub_1C2D6EC(v123, v124);
      v126 = v121->max_length;
      if ( (int)v126 >= 1 )
      {
        v127 = 0;
        do
        {
          if ( v127 >= (unsigned int)v126 )
            sub_1C2D6F4(v123, v124, v125);
          v124 = (unsigned int)v121->m_Items[v127];
          if ( (_DWORD)v124 != actorId )
          {
            if ( !v122 )
              sub_1C2D6EC(v123, v124);
            v128 = v122->fields._items;
            v129 = Method_System_Collections_Generic_List_int__Add__;
            ++v122->fields._version;
            if ( !v128 )
              sub_1C2D6EC(v123, v124);
            v130 = v122->fields._size;
            if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v122,
                v124,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
            }
            else
            {
              v122->fields._size = v130 + 1;
              v128->m_Items[v130] = v124;
            }
          }
          LODWORD(v126) = v121->max_length;
          ++v127;
        }
        while ( (__int64)v127 < (int)v126 );
      }
      if ( !v122 )
        sub_1C2D6EC(v123, v124);
      v131 = v122->fields._size;
      if ( !v131 )
        return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      v132 = BattleRandom__getNext(v131, 0);
      v36 = sub_1C2D538(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v122,
                                   v132,
                                   (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v36 )
        sub_1C2D6EC(AliveFieldRandomTargetId, v133);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(AliveFieldRandomTargetId, v133, v134);
      goto LABEL_140;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        v71 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      else
        v71 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0);
      v107 = v71;
      v108 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v108,
        (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v107 )
        sub_1C2D6EC(v109, v110);
      v112 = v107->max_length;
      if ( (int)v112 >= 1 )
      {
        v113 = 0;
        do
        {
          if ( v113 >= (unsigned int)v112 )
            sub_1C2D6F4(v109, v110, v111);
          v110 = (unsigned int)v107->m_Items[v113];
          if ( (_DWORD)v110 != targetId )
          {
            if ( !v108 )
              sub_1C2D6EC(v109, v110);
            v114 = v108->fields._items;
            v115 = Method_System_Collections_Generic_List_int__Add__;
            ++v108->fields._version;
            if ( !v114 )
              sub_1C2D6EC(v109, v110);
            v116 = v108->fields._size;
            if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v108,
                v110,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
            }
            else
            {
              v108->fields._size = v116 + 1;
              v114->m_Items[v116] = v110;
            }
          }
          LODWORD(v112) = v107->max_length;
          ++v113;
        }
        while ( (__int64)v113 < (int)v112 );
      }
      if ( !v108 )
        sub_1C2D6EC(v109, v110);
      v117 = v108->fields._size;
      if ( !v117 )
        return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      v118 = BattleRandom__getNext(v117, 0);
      v36 = sub_1C2D538(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v108,
                                   v118,
                                   (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v36 )
        sub_1C2D6EC(AliveFieldRandomTargetId, v119);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(AliveFieldRandomTargetId, v119, v120);
      goto LABEL_140;
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v85);
    case 22:
      v69 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v69, actorId, 0, 1, v70);
    case 23:
      v43 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v43, actorId, 1, 1, v44);
    case 24:
      v41 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0, 0, 0);
      return Target__getOrderOneTargetIdArray(v41, actorId, 1, 0, v42);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0);
    case 27:
      v72 = BattleData__getServantData(bdata, actorId, 0);
      if ( v72 && checkRevengeId )
        targetId = BattleServantData__getRevengeTargetUniqueId(v72, 0);
      if ( BattleData__getServantData(bdata, targetId, 0) )
      {
        v73 = sub_1C2D538(int___TypeInfo, 1);
        v36 = v73;
        if ( !v73 )
          sub_1C2D6EC(0, v74);
        if ( !*(_DWORD *)(v73 + 24) )
          sub_1C2D6F4(v73, v74, v75);
LABEL_66:
        *(_DWORD *)(v36 + 32) = targetId;
        return (System_Int32_array *)v36;
      }
      else
      {
        return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      }
    case 31:
      v86 = sub_1C2D538(int___TypeInfo, 1);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0);
      if ( !v86 )
        sub_1C2D6EC(PlayerServantFromRandomCommandCard, v88);
      if ( !*(_DWORD *)(v86 + 24) )
        sub_1C2D6F4(PlayerServantFromRandomCommandCard, v88, v89);
      *(_DWORD *)(v86 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1C2D6EC(PlayerServantFromRandomCommandCard, v88);
      v90 = args->fields.dataVals;
      if ( !v90 )
        sub_1C2D6EC(PlayerServantFromRandomCommandCard, v88);
      v136 = (System_Int32_array *)v86;
      v90->fields.targetCardIndex = cardIndex;
      return v136;
    case 33:
      v76 = sub_1C2D538(int___TypeInfo, 1);
      v77 = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      if ( !v77 )
        sub_1C2D6EC(0, v78);
      if ( !LODWORD(v77->max_length) )
        sub_1C2D6F4(v77, v78, v79);
      if ( !v76 )
        sub_1C2D6EC(v77, v78);
      if ( !*(_DWORD *)(v76 + 24) )
        sub_1C2D6F4(v77, v78, v79);
      v136 = (System_Int32_array *)v76;
      *(_DWORD *)(v76 + 32) = v77->m_Items[0];
      return v136;
    case 34:
      v36 = sub_1C2D538(int___TypeInfo, 1);
      AliveFieldRandomTargetId = Target__GetAliveLogicFieldRandomTargetId(bdata, 3, 1, v37);
      if ( !v36 )
        sub_1C2D6EC(AliveFieldRandomTargetId, v39);
      if ( !*(_DWORD *)(v36 + 24) )
        sub_1C2D6F4(AliveFieldRandomTargetId, v39, v40);
LABEL_140:
      *(_DWORD *)(v36 + 32) = AliveFieldRandomTargetId;
      return (System_Int32_array *)v36;
    default:
      return v136;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)dataVals, v5, v6);
}


bool Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, cardIndex);
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

  if ( (byte_4C26214 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C26214 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1C2D6EC(0, method);
    enemyRange = DataVals__GetParamArray(dataVals, 135, 0);
    if ( !enemyRange )
    {
      v8 = Method_System_Array_Empty_int___;
      v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v9 )
      {
        sub_1C7DC00(Method_System_Array_Empty_int___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C7DBA4(inited);
      if ( !*(_DWORD *)(v10 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C7DBA4(inited);
      enemyRange = **(struct System_Int32_array ***)(v11 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6);
  }
  return enemyRange;
}


void Target___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C26215 & 1) == 0 )
  {
    sub_1C2D490(&Target___c_TypeInfo);
    byte_4C26215 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(Target___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Target___c_TypeInfo->static_fields->__9 = (struct Target___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)Target___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return x->fields.uniqueId;
}