void __fastcall EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421513A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_421513A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_4215133 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&slot);
    byte_4215133 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_1713C34 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventVoicePlayEntity__CreatePrimaryKey(
        EventVoicePlayEntity_o *this,
        const MethodInfo *method)
{
  int32_t slot; // w21
  int32_t eventId; // w22
  int32_t idx; // w20
  __int64 v6; // x23
  __int64 v7; // x19
  int32_t v8; // w3
  const MethodInfo *v9; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4215132 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4215132 = 1;
  }
  eventId = this->fields.eventId;
  slot = this->fields.slot;
  idx = this->fields.idx;
  v6 = *(_QWORD *)&this->fields.guideImageId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.guideImageId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v11, 0LL);
  return EventVoicePlayEntity__CreatePK(eventId, slot, idx, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetConfirmVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  EventVoicePlayEntity_o *v11; // x0
  const MethodInfo *v12; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v14; // x21
  unsigned __int64 v15; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v17; // x27
  __int64 v18; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v20; // x22
  __int64 v21; // x8
  __int64 v22; // x8
  System_String_o *v23; // x1
  __int64 v25; // x0

  if ( (byte_4215139 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    byte_4215139 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, 5, v12);
  if ( !VoiceJson )
    goto LABEL_28;
  v14 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v17 = 0LL;
      v18 = (__int64)(&v14[1].monitor + v15);
      while ( 1 )
      {
        max_length = confirmVoiceIds->max_length;
        if ( (__int64)v17 >= (int)max_length )
          goto LABEL_26;
        if ( v17 >= max_length )
          goto LABEL_29;
        v20 = confirmVoiceIds->m_Items[v17];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v20, 0LL);
        if ( v15 >= LODWORD(v14[1].klass) )
          goto LABEL_29;
        if ( !*(_QWORD *)v18 )
          goto LABEL_28;
        v21 = *(_QWORD *)(*(_QWORD *)v18 + 64LL);
        if ( !v21 )
          goto LABEL_28;
        if ( !*(_DWORD *)(v21 + 24) )
          goto LABEL_29;
        v22 = *(_QWORD *)(v21 + 32);
        if ( !v22 )
          goto LABEL_28;
        v23 = VoiceJson;
        VoiceJson = *(System_String_o **)(v22 + 16);
        if ( !VoiceJson )
          goto LABEL_28;
        VoiceJson = (System_String_o *)System_String__Equals_43837244(VoiceJson, v23, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v17;
        if ( !confirmVoiceIds )
          goto LABEL_28;
      }
      if ( v15 >= LODWORD(v14[1].klass) )
      {
LABEL_29:
        v25 = sub_B0D9A8(VoiceJson);
        sub_B0D948(v25, 0LL);
      }
      if ( !*(_QWORD *)v18 || !v10 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v18 + 64LL),
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_26:
      if ( (__int64)++v15 >= SLODWORD(v14[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_28:
    sub_B0D97C(VoiceJson);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_ServantVoiceData____o *VoiceData; // x0
  ServantVoiceData_array *current; // x22
  unsigned __int64 v15; // x25
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v17; // x26
  __int64 v18; // x27
  unsigned __int64 max_length; // x9
  System_String_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x21
  System_String_o *v22; // x0
  _BOOL8 v23; // x0
  char v24; // w19
  __int64 v26; // x0
  __int64 v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4215136 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v11);
    this = (EventVoicePlayEntity_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    byte_4215136 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceData,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v23 )
      break;
    current = (ServantVoiceData_array *)v29.fields.current;
    if ( !v29.fields.current )
      sub_B0D97C(v23);
    if ( SLODWORD(v29.fields.current[1].monitor) >= 1 )
    {
      v15 = 0LL;
      while ( 2 )
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_28:
          sub_B0D97C(v23);
        v17 = 0LL;
        v18 = (__int64)&current->m_Items[v15];
        while ( 1 )
        {
          max_length = voiceIds->max_length;
          if ( (__int64)v17 >= (int)max_length )
            break;
          if ( v15 >= current->max_length )
          {
            v26 = sub_B0D9A8(v23);
            sub_B0D948(v26, 0LL);
          }
          if ( !*(_QWORD *)v18 )
            sub_B0D97C(v23);
          if ( v17 >= max_length )
          {
            v27 = sub_B0D9A8(v23);
            sub_B0D948(v27, 0LL);
          }
          v20 = *(System_String_o **)(*(_QWORD *)v18 + 16LL);
          v21 = voiceIds->m_Items[v17];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v21, 0LL);
          if ( !v20 )
            sub_B0D97C(v22);
          v23 = System_String__Equals_43837244(v20, v22, 0LL);
          if ( v23 )
          {
            v24 = 2;
            goto LABEL_25;
          }
          voiceIds = v8->fields.voiceIds;
          ++v17;
          if ( !voiceIds )
            goto LABEL_28;
        }
        if ( (__int64)++v15 < (int)current->max_length )
          continue;
        break;
      }
    }
  }
  v24 = 0;
  current = 0LL;
LABEL_25:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v24 + 2) & 3) != 0 )
    return 0LL;
  else
    return current;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventRewardVoiceRandList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  DataManager_o *Instance; // x0
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v15; // x4
  DataManager_o *v16; // x21
  unsigned __int64 v17; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v19; // x27
  __int64 v20; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8
  System_String_o *v25; // x1
  __int64 v27; // x0

  if ( (byte_4215137 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4215137 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                limitCnt,
                                5,
                                v15);
  if ( !Instance )
    goto LABEL_29;
  v16 = Instance;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v19 = 0LL;
      v20 = (__int64)(&v16->fields.lookup + v17);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v19 >= (int)max_length )
          goto LABEL_27;
        if ( v19 >= max_length )
          goto LABEL_30;
        v22 = voiceIds->m_Items[v19];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v22, 0LL);
        if ( v17 >= LODWORD(v16->fields.datalist) )
          goto LABEL_30;
        if ( !*(_QWORD *)v20 )
          goto LABEL_29;
        v23 = *(_QWORD *)(*(_QWORD *)v20 + 64LL);
        if ( !v23 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v23 + 24) )
          goto LABEL_30;
        v24 = *(_QWORD *)(v23 + 32);
        if ( !v24 )
          goto LABEL_29;
        v25 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v24 + 16);
        if ( !Instance )
          goto LABEL_29;
        Instance = (DataManager_o *)System_String__Equals_43837244((System_String_o *)Instance, v25, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v19;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v17 >= LODWORD(v16->fields.datalist) )
      {
LABEL_30:
        v27 = sub_B0D9A8(Instance);
        sub_B0D948(v27, 0LL);
      }
      if ( !*(_QWORD *)v20 || !v12 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v20 + 64LL),
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v17 >= SLODWORD(v16->fields.datalist) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    }
LABEL_29:
    sub_B0D97C(Instance);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventShopWelcomeVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  DataManager_o *Instance; // x0
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v15; // x4
  DataManager_o *v16; // x21
  unsigned __int64 v17; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v19; // x27
  __int64 v20; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8
  System_String_o *v25; // x1
  __int64 v27; // x0

  if ( (byte_4215138 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4215138 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                limitCnt,
                                9,
                                v15);
  if ( !Instance )
    goto LABEL_29;
  v16 = Instance;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v19 = 0LL;
      v20 = (__int64)(&v16->fields.lookup + v17);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v19 >= (int)max_length )
          goto LABEL_27;
        if ( v19 >= max_length )
          goto LABEL_30;
        v22 = voiceIds->m_Items[v19];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v22, 0LL);
        if ( v17 >= LODWORD(v16->fields.datalist) )
          goto LABEL_30;
        if ( !*(_QWORD *)v20 )
          goto LABEL_29;
        v23 = *(_QWORD *)(*(_QWORD *)v20 + 64LL);
        if ( !v23 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v23 + 24) )
          goto LABEL_30;
        v24 = *(_QWORD *)(v23 + 32);
        if ( !v24 )
          goto LABEL_29;
        v25 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v24 + 16);
        if ( !Instance )
          goto LABEL_29;
        Instance = (DataManager_o *)System_String__Equals_43837244((System_String_o *)Instance, v25, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v19;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v17 >= LODWORD(v16->fields.datalist) )
      {
LABEL_30:
        v27 = sub_B0D9A8(Instance);
        sub_B0D948(v27, 0LL);
      }
      if ( !*(_QWORD *)v20 || !v12 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v20 + 64LL),
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v17 >= SLODWORD(v16->fields.datalist) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    }
LABEL_29:
    sub_B0D97C(Instance);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  EventVoicePlayEntity_o *v11; // x0
  const MethodInfo *v12; // x4
  SvtVoiceInfo_array *VoiceJson; // x0
  int max_length; // w8
  SvtVoiceInfo_array *v15; // x20
  unsigned int v16; // w21
  SvtVoiceInfo_o *v17; // x8
  __int64 v19; // x0

  if ( (byte_4215135 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    byte_4215135 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, type, v12);
  if ( !VoiceJson )
    goto LABEL_11;
  max_length = VoiceJson->max_length;
  v15 = VoiceJson;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v19 = sub_B0D9A8(VoiceJson);
        sub_B0D948(v19, 0LL);
      }
      v17 = v15->m_Items[v16];
      if ( !v17 || !v10 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17->fields.infos,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_11:
    sub_B0D97C(VoiceJson);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
}


// local variable allocation has failed, the output may be wrong!
SvtVoiceInfo_array *__fastcall EventVoicePlayEntity__GetVoiceJson(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  void *Instance; // x0
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x22

  if ( (byte_4215134 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4215134 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        Instance = (void *)ServantVoiceMaster__getSvtVoiceId(svtId, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = ServantVoiceMaster__getEntityEventReward(
                     MasterData_WarQuestSelectionMaster,
                     type,
                     (int32_t)Instance,
                     limitCnt,
                     0LL)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return (SvtVoiceInfo_array *)*((_QWORD *)Instance + 4);
}