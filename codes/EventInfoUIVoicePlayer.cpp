void __fastcall EventInfoUIVoicePlayer___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5D185 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIVoicePlayer_TypeInfo);
    sub_1B885B0(&StringLiteral_6185/*"EventInfoUiVoiceHistory_"*/);
    byte_4A5D185 = 1;
  }
  EventInfoUIVoicePlayer_TypeInfo->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY = (struct System_String_o *)StringLiteral_6185/*"EventInfoUiVoiceHistory_"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields,
    StringLiteral_6185/*"EventInfoUiVoiceHistory_"*/,
    v1,
    v2);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D184 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4A5D184 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voiceAssetNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voiceCueList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playedIdList, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__AddCueName(
        EventInfoUIVoicePlayer_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *voiceCueList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A5D17E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    byte_4A5D17E = 1;
  }
  voiceCueList = (System_Collections_Generic_List_object__o *)this->fields.voiceCueList;
  if ( !voiceCueList
    || (items = voiceCueList->fields._items,
        v8 = Method_System_Collections_Generic_List_string__Add__,
        ++voiceCueList->fields._version,
        !items) )
  {
    sub_1B8880C(voiceCueList, name);
  }
  size = voiceCueList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voiceCueList,
      (Il2CppObject *)name,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    voiceCueList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)name, (int32_t)method, v3);
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

  if ( (byte_4A5D17A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    byte_4A5D17A = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList
    || (items = playedIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedIdList->fields._version,
        !items) )
  {
    sub_1B8880C(playedIdList, *(_QWORD *)&id);
  }
  size = playedIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedIdList,
      id,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  if ( (byte_4A5D17F & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4A5D17F = 1;
  }
  voiceCueList = v2->fields.voiceCueList;
  if ( !voiceCueList )
    sub_1B8880C(this, method);
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
  if ( (byte_4A5D179 & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4A5D179 = 1;
  }
  playedIdList = v2->fields.playedIdList;
  if ( !playedIdList )
    sub_1B8880C(this, method);
  v4 = playedIdList->fields._version + 1;
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v4;
}


void __fastcall EventInfoUIVoicePlayer__DestroyAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x0
  Il2CppObject *current; // x20
  int32_t v5; // w3
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D17D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D17D = 1;
  }
  memset(&v11, 0, sizeof(v11));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)voiceAssetNameList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.voiceAssetNameList;
  if ( !v6 )
