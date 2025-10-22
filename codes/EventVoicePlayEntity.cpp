void EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56FA6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C56FA6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_4C56F9E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C56F9E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_30F8548 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventVoicePlayEntity__CreatePrimaryKey(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  int32_t slot; // w21
  int32_t eventId; // w22
  int32_t idx; // w20
  __int64 v6; // x23
  __int64 v7; // x19
  int32_t v8; // w3
  const MethodInfo *v9; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C56F9D & 1) == 0 )
  {
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C56F9D = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v11, 0);
  return EventVoicePlayEntity__CreatePK(eventId, slot, idx, v8, v9);
}


System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayEntity__GetConfirmVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  EventVoicePlayEntity_o *v8; // x0
  const MethodInfo *v9; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v11; // x1
  System_String_o *v12; // x21
  unsigned __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v15; // x27
  __int64 v16; // x26
  unsigned __int64 max_length_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C56FA5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C56FA5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v8, svtId, limitCnt, 5, v9);
  if ( !VoiceJson )
    goto LABEL_30;
  v12 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v15 = 0;
      v16 = (__int64)(&v12[1].monitor + v13);
      while ( 1 )
      {
        max_length_low = LODWORD(confirmVoiceIds->max_length);
        if ( (__int64)v15 >= (int)max_length_low )
          goto LABEL_28;
        if ( v15 >= max_length_low )
          goto LABEL_31;
        v18 = confirmVoiceIds->m_Items[v15];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(v18, 0);
        if ( v13 >= LODWORD(v12[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v16 )
          goto LABEL_30;
        v19 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
        if ( !v19 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_31;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_30;
        v11 = VoiceJson;
        VoiceJson = *(System_String_o **)(v20 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_63671772(VoiceJson, v11, 0);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v15;
        if ( !confirmVoiceIds )
          goto LABEL_30;
      }
      if ( v13 >= LODWORD(v12[1].klass) )
LABEL_31:
        sub_1C3E7C8(VoiceJson, v11);
      if ( !*(_QWORD *)v16 )
        break;
      if ( !v7 )
        break;
      v11 = *(System_String_o **)(*(_QWORD *)v16 + 64LL);
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v11,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v11, v21, v22);
      }
LABEL_28:
      if ( (__int64)++v13 >= SLODWORD(v12[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    }
LABEL_30:
    sub_1C3E7C0(VoiceJson, v11);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


ServantVoiceData_array *EventVoicePlayEntity__GetEventRewardVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *v8; // x19
  System_Collections_Generic_List_ServantVoiceData____o *VoiceData; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  unsigned __int64 v14; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v16; // x27
  __int64 v17; // x28
  unsigned __int64 max_length_low; // x9
  System_String_o *v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v20; // x22
  System_String_o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4C56FA1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    this = (EventVoicePlayEntity_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C56FA1 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_1C3E7C0(0, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)VoiceData,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v11 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1C3E7C0(v11, v12);
    if ( SLODWORD(v24.fields._current[1].monitor) >= 1 )
    {
      v14 = 0;
      do
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_25:
          sub_1C3E7C0(v11, v12);
        v16 = 0;
        v17 = (__int64)&current[2] + 8 * v14;
        while ( 1 )
        {
          max_length_low = LODWORD(voiceIds->max_length);
          if ( (__int64)v16 >= (int)max_length_low )
            break;
          if ( v14 >= LODWORD(current[1].monitor) )
            sub_1C3E7C8(v11, v12);
          if ( !*(_QWORD *)v17 )
            sub_1C3E7C0(v11, v12);
          if ( v16 >= max_length_low )
            sub_1C3E7C8(v11, v12);
          v19 = *(System_String_o **)(*(_QWORD *)v17 + 16LL);
          v20 = voiceIds->m_Items[v16];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(v20, 0);
          if ( !v19 )
            sub_1C3E7C0(v21, v21);
          v11 = System_String__Equals_63671772(v19, v21, 0);
          if ( v11 )
            goto LABEL_24;
          voiceIds = v8->fields.voiceIds;
          ++v16;
          if ( !voiceIds )
            goto LABEL_25;
        }
        ++v14;
      }
      while ( (__int64)v14 < SLODWORD(current[1].monitor) );
    }
  }
  current = 0;
LABEL_24:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return (ServantVoiceData_array *)current;
}


System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayEntity__GetEventRewardVoiceRandList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  EventVoicePlayEntity_o *v8; // x0
  const MethodInfo *v9; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v11; // x1
  System_String_o *v12; // x21
  unsigned __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v15; // x27
  __int64 v16; // x26
  unsigned __int64 max_length_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C56FA2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C56FA2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v8, svtId, limitCnt, 5, v9);
  if ( !VoiceJson )
    goto LABEL_30;
  v12 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v15 = 0;
      v16 = (__int64)(&v12[1].monitor + v13);
      while ( 1 )
      {
        max_length_low = LODWORD(voiceIds->max_length);
        if ( (__int64)v15 >= (int)max_length_low )
          goto LABEL_28;
        if ( v15 >= max_length_low )
          goto LABEL_31;
        v18 = voiceIds->m_Items[v15];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(v18, 0);
        if ( v13 >= LODWORD(v12[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v16 )
          goto LABEL_30;
        v19 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
        if ( !v19 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_31;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_30;
        v11 = VoiceJson;
        VoiceJson = *(System_String_o **)(v20 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_63671772(VoiceJson, v11, 0);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v15;
        if ( !voiceIds )
          goto LABEL_30;
      }
      if ( v13 >= LODWORD(v12[1].klass) )
LABEL_31:
        sub_1C3E7C8(VoiceJson, v11);
      if ( !*(_QWORD *)v16 )
        break;
      if ( !v7 )
        break;
      v11 = *(System_String_o **)(*(_QWORD *)v16 + 64LL);
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v11,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v11, v21, v22);
      }
LABEL_28:
      if ( (__int64)++v13 >= SLODWORD(v12[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    }
LABEL_30:
    sub_1C3E7C0(VoiceJson, v11);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayEntity__GetEventShopWelcomeVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  DataManager_o *Instance; // x0
  System_String_o *v9; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v11; // x4
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v15; // x27
  __int64 v16; // x26
  unsigned __int64 max_length_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C56FA3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56FA3 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                9,
                                v11);
  if ( !Instance )
    goto LABEL_31;
  v12 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v15 = 0;
      v16 = (__int64)(&v12->fields._DispLog + 8 * v13);
      while ( 1 )
      {
        max_length_low = LODWORD(voiceIds->max_length);
        if ( (__int64)v15 >= (int)max_length_low )
          goto LABEL_29;
        if ( v15 >= max_length_low )
          goto LABEL_32;
        v18 = voiceIds->m_Items[v15];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(v18, 0);
        if ( v13 >= LODWORD(v12->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v16 )
          goto LABEL_31;
        v19 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
        if ( !v19 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_32;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_31;
        v9 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v20 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_63671772((System_String_o *)Instance, v9, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v15;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v13 >= LODWORD(v12->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1C3E7C8(Instance, v9);
      if ( !*(_QWORD *)v16 )
        break;
      if ( !v7 )
        break;
      v9 = *(System_String_o **)(*(_QWORD *)v16 + 64LL);
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v9,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v9;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v9, v21, v22);
      }
LABEL_29:
      if ( (__int64)++v13 >= SLODWORD(v12->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    }
LABEL_31:
    sub_1C3E7C0(Instance, v9);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayEntity__GetEventTradeWelcomeVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  DataManager_o *Instance; // x0
  System_String_o *v9; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v11; // x4
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v15; // x27
  __int64 v16; // x26
  unsigned __int64 max_length_low; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x22
  __int64 v19; // x8
  __int64 v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C56FA4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56FA4 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                24,
                                v11);
  if ( !Instance )
    goto LABEL_31;
  v12 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v15 = 0;
      v16 = (__int64)(&v12->fields._DispLog + 8 * v13);
      while ( 1 )
      {
        max_length_low = LODWORD(voiceIds->max_length);
        if ( (__int64)v15 >= (int)max_length_low )
          goto LABEL_29;
        if ( v15 >= max_length_low )
          goto LABEL_32;
        v18 = voiceIds->m_Items[v15];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(v18, 0);
        if ( v13 >= LODWORD(v12->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v16 )
          goto LABEL_31;
        v19 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
        if ( !v19 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_32;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_31;
        v9 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v20 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_63671772((System_String_o *)Instance, v9, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v15;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v13 >= LODWORD(v12->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1C3E7C8(Instance, v9);
      if ( !*(_QWORD *)v16 )
        break;
      if ( !v7 )
        break;
      v9 = *(System_String_o **)(*(_QWORD *)v16 + 64LL);
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v9,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v9;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v9, v21, v22);
      }
LABEL_29:
      if ( (__int64)++v13 >= SLODWORD(v12->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    }
LABEL_31:
    sub_1C3E7C0(Instance, v9);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayEntity__GetVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x19
  EventVoicePlayEntity_o *v9; // x0
  const MethodInfo *v10; // x4
  SvtVoiceInfo_array *VoiceJson; // x0
  Il2CppObject *p_obj; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int max_length; // w8
  SvtVoiceInfo_array *v16; // x20
  unsigned int v17; // w21
  SvtVoiceInfo_o *v18; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4C56FA0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C56FA0 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = EventVoicePlayEntity__GetVoiceJson(v9, svtId, limitCnt, type, v10);
  if ( !VoiceJson )
    goto LABEL_15;
  max_length = VoiceJson->max_length;
  v16 = VoiceJson;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C3E7C8(VoiceJson, p_obj);
      v18 = v16->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v8 )
        break;
      p_obj = &v18->fields.infos->obj;
      items = v8->fields._items;
      v20 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          p_obj,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v22[4] = (Il2CppClass *)p_obj;
        sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), (int32_t)p_obj, v13, v14);
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    }
LABEL_15:
    sub_1C3E7C0(VoiceJson, p_obj);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
}


SvtVoiceInfo_array *EventVoicePlayEntity__GetVoiceJson(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t type,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x22

  if ( (byte_4C56F9F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56F9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        Instance = (void *)ServantVoiceMaster__getSvtVoiceId(svtId, 0),
        !MasterData_object)
    || (Instance = ServantVoiceMaster__getEntityEventReward(
                     (ServantVoiceMaster_o *)MasterData_object,
                     type,
                     (int32_t)Instance,
                     limitCnt,
                     0)) == 0 )
  {
    sub_1C3E7C0(Instance, v9);
  }
  return (SvtVoiceInfo_array *)*((_QWORD *)Instance + 4);
}