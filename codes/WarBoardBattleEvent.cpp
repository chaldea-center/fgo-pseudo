void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWarBoardEventLimitTurn_o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  void *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Int32_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Int32_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int32_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4BB6D51 & 1) == 0 )
  {
    sub_1C13D24(&BattleWarBoardEventLimitTurn_TypeInfo, method);
    sub_1C13D24(&int___TypeInfo, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB6D51 = 1;
  }
  v5 = (BattleWarBoardEventLimitTurn_o *)sub_1C13F70(BattleWarBoardEventLimitTurn_TypeInfo);
  BattleWarBoardEventLimitTurn___ctor(v5, v6);
  this->fields.eventLimitTurn = v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventLimitTurn, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.warBoardDataJson, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v20;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.joinCurTurnUniqueIds,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v27;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.aliveSvtUniqueIds, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v34;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.notTakeOverBuffTypes,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.battleEndReduceBuffTurnFlag = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4BB6D4D & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, *(_QWORD *)&svtUniqueId);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__, v6);
    sub_1C13D24(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, v7);
    byte_4BB6D4D = 1;
  }
  v8 = sub_1C13F70(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_DWORD *)(v8 + 16) = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v12 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    0LL);
  return BasicHelper__Any_int__49783128(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
}


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
  System_Object_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v11; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__51_0; // x20
  Il2CppObject *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct WarBoardBattleEvent___c_StaticFields *v21; // x0
  PartyOrganizationUtility_o *p__9__51_0; // x0
  Il2CppObject *v24; // x21
  struct WarBoardBattleEvent___c_StaticFields *v25; // x0

  if ( (byte_4BB6D3D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___, warBoardInfo);
    sub_1C13D24(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v6);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, v7);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, v8);
    sub_1C13D24(&WarBoardBattleEvent___c_TypeInfo, v9);
    byte_4BB6D3D = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = (System_Object_array *)warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
  v11 = WarBoardBattleEvent___c_TypeInfo;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v11 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( isPlayer )
  {
    _9__51_0 = (System_Predicate_object__o *)static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = WarBoardBattleEvent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v14, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, 0LL);
      v21 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v21->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (PartyOrganizationUtility_o *)&v21->__9__51_0;
