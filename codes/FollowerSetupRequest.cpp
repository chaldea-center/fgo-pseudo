void __fastcall FollowerSetupRequest___ctor(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowerSetupRequest__GetDeckNameData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  il2cpp_array_size_t v4; // w22
  System_String_o *v5; // x20
  int v6; // w23
  SupportServantData_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  __int64 v11; // x0

  if ( (byte_43553C6 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&StringLiteral_712/*","*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43553C6 = 1;
  }
  v4 = 0;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v6 = 0;
  while ( 1 )
  {
    v7 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= SLODWORD(v7[1].fields.oldEquipIdList->m_Items[15]) )
      return v5;
    if ( !supportServantData )
      goto LABEL_17;
    if ( v4 >= supportServantData->max_length )
    {
      v11 = sub_B70798(v7);
      sub_B70738(v11, 0LL);
    }
    v7 = supportServantData->m_Items[v4];
    if ( !v7 )
LABEL_17:
      sub_B7076C(v7, supportServantData);
    v8 = SupportServantData__updateNameCheck(v7, 0LL);
    if ( v8 )
    {
      v9 = v8;
      if ( v6 >= 1 )
        v5 = System_String__Concat_44758168(v5, (System_String_o *)StringLiteral_712/*","*/, 0LL);
      v5 = System_String__Concat_44758168(v5, v9, 0LL);
      ++v6;
    }
    ++v4;
  }
}


System_String_o *__fastcall FollowerSetupRequest__GetFollowerData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  unsigned __int64 v4; // x23
  System_String_o *v5; // x20
  BalanceConfig_c *v6; // x0
  int v7; // w24
  int32_t v8; // w21
  BalanceConfig_c **v9; // x27
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  __int64 v13; // x0

  if ( (byte_43553C5 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&StringLiteral_712/*","*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43553C5 = 1;
  }
  v4 = 0LL;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v6 = BalanceConfig_TypeInfo;
  v7 = 0;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v6->static_fields->SupportDeckMax )
      return v5;
    v8 = 0;
    v9 = (BalanceConfig_c **)&supportServantData->m_Items[v4];
    while ( 1 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( v8 >= v6->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( v4 >= supportServantData->max_length )
      {
        v13 = sub_B70798(v6);
        sub_B70738(v13, 0LL);
      }
      v6 = *v9;
      if ( !*v9 )
LABEL_23:
        sub_B7076C(v6, supportServantData);
      v10 = SupportServantData__updateCheck((SupportServantData_o *)v6, v8, 0LL);
      if ( v10 )
      {
        v11 = v10;
        if ( v7 >= 1 )
          v5 = System_String__Concat_44758168(v5, (System_String_o *)StringLiteral_712/*","*/, 0LL);
        v5 = System_String__Concat_44758168(v5, v11, 0LL);
        ++v7;
      }
      v6 = BalanceConfig_TypeInfo;
      ++v8;
    }
    ++v4;
  }
}


System_Collections_Generic_List_SupportServantData_FollowerData__o *__fastcall FollowerSetupRequest__GetFollowerDataList(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x1
  unsigned __int64 v6; // x22
  _BYTE *FollowerDataIfUpdated; // x0
  int32_t v8; // w21
  void **v9; // x25
  __int64 v11; // x0

  if ( (byte_43553C4 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
    sub_B70694(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
    byte_43553C4 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  v6 = 0LL;
  FollowerDataIfUpdated = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= *(int *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 152LL) )
      return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v4;
    v8 = 0;
    v9 = (void **)&supportServantData->m_Items[v6];
    while ( 1 )
    {
      if ( (FollowerDataIfUpdated[307] & 4) != 0 && !*((_DWORD *)FollowerDataIfUpdated + 56) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      }
      if ( v8 >= *(_DWORD *)(*((_QWORD *)FollowerDataIfUpdated + 23) + 164LL) )
        break;
      if ( !supportServantData )
        goto LABEL_22;
      if ( v6 >= supportServantData->max_length )
      {
        v11 = sub_B70798(FollowerDataIfUpdated);
        sub_B70738(v11, 0LL);
      }
      FollowerDataIfUpdated = *v9;
      if ( !*v9 )
LABEL_22:
        sub_B7076C(FollowerDataIfUpdated, v5);
      FollowerDataIfUpdated = SupportServantData__GetFollowerDataIfUpdated(
                                (SupportServantData_o *)FollowerDataIfUpdated,
                                v8,
                                0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v4 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v4,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerDataIfUpdated,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
      }
      FollowerDataIfUpdated = BalanceConfig_TypeInfo;
      ++v8;
    }
    ++v6;
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
  System_String_o *FollowerData; // x0
  const MethodInfo *v12; // x2
  System_String_o *DeckNameData; // x24
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  MiniMessagePack_MiniMessagePacker_o *v17; // x21
  FollowerSetupRequest_o *v18; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v21; // x1
  System_Byte_array *v22; // x20
  System_String_o *v23; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_43553C7 & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B70694(&StringLiteral_22825/*"supportDeckId"*/);
    sub_B70694(&StringLiteral_19038/*"fixEventSupportDeckIds"*/);
    sub_B70694(&StringLiteral_18195/*"deckName"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_19039/*"fixMainSupportDeckIds"*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    this = (FollowerSetupRequest_o *)sub_B70694(&StringLiteral_19076/*"followerData"*/);
    byte_43553C7 = 1;
  }
  FollowerData = FollowerSetupRequest__GetFollowerData(this, supportServantData, *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData((FollowerSetupRequest_o *)FollowerData, supportServantData, v12);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v15 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_22825/*"supportDeckId"*/, supportDeckId, 0LL);
  v16 = System_String__Concat_44760452(
          (System_String_o *)StringLiteral_15855/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16092/*"]"*/,
          0LL);
  RequestBase__addField_32336576(v10, (System_String_o *)StringLiteral_18195/*"deckName"*/, v16, 0LL);
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v18, supportServantData, v19);
  if ( !v17 )
    sub_B7076C(FollowerDataList, v21);
  v22 = MiniMessagePack_MiniMessagePacker__PackClass(v17, FollowerDataList, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v23 = System_Convert__ToBase64String(v22, 0LL);
  RequestBase__addField_32336576(v10, (System_String_o *)StringLiteral_19076/*"followerData"*/, v23, 0LL);
  RequestBase__addField_32336576(v10, (System_String_o *)StringLiteral_19039/*"fixMainSupportDeckIds"*/, v14, 0LL);
  RequestBase__addField_32336576(v10, (System_String_o *)StringLiteral_19038/*"fixEventSupportDeckIds"*/, v15, 0LL);
  RequestBase__beginRequest(v10, 0LL);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_43553C3 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43553C3 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_43553C2 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_19074/*"follower/setup"*/);
    byte_43553C2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_19074/*"follower/setup"*/, 0LL);
}


void __fastcall FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_43553C8 & 1) == 0 )
  {
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_43553C8 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(51, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29653500(v5, 0LL) )
    v6 = &StringLiteral_21560/*"ok"*/;
  else
    v6 = &StringLiteral_21408/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}