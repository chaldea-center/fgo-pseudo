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
  System_String_o *v6; // x20
  il2cpp_array_size_t v7; // w22
  int v8; // w23
  SupportServantData_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x21

  if ( (byte_4A4FF09 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, supportServantData);
    sub_1B863B8(&StringLiteral_817/*","*/, v4);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4FF09 = 1;
  }
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v7 >= SLODWORD(v9[1].fields.oldEquipIdList->m_Items[15]) )
      return v6;
    if ( !supportServantData )
      goto LABEL_16;
    if ( v7 >= supportServantData->max_length )
      sub_1B8661C(v9, supportServantData);
    v9 = supportServantData->m_Items[v7];
    if ( !v9 )
LABEL_16:
      sub_1B86614(v9, supportServantData);
    v10 = SupportServantData__updateNameCheck(v9, 0LL);
    if ( v10 )
    {
      v11 = v10;
      if ( v8 >= 1 )
        v6 = System_String__Concat_61645176(v6, (System_String_o *)StringLiteral_817/*","*/, 0LL);
      v6 = System_String__Concat_61645176(v6, v11, 0LL);
      ++v8;
    }
    ++v7;
  }
}


System_String_o *__fastcall FollowerSetupRequest__GetFollowerData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x20
  BalanceConfig_c *v7; // x0
  unsigned __int64 v8; // x24
  int v9; // w25
  int32_t v10; // w21
  BalanceConfig_c **v11; // x27
  System_String_o *v12; // x0
  System_String_o *v13; // x22

  if ( (byte_4A4FF08 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, supportServantData);
    sub_1B863B8(&StringLiteral_817/*","*/, v4);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4FF08 = 1;
  }
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = BalanceConfig_TypeInfo;
  v8 = 0LL;
  v9 = 0;
  while ( 1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v8 >= v7->static_fields->SupportDeckMax )
      return v6;
    v10 = 0;
    v11 = (BalanceConfig_c **)&supportServantData->m_Items[v8];
    while ( 1 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( v10 >= v7->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_21;
      if ( v8 >= supportServantData->max_length )
        sub_1B8661C(v7, supportServantData);
      v7 = *v11;
      if ( !*v11 )
LABEL_21:
        sub_1B86614(v7, supportServantData);
      v12 = SupportServantData__updateCheck((SupportServantData_o *)v7, v10, 0LL);
      if ( v12 )
      {
        v13 = v12;
        if ( v9 >= 1 )
          v6 = System_String__Concat_61645176(v6, (System_String_o *)StringLiteral_817/*","*/, 0LL);
        v6 = System_String__Concat_61645176(v6, v13, 0LL);
        ++v9;
      }
      v7 = BalanceConfig_TypeInfo;
      ++v10;
    }
    ++v8;
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
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  SupportServantData_o *FollowerDataIfUpdated; // x0
  unsigned __int64 i; // x24
  int32_t v11; // w21
  void **v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  SupportServantData_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4A4FF07 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, supportServantData);
    sub_1B863B8(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo, v6);
    byte_4A4FF07 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SLODWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[15]) )
      break;
    v11 = 0;
    v12 = (void **)&supportServantData->m_Items[i];
    while ( 1 )
    {
      if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( v11 >= SHIDWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[16]) )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( i >= supportServantData->max_length )
        sub_1B8661C(FollowerDataIfUpdated, v8);
      FollowerDataIfUpdated = (SupportServantData_o *)*v12;
      if ( !*v12 )
LABEL_23:
        sub_1B86614(FollowerDataIfUpdated, v8);
      FollowerDataIfUpdated = (SupportServantData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                        FollowerDataIfUpdated,
                                                        v11,
                                                        0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v7 )
          goto LABEL_23;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v7->fields._size;
        v18 = FollowerDataIfUpdated;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)FollowerDataIfUpdated,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1B8635C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
        }
      }
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      ++v11;
    }
  }
  return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v7;
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
  FollowerSetupRequest_o *FollowerData; // x0
  const MethodInfo *v21; // x2
  System_String_o *DeckNameData; // x24
  System_String_o *v23; // x23
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  MiniMessagePack_MiniMessagePacker_o *v26; // x21
  FollowerSetupRequest_o *v27; // x0
  const MethodInfo *v28; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v30; // x1
  System_Byte_array *v31; // x20
  System_String_o *v32; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_4A4FF0A & 1) == 0 )
  {
    sub_1B863B8(&System_Convert_TypeInfo, supportServantData);
    sub_1B863B8(&JsonManager_TypeInfo, v11);
    sub_1B863B8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_23529/*"supportDeckId"*/, v13);
    sub_1B863B8(&StringLiteral_19226/*"fixEventSupportDeckIds"*/, v14);
    sub_1B863B8(&StringLiteral_18296/*"deckName"*/, v15);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v16);
    sub_1B863B8(&StringLiteral_19227/*"fixMainSupportDeckIds"*/, v17);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v18);
    this = (FollowerSetupRequest_o *)sub_1B863B8(&StringLiteral_19290/*"followerData"*/, v19);
    byte_4A4FF0A = 1;
  }
  FollowerData = (FollowerSetupRequest_o *)FollowerSetupRequest__GetFollowerData(
                                             this,
                                             supportServantData,
                                             *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData(FollowerData, supportServantData, v21);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v23 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v24 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23529/*"supportDeckId"*/, supportDeckId, 0LL);
  v25 = System_String__Concat_61683424(
          (System_String_o *)StringLiteral_15580/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_15836/*"]"*/,
          0LL);
  RequestBase__addField_42282000(v10, (System_String_o *)StringLiteral_18296/*"deckName"*/, v25, 0LL);
  v26 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B86604(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v26, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v27, supportServantData, v28);
  if ( !v26 )
    sub_1B86614(FollowerDataList, v30);
  v31 = MiniMessagePack_MiniMessagePacker__PackClass(v26, FollowerDataList, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v32 = System_Convert__ToBase64String(v31, 0LL);
  RequestBase__addField_42282000(v10, (System_String_o *)StringLiteral_19290/*"followerData"*/, v32, 0LL);
  RequestBase__addField_42282000(v10, (System_String_o *)StringLiteral_19227/*"fixMainSupportDeckIds"*/, v23, 0LL);
  RequestBase__addField_42282000(v10, (System_String_o *)StringLiteral_19226/*"fixEventSupportDeckIds"*/, v24, 0LL);
  RequestBase__beginRequest(v10, 0LL);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A4FF06 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4FF06 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FF05 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_19287/*"follower/setup"*/, v2);
    byte_4A4FF05 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_19287/*"follower/setup"*/, 0LL);
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

  if ( (byte_4A4FF0B & 1) == 0 )
  {
    sub_1B863B8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4FF0B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(51, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42282948(v7, 0LL) )
    v8 = &StringLiteral_22061/*"ok"*/;
  else
    v8 = &StringLiteral_21893/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}