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
  if ( (byte_4E765C4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    bData = (BattleData_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E765C4 = 1;
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
    v7 = sub_1CE513C(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1CE513C(v3);
  bData = **(BattleData_o ***)(v8 + 184);
  if ( !bData
    || (bData = (BattleData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)bData,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1D0F30C(bData, *(_QWORD *)&taskActorType);
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
    sub_1D0F30C(battleData, isEnemyID);
  Next = BattleRandom__getNext((int32_t)v5[1].monitor, 0);
  if ( (unsigned int)Next >= LODWORD(v5[1].monitor) )
    sub_1D0F314(Next);
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
  System_Func_object__int__o *_9__9_0; // x20
  Il2CppObject *v11; // x21
  struct Target___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *v20; // x19
  __int64 Next; // x0

  v6 = battleData;
  if ( (byte_4E765C1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&System_Func_BattleServantData__int__TypeInfo);
    sub_1D0F0B4(&Method_Target___c__GetAliveLogicFieldRandomTargetId_b__9_0__);
    battleData = (BattleData_o *)sub_1D0F0B4(&Target___c_TypeInfo);
    byte_4E765C1 = 1;
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
  _9__9_0 = (System_Func_object__int__o *)v8->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = Target___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_0, v11, Method_Target___c__GetAliveLogicFieldRandomTargetId_b__9_0__, 0);
    static_fields = Target___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_BattleServantData__int__o *)_9__9_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  battleData = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v20, 0);
  if ( ((unsigned __int8)battleData & 1) != 0 )
    return -1;
  if ( !v20 )
LABEL_15:
    sub_1D0F30C(battleData, *(_QWORD *)&targetFlag);
  Next = BattleRandom__getNext(v20->max_length, 0);
  if ( (unsigned int)Next >= LODWORD(v20->max_length) )
    sub_1D0F314(Next);
  return v20->m_Items[(int)Next];
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4E765C5 & 1) == 0 )
  {
    sub_1D0F0B4(&AllFieldTargetAggregator_TypeInfo);
    sub_1D0F0B4(&TargetAggregator_Args_TypeInfo);
    sub_1D0F0B4(&NoneTargetAggregator_TypeInfo);
    sub_1D0F0B4(&OpponentAllFieldTargetAggregator_TypeInfo);
    sub_1D0F0B4(&OpponentFullTargetAggregator_TypeInfo);
    sub_1D0F0B4(&OpponentOtherFullTargetAggregator_TypeInfo);
    sub_1D0F0B4(&OpponentOtherTargetAggregator_TypeInfo);
    sub_1D0F0B4(&OpponentRangeAggregator_TypeInfo);
    sub_1D0F0B4(&PartyAllFieldTargetAggregator_TypeInfo);
    sub_1D0F0B4(&PartyFullTargetAggregator_TypeInfo);
    sub_1D0F0B4(&PartyLowsetHpRateTargetChoicer_TypeInfo);
    sub_1D0F0B4(&PartyLowsetHpValueTargetChoicer_TypeInfo);
    sub_1D0F0B4(&PartyOneOtherTargetAggregator_TypeInfo);
    sub_1D0F0B4(&PartyOtherFullTargetAggregator_TypeInfo);
    sub_1D0F0B4(&PartyOtherTargetAggregator_TypeInfo);
    byte_4E765C5 = 1;
  }
  switch ( type )
  {
    case 3:
      v15 = sub_1D0F300(PartyAllFieldTargetAggregator_TypeInfo);
      PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 6:
      v15 = sub_1D0F300(OpponentAllFieldTargetAggregator_TypeInfo);
      OpponentAllFieldTargetAggregator___ctor((OpponentAllFieldTargetAggregator_o *)v15, 0);
      break;
    case 7:
      v15 = sub_1D0F300(PartyFullTargetAggregator_TypeInfo);
      PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)v15, 0);
      break;
    case 8:
      v15 = sub_1D0F300(OpponentFullTargetAggregator_TypeInfo);
      OpponentFullTargetAggregator___ctor((OpponentFullTargetAggregator_o *)v15, 0);
      break;
    case 9:
      v15 = sub_1D0F300(PartyOtherTargetAggregator_TypeInfo);
      PartyOtherTargetAggregator___ctor((PartyOtherTargetAggregator_o *)v15, 0);
      break;
    case 10:
      v15 = sub_1D0F300(PartyOneOtherTargetAggregator_TypeInfo);
      PartyOneOtherTargetAggregator___ctor((PartyOneOtherTargetAggregator_o *)v15, 0);
      break;
    case 12:
      v15 = sub_1D0F300(OpponentOtherTargetAggregator_TypeInfo);
      OpponentOtherTargetAggregator___ctor((OpponentOtherTargetAggregator_o *)v15, 0);
      break;
    case 14:
      v15 = sub_1D0F300(PartyOtherFullTargetAggregator_TypeInfo);
      PartyOtherFullTargetAggregator___ctor((PartyOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 15:
      v15 = sub_1D0F300(OpponentOtherFullTargetAggregator_TypeInfo);
      OpponentOtherFullTargetAggregator___ctor((OpponentOtherFullTargetAggregator_o *)v15, 0);
      break;
    case 28:
      v15 = sub_1D0F300(PartyLowsetHpValueTargetChoicer_TypeInfo);
      PartyLowsetHpValueTargetChoicer___ctor((PartyLowsetHpValueTargetChoicer_o *)v15, 0);
      break;
    case 29:
      v15 = sub_1D0F300(PartyLowsetHpRateTargetChoicer_TypeInfo);
      PartyLowsetHpRateTargetChoicer___ctor((PartyLowsetHpRateTargetChoicer_o *)v15, 0);
      break;
    case 30:
      v15 = sub_1D0F300(OpponentRangeAggregator_TypeInfo);
      OpponentRangeAggregator___ctor((OpponentRangeAggregator_o *)v15, 0);
      break;
    case 32:
      v15 = sub_1D0F300(AllFieldTargetAggregator_TypeInfo);
      AllFieldTargetAggregator___ctor((AllFieldTargetAggregator_o *)v15, 0);
      break;
    default:
      v15 = sub_1D0F300(NoneTargetAggregator_TypeInfo);
      NoneTargetAggregator___ctor((NoneTargetAggregator_o *)v15, 0);
      break;
  }
  v16 = (TargetAggregator_Args_o *)sub_1D0F300(TargetAggregator_Args_TypeInfo);
  TargetAggregator_Args___ctor(v16, battleData, actorId, targetId, pttargetId, taskActorType, battleTargetArgs, 0);
  if ( !v15 )
    sub_1D0F30C(v17, v18);
  *(_QWORD *)(v15 + 16) = v16;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)v16, v19, v20, v21, v22, v23, v24);
  return (TargetAggregator_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool Target__IsActorPlayerSide(BattleData_o *bData, int32_t actorId, int32_t taskActorType, const MethodInfo *method)
{
  if ( actorId < 0 )
    return (taskActorType != 5) & !Target__CheckAressSkill(bData, taskActorType, *(const MethodInfo **)&taskActorType);
  if ( !bData )
    sub_1D0F30C(0, actorId);
  return BattleData__isPlayerID(bData, actorId, 0);
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

  if ( (byte_4E765C3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_IndexOf_int___);
    sub_1D0F0B4(&Method_System_Array_Reverse_int___);
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E765C3 = 1;
  }
  v9 = sub_1D0F15C(int___TypeInfo, 0);
  if ( !checkIdArray )
    goto LABEL_18;
  v11 = (System_Int32_array *)v9;
  if ( checkIdArray->max_length )
  {
    if ( isOrderDesc )
      System_Array__Reverse_int_(checkIdArray, (const MethodInfo_320E348 *)Method_System_Array_Reverse_int___);
    v12 = System_Array__IndexOf_int_(
            checkIdArray,
            excludeId,
            (const MethodInfo_33590E4 *)Method_System_Array_IndexOf_int___);
    v13 = v12 - 1;
    if ( !isPrev )
      v13 = 0;
    v14 = v12 >= 1 ? v13 : v12 == 0;
    if ( v14 < SLODWORD(checkIdArray->max_length) )
    {
      v9 = sub_1D0F15C(int___TypeInfo, 1);
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
        sub_1D0F314(v9);
      }
LABEL_18:
      sub_1D0F30C(v9, v10);
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

  return Target__getTargetIds_41813652(bdata, actorId, targetId, pttargetId, tgType, 0, 0, tvals, 0, 0, v8);
}


System_Int32_array *Target__getTargetIds_41813652(
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
  bool IsActorPlayerSide; // w19
  TargetAggregator_o *TargetAggregator; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v32; // x1
  __int64 v33; // x19
  const MethodInfo *v34; // x3
  __int64 AliveFieldRandomTargetId; // x0
  __int64 v36; // x1
  System_Int32_array *v37; // x0
  const MethodInfo *v38; // x4
  System_Int32_array *v39; // x0
  const MethodInfo *v40; // x4
  bool isEnemyID; // w0
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  DataVals_o *v48; // x0
  bool v49; // w8
  char v50; // w19
  BattleServantData_o *ServantData; // x0
  __int64 v52; // x1
  __int64 v53; // x22
  bool v54; // w0
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  System_Int32_array *AliveFieldEnemyServantIDList; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  System_Int32_array *v62; // x0
  const MethodInfo *v63; // x4
  System_Int32_array *v64; // x0
  BattleServantData_o *v65; // x0
  BattleServantData_o *v66; // x8
  Il2CppClass *v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x19
  System_Int32_array *v71; // x0
  __int64 v72; // x1
  System_Int32_array *AliveFieldPlayerServantIDList; // x0
  BattleServantData_o *v74; // x0
  __int64 v75; // x1
  System_Int32_array *AliveFieldSvtIdArray; // x0
  const MethodInfo *v77; // x4
  __int64 v78; // x19
  __int64 PlayerServantFromRandomCommandCard; // x0
  __int64 v80; // x1
  struct DataVals_o *v81; // x8
  System_Int32_array *v82; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v84; // x1
  DataVals_o *dataVals; // x0
  bool v86; // w8
  System_Int32_array *v87; // x21
  System_Collections_Generic_List_int__o *v88; // x20
  __int64 v89; // x0
  __int64 v90; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v92; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  int32_t v96; // w0
  int32_t Next; // w21
  __int64 v98; // x1
  System_Int32_array *v99; // x21
  System_Collections_Generic_List_int__o *v100; // x20
  __int64 v101; // x0
  __int64 v102; // x1
  il2cpp_array_size_t v103; // x8
  unsigned __int64 v104; // x19
  struct System_Int32_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  int32_t v108; // w0
  int32_t v109; // w21
  __int64 v110; // x1
  System_Int32_array *v111; // x22
  System_Collections_Generic_List_int__o *v112; // x20
  __int64 v113; // x0
  __int64 v114; // x1
  il2cpp_array_size_t v115; // x8
  unsigned __int64 v116; // x19
  struct System_Int32_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  int32_t v120; // w0
  int32_t v121; // w21
  __int64 v122; // x1
  BattleServantData_o *v124; // x8
  __int64 v125; // x1
  System_Int32_array *v126; // [xsp+0h] [xbp-70h]
  int32_t cardIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4E765C2 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E765C2 = 1;
  }
  cardIndex = 0;
  v19 = sub_1D0F15C(int___TypeInfo, 0);
  v126 = (System_Int32_array *)v19;
  if ( !bdata )
    goto LABEL_166;
  v22 = 0;
  if ( !BattleData__IsAiNpcID(bdata, actorId, 0) )
    goto LABEL_8;
  v19 = sub_1D0F15C(int___TypeInfo, 1);
  if ( !v19 )
LABEL_166:
    sub_1D0F30C(v19, v20);
  v22 = (System_Int32_array *)v19;
  if ( !*(_DWORD *)(v19 + 24) )
    sub_1D0F314(v19);
  *(_DWORD *)(v19 + 32) = actorId;
LABEL_8:
  IsActorPlayerSide = Target__IsActorPlayerSide(bdata, actorId, taskActorType, v21);
  switch ( type )
  {
    case 0:
    case 25:
      v28 = sub_1D0F15C(int___TypeInfo, 1);
      v30 = v28;
      if ( !v28 )
        sub_1D0F30C(0, v29);
      if ( !*(_DWORD *)(v28 + 24) )
        sub_1D0F314(v28);
      *(_DWORD *)(v28 + 32) = actorId;
      v126 = (System_Int32_array *)v28;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        if ( !FieldPlayerServantIDList )
          sub_1D0F30C(0, v32);
        if ( !LODWORD(FieldPlayerServantIDList->max_length) )
          sub_1D0F314(FieldPlayerServantIDList);
        if ( !*(_DWORD *)(v30 + 24) )
          sub_1D0F314(FieldPlayerServantIDList);
        goto LABEL_33;
      }
      return v126;
    case 1:
      v33 = sub_1D0F15C(int___TypeInfo, 1);
      ServantData = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !ServantData )
        return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
      if ( !v33 )
        sub_1D0F30C(ServantData, v52);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1D0F314(ServantData);
      goto LABEL_80;
    case 3:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getFieldEnemyServantIDList(bdata, 0, 0);
      else
        return BattleData__getFieldPlayerServantIDList(bdata, v22, 0);
    case 4:
      v60 = sub_1D0F15C(int___TypeInfo, 1);
      v33 = v60;
      if ( !v60 )
        sub_1D0F30C(0, v61);
      if ( !*(_DWORD *)(v60 + 24) )
        sub_1D0F314(v60);
      goto LABEL_69;
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
          sub_1D0F30C(0, v58);
        v86 = !DataVals__isCheckDead(dataVals, 0);
      }
      else
      {
        v86 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v86, v22, 0);
    case 8:
      if ( !BattleData__isEnemyID(bdata, actorId, 0) )
        return BattleData__getEnemyServantIDList(bdata, 1, IsActorPlayerSide, 0);
      if ( args )
      {
        v48 = args->fields.dataVals;
        if ( !v48 )
          sub_1D0F30C(0, v47);
        v49 = !DataVals__isCheckDead(v48, 0);
      }
      else
      {
        v49 = 1;
      }
      return BattleData__getPlayerServantIDList(bdata, v49, 0, 0);
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
        sub_1D0F30C(0, v26);
      return (System_Int32_array *)((__int64 (__fastcall *)(TargetAggregator_o *, void *))TargetAggregator->klass[1]._1.image)(
                                     TargetAggregator,
                                     TargetAggregator->klass[1]._1.gc_desc);
    case 11:
      v33 = sub_1D0F15C(int___TypeInfo, 1);
      isEnemyID = BattleData__isEnemyID(bdata, actorId, 0);
      AliveFieldRandomTargetId = Target__GetAliveFieldRandomTargetId(bdata, isEnemyID, 0, v42);
      if ( !v33 )
        sub_1D0F30C(AliveFieldRandomTargetId, v43);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1D0F314(AliveFieldRandomTargetId);
      goto LABEL_147;
    case 13:
      v53 = sub_1D0F15C(int___TypeInfo, 1);
      v54 = BattleData__isEnemyID(bdata, actorId, 0);
      v56 = Target__GetAliveFieldRandomTargetId(bdata, !v54, IsActorPlayerSide, v55);
      if ( !v53 )
        sub_1D0F30C(v56, v57);
      if ( !*(_DWORD *)(v53 + 24) )
        sub_1D0F314(v56);
      *(_DWORD *)(v53 + 32) = v56;
      return (System_Int32_array *)v53;
    case 16:
      v33 = sub_1D0F15C(int___TypeInfo, 1);
      v74 = BattleData__getServantData(bdata, pttargetId, 0);
      if ( !v74 )
        return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
      if ( !v33 )
        sub_1D0F30C(v74, v75);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1D0F314(v74);