LABEL_13:
    sub_1B8880C(voiceAssetNameList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentAssetName, (int32_t)Empty, size, v5);
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
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x26
  int max_length; // w8
  unsigned int v9; // w27
  EventInfoUIVoicePlayer_VoiceData_o *v10; // x22
  int32_t CondId; // w23
  int32_t CondKind; // w25
  int64_t CondValue; // x24
  System_Collections_Generic_List_object__o *v14; // x26
  struct EventInfoUIVoicePlayer_VoiceData_array *v15; // x29
  unsigned __int64 i; // x27
  __int64 v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  EventInfoUIVoicePlayer_VoiceData_o *v20; // x1
  _QWORD *v21; // x23
  __int64 v22; // x8
  __int64 v23; // x9
  int32_t v24; // w19
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w24
  int32_t v27; // w26
  int64_t v28; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  System_Int32_array *monitor; // x24
  System_Func_int__bool__o *v32; // x25
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_object__o *v37; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  _BOOL8 v50; // x0
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v53; // x1
  EventInfoUIVoicePlayer_o *v55; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v5 = groupId;
  v6 = this;
  if ( (byte_4A5D181 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__);
    this = (EventInfoUIVoicePlayer_o *)sub_1B885B0(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
    byte_4A5D181 = 1;
  }
  entity = 0LL;
  memset(&v57, 0, sizeof(v57));
  voiceDataList = v6->fields.voiceDataList;
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
        sub_1B88814(this, *(_QWORD *)&groupId);
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
                                             (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 && v10->fields.GroupId == v5 )
        {
          CondKind = v10->fields.CondKind;
          CondId = v10->fields.CondId;
          CondValue = v10->fields.CondValue;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v10;
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_58:
    sub_1B8880C(this, *(_QWORD *)&groupId);
  }
LABEL_16:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_58;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v15 = v6->fields.voiceDataList;
  v55 = v6;
  if ( !v15 )
    goto LABEL_58;
  if ( (int)v15->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15->max_length; ++i )
    {
      v17 = sub_1B887FC(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      if ( i >= v15->max_length )
        goto LABEL_59;
      if ( !v17 )
        goto LABEL_58;
      v20 = v15->m_Items[i];
      *(_QWORD *)(v17 + 16) = v20;
      v21 = (_QWORD *)(v17 + 16);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v20, v18, v19);
      v22 = *(_QWORD *)(v17 + 16);
      if ( !v22 )
        goto LABEL_58;
      v23 = *(_QWORD *)(v22 + 48);
      if ( !v23 )
        goto LABEL_58;
      if ( !*(_QWORD *)(v23 + 24) && *(_DWORD *)(v22 + 24) == v5 )
      {
        v24 = v5;
        v25 = v14;
        v27 = *(_DWORD *)(v22 + 28);
        v26 = *(_DWORD *)(v22 + 32);
        v28 = *(int *)(v22 + 36);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v27, v26, v28, 0, 0LL, 0LL);
        v14 = v25;
        v5 = v24;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_QWORD *)&groupId = *v21;
          if ( !*v21 )
            goto LABEL_58;
          if ( *(int *)(*(_QWORD *)&groupId + 56LL) >= 1 && entity )
          {
            monitor = (System_Int32_array *)entity[1].monitor;
            v32 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v32,
              (Il2CppObject *)v17,
              Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
              0LL);
            this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__48671312(
                                                 monitor,
                                                 (System_Func_T__bool__o *)v32,
                                                 (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
            if ( ((unsigned __int8)this & 1) == 0 )
              continue;
            *(_QWORD *)&groupId = *v21;
          }
          if ( !v14 )
            goto LABEL_58;
          items = v14->fields._items;
          v34 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_58;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              *(Il2CppObject **)&groupId,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v36[4] = *(Il2CppClass **)&groupId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), groupId, v29, v30);
          }
        }
      }
    }
  }
  if ( !v14 )
    goto LABEL_58;
  if ( v14->fields._size < 1 )
    return 0LL;
  v37 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v14,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  v57 = v56;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v38 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1B8880C(v38, v39);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v55, (int32_t)v57.fields._current[1].klass, v40);
    if ( !IsPlayed )
    {
      if ( !v37 )
        sub_1B8880C(IsPlayed, v43);
      v46 = v37->fields._items;
      v47 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
      ++v37->fields._version;
      if ( !v46 )
        sub_1B8880C(IsPlayed, v43);
      v48 = v37->fields._size;
      if ( (unsigned int)v48 >= v46->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &v46->obj.klass + v48;
        v37->fields._size = v48 + 1;
        v49[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)current, v44, v45);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v50 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v50 )
  {
    v53 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v37;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v55, v51);
    v53 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v14;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v50, v53, v52);
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
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = eventId;
  if ( (byte_4A5D177 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIVoicePlayer_TypeInfo);
    byte_4A5D177 = 1;
  }
  v3 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v3 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v3->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61707032(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_4A5D182 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5D182 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_1B8880C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v2; // x19
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v5; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v6; // x8
  Il2CppObject *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v13; // x8
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3

  v2 = this;
  if ( (byte_4A5D17B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    this = (EventInfoUIVoicePlayer_o *)sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4A5D17B = 1;
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
        sub_1B88814(this, method);
      v6 = voiceDataList->m_Items[v5];
      if ( !v6 )
        break;
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_39766344(v6->fields.ServantId, 0LL);
      if ( !v2->fields.voiceAssetNameList )
        break;
      v7 = (Il2CppObject *)this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_object___Contains(
                                           (System_Collections_Generic_List_object__o *)v2->fields.voiceAssetNameList,
                                           (Il2CppObject *)this,
                                           (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v2->fields.voiceAssetNameList;
        if ( !this )
          break;
        v10 = *(_QWORD *)&this->fields.m_CachedPtr;
        v11 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v10 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v10 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v7,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = v10 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v13 + 32) = v7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v7, v8, v9);
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_1B8880C(this, method);
  }
LABEL_16:
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v2, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v2, 0, v14, v15);
}


