void __fastcall EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FED40 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FED40 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_49FED38 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&slot);
    byte_49FED38 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_2E3A854 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_49FED37 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FED37 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v11, 0LL);
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
  System_String_o *v15; // x21
  unsigned __int64 v16; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v18; // x27
  __int64 v19; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_49FED3F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    byte_49FED3F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, 5, v12);
  if ( !VoiceJson )
    goto LABEL_30;
  v15 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v18 = 0LL;
      v19 = (__int64)(&v15[1].monitor + v16);
      while ( 1 )
      {
        max_length = confirmVoiceIds->max_length;
        if ( (__int64)v18 >= (int)max_length )
          goto LABEL_28;
        if ( v18 >= max_length )
          goto LABEL_31;
        v21 = confirmVoiceIds->m_Items[v18];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46217936(v21, 0LL);
        if ( v16 >= LODWORD(v15[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v19 )
          goto LABEL_30;
        v22 = *(_QWORD *)(*(_QWORD *)v19 + 64LL);
        if ( !v22 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v22 + 24) )
          goto LABEL_31;
        v23 = *(_QWORD *)(v22 + 32);
        if ( !v23 )
          goto LABEL_30;
        v14 = VoiceJson;
        VoiceJson = *(System_String_o **)(v23 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_61393452(VoiceJson, v14, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v18;
        if ( !confirmVoiceIds )
          goto LABEL_30;
      }
      if ( v16 >= LODWORD(v15[1].klass) )
LABEL_31:
        sub_1B64C64(VoiceJson, v14);
      if ( !*(_QWORD *)v19 )
        break;
      if ( !v10 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v19 + 64LL);
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
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v14;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v14, v24, v25);
      }
LABEL_28:
      if ( (__int64)++v16 >= SLODWORD(v15[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_30:
    sub_1B64C5C(VoiceJson, v14);
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
  ServantVoiceData_array *current; // x20
  unsigned __int64 v18; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v20; // x27
  __int64 v21; // x28
  unsigned __int64 max_length; // x9
  System_String_o *v23; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  System_String_o *v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_49FED3B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v11);
    this = (EventVoicePlayEntity_o *)sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    byte_49FED3B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_1B64C5C(0LL, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)VoiceData,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v15 )
      break;
    current = (ServantVoiceData_array *)v28.fields._current;
    if ( !v28.fields._current )
      sub_1B64C5C(v15, v16);
    if ( SLODWORD(v28.fields._current[1].monitor) >= 1 )
    {
      v18 = 0LL;
      do
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_25:
          sub_1B64C5C(v15, v16);
        v20 = 0LL;
        v21 = (__int64)&current->m_Items[v18];
        while ( 1 )
        {
          max_length = voiceIds->max_length;
          if ( (__int64)v20 >= (int)max_length )
            break;
          if ( v18 >= current->max_length )
            sub_1B64C64(v15, v16);
          if ( !*(_QWORD *)v21 )
            sub_1B64C5C(v15, v16);
          if ( v20 >= max_length )
            sub_1B64C64(v15, v16);
          v23 = *(System_String_o **)(*(_QWORD *)v21 + 16LL);
          v24 = voiceIds->m_Items[v20];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46217936(v24, 0LL);
          if ( !v23 )
            sub_1B64C5C(v25, v25);
          v15 = System_String__Equals_61393452(v23, v25, 0LL);
          if ( v15 )
            goto LABEL_24;
          voiceIds = v8->fields.voiceIds;
          ++v20;
          if ( !voiceIds )
            goto LABEL_25;
        }
        ++v18;
      }
      while ( (__int64)v18 < (int)current->max_length );
    }
  }
  current = 0LL;
LABEL_24:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_String_o *v15; // x21
  unsigned __int64 v16; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v18; // x27
  __int64 v19; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_49FED3C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    byte_49FED3C = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v11, svtId, limitCnt, 5, v12);
  if ( !VoiceJson )
    goto LABEL_30;
  v15 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v18 = 0LL;
      v19 = (__int64)(&v15[1].monitor + v16);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v18 >= (int)max_length )
          goto LABEL_28;
        if ( v18 >= max_length )
          goto LABEL_31;
        v21 = voiceIds->m_Items[v18];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46217936(v21, 0LL);
        if ( v16 >= LODWORD(v15[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v19 )
          goto LABEL_30;
        v22 = *(_QWORD *)(*(_QWORD *)v19 + 64LL);
        if ( !v22 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v22 + 24) )
          goto LABEL_31;
        v23 = *(_QWORD *)(v22 + 32);
        if ( !v23 )
          goto LABEL_30;
        v14 = VoiceJson;
        VoiceJson = *(System_String_o **)(v23 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_61393452(VoiceJson, v14, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v18;
        if ( !voiceIds )
          goto LABEL_30;
      }
      if ( v16 >= LODWORD(v15[1].klass) )
LABEL_31:
        sub_1B64C64(VoiceJson, v14);
      if ( !*(_QWORD *)v19 )
        break;
      if ( !v10 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v19 + 64LL);
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
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v14;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v14, v24, v25);
      }
