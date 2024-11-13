void __fastcall EventVoicePlayEntity___ctor(EventVoicePlayEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1640C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1640C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  if ( (byte_4B16404 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&slot, *(_QWORD *)&idx);
    byte_4B16404 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           idx,
           guideImageId,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventVoicePlayEntity__CreatePrimaryKey(
        EventVoicePlayEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t slot; // w21
  int32_t eventId; // w22
  int32_t idx; // w20
  __int64 v7; // x23
  __int64 v8; // x19
  int32_t v9; // w3
  const MethodInfo *v10; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B16403 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16403 = 1;
  }
  eventId = this->fields.eventId;
  slot = this->fields.slot;
  idx = this->fields.idx;
  v7 = *(_QWORD *)&this->fields.guideImageId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.guideImageId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  return EventVoicePlayEntity__CreatePK(eventId, slot, idx, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetConfirmVoiceData(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  EventVoicePlayEntity_o *v14; // x0
  const MethodInfo *v15; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v17; // x1
  System_String_o *v18; // x21
  unsigned __int64 v19; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *confirmVoiceIds; // x8
  unsigned __int64 v21; // x27
  __int64 v22; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  __int64 v25; // x8
  __int64 v26; // x8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B1640B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantVoiceData____Add__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11, v12);
    byte_4B1640B = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&limitCnt,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v14, svtId, limitCnt, 5, v15);
  if ( !VoiceJson )
    goto LABEL_30;
  v18 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      confirmVoiceIds = this->fields.confirmVoiceIds;
      if ( !confirmVoiceIds )
        break;
      v21 = 0LL;
      v22 = (__int64)(&v18[1].monitor + v19);
      while ( 1 )
      {
        max_length = confirmVoiceIds->max_length;
        if ( (__int64)v21 >= (int)max_length )
          goto LABEL_28;
        if ( v21 >= max_length )
          goto LABEL_31;
        v24 = confirmVoiceIds->m_Items[v21];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v17);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v24, 0LL);
        if ( v19 >= LODWORD(v18[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v22 )
          goto LABEL_30;
        v25 = *(_QWORD *)(*(_QWORD *)v22 + 64LL);
        if ( !v25 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v25 + 24) )
          goto LABEL_31;
        v26 = *(_QWORD *)(v25 + 32);
        if ( !v26 )
          goto LABEL_30;
        v17 = VoiceJson;
        VoiceJson = *(System_String_o **)(v26 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_62409536(VoiceJson, v17, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        confirmVoiceIds = this->fields.confirmVoiceIds;
        ++v21;
        if ( !confirmVoiceIds )
          goto LABEL_30;
      }
      if ( v19 >= LODWORD(v18[1].klass) )
LABEL_31:
        sub_1BCAA44(VoiceJson, v17);
      if ( !*(_QWORD *)v22 )
        break;
      if ( !v13 )
        break;
      v17 = *(System_String_o **)(*(_QWORD *)v22 + 64LL);
      items = v13->fields._items;
      v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v13->fields._version;
      if ( !items )
        break;
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v17,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v17;
        sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v17, v27, v28, v29, v30, v31, v32);
      }
LABEL_28:
      if ( (__int64)++v19 >= SLODWORD(v18[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    }
LABEL_30:
    sub_1BCAA3C(VoiceJson, v17);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_ServantVoiceData____o *VoiceData; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  ServantVoiceData_array *current; // x20
  unsigned __int64 v22; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v24; // x27
  __int64 v25; // x28
  unsigned __int64 max_length; // x9
  System_String_o *v27; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x22
  System_String_o *v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4B16407 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13, v14);
    this = (EventVoicePlayEntity_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15, v16);
    byte_4B16407 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  VoiceData = EventVoicePlayEntity__GetVoiceData(this, svtId, limitCnt, type, method);
  if ( !VoiceData )
    sub_1BCAA3C(0LL, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)VoiceData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v19 )
      break;
    current = (ServantVoiceData_array *)v32.fields._current;
    if ( !v32.fields._current )
      sub_1BCAA3C(v19, v20);
    if ( SLODWORD(v32.fields._current[1].monitor) >= 1 )
    {
      v22 = 0LL;
      do
      {
        voiceIds = v8->fields.voiceIds;
        if ( !voiceIds )
LABEL_25:
          sub_1BCAA3C(v19, v20);
        v24 = 0LL;
        v25 = (__int64)&current->m_Items[v22];
        while ( 1 )
        {
          max_length = voiceIds->max_length;
          if ( (__int64)v24 >= (int)max_length )
            break;
          if ( v22 >= current->max_length )
            sub_1BCAA44(v19, v20);
          if ( !*(_QWORD *)v25 )
            sub_1BCAA3C(v19, v20);
          if ( v24 >= max_length )
            sub_1BCAA44(v19, v20);
          v27 = *(System_String_o **)(*(_QWORD *)v25 + 16LL);
          v28 = voiceIds->m_Items[v24];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v20);
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v28, 0LL);
          if ( !v27 )
            sub_1BCAA3C(v29, v29);
          v19 = System_String__Equals_62409536(v27, v29, 0LL);
          if ( v19 )
            goto LABEL_24;
          voiceIds = v8->fields.voiceIds;
          ++v24;
          if ( !voiceIds )
            goto LABEL_25;
        }
        ++v22;
      }
      while ( (__int64)v22 < (int)current->max_length );
    }
  }
  current = 0LL;
