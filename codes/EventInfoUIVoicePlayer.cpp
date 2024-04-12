void __fastcall EventInfoUIVoicePlayer___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B1109 & 1) == 0 )
  {
    sub_B52984(&EventInfoUIVoicePlayer_TypeInfo);
    sub_B52984(&StringLiteral_6211/*"EventInfoUiVoiceHistory_"*/);
    byte_42B1109 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6211/*"EventInfoUiVoiceHistory_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6211/*"EventInfoUiVoiceHistory_"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_int__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B1108 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    byte_42B1108 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.voiceAssetNameList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.voiceCueList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.playedIdList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_42B1102 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    byte_42B1102 = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B52A5C(0LL, name);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceCueList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__AddHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_42B10FE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    byte_42B10FE = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B52A5C(0LL, *(_QWORD *)&id);
  System_Collections_Generic_List_int___Add(
    playedIdList,
    id,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
}


// attributes: thunk
void __fastcall EventInfoUIVoicePlayer__Awake(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__LoadAsset(this, method);
}


void __fastcall EventInfoUIVoicePlayer__ClearCueNameList(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_42B1103 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__Clear__);
    byte_42B1103 = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceCueList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall EventInfoUIVoicePlayer__ClearHistory(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_42B10FD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    byte_42B10FD = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall EventInfoUIVoicePlayer__DestroyAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x0
  Il2CppObject *current; // x20
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B1101 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    byte_42B1101 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceAssetNameList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields.current;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
LABEL_12:
    sub_B52A5C(voiceAssetNameList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceAssetNameList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_string__Clear__);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)Empty,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__GetTargetVoiceData(
        EventInfoUIVoicePlayer_o *this,
        int32_t groupId,
        int32_t cleardQuestId,
        const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v5; // x19
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x20
  int max_length; // w8
  unsigned int v8; // w26
  EventInfoUIVoicePlayer_VoiceData_o *v9; // x22
  int32_t CondId; // w23
  int32_t CondKind; // w25
  int64_t CondValue; // x24
  struct EventInfoUIVoicePlayer_VoiceData_array *v13; // x27
  unsigned __int64 v14; // x28
  __int64 v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v23; // x22
  __int64 v24; // x8
  __int64 v25; // x9
  int32_t v26; // w24
  int32_t v27; // w26
  int64_t v28; // x25
  struct System_String_o *age; // x24
  System_Func_int__bool__o *v30; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  _BOOL8 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v41; // x1
  __int64 v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+10h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_42B1105 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
    sub_B52984(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__);
    this = (EventInfoUIVoicePlayer_o *)sub_B52984(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
    byte_42B1105 = 1;
  }
  entity = 0LL;
  memset(&v46, 0, sizeof(v46));
  voiceDataList = v5->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_53;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( v8 < max_length )
    {
      v9 = voiceDataList->m_Items[v8];
      if ( !v9 )
        goto LABEL_53;
      this = (EventInfoUIVoicePlayer_o *)v9->fields.ForceClearQuestIds;
      if ( !this )
        goto LABEL_53;
      if ( this->fields.voiceDataList )
      {
        this = (EventInfoUIVoicePlayer_o *)System_Linq_Enumerable__Contains_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             cleardQuestId,
                                             (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 && v9->fields.GroupId == groupId )
        {
          CondKind = v9->fields.CondKind;
          CondId = v9->fields.CondId;
          CondValue = v9->fields.CondValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v9;
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_17;
    }
LABEL_54:
    v43 = sub_B52A88(this);
    sub_B52A28(v43, 0LL);
  }
LABEL_17:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_53;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v13 = v5->fields.voiceDataList;
  if ( !v13 )
    goto LABEL_53;
  if ( (int)v13->max_length >= 1 )
  {
    v14 = 0LL;
    do
    {
      v15 = sub_B52A54(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
      EventInfoUIVoicePlayer___c__DisplayClass28_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass28_0_o *)v15, 0LL);
      if ( v14 >= v13->max_length )
        goto LABEL_54;
      if ( !v15 )
        goto LABEL_53;
      v22 = (System_Int32_array **)v13->m_Items[v14];
      *(_QWORD *)(v15 + 16) = v22;
      v23 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v15 + 16);
      sub_B52920((BattleServantConfConponent_o *)(v15 + 16), v22, v16, v17, v18, v19, v20, v21);
      v24 = *(_QWORD *)(v15 + 16);
      if ( !v24 )
        goto LABEL_53;
      v25 = *(_QWORD *)(v24 + 48);
      if ( !v25 )
        goto LABEL_53;
      if ( !*(_QWORD *)(v25 + 24) && *(_DWORD *)(v24 + 24) == groupId )
      {
        v27 = *(_DWORD *)(v24 + 28);
        v26 = *(_DWORD *)(v24 + 32);
        v28 = *(int *)(v24 + 36);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v27, v26, v28, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*v23 )
            goto LABEL_53;
          if ( (*v23)[1].fields.missionTargetId < 1
            || !entity
            || (age = entity->fields.age,
                v30 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v30,
                  (Il2CppObject *)v15,
                  Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
                  (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__),
                this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__27531732(
                                                     (System_Int32_array *)age,
                                                     (System_Func_T__bool__o *)v30,
                                                     (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832),
                ((unsigned __int8)this & 1) != 0) )
          {
            this = (EventInfoUIVoicePlayer_o *)v44;
            if ( !v44 )
              goto LABEL_53;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              *v23,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
          }
        }
      }
    }
    while ( (__int64)++v14 < (int)v13->max_length );
  }
  if ( !v44 )
LABEL_53:
    sub_B52A5C(this, *(_QWORD *)&groupId);
  if ( v44->fields._size < 1 )
    return 0LL;
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v32 )
      break;
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B52A5C(v32, v33);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v5, (int32_t)v46.fields.current[1].klass, v34);
    if ( !IsPlayed )
    {
      if ( !v31 )
        sub_B52A5C(IsPlayed, v37);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v38 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v31,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v38 )
  {
    v41 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v31;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v5, v39);
    v41 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v44;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v38, v41, v40);
}


bool __fastcall EventInfoUIVoicePlayer__HasSaveData(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoUIVoicePlayer_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = eventId;
  if ( (byte_42B10FB & 1) == 0 )
  {
    sub_B52984(&EventInfoUIVoicePlayer_TypeInfo);
    byte_42B10FB = 1;
  }
  v3 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v3 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v3->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44568316(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_42B1106 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42B1106 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B52A5C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v5; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v6; // x8
  EventInfoUIVoicePlayer_o *v7; // x20
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3
  __int64 v10; // x0

  v2 = this;
  if ( (byte_42B10FF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    this = (EventInfoUIVoicePlayer_o *)sub_B52984(&Method_System_Collections_Generic_List_string__Contains__);
    byte_42B10FF = 1;
  }
  voiceDataList = v2->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_14;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v10 = sub_B52A88(this);
        sub_B52A28(v10, 0LL);
      }
      v6 = voiceDataList->m_Items[v5];
      if ( !v6 )
        break;
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_30972712(v6->fields.ServantId, 0LL);
      if ( !v2->fields.voiceAssetNameList )
        break;
      v7 = this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.voiceAssetNameList,
                                           (WarBoardManager_TaskList_o *)this,
                                           (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v2->fields.voiceAssetNameList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_B52A5C(this, method);
  }
LABEL_13:
  v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v2, 0, v8, v9);
}


void __fastcall EventInfoUIVoicePlayer__LoadAudioAssetStorage(
        EventInfoUIVoicePlayer_o *this,
        int32_t index,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x19
  int size; // w8
  __int64 v24; // x20
  System_String_o *v25; // x19
  System_Action_o *v26; // x20

  if ( (byte_42B1100 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__);
    sub_B52984(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
    byte_42B1100 = 1;
  }
  v7 = sub_B52A54(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
  EventInfoUIVoicePlayer___c__DisplayClass21_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass21_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 32) = endAction,
        *(_DWORD *)(v7 + 24) = index,
        sub_B52920(
          (BattleServantConfConponent_o *)(v7 + 32),
          (System_Int32_array **)endAction,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (voiceAssetNameList = this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_B52A5C(v8, v9);
  }
  size = voiceAssetNameList->fields._size;
  v24 = *(int *)(v7 + 24);
  if ( size <= (int)v24 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
  }
  else
  {
    if ( size <= (unsigned int)v24 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v25 = voiceAssetNameList->fields._items->m_Items[v24];
    v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v25, v26, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0
  EventInfoUIVoicePlayer_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *String; // x20
  __int64 v10; // x8
  System_Collections_Generic_List_int__o *v11; // x20
  unsigned __int64 v12; // x21
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = eventId;
  if ( (byte_42B10FA & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&EventInfoUIVoicePlayer_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B10FA = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_18;
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
  v5 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v5 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v5->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v7 = System_Int32__ToString((int32_t)&v16, 0LL);
  v8 = System_String__Concat_44568316(SAVE_KEY_PREFIX_VOICE_HISTORY, v7, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    return;
  playedIdList = (System_Collections_Generic_List_int__o *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !playedIdList )
    goto LABEL_18;
  *(_QWORD *)&eventId = playedIdList;
  if ( !playedIdList->fields._size )
    goto LABEL_17;
  LOWORD(playedIdList->fields._syncRoot) = 44;
  if ( !String
    || (playedIdList = (System_Collections_Generic_List_int__o *)System_String__Split(
                                                                   String,
                                                                   (System_Char_array *)playedIdList,
                                                                   0LL)) == 0LL )
  {
LABEL_18:
    sub_B52A5C(playedIdList, *(_QWORD *)&eventId);
  }
  v10 = *(_QWORD *)&playedIdList->fields._size;
  v11 = playedIdList;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      v13 = System_Int32__Parse(*((System_String_o **)&v11->fields._syncRoot + v12), 0LL);
      EventInfoUIVoicePlayer__AddHistory(this, v13, v14);
      LODWORD(v10) = v11->fields._size;
      if ( (__int64)++v12 >= (int)v10 )
        return;
    }
LABEL_17:
    v15 = sub_B52A88(playedIdList);
    sub_B52A28(v15, 0LL);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  unsigned int v4; // w20

  if ( (byte_42B1107 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__);
    this = (EventInfoUIVoicePlayer_o *)sub_B52984(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
    byte_42B1107 = 1;
  }
  if ( !voiceDataList )
    sub_B52A5C(this, voiceDataList);
  v4 = UnityEngine_Random__Range_35650740(0, voiceDataList->fields._size, 0LL);
  if ( voiceDataList->fields._size <= v4 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return voiceDataList->fields._items->m_Items[v4];
}


// attributes: thunk
void __fastcall EventInfoUIVoicePlayer__OnDestroy(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__DestroyAsset(this, method);
}


void __fastcall EventInfoUIVoicePlayer__Play(
        EventInfoUIVoicePlayer_o *this,
        EventInfoUIVoicePlayer_VoiceData_o *voiceData,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_30972712; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_o *VoiceCueInfo; // x20
  System_Char_array *v13; // x0
  System_Char_array *v14; // x1
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8
  __int64 v16; // x0

  if ( (byte_42B1104 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__AddRange__);
    byte_42B1104 = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    VoiceAssetName_30972712 = ServantVoiceEntity__getVoiceAssetName_30972712(voiceData->fields.ServantId, 0LL);
    this->fields.currentAssetName = VoiceAssetName_30972712;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.currentAssetName,
      (System_Int32_array **)VoiceAssetName_30972712,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    v13 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
    if ( !v13 )
      goto LABEL_11;
    v14 = v13;
    if ( !v13->max_length )
    {
      v16 = sub_B52A88(v13);
      sub_B52A28(v16, 0LL);
    }
    v13->m_Items[2] = 44;
    if ( !VoiceCueInfo
      || (v13 = (System_Char_array *)System_String__Split(VoiceCueInfo, v13, 0LL),
          (voiceCueList = this->fields.voiceCueList) == 0LL) )
    {
LABEL_11:
      sub_B52A5C(v13, v14);
    }
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


void __fastcall EventInfoUIVoicePlayer__SaveHistrory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  EventInfoUIVoicePlayer_c *v5; // x8
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = eventId;
  if ( (byte_42B10FC & 1) == 0 )
  {
    sub_B52984(&EventInfoUIVoicePlayer_TypeInfo);
    sub_B52984(&Method_System_String_Join_int___);
    sub_B52984(&StringLiteral_709/*","*/);
    byte_42B10FC = 1;
  }
  v4 = System_String__Join_int_(
         (System_String_o *)StringLiteral_709/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_1F77C24 *)Method_System_String_Join_int___);
  v5 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v5 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v5->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v7 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_44568316(SAVE_KEY_PREFIX_VOICE_HISTORY, v7, 0LL);
  UnityEngine_PlayerPrefs__SetString(v8, v4, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_30972712; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  VoiceAssetName_30972712 = ServantVoiceEntity__getVoiceAssetName_30972712(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_30972712;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)VoiceAssetName_30972712,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventInfoUIVoicePlayer__Setup(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1

  if ( (byte_42B10F9 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    byte_42B10F9 = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)Empty,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  EventInfoUIVoicePlayer__ClearCueNameList(this, v17);
}


void __fastcall EventInfoUIVoicePlayer__Stop(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *voicePlayer; // x0

  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
    SePlayer__StopSe(voicePlayer, 0.0, 0LL);
  EventInfoUIVoicePlayer__Setup(this, method);
}


void __fastcall EventInfoUIVoicePlayer__Update(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v4; // x1
  struct SePlayer_o *voicePlayer; // x8
  struct System_Collections_Generic_List_string__o *voiceCueList; // x23
  __int64 voiceIndex; // x22
  int size; // w8
  System_String_o *currentAssetName; // x21
  System_String_o *v10; // x22
  SeManager_c *v11; // x0
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42B10F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&SeManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B10F8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.currentAssetName, 0LL);
    if ( !IsNullOrEmpty )
    {
      voicePlayer = this->fields.voicePlayer;
      if ( voicePlayer )
      {
        if ( !voicePlayer->fields.isStop )
          return;
        voiceCueList = this->fields.voiceCueList;
        if ( voiceCueList )
        {
          voiceIndex = this->fields.voiceIndex;
          size = voiceCueList->fields._size;
          if ( (int)voiceIndex >= size )
          {
            EventInfoUIVoicePlayer__Setup(this, v4);
            return;
          }
LABEL_12:
          currentAssetName = this->fields.currentAssetName;
          if ( size <= (unsigned int)voiceIndex )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v10 = voiceCueList->fields._items->m_Items[voiceIndex];
          v11 = SeManager_TypeInfo;
          if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v11 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v13 = SoundManager__playVoice_23788136(currentAssetName, v10, DEFAULT_VOLUME, 0LL, 0LL);
          this->fields.voicePlayer = v13;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.voicePlayer,
            (System_Int32_array **)v13,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          ++this->fields.voiceIndex;
          return;
        }
      }
      else
      {
        voiceCueList = this->fields.voiceCueList;
        if ( voiceCueList )
        {
          voiceIndex = this->fields.voiceIndex;
          size = voiceCueList->fields._size;
          if ( (int)voiceIndex >= size )
            return;
          goto LABEL_12;
        }
      }
      sub_B52A5C(IsNullOrEmpty, v4);
    }
  }
}


void __fastcall EventInfoUIVoicePlayer_VoiceData___ctor(
        EventInfoUIVoicePlayer_VoiceData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer___c__DisplayClass21_0___ctor(
        EventInfoUIVoicePlayer___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer___c__DisplayClass21_0___LoadAudioAssetStorage_b__0(
        EventInfoUIVoicePlayer___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(_4__this, this->fields.index + 1, this->fields.endAction, 0LL);
}


void __fastcall EventInfoUIVoicePlayer___c__DisplayClass28_0___ctor(
        EventInfoUIVoicePlayer___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUIVoicePlayer___c__DisplayClass28_0___GetTargetVoiceData_b__0(
        EventInfoUIVoicePlayer___c__DisplayClass28_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct EventInfoUIVoicePlayer_VoiceData_o *voiceData; // x8

  voiceData = this->fields.voiceData;
  if ( !voiceData )
    sub_B52A5C(this, id);
  return voiceData->fields.ConsumeItemId == id;
}