LABEL_28:
      if ( (__int64)++v16 >= SLODWORD(v15[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_30:
    sub_1B64C5C(VoiceJson, v14);
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
  DataManager_o *v17; // x21
  unsigned __int64 v18; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v20; // x27
  __int64 v21; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_49FED3D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FED3D = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                9,
                                v16);
  if ( !Instance )
    goto LABEL_31;
  v17 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v20 = 0LL;
      v21 = (__int64)(&v17->fields._DispLog + 8 * v18);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v20 >= (int)max_length )
          goto LABEL_29;
        if ( v20 >= max_length )
          goto LABEL_32;
        v23 = voiceIds->m_Items[v20];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46217936(v23, 0LL);
        if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v21 )
          goto LABEL_31;
        v24 = *(_QWORD *)(*(_QWORD *)v21 + 64LL);
        if ( !v24 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v24 + 24) )
          goto LABEL_32;
        v25 = *(_QWORD *)(v24 + 32);
        if ( !v25 )
          goto LABEL_31;
        v14 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v25 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_61393452((System_String_o *)Instance, v14, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v20;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1B64C64(Instance, v14);
      if ( !*(_QWORD *)v21 )
        break;
      if ( !v12 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v21 + 64LL);
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
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v14;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v14, v26, v27);
      }
LABEL_29:
      if ( (__int64)++v18 >= SLODWORD(v17->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    }
LABEL_31:
    sub_1B64C5C(Instance, v14);
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
  DataManager_o *v17; // x21
  unsigned __int64 v18; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v20; // x27
  __int64 v21; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_49FED3E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FED3E = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                24,
                                v16);
  if ( !Instance )
    goto LABEL_31;
  v17 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v20 = 0LL;
      v21 = (__int64)(&v17->fields._DispLog + 8 * v18);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v20 >= (int)max_length )
          goto LABEL_29;
        if ( v20 >= max_length )
          goto LABEL_32;
        v23 = voiceIds->m_Items[v20];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46217936(v23, 0LL);
        if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v21 )
          goto LABEL_31;
        v24 = *(_QWORD *)(*(_QWORD *)v21 + 64LL);
        if ( !v24 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v24 + 24) )
          goto LABEL_32;
        v25 = *(_QWORD *)(v24 + 32);
        if ( !v25 )
          goto LABEL_31;
        v14 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v25 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_61393452((System_String_o *)Instance, v14, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v20;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1B64C64(Instance, v14);
      if ( !*(_QWORD *)v21 )
        break;
      if ( !v12 )
        break;
      v14 = *(System_String_o **)(*(_QWORD *)v21 + 64LL);
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
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v14;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v14, v26, v27);
      }
LABEL_29:
      if ( (__int64)++v18 >= SLODWORD(v17->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    }
LABEL_31:
    sub_1B64C5C(Instance, v14);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int max_length; // w8
  SvtVoiceInfo_array *v18; // x20
  unsigned int v19; // w21
  SvtVoiceInfo_o *v20; // x8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FED3A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    byte_49FED3A = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
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
        sub_1B64C64(VoiceJson, p_obj);
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
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v24[4] = (Il2CppClass *)p_obj;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)p_obj, v15, v16);
      }
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    }
LABEL_15:
    sub_1B64C5C(VoiceJson, p_obj);
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

  if ( (byte_49FED39 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FED39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        Instance = (void *)ServantVoiceMaster__getSvtVoiceId(svtId, 0LL),
        !MasterData_object)
    || (Instance = ServantVoiceMaster__getEntityEventReward(
                     (ServantVoiceMaster_o *)MasterData_object,
                     type,
                     (int32_t)Instance,
                     limitCnt,
                     0LL)) == 0LL )
  {
    sub_1B64C5C(Instance, v10);
  }
  return (SvtVoiceInfo_array *)*((_QWORD *)Instance + 4);
}