LABEL_24:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  EventVoicePlayEntity_o *v14; // x0
  const MethodInfo *v15; // x4
  System_String_o *VoiceJson; // x0
  System_String_o *v17; // x1
  System_String_o *v18; // x21
  unsigned __int64 v19; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v21; // x27
  __int64 v22; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  __int64 v25; // x8
  __int64 v26; // x8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B16408 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantVoiceData____Add__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11, v12);
    byte_4B16408 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&limitCnt,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = (System_String_o *)EventVoicePlayEntity__GetVoiceJson(v14, svtId, limitCnt, 5, v15);
  if ( !VoiceJson )
    goto LABEL_30;
  v18 = VoiceJson;
  if ( SLODWORD(VoiceJson[1].klass) >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v21 = 0LL;
      v22 = (__int64)(&v18[1].monitor + v19);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v21 >= (int)max_length )
          goto LABEL_28;
        if ( v21 >= max_length )
          goto LABEL_31;
        v24 = voiceIds->m_Items[v21];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v17);
        VoiceJson = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v24, 0LL);
        if ( v19 >= LODWORD(v18[1].klass) )
          goto LABEL_31;
        if ( !*(_QWORD *)v22 )
          goto LABEL_30;
        v25 = *(_QWORD *)(*(_QWORD *)v22 + 64LL);
        if ( !v25 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v25 + 24) )
          goto LABEL_31;
        v26 = *(_QWORD *)(v25 + 32);
        if ( !v26 )
          goto LABEL_30;
        v17 = VoiceJson;
        VoiceJson = *(System_String_o **)(v26 + 16);
        if ( !VoiceJson )
          goto LABEL_30;
        VoiceJson = (System_String_o *)System_String__Equals_62409536(VoiceJson, v17, 0LL);
        if ( ((unsigned __int8)VoiceJson & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v21;
        if ( !voiceIds )
          goto LABEL_30;
      }
      if ( v19 >= LODWORD(v18[1].klass) )
LABEL_31:
        sub_1BCAA44(VoiceJson, v17);
      if ( !*(_QWORD *)v22 )
        break;
      if ( !v13 )
        break;
      v17 = *(System_String_o **)(*(_QWORD *)v22 + 64LL);
      items = v13->fields._items;
      v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v13->fields._version;
      if ( !items )
        break;
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v17,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v17;
        sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v17, v27, v28, v29, v30, v31, v32);
      }
LABEL_28:
      if ( (__int64)++v19 >= SLODWORD(v18[1].klass) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    }
LABEL_30:
    sub_1BCAA3C(VoiceJson, v17);
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
  System_Collections_Generic_List_object__o *v17; // x20
  DataManager_o *Instance; // x0
  System_String_o *v19; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v21; // x4
  DataManager_o *v22; // x21
  unsigned __int64 v23; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v25; // x27
  __int64 v26; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B16409 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16409 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&limitCnt,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                9,
                                v21);
  if ( !Instance )
    goto LABEL_31;
  v22 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v25 = 0LL;
      v26 = (__int64)(&v22->fields._DispLog + 8 * v23);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v25 >= (int)max_length )
          goto LABEL_29;
        if ( v25 >= max_length )
          goto LABEL_32;
        v28 = voiceIds->m_Items[v25];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v28, 0LL);
        if ( v23 >= LODWORD(v22->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v26 )
          goto LABEL_31;
        v29 = *(_QWORD *)(*(_QWORD *)v26 + 64LL);
        if ( !v29 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v29 + 24) )
          goto LABEL_32;
        v30 = *(_QWORD *)(v29 + 32);
        if ( !v30 )
          goto LABEL_31;
        v19 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v30 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_62409536((System_String_o *)Instance, v19, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v25;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v23 >= LODWORD(v22->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1BCAA44(Instance, v19);
      if ( !*(_QWORD *)v26 )
        break;
      if ( !v17 )
        break;
      v19 = *(System_String_o **)(*(_QWORD *)v26 + 64LL);
      items = v17->fields._items;
      v38 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v19,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v19, v31, v32, v33, v34, v35, v36);
      }
