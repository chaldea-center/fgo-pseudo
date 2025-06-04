void __fastcall EventInfoUIVoicePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B03FF6 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoUIVoicePlayer_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_6170/*"EventInfoUiVoiceHistory_"*/, v4);
    byte_4B03FF6 = 1;
  }
  EventInfoUIVoicePlayer_TypeInfo->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY = (struct System_String_o *)StringLiteral_6170/*"EventInfoUiVoiceHistory_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields, StringLiteral_6170/*"EventInfoUiVoiceHistory_"*/, v2, v3);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B03FF5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v5);
    byte_4B03FF5 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceAssetNameList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceCueList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.playedIdList, (int32_t)v12, v13, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *voiceCueList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4B03FEF & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, name);
    byte_4B03FEF = 1;
  }
  voiceCueList = (System_Collections_Generic_List_object__o *)this->fields.voiceCueList;
  if ( !voiceCueList
    || (items = voiceCueList->fields._items,
        v8 = Method_System_Collections_Generic_List_string__Add__,
        ++voiceCueList->fields._version,
        !items) )
  {
    sub_1BC3264(voiceCueList, name);
  }
  size = voiceCueList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voiceCueList,
      (Il2CppObject *)name,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    voiceCueList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)name;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)name, (int32_t)method, v3);
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

  if ( (byte_4B03FEB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&id);
    byte_4B03FEB = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList
    || (items = playedIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedIdList->fields._version,
        !items) )
  {
    sub_1BC3264(playedIdList, *(_QWORD *)&id);
  }
  size = playedIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedIdList,
      id,
      *(const MethodInfo_3683E1C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  if ( (byte_4B03FF0 & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1BC3008(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_4B03FF0 = 1;
  }
  voiceCueList = v2->fields.voiceCueList;
  if ( !voiceCueList )
    sub_1BC3264(this, method);
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
  if ( (byte_4B03FEA & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4B03FEA = 1;
  }
  playedIdList = v2->fields.playedIdList;
  if ( !playedIdList )
    sub_1BC3264(this, method);
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
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_string__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B03FEE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1BC3008(&SoundManager_TypeInfo, v7);
    sub_1BC3008(&string_TypeInfo, v8);
    byte_4B03FEE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)voiceAssetNameList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v12 = this->fields.voiceAssetNameList;
  if ( !v12 )
LABEL_13:
    sub_1BC3264(voiceAssetNameList, method);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentAssetName, (int32_t)Empty, size, v11);
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
  const MethodInfo *v35; // x3
  EventInfoUIVoicePlayer_VoiceData_o *v36; // x1
  _QWORD *v37; // x23
  __int64 v38; // x8
  __int64 v39; // x9
  int32_t v40; // w19
  System_Collections_Generic_List_object__o *v41; // x20
  int32_t v42; // w24
  int32_t v43; // w26
  int64_t v44; // x25
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Int32_array *monitor; // x24
  System_Func_int__bool__o *v48; // x25
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_List_object__o *v53; // x20
  _BOOL8 v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  _BOOL8 v66; // x0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v69; // x1
  EventInfoUIVoicePlayer_o *v71; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v5 = groupId;
  v6 = this;
  if ( (byte_4B03FF2 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int____76812400, *(_QWORD *)&groupId);
    sub_1BC3008(&CondType_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__, v14);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, v19);
    sub_1BC3008(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo, v20);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BC3008(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__, v22);
    this = (EventInfoUIVoicePlayer_o *)sub_1BC3008(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, v23);
    byte_4B03FF2 = 1;
  }
  entity = 0LL;
  memset(&v73, 0, sizeof(v73));
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
        sub_1BC326C(this, *(_QWORD *)&groupId, *(_QWORD *)&cleardQuestId);
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
                                             (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1BC3264(this, *(_QWORD *)&groupId);
  }
LABEL_16:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_58;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v32 = v6->fields.voiceDataList;
  v71 = v6;
  if ( !v32 )
    goto LABEL_58;
  if ( (int)v32->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v32->max_length; ++i )
    {
      v34 = sub_1BC3254(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v34, 0LL);
      if ( i >= v32->max_length )
        goto LABEL_59;
      if ( !v34 )
        goto LABEL_58;
      v36 = v32->m_Items[i];
      *(_QWORD *)(v34 + 16) = v36;
      v37 = (_QWORD *)(v34 + 16);
      sub_1BC2FAC((CGThumbnailListItem_o *)(v34 + 16), (int32_t)v36, cleardQuestId, v35);
      v38 = *(_QWORD *)(v34 + 16);
      if ( !v38 )
        goto LABEL_58;
      v39 = *(_QWORD *)(v38 + 48);
      if ( !v39 )
        goto LABEL_58;
      if ( !*(_QWORD *)(v39 + 24) && *(_DWORD *)(v38 + 24) == v5 )
      {
        v40 = v5;
        v41 = v31;
        v43 = *(_DWORD *)(v38 + 28);
        v42 = *(_DWORD *)(v38 + 32);
        v44 = *(int *)(v38 + 36);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v43, v42, v44, 0, 0LL, 0LL);
        v31 = v41;
        v5 = v40;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_QWORD *)&groupId = *v37;
          if ( !*v37 )
            goto LABEL_58;
          if ( *(int *)(*(_QWORD *)&groupId + 56LL) >= 1 && entity )
          {
            monitor = (System_Int32_array *)entity[1].monitor;
            v48 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v48,
              (Il2CppObject *)v34,
              Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
              0LL);
            this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__50245724(
                                                 monitor,
                                                 (System_Func_T__bool__o *)v48,
                                                 (const MethodInfo_2FEB05C *)Method_BasicHelper_Any_int____76812400);
            if ( ((unsigned __int8)this & 1) == 0 )
              continue;
            *(_QWORD *)&groupId = *v37;
          }
          if ( !v31 )
            goto LABEL_58;
          items = v31->fields._items;
          v50 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
          ++v31->fields._version;
          if ( !items )
            goto LABEL_58;
          size = v31->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              *(Il2CppObject **)&groupId,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &items->obj.klass + size;
            v31->fields._size = size + 1;
            v52[4] = *(Il2CppClass **)&groupId;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v52 + 4), groupId, v45, v46);
          }
        }
      }
    }
  }
  if ( !v31 )
    goto LABEL_58;
  if ( v31->fields._size < 1 )
    return 0LL;
  v53 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    v31,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v54 )
      break;
    current = v73.fields._current;
    if ( !v73.fields._current )
      sub_1BC3264(v54, v55);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v71, (int32_t)v73.fields._current[1].klass, v56);
    if ( !IsPlayed )
    {
      if ( !v53 )
        sub_1BC3264(IsPlayed, v59);
      v62 = v53->fields._items;
      v63 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
      ++v53->fields._version;
      if ( !v62 )
        sub_1BC3264(IsPlayed, v59);
      v64 = v53->fields._size;
      if ( (unsigned int)v64 >= v62->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          current,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &v62->obj.klass + v64;
        v53->fields._size = v64 + 1;
        v65[4] = (Il2CppClass *)current;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)current, v60, v61);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v66 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v53,
          (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v66 )
  {
    v69 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v53;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v71, v67);
    v69 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v31;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v66, v69, v68);
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
  if ( (byte_4B03FE8 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    byte_4B03FE8 = 1;
  }
  v3 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v3 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v3->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62348648(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_4B03FF3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&id);
    byte_4B03FF3 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_1BC3264(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoUIVoicePlayer_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v9; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v10; // x8
  Il2CppObject *v11; // x20
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v16; // x8
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x3

  v3 = this;
  if ( (byte_4B03FEC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v5);
    this = (EventInfoUIVoicePlayer_o *)sub_1BC3008(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_4B03FEC = 1;
  }
  voiceDataList = v3->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_17;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1BC326C(this, method, v2);
      v10 = voiceDataList->m_Items[v9];
      if ( !v10 )
        break;
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_41775916(v10->fields.ServantId, 0LL);
      if ( !v3->fields.voiceAssetNameList )
        break;
      v11 = (Il2CppObject *)this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_object___Contains(
                                           (System_Collections_Generic_List_object__o *)v3->fields.voiceAssetNameList,
                                           (Il2CppObject *)this,
                                           (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v3->fields.voiceAssetNameList;
        if ( !this )
          break;
        v13 = *(_QWORD *)&this->fields.m_CachedPtr;
        v14 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v13 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v11,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = v13 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v16 + 32) = v11;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v11, v2, v12);
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_1BC3264(this, method);
  }
LABEL_16:
  v17 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v3, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v3, 0, v17, v18);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v21; // x20

  if ( (byte_4B03FED & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BC3008(&SoundManager_TypeInfo, v9);
    sub_1BC3008(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__, v10);
    sub_1BC3008(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, v11);
    byte_4B03FED = 1;
  }
  v12 = sub_1BC3254(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16),
        *(_QWORD *)(v12 + 32) = endAction,
        *(_DWORD *)(v12 + 24) = index,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)endAction, v17, v18),
        (voiceAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_1BC3264(voiceAssetNameList, v14);
  }
  v19 = *(_DWORD *)(v12 + 24);
  if ( voiceAssetNameList->fields._size <= v19 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 32), 0LL);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             voiceAssetNameList,
             v19,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
    v21 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v12,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage((System_String_o *)Item, v21, 1, 0LL);
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
  __int64 v13; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoUIVoicePlayer_o *v15; // x20
  unsigned __int64 v16; // x21
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  v19 = eventId;
  if ( (byte_4B03FE7 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v4);
    this = (EventInfoUIVoicePlayer_o *)sub_1BC3008(&StringLiteral_1/*""*/, v5);
    byte_4B03FE7 = 1;
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
  v10 = System_Int32__ToString((int32_t)&v19, 0LL);
  v11 = System_String__Concat_62348648(SAVE_KEY_PREFIX_VOICE_HISTORY, v10, 0LL);
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
        v15 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)m_CancellationTokenSource )
              sub_1BC326C(this, *(_QWORD *)&eventId, v13);
            v17 = System_Int32__Parse(*((System_String_o **)&v15->fields.voiceDataList + v16), 0LL);
            EventInfoUIVoicePlayer__AddHistory(v3, v17, v18);
            LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
            ++v16;
          }
          while ( (__int64)v16 < (int)m_CancellationTokenSource );
        }
        return;
      }
    }
