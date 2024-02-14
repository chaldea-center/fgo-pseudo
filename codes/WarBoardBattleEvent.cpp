void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  BattleWarBoardEventLimitTurn_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Int32_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4212B9E & 1) == 0 )
  {
    sub_B0D8A4(&BattleWarBoardEventLimitTurn_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4212B9E = 1;
  }
  v6 = (BattleWarBoardEventLimitTurn_o *)sub_B0D974(BattleWarBoardEventLimitTurn_TypeInfo, method, v2);
  BattleWarBoardEventLimitTurn___ctor(v6, 0LL);
  this->fields.eventLimitTurn = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventLimitTurn,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.warBoardDataJson, v13, v14, v15, v16, v17, v18, v19);
  v20 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v20;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  BaseBattleEvent___ctor((BaseBattleEvent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardBattleEvent___c__DisplayClass76_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_4212B9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, *(_QWORD *)&svtUniqueId);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__, v7);
    sub_B0D8A4(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, v8);
    byte_4212B9A = 1;
  }
  v9 = (WarBoardBattleEvent___c__DisplayClass76_0_o *)sub_B0D974(
                                                        WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo,
                                                        *(_QWORD *)&svtUniqueId,
                                                        method);
  WarBoardBattleEvent___c__DisplayClass76_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.svtUniqueId = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v14 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v11, v12);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__24145568(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
}


