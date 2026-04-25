void FollowerSetupRequest___ctor(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


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

  if ( (byte_4E06560 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&StringLiteral_810/*","*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E06560 = 1;
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
      sub_1CE6960(v7);
    v7 = supportServantData->m_Items[v5];
    if ( !v7 )
LABEL_16:
      sub_1CE6958(v7, supportServantData);
    v8 = SupportServantData__updateNameCheck(v7, 0);
    if ( v8 )
    {
      v9 = v8;
      if ( v6 >= 1 )
        v4 = System_String__Concat_65122828(v4, (System_String_o *)StringLiteral_810/*","*/, 0);
      v4 = System_String__Concat_65122828(v4, v9, 0);
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

  if ( (byte_4E0655F & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&StringLiteral_810/*","*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E0655F = 1;
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
        sub_1CE6960(v5);
      v5 = *v9;
      if ( !*v9 )
LABEL_21:
        sub_1CE6958(v5, supportServantData);
      v10 = SupportServantData__updateCheck((SupportServantData_o *)v5, v8, 0);
      if ( v10 )
      {
        v11 = v10;
        if ( v7 >= 1 )
          v4 = System_String__Concat_65122828(v4, (System_String_o *)StringLiteral_810/*","*/, 0);
        v4 = System_String__Concat_65122828(v4, v11, 0);
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

  if ( (byte_4E0655E & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
    byte_4E0655E = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
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
        sub_1CE6960(FollowerDataIfUpdated);
      FollowerDataIfUpdated = (SupportServantData_o *)*v9;
      if ( !*v9 )
LABEL_23:
        sub_1CE6958(FollowerDataIfUpdated, v5);
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
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v16; // x0
  MiniMessagePack_MiniMessagePacker_o *v17; // x21
  FollowerSetupRequest_o *v18; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v21; // x1
  System_Byte_array *v22; // x20
  System_String_o *v23; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_4E06561 & 1) == 0 )
  {
    sub_1CE6700(&System_Convert_TypeInfo);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1CE6700(&StringLiteral_24230/*"supportDeckId"*/);
    sub_1CE6700(&StringLiteral_19734/*"fixEventSupportDeckIds"*/);
    sub_1CE6700(&StringLiteral_18744/*"deckName"*/);
    sub_1CE6700(&StringLiteral_15954/*"["*/);
    sub_1CE6700(&StringLiteral_19735/*"fixMainSupportDeckIds"*/);
    sub_1CE6700(&StringLiteral_16207/*"]"*/);
    this = (FollowerSetupRequest_o *)sub_1CE6700(&StringLiteral_19800/*"followerData"*/);
    byte_4E06561 = 1;
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
  RequestBase__addField(v10, (System_String_o *)StringLiteral_24230/*"supportDeckId"*/, supportDeckId, 0);
  v16 = System_String__Concat_65161092(
          (System_String_o *)StringLiteral_15954/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16207/*"]"*/,
          0);
  RequestBase__addField_45365032(v10, (System_String_o *)StringLiteral_18744/*"deckName"*/, v16, 0);
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_1CE694C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v18, supportServantData, v19);
  if ( !v17 )
    sub_1CE6958(FollowerDataList, v21);
  v22 = MiniMessagePack_MiniMessagePacker__PackClass(v17, FollowerDataList, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v23 = System_Convert__ToBase64String(v22, 0);
  RequestBase__addField_45365032(v10, (System_String_o *)StringLiteral_19800/*"followerData"*/, v23, 0);
  RequestBase__addField_45365032(v10, (System_String_o *)StringLiteral_19735/*"fixMainSupportDeckIds"*/, v14, 0);
  RequestBase__addField_45365032(v10, (System_String_o *)StringLiteral_19734/*"fixEventSupportDeckIds"*/, v15, 0);
  RequestBase__beginRequest(v10, 0);
  return 1;
}


System_String_o *FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E0655D & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E0655D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E0655C & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19797/*"follower/setup"*/);
    byte_4E0655C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_19797/*"follower/setup"*/, 0);
}


void FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4E06562 & 1) == 0 )
  {
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22728/*"ok"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E06562 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(51, responseList, 0);
  if ( v5 && ResponseData__checkError_45365352(v5, 0) )
    v6 = &StringLiteral_22728/*"ok"*/;
  else
    v6 = &StringLiteral_22555/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}