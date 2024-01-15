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

  if ( (byte_40F881B & 1) == 0 )
  {
    sub_B16FFC(&EventInfoUIVoicePlayer_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_6150/*"EventInfoUiVoiceHistory_"*/, v8);
    byte_40F881B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6150/*"EventInfoUiVoiceHistory_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6150/*"EventInfoUiVoiceHistory_"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_int__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40F881A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v8);
    byte_40F881A = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceAssetNameList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceCueList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v31 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playedIdList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_40F8814 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, name);
    byte_40F8814 = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceCueList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__AddHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_40F880F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&id);
    byte_40F880F = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B170D4();
  System_Collections_Generic_List_int___Add(
    playedIdList,
    id,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
}


// attributes: thunk
void __fastcall EventInfoUIVoicePlayer__Awake(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__LoadAsset(this, method);
}


void __fastcall EventInfoUIVoicePlayer__ClearCueNameList(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_40F8815 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_40F8815 = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceCueList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall EventInfoUIVoicePlayer__ClearHistory(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_40F880E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_40F880E = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B170D4();
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
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
  struct System_Collections_Generic_List_string__o *v11; // x0
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8812 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&string_TypeInfo, v8);
    byte_40F8812 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceAssetNameList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.voiceAssetNameList;
  if ( !v11 )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)Empty,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct EventInfoUIVoicePlayer_VoiceData_array *v41; // x27
  unsigned __int64 v42; // x28
  __int64 v43; // x23
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v50; // x22
  __int64 v51; // x8
  __int64 v52; // x9
  int32_t v53; // w24
  int32_t v54; // w26
  int64_t v55; // x25
  struct System_String_o *age; // x24
  System_Func_int__bool__o *v57; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x20
  const MethodInfo *v59; // x2
  Il2CppObject *current; // x22
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v64; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+10h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_40F8817 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&groupId);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__, v13);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v14);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, v19);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__, v22);
    this = (EventInfoUIVoicePlayer_o *)sub_B16FFC(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, v23);
    byte_40F8817 = 1;
  }
  entity = 0LL;
  memset(&v68, 0, sizeof(v68));
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
                                             (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_B17100(this, *(_QWORD *)&groupId, *(_QWORD *)&cleardQuestId);
    sub_B170A0();
  }
LABEL_17:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_53;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    cleardQuestId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v41 = v5->fields.voiceDataList;
  if ( !v41 )
    goto LABEL_53;
  if ( (int)v41->max_length >= 1 )
  {
    v42 = 0LL;
    do
    {
      v43 = sub_B170CC(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, v37, v38, v39, v40);
      EventInfoUIVoicePlayer___c__DisplayClass28_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass28_0_o *)v43, 0LL);
      if ( v42 >= v41->max_length )
        goto LABEL_54;
      if ( !v43 )
        goto LABEL_53;
      v49 = (System_Int32_array **)v41->m_Items[v42];
      *(_QWORD *)(v43 + 16) = v49;
      v50 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v43 + 16);
      sub_B16F98(
        (BattleServantConfConponent_o *)(v43 + 16),
        v49,
        *(System_String_array ***)&cleardQuestId,
        v44,
        v45,
        v46,
        v47,
        v48);
      v51 = *(_QWORD *)(v43 + 16);
      if ( !v51 )
        goto LABEL_53;
      v52 = *(_QWORD *)(v51 + 48);
      if ( !v52 )
        goto LABEL_53;
      if ( !*(_QWORD *)(v52 + 24) && *(_DWORD *)(v51 + 24) == groupId )
      {
        v54 = *(_DWORD *)(v51 + 28);
        v53 = *(_DWORD *)(v51 + 32);
        v55 = *(int *)(v51 + 36);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(v54, v53, v55, 0, 0LL) )
        {
          if ( !*v50 )
            goto LABEL_53;
          if ( (*v50)[1].fields.missionTargetId < 1
            || !entity
            || (age = entity->fields.age,
                v57 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v37, v38, v39, v40),
                System_Func_int__bool____ctor(
                  v57,
                  (Il2CppObject *)v43,
                  Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
                  (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
                BasicHelper__Any_int__25910576(
                  (System_Int32_array *)age,
                  (System_Func_T__bool__o *)v57,
                  (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656)) )
          {
            if ( !v66 )
              goto LABEL_53;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v66,
              *v50,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
          }
        }
      }
    }
    while ( (__int64)++v42 < (int)v41->max_length );
  }
  if ( !v66 )
LABEL_53:
    sub_B170D4();
  if ( v66->fields._size < 1 )
    return 0LL;
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v68,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v66,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__) )
  {
    current = v68.fields.current;
    if ( !v68.fields.current )
      sub_B170D4();
    if ( !EventInfoUIVoicePlayer__IsPlayed(v5, (int32_t)v68.fields.current[1].klass, v59) )
    {
      if ( !v58 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v58,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v61 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v58,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v61 )
  {
    v64 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v58;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v5, v62);
    v64 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v66;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v61, v64, v63);
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
  if ( (byte_40F880C & 1) == 0 )
  {
    sub_B16FFC(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    byte_40F880C = 1;
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
  v6 = System_String__Concat_43743732(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_40F8818 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&id);
    byte_40F8818 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B170D4();
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EventInfoUIVoicePlayer_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v12; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v13; // x8
  int32_t ServantId; // w20
  System_String_o *VoiceAssetName_30033140; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *voiceAssetNameList; // x0
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x3

  v5 = this;
  if ( (byte_40F8810 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v8);
    this = (EventInfoUIVoicePlayer_o *)sub_B16FFC(&ServantVoiceEntity_TypeInfo, v9);
    byte_40F8810 = 1;
  }
  voiceDataList = v5->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_17;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v13 = voiceDataList->m_Items[v12];
      if ( !v13 )
        break;
      ServantId = v13->fields.ServantId;
      if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
      }
      VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(ServantId, 0LL);
      if ( !v5->fields.voiceAssetNameList )
        break;
      v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)VoiceAssetName_30033140;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v5->fields.voiceAssetNameList,
                                           (WarBoardManager_TaskList_o *)VoiceAssetName_30033140,
                                           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        voiceAssetNameList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.voiceAssetNameList;
        if ( !voiceAssetNameList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          voiceAssetNameList,
          v16,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_16:
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v18, (Il2CppObject *)v5, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v5, 0, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadAudioAssetStorage(
        EventInfoUIVoicePlayer_o *this,
        int32_t index,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x19
  int size; // w8
  __int64 v32; // x20
  System_String_o *v33; // x19
  System_Action_o *v34; // x20

  if ( (byte_40F8811 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__, v11);
    sub_B16FFC(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, v12);
    byte_40F8811 = 1;
  }
  v13 = sub_B170CC(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&index, endAction, method, v4);
  EventInfoUIVoicePlayer___c__DisplayClass21_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass21_0_o *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v13 + 16),
          (System_Int32_array **)this,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        *(_QWORD *)(v13 + 32) = endAction,
        *(_DWORD *)(v13 + 24) = index,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v13 + 32),
          (System_Int32_array **)endAction,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (voiceAssetNameList = this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_B170D4();
  }
  size = voiceAssetNameList->fields._size;
  v32 = *(int *)(v13 + 24);
  if ( size <= (int)v32 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 32), 0LL);
  }
  else
  {
    if ( size <= (unsigned int)v32 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v33 = voiceAssetNameList->fields._items->m_Items[v32];
    v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v13,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v33, v34, 1, 0LL);
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
  __int64 v13; // x2
  System_Char_array *v14; // x0
  __int64 v15; // x2
  System_Char_array *v16; // x1
  __int64 v17; // x8
  System_Char_array *v18; // x20
  unsigned __int64 v19; // x21
  int32_t v20; // w0
  const MethodInfo *v21; // x2
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = eventId;
  if ( (byte_40F880B & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventInfoUIVoicePlayer_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F880B = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_18;
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  v8 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v8 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v8->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v10 = System_Int32__ToString((int32_t)&v22, 0LL);
  v11 = System_String__Concat_43743732(SAVE_KEY_PREFIX_VOICE_HISTORY, v10, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    return;
  v14 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v13);
  if ( !v14 )
    goto LABEL_18;
  v16 = v14;
  if ( !v14->max_length )
    goto LABEL_17;
  v14->m_Items[2] = 44;
  if ( !String || (v14 = (System_Char_array *)System_String__Split(String, v14, 0LL)) == 0LL )
LABEL_18:
    sub_B170D4();
  v17 = *(_QWORD *)&v14->max_length;
  v18 = v14;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    while ( v19 < (unsigned int)v17 )
    {
      v20 = System_Int32__Parse(*(System_String_o **)&v18->m_Items[4 * v19 + 2], 0LL);
      EventInfoUIVoicePlayer__AddHistory(this, v20, v21);
      LODWORD(v17) = v18->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        return;
    }
LABEL_17:
    sub_B17100(v14, v16, v15);
    sub_B170A0();
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  unsigned int v5; // w20

  if ( (byte_40F8819 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, voiceDataList);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__, v4);
    byte_40F8819 = 1;
  }
  if ( !voiceDataList )
    sub_B170D4();
  v5 = UnityEngine_Random__Range_34843248(0, voiceDataList->fields._size, 0LL);
  if ( voiceDataList->fields._size <= v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  __int64 v8; // x2
  System_Char_array *v9; // x0
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_T__o *v11; // x0
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8

  if ( (byte_40F8816 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, voiceData);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__AddRange__, v5);
    byte_40F8816 = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    EventInfoUIVoicePlayer__SetAssetName(this, voiceData->fields.ServantId, v6);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    v9 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v8);
    if ( !v9 )
      goto LABEL_11;
    if ( !v9->max_length )
    {
      sub_B17100(v9, v9, v10);
      sub_B170A0();
    }
    v9->m_Items[2] = 44;
    if ( !VoiceCueInfo
      || (v11 = (System_Collections_Generic_IEnumerable_T__o *)System_String__Split(VoiceCueInfo, v9, 0LL),
          (voiceCueList = this->fields.voiceCueList) == 0LL) )
    {
LABEL_11:
      sub_B170D4();
    }
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)voiceCueList,
      v11,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_string__AddRange__);
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
  if ( (byte_40F880D & 1) == 0 )
  {
    sub_B16FFC(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_String_Join_int___, v4);
    sub_B16FFC(&StringLiteral_698/*","*/, v5);
    byte_40F880D = 1;
  }
  v6 = System_String__Join_int_(
         (System_String_o *)StringLiteral_698/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_224FA24 *)Method_System_String_Join_int___);
  v7 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v7 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v7->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_43743732(SAVE_KEY_PREFIX_VOICE_HISTORY, v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(v10, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_30033140; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F8813 & 1) == 0 )
  {
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, *(_QWORD *)&servantId);
    byte_40F8813 = 1;
  }
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_30033140;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)VoiceAssetName_30033140,
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

  if ( (byte_40F880A & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    byte_40F880A = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B16F98(
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
  const MethodInfo *v6; // x1
  struct SePlayer_o *voicePlayer; // x8
  struct System_Collections_Generic_List_string__o *voiceCueList; // x23
  __int64 voiceIndex; // x22
  int size; // w8
  System_String_o *currentAssetName; // x21
  System_String_o *v12; // x22
  SeManager_c *v13; // x0
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8809 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F8809 = 1;
  }
  if ( this->fields.state == 1 && !System_String__IsNullOrEmpty(this->fields.currentAssetName, 0LL) )
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
          EventInfoUIVoicePlayer__Setup(this, v6);
          return;
        }
LABEL_12:
        currentAssetName = this->fields.currentAssetName;
        if ( size <= (unsigned int)voiceIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v12 = voiceCueList->fields._items->m_Items[voiceIndex];
        v13 = SeManager_TypeInfo;
        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v13 = SeManager_TypeInfo;
        }
        DEFAULT_VOLUME = v13->static_fields->DEFAULT_VOLUME;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v15 = SoundManager__playVoice_24824004(currentAssetName, v12, DEFAULT_VOLUME, 0LL, 0LL);
        this->fields.voicePlayer = v15;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.voicePlayer,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return voiceData->fields.ConsumeItemId == id;
}