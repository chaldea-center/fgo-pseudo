void __fastcall EventInfoUIVoicePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4188D21 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoUIVoicePlayer_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6168/*"EventInfoUiVoiceHistory_"*/, v8);
    byte_4188D21 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6168/*"EventInfoUiVoiceHistory_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6168/*"EventInfoUiVoiceHistory_"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4188D20 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    byte_4188D20 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voiceAssetNameList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voiceCueList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.playedIdList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_4188D1A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, name);
    byte_4188D1A = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B2C434(0LL, name);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceCueList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__AddHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_4188D15 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&id);
    byte_4188D15 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B2C434(0LL, *(_QWORD *)&id);
  System_Collections_Generic_List_int___Add(
    playedIdList,
    id,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
}


// attributes: thunk
void __fastcall EventInfoUIVoicePlayer__Awake(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__LoadAsset(this, method);
}


void __fastcall EventInfoUIVoicePlayer__ClearCueNameList(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_4188D1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_4188D1B = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceCueList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall EventInfoUIVoicePlayer__ClearHistory(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_4188D14 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4188D14 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall EventInfoUIVoicePlayer__DestroyAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x0
  Il2CppObject *current; // x20
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188D18 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    byte_4188D18 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceAssetNameList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
LABEL_12:
    sub_B2C434(voiceAssetNameList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceAssetNameList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)Empty,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__GetTargetVoiceData(
        EventInfoUIVoicePlayer_o *this,
        int32_t groupId,
        int32_t cleardQuestId,
        const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v5; // x19
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x20
  int max_length; // w8
  unsigned int v26; // w26
  EventInfoUIVoicePlayer_VoiceData_o *v27; // x22
  int32_t CondId; // w23
  int32_t CondKind; // w25
  int64_t CondValue; // x24
  struct EventInfoUIVoicePlayer_VoiceData_array *v31; // x27
  unsigned __int64 v32; // x28
  __int64 v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v41; // x22
  __int64 v42; // x8
  __int64 v43; // x9
  int32_t v44; // w24
  int32_t v45; // w26
  int64_t v46; // x25
  struct System_String_o *age; // x24
  System_Func_int__bool__o *v48; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v55; // x1
  _BOOL8 v56; // x0
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v59; // x1
  __int64 v61; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+10h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_4188D1D & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, *(_QWORD *)&groupId);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__, v13);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v14);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, v19);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__, v22);
    this = (EventInfoUIVoicePlayer_o *)sub_B2C35C(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, v23);
    byte_4188D1D = 1;
  }
  entity = 0LL;
  memset(&v64, 0, sizeof(v64));
  voiceDataList = v5->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_53;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( v26 < max_length )
    {
      v27 = voiceDataList->m_Items[v26];
      if ( !v27 )
        goto LABEL_53;
      this = (EventInfoUIVoicePlayer_o *)v27->fields.ForceClearQuestIds;
      if ( !this )
        goto LABEL_53;
      if ( this->fields.voiceDataList )
      {
        this = (EventInfoUIVoicePlayer_o *)System_Linq_Enumerable__Contains_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             cleardQuestId,
                                             (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 && v27->fields.GroupId == groupId )
        {
          CondKind = v27->fields.CondKind;
          CondId = v27->fields.CondId;
          CondValue = v27->fields.CondValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v27;
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_17;
    }
LABEL_54:
    v61 = sub_B2C460(this);
    sub_B2C400(v61, 0LL);
  }
LABEL_17:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_53;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v31 = v5->fields.voiceDataList;
  if ( !v31 )
    goto LABEL_53;
  if ( (int)v31->max_length >= 1 )
  {
    v32 = 0LL;
    do
    {
      v33 = sub_B2C42C(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
      EventInfoUIVoicePlayer___c__DisplayClass28_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass28_0_o *)v33, 0LL);
      if ( v32 >= v31->max_length )
        goto LABEL_54;
      if ( !v33 )
        goto LABEL_53;
      v40 = (System_Int32_array **)v31->m_Items[v32];
      *(_QWORD *)(v33 + 16) = v40;
      v41 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v33 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v33 + 16), v40, v34, v35, v36, v37, v38, v39);
      v42 = *(_QWORD *)(v33 + 16);
      if ( !v42 )
        goto LABEL_53;
      v43 = *(_QWORD *)(v42 + 48);
      if ( !v43 )
        goto LABEL_53;
      if ( !*(_QWORD *)(v43 + 24) && *(_DWORD *)(v42 + 24) == groupId )
      {
        v45 = *(_DWORD *)(v42 + 28);
        v44 = *(_DWORD *)(v42 + 32);
        v46 = *(int *)(v42 + 36);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v45, v44, v46, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*v41 )
            goto LABEL_53;
          if ( (*v41)[1].fields.missionTargetId < 1
            || !entity
            || (age = entity->fields.age,
                v48 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v48,
                  (Il2CppObject *)v33,
                  Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
                  (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
                this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__24273940(
                                                     (System_Int32_array *)age,
                                                     (System_Func_T__bool__o *)v48,
                                                     (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496),
                ((unsigned __int8)this & 1) != 0) )
          {
            this = (EventInfoUIVoicePlayer_o *)v62;
            if ( !v62 )
              goto LABEL_53;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v62,
              *v41,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
          }
        }
      }
    }
    while ( (__int64)++v32 < (int)v31->max_length );
  }
  if ( !v62 )
LABEL_53:
    sub_B2C434(this, *(_QWORD *)&groupId);
  if ( v62->fields._size < 1 )
    return 0LL;
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v62,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v64,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v50 )
      break;
    current = v64.fields.current;
    if ( !v64.fields.current )
      sub_B2C434(v50, v51);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v5, (int32_t)v64.fields.current[1].klass, v52);
    if ( !IsPlayed )
    {
      if ( !v49 )
        sub_B2C434(IsPlayed, v55);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v49,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v64,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v56 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v49,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v56 )
  {
    v59 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v49;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v5, v57);
    v59 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v62;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v56, v59, v58);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4188D12 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    byte_4188D12 = 1;
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
  v6 = System_String__Concat_44305532(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_4188D1E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&id);
    byte_4188D1E = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B2C434(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v9; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v10; // x8
  int32_t ServantId; // w20
  EventInfoUIVoicePlayer_o *v12; // x20
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x3
  __int64 v15; // x0

  v2 = this;
  if ( (byte_4188D16 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v5);
    this = (EventInfoUIVoicePlayer_o *)sub_B2C35C(&ServantVoiceEntity_TypeInfo, v6);
    byte_4188D16 = 1;
  }
  voiceDataList = v2->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_17;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v15 = sub_B2C460(this);
        sub_B2C400(v15, 0LL);
      }
      v10 = voiceDataList->m_Items[v9];
      if ( !v10 )
        break;
      ServantId = v10->fields.ServantId;
      if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
      }
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_31404932(ServantId, 0LL);
      if ( !v2->fields.voiceAssetNameList )
        break;
      v12 = this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.voiceAssetNameList,
                                           (WarBoardManager_TaskList_o *)this,
                                           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v2->fields.voiceAssetNameList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_B2C434(this, method);
  }
LABEL_16:
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v2, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v2, 0, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadAudioAssetStorage(
        EventInfoUIVoicePlayer_o *this,
        int32_t index,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x19
  int size; // w8
  __int64 v29; // x20
  System_String_o *v30; // x19
  System_Action_o *v31; // x20

  if ( (byte_4188D17 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__, v10);
    sub_B2C35C(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, v11);
    byte_4188D17 = 1;
  }
  v12 = sub_B2C42C(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
  EventInfoUIVoicePlayer___c__DisplayClass21_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass21_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)this,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_QWORD *)(v12 + 32) = endAction,
        *(_DWORD *)(v12 + 24) = index,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v12 + 32),
          (System_Int32_array **)endAction,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (voiceAssetNameList = this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_B2C434(v13, v14);
  }
  size = voiceAssetNameList->fields._size;
  v29 = *(int *)(v12 + 24);
  if ( size <= (int)v29 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 32), 0LL);
  }
  else
  {
    if ( size <= (unsigned int)v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v30 = voiceAssetNameList->fields._items->m_Items[v29];
    v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v12,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v30, v31, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *playedIdList; // x0
  EventInfoUIVoicePlayer_c *v8; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *String; // x20
  __int64 v13; // x8
  System_Collections_Generic_List_int__o *v14; // x20
  unsigned __int64 v15; // x21
  int32_t v16; // w0
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = eventId;
  if ( (byte_4188D11 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&EventInfoUIVoicePlayer_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4188D11 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_18;
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  v8 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v8 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v8->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v10 = System_Int32__ToString((int32_t)&v19, 0LL);
  v11 = System_String__Concat_44305532(SAVE_KEY_PREFIX_VOICE_HISTORY, v10, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    return;
  playedIdList = (System_Collections_Generic_List_int__o *)sub_B2C374(char___TypeInfo, 1LL);
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
    sub_B2C434(playedIdList, *(_QWORD *)&eventId);
  }
  v13 = *(_QWORD *)&playedIdList->fields._size;
  v14 = playedIdList;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( v15 < (unsigned int)v13 )
    {
      v16 = System_Int32__Parse(*((System_String_o **)&v14->fields._syncRoot + v15), 0LL);
      EventInfoUIVoicePlayer__AddHistory(this, v16, v17);
      LODWORD(v13) = v14->fields._size;
      if ( (__int64)++v15 >= (int)v13 )
        return;
    }
LABEL_17:
    v18 = sub_B2C460(playedIdList);
    sub_B2C400(v18, 0LL);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  unsigned int v5; // w20

  if ( (byte_4188D1F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, voiceDataList);
    this = (EventInfoUIVoicePlayer_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__,
                                         v4);
    byte_4188D1F = 1;
  }
  if ( !voiceDataList )
    sub_B2C434(this, voiceDataList);
  v5 = UnityEngine_Random__Range_35348680(0, voiceDataList->fields._size, 0LL);
  if ( voiceDataList->fields._size <= v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return voiceDataList->fields._items->m_Items[v5];
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *VoiceCueInfo; // x20
  System_Char_array *v8; // x0
  System_Char_array *v9; // x1
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8
  __int64 v11; // x0

  if ( (byte_4188D1C & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, voiceData);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__AddRange__, v5);
    byte_4188D1C = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    EventInfoUIVoicePlayer__SetAssetName(this, voiceData->fields.ServantId, v6);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    v8 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v8 )
      goto LABEL_11;
    v9 = v8;
    if ( !v8->max_length )
    {
      v11 = sub_B2C460(v8);
      sub_B2C400(v11, 0LL);
    }
    v8->m_Items[2] = 44;
    if ( !VoiceCueInfo
      || (v8 = (System_Char_array *)System_String__Split(VoiceCueInfo, v8, 0LL),
          (voiceCueList = this->fields.voiceCueList) == 0LL) )
    {
LABEL_11:
      sub_B2C434(v8, v9);
    }
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)v8,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__SaveHistrory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x19
  EventInfoUIVoicePlayer_c *v7; // x8
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = eventId;
  if ( (byte_4188D13 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_String_Join_int___, v4);
    sub_B2C35C(&StringLiteral_699/*","*/, v5);
    byte_4188D13 = 1;
  }
  v6 = System_String__Join_int_(
         (System_String_o *)StringLiteral_699/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_209C7C0 *)Method_System_String_Join_int___);
  v7 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v7 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v7->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_44305532(SAVE_KEY_PREFIX_VOICE_HISTORY, v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(v10, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_31404932; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188D19 & 1) == 0 )
  {
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, *(_QWORD *)&servantId);
    byte_4188D19 = 1;
  }
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_31404932 = ServantVoiceEntity__getVoiceAssetName_31404932(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_31404932;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)VoiceAssetName_31404932,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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

  if ( (byte_4188D10 & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    byte_4188D10 = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  struct SePlayer_o *voicePlayer; // x8
  struct System_Collections_Generic_List_string__o *voiceCueList; // x23
  __int64 voiceIndex; // x22
  int size; // w8
  System_String_o *currentAssetName; // x21
  System_String_o *v13; // x22
  SeManager_c *v14; // x0
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4188D0F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    sub_B2C35C(&SeManager_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4188D0F = 1;
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
            EventInfoUIVoicePlayer__Setup(this, v7);
            return;
          }
LABEL_12:
          currentAssetName = this->fields.currentAssetName;
          if ( size <= (unsigned int)voiceIndex )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v13 = voiceCueList->fields._items->m_Items[voiceIndex];
          v14 = SeManager_TypeInfo;
          if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v14 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v14->static_fields->DEFAULT_VOLUME;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v16 = SoundManager__playVoice_24786800(currentAssetName, v13, DEFAULT_VOLUME, 0LL, 0LL);
          this->fields.voicePlayer = v16;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.voicePlayer,
            (System_Int32_array **)v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
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
      sub_B2C434(IsNullOrEmpty, v7);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, id);
  return voiceData->fields.ConsumeItemId == id;
}