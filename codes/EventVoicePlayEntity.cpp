void __fastcall EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C95 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44C95 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_4B44C8D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&slot);
    byte_4B44C8D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_3032434 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_4B44C8C & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B44C8C = 1;
  }
  eventId = this->fields.eventId;
  slot = this->fields.slot;
  idx = this->fields.idx;
  v6 = *(_QWORD *)&this->fields.guideImageId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.guideImageId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v11, 0LL);
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
  System_Collections_Generic_List_object__o *v10; // x20
  EventVoicePlayEntity_o *v11; // x0
  const MethodInfo *v12; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x21
  unsigned __int64 v17; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v19; // x27
  __int64 v20; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B44C94 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    byte_4B44C94 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, 5, v12);
  if ( !VoiceJson )
    goto LABEL_30;
  v16 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v19 = 0LL;
      v20 = (__int64)(&v16[1].monitor + v17);
      while ( 1 )
      {
        max_length = confirmVoiceIds->max_length;
        if ( (__int64)v19 >= (int)max_length )
          goto LABEL_28;
        if ( v19 >= max_length )
          goto LABEL_31;
        v22 = confirmVoiceIds->m_Items[v19];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(v22, 0LL);
        if ( v17 >= LODWORD(v16[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v20 )
          goto LABEL_30;
        v23 = *(_QWORD *)(*(_QWORD *)v20 + 64LL);
        if ( !v23 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v23 + 24) )
          goto LABEL_31;
        v24 = *(_QWORD *)(v23 + 32);
        if ( !v24 )
          goto LABEL_30;
        v14 = VoiceJson;
        VoiceJson = *(System_String_o **)(v24 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_62607564(VoiceJson, v14, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v19;
        if ( !confirmVoiceIds )
          goto LABEL_30;
      }
      if ( v17 >= LODWORD(v16[1].klass) )
LABEL_31:
        sub_1BDBADC(VoiceJson, v14, v15);
      if ( !*(_QWORD *)v20 )
        break;
      if ( !v10 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v20 + 64LL);
      items = v10->fields._items;
      v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)v14,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v14;
        sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v14, v15, v25);
      }
LABEL_28:
      if ( (__int64)++v17 >= SLODWORD(v16[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_30:
    sub_1BDBAD4(VoiceJson, v14);
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
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  ServantVoiceData_array *current; // x20
  unsigned __int64 v19; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v21; // x27
  __int64 v22; // x28
  unsigned __int64 max_length; // x9
  System_String_o *v24; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x22
  System_String_o *v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4B44C90 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v11);
    this = (EventVoicePlayEntity_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    byte_4B44C90 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_1BDBAD4(0LL, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)VoiceData,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v15 )
      break;
    current = (ServantVoiceData_array *)v29.fields._current;
    if ( !v29.fields._current )
      sub_1BDBAD4(v15, v16);
    if ( SLODWORD(v29.fields._current[1].monitor) >= 1 )
    {
      v19 = 0LL;
      do
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_25:
          sub_1BDBAD4(v15, v16);
        v21 = 0LL;
        v22 = (__int64)&current->m_Items[v19];
        while ( 1 )
        {
          max_length = voiceIds->max_length;
          if ( (__int64)v21 >= (int)max_length )
            break;
          if ( v19 >= current->max_length )
            sub_1BDBADC(v15, v16, v17);
          if ( !*(_QWORD *)v22 )
            sub_1BDBAD4(v15, v16);
          if ( v21 >= max_length )
            sub_1BDBADC(v15, v16, v17);
          v24 = *(System_String_o **)(*(_QWORD *)v22 + 16LL);
          v25 = voiceIds->m_Items[v21];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(v25, 0LL);
          if ( !v24 )
            sub_1BDBAD4(v26, v26);
          v15 = System_String__Equals_62607564(v24, v26, 0LL);
          if ( v15 )
            goto LABEL_24;
          voiceIds = v8->fields.voiceIds;
          ++v21;
          if ( !voiceIds )
            goto LABEL_25;
        }
        ++v19;
      }
      while ( (__int64)v19 < (int)current->max_length );
    }
  }
  current = 0LL;
LABEL_24:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_Collections_Generic_List_object__o *v10; // x20
  EventVoicePlayEntity_o *v11; // x0
  const MethodInfo *v12; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x21
  unsigned __int64 v17; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v19; // x27
  __int64 v20; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B44C91 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    byte_4B44C91 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, 5, v12);
  if ( !VoiceJson )
    goto LABEL_30;
  v16 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v19 = 0LL;
      v20 = (__int64)(&v16[1].monitor + v17);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v19 >= (int)max_length )
          goto LABEL_28;
        if ( v19 >= max_length )
          goto LABEL_31;
        v22 = voiceIds->m_Items[v19];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(v22, 0LL);
        if ( v17 >= LODWORD(v16[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v20 )
          goto LABEL_30;
        v23 = *(_QWORD *)(*(_QWORD *)v20 + 64LL);
        if ( !v23 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v23 + 24) )
          goto LABEL_31;
        v24 = *(_QWORD *)(v23 + 32);
        if ( !v24 )
          goto LABEL_30;
        v14 = VoiceJson;
        VoiceJson = *(System_String_o **)(v24 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_62607564(VoiceJson, v14, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v19;
        if ( !voiceIds )
          goto LABEL_30;
      }
      if ( v17 >= LODWORD(v16[1].klass) )
LABEL_31:
        sub_1BDBADC(VoiceJson, v14, v15);
      if ( !*(_QWORD *)v20 )
        break;
      if ( !v10 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v20 + 64LL);
      items = v10->fields._items;
      v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)v14,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v14;
        sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v14, v15, v25);
      }
