void __fastcall EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E850E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E850E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_42E8507 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, slot, idx, *(_QWORD *)&guideImageId);
    byte_42E8507 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventVoicePlayEntity__CreatePrimaryKey(
        EventVoicePlayEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t slot; // w21
  int32_t eventId; // w22
  int32_t idx; // w20
  __int64 v8; // x23
  __int64 v9; // x19
  int32_t v10; // w3
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42E8506 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8506 = 1;
  }
  eventId = this->fields.eventId;
  slot = this->fields.slot;
  idx = this->fields.idx;
  v8 = *(_QWORD *)&this->fields.guideImageId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.guideImageId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
  return EventVoicePlayEntity__CreatePK(eventId, slot, idx, v10, v11);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetConfirmVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  EventVoicePlayEntity_o *v17; // x0
  const MethodInfo *v18; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v20; // x1
  System_String_o *v21; // x21
  unsigned __int64 v22; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v24; // x27
  __int64 v25; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x22
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v31; // x0

  if ( (byte_42E850D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, svtId, limitCnt, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13, v14, v15);
    byte_42E850D = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v17, svtId, limitCnt, 5, v18);
  if ( !VoiceJson )
    goto LABEL_28;
  v21 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v24 = 0LL;
      v25 = (__int64)(&v21[1].monitor + v22);
      while ( 1 )
      {
        max_length = confirmVoiceIds->max_length;
        if ( (__int64)v24 >= (int)max_length )
          goto LABEL_26;
        if ( v24 >= max_length )
          goto LABEL_29;
        v27 = confirmVoiceIds->m_Items[v24];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v27, 0LL);
        if ( v22 >= LODWORD(v21[1].klass) )
          goto LABEL_29;
        if ( !*(_QWORD *)v25 )
          goto LABEL_28;
        v28 = *(_QWORD *)(*(_QWORD *)v25 + 64LL);
        if ( !v28 )
          goto LABEL_28;
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_29;
        v29 = *(_QWORD *)(v28 + 32);
        if ( !v29 )
          goto LABEL_28;
        v20 = VoiceJson;
        VoiceJson = *(System_String_o **)(v29 + 16);
        if ( !VoiceJson )
          goto LABEL_28;
        VoiceJson = (System_String_o *)System_String__Equals_44565128(VoiceJson, v20, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v24;
        if ( !confirmVoiceIds )
          goto LABEL_28;
      }
      if ( v22 >= LODWORD(v21[1].klass) )
      {
LABEL_29:
        v31 = sub_B5D6C8(VoiceJson);
        sub_B5D668(v31, 0LL);
      }
      if ( !*(_QWORD *)v25 || !v16 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v25 + 64LL),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_26:
      if ( (__int64)++v22 >= SLODWORD(v21[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    }
LABEL_28:
    sub_B5D69C(VoiceJson, v20);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceData_array *__fastcall EventVoicePlayEntity__GetEventRewardVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *v8; // x19
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
  System_Collections_Generic_List_ServantVoiceData____o *VoiceData; // x0
  __int64 v22; // x1
  ServantVoiceData_array *current; // x22
  unsigned __int64 v24; // x25
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v26; // x26
  __int64 v27; // x27
  unsigned __int64 max_length; // x9
  System_String_o *v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x21
  System_String_o *v31; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  char v34; // w19
  __int64 v36; // x0
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_42E850A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__,
      svtId,
      limitCnt,
      *(_QWORD *)&type);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15, v16, v17);
    this = (EventVoicePlayEntity_o *)sub_B5D5C4(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                                       v18,
                                       v19,
                                       v20);
    byte_42E850A = 1;
  }
  memset(&v39, 0, sizeof(v39));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_B5D69C(0LL, v22);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v32 )
      break;
    current = (ServantVoiceData_array *)v39.fields.current;
    if ( !v39.fields.current )
      sub_B5D69C(v32, v33);
    if ( SLODWORD(v39.fields.current[1].monitor) >= 1 )
    {
      v24 = 0LL;
      while ( 2 )
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_28:
          sub_B5D69C(v32, v33);
        v26 = 0LL;
        v27 = (__int64)&current->m_Items[v24];
        while ( 1 )
        {
          max_length = voiceIds->max_length;
          if ( (__int64)v26 >= (int)max_length )
            break;
          if ( v24 >= current->max_length )
          {
            v36 = sub_B5D6C8(v32);
            sub_B5D668(v36, 0LL);
          }
          if ( !*(_QWORD *)v27 )
            sub_B5D69C(v32, v33);
          if ( v26 >= max_length )
          {
            v37 = sub_B5D6C8(v32);
            sub_B5D668(v37, 0LL);
          }
          v29 = *(System_String_o **)(*(_QWORD *)v27 + 16LL);
          v30 = voiceIds->m_Items[v26];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v30, 0LL);
          if ( !v29 )
            sub_B5D69C(v31, v31);
          v32 = System_String__Equals_44565128(v29, v31, 0LL);
          if ( v32 )
          {
            v34 = 2;
            goto LABEL_25;
          }
          voiceIds = v8->fields.voiceIds;
          ++v26;
          if ( !voiceIds )
            goto LABEL_28;
        }
        if ( (__int64)++v24 < (int)current->max_length )
          continue;
        break;
      }
    }
  }
  v34 = 0;
  current = 0LL;
