void __fastcall EventInfoUIVoicePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4C2401C & 1) == 0 )
  {
    sub_1C3B764(&EventInfoUIVoicePlayer_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_6347/*"FOLLOWER_SELECT_TYPE_POINT"*/, v8);
    byte_4C2401C = 1;
  }
  EventInfoUIVoicePlayer_TypeInfo->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY = (struct System_String_o *)StringLiteral_6347/*"FOLLOWER_SELECT_TYPE_POINT"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields,
    StringLiteral_6347/*"FOLLOWER_SELECT_TYPE_POINT"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C2401B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v5);
    byte_4C2401B = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.voiceAssetNameList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.voiceCueList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v20;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.playedIdList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *voiceCueList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C24015 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, name);
    byte_4C24015 = 1;
  }
  voiceCueList = (System_Collections_Generic_List_object__o *)this->fields.voiceCueList;
  if ( !voiceCueList
    || (items = voiceCueList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++voiceCueList->fields._version,
        !items) )
  {
    sub_1C3B9C0(voiceCueList, name);
  }
  size = voiceCueList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voiceCueList,
      (Il2CppObject *)name,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    voiceCueList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)name;
    sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__AddHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *playedIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4C24011 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&id);
    byte_4C24011 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList
    || (items = playedIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedIdList->fields._version,
        !items) )
  {
    sub_1C3B9C0(playedIdList, *(_QWORD *)&id);
  }
  size = playedIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedIdList,
      id,
      *(const MethodInfo_366EC48 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    playedIdList->fields._size = size + 1;
    items->m_Items[size + 1] = id;
  }
}


// attributes: thunk
void __fastcall EventInfoUIVoicePlayer__Awake(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__LoadAsset(this, method);
}


void __fastcall EventInfoUIVoicePlayer__ClearCueNameList(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C24016 & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1C3B764(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_4C24016 = 1;
  }
  voiceCueList = v2->fields.voiceCueList;
  if ( !voiceCueList )
    sub_1C3B9C0(this, method);
  size = voiceCueList->fields._size;
  v5 = voiceCueList->fields._version + 1;
  voiceCueList->fields._size = 0;
  voiceCueList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)voiceCueList->fields._items, 0, size, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__ClearHistory(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  struct System_Collections_Generic_List_int__o *playedIdList; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_4C24010 & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4C24010 = 1;
  }
  playedIdList = v2->fields.playedIdList;
  if ( !playedIdList )
    sub_1C3B9C0(this, method);
  v4 = playedIdList->fields._version + 1;
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v4;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Collections_Generic_List_string__o *v16; // x8
  int64_t size; // x2
  int v18; // w9
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C24014 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1C3B764(&SoundManager_TypeInfo, v7);
    sub_1C3B764(&string_TypeInfo, v8);
    byte_4C24014 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)voiceAssetNameList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v16 = this->fields.voiceAssetNameList;
  if ( !v16 )
LABEL_13:
    sub_1C3B9C0(voiceAssetNameList, method);
  size = (unsigned int)v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.currentAssetName,
    (int64_t)Empty,
    size,
    v11,
    v12,
    v13,
    v14,
    v15);
}


// local variable allocation has failed, the output may be wrong!
EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__GetTargetVoiceData(
        EventInfoUIVoicePlayer_o *this,
        int32_t groupId,
        int32_t cleardQuestId,
        const MethodInfo *method)
{
  int32_t v5; // w20
  EventInfoUIVoicePlayer_o *v6; // x19
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
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x26
  int max_length; // w8
  unsigned int v26; // w27
  EventInfoUIVoicePlayer_VoiceData_o *v27; // x22
  int32_t CondId; // w23
  int32_t CondKind; // w25
  int64_t CondValue; // x24
  System_Collections_Generic_List_object__o *v31; // x26
  struct EventInfoUIVoicePlayer_VoiceData_array *v32; // x29
  unsigned __int64 i; // x27
  __int64 v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  _QWORD *v42; // x23
  __int64 v43; // x8
  __int64 v44; // x9
  int32_t v45; // w19
  System_Collections_Generic_List_object__o *v46; // x20
  int32_t v47; // w24
  int32_t v48; // w26
  int64_t v49; // x25
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Int32_array *monitor; // x24
  System_Func_int__bool__o *v57; // x25
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Collections_Generic_List_object__o *v62; // x20
  _BOOL8 v63; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  _BOOL8 v79; // x0
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v82; // x1
  EventInfoUIVoicePlayer_o *v84; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v5 = groupId;
  v6 = this;
  if ( (byte_4C24018 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_int____77906328, *(_QWORD *)&groupId);
    sub_1C3B764(&CondType_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, v8);
    sub_1C3B764(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__, v14);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, v19);
    sub_1C3B764(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo, v20);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C3B764(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__, v22);
    this = (EventInfoUIVoicePlayer_o *)sub_1C3B764(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, v23);
    byte_4C24018 = 1;
  }
  entity = 0LL;
  memset(&v86, 0, sizeof(v86));
  voiceDataList = v6->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_58;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
LABEL_59:
        sub_1C3B9C8(this, *(_QWORD *)&groupId);
      v27 = voiceDataList->m_Items[v26];
      if ( !v27 )
        break;
      this = (EventInfoUIVoicePlayer_o *)v27->fields.ForceClearQuestIds;
      if ( !this )
        break;
      if ( this->fields.m_CancellationTokenSource )
      {
        this = (EventInfoUIVoicePlayer_o *)System_Linq_Enumerable__Contains_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             cleardQuestId,
                                             (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 && v27->fields.GroupId == v5 )
        {
          CondKind = v27->fields.CondKind;
          CondId = v27->fields.CondId;
          CondValue = v27->fields.CondValue;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v27;
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_16;
    }
LABEL_58:
    sub_1C3B9C0(this, *(_QWORD *)&groupId);
  }
LABEL_16:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_58;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v32 = v6->fields.voiceDataList;
  v84 = v6;
  if ( !v32 )
    goto LABEL_58;
  if ( (int)v32->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v32->max_length; ++i )
    {
      v34 = sub_1C3B9B0(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v34, 0LL);
      if ( i >= v32->max_length )
        goto LABEL_59;
      if ( !v34 )
        goto LABEL_58;
      v41 = (int64_t)v32->m_Items[i];
      *(_QWORD *)(v34 + 16) = v41;
      v42 = (_QWORD *)(v34 + 16);
      sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 16), v41, v35, v36, v37, v38, v39, v40);
      v43 = *(_QWORD *)(v34 + 16);
      if ( !v43 )
        goto LABEL_58;
      v44 = *(_QWORD *)(v43 + 48);
      if ( !v44 )
        goto LABEL_58;
      if ( !*(_QWORD *)(v44 + 24) && *(_DWORD *)(v43 + 24) == v5 )
      {
        v45 = v5;
        v46 = v31;
        v48 = *(_DWORD *)(v43 + 28);
        v47 = *(_DWORD *)(v43 + 32);
        v49 = *(int *)(v43 + 36);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v48, v47, v49, 0, 0LL, 0LL);
        v31 = v46;
        v5 = v45;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_QWORD *)&groupId = *v42;
          if ( !*v42 )
            goto LABEL_58;
          if ( *(int *)(*(_QWORD *)&groupId + 56LL) >= 1 && entity )
          {
            monitor = (System_Int32_array *)entity[1].monitor;
            v57 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v57,
              (Il2CppObject *)v34,
              Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
              0LL);
            this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__50178292(
                                                 monitor,
                                                 (System_Func_T__bool__o *)v57,
                                                 (const MethodInfo_2FDA8F4 *)Method_BasicHelper_Any_int____77906328);
            if ( ((unsigned __int8)this & 1) == 0 )
              continue;
            *(_QWORD *)&groupId = *v42;
          }
          if ( !v31 )
            goto LABEL_58;
          items = v31->fields._items;
          v59 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
          ++v31->fields._version;
          if ( !items )
            goto LABEL_58;
          size = v31->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              *(Il2CppObject **)&groupId,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = &items->obj.klass + size;
            v31->fields._size = size + 1;
            v61[4] = *(Il2CppClass **)&groupId;
            sub_1C3B708((PartyOrganizationUtility_o *)(v61 + 4), *(int64_t *)&groupId, v50, v51, v52, v53, v54, v55);
          }
        }
      }
    }
  }
  if ( !v31 )
    goto LABEL_58;
  if ( v31->fields._size < 1 )
    return 0LL;
  v62 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    v31,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  v86 = v85;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v63 )
      break;
    current = v86.fields._current;
    if ( !v86.fields._current )
      sub_1C3B9C0(v63, v64);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v84, (int32_t)v86.fields._current[1].klass, v65);
    if ( !IsPlayed )
    {
      if ( !v62 )
        sub_1C3B9C0(IsPlayed, v68);
      v75 = v62->fields._items;
      v76 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
      ++v62->fields._version;
      if ( !v75 )
        sub_1C3B9C0(IsPlayed, v68);
      v77 = v62->fields._size;
      if ( (unsigned int)v77 >= v75->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v62,
          current,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = &v75->obj.klass + v77;
        v62->fields._size = v77 + 1;
        v78[4] = (Il2CppClass *)current;
        sub_1C3B708((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)current, v69, v70, v71, v72, v73, v74);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v79 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v62,
          (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v79 )
  {
    v82 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v62;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v84, v80);
    v82 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v31;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v79, v82, v81);
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
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = eventId;
  if ( (byte_4C2400E & 1) == 0 )
  {
    sub_1C3B764(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    byte_4C2400E = 1;
  }
  v3 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v3 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v3->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63368612(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_4C24019 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&id);
    byte_4C24019 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_1C3B9C0(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v8; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v9; // x8
  Il2CppObject *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v20; // x8
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x3

  v2 = this;
  if ( (byte_4C24012 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v4);
    this = (EventInfoUIVoicePlayer_o *)sub_1C3B764(&Method_System_Collections_Generic_List_string__Contains__, v5);
    byte_4C24012 = 1;
  }
  voiceDataList = v2->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_17;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C3B9C8(this, method);
      v9 = voiceDataList->m_Items[v8];
      if ( !v9 )
        break;
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_41314952(v9->fields.ServantId, 0LL);
      if ( !v2->fields.voiceAssetNameList )
        break;
      v10 = (Il2CppObject *)this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_object___Contains(
                                           (System_Collections_Generic_List_object__o *)v2->fields.voiceAssetNameList,
                                           (Il2CppObject *)this,
                                           (const MethodInfo_368BFFC *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v2->fields.voiceAssetNameList;
        if ( !this )
          break;
        v17 = *(_QWORD *)&this->fields.m_CachedPtr;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v17 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v17 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v10,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = v17 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v20 + 32) = v10;
          sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_1C3B9C0(this, method);
  }
LABEL_16:
  v21 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v2, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v2, 0, v21, v22);
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
  __int64 v12; // x22
  System_Collections_Generic_List_object__o *voiceAssetNameList; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t v27; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v29; // x20

  if ( (byte_4C24013 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1C3B764(&SoundManager_TypeInfo, v9);
    sub_1C3B764(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__, v10);
    sub_1C3B764(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, v11);
    byte_4C24013 = 1;
  }
  v12 = sub_1C3B9B0(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_QWORD *)(v12 + 32) = endAction,
        *(_DWORD *)(v12 + 24) = index,
        sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)endAction, v21, v22, v23, v24, v25, v26),
        (voiceAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_1C3B9C0(voiceAssetNameList, v14);
  }
  v27 = *(_DWORD *)(v12 + 24);
  if ( voiceAssetNameList->fields._size <= v27 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 32), 0LL);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             voiceAssetNameList,
             v27,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
    v29 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v12,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage((System_String_o *)Item, v29, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *playedIdList; // x8
  int v7; // w9
  EventInfoUIVoicePlayer_c *v8; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *String; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoUIVoicePlayer_o *v14; // x20
  unsigned __int64 v15; // x21
  int32_t v16; // w0
  const MethodInfo *v17; // x2
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  v18 = eventId;
  if ( (byte_4C2400D & 1) == 0 )
  {
    sub_1C3B764(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v4);
    this = (EventInfoUIVoicePlayer_o *)sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C2400D = 1;
  }
  playedIdList = v3->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_15;
  v7 = playedIdList->fields._version + 1;
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v7;
  v8 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v8 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v8->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v10 = System_Int32__ToString((int32_t)&v18, 0LL);
  v11 = System_String__Concat_63368612(SAVE_KEY_PREFIX_VOICE_HISTORY, v10, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoUIVoicePlayer_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoUIVoicePlayer_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
      if ( this )
      {
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v14 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v15 = 0LL;
          do
          {
            if ( v15 >= (unsigned int)m_CancellationTokenSource )
              sub_1C3B9C8(this, *(_QWORD *)&eventId);
            v16 = System_Int32__Parse(*((System_String_o **)&v14->fields.voiceDataList + v15), 0LL);
            EventInfoUIVoicePlayer__AddHistory(v3, v16, v17);
            LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
            ++v15;
          }
          while ( (__int64)v15 < (int)m_CancellationTokenSource );
        }
        return;
      }
    }
LABEL_15:
    sub_1C3B9C0(this, *(_QWORD *)&eventId);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  int32_t v5; // w1

  if ( (byte_4C2401A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, voiceDataList);
    this = (EventInfoUIVoicePlayer_o *)sub_1C3B764(
                                         &Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__,
                                         v4);
    byte_4C2401A = 1;
  }
  if ( !voiceDataList )
    sub_1C3B9C0(this, voiceDataList);
  v5 = UnityEngine_Random__Range_71082488(0, voiceDataList->fields._size, 0LL);
  return (EventInfoUIVoicePlayer_VoiceData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)voiceDataList,
                                                 v5,
                                                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
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
  struct System_String_o *VoiceAssetName_41314952; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  System_String_o *VoiceCueInfo; // x0
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8

  if ( (byte_4C24017 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__AddRange__, voiceData);
    byte_4C24017 = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    VoiceAssetName_41314952 = ServantVoiceEntity__getVoiceAssetName_41314952(voiceData->fields.ServantId, 0LL);
    this->fields.currentAssetName = VoiceAssetName_41314952;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.currentAssetName,
      (int64_t)VoiceAssetName_41314952,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    if ( !VoiceCueInfo
      || (VoiceCueInfo = (System_String_o *)System_String__Split(VoiceCueInfo, 0x2Cu, 0, 0LL),
          (voiceCueList = this->fields.voiceCueList) == 0LL) )
    {
      sub_1C3B9C0(VoiceCueInfo, v12);
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)VoiceCueInfo,
      (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_string__AddRange__);
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
  System_String_o *v6; // x0
  EventInfoUIVoicePlayer_c *v7; // x8
  System_String_o *v8; // x19
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v12 = eventId;
  if ( (byte_4C2400F & 1) == 0 )
  {
    sub_1C3B764(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_String_Join_int___, v4);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v5);
    byte_4C2400F = 1;
  }
  v6 = System_String__Join_int_(
         (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_3095570 *)Method_System_String_Join_int___);
  v7 = EventInfoUIVoicePlayer_TypeInfo;
  v8 = v6;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v7 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v7->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v10 = System_Int32__ToString((int32_t)&v12, 0LL);
  v11 = System_String__Concat_63368612(SAVE_KEY_PREFIX_VOICE_HISTORY, v10, 0LL);
  UnityEngine_PlayerPrefs__SetString(v11, v8, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_41314952; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  VoiceAssetName_41314952 = ServantVoiceEntity__getVoiceAssetName_41314952(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_41314952;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.currentAssetName,
    (int64_t)VoiceAssetName_41314952,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventInfoUIVoicePlayer__Setup(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1

  if ( (byte_4C2400C & 1) == 0 )
  {
    sub_1C3B764(&string_TypeInfo, method);
    byte_4C2400C = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.currentAssetName,
    (int64_t)Empty,
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
  __int64 v6; // x1
  struct SePlayer_o *voicePlayer; // x8
  System_Collections_Generic_List_object__o *voiceCueList; // x0
  const MethodInfo *voiceIndex; // x1
  System_String_o *currentAssetName; // x21
  Il2CppObject *Item; // x22
  SeManager_c *v12; // x8
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4C2400B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    sub_1C3B764(&SeManager_TypeInfo, v4);
    sub_1C3B764(&SoundManager_TypeInfo, v5);
    byte_4C2400B = 1;
  }
  if ( this->fields.state == 1 && !System_String__IsNullOrEmpty(this->fields.currentAssetName, 0LL) )
  {
    voicePlayer = this->fields.voicePlayer;
    if ( voicePlayer )
    {
      if ( !voicePlayer->fields.isStop )
        return;
      voiceCueList = (System_Collections_Generic_List_object__o *)this->fields.voiceCueList;
      if ( voiceCueList )
      {
        voiceIndex = (const MethodInfo *)(unsigned int)this->fields.voiceIndex;
        if ( (int)voiceIndex >= voiceCueList->fields._size )
        {
          EventInfoUIVoicePlayer__Setup(this, voiceIndex);
          return;
        }
LABEL_12:
        currentAssetName = this->fields.currentAssetName;
        Item = System_Collections_Generic_List_object___get_Item(
                 voiceCueList,
                 (int32_t)voiceIndex,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
        v12 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v12 = SeManager_TypeInfo;
        }
        DEFAULT_VOLUME = v12->static_fields->DEFAULT_VOLUME;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v14 = SoundManager__playVoice_40137440(currentAssetName, (System_String_o *)Item, DEFAULT_VOLUME, 0LL, 0, 0LL);
        this->fields.voicePlayer = v14;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.voicePlayer, (int64_t)v14, v15, v16, v17, v18, v19, v20);
        ++this->fields.voiceIndex;
        return;
      }
    }
    else
    {
      voiceCueList = (System_Collections_Generic_List_object__o *)this->fields.voiceCueList;
      if ( voiceCueList )
      {
        LODWORD(voiceIndex) = this->fields.voiceIndex;
        if ( (int)voiceIndex >= voiceCueList->fields._size )
          return;
        goto LABEL_12;
      }
    }
    sub_1C3B9C0(voiceCueList, v6);
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
  const MethodInfo *v2; // x3
  EventInfoUIVoicePlayer_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(_4__this, this->fields.index + 1, this->fields.endAction, v2);
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
    sub_1C3B9C0(this, id);
  return voiceData->fields.ConsumeItemId == id;
}