LABEL_17:
      sub_1C13CC8(p__9__51_0, (int64_t)_9__51_0, v15, v16, v17, v18, v19, v20);
    }
  }
  else
  {
    _9__51_0 = (System_Predicate_object__o *)static_fields->__9__51_1;
    if ( !_9__51_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = WarBoardBattleEvent___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v11->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v24, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, 0LL);
      v25 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v25->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (PartyOrganizationUtility_o *)&v25->__9__51_1;
      goto LABEL_17;
    }
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_object_(
                                                      masterInfo,
                                                      (System_Predicate_T__o *)_9__51_0,
                                                      (const MethodInfo_308A23C *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x19
  __int64 v12; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v18; // x1
  Il2CppObject v19; // q0
  int64_t v20; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4BB6D50 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4BB6D50 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_24;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  *(_OWORD *)&v27.fields._list = *(_OWORD *)&v26.fields.currentCryptoKey;
  v27.fields._current = (Il2CppObject *)v26.fields.fakeValue;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v14 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C13F80(v14, v15);
    if ( BattleServantData__isDead((BattleServantData_o *)v27.fields._current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_1C13F80(0LL, v18);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v19 = current[3];
        *(Il2CppObject *)&v26.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v26.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v25, 0LL);
        if ( !v11 )
          sub_1C13F80(v20, v20);
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_long__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C13F80(v20, v20);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v11,
            v20,
            *(const MethodInfo_3615200 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size] = v20;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v11 )
LABEL_24:
    sub_1C13F80(Data_k__BackingField, v12);
  return System_Collections_Generic_List_long___ToArray(
           v11,
           (const MethodInfo_3616CB8 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4BB6D3B & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, masterInfo);
    byte_4BB6D3B = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 3LL);
  if ( !result )
    sub_1C13F80(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    sub_1C13F88(result, v5);
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

  if ( (byte_4BB6D3C & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, masterInfo);
    byte_4BB6D3C = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 3LL);
  if ( !result )
    sub_1C13F80(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    sub_1C13F88(result, v5);
  }
  result->m_Items[3] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetResetBuffTypes(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x19
  System_Int32_array *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4BB6D43 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_15724/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, v7);
    byte_4BB6D43 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ConstantStrMaster__GetValueArray(
               (ConstantStrMaster_o *)Instance,
               (System_String_o *)StringLiteral_15724/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/,
               0LL,
               0LL);
  if ( !Instance )
  {
    if ( v8 )
      return System_Collections_Generic_List_int___ToArray(
               v8,
               (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1C13F80(Instance, v10);
  }
  if ( !v8 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4BB6D3E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&curBgmId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (WarBoardBattleEvent_o *)sub_1C13D24(&StringLiteral_15725/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/, v6);
    byte_4BB6D3E = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_40207268(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15725/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_1C13F80(this, *(_QWORD *)&curBgmId);
  }
  return curBgmId;
}


void __fastcall WarBoardBattleEvent__GetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Int32_array *joinCurTurnUniqueIds; // x8

  if ( !save )
    sub_1C13F80(this, 0LL);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&save->fields.joinCurTurnUniqueIds,
    (int64_t)joinCurTurnUniqueIds,
    (int64_t)method,
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
  const MethodInfo *v5; // x2

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
    sub_1C13F80(this, svtData);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, v5);
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
  int32_t forceId; // w19
  int32_t groupId; // w22
  BattleWarBoardInfo_WarBoardMasterInfo_Fields *p_fields; // t2
  System_Int32_array *v12; // x20
  WarBoardBattleEvent_o *EnemyMasterCommandSpellCnt; // x0
  const MethodInfo *v14; // x6

  if ( (byte_4BB6D47 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, enemyMaster);
    byte_4BB6D47 = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  v6 = sub_1C13DCC(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C13F80(v6, v7);
  p_fields = &enemyMaster->fields;
  forceId = enemyMaster->fields.forceId;
  groupId = p_fields->groupId;
  v12 = (System_Int32_array *)v6;
  EnemyMasterCommandSpellCnt = (WarBoardBattleEvent_o *)BattleData__getEnemyMasterCommandSpellCnt(
                                                          Data_k__BackingField,
                                                          0LL);
  return WarBoardBattleEvent__MakeMasterInfo(
           EnemyMasterCommandSpellCnt,
           forceId,
           groupId,
           v5,
           v12,
           (int32_t)EnemyMasterCommandSpellCnt,
           v14);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  System_Collections_Generic_List_int__o *v11; // x20
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  __int64 v13; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x25
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  __int64 klass_low; // x1
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  UserGameEntity_o *v26; // x21
  System_Int32_array *v27; // x19
  System_Int32_array *v28; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v30; // x6
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB6D46 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4BB6D46 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_28;
  masterSkillInfo = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    masterSkillInfo,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v15 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C13F80(v15, v16);
    if ( !BYTE4(v33.fields._current[1].monitor) )
    {
      if ( !v10 )
        sub_1C13F80(v15, v16);
      monitor_low = LODWORD(v33.fields._current[2].monitor);
      items = v10->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C13F80(v15, monitor_low);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          monitor_low,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
      if ( !v11 )
        sub_1C13F80(v15, monitor_low);
      klass_low = LODWORD(current[3].klass);
      v23 = v11->fields._items;
      v24 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !v23 )
        sub_1C13F80(v15, klass_low);
      v25 = v11->fields._size;
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          klass_low,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = v25 + 1;
        v23->m_Items[v25 + 1] = klass_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v10
    || (v26 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v10,
                                                                         (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v11)
    || (v27 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v11,
                                                                         (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v26) )
  {
LABEL_28:
    sub_1C13F80(masterSkillInfo, v13);
  }
  v28 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v26, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v27, v28, (int32_t)CommandSpell, v30);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  bool v8; // w20

  if ( (byte_4BB6D48 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1C13D24(&WarBoardManager_TypeInfo, v3);
    byte_4BB6D48 = 1;
  }
  WarBoardDataEntityFromResponse = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.warBoardDataJson, 0LL) )
  {
    warBoardDataJson = this->fields.warBoardDataJson;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    WarBoardDataEntityFromResponse = (Il2CppObject *)WarBoardManager__GetWarBoardDataEntityFromResponse(
                                                       warBoardDataJson,
                                                       0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v8 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 80, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C13F80(Instance, v7);
  }
  if ( v8 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, WarBoardDataEntityFromResponse, 0LL);
  else
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)Instance,
      80,
      1,
      WarBoardDataEntityFromResponse,
      0,
      0LL);
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

  if ( hideTypes )
  {
    v4 = *(_QWORD *)&hideTypes->max_length;
    if ( (int)v4 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v4 )
          sub_1C13F88(this, result);
        if ( !result )
          sub_1C13F80(this, result);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x1
  BattleInfoData_o *BattleInfo; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int64_t svtInfo; // x21
  int64_t v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  WarBoardBattleEvent_o *v35; // x0
  const MethodInfo *v36; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  WarBoardBattleEvent_o *v44; // x0
  const MethodInfo *v45; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  BaseBattleEvent_o *v53; // x0
  const MethodInfo *v54; // x3
  WarBoardBattleEvent_o *v55; // x0
  const MethodInfo *v56; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  BattleWarBoardInfo_o *v70; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_4BB6D37 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardBattleServantEvent_TypeInfo, data);
    byte_4BB6D37 = 1;
  }
  this->fields._Data_k__BackingField = data;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, v10);
  if ( !BattleInfo )
    sub_1C13F80(0LL, v12);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int64_t)warBoardBattleInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    svtInfo = (int64_t)WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v22 = sub_1C13F70(WarBoardBattleServantEvent_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  *(_QWORD *)(v22 + 16) = svtInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 16), svtInfo, v23, v24, v25, v26, v27, v28);
  this->fields._ServantEvent_k__BackingField = (struct WarBoardBattleServantEvent_o *)v22;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._ServantEvent_k__BackingField,
    v22,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v35,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v36);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._MasterPlayer_k__BackingField,
    (int64_t)EventMasterInfo,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v46 = WarBoardBattleEvent__GetEventMasterInfo(v44, this->fields._WarBoardBattleInfo_k__BackingField, 0, v45);
  this->fields._MasterEnemy_k__BackingField = v46;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._MasterEnemy_k__BackingField,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (BaseBattleEvent_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                               this,
                               this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager(v53, (unsigned __int8)v53 & 1, data, v54);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v55, v56);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.notTakeOverBuffTypes,
    (int64_t)ResetBuffTypes,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v70 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v70 )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(v70, 0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.battleSquareIndividualityList,
    (int64_t)BattleSquareIndividuality,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
}


