void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWarBoardEventLimitTurn_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Int32_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Int32_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Int32_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4A50C8F & 1) == 0 )
  {
    sub_1B863B8(&BattleWarBoardEventLimitTurn_TypeInfo, method);
    sub_1B863B8(&int___TypeInfo, v3);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A50C8F = 1;
  }
  v5 = (BattleWarBoardEventLimitTurn_o *)sub_1B86604(BattleWarBoardEventLimitTurn_TypeInfo);
  BattleWarBoardEventLimitTurn___ctor(v5, v6);
  this->fields.eventLimitTurn = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventLimitTurn, (int32_t)v5, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.warBoardDataJson, v9, v10, v11);
  v12 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v12;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.joinCurTurnUniqueIds, (int32_t)v12, v13, v14);
  v15 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v15;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aliveSvtUniqueIds, (int32_t)v15, v16, v17);
  v18 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v18;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.notTakeOverBuffTypes, (int32_t)v18, v19, v20);
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

  if ( (byte_4A50C8B & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_int____76088168, *(_QWORD *)&svtUniqueId);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v5);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__, v6);
    sub_1B863B8(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, v7);
    byte_4A50C8B = 1;
  }
  v8 = sub_1B86604(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B86614(v9, v10);
  *(_DWORD *)(v8 + 16) = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v12 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    0LL);
  return BasicHelper__Any_int__49642036(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2F57A34 *)Method_BasicHelper_Any_int____76088168);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct WarBoardBattleEvent___c_StaticFields *v17; // x0
  CGThumbnailListItem_o *p__9__51_0; // x0
  Il2CppObject *v20; // x21
  struct WarBoardBattleEvent___c_StaticFields *v21; // x0

  if ( (byte_4A50C7B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___, warBoardInfo);
    sub_1B863B8(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v6);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, v7);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, v8);
    sub_1B863B8(&WarBoardBattleEvent___c_TypeInfo, v9);
    byte_4A50C7B = 1;
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
      _9__51_0 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v14, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, 0LL);
      v17 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v17->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (CGThumbnailListItem_o *)&v17->__9__51_0;