// local variable allocation has failed, the output may be wrong!
BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetEventMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *warBoardInfo,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleWarBoardInfo_WarBoardMasterInfo_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v12; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__51_0; // x20
  Il2CppObject *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct WarBoardBattleEvent___c_StaticFields *v22; // x0
  BattleServantConfConponent_o *p__9__51_0; // x0
  struct WarBoardBattleEvent___c_StaticFields *v25; // x8
  Il2CppObject *v26; // x21
  struct WarBoardBattleEvent___c_StaticFields *v27; // x0

  if ( (byte_4212B8A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___, warBoardInfo);
    sub_B0D8A4(&Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v7);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, v8);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, v9);
    sub_B0D8A4(&WarBoardBattleEvent___c_TypeInfo, v10);
    byte_4212B8A = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
  v12 = WarBoardBattleEvent___c_TypeInfo;
  if ( isPlayer )
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v12 = WarBoardBattleEvent___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__51_0 = (System_Predicate_T__o *)static_fields->__9__51_0;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_1F687A8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B0D974(
                                          System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                          warBoardInfo,
                                          isPlayer);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v15,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v22 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v22->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v22->__9__51_0;
  }
  else
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v12 = WarBoardBattleEvent___c_TypeInfo;
    }
    v25 = v12->static_fields;
    _9__51_0 = (System_Predicate_T__o *)v25->__9__51_1;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_1F687A8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v25 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v25->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B0D974(
                                          System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                          warBoardInfo,
                                          isPlayer);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v26,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v27 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v27->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v27->__9__51_1;
  }
  sub_B0D840(p__9__51_0, (System_Int32_array **)_9__51_0, v16, v17, v18, v19, v20, v21);
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                      _9__51_0,
                                                      (const MethodInfo_1F687A8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_long__o *v12; // x19
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v14; // x0
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  Il2CppObject v17; // q0
  int64_t v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4212B9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4212B9D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v12 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_21;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v22.fields.current = (Il2CppObject *)v21.fields.fakeValue;
  *(_OWORD *)&v22.fields.list = *(_OWORD *)&v21.fields.currentCryptoKey;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v14 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B0D97C(v14);
    if ( BattleServantData__isDead((BattleServantData_o *)v22.fields.current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_B0D97C(0LL);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v17 = current[3];
        *(Il2CppObject *)&v21.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v21.fields.fakeValue = v17;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v20 = v21;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v20, 0LL);
        if ( !v12 )
          sub_B0D97C(v18);
        System_Collections_Generic_List_long___Add(
          v12,
          v18,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v12 )
LABEL_21:
    sub_B0D97C(Data_k__BackingField);
  return System_Collections_Generic_List_long___ToArray(
           v12,
           (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v6; // x0

  if ( (byte_4212B88 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, masterInfo);
    byte_4212B88 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
  if ( !result )
    sub_B0D97C(0LL);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    v6 = sub_B0D9A8(result);
    sub_B0D948(v6, 0LL);
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
  il2cpp_array_size_t max_length; // w8
  __int64 v6; // x0

  if ( (byte_4212B89 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, masterInfo);
    byte_4212B89 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
  if ( !result )
    sub_B0D97C(0LL);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    v6 = sub_B0D9A8(result);
    sub_B0D948(v6, 0LL);
  }
  result->m_Items[3] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetResetBuffTypes(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  DataManager_o *Instance; // x0

  if ( (byte_4212B90 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_15376/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/, v8);
    byte_4212B90 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_15376/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
                                0LL,
                                0LL);
  if ( !Instance )
  {
    if ( v9 )
      return System_Collections_Generic_List_int___ToArray(
               v9,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_B0D97C(Instance);
  }
  if ( !v9 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__GetResultBgmId(
        WarBoardBattleEvent_o *this,
        int32_t curBgmId,
        const MethodInfo *method)
{
  WarBoardBattleEvent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleData_o *Data_k__BackingField; // x8

  v4 = this;
  if ( (byte_4212B8B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&curBgmId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (WarBoardBattleEvent_o *)sub_B0D8A4(&StringLiteral_15377/*"WAR_BOARD_BATTLE_LOSE_BGM"*/, v6);
    byte_4212B8B = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_27713676(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15377/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_B0D840(
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
    sub_B0D97C(this);
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
  BattleData_o *Data_k__BackingField; // x8
  int32_t groupId; // w19
  int32_t forceId; // w22
  System_Int32_array *v10; // x20
  WarBoardBattleEvent_o *EnemyMasterCommandSpellCnt; // x0
  const MethodInfo *v12; // x6

  if ( (byte_4212B94 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, enemyMaster);
    byte_4212B94 = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  v6 = sub_B0D8BC(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B0D97C(v6);
  forceId = enemyMaster->fields.forceId;
  groupId = enemyMaster->fields.groupId;
  v10 = (System_Int32_array *)v6;
  EnemyMasterCommandSpellCnt = (WarBoardBattleEvent_o *)BattleData__getEnemyMasterCommandSpellCnt(
                                                          Data_k__BackingField,
                                                          0LL);
  return WarBoardBattleEvent__MakeMasterInfo(
           EnemyMasterCommandSpellCnt,
           forceId,
           groupId,
           v5,
           v10,
           (int32_t)EnemyMasterCommandSpellCnt,
           v12);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_int__o *v14; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v17; // x0
  Il2CppObject *current; // x23
  __int64 v19; // x0
  UserGameEntity_o *v20; // x21
  System_Int32_array *v21; // x19
  System_Int32_array *v22; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v24; // x6
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4212B93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4212B93 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v12, v13);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    masterSkillInfo,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v17 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B0D97C(v17);
    if ( !BYTE4(v27.fields.current[1].monitor) )
    {
      if ( !v11 )
        sub_B0D97C(v17);
      System_Collections_Generic_List_int___Add(
        v11,
        (int32_t)v27.fields.current[2].monitor,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v14 )
        sub_B0D97C(v19);
      System_Collections_Generic_List_int___Add(
        v14,
        (int32_t)current[3].klass,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v11
    || (v20 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v11, (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        !v14)
    || (v21 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v14, (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        !v20) )
  {
LABEL_19:
    sub_B0D97C(masterSkillInfo);
  }
  v22 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v20, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v21, v22, (int32_t)CommandSpell, v24);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardBattleEvent__GetWarBoardSquareIndividualityList(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSquareIndividualityList;
}


bool __fastcall WarBoardBattleEvent__GoNextScene(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *WarBoardDataEntityFromResponse; // x19
  System_String_o *warBoardDataJson; // x19
  AvalonSceneManager_o *Instance; // x0
  bool v7; // w20

  if ( (byte_4212B95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&WarBoardManager_TypeInfo, v3);
    byte_4212B95 = 1;
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
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v7 = AvalonSceneManager__checkLoadedScene(Instance, 80, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
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
          v8 = sub_B0D9A8(this);
          sub_B0D948(v8, 0LL);
        }
        if ( !result )
          sub_B0D97C(this);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x21
  WarBoardBattleServantEvent_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WarBoardBattleEvent_o *v23; // x0
  const MethodInfo *v24; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WarBoardBattleEvent_o *v32; // x0
  const MethodInfo *v33; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  char v41; // w0
  WarBoardBattleEvent_o *v42; // x0
  const MethodInfo *v43; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_4212B85 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardBattleServantEvent_TypeInfo, data);
    byte_4212B85 = 1;
  }
  BaseBattleEvent__Init((BaseBattleEvent_o *)this, data, 0LL);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, 0LL);
  if ( !BattleInfo )
    sub_B0D97C(0LL);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (System_Int32_array **)warBoardBattleInfo,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( this->fields._WarBoardBattleInfo_k__BackingField )
    svtInfo = this->fields._WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v16 = (WarBoardBattleServantEvent_o *)sub_B0D974(WarBoardBattleServantEvent_TypeInfo, v13, v14);
  WarBoardBattleServantEvent___ctor(v16, svtInfo, 0LL);
  this->fields._ServantEvent_k__BackingField = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ServantEvent_k__BackingField,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v23,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v24);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MasterPlayer_k__BackingField,
    (System_Int32_array **)EventMasterInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v34 = WarBoardBattleEvent__GetEventMasterInfo(v32, this->fields._WarBoardBattleInfo_k__BackingField, 0, v33);
  this->fields._MasterEnemy_k__BackingField = v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MasterEnemy_k__BackingField,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
          this,
          this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager((BaseBattleEvent_o *)this, v41 & 1, data, 0LL);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v42, v43);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)ResetBuffTypes,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(
                                  WarBoardBattleInfo_k__BackingField,
                                  0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battleSquareIndividualityList,
    (System_Int32_array **)BattleSquareIndividuality,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleEvent__InitBattleStartTurn(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleData_o *Data_k__BackingField; // x0
  char v17; // w23
  int v18; // w20
  _BOOL4 v19; // w21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_TSource__o *FieldServantList; // x24
  WarBoardBattleEvent___c_c *v23; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__73_0; // x25
  Il2CppObject *v26; // x26
  struct WarBoardBattleEvent___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  WarBoardBattleEvent___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x24
  struct WarBoardBattleEvent___c_StaticFields *v39; // x9
  char v40; // w23
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__73_1; // x25
  Il2CppObject *v42; // x22
  struct WarBoardBattleEvent___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  struct System_Int32_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x0

  if ( (byte_4212B99 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_int___, isPlayer);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_BattleServantData__int___ctor__, v10);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_B0D8A4(&System_Func_BattleServantData__int__TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, v13);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, v14);
    sub_B0D8A4(&WarBoardBattleEvent___c_TypeInfo, v15);
    byte_4212B99 = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                                           this,
                                           this->klass->vtable._5_Init.methodPtr,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v17 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v18 = (int)Data_k__BackingField,
        v19 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_B0D97C(Data_k__BackingField);
  }
  FieldServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(
                                                                            Data_k__BackingField,
                                                                            0,
                                                                            0LL);
  v23 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v23 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleServantData__bool__TypeInfo,
                                                                                    v20,
                                                                                    v21);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__73_0,
      v26,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
    v27 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v27->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__73_0,
      (System_Int32_array **)_9__73_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldServantList,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v37 = WarBoardBattleEvent___c_TypeInfo;
  v38 = v34;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v37 = WarBoardBattleEvent___c_TypeInfo;
  }
  v39 = v37->static_fields;
  v40 = v17 ^ isPlayer;
  _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v39->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v39 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v39->__9;
    _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_BattleServantData__int__TypeInfo,
                                                                                 v35,
                                                                                 v36);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__73_1,
      v42,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v43 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v43->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v43->__9__73_1,
      (System_Int32_array **)_9__73_1,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v38,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v51 = System_Linq_Enumerable__ToArray_int_(
          v50,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v51;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( (v40 & 1) != 0 )
  {
    v64 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_1B44D70 *)Method_System_Linq_Enumerable_Concat_int___);
    v65 = System_Linq_Enumerable__Distinct_int_(
            v64,
            (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
    aliveSvtUniqueIds = System_Linq_Enumerable__ToArray_int_(
                          v65,
                          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)p_joinCurTurnUniqueIds,
    (System_Int32_array **)aliveSvtUniqueIds,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( (v18 & v19 & 1) != 0 )
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 isLoseRetireClear; // w20
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v11; // x3

  v5 = this;
  if ( (byte_4212B8D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (WarBoardBattleEvent_o *)sub_B0D8A4(&StringLiteral_15378/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/, v7);
    byte_4212B8D = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_B0D97C(this);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15378/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v11);
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
        v9 = sub_B0D9A8(Data_k__BackingField);
        sub_B0D948(v9, 0LL);
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
    sub_B0D97C(Data_k__BackingField);
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
    sub_B0D97C(this);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B0D97C(this);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
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
    sub_B0D97C(Data_k__BackingField);
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
  if ( (byte_4212B86 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_BattleServantData__get_Count__,
                                      method);
    byte_4212B86 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B0D97C(this);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  _BOOL8 isParam; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v25; // x20

  if ( (byte_4212B97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, buff);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__, v11);
    sub_B0D8A4(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, v12);
    byte_4212B97 = 1;
  }
  v13 = sub_B0D974(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, buff, buffEnt);
  WarBoardBattleEvent___c__DisplayClass69_0___ctor((WarBoardBattleEvent___c__DisplayClass69_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = buffEnt;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)buffEnt, v15, v16, v17, v18, v19, v20);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 68, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_B0D97C(isParam);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v25 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v22, v23);
  System_Func_int__bool____ctor(
    v25,
    (Il2CppObject *)v13,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  return !BasicHelper__Any_int__24145568(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v25,
            (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_long__int__o *v12; // x19
  BattleData_o *Data_k__BackingField; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x21
  WarBoardBattleEvent___c_c *v17; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__57_0; // x22
  Il2CppObject *v20; // x23
  struct WarBoardBattleEvent___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v30; // x21
  struct BattleData_o *v31; // x9
  int32_t criticalstars; // w9
  unsigned int v33; // w20
  int v34; // w22
  int i; // w23
  int32_t v36; // w2
  __int64 v38; // x0

  if ( (byte_4212B8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v7);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, v10);
    sub_B0D8A4(&WarBoardBattleEvent___c_TypeInfo, v11);
    byte_4212B8F = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                                method,
                                                                v2);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v12,
    (const MethodInfo_2EB16B0 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_25;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  Data_k__BackingField,
                                                                                  0LL);
  v17 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v17 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleServantData__bool__TypeInfo,
                                                                                    v14,
                                                                                    v15);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__57_0,
      v20,
      Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
    v21 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v21->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v28,
                                           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_25;
  rootfsm = Data_k__BackingField->fields.rootfsm;
  v30 = Data_k__BackingField;
  if ( rootfsm )
  {
    v31 = this->fields._Data_k__BackingField;
    if ( !v31 )
      goto LABEL_25;
    if ( (int)rootfsm >= 1 )
    {
      criticalstars = v31->fields.criticalstars;
      v33 = 0;
      v34 = criticalstars / (int)rootfsm;
      for ( i = criticalstars % (int)rootfsm; ; --i )
      {
        if ( v33 >= (unsigned int)rootfsm )
        {
          v38 = sub_B0D9A8(Data_k__BackingField);
          sub_B0D948(v38, 0LL);
        }
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v30->fields.fsm + (int)v33);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v12 )
          break;
        if ( i <= 0 )
          v36 = v34;
        else
          v36 = v34 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v12,
          (int64_t)Data_k__BackingField,
          v36,
          (const MethodInfo_2EB2264 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(rootfsm) = v30->fields.rootfsm;
        if ( (int)++v33 >= (int)rootfsm )
          return v12;
      }
LABEL_25:
      sub_B0D97C(Data_k__BackingField);
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__MakeMasterInfo(
        WarBoardBattleEvent_o *this,
        int32_t forceId,
        int32_t groupId,
        System_Int32_array *chargeArray,
        System_Int32_array *sealedArray,
        int32_t spellNum,
        const MethodInfo *method)
{
  __int64 v12; // x1
  BattleWarBoardInfo_WarBoardMasterInfo_o *v13; // x21
  __int64 v14; // x0

  if ( (byte_4212B92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, *(_QWORD *)&forceId);
    sub_B0D8A4(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo, v12);
    byte_4212B92 = 1;
  }
  v13 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_B0D974(
                                                     BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo,
                                                     *(_QWORD *)&forceId,
                                                     *(_QWORD *)&groupId);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v13, 0LL);
  if ( !v13 )
    sub_B0D97C(v14);
  v13->fields.forceId = forceId;
  v13->fields.groupId = groupId;
  v13->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  v13->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  v13->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  v13->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  v13->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  v13->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  v13->fields.commandSpellNum = spellNum;
  return v13;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardBattleEvent___c__DisplayClass78_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_4212B9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, *(_QWORD *)&selfUniqueId);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__, v7);
    sub_B0D8A4(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, v8);
    byte_4212B9B = 1;
  }
  v9 = (WarBoardBattleEvent___c__DisplayClass78_0_o *)sub_B0D974(
                                                        WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo,
                                                        *(_QWORD *)&selfUniqueId,
                                                        method);
  WarBoardBattleEvent___c__DisplayClass78_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.selfUniqueId = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v14 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v11, v12);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__24145568(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v14,
         (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  BattleData_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v22; // w8
  struct BattleWarBoardInfo_o *v23; // x8
  __int64 v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array **logic; // x1
  const MethodInfo *v33; // x1
  System_Int32_array **DistributeStar; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **ServantEvent_k__BackingField; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  BattleData_o **v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x23
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  struct BattleData_o *v73; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v75; // x24
  __int64 v76; // x1
  __int64 v77; // x2
  struct BattleData_o *v78; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *enemy_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v80; // x24
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  const MethodInfo *v88; // x1
  System_Int32_array **WarBoardMasterArray; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7

  if ( (byte_4212B8E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleServantData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleServantData__TypeInfo, v4);
    sub_B0D8A4(&BattleWarBoardInfo_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v9);
    sub_B0D8A4(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__, v11);
    sub_B0D8A4(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__, v12);
    sub_B0D8A4(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, v13);
    byte_4212B8E = 1;
  }
  v14 = sub_B0D974(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, method, v2);
  WarBoardBattleEvent___c__DisplayClass56_0___ctor((WarBoardBattleEvent___c__DisplayClass56_0_o *)v14, 0LL);
  v17 = sub_B0D974(BattleWarBoardInfo_TypeInfo, v15, v16);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v17, 0LL);
  v18 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                          this,
                          this->klass->vtable._5_Init.methodPtr);
  if ( !v17 )
    goto LABEL_19;
  *(_BYTE *)(v17 + 20) = (unsigned __int8)v18 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v22 = WarBoardBattleInfo_k__BackingField ? WarBoardBattleInfo_k__BackingField->fields.battleTurn : -1;
  *(_DWORD *)(v17 + 24) = v22;
  v23 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v23 )
    LODWORD(v23) = v23->fields.stageId;
  *(_DWORD *)(v17 + 16) = (_DWORD)v23;
  v24 = sub_B0D974(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v19, v20);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v24, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  if ( !v24 )
    goto LABEL_19;
  logic = (System_Int32_array **)Data_k__BackingField->fields.logic;
  *(_QWORD *)(v24 + 16) = logic;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 16), logic, v25, v26, v27, v28, v29, v30);
  DistributeStar = (System_Int32_array **)WarBoardBattleEvent__MakeDistributeStar(this, v33);
  *(_QWORD *)(v24 + 24) = DistributeStar;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 24), DistributeStar, v35, v36, v37, v38, v39, v40);
  v18 = this->fields._Data_k__BackingField;
  if ( !v18 )
    goto LABEL_19;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(v18, 0LL);
  *(_QWORD *)(v24 + 32) = QuestIndividualities;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 32), QuestIndividualities, v42, v43, v44, v45, v46, v47);
  ServantEvent_k__BackingField = (System_Int32_array **)this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v24 + 40) = ServantEvent_k__BackingField;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 40), ServantEvent_k__BackingField, v49, v50, v51, v52, v53, v54);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 24) = v24;
  v61 = (BattleData_o **)(v14 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)v24, v55, v56, v57, v58, v59, v60);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo,
                                                                                                  v62,
                                                                                                  v63);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v14 + 16) = v64;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)v64, v65, v66, v67, v68, v69, v70);
  v73 = this->fields._Data_k__BackingField;
  if ( !v73 )
    goto LABEL_19;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v73->fields.player_datalist;
  v75 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleServantData__TypeInfo,
                                                                               v71,
                                                                               v72);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v75,
    (Il2CppObject *)v14,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleServantData___ctor__);
  if ( !player_datalist
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          player_datalist,
          (System_Action_T__o *)v75,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v78 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v78->fields.enemy_datalist,
        v80 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BattleServantData__TypeInfo,
                                                                                     v76,
                                                                                     v77),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v80,
          (Il2CppObject *)v14,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          (const MethodInfo_246EA3C *)Method_System_Action_BattleServantData___ctor__),
        !enemy_datalist)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v80,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v18 = *v61) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(v18);
  }
  v81 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v17 + 32) = v81;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), v81, v82, v83, v84, v85, v86, v87);
  WarBoardMasterArray = (System_Int32_array **)WarBoardBattleEvent__MakeWarBoardMasterArray(this, v88);
  *(_QWORD *)(v17 + 40) = WarBoardMasterArray;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), WarBoardMasterArray, v90, v91, v92, v93, v94, v95);
  v96 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
                                 this,
                                 this->klass[1]._1.image);
  *(_QWORD *)(v17 + 56) = v96;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 56), v96, v97, v98, v99, v100, v101, v102);
  return (BattleWarBoardInfo_o *)v17;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  const MethodInfo *v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverPlayerMasterInfo; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4212B91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v6);
    byte_4212B91 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
                                                                                      this,
                                                                                      v8);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v7 )
      goto LABEL_11;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v7,
      TakeoverPlayerMasterInfo,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  }
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                                                                      this,
                                                                                      this->fields._MasterEnemy_k__BackingField,
                                                                                      v10);
  if ( !TakeoverPlayerMasterInfo )
  {
    if ( v7 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_11:
    sub_B0D97C(TakeoverPlayerMasterInfo);
  }
  if ( !v7 )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v7,
    TakeoverPlayerMasterInfo,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
}


