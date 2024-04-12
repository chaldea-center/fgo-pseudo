void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleWarBoardEventLimitTurn_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Int32_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Int32_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42AE0E2 & 1) == 0 )
  {
    sub_B52984(&BattleWarBoardEventLimitTurn_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE0E2 = 1;
  }
  v3 = (BattleWarBoardEventLimitTurn_o *)sub_B52A54(BattleWarBoardEventLimitTurn_TypeInfo);
  BattleWarBoardEventLimitTurn___ctor(v3, 0LL);
  this->fields.eventLimitTurn = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventLimitTurn,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.warBoardDataJson, v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v24;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v31;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  BaseBattleEvent___ctor((BaseBattleEvent_o *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass76_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_42AE0DE & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__);
    sub_B52984(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
    byte_42AE0DE = 1;
  }
  v5 = (WarBoardBattleEvent___c__DisplayClass76_0_o *)sub_B52A54(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass76_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.svtUniqueId = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v9 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__27531732(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetEventMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *warBoardInfo,
        bool isPlayer,
        const MethodInfo *method)
{
  struct BattleWarBoardInfo_WarBoardMasterInfo_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v7; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__51_0; // x20
  Il2CppObject *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardBattleEvent___c_StaticFields *v17; // x0
  BattleServantConfConponent_o *p__9__51_0; // x0
  struct WarBoardBattleEvent___c_StaticFields *v20; // x8
  Il2CppObject *v21; // x21
  struct WarBoardBattleEvent___c_StaticFields *v22; // x0

  if ( (byte_42AE0CE & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    sub_B52984(&Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    sub_B52984(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__);
    sub_B52984(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__);
    sub_B52984(&WarBoardBattleEvent___c_TypeInfo);
    byte_42AE0CE = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
  v7 = WarBoardBattleEvent___c_TypeInfo;
  if ( isPlayer )
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v7 = WarBoardBattleEvent___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__51_0 = (System_Predicate_T__o *)static_fields->__9__51_0;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_201A850 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B52A54(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v10,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v17 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v17->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v17->__9__51_0;
  }
  else
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v7 = WarBoardBattleEvent___c_TypeInfo;
    }
    v20 = v7->static_fields;
    _9__51_0 = (System_Predicate_T__o *)v20->__9__51_1;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_201A850 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v20 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v20->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B52A54(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v21,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v22 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v22->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v22->__9__51_1;
  }
  sub_B52920(p__9__51_0, (System_Int32_array **)_9__51_0, v11, v12, v13, v14, v15, v16);
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                      _9__51_0,
                                                      (const MethodInfo_201A850 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x19
  __int64 v4; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v10; // x1
  Il2CppObject v11; // q0
  int64_t v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_42AE0E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE0E1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_21;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v16.fields.current = (Il2CppObject *)v15.fields.fakeValue;
  *(_OWORD *)&v16.fields.list = *(_OWORD *)&v15.fields.currentCryptoKey;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v16,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B52A5C(v6, v7);
    if ( BattleServantData__isDead((BattleServantData_o *)v16.fields.current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_B52A5C(0LL, v10);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v11 = current[3];
        *(Il2CppObject *)&v15.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v15.fields.fakeValue = v11;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v14 = v15;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v14, 0LL);
        if ( !v3 )
          sub_B52A5C(v12, v12);
        System_Collections_Generic_List_long___Add(
          v3,
          v12,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_21:
    sub_B52A5C(Data_k__BackingField, v4);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v7; // x0

  if ( (byte_42AE0CC & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AE0CC = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B5299C(int___TypeInfo, 3LL);
  if ( !result )
    sub_B52A5C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    v7 = sub_B52A88(result);
    sub_B52A28(v7, 0LL);
  }
  result->m_Items[3] = masterInfo->fields.skill3Ct;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v7; // x0

  if ( (byte_42AE0CD & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AE0CD = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B5299C(int___TypeInfo, 3LL);
  if ( !result )
    sub_B52A5C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    v7 = sub_B52A88(result);
    sub_B52A28(v7, 0LL);
  }
  result->m_Items[3] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetResetBuffTypes(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v2; // x19
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AE0D4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_15429/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/);
    byte_42AE0D4 = 1;
  }
  v2 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v2,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_15429/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
                                0LL,
                                0LL);
  if ( !Instance )
  {
    if ( v2 )
      return System_Collections_Generic_List_int___ToArray(
               v2,
               (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  if ( !v2 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v2,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v2,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__GetResultBgmId(
        WarBoardBattleEvent_o *this,
        int32_t curBgmId,
        const MethodInfo *method)
{
  WarBoardBattleEvent_o *v4; // x20
  struct BattleData_o *Data_k__BackingField; // x8

  v4 = this;
  if ( (byte_42AE0CF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (WarBoardBattleEvent_o *)sub_B52984(&StringLiteral_15430/*"WAR_BOARD_BATTLE_LOSE_BGM"*/);
    byte_42AE0CF = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_28577068(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15430/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_B52A5C(this, *(_QWORD *)&curBgmId);
  }
  return curBgmId;
}


void __fastcall WarBoardBattleEvent__GetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Int32_array *joinCurTurnUniqueIds; // x8

  if ( !save )
    sub_B52A5C(this, 0LL);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_B52920(
    (BattleServantConfConponent_o *)&save->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)joinCurTurnUniqueIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


BaseBattleServantEvent_o *__fastcall WarBoardBattleEvent__GetServantEvent(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return (BaseBattleServantEvent_o *)this->fields._ServantEvent_k__BackingField;
}


int32_t __fastcall WarBoardBattleEvent__GetServantHaveStar(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x19

  if ( !svtData )
    goto LABEL_8;
  if ( svtData->fields.isAppliedHaveStars )
  {
    LODWORD(EventServantInfo) = 0;
    return (int)EventServantInfo;
  }
  svtData->fields.isAppliedHaveStars = 1;
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0LL);
  if ( !ServantEvent_k__BackingField )
LABEL_8:
    sub_B52A5C(this, svtData);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, 0LL);
  if ( EventServantInfo )
    LODWORD(EventServantInfo) = EventServantInfo->fields.criticalStars;
  return (int)EventServantInfo;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *enemyMaster,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  BattleData_o *Data_k__BackingField; // x8
  int32_t groupId; // w19
  int32_t forceId; // w22
  System_Int32_array *v11; // x20
  WarBoardBattleEvent_o *EnemyMasterCommandSpellCnt; // x0
  const MethodInfo *v13; // x6

  if ( (byte_42AE0D8 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AE0D8 = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  v6 = sub_B5299C(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B52A5C(v6, v7);
  forceId = enemyMaster->fields.forceId;
  groupId = enemyMaster->fields.groupId;
  v11 = (System_Int32_array *)v6;
  EnemyMasterCommandSpellCnt = (WarBoardBattleEvent_o *)BattleData__getEnemyMasterCommandSpellCnt(
                                                          Data_k__BackingField,
                                                          0LL);
  return WarBoardBattleEvent__MakeMasterInfo(
           EnemyMasterCommandSpellCnt,
           forceId,
           groupId,
           v5,
           v11,
           (int32_t)EnemyMasterCommandSpellCnt,
           v13);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  __int64 v6; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  UserGameEntity_o *v13; // x21
  System_Int32_array *v14; // x19
  System_Int32_array *v15; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v17; // x6
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AE0D7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AE0D7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    masterSkillInfo,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v20,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v8 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B52A5C(v8, v9);
    if ( !BYTE4(v20.fields.current[1].monitor) )
    {
      if ( !v3 )
        sub_B52A5C(v8, v9);
      System_Collections_Generic_List_int___Add(
        v3,
        (int32_t)v20.fields.current[2].monitor,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v4 )
        sub_B52A5C(v11, v12);
      System_Collections_Generic_List_int___Add(
        v4,
        (int32_t)current[3].klass,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v3
    || (v13 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v3, (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v4)
    || (v14 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v4, (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v13) )
  {
LABEL_19:
    sub_B52A5C(masterSkillInfo, v6);
  }
  v15 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v13, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v14, v15, (int32_t)CommandSpell, v17);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardBattleEvent__GetWarBoardSquareIndividualityList(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSquareIndividualityList;
}


bool __fastcall WarBoardBattleEvent__GoNextScene(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  Il2CppObject *WarBoardDataEntityFromResponse; // x19
  System_String_o *warBoardDataJson; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  bool v7; // w20

  if ( (byte_42AE0D9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&WarBoardManager_TypeInfo);
    byte_42AE0D9 = 1;
  }
  WarBoardDataEntityFromResponse = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.warBoardDataJson, 0LL) )
  {
    warBoardDataJson = this->fields.warBoardDataJson;
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    WarBoardDataEntityFromResponse = (Il2CppObject *)WarBoardManager__GetWarBoardDataEntityFromResponse(
                                                       warBoardDataJson,
                                                       0LL);
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v7 = AvalonSceneManager__checkLoadedScene(Instance, 80, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v6);
  }
  if ( v7 )
    AvalonSceneManager__popSceneRefresh(Instance, 1, WarBoardDataEntityFromResponse, 0LL);
  else
    AvalonSceneManager__transitionSceneRefresh(Instance, 80, 1, WarBoardDataEntityFromResponse, 0, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__HideTargetsResult(
        WarBoardBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        System_Int32_array *hideTypes,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  __int64 v8; // x0

  if ( hideTypes )
  {
    v4 = *(_QWORD *)&hideTypes->max_length;
    if ( (int)v4 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v4 )
        {
          v8 = sub_B52A88(this);
          sub_B52A28(v8, 0LL);
        }
        if ( !result )
          sub_B52A5C(this, result);
        BattleResultComponent_resultData__disableResultDispFlag(result, 1 << hideTypes->m_Items[v7 + 1], 0LL);
        LODWORD(v4) = hideTypes->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)v4 );
    }
  }
}


void __fastcall WarBoardBattleEvent__Init(WarBoardBattleEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  BattleInfoData_o *BattleInfo; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x21
  WarBoardBattleServantEvent_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WarBoardBattleEvent_o *v22; // x0
  const MethodInfo *v23; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarBoardBattleEvent_o *v31; // x0
  const MethodInfo *v32; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  char v40; // w0
  WarBoardBattleEvent_o *v41; // x0
  const MethodInfo *v42; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_42AE0C9 & 1) == 0 )
  {
    sub_B52984(&WarBoardBattleServantEvent_TypeInfo);
    byte_42AE0C9 = 1;
  }
  BaseBattleEvent__Init((BaseBattleEvent_o *)this, data, 0LL);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, 0LL);
  if ( !BattleInfo )
    sub_B52A5C(0LL, v6);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (System_Int32_array **)warBoardBattleInfo,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( this->fields._WarBoardBattleInfo_k__BackingField )
    svtInfo = this->fields._WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v15 = (WarBoardBattleServantEvent_o *)sub_B52A54(WarBoardBattleServantEvent_TypeInfo);
  WarBoardBattleServantEvent___ctor(v15, svtInfo, 0LL);
  this->fields._ServantEvent_k__BackingField = v15;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ServantEvent_k__BackingField,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v22,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v23);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._MasterPlayer_k__BackingField,
    (System_Int32_array **)EventMasterInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v33 = WarBoardBattleEvent__GetEventMasterInfo(v31, this->fields._WarBoardBattleInfo_k__BackingField, 0, v32);
  this->fields._MasterEnemy_k__BackingField = v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._MasterEnemy_k__BackingField,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
          this,
          this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager((BaseBattleEvent_o *)this, v40 & 1, data, 0LL);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v41, v42);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)ResetBuffTypes,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(
                                  WarBoardBattleInfo_k__BackingField,
                                  0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.battleSquareIndividualityList,
    (System_Int32_array **)BattleSquareIndividuality,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
}


bool __fastcall WarBoardBattleEvent__InitBGData(
        WarBoardBattleEvent_o *this,
        int32_t *bgNo,
        int32_t *bgType,
        const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v5; // w9
  bool result; // w0
  int32_t v7; // w8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( !WarBoardBattleInfo_k__BackingField )
    return 0;
  v5 = WarBoardBattleInfo_k__BackingField->fields.bgNo;
  if ( v5 < 1 )
  {
    result = 0;
  }
  else
  {
    *bgNo = v5;
    WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
    result = 1;
    if ( !WarBoardBattleInfo_k__BackingField )
      return result;
  }
  v7 = WarBoardBattleInfo_k__BackingField->fields.bgType;
  if ( v7 >= 1 )
  {
    result = 1;
    *bgType = v7;
  }
  return result;
}


void __fastcall WarBoardBattleEvent__InitBattleStartTurn(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  __int64 v6; // x1
  char v7; // w23
  int v8; // w20
  _BOOL4 v9; // w21
  System_Collections_Generic_IEnumerable_TSource__o *FieldServantList; // x24
  WarBoardBattleEvent___c_c *v11; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__73_0; // x25
  Il2CppObject *v14; // x26
  struct WarBoardBattleEvent___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  WarBoardBattleEvent___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  struct WarBoardBattleEvent___c_StaticFields *v25; // x9
  char v26; // w23
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__73_1; // x25
  Il2CppObject *v28; // x22
  struct WarBoardBattleEvent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  struct System_Int32_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x0

  if ( (byte_42AE0DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__int___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&System_Func_BattleServantData__int__TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__);
    sub_B52984(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__);
    sub_B52984(&WarBoardBattleEvent___c_TypeInfo);
    byte_42AE0DD = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                                           this,
                                           this->klass->vtable._5_Init.methodPtr,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v7 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v8 = (int)Data_k__BackingField,
        v9 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_B52A5C(Data_k__BackingField, v6);
  }
  FieldServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(
                                                                            Data_k__BackingField,
                                                                            0,
                                                                            0LL);
  v11 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v11 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__73_0,
      v14,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
    v15 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v15->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__73_0,
      (System_Int32_array **)_9__73_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldServantList,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v23 = WarBoardBattleEvent___c_TypeInfo;
  v24 = v22;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v23 = WarBoardBattleEvent___c_TypeInfo;
  }
  v25 = v23->static_fields;
  v26 = v7 ^ isPlayer;
  _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v25->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v25 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v25->__9;
    _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__73_1,
      v28,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BattleServantData__int___ctor__);
    v29 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v29->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v29->__9__73_1,
      (System_Int32_array **)_9__73_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v37;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (v26 & 1) != 0 )
  {
    v50 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_1B5BA40 *)Method_System_Linq_Enumerable_Concat_int___);
    v51 = System_Linq_Enumerable__Distinct_int_(
            v50,
            (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
    aliveSvtUniqueIds = System_Linq_Enumerable__ToArray_int_(
                          v51,
                          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
  }
  sub_B52920(
    (BattleServantConfConponent_o *)p_joinCurTurnUniqueIds,
    (System_Int32_array **)aliveSvtUniqueIds,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( (v8 & v9 & 1) != 0 )
    this->fields.curTurnCondState |= 1u;
}


// attributes: thunk
void __fastcall WarBoardBattleEvent__InitPlayerMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  WarBoardBattleEvent__TakeoverPlayerMasterSkill(this, method);
}


void __fastcall WarBoardBattleEvent__InitServantDataPrevAdd(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  WarBoardBattleEvent_o *v5; // x20
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0

  if ( !svtData
    || (ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField,
        v5 = this,
        this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0LL),
        !ServantEvent_k__BackingField) )
  {
    sub_B52A5C(this, svtData);
  }
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, 0LL);
  BattleServantData__SetTakeoverServantDataPrevAdd(svtData, EventServantInfo, v5->fields._Data_k__BackingField, 0LL);
}


void __fastcall WarBoardBattleEvent__InitStageData(
        WarBoardBattleEvent_o *this,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  BattleWarBoardEventLimitTurn_o *eventLimitTurn; // x0
  const MethodInfo *v5; // x1

  eventLimitTurn = this->fields.eventLimitTurn;
  if ( !eventLimitTurn )
    sub_B52A5C(0LL, stage);
  BattleWarBoardEventLimitTurn__InitLimitInfo(eventLimitTurn, this, stage, 0LL);
  WarBoardBattleEvent__TakeoverEnemyMasterInfo(this, v5);
}


void __fastcall WarBoardBattleEvent__InitStartResult(
        WarBoardBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardBattleEvent_o *v5; // x20
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 isLoseRetireClear; // w20
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v9; // x3

  v5 = this;
  if ( (byte_42AE0D1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (WarBoardBattleEvent_o *)sub_B52984(&StringLiteral_15431/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/);
    byte_42AE0D1 = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_B52A5C(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15431/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v9);
}


void __fastcall WarBoardBattleEvent__InitUsePlayerServantData(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v4; // x2
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v6; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22
  __int64 v9; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_12;
  Data_k__BackingField = (BattleData_o *)BattleData__getPlayerServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_12;
  rootfsm = Data_k__BackingField->fields.rootfsm;
  v6 = Data_k__BackingField;
  if ( (int)rootfsm < 1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)rootfsm )
      {
        v9 = sub_B52A88(Data_k__BackingField);
        sub_B52A28(v9, 0LL);
      }
      Data_k__BackingField = (BattleData_o *)WarBoardBattleEvent__GetServantHaveStar(
                                               this,
                                               *((BattleServantData_o **)&v6->fields.fsm + v8),
                                               v4);
      LODWORD(rootfsm) = v6->fields.rootfsm;
      ++v8;
      v7 += (int)Data_k__BackingField;
    }
    while ( (__int64)v8 < (int)rootfsm );
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
LABEL_12:
    sub_B52A5C(Data_k__BackingField, method);
  BattleData__InitCriticalPoint(Data_k__BackingField, v7, 0LL);
}


void __fastcall WarBoardBattleEvent__InitWave(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall WarBoardBattleEvent__IsActionPassiveSkillOnBattle(
        WarBoardBattleEvent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  if ( !skillInfo )
    sub_B52A5C(this, 0LL);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B52A5C(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B52A5C(this, 0LL);
  return BattleServantData__getDefeatPoint(svtData, 0LL) > 0;
}


bool __fastcall WarBoardBattleEvent__IsPossibleAddBuffParam(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return BaseBattleEvent__get_IsBattleEndReduceBuffTurn((BaseBattleEvent_o *)this, 0LL)
      || BaseBattleEvent__IsPossibleAddBuffParam((BaseBattleEvent_o *)this, svtData, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsRemainBattleEndWave(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  struct BattleData_o *v4; // x8
  struct BattleAttackManager_o *battleAtkManager; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_7;
  Data_k__BackingField = (BattleData_o *)BattleData__IsEndWaveBattle(Data_k__BackingField, 0LL);
  if ( ((unsigned __int8)Data_k__BackingField & 1) != 0 )
  {
    v4 = this->fields._Data_k__BackingField;
    if ( v4 )
    {
      battleAtkManager = v4->fields.battleAtkManager;
      if ( battleAtkManager )
        return !battleAtkManager->fields._IsTurnEnd_k__BackingField;
    }
LABEL_7:
    sub_B52A5C(Data_k__BackingField, method);
  }
  return 0;
}


bool __fastcall WarBoardBattleEvent__IsSettedAllServant(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  WarBoardBattleEvent_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  struct System_Collections_Generic_List_BattleServantData__o *enemy_datalist; // x9
  struct System_Collections_Generic_List_BattleServantData__o *player_datalist; // x8

  v2 = this;
  if ( (byte_42AE0CA & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    byte_42AE0CA = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B52A5C(this, method);
  enemy_datalist = Data_k__BackingField->fields.enemy_datalist;
  return enemy_datalist
      && enemy_datalist->fields._size >= 1
      && (player_datalist = Data_k__BackingField->fields.player_datalist) != 0LL
      && player_datalist->fields._size > 0;
}


bool __fastcall WarBoardBattleEvent__IsTakeOverNextBattleBuff(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        BuffEntity_o *buffEnt,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v9; // x22
  _BOOL8 isParam; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v20; // x20

  if ( (byte_42AE0DB & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__);
    sub_B52984(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
    byte_42AE0DB = 1;
  }
  v9 = sub_B52A54(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass69_0___ctor((WarBoardBattleEvent___c__DisplayClass69_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = buffEnt;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)buffEnt, v12, v13, v14, v15, v16, v17);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 68, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_B52A5C(isParam, v11);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v20 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  return !BasicHelper__Any_int__27531732(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v20,
            (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B52A5C(this, 0LL);
  return BattleServantData__getDefeatPoint(svtData, 0LL) >= 1
      && !BattleServantData__isLogicResultAlive(svtData, 0LL)
      && (((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._9_get_hp.method)(
            svtData,
            svtData->klass->vtable._10_set_hp.methodPtr) > 0
       || BattleServantData__isOverKill(svtData, 0LL));
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarBoardBattleEvent__MakeDistributeStar(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x19
  __int64 v4; // x1
  BattleData_o *Data_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x21
  WarBoardBattleEvent___c_c *v7; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__57_0; // x22
  Il2CppObject *v10; // x23
  struct WarBoardBattleEvent___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v20; // x21
  struct BattleData_o *v21; // x9
  int32_t criticalstars; // w9
  unsigned int v23; // w20
  int v24; // w22
  int i; // w23
  int32_t v26; // w2
  __int64 v28; // x0

  if ( (byte_42AE0D3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__);
    sub_B52984(&WarBoardBattleEvent___c_TypeInfo);
    byte_42AE0D3 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_2F49F90 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_25;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  Data_k__BackingField,
                                                                                  0LL);
  v7 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v7 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__57_0,
      v10,
      Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
    v11 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v11->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v11->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v18,
                                           (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_25;
  rootfsm = Data_k__BackingField->fields.rootfsm;
  v20 = Data_k__BackingField;
  if ( rootfsm )
  {
    v21 = this->fields._Data_k__BackingField;
    if ( !v21 )
      goto LABEL_25;
    if ( (int)rootfsm >= 1 )
    {
      criticalstars = v21->fields.criticalstars;
      v23 = 0;
      v24 = criticalstars / (int)rootfsm;
      for ( i = criticalstars % (int)rootfsm; ; --i )
      {
        if ( v23 >= (unsigned int)rootfsm )
        {
          v28 = sub_B52A88(Data_k__BackingField);
          sub_B52A28(v28, 0LL);
        }
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v20->fields.fsm + (int)v23);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v3 )
          break;
        if ( i <= 0 )
          v26 = v24;
        else
          v26 = v24 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v3,
          (int64_t)Data_k__BackingField,
          v26,
          (const MethodInfo_2F4AB44 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(rootfsm) = v20->fields.rootfsm;
        if ( (int)++v23 >= (int)rootfsm )
          return v3;
      }
LABEL_25:
      sub_B52A5C(Data_k__BackingField, v4);
    }
  }
  return v3;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__MakeMasterInfo(
        WarBoardBattleEvent_o *this,
        int32_t forceId,
        int32_t groupId,
        System_Int32_array *chargeArray,
        System_Int32_array *sealedArray,
        int32_t spellNum,
        const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardMasterInfo_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42AE0D6 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_int____68584400);
    sub_B52984(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
    byte_42AE0D6 = 1;
  }
  v12 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_B52A54(BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v12, 0LL);
  if ( !v12 )
    sub_B52A5C(v13, v14);
  v12->fields.forceId = forceId;
  v12->fields.groupId = groupId;
  v12->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
  v12->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
  v12->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
  v12->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
  v12->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
  v12->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
  v12->fields.commandSpellNum = spellNum;
  return v12;
}


int32_t __fastcall WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass78_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_42AE0DF & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__);
    sub_B52984(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
    byte_42AE0DF = 1;
  }
  v5 = (WarBoardBattleEvent___c__DisplayClass78_0_o *)sub_B52A54(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass78_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.selfUniqueId = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v9 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__27531732(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v9,
         (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832) )
  {
    return 2;
  }
  else
  {
    return 0;
  }
}


BattleWarBoardInfo_o *__fastcall WarBoardBattleEvent__MakeWarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 v4; // x20
  BattleData_o *v5; // x0
  __int64 v6; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v8; // w8
  struct BattleWarBoardInfo_o *v9; // x8
  __int64 v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array **logic; // x1
  const MethodInfo *v19; // x1
  System_Int32_array **DistributeStar; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **ServantEvent_k__BackingField; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BattleData_o **v47; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct BattleData_o *v55; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v57; // x24
  struct BattleData_o *v58; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *enemy_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x24
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x1
  System_Int32_array **WarBoardMasterArray; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7

  if ( (byte_42AE0D2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleServantData___ctor__);
    sub_B52984(&System_Action_BattleServantData__TypeInfo);
    sub_B52984(&BattleWarBoardInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
    sub_B52984(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__);
    sub_B52984(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__);
    sub_B52984(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
    byte_42AE0D2 = 1;
  }
  v3 = sub_B52A54(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass56_0___ctor((WarBoardBattleEvent___c__DisplayClass56_0_o *)v3, 0LL);
  v4 = sub_B52A54(BattleWarBoardInfo_TypeInfo);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v4, 0LL);
  v5 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                         this,
                         this->klass->vtable._5_Init.methodPtr);
  if ( !v4 )
    goto LABEL_19;
  *(_BYTE *)(v4 + 20) = (unsigned __int8)v5 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v8 = WarBoardBattleInfo_k__BackingField ? WarBoardBattleInfo_k__BackingField->fields.battleTurn : -1;
  *(_DWORD *)(v4 + 24) = v8;
  v9 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v9 )
    LODWORD(v9) = v9->fields.stageId;
  *(_DWORD *)(v4 + 16) = (_DWORD)v9;
  v10 = sub_B52A54(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v10, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  if ( !v10 )
    goto LABEL_19;
  logic = (System_Int32_array **)Data_k__BackingField->fields.logic;
  *(_QWORD *)(v10 + 16) = logic;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 16), logic, v11, v12, v13, v14, v15, v16);
  DistributeStar = (System_Int32_array **)WarBoardBattleEvent__MakeDistributeStar(this, v19);
  *(_QWORD *)(v10 + 24) = DistributeStar;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 24), DistributeStar, v21, v22, v23, v24, v25, v26);
  v5 = this->fields._Data_k__BackingField;
  if ( !v5 )
    goto LABEL_19;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(v5, 0LL);
  *(_QWORD *)(v10 + 32) = QuestIndividualities;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 32), QuestIndividualities, v28, v29, v30, v31, v32, v33);
  ServantEvent_k__BackingField = (System_Int32_array **)this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v10 + 40) = ServantEvent_k__BackingField;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 40), ServantEvent_k__BackingField, v35, v36, v37, v38, v39, v40);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 24) = v10;
  v47 = (BattleData_o **)(v3 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v10, v41, v42, v43, v44, v45, v46);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v3 + 16) = v48;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  v55 = this->fields._Data_k__BackingField;
  if ( !v55 )
    goto LABEL_19;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v55->fields.player_datalist;
  v57 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v57,
    (Il2CppObject *)v3,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleServantData___ctor__);
  if ( !player_datalist
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          player_datalist,
          (System_Action_T__o *)v57,
          (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v58 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v58->fields.enemy_datalist,
        v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleServantData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v60,
          (Il2CppObject *)v3,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          (const MethodInfo_2627780 *)Method_System_Action_BattleServantData___ctor__),
        !enemy_datalist)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v60,
          (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v5 = *v47) == 0LL) )
  {
LABEL_19:
    sub_B52A5C(v5, v6);
  }
  v61 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v4 + 32) = v61;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 32), v61, v62, v63, v64, v65, v66, v67);
  WarBoardMasterArray = (System_Int32_array **)WarBoardBattleEvent__MakeWarBoardMasterArray(this, v68);
  *(_QWORD *)(v4 + 40) = WarBoardMasterArray;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 40), WarBoardMasterArray, v70, v71, v72, v73, v74, v75);
  v76 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
                                 this,
                                 this->klass[1]._1.image);
  *(_QWORD *)(v4 + 56) = v76;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 56), v76, v77, v78, v79, v80, v81, v82);
  return (BattleWarBoardInfo_o *)v4;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  const MethodInfo *v4; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverPlayerMasterInfo; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42AE0D5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    byte_42AE0D5 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
                                                                                      this,
                                                                                      v4);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v3 )
      goto LABEL_11;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      TakeoverPlayerMasterInfo,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  }
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                                                                      this,
                                                                                      this->fields._MasterEnemy_k__BackingField,
                                                                                      v7);
  if ( !TakeoverPlayerMasterInfo )
  {
    if ( v3 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_11:
    sub_B52A5C(TakeoverPlayerMasterInfo, v6);
  }
  if ( !v3 )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    TakeoverPlayerMasterInfo,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
}