LABEL_25:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v34 + 2) & 3) != 0 )
    return 0LL;
  else
    return current;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventRewardVoiceRandList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  DataManager_o *Instance; // x0
  System_String_o *v24; // x1
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v26; // x4
  DataManager_o *v27; // x21
  unsigned __int64 v28; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v30; // x27
  __int64 v31; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v37; // x0

  if ( (byte_42E850B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, limitCnt, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42E850B = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                limitCnt,
                                5,
                                v26);
  if ( !Instance )
    goto LABEL_29;
  v27 = Instance;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v30 = 0LL;
      v31 = (__int64)(&v27->fields.lookup + v28);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v30 >= (int)max_length )
          goto LABEL_27;
        if ( v30 >= max_length )
          goto LABEL_30;
        v33 = voiceIds->m_Items[v30];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v33, 0LL);
        if ( v28 >= LODWORD(v27->fields.datalist) )
          goto LABEL_30;
        if ( !*(_QWORD *)v31 )
          goto LABEL_29;
        v34 = *(_QWORD *)(*(_QWORD *)v31 + 64LL);
        if ( !v34 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v34 + 24) )
          goto LABEL_30;
        v35 = *(_QWORD *)(v34 + 32);
        if ( !v35 )
          goto LABEL_29;
        v24 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v35 + 16);
        if ( !Instance )
          goto LABEL_29;
        Instance = (DataManager_o *)System_String__Equals_44565128((System_String_o *)Instance, v24, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v30;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v28 >= LODWORD(v27->fields.datalist) )
      {
LABEL_30:
        v37 = sub_B5D6C8(Instance);
        sub_B5D668(v37, 0LL);
      }
      if ( !*(_QWORD *)v31 || !v22 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v31 + 64LL),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v28 >= SLODWORD(v27->fields.datalist) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
    }
LABEL_29:
    sub_B5D69C(Instance, v24);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventShopWelcomeVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  DataManager_o *Instance; // x0
  System_String_o *v24; // x1
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v26; // x4
  DataManager_o *v27; // x21
  unsigned __int64 v28; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v30; // x27
  __int64 v31; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v37; // x0

  if ( (byte_42E850C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, limitCnt, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42E850C = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                limitCnt,
                                9,
                                v26);
  if ( !Instance )
    goto LABEL_29;
  v27 = Instance;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v30 = 0LL;
      v31 = (__int64)(&v27->fields.lookup + v28);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v30 >= (int)max_length )
          goto LABEL_27;
        if ( v30 >= max_length )
          goto LABEL_30;
        v33 = voiceIds->m_Items[v30];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v33, 0LL);
        if ( v28 >= LODWORD(v27->fields.datalist) )
          goto LABEL_30;
        if ( !*(_QWORD *)v31 )
          goto LABEL_29;
        v34 = *(_QWORD *)(*(_QWORD *)v31 + 64LL);
        if ( !v34 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v34 + 24) )
          goto LABEL_30;
        v35 = *(_QWORD *)(v34 + 32);
        if ( !v35 )
          goto LABEL_29;
        v24 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v35 + 16);
        if ( !Instance )
          goto LABEL_29;
        Instance = (DataManager_o *)System_String__Equals_44565128((System_String_o *)Instance, v24, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v30;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v28 >= LODWORD(v27->fields.datalist) )
      {
LABEL_30:
        v37 = sub_B5D6C8(Instance);
        sub_B5D668(v37, 0LL);
      }
      if ( !*(_QWORD *)v31 || !v22 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v31 + 64LL),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v28 >= SLODWORD(v27->fields.datalist) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
    }
LABEL_29:
    sub_B5D69C(Instance, v24);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  EventVoicePlayEntity_o *v15; // x0
  const MethodInfo *v16; // x4
  SvtVoiceInfo_array *VoiceJson; // x0
  __int64 v18; // x1
  int max_length; // w8
  SvtVoiceInfo_array *v20; // x20
  unsigned int v21; // w21
  SvtVoiceInfo_o *v22; // x8
  __int64 v24; // x0

  if ( (byte_42E8509 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, svtId, limitCnt, *(_QWORD *)&type);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11, v12, v13);
    byte_42E8509 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = EventVoicePlayEntity__GetVoiceJson(v15, svtId, limitCnt, type, v16);
  if ( !VoiceJson )
    goto LABEL_11;
  max_length = VoiceJson->max_length;
  v20 = VoiceJson;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v24 = sub_B5D6C8(VoiceJson);
        sub_B5D668(v24, 0LL);
      }
      v22 = v20->m_Items[v21];
      if ( !v22 || !v14 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22->fields.infos,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      max_length = v20->max_length;
      if ( (int)++v21 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
    }
LABEL_11:
    sub_B5D69C(VoiceJson, v18);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
}


// local variable allocation has failed, the output may be wrong!
SvtVoiceInfo_array *__fastcall EventVoicePlayEntity__GetVoiceJson(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *Instance; // x0
  __int64 v12; // x1
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x22

  if ( (byte_42E8508 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, svtId, limitCnt, *(_QWORD *)&type);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8508 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        Instance = (void *)ServantVoiceMaster__getSvtVoiceId(svtId, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = ServantVoiceMaster__getEntityEventReward(
                     MasterData_WarQuestSelectionMaster,
                     type,
                     (int32_t)Instance,
                     limitCnt,
                     0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return (SvtVoiceInfo_array *)*((_QWORD *)Instance + 4);
}