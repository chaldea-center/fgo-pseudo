void __fastcall EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9C4D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F9C4D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_40F9C46 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&slot);
    byte_40F9C46 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_18C2910 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_40F9C45 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F9C45 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  return EventVoicePlayEntity__CreatePK(eventId, slot, idx, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetConfirmVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  EventVoicePlayEntity_o *v12; // x0
  const MethodInfo *v13; // x4
  System_String_o *VoiceJson; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x21
  unsigned __int64 v18; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v20; // x27
  __int64 v21; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x8
  System_String_o *v26; // x1
  System_String_o *v27; // x0

  if ( (byte_40F9C4C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    byte_40F9C4C = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v12, svtId, limitCnt, 5, v13);
  if ( !VoiceJson )
    goto LABEL_28;
  v17 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v20 = 0LL;
      v21 = (__int64)(&v17[1].monitor + v18);
      while ( 1 )
      {
        max_length = confirmVoiceIds->max_length;
        if ( (__int64)v20 >= (int)max_length )
          goto LABEL_26;
        if ( v20 >= max_length )
          goto LABEL_29;
        v23 = confirmVoiceIds->m_Items[v20];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v23, 0LL);
        if ( v18 >= LODWORD(v17[1].klass) )
          goto LABEL_29;
        if ( !*(_QWORD *)v21 )
          goto LABEL_28;
        v24 = *(_QWORD *)(*(_QWORD *)v21 + 64LL);
        if ( !v24 )
          goto LABEL_28;
        if ( !*(_DWORD *)(v24 + 24) )
          goto LABEL_29;
        v25 = *(_QWORD *)(v24 + 32);
        if ( !v25 )
          goto LABEL_28;
        v26 = VoiceJson;
        v27 = *(System_String_o **)(v25 + 16);
        if ( !v27 )
          goto LABEL_28;
        VoiceJson = (System_String_o *)System_String__Equals_43731072(v27, v26, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v20;
        if ( !confirmVoiceIds )
          goto LABEL_28;
      }
      if ( v18 >= LODWORD(v17[1].klass) )
      {
LABEL_29:
        sub_B17100(VoiceJson, v15, v16);
        sub_B170A0();
      }
      if ( !*(_QWORD *)v21 || !v11 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v21 + 64LL),
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_26:
      if ( (__int64)++v18 >= SLODWORD(v17[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    }
LABEL_28:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
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
  System_String_o *v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  char v26; // w19
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_40F9C49 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v11);
    this = (EventVoicePlayEntity_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    byte_40F9C49 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v23 )
      break;
    current = (ServantVoiceData_array *)v29.fields.current;
    if ( !v29.fields.current )
      sub_B170D4();
    if ( SLODWORD(v29.fields.current[1].monitor) >= 1 )
    {
      v15 = 0LL;
      while ( 2 )
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_28:
          sub_B170D4();
        v17 = 0LL;
        v18 = (__int64)&current->m_Items[v15];
        while ( 1 )
        {
          max_length = voiceIds->max_length;
          if ( (__int64)v17 >= (int)max_length )
            break;
          if ( v15 >= current->max_length )
          {
            sub_B17100(v23, v24, v25);
            sub_B170A0();
          }
          if ( !*(_QWORD *)v18 )
            sub_B170D4();
          if ( v17 >= max_length )
          {
            sub_B17100(v23, v24, v25);
            sub_B170A0();
          }
          v20 = *(System_String_o **)(*(_QWORD *)v18 + 16LL);
          v21 = voiceIds->m_Items[v17];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v21, 0LL);
          if ( !v20 )
            sub_B170D4();
          v23 = System_String__Equals_43731072(v20, v22, 0LL);
          if ( v23 )
          {
            v26 = 2;
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
  v26 = 0;
  current = 0LL;
LABEL_25:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v26 + 2) & 3) != 0 )
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  WebViewManager_o *Instance; // x0
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x4
  System_String_o *VoiceJson; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x21
  unsigned __int64 v21; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v23; // x27
  __int64 v24; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x22
  __int64 v27; // x8
  __int64 v28; // x8
  System_String_o *v29; // x1
  System_String_o *v30; // x0

  if ( (byte_40F9C4A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40F9C4A = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(
                                   MasterData_WarQuestSelectionMaster,
                                   svtId,
                                   limitCnt,
                                   5,
                                   v16);
  if ( !VoiceJson )
    goto LABEL_29;
  v20 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v23 = 0LL;
      v24 = (__int64)(&v20[1].monitor + v21);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v23 >= (int)max_length )
          goto LABEL_27;
        if ( v23 >= max_length )
          goto LABEL_30;
        v26 = voiceIds->m_Items[v23];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v26, 0LL);
        if ( v21 >= LODWORD(v20[1].klass) )
          goto LABEL_30;
        if ( !*(_QWORD *)v24 )
          goto LABEL_29;
        v27 = *(_QWORD *)(*(_QWORD *)v24 + 64LL);
        if ( !v27 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v27 + 24) )
          goto LABEL_30;
        v28 = *(_QWORD *)(v27 + 32);
        if ( !v28 )
          goto LABEL_29;
        v29 = VoiceJson;
        v30 = *(System_String_o **)(v28 + 16);
        if ( !v30 )
          goto LABEL_29;
        VoiceJson = (System_String_o *)System_String__Equals_43731072(v30, v29, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v23;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v21 >= LODWORD(v20[1].klass) )
      {
LABEL_30:
        sub_B17100(VoiceJson, v18, v19);
        sub_B170A0();
      }
      if ( !*(_QWORD *)v24 || !v13 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v24 + 64LL),
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v21 >= SLODWORD(v20[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    }
LABEL_29:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventShopWelcomeVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  WebViewManager_o *Instance; // x0
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x4
  System_String_o *VoiceJson; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x21
  unsigned __int64 v21; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v23; // x27
  __int64 v24; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x22
  __int64 v27; // x8
  __int64 v28; // x8
  System_String_o *v29; // x1
  System_String_o *v30; // x0

  if ( (byte_40F9C4B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40F9C4B = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(
                                   MasterData_WarQuestSelectionMaster,
                                   svtId,
                                   limitCnt,
                                   9,
                                   v16);
  if ( !VoiceJson )
    goto LABEL_29;
  v20 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v23 = 0LL;
      v24 = (__int64)(&v20[1].monitor + v21);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v23 >= (int)max_length )
          goto LABEL_27;
        if ( v23 >= max_length )
          goto LABEL_30;
        v26 = voiceIds->m_Items[v23];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v26, 0LL);
        if ( v21 >= LODWORD(v20[1].klass) )
          goto LABEL_30;
        if ( !*(_QWORD *)v24 )
          goto LABEL_29;
        v27 = *(_QWORD *)(*(_QWORD *)v24 + 64LL);
        if ( !v27 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v27 + 24) )
          goto LABEL_30;
        v28 = *(_QWORD *)(v27 + 32);
        if ( !v28 )
          goto LABEL_29;
        v29 = VoiceJson;
        v30 = *(System_String_o **)(v28 + 16);
        if ( !v30 )
          goto LABEL_29;
        VoiceJson = (System_String_o *)System_String__Equals_43731072(v30, v29, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v23;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v21 >= LODWORD(v20[1].klass) )
      {
LABEL_30:
        sub_B17100(VoiceJson, v18, v19);
        sub_B170A0();
      }
      if ( !*(_QWORD *)v24 || !v13 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v24 + 64LL),
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v21 >= SLODWORD(v20[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    }
LABEL_29:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
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
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  SvtVoiceInfo_array *v17; // x20
  unsigned int v18; // w21
  SvtVoiceInfo_o *v19; // x8

  if ( (byte_40F9C48 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    byte_40F9C48 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCnt,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, type, v12);
  if ( !VoiceJson )
    goto LABEL_11;
  max_length = VoiceJson->max_length;
  v17 = VoiceJson;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(VoiceJson, v14, v15);
        sub_B170A0();
      }
      v19 = v17->m_Items[v18];
      if ( !v19 || !v10 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19->fields.infos,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_11:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t SvtVoiceId; // w0
  ServantVoiceEntity_o *EntityEventReward; // x0

  if ( (byte_40F9C47 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F9C47 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (EntityEventReward = ServantVoiceMaster__getEntityEventReward(
                              MasterData_WarQuestSelectionMaster,
                              type,
                              SvtVoiceId,
                              limitCnt,
                              0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return EntityEventReward->fields.scriptJson;
}