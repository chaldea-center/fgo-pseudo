void __fastcall EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AF8F7 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AF8F7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_42AF8F0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42AF8F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_42AF8EF & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AF8EF = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  return EventVoicePlayEntity__CreatePK(eventId, slot, idx, v8, v9);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetConfirmVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  EventVoicePlayEntity_o *v8; // x0
  const MethodInfo *v9; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v11; // x1
  System_String_o *v12; // x21
  unsigned __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v15; // x27
  __int64 v16; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v22; // x0

  if ( (byte_42AF8F6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_42AF8F6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v8, svtId, limitCnt, 5, v9);
  if ( !VoiceJson )
    goto LABEL_28;
  v12 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v15 = 0LL;
      v16 = (__int64)(&v12[1].monitor + v13);
      while ( 1 )
      {
        max_length = confirmVoiceIds->max_length;
        if ( (__int64)v15 >= (int)max_length )
          goto LABEL_26;
        if ( v15 >= max_length )
          goto LABEL_29;
        v18 = confirmVoiceIds->m_Items[v15];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(v18, 0LL);
        if ( v13 >= LODWORD(v12[1].klass) )
          goto LABEL_29;
        if ( !*(_QWORD *)v16 )
          goto LABEL_28;
        v19 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
        if ( !v19 )
          goto LABEL_28;
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_29;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_28;
        v11 = VoiceJson;
        VoiceJson = *(System_String_o **)(v20 + 16);
        if ( !VoiceJson )
          goto LABEL_28;
        VoiceJson = (System_String_o *)System_String__Equals_44555656(VoiceJson, v11, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v15;
        if ( !confirmVoiceIds )
          goto LABEL_28;
      }
      if ( v13 >= LODWORD(v12[1].klass) )
      {
LABEL_29:
        v22 = sub_B52A88(VoiceJson);
        sub_B52A28(v22, 0LL);
      }
      if ( !*(_QWORD *)v16 || !v7 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v16 + 64LL),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_26:
      if ( (__int64)++v13 >= SLODWORD(v12[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    }
LABEL_28:
    sub_B52A5C(VoiceJson, v11);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


ServantVoiceData_array *__fastcall EventVoicePlayEntity__GetEventRewardVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *v8; // x19
  System_Collections_Generic_List_ServantVoiceData____o *VoiceData; // x0
  __int64 v10; // x1
  ServantVoiceData_array *current; // x22
  unsigned __int64 v12; // x25
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v14; // x26
  __int64 v15; // x27
  unsigned __int64 max_length; // x9
  System_String_o *v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x21
  System_String_o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  char v22; // w19
  __int64 v24; // x0
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_42AF8F3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    this = (EventVoicePlayEntity_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_42AF8F3 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_B52A5C(0LL, v10);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceData,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v20 )
      break;
    current = (ServantVoiceData_array *)v27.fields.current;
    if ( !v27.fields.current )
      sub_B52A5C(v20, v21);
    if ( SLODWORD(v27.fields.current[1].monitor) >= 1 )
    {
      v12 = 0LL;
      while ( 2 )
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_28:
          sub_B52A5C(v20, v21);
        v14 = 0LL;
        v15 = (__int64)&current->m_Items[v12];
        while ( 1 )
        {
          max_length = voiceIds->max_length;
          if ( (__int64)v14 >= (int)max_length )
            break;
          if ( v12 >= current->max_length )
          {
            v24 = sub_B52A88(v20);
            sub_B52A28(v24, 0LL);
          }
          if ( !*(_QWORD *)v15 )
            sub_B52A5C(v20, v21);
          if ( v14 >= max_length )
          {
            v25 = sub_B52A88(v20);
            sub_B52A28(v25, 0LL);
          }
          v17 = *(System_String_o **)(*(_QWORD *)v15 + 16LL);
          v18 = voiceIds->m_Items[v14];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(v18, 0LL);
          if ( !v17 )
            sub_B52A5C(v19, v19);
          v20 = System_String__Equals_44555656(v17, v19, 0LL);
          if ( v20 )
          {
            v22 = 2;
            goto LABEL_25;
          }
          voiceIds = v8->fields.voiceIds;
          ++v14;
          if ( !voiceIds )
            goto LABEL_28;
        }
        if ( (__int64)++v12 < (int)current->max_length )
          continue;
        break;
      }
    }
  }
  v22 = 0;
  current = 0LL;
LABEL_25:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v22 + 2) & 3) != 0 )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  DataManager_o *Instance; // x0
  System_String_o *v9; // x1
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x4
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v15; // x27
  __int64 v16; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v22; // x0

  if ( (byte_42AF8F4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8F4 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                limitCnt,
                                5,
                                v11);
  if ( !Instance )
    goto LABEL_29;
  v12 = Instance;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v15 = 0LL;
      v16 = (__int64)(&v12->fields.lookup + v13);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v15 >= (int)max_length )
          goto LABEL_27;
        if ( v15 >= max_length )
          goto LABEL_30;
        v18 = voiceIds->m_Items[v15];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(v18, 0LL);
        if ( v13 >= LODWORD(v12->fields.datalist) )
          goto LABEL_30;
        if ( !*(_QWORD *)v16 )
          goto LABEL_29;
        v19 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
        if ( !v19 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_30;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_29;
        v9 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v20 + 16);
        if ( !Instance )
          goto LABEL_29;
        Instance = (DataManager_o *)System_String__Equals_44555656((System_String_o *)Instance, v9, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v15;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v13 >= LODWORD(v12->fields.datalist) )
      {
LABEL_30:
        v22 = sub_B52A88(Instance);
        sub_B52A28(v22, 0LL);
      }
      if ( !*(_QWORD *)v16 || !v7 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v16 + 64LL),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v13 >= SLODWORD(v12->fields.datalist) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    }