void __fastcall WarBoardBattleEvent__OnTurnCond(WarBoardBattleEvent_o *this, int32_t cond, const MethodInfo *method)
{
  this->fields.curTurnCondState |= cond;
}


void __fastcall WarBoardBattleEvent__PrevEndLoadNStage(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  BattleStartServantAiResetChecker_o *v17; // x24
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4212B98 & 1) == 0 )
  {
    sub_B0D8A4(&BattleStartServantAiResetChecker_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    byte_4212B98 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_B0D97C(Data_k__BackingField);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v20,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B0D97C(v8);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v20.fields.current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_B0D97C(UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v17 = (BattleStartServantAiResetChecker_o *)sub_B0D974(BattleStartServantAiResetChecker_TypeInfo, v15, v16);
      BattleStartServantAiResetChecker___ctor(v17, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_B0D97C(v18);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v17, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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
    sub_B0D97C(this);
  progressTurnCond = buff->fields.progressTurnCond;
  v7 = isEndEnemyTurn;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && ((!buff->fields.isProgressEndEnemyTurn ^ v7) & 1) != 0 )
  {
    buff->fields.turn = UnityEngine_Mathf__Max_40819140(buff->fields.turn - 2, 0, 0LL);
  }
}


void __fastcall WarBoardBattleEvent__ProgressNoExecJoinServantsBuff(
        WarBoardBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x19
  bool v18; // w21
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  int32_t v27; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  struct BattleData_o *v30; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0

  if ( (byte_4212B9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Except_int___, execUniqueIds);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4212B9C = 1;
  }
  v11 = System_Linq_Enumerable__Except_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
          (const MethodInfo_1B49E80 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v11 )
    sub_B0D97C(0LL);
  klass = v11->klass;
  v13 = v11;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v11, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v13,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    sub_B0D97C(0LL);
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
      v22 = sub_AA67A0(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v25 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_23;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_23:
      v26 = sub_AA67A0(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_B0D97C(0LL);
    ServantData = BattleData__getServantData(Data_k__BackingField, v27, 0LL);
    if ( ServantData )
    {
      v30 = this->fields._Data_k__BackingField;
      if ( !v30 )
        sub_B0D97C(ServantData);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_B0D97C(0LL);
      BattleBuffData__turnProgressing(buffData, v30->fields.logic, v18, v27, 0LL);
    }
  }
  v32 = *(_QWORD *)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v33 = 0LL;
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_34;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_34:
    v35 = sub_AA67A0(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v17, *(_QWORD *)(v35 + 8));
}


bool __fastcall WarBoardBattleEvent__SendBattleResult(
        WarBoardBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v12; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  WarBoardBattleResultRequest_o *v14; // x21
  int32_t stageId; // w22
  Il2CppObject *WarBoardBattleInfo; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x24
  __int64 v20; // x0

  if ( (byte_4212B8C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, arg);
    sub_B0D8A4(&System_Action_string__TypeInfo, v7);
    sub_B0D8A4(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardBattleEvent_SetResponseWarBoardData__, v10);
    byte_4212B8C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        func,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v14 = (WarBoardBattleResultRequest_o *)Request_WarBoardWallAttackRequest;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v12);
  v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_string__TypeInfo,
                                                                               v17,
                                                                               v18);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v19,
    (Il2CppObject *)this,
    Method_WarBoardBattleEvent_SetResponseWarBoardData__,
    (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
  if ( !v14 )
    sub_B0D97C(v20);
  WarBoardBattleResultRequest__beginRequest(v14, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v19, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
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
  sub_B0D840(
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
  WarBoardBattleEvent_o *v9; // x19
  System_Int32_array **joinCurTurnUniqueIds; // x1

  v9 = this;
  if ( (byte_4212B96 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B0D8A4(&int___TypeInfo, save);
    byte_4212B96 = 1;
  }
  if ( !save )
    goto LABEL_8;
  joinCurTurnUniqueIds = (System_Int32_array **)save->fields.joinCurTurnUniqueIds;
  if ( !joinCurTurnUniqueIds )
  {
    this = (WarBoardBattleEvent_o *)sub_B0D8BC(int___TypeInfo, 0LL);
    joinCurTurnUniqueIds = (System_Int32_array **)this;
  }
  if ( !v9 )
LABEL_8:
    sub_B0D97C(this);
  v9->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)joinCurTurnUniqueIds;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.joinCurTurnUniqueIds,
    joinCurTurnUniqueIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__SetServantDataAfterPassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v6; // x1
  BattleServantData_array *v7; // x21
  int rootfsm; // w8
  unsigned int v9; // w23
  BattleServantData_o *v10; // x22
  struct BattleData_o *v11; // x8
  __int64 v12; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  Data_k__BackingField = (BattleData_o *)(isPlayer
                                        ? BattleData__getPlayerServantList(Data_k__BackingField, 0LL)
                                        : BattleData__getEnemyServantList(Data_k__BackingField, 0LL));
  v7 = (BattleServantData_array *)Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  rootfsm = (int)Data_k__BackingField->fields.rootfsm;
  if ( rootfsm >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= rootfsm )
      {
        v12 = sub_B0D9A8(Data_k__BackingField);
        sub_B0D948(v12, 0LL);
      }
      v10 = v7->m_Items[v9];
      if ( !v10 )
        break;
      Data_k__BackingField = (BattleData_o *)v10->fields.buffData;
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__DeleteDummyBuff((BattleBuffData_o *)Data_k__BackingField, 0LL);
      Data_k__BackingField = (BattleData_o *)BattleServantData__get_BuffData(v10, 0LL);
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__SetNoActBuffWithoutExecuteServant((BattleBuffData_o *)Data_k__BackingField, v7, 0LL);
      rootfsm = v7->max_length;
      if ( (int)++v9 >= rootfsm )
        goto LABEL_13;
    }
LABEL_20:
    sub_B0D97C(Data_k__BackingField);
  }
LABEL_13:
  if ( isPlayer )
    WarBoardBattleEvent__InitUsePlayerServantData(this, v6);
  Data_k__BackingField = (BattleData_o *)WarBoardBattleEvent__IsSettedAllServant(this, v6);
  if ( ((unsigned __int8)Data_k__BackingField & 1) != 0 )
  {
    v11 = this->fields._Data_k__BackingField;
    if ( !v11 )
      goto LABEL_20;
    Data_k__BackingField = (BattleData_o *)v11->fields.logic;
    if ( !Data_k__BackingField )
      goto LABEL_20;
    BattleLogic__updateFieldBuff((BattleLogic_o *)Data_k__BackingField, 0LL);
  }
}


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
        v12 = sub_B0D9A8(Data_k__BackingField);
        sub_B0D948(v12, 0LL);
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
    sub_B0D97C(Data_k__BackingField);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x19
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x9

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B0D97C(this);
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = UnityEngine_Mathf__Max_40819140(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardBattleEvent_o *MasterSkillChargeTurnArray; // x19
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *MasterSkillSealedTurnArray; // x0
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v12; // x20
  int32_t v13; // w21
  Il2CppObject *current; // x24
  int32_t v15; // w0
  _BOOL8 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4212B87 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v6);
    this = (WarBoardBattleEvent_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__,
                                      v7);
    byte_4212B87 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v3->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarBoardBattleEvent__GetMasterSkillSealedTurnArray(MasterSkillChargeTurnArray, v3->fields._MasterPlayer_k__BackingField, v9);
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v12 = (System_Int32_array *)MasterSkillSealedTurnArray,
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_B0D97C(MasterSkillSealedTurnArray);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    MasterSkillSealedTurnArray,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v13 = 0;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v16 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B0D97C(v16);
    if ( !BYTE4(v17.fields.current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v13,
                                      (int32_t)v17.fields.current[2].monitor,
                                      (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
      v15 = BasicHelper__IndexValue_int_(
              v12,
              v13,
              (int32_t)current[3].klass,
              (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
      if ( v15 != -1 )
        LODWORD(current[3].klass) = v15;
      ++v13;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_long__int__o *v6; // x20
  struct System_Int32_array *v7; // x0

  if ( (byte_4212699 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    byte_4212699 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                               method,
                                                               v2);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v6,
    (const MethodInfo_2EB16B0 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v6;
  sub_B0D840(&this->fields.dicDistributeStar, v6);
  v7 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v7;
  sub_B0D840(&this->fields.fieldIndiv, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0

  if ( (byte_4212696 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardBattleEvent___c_TypeInfo, v1);
    byte_4212696 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardBattleEvent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardBattleEvent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B0D97C(this);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B0D97C(this);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B0D97C(this);
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
  if ( (byte_4212697 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B0D8A4(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4212697 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *svtList; // x20

  v4 = this;
  if ( (byte_4212698 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B0D8A4(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4212698 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
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
    sub_B0D97C(this);
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