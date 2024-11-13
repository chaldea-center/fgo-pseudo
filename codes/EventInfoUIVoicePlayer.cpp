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
  __int64 v9; // x2

  if ( (byte_4B18197 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIVoicePlayer_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6305/*"EventInfoUiVoiceHistory_"*/, v8, v9);
    byte_4B18197 = 1;
  }
  EventInfoUIVoicePlayer_TypeInfo->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY = (struct System_String_o *)StringLiteral_6305/*"EventInfoUiVoiceHistory_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoUIVoicePlayer_TypeInfo->static_fields,
    StringLiteral_6305/*"EventInfoUiVoiceHistory_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventInfoUIVoicePlayer___ctor(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_int__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B18196 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    byte_4B18196 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceAssetNameList = (struct System_Collections_Generic_List_string__o *)v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voiceAssetNameList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceCueList = (struct System_Collections_Generic_List_string__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceCueList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v31 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedIdList = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playedIdList, (int64_t)v31, v32, v33, v34, v35, v36, v37);
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

  if ( (byte_4B18190 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, name, method);
    byte_4B18190 = 1;
  }
  voiceCueList = (System_Collections_Generic_List_object__o *)this->fields.voiceCueList;
  if ( !voiceCueList
    || (items = voiceCueList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++voiceCueList->fields._version,
        !items) )
  {
    sub_1BCAA3C(voiceCueList, name);
  }
  size = voiceCueList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voiceCueList,
      (Il2CppObject *)name,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    voiceCueList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)name;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4B1818C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&id, method);
    byte_4B1818C = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList
    || (items = playedIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedIdList->fields._version,
        !items) )
  {
    sub_1BCAA3C(playedIdList, *(_QWORD *)&id);
  }
  size = playedIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedIdList,
      id,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  __int64 v2; // x2
  EventInfoUIVoicePlayer_o *v3; // x19
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B18191 & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, method, v2);
    byte_4B18191 = 1;
  }
  voiceCueList = v3->fields.voiceCueList;
  if ( !voiceCueList )
    sub_1BCAA3C(this, method);
  size = voiceCueList->fields._size;
  v6 = voiceCueList->fields._version + 1;
  voiceCueList->fields._size = 0;
  voiceCueList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)voiceCueList->fields._items, 0, size, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__ClearHistory(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoUIVoicePlayer_o *v3; // x19
  struct System_Collections_Generic_List_int__o *playedIdList; // x8
  int v5; // w9

  v3 = this;
  if ( (byte_4B1818B & 1) == 0 )
  {
    this = (EventInfoUIVoicePlayer_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, method, v2);
    byte_4B1818B = 1;
  }
  playedIdList = v3->fields.playedIdList;
  if ( !playedIdList )
    sub_1BCAA3C(this, method);
  v5 = playedIdList->fields._version + 1;
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v5;
}


void __fastcall EventInfoUIVoicePlayer__DestroyAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_string__o *voiceAssetNameList; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_string__o *v24; // x8
  int64_t size; // x2
  int v26; // w9
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1818F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&SoundManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&string_TypeInfo, v14, v15);
    byte_4B1818F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  voiceAssetNameList = this->fields.voiceAssetNameList;
  if ( !voiceAssetNameList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)voiceAssetNameList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v24 = this->fields.voiceAssetNameList;
  if ( !v24 )
LABEL_13:
    sub_1BCAA3C(voiceAssetNameList, method);
  size = (unsigned int)v24->fields._size;
  v26 = v24->fields._version + 1;
  v24->fields._size = 0;
  v24->fields._version = v26;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v24->fields._items, 0, size, 0LL);
  this->fields.voiceIndex = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentAssetName,
    (int64_t)Empty,
    size,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x26
  int max_length; // w8
  unsigned int v43; // w27
  EventInfoUIVoicePlayer_VoiceData_o *v44; // x22
  int32_t CondId; // w23
  int32_t CondKind; // w25
  int64_t CondValue; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_object__o *v51; // x26
  int64_t v52; // x2
  __int64 v53; // x3
  struct EventInfoUIVoicePlayer_VoiceData_array *v54; // x29
  unsigned __int64 i; // x27
  __int64 v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  _QWORD *v64; // x23
  __int64 v65; // x8
  __int64 v66; // x9
  int32_t v67; // w19
  System_Collections_Generic_List_object__o *v68; // x20
  int32_t v69; // w24
  int32_t v70; // w26
  int64_t v71; // x25
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Int32_array *monitor; // x24
  System_Func_int__bool__o *v77; // x25
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  System_Collections_Generic_List_object__o *v82; // x20
  _BOOL8 v83; // x0
  __int64 v84; // x1
  const MethodInfo *v85; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPlayed; // x0
  __int64 v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  _BOOL8 v99; // x0
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x2
  System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *v102; // x1
  EventInfoUIVoicePlayer_o *v104; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v5 = groupId;
  v6 = this;
  if ( (byte_4B18193 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&groupId, *(_QWORD *)&cleardQuestId);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v15, v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__get_Current__,
      v21,
      v22);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__, v37, v38);
    this = (EventInfoUIVoicePlayer_o *)sub_1BCA7E0(&EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, v39, v40);
    byte_4B18193 = 1;
  }
  entity = 0LL;
  memset(&v106, 0, sizeof(v106));
  voiceDataList = v6->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_58;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
LABEL_59:
        sub_1BCAA44(this, *(_QWORD *)&groupId);
      v44 = voiceDataList->m_Items[v43];
      if ( !v44 )
        break;
      this = (EventInfoUIVoicePlayer_o *)v44->fields.ForceClearQuestIds;
      if ( !this )
        break;
      if ( this->fields.m_CancellationTokenSource )
      {
        this = (EventInfoUIVoicePlayer_o *)System_Linq_Enumerable__Contains_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             cleardQuestId,
                                             (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 && v44->fields.GroupId == v5 )
        {
          CondKind = v44->fields.CondKind;
          CondId = v44->fields.CondId;
          CondValue = v44->fields.CondValue;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId);
          this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v44;
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v43 >= max_length )
        goto LABEL_16;
    }
LABEL_58:
    sub_1BCAA3C(this, *(_QWORD *)&groupId);
  }
LABEL_16:
  this = (EventInfoUIVoicePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (EventInfoUIVoicePlayer_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !this )
    goto LABEL_58;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    cleardQuestId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__TryGetEntity__);
  v51 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo,
                                                       v48,
                                                       v49,
                                                       v50);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  v54 = v6->fields.voiceDataList;
  v104 = v6;
  if ( !v54 )
    goto LABEL_58;
  if ( (int)v54->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v54->max_length; ++i )
    {
      v56 = sub_1BCAA2C(EventInfoUIVoicePlayer___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&groupId, v52, v53);
      System_Object___ctor((Il2CppObject *)v56, 0LL);
      if ( i >= v54->max_length )
        goto LABEL_59;
      if ( !v56 )
        goto LABEL_58;
      v63 = (int64_t)v54->m_Items[i];
      *(_QWORD *)(v56 + 16) = v63;
      v64 = (_QWORD *)(v56 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 16), v63, v57, v58, v59, v60, v61, v62);
      v65 = *(_QWORD *)(v56 + 16);
      if ( !v65 )
        goto LABEL_58;
      v66 = *(_QWORD *)(v65 + 48);
      if ( !v66 )
        goto LABEL_58;
      if ( !*(_QWORD *)(v66 + 24) && *(_DWORD *)(v65 + 24) == v5 )
      {
        v67 = v5;
        v68 = v51;
        v70 = *(_DWORD *)(v65 + 28);
        v69 = *(_DWORD *)(v65 + 32);
        v71 = *(int *)(v65 + 36);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId);
        this = (EventInfoUIVoicePlayer_o *)CondType__IsOpen(v70, v69, v71, 0, 0LL, 0LL);
        v51 = v68;
        v5 = v67;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_QWORD *)&groupId = *v64;
          if ( !*v64 )
            goto LABEL_58;
          if ( *(int *)(*(_QWORD *)&groupId + 56LL) >= 1 && entity )
          {
            monitor = (System_Int32_array *)entity[1].monitor;
            v77 = (System_Func_int__bool__o *)sub_1BCAA2C(
                                                System_Func_int__bool__TypeInfo,
                                                *(_QWORD *)&groupId,
                                                v52,
                                                v53);
            System_Func_int__bool____ctor(
              v77,
              (Il2CppObject *)v56,
              Method_EventInfoUIVoicePlayer___c__DisplayClass28_0__GetTargetVoiceData_b__0__,
              0LL);
            this = (EventInfoUIVoicePlayer_o *)BasicHelper__Any_int__49273364(
                                                 monitor,
                                                 (System_Func_T__bool__o *)v77,
                                                 (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
            if ( ((unsigned __int8)this & 1) == 0 )
              continue;
            *(_QWORD *)&groupId = *v64;
          }
          if ( !v51 )
            goto LABEL_58;
          items = v51->fields._items;
          v79 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
          ++v51->fields._version;
          if ( !items )
            goto LABEL_58;
          size = v51->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              *(Il2CppObject **)&groupId,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v81 = &items->obj.klass + size;
            v51->fields._size = size + 1;
            v81[4] = *(Il2CppClass **)&groupId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 4), *(int64_t *)&groupId, v52, v53, v72, v73, v74, v75);
          }
        }
      }
    }
  }
  if ( !v51 )
    goto LABEL_58;
  if ( v51->fields._size < 1 )
    return 0LL;
  v82 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       v52,
                                                       v53);
  System_Collections_Generic_List_object____ctor(
    v82,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v105,
    v51,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__GetEnumerator__);
  v106 = v105;
  while ( 1 )
  {
    v83 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v106,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__MoveNext__);
    if ( !v83 )
      break;
    current = v106.fields._current;
    if ( !v106.fields._current )
      sub_1BCAA3C(v83, v84);
    IsPlayed = EventInfoUIVoicePlayer__IsPlayed(v104, (int32_t)v106.fields._current[1].klass, v85);
    if ( !IsPlayed )
    {
      if ( !v82 )
        sub_1BCAA3C(IsPlayed, v88);
      v95 = v82->fields._items;
      v96 = Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__Add__;
      ++v82->fields._version;
      if ( !v95 )
        sub_1BCAA3C(IsPlayed, v88);
      v97 = v82->fields._size;
      if ( (unsigned int)v97 >= v95->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v82,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = &v95->obj.klass + v97;
        v82->fields._size = v97 + 1;
        v98[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v98 + 4), (int64_t)current, v89, v90, v91, v92, v93, v94);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v106,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIVoicePlayer_VoiceData__Dispose__);
  v99 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v82,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventInfoUIVoicePlayer_VoiceData___);
  if ( v99 )
  {
    v102 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v82;
  }
  else
  {
    EventInfoUIVoicePlayer__ClearHistory(v104, v100);
    v102 = (System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *)v51;
  }
  return EventInfoUIVoicePlayer__LotVoiceDataFromList((EventInfoUIVoicePlayer_o *)v99, v102, v101);
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
  if ( (byte_4B18189 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B18189 = 1;
  }
  v3 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    v3 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v3->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62401220(SAVE_KEY_PREFIX_VOICE_HISTORY, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer__IsPlayed(EventInfoUIVoicePlayer_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedIdList; // x0

  if ( (byte_4B18194 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&id, method);
    byte_4B18194 = 1;
  }
  playedIdList = this->fields.playedIdList;
  if ( !playedIdList )
    sub_1BCAA3C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_List_int___Contains(
           playedIdList,
           id,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall EventInfoUIVoicePlayer__LoadAsset(EventInfoUIVoicePlayer_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  EventInfoUIVoicePlayer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventInfoUIVoicePlayer_VoiceData_array *voiceDataList; // x21
  int max_length; // w8
  unsigned int v13; // w22
  EventInfoUIVoicePlayer_VoiceData_o *v14; // x8
  Il2CppObject *v15; // x20
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x3

  v4 = this;
  if ( (byte_4B1818D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v7, v8);
    this = (EventInfoUIVoicePlayer_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v9, v10);
    byte_4B1818D = 1;
  }
  voiceDataList = v4->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_17;
  max_length = voiceDataList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCAA44(this, method);
      v14 = voiceDataList->m_Items[v13];
      if ( !v14 )
        break;
      this = (EventInfoUIVoicePlayer_o *)ServantVoiceEntity__getVoiceAssetName_40580584(v14->fields.ServantId, 0LL);
      if ( !v4->fields.voiceAssetNameList )
        break;
      v15 = (Il2CppObject *)this;
      this = (EventInfoUIVoicePlayer_o *)System_Collections_Generic_List_object___Contains(
                                           (System_Collections_Generic_List_object__o *)v4->fields.voiceAssetNameList,
                                           (Il2CppObject *)this,
                                           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (EventInfoUIVoicePlayer_o *)v4->fields.voiceAssetNameList;
        if ( !this )
          break;
        v20 = *(_QWORD *)&this->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v20 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v15,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v15;
          sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)v15, v2, v3, v16, v17, v18, v19);
        }
      }
      max_length = voiceDataList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_1BCAA3C(this, method);
  }
LABEL_16:
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v24, (Il2CppObject *)v4, Method_EventInfoUIVoicePlayer__LoadAsset_b__20_0__, 0LL);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(v4, 0, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__LoadAudioAssetStorage(
        EventInfoUIVoicePlayer_o *this,
        int32_t index,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x22
  System_Collections_Generic_List_object__o *voiceAssetNameList; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t v32; // w1
  Il2CppObject *Item; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x20
  __int64 v38; // x1

  if ( (byte_4B1818E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&index, endAction);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v9, v10);
    sub_1BCA7E0(&SoundManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__, v13, v14);
    sub_1BCA7E0(&EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, v15, v16);
    byte_4B1818E = 1;
  }
  v17 = sub_1BCAA2C(EventInfoUIVoicePlayer___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&index, endAction, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25),
        *(_QWORD *)(v17 + 32) = endAction,
        *(_DWORD *)(v17 + 24) = index,
        sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)endAction, v26, v27, v28, v29, v30, v31),
        (voiceAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.voiceAssetNameList) == 0LL) )
  {
    sub_1BCAA3C(voiceAssetNameList, v19);
  }
  v32 = *(_DWORD *)(v17 + 24);
  if ( voiceAssetNameList->fields._size <= v32 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             voiceAssetNameList,
             v32,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
    v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v17,
      Method_EventInfoUIVoicePlayer___c__DisplayClass21_0__LoadAudioAssetStorage_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v38);
    SoundManager__loadAudioAssetStorage((System_String_o *)Item, v37, 1, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_List_int__o *playedIdList; // x8
  int v9; // w9
  EventInfoUIVoicePlayer_c *v10; // x0
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *String; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoUIVoicePlayer_o *v16; // x20
  unsigned __int64 v17; // x21
  int32_t v18; // w0
  const MethodInfo *v19; // x2
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  v20 = eventId;
  if ( (byte_4B18188 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v4, v5);
    this = (EventInfoUIVoicePlayer_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B18188 = 1;
  }
  playedIdList = v3->fields.playedIdList;
  if ( !playedIdList )
    goto LABEL_15;
  v9 = playedIdList->fields._version + 1;
  playedIdList->fields._size = 0;
  playedIdList->fields._version = v9;
  v10 = EventInfoUIVoicePlayer_TypeInfo;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId);
    v10 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v10->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v12 = System_Int32__ToString((int32_t)&v20, 0LL);
  v13 = System_String__Concat_62401220(SAVE_KEY_PREFIX_VOICE_HISTORY, v12, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoUIVoicePlayer_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoUIVoicePlayer_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
      if ( this )
      {
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v16 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v17 = 0LL;
          do
          {
            if ( v17 >= (unsigned int)m_CancellationTokenSource )
              sub_1BCAA44(this, *(_QWORD *)&eventId);
            v18 = System_Int32__Parse(*((System_String_o **)&v16->fields.voiceDataList + v17), 0LL);
            EventInfoUIVoicePlayer__AddHistory(v3, v18, v19);
            LODWORD(m_CancellationTokenSource) = v16->fields.m_CancellationTokenSource;
            ++v17;
          }
          while ( (__int64)v17 < (int)m_CancellationTokenSource );
        }
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  }
}


EventInfoUIVoicePlayer_VoiceData_o *__fastcall EventInfoUIVoicePlayer__LotVoiceDataFromList(
        EventInfoUIVoicePlayer_o *this,
        System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__o *voiceDataList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t v6; // w1

  if ( (byte_4B18195 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Count__,
      voiceDataList,
      method);
    this = (EventInfoUIVoicePlayer_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__,
                                         v4,
                                         v5);
    byte_4B18195 = 1;
  }
  if ( !voiceDataList )
    sub_1BCAA3C(this, voiceDataList);
  v6 = UnityEngine_Random__Range_70113984(0, voiceDataList->fields._size, 0LL);
  return (EventInfoUIVoicePlayer_VoiceData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)voiceDataList,
                                                 v6,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoUIVoicePlayer_VoiceData__get_Item__);
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
  struct System_String_o *VoiceAssetName_40580584; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  System_String_o *VoiceCueInfo; // x0
  struct System_Collections_Generic_List_string__o *voiceCueList; // x8

  if ( (byte_4B18192 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, voiceData, method);
    byte_4B18192 = 1;
  }
  if ( voiceData && this->fields.state != 1 )
  {
    EventInfoUIVoicePlayer__AddHistory(this, voiceData->fields.id, method);
    this->fields.state = 1;
    VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(voiceData->fields.ServantId, 0LL);
    this->fields.currentAssetName = VoiceAssetName_40580584;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentAssetName,
      (int64_t)VoiceAssetName_40580584,
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
      sub_1BCAA3C(VoiceCueInfo, v12);
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)voiceCueList,
      (System_Collections_Generic_IEnumerable_T__o *)VoiceCueInfo,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIVoicePlayer__SaveHistrory(
        EventInfoUIVoicePlayer_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x0
  __int64 v9; // x1
  EventInfoUIVoicePlayer_c *v10; // x8
  System_String_o *v11; // x19
  System_String_o *SAVE_KEY_PREFIX_VOICE_HISTORY; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  v15 = eventId;
  if ( (byte_4B1818A & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIVoicePlayer_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_String_Join_int___, v4, v5);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v6, v7);
    byte_4B1818A = 1;
  }
  v8 = System_String__Join_int_(
         (System_String_o *)StringLiteral_863/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.playedIdList,
         (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
  v10 = EventInfoUIVoicePlayer_TypeInfo;
  v11 = v8;
  if ( !EventInfoUIVoicePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIVoicePlayer_TypeInfo, v9);
    v10 = EventInfoUIVoicePlayer_TypeInfo;
  }
  SAVE_KEY_PREFIX_VOICE_HISTORY = v10->static_fields->SAVE_KEY_PREFIX_VOICE_HISTORY;
  v13 = System_Int32__ToString((int32_t)&v15, 0LL);
  v14 = System_String__Concat_62401220(SAVE_KEY_PREFIX_VOICE_HISTORY, v13, 0LL);
  UnityEngine_PlayerPrefs__SetString(v14, v11, 0LL);
}


void __fastcall EventInfoUIVoicePlayer__SetAssetName(
        EventInfoUIVoicePlayer_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  struct System_String_o *VoiceAssetName_40580584; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(servantId, 0LL);
  this->fields.currentAssetName = VoiceAssetName_40580584;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentAssetName,
    (int64_t)VoiceAssetName_40580584,
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

  if ( (byte_4B18187 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B18187 = 1;
  }
  this->fields.voicePlayer = 0LL;
  *(_QWORD *)&this->fields.state = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.currentAssetName = static_fields->Empty;
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  struct SePlayer_o *voicePlayer; // x8
  System_Collections_Generic_List_object__o *voiceCueList; // x0
  const MethodInfo *voiceIndex; // x1
  System_String_o *currentAssetName; // x21
  __int64 v15; // x1
  Il2CppObject *Item; // x22
  SeManager_c *v17; // x8
  float DEFAULT_VOLUME; // s8
  struct SePlayer_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B18186 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v4, v5);
    sub_1BCA7E0(&SeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    byte_4B18186 = 1;
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
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        v17 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v15);
          v17 = SeManager_TypeInfo;
        }
        DEFAULT_VOLUME = v17->static_fields->DEFAULT_VOLUME;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
        v19 = SoundManager__playVoice_39419392(currentAssetName, (System_String_o *)Item, DEFAULT_VOLUME, 0LL, 0LL);
        this->fields.voicePlayer = v19;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayer, (int64_t)v19, v20, v21, v22, v23, v24, v25);
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
    sub_1BCAA3C(voiceCueList, v10);
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
    sub_1BCAA3C(0LL, method);
  EventInfoUIVoicePlayer__LoadAudioAssetStorage(_4__this, this->fields.index + 1, this->fields.endAction, v2);
}


void __fastcall EventInfoUIVoicePlayer___c__DisplayClass28_0___ctor(
        EventInfoUIVoicePlayer___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoUIVoicePlayer___c__DisplayClass28_0___GetTargetVoiceData_b__0(
        EventInfoUIVoicePlayer___c__DisplayClass28_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct EventInfoUIVoicePlayer_VoiceData_o *voiceData; // x8

  voiceData = this->fields.voiceData;
  if ( !voiceData )
    sub_1BCAA3C(this, *(_QWORD *)&id);
  return voiceData->fields.ConsumeItemId == id;
}