void __fastcall EventInfoUIVoicePlayer__LoadAudioAssetStorage(
        EventInfoUIVoicePlayer_o *this,
        int32_t index,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_List_object__o *voiceAssetNameList; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v16; // x20

  if ( (byte_4A5D17C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__);
    sub_1B885B0(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
    byte_4A5D17C = 1;
  }
  v7 = sub_1B887FC(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 32) = endAction,
        *(_DWORD *)(v7 + 24) = index,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)endAction, v12, v13),
        (voiceAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_1B8880C(voiceAssetNameList, v9);
  }
  v14 = *(_DWORD *)(v7 + 24);
  if ( voiceAssetNameList->fields._size <= v14 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             voiceAssetNameList,
             v14,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
    v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v7,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage((System_String_o *)Item, v16, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadHistory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoUIVoicePlayer_o *v3; // x19
  struct System_Collections_Generic_List_int__o *playedIdList; // x8
  int v5; // w9
  EventInfoUIVoicePlayer_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *String; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoUIVoicePlayer_o *v12; // x20
  unsigned __int64 v13; // x21
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  v16 = eventId;
  if ( (byte_4A5D176 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIVoicePlayer_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    this = (EventInfoUIVoicePlayer_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D176 = 1;
  }
  playedIdList = v3->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_15;
  v5 = playedIdList->fields._version + 1;
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v5;
  v6 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v6 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v6->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v8 = System_Int32__ToString((int32_t)&v16, 0LL);
  v9 = System_String__Concat_61707032(SAVE_KEY_PREFIX_VOICE_HISTORY, v8, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoUIVoicePlayer_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoUIVoicePlayer_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
      if ( this )
      {
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v12 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v13 = 0LL;
          do
          {
            if ( v13 >= (unsigned int)m_CancellationTokenSource )
              sub_1B88814(this, *(_QWORD *)&eventId);
            v14 = System_Int32__Parse(*((System_String_o **)&v12->fields.voiceDataList + v13), 0LL);
            EventInfoUIVoicePlayer__AddHistory(v3, v14, v15);
            LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
            ++v13;
          }
          while ( (__int64)v13 < (int)m_CancellationTokenSource );
        }
        return;
      }
    }
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&eventId);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  int32_t v4; // w1

  if ( (byte_4A5D183 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__);
    this = (EventInfoUIVoicePlayer_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
    byte_4A5D183 = 1;
  }
  if ( !voiceDataList )
    sub_1B8880C(this, voiceDataList);
  v4 = UnityEngine_Random__Range_69419120(0, voiceDataList->fields._size, 0LL);
  return (EventInfoUIVoicePlayer_VoiceData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)voiceDataList,
                                                 v4,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
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
  struct System_String_o *VoiceAssetName_39766344; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  System_String_o *VoiceCueInfo; // x0
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8

  if ( (byte_4A5D180 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__AddRange__);
    byte_4A5D180 = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    VoiceAssetName_39766344 = ServantVoiceEntity__getVoiceAssetName_39766344(voiceData->fields.ServantId, 0LL);
    this->fields.currentAssetName = VoiceAssetName_39766344;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.currentAssetName,
      (int32_t)VoiceAssetName_39766344,
      v6,
      v7);
    VoiceCueInfo = voiceData->fields.VoiceCueInfo;
    if ( !VoiceCueInfo
      || (VoiceCueInfo = (System_String_o *)System_String__Split(VoiceCueInfo, 0x2Cu, 0, 0LL),
          (voiceCueList = this->fields.voiceCueList) == 0LL) )
    {
      sub_1B8880C(VoiceCueInfo, v8);
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)VoiceCueInfo,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


void __fastcall EventInfoUIVoicePlayer__SaveHistrory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  EventInfoUIVoicePlayer_c *v5; // x8
  System_String_o *v6; // x19
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  v10 = eventId;
  if ( (byte_4A5D178 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIVoicePlayer_TypeInfo);
    sub_1B885B0(&Method_System_String_Join_int___);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5D178 = 1;
  }
  v4 = System_String__Join_int_(
         (System_String_o *)StringLiteral_868/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
  v5 = EventInfoUIVoicePlayer_TypeInfo;
  v6 = v4;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo);
    v5 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v5->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  v9 = System_String__Concat_61707032(SAVE_KEY_PREFIX_VOICE_HISTORY, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(v9, v6, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_39766344; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  VoiceAssetName_39766344 = ServantVoiceEntity__getVoiceAssetName_39766344(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_39766344;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.currentAssetName,
    (int32_t)VoiceAssetName_39766344,
    v5,
    v6);
}


void __fastcall EventInfoUIVoicePlayer__Setup(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1

  if ( (byte_4A5D175 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D175 = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, 0, v2, v3);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentAssetName, (int32_t)Empty, v7, v8);
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
  struct SePlayer_o *voicePlayer; // x8
  System_Collections_Generic_List_object__o *voiceCueList; // x0
  const MethodInfo *voiceIndex; // x1
  System_String_o *currentAssetName; // x21
  Il2CppObject *Item; // x22
  SeManager_c *v9; // x8
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5D174 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&SeManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5D174 = 1;
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
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        v9 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v9 = SeManager_TypeInfo;
        }
        DEFAULT_VOLUME = v9->static_fields->DEFAULT_VOLUME;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v11 = SoundManager__playVoice_38702940(currentAssetName, (System_String_o *)Item, DEFAULT_VOLUME, 0LL, 0LL);
        this->fields.voicePlayer = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, (int32_t)v11, v12, v13);
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
    sub_1B8880C(voiceCueList, v3);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, id);
  return voiceData->fields.ConsumeItemId == id;
}