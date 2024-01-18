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

  if ( (byte_418AA8B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, supportServantData);
    sub_B2C35C(&StringLiteral_699/*","*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AA8B = 1;
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
      v13 = sub_B2C460(v9);
      sub_B2C400(v13, 0LL);
    }
    v9 = supportServantData->m_Items[v6];
    if ( !v9 )
LABEL_17:
      sub_B2C434(v9, supportServantData);
    v10 = SupportServantData__updateNameCheck(v9, 0LL);
    if ( v10 )
    {
      v11 = v10;
      if ( v8 >= 1 )
        v7 = System_String__Concat_44305532(v7, (System_String_o *)StringLiteral_699/*","*/, 0LL);
      v7 = System_String__Concat_44305532(v7, v11, 0LL);
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

  if ( (byte_418AA8A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, supportServantData);
    sub_B2C35C(&StringLiteral_699/*","*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AA8A = 1;
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
        v15 = sub_B2C460(v8);
        sub_B2C400(v15, 0LL);
      }
      v8 = *v11;
      if ( !*v11 )
LABEL_23:
        sub_B2C434(v8, supportServantData);
      v12 = SupportServantData__updateCheck((SupportServantData_o *)v8, v10, 0LL);
      if ( v12 )
      {
        v13 = v12;
        if ( v9 >= 1 )
          v7 = System_String__Concat_44305532(v7, (System_String_o *)StringLiteral_699/*","*/, 0LL);
        v7 = System_String__Concat_44305532(v7, v13, 0LL);
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
  __int64 v8; // x1
  unsigned __int64 v9; // x22
  _BYTE *FollowerDataIfUpdated; // x0
  int32_t v11; // w21
  void **v12; // x25
  __int64 v14; // x0

  if ( (byte_418AA89 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, supportServantData);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo, v6);
    byte_418AA89 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  v9 = 0LL;
  FollowerDataIfUpdated = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= *(int *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 152LL) )
      return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v7;
    v11 = 0;
    v12 = (void **)&supportServantData->m_Items[v9];
    while ( 1 )
    {
      if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      }
      if ( v11 >= *(_DWORD *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 164LL) )
        break;
      if ( !supportServantData )
        goto LABEL_22;
      if ( v9 >= supportServantData->max_length )
      {
        v14 = sub_B2C460(FollowerDataIfUpdated);
        sub_B2C400(v14, 0LL);
      }
      FollowerDataIfUpdated = *v12;
      if ( !*v12 )
LABEL_22:
        sub_B2C434(FollowerDataIfUpdated, v8);
      FollowerDataIfUpdated = SupportServantData__GetFollowerDataIfUpdated(
                                (SupportServantData_o *)FollowerDataIfUpdated,
                                v11,
                                0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v7 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerDataIfUpdated,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
      }
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      ++v11;
    }
    ++v9;
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
  MiniMessagePack_MiniMessagePacker_o *v26; // x21
  FollowerSetupRequest_o *v27; // x0
  const MethodInfo *v28; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v30; // x1
  System_Byte_array *v31; // x20
  System_String_o *v32; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_418AA8C & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, supportServantData);
    sub_B2C35C(&JsonManager_TypeInfo, v11);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_22450/*"supportDeckId"*/, v13);
    sub_B2C35C(&StringLiteral_18750/*"fixEventSupportDeckIds"*/, v14);
    sub_B2C35C(&StringLiteral_17926/*"deckName"*/, v15);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v16);
    sub_B2C35C(&StringLiteral_18751/*"fixMainSupportDeckIds"*/, v17);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v18);
    this = (FollowerSetupRequest_o *)sub_B2C35C(&StringLiteral_18788/*"followerData"*/, v19);
    byte_418AA8C = 1;
  }
  FollowerData = FollowerSetupRequest__GetFollowerData(this, supportServantData, *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData((FollowerSetupRequest_o *)FollowerData, supportServantData, v21);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v23 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v24 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_22450/*"supportDeckId"*/, supportDeckId, 0LL);
  v25 = System_String__Concat_44307816(
          (System_String_o *)StringLiteral_15634/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          0LL);
  RequestBase__addField_31051928(v10, (System_String_o *)StringLiteral_17926/*"deckName"*/, v25, 0LL);
  v26 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v26, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v27, supportServantData, v28);
  if ( !v26 )
    sub_B2C434(FollowerDataList, v30);
  v31 = MiniMessagePack_MiniMessagePacker__PackClass(v26, FollowerDataList, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v32 = System_Convert__ToBase64String(v31, 0LL);
  RequestBase__addField_31051928(v10, (System_String_o *)StringLiteral_18788/*"followerData"*/, v32, 0LL);
  RequestBase__addField_31051928(v10, (System_String_o *)StringLiteral_18751/*"fixMainSupportDeckIds"*/, v23, 0LL);
  RequestBase__addField_31051928(v10, (System_String_o *)StringLiteral_18750/*"fixEventSupportDeckIds"*/, v24, 0LL);
  RequestBase__beginRequest(v10, 0LL);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_418AA88 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418AA88 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418AA87 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18786/*"follower/setup"*/, v2);
    byte_418AA87 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18786/*"follower/setup"*/, 0LL);
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

  if ( (byte_418AA8D & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418AA8D = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}