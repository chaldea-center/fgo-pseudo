void __fastcall EventInfoUIVoicePlayer___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E9AD3 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIVoicePlayer_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6247/*"EventInfoUiVoiceHistory_"*/, v8, v9, v10);
    byte_42E9AD3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6247/*"EventInfoUiVoiceHistory_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6247/*"EventInfoUiVoiceHistory_"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_int__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E9AD2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v11, v12, v13);
    byte_42E9AD2 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceAssetNameList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceCueList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.playedIdList = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playedIdList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_42E9ACC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)name, (_DWORD)method, v3);
    byte_42E9ACC = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B5D69C(0LL, name);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceCueList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)name,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__AddHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_42E9AC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, id, (_DWORD)method, v3);
    byte_42E9AC8 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B5D69C(0LL, *(_QWORD *)&id);
  System_Collections_Generic_List_int___Add(
    playedIdList,
    id,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


// attributes: thunk
void __fastcall EventInfoUIVoicePlayer__Awake(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__LoadAsset(this, method);
}


void __fastcall EventInfoUIVoicePlayer__ClearCueNameList(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *voiceCueList; // x0

  if ( (byte_42E9ACD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, (_DWORD)method, v2, v3);
    byte_42E9ACD = 1;
  }
  voiceCueList = this->fields.voiceCueList;
  if ( !voiceCueList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceCueList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall EventInfoUIVoicePlayer__ClearHistory(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_42E9AC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, (_DWORD)method, v2, v3);
    byte_42E9AC7 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall EventInfoUIVoicePlayer__DestroyAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x0
  Il2CppObject *current; // x20
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9ACB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&string_TypeInfo, v20, v21, v22);
    byte_42E9ACB = 1;
  }
  memset(&v33, 0, sizeof(v33));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceAssetNameList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v33.fields.current;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
LABEL_12:
    sub_B5D69C(voiceAssetNameList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceAssetNameList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)Empty,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


// local variable allocation has failed, the output may be wrong!
EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__GetTargetVoiceData(
        EventInfoUIVoicePlayer_o *this,
        int32_t groupId,
        int32_t cleardQuestId,
        const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v5; // x19
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x20
  int max_length; // w8
  unsigned int v62; // w26
  EventInfoUIVoicePlayer_VoiceData_o *v63; // x22
  int32_t CondId; // w23
  int32_t CondKind; // w25
  int64_t CondValue; // x24
  struct EventInfoUIVoicePlayer_VoiceData_array *v67; // x27
  unsigned __int64 v68; // x28
  __int64 v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v77; // x22
  __int64 v78; // x8
  __int64 v79; // x9
  int32_t v80; // w24
  int32_t v81; // w26
  int64_t v82; // x25
  struct System_String_o *age; // x24
  System_Func_int__bool__o *v84; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x20
  _BOOL8 v86; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v91; // x1
  _BOOL8 v92; // x0
  const MethodInfo *v93; // x1
  const MethodInfo *v94; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v95; // x1
  __int64 v97; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v100; // [xsp+10h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_42E9ACF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, groupId, cleardQuestId, method);
    sub_B5D5C4(&CondType_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, v9, v10, v11);
    sub_B5D5C4(
      &Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__, v54, v55, v56);
    this = (EventInfoUIVoicePlayer_o *)sub_B5D5C4(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, v57, v58, v59);
    byte_42E9ACF = 1;
  }
  entity = 0LL;
  memset(&v100, 0, sizeof(v100));
  voiceDataList = v5->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_53;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v62 = 0;
    while ( v62 < max_length )
    {
      v63 = voiceDataList->m_Items[v62];
      if ( !v63 )
        goto LABEL_53;
      this = (EventInfoUIVoicePlayer_o *)v63->fields.ForceClearQuestIds;
      if ( !this )
        goto LABEL_53;
      if ( this->fields.voiceDataList )
      {
        this = (EventInfoUIVoicePlayer_o *)System_Linq_Enumerable__Contains_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             cleardQuestId,
                                             (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 && v63->fields.GroupId == groupId )
        {
          CondKind = v63->fields.CondKind;
          CondId = v63->fields.CondId;
          CondValue = v63->fields.CondValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v63;
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v62 >= max_length )
        goto LABEL_17;
    }
LABEL_54:
    v97 = sub_B5D6C8(this);
    sub_B5D668(v97, 0LL);
  }
LABEL_17:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_53;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v98,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v67 = v5->fields.voiceDataList;
  if ( !v67 )
    goto LABEL_53;
  if ( (int)v67->max_length >= 1 )
  {
    v68 = 0LL;
    do
    {
      v69 = sub_B5D694(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
      EventInfoUIVoicePlayer___c__DisplayClass28_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass28_0_o *)v69, 0LL);
      if ( v68 >= v67->max_length )
        goto LABEL_54;
      if ( !v69 )
        goto LABEL_53;
      v76 = (System_Int32_array **)v67->m_Items[v68];
      *(_QWORD *)(v69 + 16) = v76;
      v77 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v69 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v69 + 16), v76, v70, v71, v72, v73, v74, v75);
      v78 = *(_QWORD *)(v69 + 16);
      if ( !v78 )
        goto LABEL_53;
      v79 = *(_QWORD *)(v78 + 48);
      if ( !v79 )
        goto LABEL_53;
      if ( !*(_QWORD *)(v79 + 24) && *(_DWORD *)(v78 + 24) == groupId )
      {
        v81 = *(_DWORD *)(v78 + 28);
        v80 = *(_DWORD *)(v78 + 32);
        v82 = *(int *)(v78 + 36);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v81, v80, v82, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*v77 )
            goto LABEL_53;
          if ( (*v77)[1].fields.missionTargetId < 1
            || !entity
            || (age = entity->fields.age,
                v84 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v84,
                  (Il2CppObject *)v69,
                  Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
                  (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
                this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__28142236(
                                                     (System_Int32_array *)age,
                                                     (System_Func_T__bool__o *)v84,
                                                     (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384),
                ((unsigned __int8)this & 1) != 0) )
          {
            this = (EventInfoUIVoicePlayer_o *)v98;
            if ( !v98 )
              goto LABEL_53;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v98,
              *v77,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
          }
        }
      }
    }
    while ( (__int64)++v68 < (int)v67->max_length );
  }
  if ( !v98 )
LABEL_53:
    sub_B5D69C(this, *(_QWORD *)&groupId);
  if ( v98->fields._size < 1 )
    return 0LL;
  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v85,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v100,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v98,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  while ( 1 )
  {
    v86 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v100,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v86 )
      break;
    current = v100.fields.current;
    if ( !v100.fields.current )
      sub_B5D69C(v86, v87);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v5, (int32_t)v100.fields.current[1].klass, v88);
    if ( !IsPlayed )
    {
      if ( !v85 )
        sub_B5D69C(IsPlayed, v91);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v85,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v100,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v92 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v85,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v92 )
  {
    v95 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v85;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v5, v93);
    v95 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v98;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v92, v95, v94);
}


bool __fastcall EventInfoUIVoicePlayer__HasSaveData(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoUIVoicePlayer_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-4h] BYREF

  v9 = eventId;
  if ( (byte_42E9AC5 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIVoicePlayer_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E9AC5 = 1;
  }
  v4 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v4 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v4->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44577788(SAVE_KEY_PREFIX_VOICE_HISTORY, v6, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_42E9AD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, id, (_DWORD)method, v3);
    byte_42E9AD0 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_B5D69C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoUIVoicePlayer_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v16; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v17; // x8
  EventInfoUIVoicePlayer_o *v18; // x20
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x3
  __int64 v21; // x0

  v4 = this;
  if ( (byte_42E9AC9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v8, v9, v10);
    this = (EventInfoUIVoicePlayer_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_string__Contains__,
                                         v11,
                                         v12,
                                         v13);
    byte_42E9AC9 = 1;
  }
  voiceDataList = v4->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_14;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      v17 = voiceDataList->m_Items[v16];
      if ( !v17 )
        break;
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_31472176(v17->fields.ServantId, 0LL);
      if ( !v4->fields.voiceAssetNameList )
        break;
      v18 = this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.voiceAssetNameList,
                                           (WarBoardManager_TaskList_o *)this,
                                           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v4->fields.voiceAssetNameList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_B5D69C(this, method);
  }
LABEL_13:
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v4, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v4, 0, v19, v20);
}


void __fastcall EventInfoUIVoicePlayer__LoadAudioAssetStorage(
        EventInfoUIVoicePlayer_o *this,
        int32_t index,
        System_Action_o *endAction,
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x19
  int size; // w8
  __int64 v39; // x20
  System_String_o *v40; // x19
  System_Action_o *v41; // x20

  if ( (byte_42E9ACA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, index, (_DWORD)endAction, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v10, v11, v12);
    sub_B5D5C4(&SoundManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__, v16, v17, v18);
    sub_B5D5C4(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, v19, v20, v21);
    byte_42E9ACA = 1;
  }
  v22 = sub_B5D694(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
  EventInfoUIVoicePlayer___c__DisplayClass21_0___ctor((EventInfoUIVoicePlayer___c__DisplayClass21_0_o *)v22, 0LL);
  if ( !v22
    || (*(_QWORD *)(v22 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v22 + 16),
          (System_Int32_array **)this,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        *(_QWORD *)(v22 + 32) = endAction,
        *(_DWORD *)(v22 + 24) = index,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v22 + 32),
          (System_Int32_array **)endAction,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36),
        (voiceAssetNameList = this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_B5D69C(v23, v24);
  }
  size = voiceAssetNameList->fields._size;
  v39 = *(int *)(v22 + 24);
  if ( size <= (int)v39 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v22 + 32), 0LL);
  }
  else
  {
    if ( size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v40 = voiceAssetNameList->fields._items->m_Items[v39];
    v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v22,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v40, v41, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *playedIdList; // x0
  EventInfoUIVoicePlayer_c *v15; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o *String; // x20
  __int64 v20; // x8
  System_Collections_Generic_List_int__o *v21; // x20
  unsigned __int64 v22; // x21
  int32_t v23; // w0
  const MethodInfo *v24; // x2
  __int64 v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = eventId;
  if ( (byte_42E9AC4 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&EventInfoUIVoicePlayer_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E9AC4 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_18;
  System_Collections_Generic_List_int___Clear(
    playedIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  v15 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v15 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v15->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v17 = System_Int32__ToString((int32_t)&v26, 0LL);
  v18 = System_String__Concat_44577788(SAVE_KEY_PREFIX_VOICE_HISTORY, v17, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    return;
  playedIdList = (System_Collections_Generic_List_int__o *)sub_B5D5DC(char___TypeInfo, 1LL);
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
    sub_B5D69C(playedIdList, *(_QWORD *)&eventId);
  }
  v20 = *(_QWORD *)&playedIdList->fields._size;
  v21 = playedIdList;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( v22 < (unsigned int)v20 )
    {
      v23 = System_Int32__Parse(*((System_String_o **)&v21->fields._syncRoot + v22), 0LL);
      EventInfoUIVoicePlayer__AddHistory(this, v23, v24);
      LODWORD(v20) = v21->fields._size;
      if ( (__int64)++v22 >= (int)v20 )
        return;
    }
LABEL_17:
    v25 = sub_B5D6C8(playedIdList);
    sub_B5D668(v25, 0LL);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  unsigned int v8; // w20

  if ( (byte_42E9AD1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__,
      (_DWORD)voiceDataList,
      (_DWORD)method,
      v3);
    this = (EventInfoUIVoicePlayer_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__,
                                         v5,
                                         v6,
                                         v7);
    byte_42E9AD1 = 1;
  }
  if ( !voiceDataList )
    sub_B5D69C(this, voiceDataList);
  v8 = UnityEngine_Random__Range_35654020(0, voiceDataList->fields._size, 0LL);
  if ( voiceDataList->fields._size <= v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return voiceDataList->fields._items->m_Items[v8];
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_String_o *VoiceAssetName_31472176; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *VoiceCueInfo; // x20
  System_Char_array *v17; // x0
  System_Char_array *v18; // x1
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8
  __int64 v20; // x0

  if ( (byte_42E9ACE & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)voiceData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__AddRange__, v6, v7, v8);
    byte_42E9ACE = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(voiceData->fields.ServantId, 0LL);
    this->fields.currentAssetName = VoiceAssetName_31472176;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.currentAssetName,
      (System_Int32_array **)VoiceAssetName_31472176,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    v17 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v17 )
      goto LABEL_11;
    v18 = v17;
    if ( !v17->max_length )
    {
      v20 = sub_B5D6C8(v17);
      sub_B5D668(v20, 0LL);
    }
    v17->m_Items[2] = 44;
    if ( !VoiceCueInfo
      || (v17 = (System_Char_array *)System_String__Split(VoiceCueInfo, v17, 0LL),
          (voiceCueList = this->fields.voiceCueList) == 0LL) )
    {
LABEL_11:
      sub_B5D69C(v17, v18);
    }
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)v17,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


void __fastcall EventInfoUIVoicePlayer__SaveHistrory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x19
  EventInfoUIVoicePlayer_c *v12; // x8
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = eventId;
  if ( (byte_42E9AC6 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIVoicePlayer_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_String_Join_int___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_707/*","*/, v8, v9, v10);
    byte_42E9AC6 = 1;
  }
  v11 = System_String__Join_int_(
          (System_String_o *)StringLiteral_707/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
          (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
  v12 = EventInfoUIVoicePlayer_TypeInfo;
  if ( (BYTE3(EventInfoUIVoicePlayer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v12 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v12->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v14 = System_Int32__ToString((int32_t)&v16, 0LL);
  v15 = System_String__Concat_44577788(SAVE_KEY_PREFIX_VOICE_HISTORY, v14, 0LL);
  UnityEngine_PlayerPrefs__SetString(v15, v11, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_31472176; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_31472176;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentAssetName,
    (System_Int32_array **)VoiceAssetName_31472176,
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

  if ( (byte_42E9AC3 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9AC3 = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_B5D560(
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
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  struct SePlayer_o *voicePlayer; // x8
  struct System_Collections_Generic_List_string__o *voiceCueList; // x23
  __int64 voiceIndex; // x22
  int size; // w8
  System_String_o *currentAssetName; // x21
  System_String_o *v21; // x22
  SeManager_c *v22; // x0
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E9AC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E9AC2 = 1;
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
            EventInfoUIVoicePlayer__Setup(this, v15);
            return;
          }
LABEL_12:
          currentAssetName = this->fields.currentAssetName;
          if ( size <= (unsigned int)voiceIndex )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v21 = voiceCueList->fields._items->m_Items[voiceIndex];
          v22 = SeManager_TypeInfo;
          if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v22 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v22->static_fields->DEFAULT_VOLUME;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v24 = SoundManager__playVoice_23391328(currentAssetName, v21, DEFAULT_VOLUME, 0LL, 0LL);
          this->fields.voicePlayer = v24;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.voicePlayer,
            (System_Int32_array **)v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
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
      sub_B5D69C(IsNullOrEmpty, v15);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, id);
  return voiceData->fields.ConsumeItemId == id;
}