LABEL_28:
      if ( (__int64)++v17 >= SLODWORD(v16[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_30:
    sub_1BDBAD4(VoiceJson, v14);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
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
  System_Collections_Generic_List_object__o *v12; // x20
  DataManager_o *Instance; // x0
  System_String_o *v14; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v16; // x4
  __int64 v17; // x2
  DataManager_o *v18; // x21
  unsigned __int64 v19; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v21; // x27
  __int64 v22; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  __int64 v25; // x8
  __int64 v26; // x8
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B44C92 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B44C92 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                9,
                                v16);
  if ( !Instance )
    goto LABEL_31;
  v18 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v21 = 0LL;
      v22 = (__int64)(&v18->fields._DispLog + 8 * v19);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v21 >= (int)max_length )
          goto LABEL_29;
        if ( v21 >= max_length )
          goto LABEL_32;
        v24 = voiceIds->m_Items[v21];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(v24, 0LL);
        if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v22 )
          goto LABEL_31;
        v25 = *(_QWORD *)(*(_QWORD *)v22 + 64LL);
        if ( !v25 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v25 + 24) )
          goto LABEL_32;
        v26 = *(_QWORD *)(v25 + 32);
        if ( !v26 )
          goto LABEL_31;
        v14 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v26 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_62607564((System_String_o *)Instance, v14, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v21;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1BDBADC(Instance, v14, v17);
      if ( !*(_QWORD *)v22 )
        break;
      if ( !v12 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v22 + 64LL);
      items = v12->fields._items;
      v29 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v14,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v14;
        sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v14, v17, v27);
      }
LABEL_29:
      if ( (__int64)++v19 >= SLODWORD(v18->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    }
LABEL_31:
    sub_1BDBAD4(Instance, v14);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventTradeWelcomeVoiceList(
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
  System_Collections_Generic_List_object__o *v12; // x20
  DataManager_o *Instance; // x0
  System_String_o *v14; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v16; // x4
  __int64 v17; // x2
  DataManager_o *v18; // x21
  unsigned __int64 v19; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v21; // x27
  __int64 v22; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  __int64 v25; // x8
  __int64 v26; // x8
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B44C93 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B44C93 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                24,
                                v16);
  if ( !Instance )
    goto LABEL_31;
  v18 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v21 = 0LL;
      v22 = (__int64)(&v18->fields._DispLog + 8 * v19);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v21 >= (int)max_length )
          goto LABEL_29;
        if ( v21 >= max_length )
          goto LABEL_32;
        v24 = voiceIds->m_Items[v21];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(v24, 0LL);
        if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v22 )
          goto LABEL_31;
        v25 = *(_QWORD *)(*(_QWORD *)v22 + 64LL);
        if ( !v25 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v25 + 24) )
          goto LABEL_32;
        v26 = *(_QWORD *)(v25 + 32);
        if ( !v26 )
          goto LABEL_31;
        v14 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v26 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_62607564((System_String_o *)Instance, v14, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v21;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1BDBADC(Instance, v14, v17);
      if ( !*(_QWORD *)v22 )
        break;
      if ( !v12 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v22 + 64LL);
      items = v12->fields._items;
      v29 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v14,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v14;
        sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v14, v17, v27);
      }
LABEL_29:
      if ( (__int64)++v19 >= SLODWORD(v18->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    }
LABEL_31:
    sub_1BDBAD4(Instance, v14);
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
  System_Collections_Generic_List_object__o *v10; // x19
  EventVoicePlayEntity_o *v11; // x0
  const MethodInfo *v12; // x4
  SvtVoiceInfo_array *VoiceJson; // x0
  Il2CppObject *p_obj; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  int max_length; // w8
  SvtVoiceInfo_array *v18; // x20
  unsigned int v19; // w21
  SvtVoiceInfo_o *v20; // x8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B44C8F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    byte_4B44C8F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, type, v12);
  if ( !VoiceJson )
    goto LABEL_15;
  max_length = VoiceJson->max_length;
  v18 = VoiceJson;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1BDBADC(VoiceJson, p_obj, v15);
      v20 = v18->m_Items[v19];
      if ( !v20 )
        break;
      if ( !v10 )
        break;
      p_obj = &v20->fields.infos->obj;
      items = v10->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          p_obj,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v24[4] = (Il2CppClass *)p_obj;
        sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)p_obj, v15, v16);
      }
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_15:
    sub_1BDBAD4(VoiceJson, p_obj);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x22

  if ( (byte_4B44C8E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B44C8E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        Instance = (void *)ServantVoiceMaster__getSvtVoiceId(svtId, 0LL),
        !MasterData_object)
    || (Instance = ServantVoiceMaster__getEntityEventReward(
                     (ServantVoiceMaster_o *)MasterData_object,
                     type,
                     (int32_t)Instance,
                     limitCnt,
                     0LL)) == 0LL )
  {
    sub_1BDBAD4(Instance, v10);
  }
  return (SvtVoiceInfo_array *)*((_QWORD *)Instance + 4);
}