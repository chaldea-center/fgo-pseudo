System_String_o *FollowerSetupRequest__GetDeckNameData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  unsigned int v5; // w22
  int v6; // w23
  SupportServantData_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x21

  if ( (byte_4CC8F78 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&StringLiteral_808/*","*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8F78 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v5 >= SLODWORD(v7[1].fields.oldEquipIdList->m_Items[17]) )
      return v4;
    if ( !supportServantData )
      goto LABEL_16;
    if ( v5 >= LODWORD(supportServantData->max_length) )
      sub_1C71610(v7);
    v7 = supportServantData->m_Items[v5];
    if ( !v7 )
LABEL_16:
      sub_1C71608(v7, supportServantData);
    v8 = SupportServantData__updateNameCheck(v7, 0);
    if ( v8 )
    {
      v9 = v8;
      if ( v6 >= 1 )
        v4 = System_String__Concat_64031724(v4, (System_String_o *)StringLiteral_808/*","*/, 0);
      v4 = System_String__Concat_64031724(v4, v9, 0);
      ++v6;
    }
    ++v5;
  }
}


System_String_o *FollowerSetupRequest__GetFollowerData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  BalanceConfig_c *v5; // x0
  unsigned __int64 v6; // x24
  int v7; // w25
  int32_t v8; // w21
  BalanceConfig_c **v9; // x27
  System_String_o *v10; // x0
  System_String_o *v11; // x22

  if ( (byte_4CC8F77 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&StringLiteral_808/*","*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8F77 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  v5 = BalanceConfig_TypeInfo;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= v5->static_fields->SupportDeckMax )
      return v4;
    v8 = 0;
    v9 = (BalanceConfig_c **)&supportServantData->m_Items[v6];
    while ( 1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = BalanceConfig_TypeInfo;
      }
      if ( v8 >= v5->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_21;
      if ( v6 >= LODWORD(supportServantData->max_length) )
        sub_1C71610(v5);
      v5 = *v9;
      if ( !*v9 )
LABEL_21:
        sub_1C71608(v5, supportServantData);
      v10 = SupportServantData__updateCheck((SupportServantData_o *)v5, v8, 0);
      if ( v10 )
      {
        v11 = v10;
        if ( v7 >= 1 )
          v4 = System_String__Concat_64031724(v4, (System_String_o *)StringLiteral_808/*","*/, 0);
        v4 = System_String__Concat_64031724(v4, v11, 0);
        ++v7;
      }
      v5 = BalanceConfig_TypeInfo;
      ++v8;
    }
    ++v6;
  }
}


System_Collections_Generic_List_SupportServantData_FollowerData__o *FollowerSetupRequest__GetFollowerDataList(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  SupportServantData_o *FollowerDataIfUpdated; // x0
  unsigned __int64 i; // x24
  int32_t v8; // w21
  void **v9; // x25
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  SupportServantData_o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4CC8F76 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
    byte_4CC8F76 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SLODWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[17]) )
      break;
    v8 = 0;
    v9 = (void **)&supportServantData->m_Items[i];
    while ( 1 )
    {
      if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( v8 >= SHIDWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[18]) )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( i >= LODWORD(supportServantData->max_length) )
        sub_1C71610(FollowerDataIfUpdated);
      FollowerDataIfUpdated = (SupportServantData_o *)*v9;
      if ( !*v9 )
LABEL_23:
        sub_1C71608(FollowerDataIfUpdated, v5);
      FollowerDataIfUpdated = (SupportServantData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                        FollowerDataIfUpdated,
                                                        v8,
                                                        0);
      if ( FollowerDataIfUpdated )
      {
        if ( !v4 )
          goto LABEL_23;
        items = v4->fields._items;
        v17 = Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__;
        ++v4->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v4->fields._size;
        v19 = FollowerDataIfUpdated;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            (Il2CppObject *)FollowerDataIfUpdated,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
        }
      }
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      ++v8;
    }
  }
  return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v4;
}


// local variable allocation has failed, the output may be wrong!
bool FollowerSetupRequest__beginRequest(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        int32_t supportDeckId,
        System_Int32_array *fixMainSupportDeckIds,
        System_Int32_array *fixEventSupportDeckIds,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x19
  FollowerSetupRequest_o *FollowerData; // x0
  const MethodInfo *v12; // x2
  System_String_o *DeckNameData; // x24
  System_String_o *v14; // x23
  System_String_o *v15; // x22
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3
  MiniMessagePack_MiniMessagePacker_o *v19; // x21
  FollowerSetupRequest_o *v20; // x0
  const MethodInfo *v21; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v23; // x1
  System_Byte_array *v24; // x20
  System_String_o *v25; // x0
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_4CC8F79 & 1) == 0 )
  {
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C713B0(&StringLiteral_23963/*"supportDeckId"*/);
    sub_1C713B0(&StringLiteral_19535/*"fixEventSupportDeckIds"*/);
    sub_1C713B0(&StringLiteral_18566/*"deckName"*/);
    sub_1C713B0(&StringLiteral_15808/*"["*/);
    sub_1C713B0(&StringLiteral_19536/*"fixMainSupportDeckIds"*/);
    sub_1C713B0(&StringLiteral_16058/*"]"*/);
    this = (FollowerSetupRequest_o *)sub_1C713B0(&StringLiteral_19601/*"followerData"*/);
    byte_4CC8F79 = 1;
  }
  FollowerData = (FollowerSetupRequest_o *)FollowerSetupRequest__GetFollowerData(
                                             this,
                                             supportServantData,
                                             *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData(FollowerData, supportServantData, v12);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0);
  v15 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23963/*"supportDeckId"*/, supportDeckId, v16);
  v17 = System_String__Concat_64069988(
          (System_String_o *)StringLiteral_15808/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16058/*"]"*/,
          0);
  RequestBase__addField_44518324(v10, (System_String_o *)StringLiteral_18566/*"deckName"*/, v17, v18);
  v19 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C715FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v19, 0);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v20, supportServantData, v21);
  if ( !v19 )
    sub_1C71608(FollowerDataList, v23);
  v24 = MiniMessagePack_MiniMessagePacker__PackClass(v19, FollowerDataList, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v25 = System_Convert__ToBase64String(v24, 0);
  RequestBase__addField_44518324(v10, (System_String_o *)StringLiteral_19601/*"followerData"*/, v25, v26);
  RequestBase__addField_44518324(v10, (System_String_o *)StringLiteral_19536/*"fixMainSupportDeckIds"*/, v14, v27);
  RequestBase__addField_44518324(v10, (System_String_o *)StringLiteral_19535/*"fixEventSupportDeckIds"*/, v15, v28);
  RequestBase__beginRequest(v10, v29);
  return 1;
}


System_String_o *FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8F75 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8F75 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8F74 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19598/*"follower/setup"*/);
    byte_4CC8F74 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_19598/*"follower/setup"*/, 0);
}


void FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CC8F7A & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8F7A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(51, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22486/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22316/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}