void __fastcall WarBoardBattleEvent__OnTurnCond(WarBoardBattleEvent_o *this, int32_t cond, const MethodInfo *method)
{
  this->fields.curTurnCondState |= cond;
}


void __fastcall WarBoardBattleEvent__PrevEndLoadNStage(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  BattleStartServantAiResetChecker_o *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AE0DC & 1) == 0 )
  {
    sub_B52984(&BattleStartServantAiResetChecker_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    byte_42AE0DC = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_B52A5C(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v16,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B52A5C(v4, v5);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v16.fields.current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_B52A5C(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v12 = (BattleStartServantAiResetChecker_o *)sub_B52A54(BattleStartServantAiResetChecker_TypeInfo);
      BattleStartServantAiResetChecker___ctor(v12, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_B52A5C(v13, v14);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v12, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
}


void __fastcall WarBoardBattleEvent__ProcOnActAiFixed(
        WarBoardBattleEvent_o *this,
        AiState_o *aiState,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  if ( aiState )
    AiState__SetOverwriteAiGroupId(aiState, aiBaseEnt, 0LL);
}


void __fastcall WarBoardBattleEvent__ProgressBuffTurn(
        WarBoardBattleEvent_o *this,
        BattleBuffData_o *buffData,
        BattleBuffData_BuffData_o *buff,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  int32_t progressTurnCond; // w8
  _BOOL4 v7; // w20

  if ( !buff )
    sub_B52A5C(this, buffData);
  progressTurnCond = buff->fields.progressTurnCond;
  v7 = isEndEnemyTurn;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && ((!buff->fields.isProgressEndEnemyTurn ^ v7) & 1) != 0 )
  {
    buff->fields.turn = UnityEngine_Mathf__Max_41525284(buff->fields.turn - 2, 0, 0LL);
    BattleBuffData_BuffData__TryExtendLife(buff, v7, 0LL);
  }
}


void __fastcall WarBoardBattleEvent__ProgressNoExecJoinServantsBuff(
        WarBoardBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  __int64 v17; // x19
  bool v18; // w21
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x3
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v32; // x1
  struct BattleData_o *v33; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  if ( (byte_42AE0E0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Except_int___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42AE0E0 = 1;
  }
  v7 = System_Linq_Enumerable__Except_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
         (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
         (const MethodInfo_1B613F0 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v7 )
    sub_B52A5C(0LL, v8);
  klass = v7->klass;
  v11 = v7;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(v7, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v9);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v11,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    sub_B52A5C(0LL, v15);
  v18 = isEndEnemyTurn;
  while ( 1 )
  {
    v19 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_16;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_16:
      v22 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v26 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_23;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_23:
      v27 = sub_AEB880(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v23);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v17, *(_QWORD *)(v27 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_B52A5C(0LL, v28);
    ServantData = BattleData__getServantData(Data_k__BackingField, v29, 0LL);
    if ( ServantData )
    {
      v33 = this->fields._Data_k__BackingField;
      if ( !v33 )
        sub_B52A5C(ServantData, v32);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_B52A5C(0LL, v32);
      BattleBuffData__turnProgressing(buffData, v33->fields.logic, v18, v29, 0LL);
    }
  }
  v35 = *(_QWORD *)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v36 = 0LL;
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_34;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_34:
    v38 = sub_AEB880(v17, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v17, *(_QWORD *)(v38 + 8));
}


bool __fastcall WarBoardBattleEvent__SendBattleResult(
        WarBoardBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v8; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  WarBoardBattleResultRequest_o *v10; // x21
  int32_t stageId; // w22
  Il2CppObject *WarBoardBattleInfo; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42AE0D0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string___ctor__);
    sub_B52984(&System_Action_string__TypeInfo);
    sub_B52984(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_WarBoardBattleEvent_SetResponseWarBoardData__);
    byte_42AE0D0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        func,
                                        (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v10 = (WarBoardBattleResultRequest_o *)Request_WarBoardWallAttackRequest;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v8);
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)this,
    Method_WarBoardBattleEvent_SetResponseWarBoardData__,
    (const MethodInfo_2627780 *)Method_System_Action_string___ctor__);
  if ( !v10 )
    sub_B52A5C(v14, v15);
  WarBoardBattleResultRequest__beginRequest(v10, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v13, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B52A5C(this, 0LL);
  if ( buff->fields.grantSkillType == 100 )
    BattleBuffData_BuffData__onState(buff, 4, 0LL);
}


void __fastcall WarBoardBattleEvent__SetResponseWarBoardData(
        WarBoardBattleEvent_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.warBoardDataJson = json;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.warBoardDataJson,
    (System_Int32_array **)json,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__SetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleData_SaveData_o *v8; // x20
  WarBoardBattleEvent_o *v9; // x19

  v8 = save;
  v9 = this;
  if ( (byte_42AE0DA & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B52984(&int___TypeInfo);
    byte_42AE0DA = 1;
  }
  if ( !v8 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v8->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_B5299C(int___TypeInfo, 0LL);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v9 )
LABEL_8:
    sub_B52A5C(this, save);
  v9->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)save,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleEvent__SetServantDataAfterPassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *v6; // x21
  int rootfsm; // w8
  unsigned int v8; // w23
  BattleServantData_o *v9; // x22
  struct BattleData_o *v10; // x8
  __int64 v11; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  Data_k__BackingField = (BattleData_o *)(isPlayer
                                        ? BattleData__getPlayerServantList(Data_k__BackingField, 0LL)
                                        : BattleData__getEnemyServantList(Data_k__BackingField, 0LL));
  v6 = (BattleServantData_array *)Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  rootfsm = (int)Data_k__BackingField->fields.rootfsm;
  if ( rootfsm >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= rootfsm )
      {
        v11 = sub_B52A88(Data_k__BackingField);
        sub_B52A28(v11, 0LL);
      }
      v9 = v6->m_Items[v8];
      if ( !v9 )
        break;
      Data_k__BackingField = (BattleData_o *)v9->fields.buffData;
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__DeleteDummyBuff((BattleBuffData_o *)Data_k__BackingField, 0LL);
      Data_k__BackingField = (BattleData_o *)BattleServantData__get_BuffData(v9, 0LL);
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__SetNoActBuffWithoutExecuteServant((BattleBuffData_o *)Data_k__BackingField, v6, 0LL);
      rootfsm = v6->max_length;
      if ( (int)++v8 >= rootfsm )
        goto LABEL_13;
    }
LABEL_20:
    sub_B52A5C(Data_k__BackingField, isPlayer);
  }
LABEL_13:
  if ( isPlayer )
    WarBoardBattleEvent__InitUsePlayerServantData(this, (const MethodInfo *)isPlayer);
  Data_k__BackingField = (BattleData_o *)WarBoardBattleEvent__IsSettedAllServant(this, (const MethodInfo *)isPlayer);
  if ( ((unsigned __int8)Data_k__BackingField & 1) != 0 )
  {
    v10 = this->fields._Data_k__BackingField;
    if ( !v10 )
      goto LABEL_20;
    Data_k__BackingField = (BattleData_o *)v10->fields.logic;
    if ( !Data_k__BackingField )
      goto LABEL_20;
    BattleLogic__updateFieldBuff((BattleLogic_o *)Data_k__BackingField, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleEvent__SetServantDataBeforePassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleServantData_array *Data_k__BackingField; // x0
  BattleServantData_array *v5; // x20
  int max_length; // w8
  unsigned int v7; // w23
  Il2CppClass **v8; // x8
  BattleServantData_o *v9; // x21
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x22
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  __int64 v12; // x0

  Data_k__BackingField = (BattleServantData_array *)this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  Data_k__BackingField = isPlayer
                       ? BattleData__getPlayerServantList((BattleData_o *)Data_k__BackingField, 0LL)
                       : BattleData__getEnemyServantList((BattleData_o *)Data_k__BackingField, 0LL);
  v5 = Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  max_length = Data_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v12 = sub_B52A88(Data_k__BackingField);
        sub_B52A28(v12, 0LL);
      }
      v8 = &v5->obj.klass + (int)v7;
      v9 = (BattleServantData_o *)v8[4];
      if ( !v9 )
        break;
      ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
      Data_k__BackingField = (BattleServantData_array *)BattleServantData__getUserSvtId(
                                                          (BattleServantData_o *)v8[4],
                                                          0LL);
      if ( !ServantEvent_k__BackingField )
        break;
      EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(
                           ServantEvent_k__BackingField,
                           (int64_t)Data_k__BackingField,
                           0LL);
      BattleServantData__SetTakeoverServantData(v9, EventServantInfo, 0LL);
      max_length = v5->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_13:
    sub_B52A5C(Data_k__BackingField, isPlayer);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x19
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x9

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B52A5C(this, method);
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = UnityEngine_Mathf__Max_41525284(
                                                                     enemyMasterInfo->fields.maxCommandSpell
                                                                   - MasterEnemy_k__BackingField->fields.commandSpellNum,
                                                                     0,
                                                                     0LL);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverPlayerMasterSkill(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardBattleEvent_o *v3; // x20
  WarBoardBattleEvent_o *MasterSkillChargeTurnArray; // x19
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *MasterSkillSealedTurnArray; // x0
  __int64 v7; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v9; // x20
  int32_t v10; // w21
  Il2CppObject *current; // x24
  int32_t v12; // w0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_42AE0CB & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_int____68584400);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    this = (WarBoardBattleEvent_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    byte_42AE0CB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v3->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarBoardBattleEvent__GetMasterSkillSealedTurnArray(MasterSkillChargeTurnArray, v3->fields._MasterPlayer_k__BackingField, v5);
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v9 = (System_Int32_array *)MasterSkillSealedTurnArray,
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_B52A5C(MasterSkillSealedTurnArray, v7);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    MasterSkillSealedTurnArray,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v10 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v13 )
      break;
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B52A5C(v13, v14);
    if ( !BYTE4(v15.fields.current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v10,
                                      (int32_t)v15.fields.current[2].monitor,
                                      (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
      v12 = BasicHelper__IndexValue_int_(
              v9,
              v10,
              (int32_t)current[3].klass,
              (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
      if ( v12 != -1 )
        LODWORD(current[3].klass) = v12;
      ++v10;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
}


int32_t __fastcall WarBoardBattleEvent__get_BgNo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.bgNo;
  else
    return 0;
}


int32_t __fastcall WarBoardBattleEvent__get_BgType(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.bgType;
  else
    return 0;
}


bool __fastcall WarBoardBattleEvent__get_IsPrecedingPlayer(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  return !WarBoardBattleInfo_k__BackingField || WarBoardBattleInfo_k__BackingField->fields.isPrecedingPlayer;
}


int32_t __fastcall WarBoardBattleEvent__get_LimitBattleTurn(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.battleTurn;
  else
    return -1;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__get_MasterEnemy(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._MasterEnemy_k__BackingField;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__get_MasterPlayer(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._MasterPlayer_k__BackingField;
}


WarBoardBattleServantEvent_o *__fastcall WarBoardBattleEvent__get_ServantEvent(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEvent_k__BackingField;
}


BattleWarBoardInfo_o *__fastcall WarBoardBattleEvent__get_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._WarBoardBattleInfo_k__BackingField;
}


int32_t __fastcall WarBoardBattleEvent__get_WarBoardStageId(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    return 0;
}


void __fastcall WarBoardBattleEvent__set_MasterEnemy(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MasterEnemy_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._MasterEnemy_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__set_MasterPlayer(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MasterPlayer_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._MasterPlayer_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__set_ServantEvent(
        WarBoardBattleEvent_o *this,
        WarBoardBattleServantEvent_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ServantEvent_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ServantEvent_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__set_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._WarBoardBattleInfo_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent_TakeoverSvtArg___ctor(
        WarBoardBattleEvent_TakeoverSvtArg_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Int32_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AE601 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42AE601 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_2F49F90 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicDistributeStar,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fieldIndiv,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE5FE & 1) == 0 )
  {
    sub_B52984(&WarBoardBattleEvent___c_TypeInfo);
    byte_42AE5FE = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardBattleEvent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBattleEvent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardBattleEvent___c___ctor(WarBoardBattleEvent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_0(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B52A5C(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B52A5C(this, 0LL);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B52A5C(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___ctor(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__0(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *svtList; // x20

  v4 = this;
  if ( (byte_42AE5FF & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
    byte_42AE5FF = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B52A5C(this, svt);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *svtList; // x20

  v4 = this;
  if ( (byte_42AE600 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
    byte_42AE600 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B52A5C(this, svt);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass69_0___ctor(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c__DisplayClass69_0___IsTakeOverNextBattleBuff_b__0(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_B52A5C(this, type);
  return buffEnt->fields.type == type;
}


void __fastcall WarBoardBattleEvent___c__DisplayClass76_0___ctor(
        WarBoardBattleEvent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c__DisplayClass76_0___CheckBuffCommonProgressTurn_b__0(
        WarBoardBattleEvent___c__DisplayClass76_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.svtUniqueId == id;
}


void __fastcall WarBoardBattleEvent___c__DisplayClass78_0___ctor(
        WarBoardBattleEvent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c__DisplayClass78_0___MakeTurnCondStateByServant_b__0(
        WarBoardBattleEvent___c__DisplayClass78_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.selfUniqueId == id;
}