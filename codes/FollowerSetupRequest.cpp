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
  BalanceConfig_c *v12; // x0

  if ( (byte_40FA74C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, supportServantData);
    sub_B16FFC(&StringLiteral_698, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FA74C = 1;
  }
  v6 = 0;
  v7 = (System_String_o *)StringLiteral_1;
  v8 = 0;
  while ( 1 )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v6 >= v12->static_fields->SupportDeckMax )
      return v7;
    if ( !supportServantData )
      goto LABEL_17;
    if ( v6 >= supportServantData->max_length )
    {
      sub_B17100(v12, supportServantData, method);
      sub_B170A0();
    }
    v9 = supportServantData->m_Items[v6];
    if ( !v9 )
LABEL_17:
      sub_B170D4();
    v10 = SupportServantData__updateNameCheck(v9, 0LL);
    if ( v10 )
    {
      v11 = v10;
      if ( v8 >= 1 )
        v7 = System_String__Concat_43743732(v7, (System_String_o *)StringLiteral_698, 0LL);
      v7 = System_String__Concat_43743732(v7, v11, 0LL);
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
  SupportServantData_o **v11; // x27
  System_String_o *v12; // x0
  System_String_o *v13; // x22

  if ( (byte_40FA74B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, supportServantData);
    sub_B16FFC(&StringLiteral_698, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FA74B = 1;
  }
  v6 = 0LL;
  v7 = (System_String_o *)StringLiteral_1;
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
    v11 = &supportServantData->m_Items[v6];
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
        sub_B17100(v8, supportServantData, method);
        sub_B170A0();
      }
      if ( !*v11 )
LABEL_23:
        sub_B170D4();
      v12 = SupportServantData__updateCheck(*v11, v10, 0LL);
      if ( v12 )
      {
        v13 = v12;
        if ( v9 >= 1 )
          v7 = System_String__Concat_43743732(v7, (System_String_o *)StringLiteral_698, 0LL);
        v7 = System_String__Concat_43743732(v7, v13, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  unsigned __int64 v12; // x22
  BalanceConfig_c *v13; // x0
  int32_t v14; // w21
  SupportServantData_o **v15; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *FollowerDataIfUpdated; // x0

  if ( (byte_40FA74A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, supportServantData);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo, v8);
    byte_40FA74A = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo,
                                                                                                 supportServantData,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  v12 = 0LL;
  v13 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= v13->static_fields->SupportDeckMax )
      return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v9;
    v14 = 0;
    v15 = &supportServantData->m_Items[v12];
    while ( 1 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( v14 >= v13->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_22;
      if ( v12 >= supportServantData->max_length )
      {
        sub_B17100(v13, v10, v11);
        sub_B170A0();
      }
      if ( !*v15 )
LABEL_22:
        sub_B170D4();
      FollowerDataIfUpdated = (EventMissionProgressRequest_Argument_ProgressData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                                                       *v15,
                                                                                       v14,
                                                                                       0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v9 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          FollowerDataIfUpdated,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
      }
      v13 = BalanceConfig_TypeInfo;
      ++v14;
    }
    ++v12;
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
  __int64 v28; // x3
  __int64 v29; // x4
  MiniMessagePack_MiniMessagePacker_o *v30; // x21
  FollowerSetupRequest_o *v31; // x0
  const MethodInfo *v32; // x2
  Il2CppObject *FollowerDataList; // x0
  System_Byte_array *v34; // x20
  System_String_o *v35; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_40FA74D & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, supportServantData);
    sub_B16FFC(&JsonManager_TypeInfo, v11);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_22358, v13);
    sub_B16FFC(&StringLiteral_18678, v14);
    sub_B16FFC(&StringLiteral_17858, v15);
    sub_B16FFC(&StringLiteral_15571, v16);
    sub_B16FFC(&StringLiteral_18679, v17);
    sub_B16FFC(&StringLiteral_15807, v18);
    this = (FollowerSetupRequest_o *)sub_B16FFC(&StringLiteral_18716, v19);
    byte_40FA74D = 1;
  }
  FollowerData = FollowerSetupRequest__GetFollowerData(this, supportServantData, *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData((FollowerSetupRequest_o *)FollowerData, supportServantData, v21);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v23 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v24 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_22358, supportDeckId, 0LL);
  v25 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_15571,
          DeckNameData,
          (System_String_o *)StringLiteral_15807,
          0LL);
  RequestBase__addField_30957164(v10, (System_String_o *)StringLiteral_17858, v25, 0LL);
  v30 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 v26,
                                                 v27,
                                                 v28,
                                                 v29);
  MiniMessagePack_MiniMessagePacker___ctor(v30, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v31, supportServantData, v32);
  if ( !v30 )
    sub_B170D4();
  v34 = MiniMessagePack_MiniMessagePacker__PackClass(v30, FollowerDataList, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v35 = System_Convert__ToBase64String(v34, 0LL);
  RequestBase__addField_30957164(v10, (System_String_o *)StringLiteral_18716, v35, 0LL);
  RequestBase__addField_30957164(v10, (System_String_o *)StringLiteral_18679, v23, 0LL);
  RequestBase__addField_30957164(v10, (System_String_o *)StringLiteral_18678, v24, 0LL);
  RequestBase__beginRequest(v10, 0LL);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_40FA749 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FA749 = 1;
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FA748 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18714, v2);
    byte_40FA748 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18714, 0LL);
}


void __fastcall FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40FA74E & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40FA74E = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129;
  else
    v8 = (System_String_o **)&StringLiteral_20980;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}