void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleWarBoardEventLimitTurn_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42E696E & 1) == 0 )
  {
    sub_B5D5C4(&BattleWarBoardEventLimitTurn_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E696E = 1;
  }
  v11 = (BattleWarBoardEventLimitTurn_o *)sub_B5D694(BattleWarBoardEventLimitTurn_TypeInfo);
  BattleWarBoardEventLimitTurn___ctor(v11, 0LL);
  this->fields.eventLimitTurn = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventLimitTurn,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.warBoardDataJson, v18, v19, v20, v21, v22, v23, v24);
  v25 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  BaseBattleEvent___ctor((BaseBattleEvent_o *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardBattleEvent___c__DisplayClass76_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v22; // x20

  if ( (byte_42E696A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, svtUniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, v15, v16, v17);
    byte_42E696A = 1;
  }
  v18 = (WarBoardBattleEvent___c__DisplayClass76_0_o *)sub_B5D694(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass76_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.svtUniqueId = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v22 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__28142236(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetEventMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *warBoardInfo,
        bool isPlayer,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v22; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__51_0; // x20
  Il2CppObject *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct WarBoardBattleEvent___c_StaticFields *v32; // x0
  BattleServantConfConponent_o *p__9__51_0; // x0
  struct WarBoardBattleEvent___c_StaticFields *v35; // x8
  Il2CppObject *v36; // x21
  struct WarBoardBattleEvent___c_StaticFields *v37; // x0

  if ( (byte_42E695A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___,
      (_DWORD)warBoardInfo,
      isPlayer,
      method);
    sub_B5D5C4(&Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, v15, v16, v17);
    sub_B5D5C4(&WarBoardBattleEvent___c_TypeInfo, v18, v19, v20);
    byte_42E695A = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
  v22 = WarBoardBattleEvent___c_TypeInfo;
  if ( isPlayer )
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v22 = WarBoardBattleEvent___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__51_0 = (System_Predicate_T__o *)static_fields->__9__51_0;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_1FC03F4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B5D694(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v25,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v32 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v32->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v32->__9__51_0;
  }
  else
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v22 = WarBoardBattleEvent___c_TypeInfo;
    }
    v35 = v22->static_fields;
    _9__51_0 = (System_Predicate_T__o *)v35->__9__51_1;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_1FC03F4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v35 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v35->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B5D694(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v36,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v37 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v37->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v37->__9__51_1;
  }
  sub_B5D560(p__9__51_0, (System_Int32_array **)_9__51_0, v26, v27, v28, v29, v30, v31);
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                      _9__51_0,
                                                      (const MethodInfo_1FC03F4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_long__o *v29; // x19
  __int64 v30; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v36; // x1
  Il2CppObject v37; // q0
  int64_t v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_42E696D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    byte_42E696D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v29 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_21;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v42.fields.current = (Il2CppObject *)v41.fields.fakeValue;
  *(_OWORD *)&v42.fields.list = *(_OWORD *)&v41.fields.currentCryptoKey;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v32 )
      break;
    current = v42.fields.current;
    if ( !v42.fields.current )
      sub_B5D69C(v32, v33);
    if ( BattleServantData__isDead((BattleServantData_o *)v42.fields.current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_B5D69C(0LL, v36);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v37 = current[3];
        *(Il2CppObject *)&v41.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v41.fields.fakeValue = v37;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v40 = v41;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v40, 0LL);
        if ( !v29 )
          sub_B5D69C(v38, v38);
        System_Collections_Generic_List_long___Add(
          v29,
          v38,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v29 )
LABEL_21:
    sub_B5D69C(Data_k__BackingField, v30);
  return System_Collections_Generic_List_long___ToArray(
           v29,
           (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *result; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x0

  if ( (byte_42E6958 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)masterInfo, (_DWORD)method, v3);
    byte_42E6958 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    v8 = sub_B5D6C8(result);
    sub_B5D668(v8, 0LL);
  }
  result->m_Items[3] = masterInfo->fields.skill3Ct;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *result; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x0

  if ( (byte_42E6959 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)masterInfo, (_DWORD)method, v3);
    byte_42E6959 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    v8 = sub_B5D6C8(result);
    sub_B5D668(v8, 0LL);
  }
  result->m_Items[3] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetResetBuffTypes(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_int__o *v22; // x19
  DataManager_o *Instance; // x0
  __int64 v24; // x1

  if ( (byte_42E6960 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_15488/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/, v19, v20, v21);
    byte_42E6960 = 1;
  }
  v22 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_15488/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
                                0LL,
                                0LL);
  if ( !Instance )
  {
    if ( v22 )
      return System_Collections_Generic_List_int___ToArray(
               v22,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_B5D69C(Instance, v24);
  }
  if ( !v22 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__GetResultBgmId(
        WarBoardBattleEvent_o *this,
        int32_t curBgmId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardBattleEvent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct BattleData_o *Data_k__BackingField; // x8

  v5 = this;
  if ( (byte_42E695B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, curBgmId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    this = (WarBoardBattleEvent_o *)sub_B5D5C4(&StringLiteral_15489/*"WAR_BOARD_BATTLE_LOSE_BGM"*/, v9, v10, v11);
    byte_42E695B = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_28723684(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15489/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_B5D69C(this, *(_QWORD *)&curBgmId);
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
    sub_B5D69C(this, 0LL);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_B5D560(
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
    sub_B5D69C(this, svtData);
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
  __int64 v3; // x3
  System_Int32_array *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  BattleData_o *Data_k__BackingField; // x8
  int32_t groupId; // w19
  int32_t forceId; // w22
  System_Int32_array *v12; // x20
  WarBoardBattleEvent_o *EnemyMasterCommandSpellCnt; // x0
  const MethodInfo *v14; // x6

  if ( (byte_42E6964 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)enemyMaster, (_DWORD)method, v3);
    byte_42E6964 = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v6 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v7 = sub_B5D5DC(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B5D69C(v7, v8);
  forceId = enemyMaster->fields.forceId;
  groupId = enemyMaster->fields.groupId;
  v12 = (System_Int32_array *)v7;
  EnemyMasterCommandSpellCnt = (WarBoardBattleEvent_o *)BattleData__getEnemyMasterCommandSpellCnt(
                                                          Data_k__BackingField,
                                                          0LL);
  return WarBoardBattleEvent__MakeMasterInfo(
           EnemyMasterCommandSpellCnt,
           forceId,
           groupId,
           v6,
           v12,
           (int32_t)EnemyMasterCommandSpellCnt,
           v14);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  System_Collections_Generic_List_int__o *v27; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  __int64 v29; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  UserGameEntity_o *v36; // x21
  System_Int32_array *v37; // x19
  System_Int32_array *v38; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v40; // x6
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E6963 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42E6963 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    masterSkillInfo,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v31 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B5D69C(v31, v32);
    if ( !BYTE4(v43.fields.current[1].monitor) )
    {
      if ( !v26 )
        sub_B5D69C(v31, v32);
      System_Collections_Generic_List_int___Add(
        v26,
        (int32_t)v43.fields.current[2].monitor,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v27 )
        sub_B5D69C(v34, v35);
      System_Collections_Generic_List_int___Add(
        v27,
        (int32_t)current[3].klass,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v26
    || (v36 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v26, (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v27)
    || (v37 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v27, (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v36) )
  {
LABEL_19:
    sub_B5D69C(masterSkillInfo, v29);
  }
  v38 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v36, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v37, v38, (int32_t)CommandSpell, v40);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardBattleEvent__GetWarBoardSquareIndividualityList(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSquareIndividualityList;
}


bool __fastcall WarBoardBattleEvent__GoNextScene(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *WarBoardDataEntityFromResponse; // x19
  System_String_o *warBoardDataJson; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v11; // x1
  bool v12; // w20

  if ( (byte_42E6965 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardManager_TypeInfo, v5, v6, v7);
    byte_42E6965 = 1;
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
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v12 = AvalonSceneManager__checkLoadedScene(Instance, 80, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v11);
  }
  if ( v12 )
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
          v8 = sub_B5D6C8(this);
          sub_B5D668(v8, 0LL);
        }
        if ( !result )
          sub_B5D69C(this, result);
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
  __int64 v3; // x3
  BattleInfoData_o *BattleInfo; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
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

  if ( (byte_42E6955 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardBattleServantEvent_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6955 = 1;
  }
  BaseBattleEvent__Init((BaseBattleEvent_o *)this, data, 0LL);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, 0LL);
  if ( !BattleInfo )
    sub_B5D69C(0LL, v7);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (System_Int32_array **)warBoardBattleInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( this->fields._WarBoardBattleInfo_k__BackingField )
    svtInfo = this->fields._WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v16 = (WarBoardBattleServantEvent_o *)sub_B5D694(WarBoardBattleServantEvent_TypeInfo);
  WarBoardBattleServantEvent___ctor(v16, svtInfo, 0LL);
  this->fields._ServantEvent_k__BackingField = v16;
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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


void __fastcall WarBoardBattleEvent__InitBattleStartTurn(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  BattleData_o *Data_k__BackingField; // x0
  __int64 v40; // x1
  char v41; // w23
  int v42; // w20
  _BOOL4 v43; // w21
  System_Collections_Generic_IEnumerable_TSource__o *FieldServantList; // x24
  WarBoardBattleEvent___c_c *v45; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__73_0; // x25
  Il2CppObject *v48; // x26
  struct WarBoardBattleEvent___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  WarBoardBattleEvent___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x24
  struct WarBoardBattleEvent___c_StaticFields *v59; // x9
  char v60; // w23
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__73_1; // x25
  Il2CppObject *v62; // x22
  struct WarBoardBattleEvent___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  struct System_Int32_array *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x0

  if ( (byte_42E6969 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_int___, isPlayer, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_BattleServantData__int___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Func_BattleServantData__int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, v30, v31, v32);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, v33, v34, v35);
    sub_B5D5C4(&WarBoardBattleEvent___c_TypeInfo, v36, v37, v38);
    byte_42E6969 = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                                           this,
                                           this->klass->vtable._5_Init.methodPtr,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v41 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v42 = (int)Data_k__BackingField,
        v43 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_B5D69C(Data_k__BackingField, v40);
  }
  FieldServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(
                                                                            Data_k__BackingField,
                                                                            0,
                                                                            0LL);
  v45 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v45 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__73_0,
      v48,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
    v49 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v49->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__73_0,
      (System_Int32_array **)_9__73_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldServantList,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v57 = WarBoardBattleEvent___c_TypeInfo;
  v58 = v56;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v57 = WarBoardBattleEvent___c_TypeInfo;
  }
  v59 = v57->static_fields;
  v60 = v41 ^ isPlayer;
  _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v59->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v59 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v59->__9;
    _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__73_1,
      v62,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v63 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v63->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v63->__9__73_1,
      (System_Int32_array **)_9__73_1,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v58,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v71 = System_Linq_Enumerable__ToArray_int_(
          v70,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v71;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( (v60 & 1) != 0 )
  {
    v84 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_1CA4918 *)Method_System_Linq_Enumerable_Concat_int___);
    v85 = System_Linq_Enumerable__Distinct_int_(
            v84,
            (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
    aliveSvtUniqueIds = System_Linq_Enumerable__ToArray_int_(
                          v85,
                          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_joinCurTurnUniqueIds,
    (System_Int32_array **)aliveSvtUniqueIds,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  if ( (v42 & v43 & 1) != 0 )
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
    sub_B5D69C(this, svtData);
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
    sub_B5D69C(0LL, stage);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 isLoseRetireClear; // w20
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v15; // x3

  v5 = this;
  if ( (byte_42E695D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    this = (WarBoardBattleEvent_o *)sub_B5D5C4(&StringLiteral_15490/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/, v9, v10, v11);
    byte_42E695D = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_B5D69C(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15490/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v15);
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
        v9 = sub_B5D6C8(Data_k__BackingField);
        sub_B5D668(v9, 0LL);
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
    sub_B5D69C(Data_k__BackingField, method);
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
    sub_B5D69C(this, 0LL);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B5D69C(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(Data_k__BackingField, method);
  }
  return 0;
}


bool __fastcall WarBoardBattleEvent__IsSettedAllServant(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardBattleEvent_o *v4; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  struct System_Collections_Generic_List_BattleServantData__o *enemy_datalist; // x9
  struct System_Collections_Generic_List_BattleServantData__o *player_datalist; // x8

  v4 = this;
  if ( (byte_42E6956 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_BattleServantData__get_Count__,
                                      (_DWORD)method,
                                      v2,
                                      v3);
    byte_42E6956 = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x22
  _BOOL8 isParam; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v32; // x20

  if ( (byte_42E6967 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)buff, (_DWORD)buffEnt, baseVals);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__, v15, v16, v17);
    sub_B5D5C4(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, v18, v19, v20);
    byte_42E6967 = 1;
  }
  v21 = sub_B5D694(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass69_0___ctor((WarBoardBattleEvent___c__DisplayClass69_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_13;
  *(_QWORD *)(v21 + 16) = buffEnt;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)buffEnt, v24, v25, v26, v27, v28, v29);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 68, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_B5D69C(isParam, v23);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v32 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v32,
    (Il2CppObject *)v21,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  return !BasicHelper__Any_int__28142236(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v32,
            (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_Dictionary_long__int__o *v29; // x19
  __int64 v30; // x1
  BattleData_o *Data_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x21
  WarBoardBattleEvent___c_c *v33; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__57_0; // x22
  Il2CppObject *v36; // x23
  struct WarBoardBattleEvent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v46; // x21
  struct BattleData_o *v47; // x9
  int32_t criticalstars; // w9
  unsigned int v49; // w20
  int v50; // w22
  int i; // w23
  int32_t v52; // w2
  __int64 v54; // x0

  if ( (byte_42E695F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, v23, v24, v25);
    sub_B5D5C4(&WarBoardBattleEvent___c_TypeInfo, v26, v27, v28);
    byte_42E695F = 1;
  }
  v29 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v29,
    (const MethodInfo_2F5434C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_25;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  Data_k__BackingField,
                                                                                  0LL);
  v33 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v33 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__57_0,
      v36,
      Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
    v37 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v37->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v44,
                                           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_25;
  rootfsm = Data_k__BackingField->fields.rootfsm;
  v46 = Data_k__BackingField;
  if ( rootfsm )
  {
    v47 = this->fields._Data_k__BackingField;
    if ( !v47 )
      goto LABEL_25;
    if ( (int)rootfsm >= 1 )
    {
      criticalstars = v47->fields.criticalstars;
      v49 = 0;
      v50 = criticalstars / (int)rootfsm;
      for ( i = criticalstars % (int)rootfsm; ; --i )
      {
        if ( v49 >= (unsigned int)rootfsm )
        {
          v54 = sub_B5D6C8(Data_k__BackingField);
          sub_B5D668(v54, 0LL);
        }
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v46->fields.fsm + (int)v49);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v29 )
          break;
        if ( i <= 0 )
          v52 = v50;
        else
          v52 = v50 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v29,
          (int64_t)Data_k__BackingField,
          v52,
          (const MethodInfo_2F54F00 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(rootfsm) = v46->fields.rootfsm;
        if ( (int)++v49 >= (int)rootfsm )
          return v29;
      }
LABEL_25:
      sub_B5D69C(Data_k__BackingField, v30);
    }
  }
  return v29;
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleWarBoardInfo_WarBoardMasterInfo_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42E6962 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, forceId, groupId, chargeArray);
    sub_B5D5C4(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo, v12, v13, v14);
    byte_42E6962 = 1;
  }
  v15 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_B5D694(BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  v15->fields.forceId = forceId;
  v15->fields.groupId = groupId;
  v15->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  v15->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  v15->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  v15->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  v15->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  v15->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  v15->fields.commandSpellNum = spellNum;
  return v15;
}


int32_t __fastcall WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardBattleEvent___c__DisplayClass78_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v22; // x20

  if ( (byte_42E696B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, selfUniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, v15, v16, v17);
    byte_42E696B = 1;
  }
  v18 = (WarBoardBattleEvent___c__DisplayClass78_0_o *)sub_B5D694(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass78_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.selfUniqueId = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v22 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__28142236(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v22,
         (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x21
  __int64 v36; // x20
  BattleData_o *v37; // x0
  __int64 v38; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v40; // w8
  struct BattleWarBoardInfo_o *v41; // x8
  __int64 v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array **logic; // x1
  const MethodInfo *v51; // x1
  System_Int32_array **DistributeStar; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **ServantEvent_k__BackingField; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  BattleData_o **v79; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x23
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct BattleData_o *v87; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v89; // x24
  struct BattleData_o *v90; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *enemy_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v92; // x24
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  const MethodInfo *v100; // x1
  System_Int32_array **WarBoardMasterArray; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7

  if ( (byte_42E695E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleServantData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleServantData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleWarBoardInfo_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__, v29, v30, v31);
    sub_B5D5C4(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, v32, v33, v34);
    byte_42E695E = 1;
  }
  v35 = sub_B5D694(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass56_0___ctor((WarBoardBattleEvent___c__DisplayClass56_0_o *)v35, 0LL);
  v36 = sub_B5D694(BattleWarBoardInfo_TypeInfo);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v36, 0LL);
  v37 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                          this,
                          this->klass->vtable._5_Init.methodPtr);
  if ( !v36 )
    goto LABEL_19;
  *(_BYTE *)(v36 + 20) = (unsigned __int8)v37 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v40 = WarBoardBattleInfo_k__BackingField ? WarBoardBattleInfo_k__BackingField->fields.battleTurn : -1;
  *(_DWORD *)(v36 + 24) = v40;
  v41 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v41 )
    LODWORD(v41) = v41->fields.stageId;
  *(_DWORD *)(v36 + 16) = (_DWORD)v41;
  v42 = sub_B5D694(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v42, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  if ( !v42 )
    goto LABEL_19;
  logic = (System_Int32_array **)Data_k__BackingField->fields.logic;
  *(_QWORD *)(v42 + 16) = logic;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 16), logic, v43, v44, v45, v46, v47, v48);
  DistributeStar = (System_Int32_array **)WarBoardBattleEvent__MakeDistributeStar(this, v51);
  *(_QWORD *)(v42 + 24) = DistributeStar;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 24), DistributeStar, v53, v54, v55, v56, v57, v58);
  v37 = this->fields._Data_k__BackingField;
  if ( !v37 )
    goto LABEL_19;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(v37, 0LL);
  *(_QWORD *)(v42 + 32) = QuestIndividualities;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 32), QuestIndividualities, v60, v61, v62, v63, v64, v65);
  ServantEvent_k__BackingField = (System_Int32_array **)this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v42 + 40) = ServantEvent_k__BackingField;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 40), ServantEvent_k__BackingField, v67, v68, v69, v70, v71, v72);
  if ( !v35 )
    goto LABEL_19;
  *(_QWORD *)(v35 + 24) = v42;
  v79 = (BattleData_o **)(v35 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 24), (System_Int32_array **)v42, v73, v74, v75, v76, v77, v78);
  v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v80,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v35 + 16) = v80;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
  v87 = this->fields._Data_k__BackingField;
  if ( !v87 )
    goto LABEL_19;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v87->fields.player_datalist;
  v89 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v89,
    (Il2CppObject *)v35,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleServantData___ctor__);
  if ( !player_datalist
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          player_datalist,
          (System_Action_T__o *)v89,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v90 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v90->fields.enemy_datalist,
        v92 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleServantData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v92,
          (Il2CppObject *)v35,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          (const MethodInfo_258B320 *)Method_System_Action_BattleServantData___ctor__),
        !enemy_datalist)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v92,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v37 = *v79) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(v37, v38);
  }
  v93 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v36 + 32) = v93;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 32), v93, v94, v95, v96, v97, v98, v99);
  WarBoardMasterArray = (System_Int32_array **)WarBoardBattleEvent__MakeWarBoardMasterArray(this, v100);
  *(_QWORD *)(v36 + 40) = WarBoardMasterArray;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 40), WarBoardMasterArray, v102, v103, v104, v105, v106, v107);
  v108 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
                                  this,
                                  this->klass[1]._1.image);
  *(_QWORD *)(v36 + 56) = v108;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 56), v108, v109, v110, v111, v112, v113, v114);
  return (BattleWarBoardInfo_o *)v36;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  const MethodInfo *v15; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverPlayerMasterInfo; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_42E6961 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v11, v12, v13);
    byte_42E6961 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
                                                                                      this,
                                                                                      v15);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v14 )
      goto LABEL_11;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      TakeoverPlayerMasterInfo,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  }
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                                                                      this,
                                                                                      this->fields._MasterEnemy_k__BackingField,
                                                                                      v18);
  if ( !TakeoverPlayerMasterInfo )
  {
    if ( v14 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_11:
    sub_B5D69C(TakeoverPlayerMasterInfo, v17);
  }
  if ( !v14 )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    TakeoverPlayerMasterInfo,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
}