LABEL_15:
    sub_1BC3264(this, *(_QWORD *)&eventId);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  int32_t v5; // w1

  if ( (byte_4B03FF4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, voiceDataList);
    this = (EventInfoUIVoicePlayer_o *)sub_1BC3008(
                                         &Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__,
                                         v4);
    byte_4B03FF4 = 1;
  }
  if ( !voiceDataList )
    sub_1BC3264(this, voiceDataList);
  v5 = UnityEngine_Random__Range_69994520(0, voiceDataList->fields._size, 0LL);
  return (EventInfoUIVoicePlayer_VoiceData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)voiceDataList,
                                                 v5,
                                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
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
  struct System_String_o *VoiceAssetName_41775916; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  System_String_o *VoiceCueInfo; // x0
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8

  if ( (byte_4B03FF1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__AddRange__, voiceData);
    byte_4B03FF1 = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    VoiceAssetName_41775916 = ServantVoiceEntity__getVoiceAssetName_41775916(voiceData->fields.ServantId, 0LL);
    this->fields.currentAssetName = VoiceAssetName_41775916;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentAssetName, (int32_t)VoiceAssetName_41775916, v6, v7);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    if ( !VoiceCueInfo
      || (VoiceCueInfo = (System_String_o *)System_String__Split(VoiceCueInfo, 0x2Cu, 0, 0LL),
          (voiceCueList = this->fields.voiceCueList) == 0LL) )
    {
      sub_1BC3264(VoiceCueInfo, v8);
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)VoiceCueInfo,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_string__AddRange__);
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
  if ( (byte_4B03FE9 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_String_Join_int___, v4);
    sub_1BC3008(&StringLiteral_806/*","*/, v5);
    byte_4B03FE9 = 1;
  }
  v6 = System_String__Join_int_(
         (System_String_o *)StringLiteral_806/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_30A9624 *)Method_System_String_Join_int___);
  v7 = EventInfoUIVoicePlayer_TypeInfo;
  v8 = v6;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v7 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v7->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v10 = System_Int32__ToString((int32_t)&v12, 0LL);
  v11 = System_String__Concat_62348648(SAVE_KEY_PREFIX_VOICE_HISTORY, v10, 0LL);
  UnityEngine_PlayerPrefs__SetString(v11, v8, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_41775916; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  VoiceAssetName_41775916 = ServantVoiceEntity__getVoiceAssetName_41775916(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_41775916;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentAssetName, (int32_t)VoiceAssetName_41775916, v5, v6);
}


void __fastcall EventInfoUIVoicePlayer__Setup(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4B03FE6 & 1) == 0 )
  {
    sub_1BC3008(&string_TypeInfo, method);
    byte_4B03FE6 = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v2, v3);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentAssetName, (int32_t)Empty, v7, v8);
  EventInfoUIVoicePlayer__ClearCueNameList(this, v9);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B03FE5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    sub_1BC3008(&SeManager_TypeInfo, v4);
    sub_1BC3008(&SoundManager_TypeInfo, v5);
    byte_4B03FE5 = 1;
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
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
        v12 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v12 = SeManager_TypeInfo;
        }
        DEFAULT_VOLUME = v12->static_fields->DEFAULT_VOLUME;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v14 = SoundManager__playVoice_40538664(currentAssetName, (System_String_o *)Item, DEFAULT_VOLUME, 0LL, 0, 0LL);
        this->fields.voicePlayer = v14;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voicePlayer, (int32_t)v14, v15, v16);
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
    sub_1BC3264(voiceCueList, v6);
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
    sub_1BC3264(0LL, method);
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
    sub_1BC3264(this, id);
  return voiceData->fields.ConsumeItemId == id;
}