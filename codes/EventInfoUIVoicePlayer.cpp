void EventInfoUIVoicePlayer___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593AD9A & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIVoicePlayer_TypeInfo);
    sub_21FFC50(&StringLiteral_6478/*"EventInfoUiVoiceHistory_"*/);
    byte_593AD9A = 1;
  }
  v7 = StringLiteral_6478/*"EventInfoUiVoiceHistory_"*/;
  EventInfoUIVoicePlayer_TypeInfo->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY = (struct System_String_o *)StringLiteral_6478/*"EventInfoUiVoiceHistory_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_int__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_593AD99 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593AD99 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voiceAssetNameList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceCueList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playedIdList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventInfoUIVoicePlayer_o *v9; // x20
  System_Collections_Generic_List_object__o *voiceCueList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_593AD93 & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    byte_593AD93 = 1;
  }
  voiceCueList = (System_Collections_Generic_List_object__o *)v9->fields.voiceCueList;
  if ( !voiceCueList
    || (items = voiceCueList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++voiceCueList->fields._version,
        !items) )
  {
    sub_21FFECC(this, name);
  }
  size = voiceCueList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voiceCueList,
      (Il2CppObject *)name,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    voiceCueList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)name;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)name,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIVoicePlayer__AddHistory(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *playedIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_593AD8F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    byte_593AD8F = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList
    || (items = playedIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedIdList->fields._version,
        !items) )
  {
    sub_21FFECC(playedIdList, *(_QWORD *)&id);
  }
  size = playedIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedIdList,
      id,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    playedIdList->fields._size = size + 1;
    items->m_Items[size] = id;
  }
}


// attributes: thunk
void EventInfoUIVoicePlayer__Awake(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__LoadAsset(this, method);
}


void EventInfoUIVoicePlayer__ClearCueNameList(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_593AD94 & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    byte_593AD94 = 1;
  }
  voiceCueList = v2->fields.voiceCueList;
  if ( !voiceCueList )
    sub_21FFECC(this, method);
  size = voiceCueList->fields._size;
  v5 = voiceCueList->fields._version + 1;
  voiceCueList->fields._size = 0;
  voiceCueList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)voiceCueList->fields._items, 0, size, 0);
}


void EventInfoUIVoicePlayer__ClearHistory(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  struct System_Collections_Generic_List_int__o *playedIdList; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_593AD8E & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    byte_593AD8E = 1;
  }
  playedIdList = v2->fields.playedIdList;
  if ( !playedIdList )
    sub_21FFECC(this, method);
  v4 = playedIdList->fields._version + 1;
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v4;
}


void EventInfoUIVoicePlayer__DestroyAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x20
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Collections_Generic_List_string__o *v11; // x8
  System_String_o *size; // x2
  int v13; // w9
  struct System_String_o **v14; // x8
  struct System_String_o *v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593AD92 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593AD92 = 1;
  }
  voiceAssetNameList = this->fields.voiceAssetNameList;
  memset(&v16, 0, sizeof(v16));
  if ( !voiceAssetNameList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)voiceAssetNameList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.voiceAssetNameList;
  if ( !v11 )
LABEL_13:
    sub_21FFECC(voiceAssetNameList, method);
  size = (System_String_o *)(unsigned int)v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, (int32_t)size, 0);
  v14 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v15 = *v14;
  this->fields.currentAssetName = *v14;
  this->fields.voiceIndex = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentAssetName,
    (int32_t)v15,
    size,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
EventInfoUIVoicePlayer_VoiceData_o *EventInfoUIVoicePlayer__GetTargetVoiceData(
        EventInfoUIVoicePlayer_o *this,
        int32_t groupId,
        int32_t cleardQuestId,
        const MethodInfo *method)
{
  int32_t v5; // w20
  EventInfoUIVoicePlayer_o *v6; // x19
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x26
  int max_length; // w8
  unsigned int v9; // w28
  EventInfoUIVoicePlayer_VoiceData_o *v10; // x22
  int64_t CondValue; // x25
  int32_t CondKind; // w23
  int32_t CondId; // w24
  System_Collections_Generic_List_object__o *v14; // x26
  struct EventInfoUIVoicePlayer_VoiceData_array *v15; // x29
  unsigned __int64 i; // x27
  __int64 v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  EventInfoUIVoicePlayer_VoiceData_o *v24; // x1
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x9
  int32_t v28; // w19
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x26
  int32_t v31; // w24
  int32_t v32; // w25
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Int32_array *monitor; // x24
  System_Func_int__bool__o *v40; // x25
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_object__o *v45; // x20
  _BOOL8 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v51; // x1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  _BOOL8 v62; // x0
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v65; // x1
  EventInfoUIVoicePlayer_o *v67; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v5 = groupId;
  v6 = this;
  if ( (byte_593AD96 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__);
    this = (EventInfoUIVoicePlayer_o *)sub_21FFC50(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
    byte_593AD96 = 1;
  }
  voiceDataList = v6->fields.voiceDataList;
  entity = 0;
  memset(&v69, 0, sizeof(v69));
  if ( !voiceDataList )
    goto LABEL_58;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
LABEL_59:
        sub_21FFED4(this);
      v10 = voiceDataList->m_Items[v9];
      if ( !v10 )
        break;
      this = (EventInfoUIVoicePlayer_o *)v10->fields.ForceClearQuestIds;
      if ( !this )
        break;
      if ( this->fields.m_CancellationTokenSource )
      {
        this = (EventInfoUIVoicePlayer_o *)System_Linq_Enumerable__Contains_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             cleardQuestId,
                                             (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 && v10->fields.GroupId == v5 )
        {
          CondValue = v10->fields.CondValue;
          CondKind = v10->fields.CondKind;
          CondId = v10->fields.CondId;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId);
          this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(CondKind, CondId, CondValue, 0, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v10;
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_58:
    sub_21FFECC(this, *(_QWORD *)&groupId);
  }
LABEL_16:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_58;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v15 = v6->fields.voiceDataList;
  v67 = v6;
  if ( !v15 )
    goto LABEL_58;
  if ( SLODWORD(v15->max_length) >= 1 )
  {
    for ( i = 0; (__int64)i < SLODWORD(v15->max_length); ++i )
    {
      v17 = sub_21FFEBC(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      if ( i >= LODWORD(v15->max_length) )
        goto LABEL_59;
      if ( !v17 )
        goto LABEL_58;
      v24 = v15->m_Items[i];
      *(_QWORD *)(v17 + 16) = v24;
      v25 = (_QWORD *)(v17 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)v24, v18, v19, v20, v21, v22, v23);
      v26 = *(_QWORD *)(v17 + 16);
      if ( !v26 )
        goto LABEL_58;
      v27 = *(_QWORD *)(v26 + 48);
      if ( !v27 )
        goto LABEL_58;
      if ( !*(_QWORD *)(v27 + 24) && *(_DWORD *)(v26 + 24) == v5 )
      {
        v28 = v5;
        v29 = v14;
        v30 = *(int *)(v26 + 36);
        v31 = *(_DWORD *)(v26 + 28);
        v32 = *(_DWORD *)(v26 + 32);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v31, v32, v30, 0, 0, 0);
        v14 = v29;
        v5 = v28;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_QWORD *)&groupId = *v25;
          if ( !*v25 )
            goto LABEL_58;
          if ( *(int *)(*(_QWORD *)&groupId + 56LL) >= 1 && entity )
          {
            monitor = (System_Int32_array *)entity[1].monitor;
            v40 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v40,
              (Il2CppObject *)v17,
              Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
              0);
            this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__58574768(
                                                 monitor,
                                                 (System_Func_T__bool__o *)v40,
                                                 (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
            if ( ((unsigned __int8)this & 1) == 0 )
              continue;
            *(_QWORD *)&groupId = *v25;
          }
          if ( !v14 )
            goto LABEL_58;
          items = v14->fields._items;
          v42 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_58;
          size = v14->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              *(Il2CppObject **)&groupId,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v44[4] = *(Il2CppClass **)&groupId;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), groupId, v33, v34, v35, v36, v37, v38);
          }
        }
      }
    }
  }
  if ( !v14 )
    goto LABEL_58;
  if ( v14->fields._size < 1 )
    return 0;
  v45 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    v14,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  v69 = v68;
  v68.fields._list = 0;
  *(_QWORD *)&v68.fields._index = &v69;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v46 )
      break;
    current = v69.fields._current;
    if ( !v69.fields._current )
      sub_21FFECC(v46, v47);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v67, (int32_t)v69.fields._current[1].klass, v48);
    if ( !IsPlayed )
    {
      if ( !v45
        || (v58 = v45->fields._items,
            v59 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__,
            ++v45->fields._version,
            !v58) )
      {
        sub_21FFECC(IsPlayed, v51);
      }
      v60 = v45->fields._size;
      if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          current,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &v58->obj.klass + v60;
        v45->fields._size = v60 + 1;
        v61[4] = (Il2CppClass *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v61 + 4), (int32_t)current, v52, v53, v54, v55, v56, v57);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v62 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v45,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v62 )
  {
    v65 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v45;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v67, v63);
    v65 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v14;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v62, v65, v64);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoUIVoicePlayer__HasSaveData(EventInfoUIVoicePlayer_o *this, int32_t eventId, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = eventId;
  if ( (byte_593AD8C & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIVoicePlayer_TypeInfo);
    byte_593AD8C = 1;
  }
  v3 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !*(&EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    v3 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v3->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75438412(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_593AD97 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    byte_593AD97 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_21FFECC(0, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
}


void EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v5; // w24
  EventInfoUIVoicePlayer_VoiceData_o *v6; // x8
  Il2CppObject *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v17; // x8
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x3

  v2 = this;
  if ( (byte_593AD90 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    this = (EventInfoUIVoicePlayer_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    byte_593AD90 = 1;
  }
  voiceDataList = v2->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_17;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_21FFED4(this);
      v6 = voiceDataList->m_Items[v5];
      if ( !v6 )
        break;
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_49754652(v6->fields.ServantId, 0);
      if ( !v2->fields.voiceAssetNameList )
        break;
      v7 = (Il2CppObject *)this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_object___Contains(
                                           (System_Collections_Generic_List_object__o *)v2->fields.voiceAssetNameList,
                                           (Il2CppObject *)this,
                                           (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v2->fields.voiceAssetNameList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v15 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v7,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v17 + 32) = v7;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)v7, v8, v9, v10, v11, v12, v13);
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_21FFECC(this, method);
  }
LABEL_16:
  v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v2, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v2, 0, v18, v19);
}


void EventInfoUIVoicePlayer__LoadAudioAssetStorage(
        EventInfoUIVoicePlayer_o *this,
        int32_t index,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_List_object__o *voiceAssetNameList; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v24; // x20
  __int64 v25; // x1

  if ( (byte_593AD91 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__);
    sub_21FFC50(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
    byte_593AD91 = 1;
  }
  v7 = sub_21FFEBC(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 32) = endAction,
        *(_DWORD *)(v7 + 24) = index,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)endAction, v16, v17, v18, v19, v20, v21),
        (voiceAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.voiceAssetNameList) == 0) )
  {
    sub_21FFECC(voiceAssetNameList, v9);
  }
  v22 = *(_DWORD *)(v7 + 24);
  if ( voiceAssetNameList->fields._size <= v22 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             voiceAssetNameList,
             v22,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
    v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v7,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v25);
    SoundManager__loadAudioAssetStorage((System_String_o *)Item, v24, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIVoicePlayer__LoadHistory(EventInfoUIVoicePlayer_o *this, int32_t eventId, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v3; // x19
  struct System_Collections_Generic_List_int__o *playedIdList; // x8
  EventInfoUIVoicePlayer_c *v5; // x0
  int v6; // w9
  int v7; // w10
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *String; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoUIVoicePlayer_o *v13; // x20
  unsigned __int64 v14; // x21
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  v17 = eventId;
  if ( (byte_593AD8B & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIVoicePlayer_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    this = (EventInfoUIVoicePlayer_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593AD8B = 1;
  }
  playedIdList = v3->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_15;
  v5 = EventInfoUIVoicePlayer_TypeInfo;
  v6 = playedIdList->fields._version + 1;
  v7 = *(&EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished + 1);
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&eventId);
    v5 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v5->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v9 = System_Int32__ToString((int32_t)&v17, 0);
  v10 = System_String__Concat_75438412(SAVE_KEY_PREFIX_VOICE_HISTORY, v9, 0);
  String = UnityEngine_PlayerPrefs__GetString(v10, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (EventInfoUIVoicePlayer_o *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoUIVoicePlayer_o *)System_String__Split(String, 0x2Cu, 0, 0);
      if ( this )
      {
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v13 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v14 = 0;
          do
          {
            if ( v14 >= (unsigned int)m_CancellationTokenSource )
              sub_21FFED4(this);
            v15 = System_Int32__Parse(*((System_String_o **)&v13->fields.voiceDataList + v14), 0);
            EventInfoUIVoicePlayer__AddHistory(v3, v15, v16);
            LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
            ++v14;
          }
          while ( (__int64)v14 < (int)m_CancellationTokenSource );
        }
        return;
      }
    }
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&eventId);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  int32_t v4; // w1

  if ( (byte_593AD98 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__);
    this = (EventInfoUIVoicePlayer_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
    byte_593AD98 = 1;
  }
  if ( !voiceDataList )
    sub_21FFECC(this, voiceDataList);
  v4 = UnityEngine_Random__Range_83187376(0, voiceDataList->fields._size, 0);
  return (EventInfoUIVoicePlayer_VoiceData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)voiceDataList,
                                                 v4,
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
}


// attributes: thunk
void EventInfoUIVoicePlayer__OnDestroy(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer__DestroyAsset(this, method);
}


void EventInfoUIVoicePlayer__Play(
        EventInfoUIVoicePlayer_o *this,
        EventInfoUIVoicePlayer_VoiceData_o *voiceData,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  struct System_String_o *VoiceAssetName_49754652; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_String_o *VoiceCueInfo; // x0

  if ( (byte_593AD95 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    byte_593AD95 = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    ServantId = voiceData->fields.ServantId;
    this->fields.state = 1;
    VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652(ServantId, 0);
    this->fields.currentAssetName = VoiceAssetName_49754652;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentAssetName,
      (int32_t)VoiceAssetName_49754652,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    if ( !VoiceCueInfo
      || (VoiceCueInfo = (System_String_o *)System_String__Split(VoiceCueInfo, 0x2Cu, 0, 0), !this->fields.voiceCueList) )
    {
      sub_21FFECC(VoiceCueInfo, v13);
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)this->fields.voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)VoiceCueInfo,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


void EventInfoUIVoicePlayer__SaveHistrory(EventInfoUIVoicePlayer_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  EventInfoUIVoicePlayer_c *v6; // x8
  System_String_o *v7; // x19
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = eventId;
  if ( (byte_593AD8D & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIVoicePlayer_TypeInfo);
    sub_21FFC50(&Method_System_String_Join_int___);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593AD8D = 1;
  }
  v4 = System_String__Join_int_(
         (System_String_o *)StringLiteral_869/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_3957568 *)Method_System_String_Join_int___);
  v6 = EventInfoUIVoicePlayer_TypeInfo;
  v7 = v4;
  if ( !*(&EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo, v5);
    v6 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v6->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  v10 = System_String__Concat_75438412(SAVE_KEY_PREFIX_VOICE_HISTORY, v9, 0);
  UnityEngine_PlayerPrefs__SetString(v10, v7, 0);
}


void EventInfoUIVoicePlayer__SetAssetName(EventInfoUIVoicePlayer_o *this, int32_t servantId, const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_49754652; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652(servantId, 0);
  this->fields.currentAssetName = VoiceAssetName_49754652;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentAssetName,
    (int32_t)VoiceAssetName_49754652,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void EventInfoUIVoicePlayer__Setup(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1

  *(_QWORD *)&this->fields.state = 0;
  this->fields.voicePlayer = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, 0, v2, v3, v4, v5, v6, v7);
  v9 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v10 = *v9;
  this->fields.currentAssetName = *v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentAssetName,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  EventInfoUIVoicePlayer__ClearCueNameList(this, v17);
}


void EventInfoUIVoicePlayer__Stop(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *voicePlayer; // x0

  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
    SePlayer__StopSe(voicePlayer, 0.0, 0);
  EventInfoUIVoicePlayer__Setup(this, method);
}


void EventInfoUIVoicePlayer__Update(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct SePlayer_o *voicePlayer; // x8
  System_Collections_Generic_List_object__o *voiceCueList; // x0
  const MethodInfo *voiceIndex; // x1
  System_String_o *currentAssetName; // x21
  __int64 v8; // x1
  Il2CppObject *Item; // x22
  SeManager_c *v10; // x8
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593AD8A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593AD8A = 1;
  }
  if ( this->fields.state == 1 && !System_String__IsNullOrEmpty(this->fields.currentAssetName, 0) )
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
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        v10 = SeManager_TypeInfo;
        if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
          v10 = SeManager_TypeInfo;
        }
        DEFAULT_VOLUME = v10->static_fields->DEFAULT_VOLUME;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v8);
        v12 = SoundManager__playVoice_48465348(currentAssetName, (System_String_o *)Item, DEFAULT_VOLUME, 0, 0, 0);
        this->fields.voicePlayer = v12;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer,
          (int32_t)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
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
    sub_21FFECC(voiceCueList, v3);
  }
}


void EventInfoUIVoicePlayer_VoiceData___ctor(EventInfoUIVoicePlayer_VoiceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoUIVoicePlayer___c__DisplayClass21_0___ctor(
        EventInfoUIVoicePlayer___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoUIVoicePlayer___c__DisplayClass21_0___LoadAudioAssetStorage_b__0(
        EventInfoUIVoicePlayer___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventInfoUIVoicePlayer_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(_4__this, this->fields.index + 1, this->fields.endAction, v2);
}


void EventInfoUIVoicePlayer___c__DisplayClass28_0___ctor(
        EventInfoUIVoicePlayer___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoUIVoicePlayer___c__DisplayClass28_0___GetTargetVoiceData_b__0(
        EventInfoUIVoicePlayer___c__DisplayClass28_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct EventInfoUIVoicePlayer_VoiceData_o *voiceData; // x8

  voiceData = this->fields.voiceData;
  if ( !voiceData )
    sub_21FFECC(this, *(_QWORD *)&id);
  return voiceData->fields.ConsumeItemId == id;
}