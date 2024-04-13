void __fastcall UserInterruptionQuestEntity___ctor(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7165 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7165 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


BattleWaveInfoData_array *__fastcall UserInterruptionQuestEntity__ConvertToBattleWaveInfoDataArray(
        UserInterruptionQuestEntity_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  const MethodInfo *v30; // x1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *waveInfoList; // x0
  Il2CppObject *current; // x24
  __int64 v33; // x20
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **monitor; // x1
  System_Int32_array **klass; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x1
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E7163 & 1) == 0 )
  {
    sub_B5D5C4(&BattleWaveInfoData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleWaveInfoData__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo, v26, v27, v28);
    byte_42E7163 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0LL) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v30);
  waveInfoList = this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__) )
  {
    current = v61.fields.current;
    v33 = sub_B5D694(BattleWaveInfoData_TypeInfo);
    BattleWaveInfoData___ctor((BattleWaveInfoData_o *)v33, 0LL);
    if ( !current )
      sub_B5D69C(v34, v35);
    if ( !v33 )
      sub_B5D69C(v34, v35);
    *(_DWORD *)(v33 + 16) = current[1].klass;
    *(_DWORD *)(v33 + 20) = HIDWORD(current[1].klass);
    monitor = (System_Int32_array **)current[1].monitor;
    *(_QWORD *)(v33 + 24) = monitor;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), monitor, v36, v37, v38, v39, v40, v41);
    klass = (System_Int32_array **)current[2].klass;
    *(_QWORD *)(v33 + 32) = klass;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 32), klass, v44, v45, v46, v47, v48, v49);
    v50 = (System_Int32_array **)current[2].monitor;
    *(_QWORD *)(v33 + 40) = v50;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 40), v50, v51, v52, v53, v54, v55, v56);
    *(_DWORD *)(v33 + 48) = current[3].klass;
    if ( !v29 )
      sub_B5D69C(v57, v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v29,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleWaveInfoData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
  if ( !v29 )
LABEL_17:
    sub_B5D69C(waveInfoList, v30);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


System_String_o *__fastcall UserInterruptionQuestEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_42E7164 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, questId, phase, method);
    byte_42E7164 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           phase,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserInterruptionQuestEntity__CreatePrimaryKey(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserInterruptionQuestEntity__CreatePK(this->fields.userId, this->fields.questId, this->fields.phase, v2);
}


int32_t __fastcall UserInterruptionQuestEntity__GetRestartWave(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *waveInfoList; // x8

  if ( (byte_42E7162 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7162 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *waveInfo; // x20
  Il2CppObject *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E7161 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Newtonsoft_Json_JsonConvert_TypeInfo, v5, v6, v7);
    byte_42E7161 = 1;
  }
  waveInfo = this->fields.waveInfo;
  if ( (BYTE3(Newtonsoft_Json_JsonConvert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo);
  }
  v9 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
         waveInfo,
         (const MethodInfo_1E5A3A0 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
  this->fields.waveInfoList = (struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *)v9;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._battleItemInfos_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._battleItemInfos_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        DropInfo_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._dropInfos_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._dropInfos_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._equipSkillChargeNum_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._equipSkillChargeNum_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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