LABEL_80:
      *(_DWORD *)(v33 + 32) = pttargetId;
      return (System_Int32_array *)v33;
    case 17:
      v44 = sub_1D0F15C(int___TypeInfo, 1);
      v30 = v44;
      if ( !v44 )
        sub_1D0F30C(0, v45);
      if ( !*(_DWORD *)(v44 + 24) )
        sub_1D0F314(v44);
      *(_DWORD *)(v44 + 32) = actorId;
      v126 = (System_Int32_array *)v44;
      if ( actorId == -1 )
      {
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        if ( !FieldPlayerServantIDList )
          sub_1D0F30C(0, v46);
        if ( !LODWORD(FieldPlayerServantIDList->max_length) )
          sub_1D0F314(FieldPlayerServantIDList);
        if ( !*(_DWORD *)(v30 + 24) )
          sub_1D0F314(FieldPlayerServantIDList);
LABEL_33:
        v126 = (System_Int32_array *)v30;
        *(_DWORD *)(v30 + 32) = FieldPlayerServantIDList->m_Items[0];
      }
      return v126;
    case 18:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldEnemyServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v87 = AliveFieldEnemyServantIDList;
      v88 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v88,
        (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v87 )
        sub_1D0F30C(v89, v90);
      max_length = v87->max_length;
      if ( (int)max_length >= 1 )
      {
        v92 = 0;
        do
        {
          if ( v92 >= (unsigned int)max_length )
            sub_1D0F314(v89);
          v90 = (unsigned int)v87->m_Items[v92];
          if ( (_DWORD)v90 != pttargetId )
          {
            if ( !v88 )
              sub_1D0F30C(v89, v90);
            items = v88->fields._items;
            v94 = Method_System_Collections_Generic_List_int__Add__;
            ++v88->fields._version;
            if ( !items )
              sub_1D0F30C(v89, v90);
            size = v88->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v88,
                v90,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
            }
            else
            {
              v88->fields._size = size + 1;
              items->m_Items[size] = v90;
            }
          }
          LODWORD(max_length) = v87->max_length;
          ++v92;
        }
        while ( (__int64)v92 < (int)max_length );
      }
      if ( !v88 )
        sub_1D0F30C(v89, v90);
      v96 = v88->fields._size;
      if ( !v96 )
        return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
      Next = BattleRandom__getNext(v96, 0);
      v33 = sub_1D0F15C(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v88,
                                   Next,
                                   (const MethodInfo_393F0FC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v33 )
        sub_1D0F30C(AliveFieldRandomTargetId, v98);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1D0F314(AliveFieldRandomTargetId);
      goto LABEL_147;
    case 19:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldEnemyServantIDList(bdata, 0, 0);
      else
        AliveFieldPlayerServantIDList = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      v111 = AliveFieldPlayerServantIDList;
      v112 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v112,
        (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v111 )
        sub_1D0F30C(v113, v114);
      v115 = v111->max_length;
      if ( (int)v115 >= 1 )
      {
        v116 = 0;
        do
        {
          if ( v116 >= (unsigned int)v115 )
            sub_1D0F314(v113);
          v114 = (unsigned int)v111->m_Items[v116];
          if ( (_DWORD)v114 != actorId )
          {
            if ( !v112 )
              sub_1D0F30C(v113, v114);
            v117 = v112->fields._items;
            v118 = Method_System_Collections_Generic_List_int__Add__;
            ++v112->fields._version;
            if ( !v117 )
              sub_1D0F30C(v113, v114);
            v119 = v112->fields._size;
            if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v112,
                v114,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
            }
            else
            {
              v112->fields._size = v119 + 1;
              v117->m_Items[v119] = v114;
            }
          }
          LODWORD(v115) = v111->max_length;
          ++v116;
        }
        while ( (__int64)v116 < (int)v115 );
      }
      if ( !v112 )
        sub_1D0F30C(v113, v114);
      v120 = v112->fields._size;
      if ( !v120 )
        return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
      v121 = BattleRandom__getNext(v120, 0);
      v33 = sub_1D0F15C(int___TypeInfo, 1);
      AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                   v112,
                                   v121,
                                   (const MethodInfo_393F0FC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v33 )
        sub_1D0F30C(AliveFieldRandomTargetId, v122);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1D0F314(AliveFieldRandomTargetId);
      goto LABEL_147;
    case 20:
      if ( BattleData__isEnemyID(bdata, actorId, 0) )
        v64 = BattleData__getAliveFieldPlayerServantIDList(bdata, 0, 0);
      else
        v64 = BattleData__getAliveFieldEnemyServantIDList(bdata, IsActorPlayerSide, 0);
      v99 = v64;
      v100 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v100,
        (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v99 )
        sub_1D0F30C(v101, v102);
      v103 = v99->max_length;
      if ( (int)v103 >= 1 )
      {
        v104 = 0;
        do
        {
          if ( v104 >= (unsigned int)v103 )
            sub_1D0F314(v101);
          v102 = (unsigned int)v99->m_Items[v104];
          if ( (_DWORD)v102 != targetId )
          {
            if ( !v100 )
              sub_1D0F30C(v101, v102);
            v105 = v100->fields._items;
            v106 = Method_System_Collections_Generic_List_int__Add__;
            ++v100->fields._version;
            if ( !v105 )
              sub_1D0F30C(v101, v102);
            v107 = v100->fields._size;
            if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v100,
                v102,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
            }
            else
            {
              v100->fields._size = v107 + 1;
              v105->m_Items[v107] = v102;
            }
          }
          LODWORD(v103) = v99->max_length;
          ++v104;
        }
        while ( (__int64)v104 < (int)v103 );
      }
      if ( !v100 )
        sub_1D0F30C(v101, v102);
      v108 = v100->fields._size;
      if ( v108 )
      {
        v109 = BattleRandom__getNext(v108, 0);
        v33 = sub_1D0F15C(int___TypeInfo, 1);
        AliveFieldRandomTargetId = System_Collections_Generic_List_int___get_Item(
                                     v100,
                                     v109,
                                     (const MethodInfo_393F0FC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v33 )
          sub_1D0F30C(AliveFieldRandomTargetId, v110);
        if ( !*(_DWORD *)(v33 + 24) )
          sub_1D0F314(AliveFieldRandomTargetId);
LABEL_147:
        *(_DWORD *)(v33 + 32) = AliveFieldRandomTargetId;
        return (System_Int32_array *)v33;
      }
      else
      {
        return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
      }
    case 21:
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(AliveFieldSvtIdArray, actorId, 0, 0, v77);
    case 22:
      v62 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v62, actorId, 0, 1, v63);
    case 23:
      v39 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, tvals, isIncludeIgnoreIndiv, 0);
      return Target__getOrderOneTargetIdArray(v39, actorId, 1, 1, v40);
    case 24:
      v37 = BattleData__getAliveFieldSvtIdArray(bdata, actorId, 1, 0, 0, 0);
      return Target__getOrderOneTargetIdArray(v37, actorId, 1, 0, v38);
    case 26:
      return BattleData__GetAliveFieldServantIDArray(bdata, 0, actorId, 0);
    case 27:
      v65 = BattleData__getServantData(bdata, actorId, 0);
      if ( v65 && checkRevengeId )
        targetId = BattleServantData__GetRevengeTargetUniqueIdIncludeSelfDamage(v65, 0);
      v66 = BattleData__getServantData(bdata, targetId, 0);
      v67 = int___TypeInfo;
      if ( !v66 )
        return (System_Int32_array *)sub_1D0F15C(v67, 0);
      v68 = sub_1D0F15C(int___TypeInfo, 1);
      v33 = v68;
      if ( !v68 )
        sub_1D0F30C(0, v69);
      if ( !*(_DWORD *)(v68 + 24) )
        sub_1D0F314(v68);
