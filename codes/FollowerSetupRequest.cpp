void FollowerSetupRequest___ctor(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *FollowerSetupRequest__GetDeckNameData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  unsigned int v4; // w22
  System_String_o *v5; // x20
  int v6; // w25
  SupportServantData_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x21

  if ( (byte_5972438 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972438 = 1;
  }
  v4 = 0;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v6 = 0;
  while ( 1 )
  {
    v7 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, supportServantData);
      v7 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= SLODWORD(v7[1].fields.oldEquipIdList->m_Items[17]) )
      return v5;
    if ( !supportServantData )
      goto LABEL_16;
    if ( v4 >= LODWORD(supportServantData->max_length) )
      sub_2213CE4(v7);
    v7 = supportServantData->m_Items[v4];
    if ( !v7 )
LABEL_16:
      sub_2213CDC(v7, supportServantData);
    v8 = SupportServantData__updateNameCheck(v7, 0);
    if ( v8 )
    {
      v9 = v8;
      if ( v6 >= 1 )
        v5 = System_String__Concat_75651716(v5, (System_String_o *)StringLiteral_869/*","*/, 0);
      v5 = System_String__Concat_75651716(v5, v9, 0);
      ++v6;
    }
    ++v4;
  }
}


System_String_o *FollowerSetupRequest__GetFollowerData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  unsigned __int64 v4; // x24
  int v5; // w26
  System_String_o *v6; // x20
  BalanceConfig_c *v7; // x0
  int32_t i; // w21
  System_String_o *v9; // x0
  System_String_o *v10; // x22

  if ( (byte_5972437 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972437 = 1;
  }
  v4 = 0;
  v5 = 0;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, supportServantData);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v7->static_fields->SupportDeckMax )
      return v6;
    for ( i = 0; ; ++i )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, supportServantData);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( i >= v7->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_21;
      if ( v4 >= LODWORD(supportServantData->max_length) )
        sub_2213CE4(v7);
      v7 = (BalanceConfig_c *)supportServantData->m_Items[v4];
      if ( !v7 )
LABEL_21:
        sub_2213CDC(v7, supportServantData);
      v9 = SupportServantData__updateCheck((SupportServantData_o *)v7, i, 0);
      if ( v9 )
      {
        v10 = v9;
        if ( v5 >= 1 )
          v6 = System_String__Concat_75651716(v6, (System_String_o *)StringLiteral_869/*","*/, 0);
        v6 = System_String__Concat_75651716(v6, v10, 0);
        ++v5;
      }
      v7 = BalanceConfig_TypeInfo;
    }
    ++v4;
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
  int32_t j; // w21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  SupportServantData_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_5972436 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
    byte_5972436 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !HIDWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated, v5);
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SLODWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[17]) )
      break;
    for ( j = 0; ; ++j )
    {
      if ( !HIDWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated, v5);
        FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( j >= SHIDWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[18]) )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( i >= LODWORD(supportServantData->max_length) )
        sub_2213CE4(FollowerDataIfUpdated);
      FollowerDataIfUpdated = supportServantData->m_Items[i];
      if ( !FollowerDataIfUpdated )
LABEL_23:
        sub_2213CDC(FollowerDataIfUpdated, v5);
      FollowerDataIfUpdated = (SupportServantData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                        FollowerDataIfUpdated,
                                                        j,
                                                        0);
      if ( FollowerDataIfUpdated )
      {
        if ( !v4 )
          goto LABEL_23;
        items = v4->fields._items;
        v16 = Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__;
        ++v4->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v4->fields._size;
        v18 = FollowerDataIfUpdated;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            (Il2CppObject *)FollowerDataIfUpdated,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
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
  __int64 v13; // x1
  System_String_o *DeckNameData; // x24
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x0
  MiniMessagePack_MiniMessagePacker_o *v18; // x21
  FollowerSetupRequest_o *v19; // x0
  const MethodInfo *v20; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Byte_array *v24; // x20
  System_String_o *v25; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_5972439 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_2213A60(&StringLiteral_25117/*"supportDeckId"*/);
    sub_2213A60(&StringLiteral_20373/*"fixEventSupportDeckIds"*/);
    sub_2213A60(&StringLiteral_19362/*"deckName"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_20374/*"fixMainSupportDeckIds"*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    this = (FollowerSetupRequest_o *)sub_2213A60(&StringLiteral_20447/*"followerData"*/);
    byte_5972439 = 1;
  }
  FollowerData = (FollowerSetupRequest_o *)FollowerSetupRequest__GetFollowerData(
                                             this,
                                             supportServantData,
                                             *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData(FollowerData, supportServantData, v12);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
  v15 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0);
  v16 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_25117/*"supportDeckId"*/, supportDeckId, 0);
  v17 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_16427/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16691/*"]"*/,
          0);
  RequestBase__addField_51259256(v10, (System_String_o *)StringLiteral_19362/*"deckName"*/, v17, 0);
  v18 = (MiniMessagePack_MiniMessagePacker_o *)sub_2213CCC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v18, 0);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v19, supportServantData, v20);
  if ( !v18 )
    sub_2213CDC(FollowerDataList, v22);
  v24 = MiniMessagePack_MiniMessagePacker__PackClass(v18, FollowerDataList, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v23);
  v25 = System_Convert__ToBase64String(v24, 0);
  RequestBase__addField_51259256(v10, (System_String_o *)StringLiteral_20447/*"followerData"*/, v25, 0);
  RequestBase__addField_51259256(v10, (System_String_o *)StringLiteral_20374/*"fixMainSupportDeckIds"*/, v15, 0);
  RequestBase__addField_51259256(v10, (System_String_o *)StringLiteral_20373/*"fixEventSupportDeckIds"*/, v16, 0);
  RequestBase__beginRequest(v10, 0);
  return 1;
}


System_String_o *FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_5972435 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972435 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972434 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20443/*"follower/setup"*/);
    byte_5972434 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20443/*"follower/setup"*/, 0);
}


void FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_597243A & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_597243A = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(51, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}