LABEL_29:
    sub_B52A5C(Instance, v9);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventShopWelcomeVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  DataManager_o *Instance; // x0
  System_String_o *v9; // x1
  EventVoicePlayEntity_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x4
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v15; // x27
  __int64 v16; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v22; // x0

  if ( (byte_42AF8F5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8F5 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventVoicePlayEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                limitCnt,
                                9,
                                v11);
  if ( !Instance )
    goto LABEL_29;
  v12 = Instance;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v15 = 0LL;
      v16 = (__int64)(&v12->fields.lookup + v13);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v15 >= (int)max_length )
          goto LABEL_27;
        if ( v15 >= max_length )
          goto LABEL_30;
        v18 = voiceIds->m_Items[v15];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(v18, 0LL);
        if ( v13 >= LODWORD(v12->fields.datalist) )
          goto LABEL_30;
        if ( !*(_QWORD *)v16 )
          goto LABEL_29;
        v19 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
        if ( !v19 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_30;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_29;
        v9 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v20 + 16);
        if ( !Instance )
          goto LABEL_29;
        Instance = (DataManager_o *)System_String__Equals_44555656((System_String_o *)Instance, v9, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v15;
        if ( !voiceIds )
          goto LABEL_29;
      }
      if ( v13 >= LODWORD(v12->fields.datalist) )
      {
LABEL_30:
        v22 = sub_B52A88(Instance);
        sub_B52A28(v22, 0LL);
      }
      if ( !*(_QWORD *)v16 || !v7 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v16 + 64LL),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
LABEL_27:
      if ( (__int64)++v13 >= SLODWORD(v12->fields.datalist) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    }
LABEL_29:
    sub_B52A5C(Instance, v9);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  EventVoicePlayEntity_o *v9; // x0
  const MethodInfo *v10; // x4
  SvtVoiceInfo_array *VoiceJson; // x0
  __int64 v12; // x1
  int max_length; // w8
  SvtVoiceInfo_array *v14; // x20
  unsigned int v15; // w21
  SvtVoiceInfo_o *v16; // x8
  __int64 v18; // x0

  if ( (byte_42AF8F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_42AF8F2 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = EventVoicePlayEntity__GetVoiceJson(v9, svtId, limitCnt, type, v10);
  if ( !VoiceJson )
    goto LABEL_11;
  max_length = VoiceJson->max_length;
  v14 = VoiceJson;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v18 = sub_B52A88(VoiceJson);
        sub_B52A28(v18, 0LL);
      }
      v16 = v14->m_Items[v15];
      if ( !v16 || !v8 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16->fields.infos,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    }
LABEL_11:
    sub_B52A5C(VoiceJson, v12);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
}


SvtVoiceInfo_array *__fastcall EventVoicePlayEntity__GetVoiceJson(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x22

  if ( (byte_42AF8F1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8F1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        Instance = (void *)ServantVoiceMaster__getSvtVoiceId(svtId, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = ServantVoiceMaster__getEntityEventReward(
                     MasterData_WarQuestSelectionMaster,
                     type,
                     (int32_t)Instance,
                     limitCnt,
                     0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v9);
  }
  return (SvtVoiceInfo_array *)*((_QWORD *)Instance + 4);
}