LABEL_69:
      *(_DWORD *)(v33 + 32) = targetId;
      return (System_Int32_array *)v33;
    case 31:
      v78 = sub_1D0F15C(int___TypeInfo, 1);
      PlayerServantFromRandomCommandCard = BattleData__GetPlayerServantFromRandomCommandCard(bdata, &cardIndex, 0);
      if ( !v78 )
        sub_1D0F30C(PlayerServantFromRandomCommandCard, v80);
      if ( !*(_DWORD *)(v78 + 24) )
        sub_1D0F314(PlayerServantFromRandomCommandCard);
      *(_DWORD *)(v78 + 32) = PlayerServantFromRandomCommandCard;
      if ( !args )
        sub_1D0F30C(PlayerServantFromRandomCommandCard, v80);
      v81 = args->fields.dataVals;
      if ( !v81 )
        sub_1D0F30C(PlayerServantFromRandomCommandCard, v80);
      v126 = (System_Int32_array *)v78;
      v81->fields.targetCardIndex = cardIndex;
      return v126;
    case 33:
      v70 = sub_1D0F15C(int___TypeInfo, 1);
      v71 = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
      if ( !v71 )
        sub_1D0F30C(0, v72);
      if ( !LODWORD(v71->max_length) )
        sub_1D0F314(v71);
      if ( !v70 )
        sub_1D0F30C(v71, v72);
      if ( !*(_DWORD *)(v70 + 24) )
        sub_1D0F314(v71);
      v126 = (System_Int32_array *)v70;
      *(_DWORD *)(v70 + 32) = v71->m_Items[0];
      return v126;
    case 34:
      v33 = sub_1D0F15C(int___TypeInfo, 1);
      AliveFieldRandomTargetId = Target__GetAliveLogicFieldRandomTargetId(bdata, 3, 1, v34);
      if ( !v33 )
        sub_1D0F30C(AliveFieldRandomTargetId, v36);
      if ( !*(_DWORD *)(v33 + 24) )
        sub_1D0F314(AliveFieldRandomTargetId);
      goto LABEL_147;
    case 35:
      if ( args && args->fields._IsPlayerAttackPreselectTargetExecution_k__BackingField )
      {
        targetId = args->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField;
        v50 = 0;
      }
      else
      {
        v50 = 1;
      }
      if ( !(v50 & 1 | (BattleData__getServantData(bdata, targetId, 0) != 0)) )
      {
        v82 = BattleData__getFieldPlayerServantIDList(bdata, 0, 0);
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v82, 0);
        if ( IsNullOrEmpty )
        {
          targetId = -1;
        }
        else
        {
          if ( !v82 )
            sub_1D0F30C(IsNullOrEmpty, v84);
          if ( !LODWORD(v82->max_length) )
            sub_1D0F314(IsNullOrEmpty);
          targetId = v82->m_Items[0];
        }
      }
      v124 = BattleData__getServantData(bdata, targetId, 0);
      v67 = int___TypeInfo;
      if ( !v124 )
        return (System_Int32_array *)sub_1D0F15C(v67, 0);
      v27 = sub_1D0F15C(int___TypeInfo, 1);
      if ( !v27 )
        sub_1D0F30C(0, v125);
      if ( !*(_DWORD *)(v27 + 24) )
        sub_1D0F314(v27);
      *(_DWORD *)(v27 + 32) = targetId;
      return (System_Int32_array *)v27;
    default:
      return v126;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  this->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.dataVals = dataVals;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)dataVals, v5, v6, v7, v8, v9, v10);
}