LABEL_17:
      sub_1B8635C(p__9__51_0, (int32_t)_9__51_0, v15, v16);
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
      v20 = (Il2CppObject *)v11->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v20, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, 0LL);
      v21 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v21->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (CGThumbnailListItem_o *)&v21->__9__51_1;
      goto LABEL_17;
    }
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_object_(
                                                      masterInfo,
                                                      (System_Predicate_T__o *)_9__51_0,
                                                      (const MethodInfo_3067918 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
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

  if ( (byte_4A50C8E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4A50C8E = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_long__o *)sub_1B86604(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_35E4138 *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_24;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  *(_OWORD *)&v27.fields._list = *(_OWORD *)&v26.fields.currentCryptoKey;
  v27.fields._current = (Il2CppObject *)v26.fields.fakeValue;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v14 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1B86614(v14, v15);
    if ( BattleServantData__isDead((BattleServantData_o *)v27.fields._current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_1B86614(0LL, v18);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v19 = current[3];
        *(Il2CppObject *)&v26.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v26.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v25, 0LL);
        if ( !v11 )
          sub_1B86614(v20, v20);
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_long__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B86614(v20, v20);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v11,
            v20,
            *(const MethodInfo_35E498C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v11 )
LABEL_24:
    sub_1B86614(Data_k__BackingField, v12);
  return System_Collections_Generic_List_long___ToArray(
           v11,
           (const MethodInfo_35E6444 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A50C79 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, masterInfo);
    byte_4A50C79 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 3LL);
  if ( !result )
    sub_1B86614(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    sub_1B8661C(result, v5);
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

  if ( (byte_4A50C7A & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, masterInfo);
    byte_4A50C7A = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 3LL);
  if ( !result )
    sub_1B86614(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    sub_1B8661C(result, v5);
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

  if ( (byte_4A50C81 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v2);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_15253/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/, v7);
    byte_4A50C81 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ConstantStrMaster__GetValueArray(
               (ConstantStrMaster_o *)Instance,
               (System_String_o *)StringLiteral_15253/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
               0LL,
               0LL);
  if ( !Instance )
  {
    if ( v8 )
      return System_Collections_Generic_List_int___ToArray(
               v8,
               (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1B86614(Instance, v10);
  }
  if ( !v8 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A50C7C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&curBgmId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (WarBoardBattleEvent_o *)sub_1B863B8(&StringLiteral_15254/*"WAR_BOARD_BATTLE_LOSE_BGM"*/, v6);
    byte_4A50C7C = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_40028900(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15254/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_1B86614(this, *(_QWORD *)&curBgmId);
  }
  return curBgmId;
}


void __fastcall WarBoardBattleEvent__GetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Int32_array *joinCurTurnUniqueIds; // x8

  if ( !save )
    sub_1B86614(this, 0LL);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&save->fields.joinCurTurnUniqueIds,
    (int32_t)joinCurTurnUniqueIds,
    (int32_t)method,
    v3);
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
    sub_1B86614(this, svtData);
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

  if ( (byte_4A50C85 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, enemyMaster);
    byte_4A50C85 = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  v6 = sub_1B86460(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B86614(v6, v7);
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

  if ( (byte_4A50C84 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4A50C84 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v10 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_28;
  masterSkillInfo = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    masterSkillInfo,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v15 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1B86614(v15, v16);
    if ( !BYTE4(v33.fields._current[1].monitor) )
    {
      if ( !v10 )
        sub_1B86614(v15, v16);
      monitor_low = LODWORD(v33.fields._current[2].monitor);
      items = v10->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1B86614(v15, monitor_low);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          monitor_low,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
      if ( !v11 )
        sub_1B86614(v15, monitor_low);
      klass_low = LODWORD(current[3].klass);
      v23 = v11->fields._items;
      v24 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !v23 )
        sub_1B86614(v15, klass_low);
      v25 = v11->fields._size;
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          klass_low,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v10
    || (v26 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v10,
                                                                         (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v11)
    || (v27 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v11,
                                                                         (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v26) )
  {
LABEL_28:
    sub_1B86614(masterSkillInfo, v13);
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

  if ( (byte_4A50C86 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B863B8(&WarBoardManager_TypeInfo, v3);
    byte_4A50C86 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v8 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 80, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B86614(Instance, v7);
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
          sub_1B8661C(this, result);
        if ( !result )
          sub_1B86614(this, result);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  BattleInfoData_o *BattleInfo; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x21
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  WarBoardBattleEvent_o *v19; // x0
  const MethodInfo *v20; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  WarBoardBattleEvent_o *v24; // x0
  const MethodInfo *v25; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  BaseBattleEvent_o *v29; // x0
  const MethodInfo *v30; // x3
  WarBoardBattleEvent_o *v31; // x0
  const MethodInfo *v32; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  BattleWarBoardInfo_o *v38; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_4A50C75 & 1) == 0 )
  {
    sub_1B863B8(&WarBoardBattleServantEvent_TypeInfo, data);
    byte_4A50C75 = 1;
  }
  this->fields._Data_k__BackingField = data;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, v6);
  if ( !BattleInfo )
    sub_1B86614(0LL, v8);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int32_t)warBoardBattleInfo,
    v9,
    v10);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    svtInfo = WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v14 = sub_1B86604(WarBoardBattleServantEvent_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  *(_QWORD *)(v14 + 16) = svtInfo;
  sub_1B8635C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)svtInfo, v15, v16);
  this->fields._ServantEvent_k__BackingField = (struct WarBoardBattleServantEvent_o *)v14;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._ServantEvent_k__BackingField, v14, v17, v18);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v19,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v20);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._MasterPlayer_k__BackingField, (int32_t)EventMasterInfo, v22, v23);
  v26 = WarBoardBattleEvent__GetEventMasterInfo(v24, this->fields._WarBoardBattleInfo_k__BackingField, 0, v25);
  this->fields._MasterEnemy_k__BackingField = v26;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._MasterEnemy_k__BackingField, (int32_t)v26, v27, v28);
  v29 = (BaseBattleEvent_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                               this,
                               this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager(v29, (unsigned __int8)v29 & 1, data, v30);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v31, v32);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.notTakeOverBuffTypes, (int32_t)ResetBuffTypes, v34, v35);
  v38 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v38 )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(v38, 0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.battleSquareIndividualityList,
    (int32_t)BattleSquareIndividuality,
    v36,
    v37);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  WarBoardBattleEvent___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  char v30; // w23
  System_Func_object__int__o *_9__73_1; // x25
  Il2CppObject *v32; // x22
  struct WarBoardBattleEvent___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  struct System_Int32_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct System_Int32_array *v45; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1

  if ( (byte_4A50C8A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Concat_int___, isPlayer);
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1B863B8(&System_Func_BattleServantData__int__TypeInfo, v9);
    sub_1B863B8(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, v11);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, v12);
    sub_1B863B8(&WarBoardBattleEvent___c_TypeInfo, v13);
    byte_4A50C8A = 1;
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
    sub_1B86614(Data_k__BackingField, v15);
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
    _9__73_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__73_0, v23, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__73_0, (int32_t)_9__73_0, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v28 = WarBoardBattleEvent___c_TypeInfo;
  v29 = v27;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v28 = WarBoardBattleEvent___c_TypeInfo;
  }
  v30 = v16 ^ isPlayer;
  _9__73_1 = (System_Func_object__int__o *)v28->static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardBattleEvent___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v28->static_fields->__9;
    _9__73_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__73_1, v32, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, 0LL);
    v33 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v33->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v33->__9__73_1, (int32_t)_9__73_1, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v37;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aliveSvtUniqueIds, (int32_t)v37, v38, v39);
  if ( (v30 & 1) != 0 )
  {
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    v43 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_2F87F60 *)Method_System_Linq_Enumerable_Concat_int___);
    v44 = System_Linq_Enumerable__Distinct_int_(
            v43,
            (const MethodInfo_2F8E360 *)Method_System_Linq_Enumerable_Distinct_int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v44,
            (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
    LODWORD(aliveSvtUniqueIds) = (_DWORD)v45;
    this->fields.joinCurTurnUniqueIds = v45;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  sub_1B8635C((CGThumbnailListItem_o *)p_joinCurTurnUniqueIds, (int32_t)aliveSvtUniqueIds, v40, v41);
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
    sub_1B86614(this, svtData);
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
    sub_1B86614(0LL, stage);
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
  if ( (byte_4A50C7E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ConstantStrMaster___, result);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (WarBoardBattleEvent_o *)sub_1B863B8(&StringLiteral_15255/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/, v7);
    byte_4A50C7E = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B86614(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15255/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
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
        sub_1B8661C(Data_k__BackingField, method);
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
    sub_1B86614(Data_k__BackingField, method);
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
    sub_1B86614(this, 0LL);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B86614(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B86614(this, 0LL);
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
    sub_1B86614(IsBattleEndReduceBuffTurn, v5);
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
    sub_1B86614(Data_k__BackingField, method);
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
  if ( (byte_4A50C77 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1B863B8(
                                      &Method_System_Collections_Generic_List_BattleServantData__get_Count__,
                                      method);
    byte_4A50C77 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B86614(this, method);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v19; // x20

  if ( (byte_4A50C88 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_int____76088168, buff);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v9);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__, v10);
    sub_1B863B8(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, v11);
    byte_4A50C88 = 1;
  }
  v12 = sub_1B86604(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = buffEnt;
  sub_1B8635C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)buffEnt, v15, v16);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 69, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 69, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_1B86614(isParam, v14);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v19 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    0LL);
  return !BasicHelper__Any_int__49642036(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v19,
            (const MethodInfo_2F57A34 *)Method_BasicHelper_Any_int____76088168);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B86614(this, 0LL);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v23; // x21
  struct BattleData_o *v24; // x9
  int32_t criticalstars; // w9
  unsigned int v26; // w20
  int v27; // w22
  int i; // w23
  int32_t v29; // w2

  if ( (byte_4A50C80 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1B863B8(&System_Func_BattleServantData__bool__TypeInfo, v7);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, v8);
    sub_1B863B8(&WarBoardBattleEvent___c_TypeInfo, v9);
    byte_4A50C80 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v10,
    (const MethodInfo_32A6EC4 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
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
    _9__57_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_0, v17, Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                                           v21,
                                           (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_23;
  m_CancellationTokenSource = Data_k__BackingField->fields.m_CancellationTokenSource;
  v23 = Data_k__BackingField;
  if ( m_CancellationTokenSource )
  {
    v24 = this->fields._Data_k__BackingField;
    if ( !v24 )
      goto LABEL_23;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      criticalstars = v24->fields.criticalstars;
      v26 = 0;
      v27 = criticalstars / (int)m_CancellationTokenSource;
      for ( i = criticalstars % (int)m_CancellationTokenSource; ; --i )
      {
        if ( v26 >= (unsigned int)m_CancellationTokenSource )
          sub_1B8661C(Data_k__BackingField, v11);
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v23->fields.rootfsm + (int)v26);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v10 )
          break;
        if ( i <= 0 )
          v29 = v27;
        else
          v29 = v27 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v10,
          (int64_t)Data_k__BackingField,
          v29,
          (const MethodInfo_32A7898 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(m_CancellationTokenSource) = v23->fields.m_CancellationTokenSource;
        if ( (int)++v26 >= (int)m_CancellationTokenSource )
          return v10;
      }
LABEL_23:
      sub_1B86614(Data_k__BackingField, v11);
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

  if ( (byte_4A50C83 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_int____76090408, *(_QWORD *)&forceId);
    sub_1B863B8(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo, v12);
    byte_4A50C83 = 1;
  }
  v13 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_1B86604(BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v13, 0LL);
  if ( !v13 )
    sub_1B86614(v14, v15);
  v13->fields.forceId = forceId;
  v13->fields.groupId = groupId;
  v13->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
  v13->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
  v13->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
  v13->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
  v13->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
  v13->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
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

  if ( (byte_4A50C8C & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_int____76088168, *(_QWORD *)&selfUniqueId);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v5);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__, v6);
    sub_1B863B8(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, v7);
    byte_4A50C8C = 1;
  }
  v8 = sub_1B86604(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B86614(v9, v10);
  *(_DWORD *)(v8 + 16) = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v12 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    0LL);
  if ( BasicHelper__Any_int__49642036(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v12,
         (const MethodInfo_2F57A34 *)Method_BasicHelper_Any_int____76088168) )
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
  __int64 v17; // x22
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x1
  const MethodInfo *v23; // x1
  System_Collections_Generic_Dictionary_long__int__o *DistributeStar; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Int32_array *QuestIndividualities; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_object__o *v35; // x23
  BattleData_o **v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct BattleData_o *v39; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x23
  System_Action_object__o *v41; // x24
  struct BattleData_o *v42; // x8
  System_Collections_Generic_List_object__o *enemy_datalist; // x23
  System_Action_object__o *v44; // x24
  System_Object_array *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x1
  BattleWarBoardInfo_WarBoardMasterInfo_array *WarBoardMasterArray; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3

  if ( (byte_4A50C7F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_BattleServantData__TypeInfo, method);
    sub_1B863B8(&BattleWarBoardInfo_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v7);
    sub_1B863B8(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v8);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__, v9);
    sub_1B863B8(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__, v10);
    sub_1B863B8(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, v11);
    byte_4A50C7F = 1;
  }
  v12 = sub_1B86604(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  v13 = sub_1B86604(BattleWarBoardInfo_TypeInfo);
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
  v17 = sub_1B86604(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v17, v18);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_17;
  if ( !v17 )
    goto LABEL_17;
  logic = Data_k__BackingField->fields.logic;
  *(_QWORD *)(v17 + 16) = logic;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)logic, v19, v20);
  DistributeStar = WarBoardBattleEvent__MakeDistributeStar(this, v23);
  *(_QWORD *)(v17 + 24) = DistributeStar;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)DistributeStar, v25, v26);
  v14 = this->fields._Data_k__BackingField;
  if ( !v14 )
    goto LABEL_17;
  QuestIndividualities = BattleData__getQuestIndividualities(v14, 0LL);
  *(_QWORD *)(v17 + 32) = QuestIndividualities;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)QuestIndividualities, v28, v29);
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v17 + 40) = ServantEvent_k__BackingField;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 40), (int32_t)ServantEvent_k__BackingField, v31, v32);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 24) = v17;
  sub_1B8635C((CGThumbnailListItem_o *)(v12 + 24), v17, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v12 + 16) = v35;
  v36 = (BattleData_o **)(v12 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v35, v37, v38);
  v39 = this->fields._Data_k__BackingField;
  if ( !v39 )
    goto LABEL_17;
  player_datalist = (System_Collections_Generic_List_object__o *)v39->fields.player_datalist;
  v41 = (System_Action_object__o *)sub_1B86604(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v41,
    (Il2CppObject *)v12,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    0LL);
  if ( !player_datalist
    || (System_Collections_Generic_List_object___ForEach(
          player_datalist,
          (System_Action_T__o *)v41,
          (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v42 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_object__o *)v42->fields.enemy_datalist,
        v44 = (System_Action_object__o *)sub_1B86604(System_Action_BattleServantData__TypeInfo),
        System_Action_object____ctor(
          v44,
          (Il2CppObject *)v12,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          0LL),
        !enemy_datalist)
    || (System_Collections_Generic_List_object___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v44,
          (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v14 = *v36) == 0LL) )
  {
LABEL_17:
    sub_1B86614(v14, v15);
  }
  v45 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v14,
          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v13 + 32) = v45;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v45, v46, v47);
  WarBoardMasterArray = WarBoardBattleEvent__MakeWarBoardMasterArray(this, v48);
  *(_QWORD *)(v13 + 40) = WarBoardMasterArray;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 40), (int32_t)WarBoardMasterArray, v50, v51);
  v52 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
          this,
          this->klass[1]._1.image);
  *(_QWORD *)(v13 + 56) = v52;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 56), v52, v53, v54);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppObject *v15; // x1
  Il2CppClass **v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppObject *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4A50C82 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v5);
    byte_4A50C82 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(this, v7);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v6 )
      goto LABEL_15;
    items = v6->fields._items;
    v13 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_15;
    size = v6->fields._size;
    v15 = TakeoverPlayerMasterInfo;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        TakeoverPlayerMasterInfo,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v15;
      sub_1B8635C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, (int32_t)v10, v11);
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
                                                              (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_15:
    sub_1B86614(TakeoverPlayerMasterInfo, v9);
  }
  if ( !v6 )
    goto LABEL_15;
  v19 = v6->fields._items;
  v20 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
  ++v6->fields._version;
  if ( !v19 )
    goto LABEL_15;
  v21 = v6->fields._size;
  v22 = TakeoverPlayerMasterInfo;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      TakeoverPlayerMasterInfo,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v19->obj.klass + v21;
    v6->fields._size = v21 + 1;
    v23[4] = (Il2CppClass *)v22;
    sub_1B8635C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                          v6,
                                                          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
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

  if ( (byte_4A50C89 & 1) == 0 )
  {
    sub_1B863B8(&BattleStartServantAiResetChecker_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    byte_4A50C89 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_1B86614(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1B86614(v8, v9);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v21.fields._current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_1B86614(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, v13);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v17 = (BattleStartServantAiResetChecker_o *)sub_1B86604(BattleStartServantAiResetChecker_TypeInfo);
      BattleStartServantAiResetChecker___ctor(v17, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_1B86614(v18, v19);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v17, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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
        BattleBuffData_BuffData_o *buff,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  int32_t progressTurnCond; // w8

  if ( !buff )
    sub_1B86614(this, 0LL);
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

  if ( (byte_4A50C8D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Except_int___, execUniqueIds);
    sub_1B863B8(&System_IDisposable_TypeInfo, v7);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v8);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v9);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4A50C8D = 1;
  }
  v11 = System_Linq_Enumerable__Except_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
          (const MethodInfo_2F90DA8 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v11 )
    sub_1B86614(0LL, v12);
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
    p_method = sub_1BD6B4C(v11, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v14,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_1B86614(0LL, v18);
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
      v24 = sub_1BD6B4C(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v28 = sub_1BD6B4C(v19, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v19, *(_QWORD *)(v28 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1B86614(0LL, v29);
    ServantData = BattleData__getServantData(Data_k__BackingField, v30, 0LL);
    if ( ServantData )
    {
      v34 = this->fields._Data_k__BackingField;
      if ( !v34 )
        sub_1B86614(ServantData, v33);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_1B86614(0LL, v33);
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
    v39 = sub_1BD6B4C(v19, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4A50C7D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_string__TypeInfo, arg);
    sub_1B863B8(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&Method_WarBoardBattleEvent_SetResponseWarBoardData__, v9);
    byte_4A50C7D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v13 = (WarBoardBattleResultRequest_o *)Request_object;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v11);
  v16 = (System_Action_object__o *)sub_1B86604(System_Action_string__TypeInfo);
  System_Action_object____ctor(v16, (Il2CppObject *)this, Method_WarBoardBattleEvent_SetResponseWarBoardData__, 0LL);
  if ( !v13 )
    sub_1B86614(v17, v18);
  WarBoardBattleResultRequest__beginRequest(v13, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v16, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B86614(this, 0LL);
  if ( buff->fields.grantSkillType == 100 )
    BattleBuffData_BuffData__onState(buff, 4, 0LL);
}


void __fastcall WarBoardBattleEvent__SetResponseWarBoardData(
        WarBoardBattleEvent_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.warBoardDataJson = json;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.warBoardDataJson, (int32_t)json, (int32_t)method, v3);
}


void __fastcall WarBoardBattleEvent__SetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleData_SaveData_o *v4; // x20
  WarBoardBattleEvent_o *v5; // x19

  v4 = save;
  v5 = this;
  if ( (byte_4A50C87 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1B863B8(&int___TypeInfo, save);
    byte_4A50C87 = 1;
  }
  if ( !v4 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v4->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_1B86460(int___TypeInfo, 0LL);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v5 )
LABEL_8:
    sub_1B86614(this, save);
  v5->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.joinCurTurnUniqueIds, (int32_t)save, (int32_t)method, v3);
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
        sub_1B8661C(Data_k__BackingField, isPlayer);
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
    sub_1B86614(Data_k__BackingField, isPlayer);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  struct BattleData_o *v21; // x8
  __int64 v22; // x0

  if ( (byte_4A50C76 & 1) == 0 )
  {
    sub_1B863B8(&BattleServantData___TypeInfo, isPlayer);
    byte_4A50C76 = 1;
  }
  Data_k__BackingField = (__int64)this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (!isPlayer
      ? (Data_k__BackingField = (__int64)BattleData__getEnemyServantList((BattleData_o *)Data_k__BackingField, 0LL))
      : (Data_k__BackingField = (__int64)BattleData__getPlayerServantList((BattleData_o *)Data_k__BackingField, 0LL)),
        (v6 = Data_k__BackingField) == 0) )
  {
LABEL_22:
    sub_1B86614(Data_k__BackingField, isPlayer);
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
      Data_k__BackingField = sub_1B86460(BattleServantData___TypeInfo, 1LL);
      if ( !Data_k__BackingField )
        goto LABEL_22;
      v16 = Data_k__BackingField;
      Data_k__BackingField = sub_1B864F4(v10, *(_QWORD *)(*(_QWORD *)Data_k__BackingField + 64LL));
      if ( !Data_k__BackingField )
      {
        v22 = sub_1B86638(0LL);
        sub_1B864E0(v22, 0LL);
      }
      if ( !*(_DWORD *)(v16 + 24) )
        break;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1B8635C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v17, v18);
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        (BattleFieldEnvironmentData_o *)Data_k__BackingField,
        (BattleServantData_array *)v16,
        v19);
      v21 = this->fields._Data_k__BackingField;
      if ( !v21 )
        goto LABEL_22;
      Data_k__BackingField = (__int64)v21->fields._FieldEnvData_k__BackingField;
      if ( !Data_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__AddServantChangeBgm((BattleFieldEnvironmentData_o *)Data_k__BackingField, v10, v20);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
    sub_1B8661C(Data_k__BackingField, isPlayer);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x9
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x10

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B86614(this, method);
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
  if ( (byte_4A50C78 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_int____76090408, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v6);
    this = (WarBoardBattleEvent_o *)sub_1B863B8(
                                      &Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__,
                                      v7);
    byte_4A50C78 = 1;
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
    sub_1B86614(MasterSkillSealedTurnArray, v11);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    MasterSkillSealedTurnArray,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v14 = 0;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v15 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B86614(v15, v16);
    if ( !BYTE4(v19.fields._current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v14,
                                      (int32_t)v19.fields._current[2].monitor,
                                      (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
      v18 = BasicHelper__IndexValue_int_(
              v13,
              v14,
              (int32_t)current[3].klass,
              (const MethodInfo_2F5C4AC *)Method_BasicHelper_IndexValue_int____76090408);
      if ( v18 != -1 )
        LODWORD(current[3].klass) = v18;
      ++v14;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  const MethodInfo *v3; // x3

  this->fields._MasterEnemy_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._MasterEnemy_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall WarBoardBattleEvent__set_MasterPlayer(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MasterPlayer_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._MasterPlayer_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall WarBoardBattleEvent__set_ServantEvent(
        WarBoardBattleEvent_o *this,
        WarBoardBattleServantEvent_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantEvent_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._ServantEvent_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall WarBoardBattleEvent__set_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._WarBoardBattleInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardBattleEvent_TakeoverSvtArg___ctor(
        WarBoardBattleEvent_TakeoverSvtArg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_long__int__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A50C90 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v3);
    sub_1B863B8(&int___TypeInfo, v4);
    byte_4A50C90 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v5,
    (const MethodInfo_32A6EC4 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dicDistributeStar, (int32_t)v5, v6, v7);
  v8 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v8;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.fieldIndiv, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A50C91 & 1) == 0 )
  {
    sub_1B863B8(&WarBoardBattleEvent___c_TypeInfo, v1);
    byte_4A50C91 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(WarBoardBattleEvent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardBattleEvent___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleEvent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)WarBoardBattleEvent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B86614(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B86614(this, 0LL);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B86614(this, 0LL);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v11; // x1
  Il2CppClass **v12; // x0

  v4 = this;
  if ( (byte_4A50C92 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1B863B8(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4A50C92 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v9 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1B86614(this, svt);
  }
  size = svtList->fields._size;
  v11 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v12 = &items->obj.klass + size;
    v12[4] = (Il2CppClass *)v11;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 4), (int32_t)v11, v6, v7);
  }
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_object__o *svtList; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v11; // x1
  Il2CppClass **v12; // x0

  v4 = this;
  if ( (byte_4A50C93 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1B863B8(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4A50C93 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v9 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1B86614(this, svt);
  }
  size = svtList->fields._size;
  v11 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v12 = &items->obj.klass + size;
    v12[4] = (Il2CppClass *)v11;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 4), (int32_t)v11, v6, v7);
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
    sub_1B86614(this, type);
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