LABEL_29:
      if ( (__int64)++v23 >= SLODWORD(v22->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v17;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v19);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v17;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayEntity__GetEventTradeWelcomeVoiceList(
        EventVoicePlayEntity_o *this,
        int32_t svtId,
        int32_t limitCnt,
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
  System_Collections_Generic_List_object__o *v17; // x20
  DataManager_o *Instance; // x0
  System_String_o *v19; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v21; // x4
  DataManager_o *v22; // x21
  unsigned __int64 v23; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *voiceIds; // x8
  unsigned __int64 v25; // x27
  __int64 v26; // x26
  unsigned __int64 max_length; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B1640A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B1640A = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&limitCnt,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)EventVoicePlayEntity__GetVoiceJson(
                                (EventVoicePlayEntity_o *)MasterData_object,
                                svtId,
                                limitCnt,
                                24,
                                v21);
  if ( !Instance )
    goto LABEL_31;
  v22 = Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      voiceIds = this->fields.voiceIds;
      if ( !voiceIds )
        break;
      v25 = 0LL;
      v26 = (__int64)(&v22->fields._DispLog + 8 * v23);
      while ( 1 )
      {
        max_length = voiceIds->max_length;
        if ( (__int64)v25 >= (int)max_length )
          goto LABEL_29;
        if ( v25 >= max_length )
          goto LABEL_32;
        v28 = voiceIds->m_Items[v25];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v28, 0LL);
        if ( v23 >= LODWORD(v22->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        if ( !*(_QWORD *)v26 )
          goto LABEL_31;
        v29 = *(_QWORD *)(*(_QWORD *)v26 + 64LL);
        if ( !v29 )
          goto LABEL_31;
        if ( !*(_DWORD *)(v29 + 24) )
          goto LABEL_32;
        v30 = *(_QWORD *)(v29 + 32);
        if ( !v30 )
          goto LABEL_31;
        v19 = (System_String_o *)Instance;
        Instance = *(DataManager_o **)(v30 + 16);
        if ( !Instance )
          goto LABEL_31;
        Instance = (DataManager_o *)System_String__Equals_62409536((System_String_o *)Instance, v19, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        voiceIds = this->fields.voiceIds;
        ++v25;
        if ( !voiceIds )
          goto LABEL_31;
      }
      if ( v23 >= LODWORD(v22->fields.m_CancellationTokenSource) )
LABEL_32:
        sub_1BCAA44(Instance, v19);
      if ( !*(_QWORD *)v26 )
        break;
      if ( !v17 )
        break;
      v19 = *(System_String_o **)(*(_QWORD *)v26 + 64LL);
      items = v17->fields._items;
      v38 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v19,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v19, v31, v32, v33, v34, v35, v36);
      }
LABEL_29:
      if ( (__int64)++v23 >= SLODWORD(v22->fields.m_CancellationTokenSource) )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v17;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v19);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v17;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  EventVoicePlayEntity_o *v13; // x0
  const MethodInfo *v14; // x4
  SvtVoiceInfo_array *VoiceJson; // x0
  Il2CppObject *p_obj; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int max_length; // w8
  SvtVoiceInfo_array *v24; // x20
  unsigned int v25; // w21
  SvtVoiceInfo_o *v26; // x8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B16406 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantVoiceData____Add__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10, v11);
    byte_4B16406 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&limitCnt,
                                                       *(_QWORD *)&type);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  VoiceJson = EventVoicePlayEntity__GetVoiceJson(v13, svtId, limitCnt, type, v14);
  if ( !VoiceJson )
    goto LABEL_15;
  max_length = VoiceJson->max_length;
  v24 = VoiceJson;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1BCAA44(VoiceJson, p_obj);
      v26 = v24->m_Items[v25];
      if ( !v26 )
        break;
      if ( !v12 )
        break;
      p_obj = &v26->fields.infos->obj;
      items = v12->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          p_obj,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v30[4] = (Il2CppClass *)p_obj;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)p_obj, v17, v18, v19, v20, v21, v22);
      }
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    }
LABEL_15:
    sub_1BCAA3C(VoiceJson, p_obj);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
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
  __int64 v9; // x2
  void *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x22

  if ( (byte_4B16405 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16405 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        Instance = (void *)ServantVoiceMaster__getSvtVoiceId(svtId, 0LL),
        !MasterData_object)
    || (Instance = ServantVoiceMaster__getEntityEventReward(
                     (ServantVoiceMaster_o *)MasterData_object,
                     type,
                     (int32_t)Instance,
                     limitCnt,
                     0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  return (SvtVoiceInfo_array *)*((_QWORD *)Instance + 4);
}