bool Target_BattleTargetArgs__IsCheckDead(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  DataVals_o *dataVals; // x0

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1D0F30C(0, method);
  return DataVals__isCheckDead(dataVals, 0);
}


void Target_BattleTargetArgs__SetPlayerAttackPreselectTargetUniqueId(
        Target_BattleTargetArgs_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  this->fields._IsPlayerAttackPreselectTargetExecution_k__BackingField = 1;
  this->fields._PlayerAttackPreselectTargetUniqueId_k__BackingField = uniqueId;
}


void Target_BattleTargetArgs__SetTargetCardIndex(
        Target_BattleTargetArgs_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals; // x8

  dataVals = this->fields.dataVals;
  if ( !dataVals )
    sub_1D0F30C(this, cardIndex);
  dataVals->fields.targetCardIndex = cardIndex;
}


System_Int32_array *Target_BattleTargetArgs__get_EnemyRange(Target_BattleTargetArgs_o *this, const MethodInfo *method)
{
  struct System_Int32_array *enemyRange; // x20
  DataVals_o *dataVals; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  long double inited; // q0
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_4E765C6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_int___);
    byte_4E765C6 = 1;
  }
  enemyRange = this->fields.enemyRange;
  if ( !enemyRange )
  {
    dataVals = this->fields.dataVals;
    if ( !dataVals )
      sub_1D0F30C(0, method);
    enemyRange = DataVals__GetParamArray(dataVals, 138, 0);
    if ( !enemyRange )
    {
      v12 = Method_System_Array_Empty_int___;
      v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v13 )
      {
        sub_1CE5198(Method_System_Array_Empty_int___);
        v13 = v12[7];
      }
      v14 = *(_QWORD *)(v13 + 16);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1CE513C(inited);
      if ( !*(_DWORD *)(v14 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v14);
      v15 = *(_QWORD *)(v12[7] + 16LL);
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
        v15 = sub_1CE513C(inited);
      enemyRange = **(struct System_Int32_array ***)(v15 + 184);
    }
    this->fields.enemyRange = enemyRange;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.enemyRange, (int32_t)enemyRange, v5, v6, v7, v8, v9, v10);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E765C7 & 1) == 0 )
  {
    sub_1D0F0B4(&Target___c_TypeInfo);
    byte_4E765C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(Target___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Target___c_TypeInfo->static_fields->__9 = (struct Target___c_o *)v1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)Target___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
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
    sub_1D0F30C(this, 0);
  return x->fields.uniqueId;
}