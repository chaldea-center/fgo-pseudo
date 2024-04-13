void __fastcall FollowerSetupRequest___ctor(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowerSetupRequest__GetDeckNameData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  il2cpp_array_size_t v11; // w22
  System_String_o *v12; // x20
  int v13; // w23
  SupportServantData_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  __int64 v18; // x0

  if ( (byte_42EBC2F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)supportServantData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_707/*","*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EBC2F = 1;
  }
  v11 = 0;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v13 = 0;
  while ( 1 )
  {
    v14 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v11 >= SLODWORD(v14[1].fields.oldEquipIdList->m_Items[15]) )
      return v12;
    if ( !supportServantData )
      goto LABEL_17;
    if ( v11 >= supportServantData->max_length )
    {
      v18 = sub_B5D6C8(v14);
      sub_B5D668(v18, 0LL);
    }
    v14 = supportServantData->m_Items[v11];
    if ( !v14 )
LABEL_17:
      sub_B5D69C(v14, supportServantData);
    v15 = SupportServantData__updateNameCheck(v14, 0LL);
    if ( v15 )
    {
      v16 = v15;
      if ( v13 >= 1 )
        v12 = System_String__Concat_44577788(v12, (System_String_o *)StringLiteral_707/*","*/, 0LL);
      v12 = System_String__Concat_44577788(v12, v16, 0LL);
      ++v13;
    }
    ++v11;
  }
}


System_String_o *__fastcall FollowerSetupRequest__GetFollowerData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  unsigned __int64 v11; // x23
  System_String_o *v12; // x20
  BalanceConfig_c *v13; // x0
  int v14; // w24
  int32_t v15; // w21
  BalanceConfig_c **v16; // x27
  System_String_o *v17; // x0
  System_String_o *v18; // x22
  __int64 v20; // x0

  if ( (byte_42EBC2E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)supportServantData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_707/*","*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EBC2E = 1;
  }
  v11 = 0LL;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v13 = BalanceConfig_TypeInfo;
  v14 = 0;
  while ( 1 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v11 >= v13->static_fields->SupportDeckMax )
      return v12;
    v15 = 0;
    v16 = (BalanceConfig_c **)&supportServantData->m_Items[v11];
    while ( 1 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( v15 >= v13->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( v11 >= supportServantData->max_length )
      {
        v20 = sub_B5D6C8(v13);
        sub_B5D668(v20, 0LL);
      }
      v13 = *v16;
      if ( !*v16 )
LABEL_23:
        sub_B5D69C(v13, supportServantData);
      v17 = SupportServantData__updateCheck((SupportServantData_o *)v13, v15, 0LL);
      if ( v17 )
      {
        v18 = v17;
        if ( v14 >= 1 )
          v12 = System_String__Concat_44577788(v12, (System_String_o *)StringLiteral_707/*","*/, 0LL);
        v12 = System_String__Concat_44577788(v12, v18, 0LL);
        ++v14;
      }
      v13 = BalanceConfig_TypeInfo;
      ++v15;
    }
    ++v11;
  }
}


System_Collections_Generic_List_SupportServantData_FollowerData__o *__fastcall FollowerSetupRequest__GetFollowerDataList(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  __int64 v15; // x1
  unsigned __int64 v16; // x22
  _BYTE *FollowerDataIfUpdated; // x0
  int32_t v18; // w21
  void **v19; // x25
  __int64 v21; // x0

  if ( (byte_42EBC2D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)supportServantData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo, v11, v12, v13);
    byte_42EBC2D = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  v16 = 0LL;
  FollowerDataIfUpdated = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v16 >= *(int *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 152LL) )
      return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v14;
    v18 = 0;
    v19 = (void **)&supportServantData->m_Items[v16];
    while ( 1 )
    {
      if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      }
      if ( v18 >= *(_DWORD *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 164LL) )
        break;
      if ( !supportServantData )
        goto LABEL_22;
      if ( v16 >= supportServantData->max_length )
      {
        v21 = sub_B5D6C8(FollowerDataIfUpdated);
        sub_B5D668(v21, 0LL);
      }
      FollowerDataIfUpdated = *v19;
      if ( !*v19 )
LABEL_22:
        sub_B5D69C(FollowerDataIfUpdated, v15);
      FollowerDataIfUpdated = SupportServantData__GetFollowerDataIfUpdated(
                                (SupportServantData_o *)FollowerDataIfUpdated,
                                v18,
                                0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v14 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerDataIfUpdated,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
      }
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      ++v18;
    }
    ++v16;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerSetupRequest__beginRequest(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        int32_t supportDeckId,
        System_Int32_array *fixMainSupportDeckIds,
        System_Int32_array *fixEventSupportDeckIds,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x19
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_String_o *FollowerData; // x0
  const MethodInfo *v39; // x2
  System_String_o *DeckNameData; // x24
  System_String_o *v41; // x22
  System_String_o *v42; // x23
  System_String_o *v43; // x0
  MiniMessagePack_MiniMessagePacker_o *v44; // x21
  FollowerSetupRequest_o *v45; // x0
  const MethodInfo *v46; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v48; // x1
  System_Byte_array *v49; // x20
  System_String_o *v50; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_42EBC30 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)supportServantData, supportDeckId, fixMainSupportDeckIds);
    sub_B5D5C4(&JsonManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22754/*"supportDeckId"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_18986/*"fixEventSupportDeckIds"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18148/*"deckName"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18987/*"fixMainSupportDeckIds"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v32, v33, v34);
    this = (FollowerSetupRequest_o *)sub_B5D5C4(&StringLiteral_19024/*"followerData"*/, v35, v36, v37);
    byte_42EBC30 = 1;
  }
  FollowerData = FollowerSetupRequest__GetFollowerData(this, supportServantData, *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData((FollowerSetupRequest_o *)FollowerData, supportServantData, v39);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v41 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v42 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_22754/*"supportDeckId"*/, supportDeckId, 0LL);
  v43 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_15824/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          0LL);
  RequestBase__addField_32362260(v10, (System_String_o *)StringLiteral_18148/*"deckName"*/, v43, 0LL);
  v44 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v44, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v45, supportServantData, v46);
  if ( !v44 )
    sub_B5D69C(FollowerDataList, v48);
  v49 = MiniMessagePack_MiniMessagePacker__PackClass(v44, FollowerDataList, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v50 = System_Convert__ToBase64String(v49, 0LL);
  RequestBase__addField_32362260(v10, (System_String_o *)StringLiteral_19024/*"followerData"*/, v50, 0LL);
  RequestBase__addField_32362260(v10, (System_String_o *)StringLiteral_18987/*"fixMainSupportDeckIds"*/, v41, 0LL);
  RequestBase__addField_32362260(v10, (System_String_o *)StringLiteral_18986/*"fixEventSupportDeckIds"*/, v42, 0LL);
  RequestBase__beginRequest(v10, 0LL);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBC2C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EBC2C = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EBC2B & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19022/*"follower/setup"*/, v4, v5, v6);
    byte_42EBC2B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19022/*"follower/setup"*/, 0LL);
}


void __fastcall FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42EBC31 & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EBC31 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(51, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}