bool __fastcall WarBoardBattleEvent__InitBGData(
        WarBoardBattleEvent_o *this,
        int32_t *bgNo,
        int32_t *bgType,
        const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v5; // w9
  int32_t v6; // w8
  bool result; // w0

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( !WarBoardBattleInfo_k__BackingField )
    return 0;
  v5 = WarBoardBattleInfo_k__BackingField->fields.bgNo;
  if ( v5 >= 1 )
    *bgNo = v5;
  v6 = WarBoardBattleInfo_k__BackingField->fields.bgType;
  result = v5 > 0;
  if ( v6 >= 1 )
  {
    result = 1;
    *bgType = v6;
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
  BattleData_o *Data_k__BackingField; // x0
  __int64 v15; // x1
  char v16; // w23
  int v17; // w20
  _BOOL4 v18; // w21
  BattleServantData_array *FieldServantList; // x0
  WarBoardBattleEvent___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  System_Func_object__bool__o *_9__73_0; // x25
  Il2CppObject *v23; // x26
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  WarBoardBattleEvent___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  char v34; // w23
  System_Func_object__int__o *_9__73_1; // x25
  Il2CppObject *v36; // x22
  struct WarBoardBattleEvent___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct System_Int32_array *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1

  if ( (byte_4BB6D4C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Concat_int___, isPlayer);
    sub_1C13D24(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1C13D24(&System_Func_BattleServantData__int__TypeInfo, v9);
    sub_1C13D24(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, v11);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, v12);
    sub_1C13D24(&WarBoardBattleEvent___c_TypeInfo, v13);
    byte_4BB6D4C = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                                           this,
                                           this->klass->vtable._5_Init.methodPtr,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v16 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v17 = (int)Data_k__BackingField,
        v18 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_1C13F80(Data_k__BackingField, v15);
  }
  FieldServantList = BattleData__getFieldServantList(Data_k__BackingField, 0, 0LL);
  v20 = WarBoardBattleEvent___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldServantList;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v20 = WarBoardBattleEvent___c_TypeInfo;
  }
  _9__73_0 = (System_Func_object__bool__o *)v20->static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = WarBoardBattleEvent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__73_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__73_0, v23, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__73_0,
      (int64_t)_9__73_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v32 = WarBoardBattleEvent___c_TypeInfo;
  v33 = v31;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v32 = WarBoardBattleEvent___c_TypeInfo;
  }
  v34 = v16 ^ isPlayer;
  _9__73_1 = (System_Func_object__int__o *)v32->static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = WarBoardBattleEvent___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v32->static_fields->__9;
    _9__73_1 = (System_Func_object__int__o *)sub_1C13F70(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__73_1, v36, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, 0LL);
    v37 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v37->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v37->__9__73_1, (int64_t)_9__73_1, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v45 = System_Linq_Enumerable__ToArray_int_(
          v44,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v45;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.aliveSvtUniqueIds, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  if ( (v34 & 1) != 0 )
  {
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    v59 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_2FA6DC0 *)Method_System_Linq_Enumerable_Concat_int___);
    v60 = System_Linq_Enumerable__Distinct_int_(
            v59,
            (const MethodInfo_2FAC754 *)Method_System_Linq_Enumerable_Distinct_int___);
    aliveSvtUniqueIds = System_Linq_Enumerable__ToArray_int_(
                          v60,
                          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)p_joinCurTurnUniqueIds,
    (int64_t)aliveSvtUniqueIds,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( (v17 & v18 & 1) != 0 )
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
  const MethodInfo *v6; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0

  if ( !svtData
    || (ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField,
        v5 = this,
        this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0LL),
        !ServantEvent_k__BackingField) )
  {
    sub_1C13F80(this, svtData);
  }
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, v6);
  BattleServantData__SetTakeoverServantDataPrevAdd(svtData, EventServantInfo, v5->fields._Data_k__BackingField, 0LL);
}


