void __fastcall UserInterruptionQuestEntity___ctor(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_435072C & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_435072C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


BattleWaveInfoData_array *__fastcall UserInterruptionQuestEntity__ConvertToBattleWaveInfoDataArray(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *waveInfoList; // x0
  Il2CppObject *current; // x24
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **monitor; // x1
  System_Int32_array **klass; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_435072A & 1) == 0 )
  {
    sub_B70694(&BattleWaveInfoData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleWaveInfoData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    byte_435072A = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0LL) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v4);
  waveInfoList = this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__) )
  {
    current = v35.fields.current;
    v7 = sub_B70764(BattleWaveInfoData_TypeInfo);
    BattleWaveInfoData___ctor((BattleWaveInfoData_o *)v7, 0LL);
    if ( !current )
      sub_B7076C(v8, v9);
    if ( !v7 )
      sub_B7076C(v8, v9);
    *(_DWORD *)(v7 + 16) = current[1].klass;
    *(_DWORD *)(v7 + 20) = HIDWORD(current[1].klass);
    monitor = (System_Int32_array **)current[1].monitor;
    *(_QWORD *)(v7 + 24) = monitor;
    sub_B70630((BattleServantConfConponent_o *)(v7 + 24), monitor, v10, v11, v12, v13, v14, v15);
    klass = (System_Int32_array **)current[2].klass;
    *(_QWORD *)(v7 + 32) = klass;
    sub_B70630((BattleServantConfConponent_o *)(v7 + 32), klass, v18, v19, v20, v21, v22, v23);
    v24 = (System_Int32_array **)current[2].monitor;
    *(_QWORD *)(v7 + 40) = v24;
    sub_B70630((BattleServantConfConponent_o *)(v7 + 40), v24, v25, v26, v27, v28, v29, v30);
    *(_DWORD *)(v7 + 48) = current[3].klass;
    if ( !v3 )
      sub_B7076C(v31, v32);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleWaveInfoData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
  if ( !v3 )
LABEL_17:
    sub_B7076C(waveInfoList, v4);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                       (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


System_String_o *__fastcall UserInterruptionQuestEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_435072B & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_435072B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           phase,
           (const MethodInfo_1CA2A34 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserInterruptionQuestEntity__CreatePrimaryKey(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserInterruptionQuestEntity__CreatePK(this->fields.userId, this->fields.questId, this->fields.phase, v2);
}


UserInterruptionQuestEntity_InterruptionInfo_o *__fastcall UserInterruptionQuestEntity__GetInterruptionInfo(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_optionInfo; // x19
  System_Int32_array **optionInfo; // x21
  System_String_o *interruptionInfo; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4350728 & 1) == 0 )
  {
    sub_B70694(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    sub_B70694(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_4350728 = 1;
  }
  p_optionInfo = (BattleServantConfConponent_o *)&this->fields.optionInfo;
  optionInfo = (System_Int32_array **)this->fields.optionInfo;
  if ( !optionInfo )
  {
    interruptionInfo = this->fields.interruptionInfo;
    if ( (BYTE3(Newtonsoft_Json_JsonConvert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo);
    }
    optionInfo = (System_Int32_array **)Newtonsoft_Json_JsonConvert__DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo_(
                                          interruptionInfo,
                                          (const MethodInfo_1D4C700 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    p_optionInfo->klass = (BattleServantConfConponent_c *)optionInfo;
    sub_B70630(p_optionInfo, optionInfo, v6, v7, v8, v9, v10, v11);
  }
  return (UserInterruptionQuestEntity_InterruptionInfo_o *)optionInfo;
}


int32_t __fastcall UserInterruptionQuestEntity__GetRestartWave(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *waveInfoList; // x8

  if ( (byte_4350729 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    byte_4350729 = 1;
  }
  waveInfoList = this->fields.waveInfoList;
  if ( waveInfoList )
    return waveInfoList->fields._size;
  UserInterruptionQuestEntity__SetWaveInfoScript(this, method);
  waveInfoList = this->fields.waveInfoList;
  if ( waveInfoList )
    return waveInfoList->fields._size;
  else
    return 0;
}


void __fastcall UserInterruptionQuestEntity__SetWaveInfoScript(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *waveInfo; // x20
  UserInterruptionQuestEntity_InterruptionInfo_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4350727 & 1) == 0 )
  {
    sub_B70694(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
    sub_B70694(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_4350727 = 1;
  }
  waveInfo = this->fields.waveInfo;
  if ( (BYTE3(Newtonsoft_Json_JsonConvert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo);
  }
  v4 = Newtonsoft_Json_JsonConvert__DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo_(
         waveInfo,
         (const MethodInfo_1D4C700 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
  this->fields.waveInfoList = (struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *)v4;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall UserInterruptionQuestEntity_InterruptionInfo___ctor(
        UserInterruptionQuestEntity_InterruptionInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserInterruptionQuestEntity_Wave___ctor(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_BattleItemInfo_array *__fastcall UserInterruptionQuestEntity_Wave__get_battleItemInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._battleItemInfos_k__BackingField;
}


DropInfo_array *__fastcall UserInterruptionQuestEntity_Wave__get_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._dropInfos_k__BackingField;
}


System_Int32_array *__fastcall UserInterruptionQuestEntity_Wave__get_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._equipSkillChargeNum_k__BackingField;
}


int32_t __fastcall UserInterruptionQuestEntity_Wave__get_star(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._star_k__BackingField;
}


int32_t __fastcall UserInterruptionQuestEntity_Wave__get_turn(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._turn_k__BackingField;
}


int32_t __fastcall UserInterruptionQuestEntity_Wave__get_wave(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._wave_k__BackingField;
}


void __fastcall UserInterruptionQuestEntity_Wave__set_battleItemInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        BattleWaveInfoData_BattleItemInfo_array *value,
        const MethodInfo *method)
{
  this->fields._battleItemInfos_k__BackingField = value;
  sub_B70630(&this->fields._battleItemInfos_k__BackingField);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        DropInfo_array *value,
        const MethodInfo *method)
{
  this->fields._dropInfos_k__BackingField = value;
  sub_B70630(&this->fields._dropInfos_k__BackingField);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._equipSkillChargeNum_k__BackingField = value;
  sub_B70630(&this->fields._equipSkillChargeNum_k__BackingField);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_star(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._star_k__BackingField = value;
}


void __fastcall UserInterruptionQuestEntity_Wave__set_turn(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._turn_k__BackingField = value;
}


void __fastcall UserInterruptionQuestEntity_Wave__set_wave(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._wave_k__BackingField = value;
}