void __fastcall WarBoardBattleEvent__OnTurnCond(WarBoardBattleEvent_o *this, int32_t cond, const MethodInfo *method)
{
  this->fields.curTurnCondState |= cond;
}


void __fastcall WarBoardBattleEvent__PrevEndLoadNStage(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  BattleStartServantAiResetChecker_o *v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E6968 & 1) == 0 )
  {
    sub_B5D5C4(&BattleStartServantAiResetChecker_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v14, v15, v16);
    byte_42E6968 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_B5D69C(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v18 )
      break;
    current = v30.fields.current;
    if ( !v30.fields.current )
      sub_B5D69C(v18, v19);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v30.fields.current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_B5D69C(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v26 = (BattleStartServantAiResetChecker_o *)sub_B5D694(BattleStartServantAiResetChecker_TypeInfo);
      BattleStartServantAiResetChecker___ctor(v26, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_B5D69C(v27, v28);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v26, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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
    sub_B5D69C(this, buffData);
  progressTurnCond = buff->fields.progressTurnCond;
  v7 = isEndEnemyTurn;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && ((!buff->fields.isProgressEndEnemyTurn ^ v7) & 1) != 0 )
  {
    buff->fields.turn = UnityEngine_Mathf__Max_41629432(buff->fields.turn - 2, 0, 0LL);
    BattleBuffData_BuffData__TryExtendLife(buff, v7, 0LL);
  }
}


void __fastcall WarBoardBattleEvent__ProgressNoExecJoinServantsBuff(
        WarBoardBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  __int64 v29; // x19
  bool v30; // w21
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x3
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v44; // x1
  struct BattleData_o *v45; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0

  if ( (byte_42E696C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Except_int___, (_DWORD)execUniqueIds, isEndEnemyTurn, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    byte_42E696C = 1;
  }
  v19 = System_Linq_Enumerable__Except_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
          (const MethodInfo_1CAA2C8 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v19 )
    sub_B5D69C(0LL, v20);
  klass = v19->klass;
  v23 = v19;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v19, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v21);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v23,
          *(_QWORD *)(p_method + 8));
  if ( !v29 )
    sub_B5D69C(0LL, v27);
  v30 = isEndEnemyTurn;
  while ( 1 )
  {
    v31 = *(_QWORD *)v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_16;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_16:
      v34 = sub_AF54C0(v29, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v38 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_23;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_23:
      v39 = sub_AF54C0(v29, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v35);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v29, *(_QWORD *)(v39 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_B5D69C(0LL, v40);
    ServantData = BattleData__getServantData(Data_k__BackingField, v41, 0LL);
    if ( ServantData )
    {
      v45 = this->fields._Data_k__BackingField;
      if ( !v45 )
        sub_B5D69C(ServantData, v44);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_B5D69C(0LL, v44);
      BattleBuffData__turnProgressing(buffData, v45->fields.logic, v30, v41, 0LL);
    }
  }
  v47 = *(_QWORD *)v29;
  if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
  {
    v48 = 0LL;
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
        goto LABEL_34;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_34:
    v50 = sub_AF54C0(v29, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v29, *(_QWORD *)(v50 + 8));
}


bool __fastcall WarBoardBattleEvent__SendBattleResult(
        WarBoardBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v20; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  WarBoardBattleResultRequest_o *v22; // x21
  int32_t stageId; // w22
  Il2CppObject *WarBoardBattleInfo; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x24
  __int64 v26; // x0
  __int64 v27; // x1

  if ( (byte_42E695C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)arg, (_DWORD)func, method);
    sub_B5D5C4(&System_Action_string__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_WarBoardBattleEvent_SetResponseWarBoardData__, v16, v17, v18);
    byte_42E695C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        func,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v22 = (WarBoardBattleResultRequest_o *)Request_WarBoardWallAttackRequest;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v20);
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)this,
    Method_WarBoardBattleEvent_SetResponseWarBoardData__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  if ( !v22 )
    sub_B5D69C(v26, v27);
  WarBoardBattleResultRequest__beginRequest(v22, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v25, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
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
  sub_B5D560(
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
  if ( (byte_42E6966 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B5D5C4(&int___TypeInfo, (_DWORD)save, (_DWORD)method, v3);
    byte_42E6966 = 1;
  }
  if ( !v8 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v8->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_B5D5DC(int___TypeInfo, 0LL);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v9 )
LABEL_8:
    sub_B5D69C(this, save);
  v9->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_B5D560(
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
        v11 = sub_B5D6C8(Data_k__BackingField);
        sub_B5D668(v11, 0LL);
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
    sub_B5D69C(Data_k__BackingField, isPlayer);
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
        v12 = sub_B5D6C8(Data_k__BackingField);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(Data_k__BackingField, isPlayer);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x19
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x9

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B5D69C(this, method);
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = UnityEngine_Mathf__Max_41629432(
                                                                     enemyMasterInfo->fields.maxCommandSpell
                                                                   - MasterEnemy_k__BackingField->fields.commandSpellNum,
                                                                     0,
                                                                     0LL);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverPlayerMasterSkill(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  WarBoardBattleEvent_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WarBoardBattleEvent_o *MasterSkillChargeTurnArray; // x19
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *MasterSkillSealedTurnArray; // x0
  __int64 v20; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v22; // x20
  int32_t v23; // w21
  Il2CppObject *current; // x24
  int32_t v25; // w0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42E6957 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v11, v12, v13);
    this = (WarBoardBattleEvent_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__,
                                      v14,
                                      v15,
                                      v16);
    byte_42E6957 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v4->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarBoardBattleEvent__GetMasterSkillSealedTurnArray(MasterSkillChargeTurnArray, v4->fields._MasterPlayer_k__BackingField, v18);
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v22 = (System_Int32_array *)MasterSkillSealedTurnArray,
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_B5D69C(MasterSkillSealedTurnArray, v20);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    MasterSkillSealedTurnArray,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v23 = 0;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v26 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      sub_B5D69C(v26, v27);
    if ( !BYTE4(v28.fields.current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v23,
                                      (int32_t)v28.fields.current[2].monitor,
                                      (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
      v25 = BasicHelper__IndexValue_int_(
              v22,
              v23,
              (int32_t)current[3].klass,
              (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
      if ( v25 != -1 )
        LODWORD(current[3].klass) = v25;
      ++v23;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_long__int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E7075 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&int___TypeInfo, v8, v9, v10);
    byte_42E7075 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v11,
    (const MethodInfo_2F5434C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicDistributeStar,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fieldIndiv,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7072 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardBattleEvent___c_TypeInfo, v1, v2, v3);
    byte_42E7072 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardBattleEvent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBattleEvent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B5D69C(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B5D69C(this, 0LL);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  WarBoardBattleEvent___c__DisplayClass56_0_o *v5; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *svtList; // x20

  v5 = this;
  if ( (byte_42E7073 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B5D5C4(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            (_DWORD)svt,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E7073 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v5->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B5D69C(this, svt);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardBattleEvent___c__DisplayClass56_0_o *v5; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *svtList; // x20

  v5 = this;
  if ( (byte_42E7074 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B5D5C4(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            (_DWORD)svt,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E7074 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v5->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B5D69C(this, svt);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
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
    sub_B5D69C(this, type);
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