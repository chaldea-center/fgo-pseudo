void __fastcall FollowerSetupRequest___ctor(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowerSetupRequest__GetDeckNameData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  il2cpp_array_size_t v6; // w22
  System_String_o *v7; // x20
  int v8; // w23
  SupportServantData_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x21
  __int64 v13; // x0

  if ( (byte_42175CA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, supportServantData);
    sub_B0D8A4(&StringLiteral_705/*","*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_42175CA = 1;
  }
  v6 = 0;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  v8 = 0;
  while ( 1 )
  {
    v9 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v6 >= SLODWORD(v9[1].fields.oldEquipIdList->m_Items[15]) )
      return v7;
    if ( !supportServantData )
      goto LABEL_17;
    if ( v6 >= supportServantData->max_length )
    {
      v13 = sub_B0D9A8(v9);
      sub_B0D948(v13, 0LL);
    }
    v9 = supportServantData->m_Items[v6];
    if ( !v9 )
LABEL_17:
      sub_B0D97C(v9);
    v10 = SupportServantData__updateNameCheck(v9, 0LL);
    if ( v10 )
    {
      v11 = v10;
      if ( v8 >= 1 )
        v7 = System_String__Concat_43849904(v7, (System_String_o *)StringLiteral_705/*","*/, 0LL);
      v7 = System_String__Concat_43849904(v7, v11, 0LL);
      ++v8;
    }
    ++v6;
  }
}


System_String_o *__fastcall FollowerSetupRequest__GetFollowerData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned __int64 v6; // x23
  System_String_o *v7; // x20
  BalanceConfig_c *v8; // x0
  int v9; // w24
  int32_t v10; // w21
  BalanceConfig_c **v11; // x27
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  __int64 v15; // x0

  if ( (byte_42175C9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, supportServantData);
    sub_B0D8A4(&StringLiteral_705/*","*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_42175C9 = 1;
  }
  v6 = 0LL;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  v8 = BalanceConfig_TypeInfo;
  v9 = 0;
  while ( 1 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= v8->static_fields->SupportDeckMax )
      return v7;
    v10 = 0;
    v11 = (BalanceConfig_c **)&supportServantData->m_Items[v6];
    while ( 1 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = BalanceConfig_TypeInfo;
      }
      if ( v10 >= v8->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( v6 >= supportServantData->max_length )
      {
        v15 = sub_B0D9A8(v8);
        sub_B0D948(v15, 0LL);
      }
      v8 = *v11;
      if ( !*v11 )
LABEL_23:
        sub_B0D97C(v8);
      v12 = SupportServantData__updateCheck((SupportServantData_o *)v8, v10, 0LL);
      if ( v12 )
      {
        v13 = v12;
        if ( v9 >= 1 )
          v7 = System_String__Concat_43849904(v7, (System_String_o *)StringLiteral_705/*","*/, 0LL);
        v7 = System_String__Concat_43849904(v7, v13, 0LL);
        ++v9;
      }
      v8 = BalanceConfig_TypeInfo;
      ++v10;
    }
    ++v6;
  }
}


System_Collections_Generic_List_SupportServantData_FollowerData__o *__fastcall FollowerSetupRequest__GetFollowerDataList(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  unsigned __int64 v8; // x22
  _BYTE *FollowerDataIfUpdated; // x0
  int32_t v10; // w21
  void **v11; // x25
  __int64 v13; // x0

  if ( (byte_42175C8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, supportServantData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo, v6);
    byte_42175C8 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo,
                                                                                                 supportServantData,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  v8 = 0LL;
  FollowerDataIfUpdated = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v8 >= *(int *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 152LL) )
      return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v7;
    v10 = 0;
    v11 = (void **)&supportServantData->m_Items[v8];
    while ( 1 )
    {
      if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      }
      if ( v10 >= *(_DWORD *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 164LL) )
        break;
      if ( !supportServantData )
        goto LABEL_22;
      if ( v8 >= supportServantData->max_length )
      {
        v13 = sub_B0D9A8(FollowerDataIfUpdated);
        sub_B0D948(v13, 0LL);
      }
      FollowerDataIfUpdated = *v11;
      if ( !*v11 )
LABEL_22:
        sub_B0D97C(FollowerDataIfUpdated);
      FollowerDataIfUpdated = SupportServantData__GetFollowerDataIfUpdated(
                                (SupportServantData_o *)FollowerDataIfUpdated,
                                v10,
                                0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v7 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerDataIfUpdated,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
      }
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      ++v10;
    }
    ++v8;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o *FollowerData; // x0
  const MethodInfo *v21; // x2
  System_String_o *DeckNameData; // x24
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  MiniMessagePack_MiniMessagePacker_o *v28; // x21
  FollowerSetupRequest_o *v29; // x0
  const MethodInfo *v30; // x2
  Il2CppObject *FollowerDataList; // x0
  System_Byte_array *v32; // x20
  System_String_o *v33; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_42175CB & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, supportServantData);
    sub_B0D8A4(&JsonManager_TypeInfo, v11);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_22526/*"supportDeckId"*/, v13);
    sub_B0D8A4(&StringLiteral_18808/*"fixEventSupportDeckIds"*/, v14);
    sub_B0D8A4(&StringLiteral_17982/*"deckName"*/, v15);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v16);
    sub_B0D8A4(&StringLiteral_18809/*"fixMainSupportDeckIds"*/, v17);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v18);
    this = (FollowerSetupRequest_o *)sub_B0D8A4(&StringLiteral_18846/*"followerData"*/, v19);
    byte_42175CB = 1;
  }
  FollowerData = FollowerSetupRequest__GetFollowerData(this, supportServantData, *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData((FollowerSetupRequest_o *)FollowerData, supportServantData, v21);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v23 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v24 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_22526/*"supportDeckId"*/, supportDeckId, 0LL);
  v25 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_15681/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_15917/*"]"*/,
          0LL);
  RequestBase__addField_30435648(v10, (System_String_o *)StringLiteral_17982/*"deckName"*/, v25, 0LL);
  v28 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v26, v27);
  MiniMessagePack_MiniMessagePacker___ctor(v28, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v29, supportServantData, v30);
  if ( !v28 )
    sub_B0D97C(FollowerDataList);
  v32 = MiniMessagePack_MiniMessagePacker__PackClass(v28, FollowerDataList, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v33 = System_Convert__ToBase64String(v32, 0LL);
  RequestBase__addField_30435648(v10, (System_String_o *)StringLiteral_18846/*"followerData"*/, v33, 0LL);
  RequestBase__addField_30435648(v10, (System_String_o *)StringLiteral_18809/*"fixMainSupportDeckIds"*/, v23, 0LL);
  RequestBase__addField_30435648(v10, (System_String_o *)StringLiteral_18808/*"fixEventSupportDeckIds"*/, v24, 0LL);
  RequestBase__beginRequest(v10, 0LL);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42175C7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42175C7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_42175C6 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18844/*"follower/setup"*/, v2);
    byte_42175C6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_18844/*"follower/setup"*/, 0LL);
}


void __fastcall FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_42175CC & 1) == 0 )
  {
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, responseList);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_42175CC = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30403444(v7, 0LL) )
    v8 = &StringLiteral_21287/*"ok"*/;
  else
    v8 = &StringLiteral_21137/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}