void __fastcall WarBoardBattleEvent__InitStageData(
        WarBoardBattleEvent_o *this,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleWarBoardEventLimitTurn_o *eventLimitTurn; // x0
  const MethodInfo *v6; // x1

  eventLimitTurn = this->fields.eventLimitTurn;
  if ( !eventLimitTurn )
    sub_1C13F80(0LL, stage);
  BattleWarBoardEventLimitTurn__InitLimitInfo(eventLimitTurn, this, stage, v3);
  WarBoardBattleEvent__TakeoverEnemyMasterInfo(this, v6);
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
  if ( (byte_4BB6D40 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ConstantStrMaster___, result);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (WarBoardBattleEvent_o *)sub_1C13D24(&StringLiteral_15726/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/, v7);
    byte_4BB6D40 = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_1C13F80(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15726/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v11);
}


void __fastcall WarBoardBattleEvent__InitUsePlayerServantData(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v4; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v6; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_12;
  Data_k__BackingField = (BattleData_o *)BattleData__getPlayerServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_12;
  m_CancellationTokenSource = Data_k__BackingField->fields.m_CancellationTokenSource;
  v6 = Data_k__BackingField;
  if ( (int)m_CancellationTokenSource < 1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1C13F88(Data_k__BackingField, method);
      Data_k__BackingField = (BattleData_o *)WarBoardBattleEvent__GetServantHaveStar(
                                               this,
                                               *((BattleServantData_o **)&v6->fields.rootfsm + v8),
                                               v4);
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      ++v8;
      v7 += (int)Data_k__BackingField;
    }
    while ( (__int64)v8 < (int)m_CancellationTokenSource );
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
LABEL_12:
    sub_1C13F80(Data_k__BackingField, method);
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
    sub_1C13F80(this, 0LL);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C13F80(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C13F80(this, 0LL);
  return BattleServantData__getDefeatPoint(svtData, 0LL) > 0;
}


bool __fastcall WarBoardBattleEvent__IsPossibleAddBuffParam(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  __int64 v5; // x1

  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(
                                (BaseBattleEvent_o *)this,
                                (const MethodInfo *)svtData);
  if ( IsBattleEndReduceBuffTurn )
    return 1;
  if ( !svtData )
    sub_1C13F80(IsBattleEndReduceBuffTurn, v5);
  return BattleServantData__isAlive(svtData, 0, 0LL);
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
    sub_1C13F80(Data_k__BackingField, method);
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
  if ( (byte_4BB6D39 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1C13D24(
                                      &Method_System_Collections_Generic_List_BattleServantData__get_Count__,
                                      method);
    byte_4BB6D39 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C13F80(this, method);
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
  __int64 v12; // x22
  _BOOL8 isParam; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v23; // x20

  if ( (byte_4BB6D4A & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, buff);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v9);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__, v10);
    sub_1C13D24(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, v11);
    byte_4BB6D4A = 1;
  }
  v12 = sub_1C13F70(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = buffEnt;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)buffEnt, v15, v16, v17, v18, v19, v20);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 68, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_1C13F80(isParam, v14);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v23 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    0LL);
  return !BasicHelper__Any_int__49783128(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v23,
            (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C13F80(this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_long__int__o *v10; // x19
  __int64 v11; // x1
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  WarBoardBattleEvent___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  System_Func_object__bool__o *_9__57_0; // x22
  Il2CppObject *v17; // x23
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v27; // x21
  struct BattleData_o *v28; // x9
  int32_t criticalstars; // w9
  unsigned int v30; // w20
  int v31; // w22
  int i; // w23
  int32_t v33; // w2

  if ( (byte_4BB6D42 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1C13D24(&System_Func_BattleServantData__bool__TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, v8);
    sub_1C13D24(&WarBoardBattleEvent___c_TypeInfo, v9);
    byte_4BB6D42 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v10,
    (const MethodInfo_32CAF8C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_23;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(Data_k__BackingField, 0LL);
  v14 = WarBoardBattleEvent___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v14 = WarBoardBattleEvent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__bool__o *)v14->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = WarBoardBattleEvent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__57_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_0, v17, Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                                           v25,
                                           (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_23;
  m_CancellationTokenSource = Data_k__BackingField->fields.m_CancellationTokenSource;
  v27 = Data_k__BackingField;
  if ( m_CancellationTokenSource )
  {
    v28 = this->fields._Data_k__BackingField;
    if ( !v28 )
      goto LABEL_23;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      criticalstars = v28->fields.criticalstars;
      v30 = 0;
      v31 = criticalstars / (int)m_CancellationTokenSource;
      for ( i = criticalstars % (int)m_CancellationTokenSource; ; --i )
      {
        if ( v30 >= (unsigned int)m_CancellationTokenSource )
          sub_1C13F88(Data_k__BackingField, v11);
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v27->fields.rootfsm + (int)v30);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v10 )
          break;
        if ( i <= 0 )
          v33 = v31;
        else
          v33 = v31 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v10,
          (int64_t)Data_k__BackingField,
          v33,
          (const MethodInfo_32CB960 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(m_CancellationTokenSource) = v27->fields.m_CancellationTokenSource;
        if ( (int)++v30 >= (int)m_CancellationTokenSource )
          return v10;
      }
LABEL_23:
      sub_1C13F80(Data_k__BackingField, v11);
    }
  }
  return v10;
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
  __int64 v15; // x1

  if ( (byte_4BB6D45 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_int____77472272, *(_QWORD *)&forceId);
    sub_1C13D24(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo, v12);
    byte_4BB6D45 = 1;
  }
  v13 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_1C13F70(BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v13, 0LL);
  if ( !v13 )
    sub_1C13F80(v14, v15);
  v13->fields.forceId = forceId;
  v13->fields.groupId = groupId;
  v13->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
  v13->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
  v13->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
  v13->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
  v13->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
  v13->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4BB6D4E & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, *(_QWORD *)&selfUniqueId);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__, v6);
    sub_1C13D24(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, v7);
    byte_4BB6D4E = 1;
  }
  v8 = sub_1C13F70(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_DWORD *)(v8 + 16) = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v12 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    0LL);
  if ( BasicHelper__Any_int__49783128(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v12,
         (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256) )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x20
  BattleData_o *v14; // x0
  __int64 v15; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x9
  int64_t v17; // x22
  const MethodInfo *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  int64_t logic; // x1
  const MethodInfo *v27; // x1
  System_Collections_Generic_Dictionary_long__int__o *DistributeStar; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Int32_array *QuestIndividualities; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_List_object__o *v55; // x23
  BattleData_o **v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct BattleData_o *v63; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x23
  System_Action_object__o *v65; // x24
  struct BattleData_o *v66; // x8
  System_Collections_Generic_List_object__o *enemy_datalist; // x23
  System_Action_object__o *v68; // x24
  System_Object_array *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  const MethodInfo *v76; // x1
  BattleWarBoardInfo_WarBoardMasterInfo_array *WarBoardMasterArray; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7

  if ( (byte_4BB6D41 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleServantData__TypeInfo, method);
    sub_1C13D24(&BattleWarBoardInfo_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v7);
    sub_1C13D24(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v8);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__, v9);
    sub_1C13D24(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__, v10);
    sub_1C13D24(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, v11);
    byte_4BB6D41 = 1;
  }
  v12 = sub_1C13F70(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  v13 = sub_1C13F70(BattleWarBoardInfo_TypeInfo);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v13, 0LL);
  v14 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                          this,
                          this->klass->vtable._5_Init.methodPtr);
  if ( !v13 )
    goto LABEL_17;
  *(_BYTE *)(v13 + 20) = (unsigned __int8)v14 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
  {
    *(_DWORD *)(v13 + 24) = WarBoardBattleInfo_k__BackingField->fields.battleTurn;
    LODWORD(WarBoardBattleInfo_k__BackingField) = WarBoardBattleInfo_k__BackingField->fields.stageId;
  }
  else
  {
    *(_DWORD *)(v13 + 24) = -1;
  }
  *(_DWORD *)(v13 + 16) = (_DWORD)WarBoardBattleInfo_k__BackingField;
  v17 = sub_1C13F70(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v17, v18);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_17;
  if ( !v17 )
    goto LABEL_17;
  logic = (int64_t)Data_k__BackingField->fields.logic;
  *(_QWORD *)(v17 + 16) = logic;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), logic, v19, v20, v21, v22, v23, v24);
  DistributeStar = WarBoardBattleEvent__MakeDistributeStar(this, v27);
  *(_QWORD *)(v17 + 24) = DistributeStar;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)DistributeStar, v29, v30, v31, v32, v33, v34);
  v14 = this->fields._Data_k__BackingField;
  if ( !v14 )
    goto LABEL_17;
  QuestIndividualities = BattleData__getQuestIndividualities(v14, 0LL);
  *(_QWORD *)(v17 + 32) = QuestIndividualities;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)QuestIndividualities, v36, v37, v38, v39, v40, v41);
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v17 + 40) = ServantEvent_k__BackingField;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)(v17 + 40),
    (int64_t)ServantEvent_k__BackingField,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 24) = v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 24), v17, v49, v50, v51, v52, v53, v54);
  v55 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v12 + 16) = v55;
  v56 = (BattleData_o **)(v12 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v55, v57, v58, v59, v60, v61, v62);
  v63 = this->fields._Data_k__BackingField;
  if ( !v63 )
    goto LABEL_17;
  player_datalist = (System_Collections_Generic_List_object__o *)v63->fields.player_datalist;
  v65 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v65,
    (Il2CppObject *)v12,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    0LL);
  if ( !player_datalist
    || (System_Collections_Generic_List_object___ForEach(
          player_datalist,
          (System_Action_T__o *)v65,
          (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v66 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_object__o *)v66->fields.enemy_datalist,
        v68 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleServantData__TypeInfo),
        System_Action_object____ctor(
          v68,
          (Il2CppObject *)v12,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          0LL),
        !enemy_datalist)
    || (System_Collections_Generic_List_object___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v68,
          (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v14 = *v56) == 0LL) )
  {
LABEL_17:
    sub_1C13F80(v14, v15);
  }
  v69 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v14,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v13 + 32) = v69;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)v69, v70, v71, v72, v73, v74, v75);
  WarBoardMasterArray = WarBoardBattleEvent__MakeWarBoardMasterArray(this, v76);
  *(_QWORD *)(v13 + 40) = WarBoardMasterArray;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)WarBoardMasterArray, v78, v79, v80, v81, v82, v83);
  v84 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
          this,
          this->klass[1]._1.image);
  *(_QWORD *)(v13 + 56) = v84;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 56), v84, v85, v86, v87, v88, v89, v90);
  return (BattleWarBoardInfo_o *)v13;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  const MethodInfo *v7; // x1
  Il2CppObject *TakeoverPlayerMasterInfo; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int64_t v19; // x1
  Il2CppClass **v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x0

  if ( (byte_4BB6D44 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v5);
    byte_4BB6D44 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(this, v7);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v6 )
      goto LABEL_15;
    items = v6->fields._items;
    v17 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_15;
    size = v6->fields._size;
    v19 = (int64_t)TakeoverPlayerMasterInfo;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        TakeoverPlayerMasterInfo,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v19;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 4), v19, (int64_t)v10, v11, v12, v13, v14, v15);
    }
  }
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                               this,
                                               this->fields._MasterEnemy_k__BackingField,
                                               v10);
  if ( !TakeoverPlayerMasterInfo )
  {
    if ( v6 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v6,
                                                              (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_15:
    sub_1C13F80(TakeoverPlayerMasterInfo, v9);
  }
  if ( !v6 )
    goto LABEL_15;
  v27 = v6->fields._items;
  v28 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
  ++v6->fields._version;
  if ( !v27 )
    goto LABEL_15;
  v29 = v6->fields._size;
  v30 = (int64_t)TakeoverPlayerMasterInfo;
  if ( (unsigned int)v29 >= v27->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      TakeoverPlayerMasterInfo,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v27->obj.klass + v29;
    v6->fields._size = v29 + 1;
    v31[4] = (Il2CppClass *)v30;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v31 + 4), v30, v21, v22, v23, v24, v25, v26);
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                          v6,
                                                          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
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
  __int64 v9; // x1
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  const MethodInfo *v13; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  BattleStartServantAiResetChecker_o *v17; // x24
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BB6D4B & 1) == 0 )
  {
    sub_1C13D24(&BattleStartServantAiResetChecker_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    byte_4BB6D4B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_1C13F80(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C13F80(v8, v9);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v21.fields._current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_1C13F80(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, v13);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v17 = (BattleStartServantAiResetChecker_o *)sub_1C13F70(BattleStartServantAiResetChecker_TypeInfo);
      BattleStartServantAiResetChecker___ctor(v17, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_1C13F80(v18, v19);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v17, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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

  if ( !buff )
    sub_1C13F80(this, buffData);
  progressTurnCond = buff->fields.progressTurnCond;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && buff->fields.isProgressEndEnemyTurn == isEndEnemyTurn )
  {
    buff->fields.turn = (buff->fields.turn - 2) & ~((buff->fields.turn - 2) >> 31);
    BattleBuffData_BuffData__TryExtendLife(buff, isEndEnemyTurn, 0LL);
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
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  bool v20; // w21
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v33; // x1
  struct BattleData_o *v34; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4BB6D4F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Except_int___, execUniqueIds);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_int__TypeInfo, v8);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_int__TypeInfo, v9);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4BB6D4F = 1;
  }
  v11 = System_Linq_Enumerable__Except_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
          (const MethodInfo_2FAED40 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v11 )
    sub_1C13F80(0LL, v12);
  klass = v11->klass;
  v14 = v11;
  v15 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C65D04(v11, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v14,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_1C13F80(0LL, v18);
  v20 = isEndEnemyTurn;
  while ( 1 )
  {
    v21 = *(_QWORD *)v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_16:
      v24 = sub_1C65D04(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v19, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v19;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v27 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_1C65D04(v19, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v19, *(_QWORD *)(v28 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1C13F80(0LL, v29);
    ServantData = BattleData__getServantData(Data_k__BackingField, v30, 0LL);
    if ( ServantData )
    {
      v34 = this->fields._Data_k__BackingField;
      if ( !v34 )
        sub_1C13F80(ServantData, v33);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_1C13F80(0LL, v33);
      BattleBuffData__turnProgressing(buffData, v34->fields.logic, v20, v30, 0LL);
    }
  }
  v36 = *(_QWORD *)v19;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_34:
    v39 = sub_1C65D04(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v19, *(_QWORD *)(v39 + 8));
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
  Il2CppObject *Request_object; // x0
  const MethodInfo *v11; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  WarBoardBattleResultRequest_o *v13; // x21
  int32_t stageId; // w22
  Il2CppObject *WarBoardBattleInfo; // x23
  System_Action_object__o *v16; // x24
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4BB6D3F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_string__TypeInfo, arg);
    sub_1C13D24(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    sub_1C13D24(&Method_WarBoardBattleEvent_SetResponseWarBoardData__, v9);
    byte_4BB6D3F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v13 = (WarBoardBattleResultRequest_o *)Request_object;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v11);
  v16 = (System_Action_object__o *)sub_1C13F70(System_Action_string__TypeInfo);
  System_Action_object____ctor(v16, (Il2CppObject *)this, Method_WarBoardBattleEvent_SetResponseWarBoardData__, 0LL);
  if ( !v13 )
    sub_1C13F80(v17, v18);
  WarBoardBattleResultRequest__beginRequest(v13, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v16, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C13F80(this, 0LL);
  if ( buff->fields.grantSkillType == 100 )
    BattleBuffData_BuffData__onState(buff, 4, 0LL);
}


void __fastcall WarBoardBattleEvent__SetResponseWarBoardData(
        WarBoardBattleEvent_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.warBoardDataJson = json;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.warBoardDataJson,
    (int64_t)json,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleData_SaveData_o *v8; // x20
  WarBoardBattleEvent_o *v9; // x19

  v8 = save;
  v9 = this;
  if ( (byte_4BB6D49 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1C13D24(&int___TypeInfo, save);
    byte_4BB6D49 = 1;
  }
  if ( !v8 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v8->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_1C13DCC(int___TypeInfo, 0LL);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v9 )
LABEL_8:
    sub_1C13F80(this, save);
  v9->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v9->fields.joinCurTurnUniqueIds,
    (int64_t)save,
    (int64_t)method,
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
  int m_CancellationTokenSource; // w8
  unsigned int v8; // w23
  BattleServantData_o *v9; // x22
  struct BattleData_o *v10; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  Data_k__BackingField = (BattleData_o *)(isPlayer
                                        ? BattleData__getPlayerServantList(Data_k__BackingField, 0LL)
                                        : BattleData__getEnemyServantList(Data_k__BackingField, 0LL));
  v6 = (BattleServantData_array *)Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  m_CancellationTokenSource = (int)Data_k__BackingField->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= m_CancellationTokenSource )
        sub_1C13F88(Data_k__BackingField, isPlayer);
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
      m_CancellationTokenSource = v6->max_length;
      if ( (int)++v8 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_20:
    sub_1C13F80(Data_k__BackingField, isPlayer);
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
  __int64 Data_k__BackingField; // x0
  __int64 v6; // x20
  int v7; // w8
  unsigned int v8; // w23
  __int64 v9; // x8
  BattleServantData_o *v10; // x21
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x22
  const MethodInfo *v12; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  struct BattleData_o *v14; // x8
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x25
  __int64 v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct BattleData_o *v25; // x8
  __int64 v26; // x0

  if ( (byte_4BB6D38 & 1) == 0 )
  {
    sub_1C13D24(&BattleServantData___TypeInfo, isPlayer);
    byte_4BB6D38 = 1;
  }
  Data_k__BackingField = (__int64)this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (!isPlayer
      ? (Data_k__BackingField = (__int64)BattleData__getEnemyServantList((BattleData_o *)Data_k__BackingField, 0LL))
      : (Data_k__BackingField = (__int64)BattleData__getPlayerServantList((BattleData_o *)Data_k__BackingField, 0LL)),
        (v6 = Data_k__BackingField) == 0) )
  {
LABEL_22:
    sub_1C13F80(Data_k__BackingField, isPlayer);
  }
  v7 = *(_DWORD *)(Data_k__BackingField + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( v8 < v7 )
    {
      v9 = v6 + 8LL * (int)v8;
      v10 = *(BattleServantData_o **)(v9 + 32);
      if ( !v10 )
        goto LABEL_22;
      ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
      Data_k__BackingField = BattleServantData__getUserSvtId(*(BattleServantData_o **)(v9 + 32), 0LL);
      if ( !ServantEvent_k__BackingField )
        goto LABEL_22;
      EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(
                           ServantEvent_k__BackingField,
                           Data_k__BackingField,
                           v12);
      BattleServantData__SetTakeoverServantData(v10, EventServantInfo, 0LL);
      v14 = this->fields._Data_k__BackingField;
      if ( !v14 )
        goto LABEL_22;
      FieldEnvData_k__BackingField = v14->fields._FieldEnvData_k__BackingField;
      Data_k__BackingField = sub_1C13DCC(BattleServantData___TypeInfo, 1LL);
      if ( !Data_k__BackingField )
        goto LABEL_22;
      v16 = Data_k__BackingField;
      Data_k__BackingField = sub_1C13E60(v10, *(_QWORD *)(*(_QWORD *)Data_k__BackingField + 64LL));
      if ( !Data_k__BackingField )
      {
        v26 = sub_1C13FA4(0LL);
        sub_1C13E4C(v26, 0LL);
      }
      if ( !*(_DWORD *)(v16 + 24) )
        break;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)v10, v17, v18, v19, v20, v21, v22);
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        (BattleFieldEnvironmentData_o *)Data_k__BackingField,
        (BattleServantData_array *)v16,
        v23);
      v25 = this->fields._Data_k__BackingField;
      if ( !v25 )
        goto LABEL_22;
      Data_k__BackingField = (__int64)v25->fields._FieldEnvData_k__BackingField;
      if ( !Data_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__AddServantChangeBgm((BattleFieldEnvironmentData_o *)Data_k__BackingField, v10, v24);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
    sub_1C13F88(Data_k__BackingField, isPlayer);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x9
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x10

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C13F80(this, method);
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = (enemyMasterInfo->fields.maxCommandSpell
                                                                  - MasterEnemy_k__BackingField->fields.commandSpellNum) & ~((enemyMasterInfo->fields.maxCommandSpell - MasterEnemy_k__BackingField->fields.commandSpellNum) >> 31);
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
  System_Collections_Generic_List_object__o *MasterSkillSealedTurnArray; // x0
  __int64 v11; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v13; // x20
  int32_t v14; // w21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x25
  int32_t v18; // w0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4BB6D3A & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_int____77472272, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v6);
    this = (WarBoardBattleEvent_o *)sub_1C13D24(
                                      &Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__,
                                      v7);
    byte_4BB6D3A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v3->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = (System_Collections_Generic_List_object__o *)WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
                                                                              MasterSkillChargeTurnArray,
                                                                              v3->fields._MasterPlayer_k__BackingField,
                                                                              v9);
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v13 = (System_Int32_array *)MasterSkillSealedTurnArray,
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_1C13F80(MasterSkillSealedTurnArray, v11);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    MasterSkillSealedTurnArray,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v14 = 0;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v15 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C13F80(v15, v16);
    if ( !BYTE4(v19.fields._current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v14,
                                      (int32_t)v19.fields._current[2].monitor,
                                      (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
      v18 = BasicHelper__IndexValue_int_(
              v13,
              v14,
              (int32_t)current[3].klass,
              (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
      if ( v18 != -1 )
        LODWORD(current[3].klass) = v18;
      ++v14;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MasterEnemy_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._MasterEnemy_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MasterPlayer_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._MasterPlayer_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantEvent_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._ServantEvent_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._WarBoardBattleInfo_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_long__int__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Int32_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB6D52 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v3);
    sub_1C13D24(&int___TypeInfo, v4);
    byte_4BB6D52 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v5,
    (const MethodInfo_32CAF8C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dicDistributeStar, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v12;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.fieldIndiv, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB6D53 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardBattleEvent___c_TypeInfo, v1);
    byte_4BB6D53 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardBattleEvent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardBattleEvent___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleEvent___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardBattleEvent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C13F80(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C13F80(this, 0LL);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C13F80(this, 0LL);
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
  System_Collections_Generic_List_object__o *svtList; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_4BB6D54 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1C13D24(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4BB6D54 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1C13F80(this, svt);
  }
  size = svtList->fields._size;
  v15 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 4), (int64_t)v15, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_object__o *svtList; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_4BB6D55 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1C13D24(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4BB6D55 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1C13F80(this, svt);
  }
  size = svtList->fields._size;
  v15 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 4), (int64_t)v15, v6, v7, v8, v9, v10, v11);
  }
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
    sub_1C13F80(this, type);
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