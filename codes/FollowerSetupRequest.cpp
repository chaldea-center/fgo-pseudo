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

  if ( (byte_4C28E04 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28E04 = 1;
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
      sub_1C2D6F4(v7, supportServantData, method);
    v7 = supportServantData->m_Items[v5];
    if ( !v7 )
LABEL_16:
      sub_1C2D6EC(v7, supportServantData);
    v8 = SupportServantData__updateNameCheck(v7, 0);
    if ( v8 )
    {
      v9 = v8;
      if ( v6 >= 1 )
        v4 = System_String__Concat_63457864(v4, (System_String_o *)StringLiteral_811/*","*/, 0);
      v4 = System_String__Concat_63457864(v4, v9, 0);
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

  if ( (byte_4C28E03 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28E03 = 1;
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
        sub_1C2D6F4(v5, supportServantData, method);
      v5 = *v9;
      if ( !*v9 )
LABEL_21:
        sub_1C2D6EC(v5, supportServantData);
      v10 = SupportServantData__updateCheck((SupportServantData_o *)v5, v8, 0);
      if ( v10 )
      {
        v11 = v10;
        if ( v7 >= 1 )
          v4 = System_String__Concat_63457864(v4, (System_String_o *)StringLiteral_811/*","*/, 0);
        v4 = System_String__Concat_63457864(v4, v11, 0);
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
  __int64 v6; // x2
  SupportServantData_o *FollowerDataIfUpdated; // x0
  unsigned __int64 i; // x24
  int32_t v9; // w21
  void **v10; // x25
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  SupportServantData_o *v15; // x1
  Il2CppClass **v16; // x0

  if ( (byte_4C28E02 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
    byte_4C28E02 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
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
    v9 = 0;
    v10 = (void **)&supportServantData->m_Items[i];
    while ( 1 )
    {
      if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( v9 >= SHIDWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[18]) )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( i >= LODWORD(supportServantData->max_length) )
        sub_1C2D6F4(FollowerDataIfUpdated, v5, v6);
      FollowerDataIfUpdated = (SupportServantData_o *)*v10;
      if ( !*v10 )
LABEL_23:
        sub_1C2D6EC(FollowerDataIfUpdated, v5);
      FollowerDataIfUpdated = (SupportServantData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                        FollowerDataIfUpdated,
                                                        v9,
                                                        0);
      if ( FollowerDataIfUpdated )
      {
        if ( !v4 )
          goto LABEL_23;
        items = v4->fields._items;
        v13 = Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__;
        ++v4->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v4->fields._size;
        v15 = FollowerDataIfUpdated;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            (Il2CppObject *)FollowerDataIfUpdated,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v15;
          sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v6, v11);
        }
      }
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      ++v9;
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
  if ( (byte_4C28E05 & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C2D490(&StringLiteral_23827/*"supportDeckId"*/);
    sub_1C2D490(&StringLiteral_19448/*"fixEventSupportDeckIds"*/);
    sub_1C2D490(&StringLiteral_18520/*"deckName"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_19449/*"fixMainSupportDeckIds"*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    this = (FollowerSetupRequest_o *)sub_1C2D490(&StringLiteral_19512/*"followerData"*/);
    byte_4C28E05 = 1;
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
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23827/*"supportDeckId"*/, supportDeckId, 0);
  v16 = System_String__Concat_63496112(
          (System_String_o *)StringLiteral_15801/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16055/*"]"*/,
          0);
  RequestBase__addField_44009064(v10, (System_String_o *)StringLiteral_18520/*"deckName"*/, v16, 0);
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2D6DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v18, supportServantData, v19);
  if ( !v17 )
    sub_1C2D6EC(FollowerDataList, v21);
  v22 = MiniMessagePack_MiniMessagePacker__PackClass(v17, FollowerDataList, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v23 = System_Convert__ToBase64String(v22, 0);
  RequestBase__addField_44009064(v10, (System_String_o *)StringLiteral_19512/*"followerData"*/, v23, 0);
  RequestBase__addField_44009064(v10, (System_String_o *)StringLiteral_19449/*"fixMainSupportDeckIds"*/, v14, 0);
  RequestBase__addField_44009064(v10, (System_String_o *)StringLiteral_19448/*"fixEventSupportDeckIds"*/, v15, 0);
  RequestBase__beginRequest(v10, 0);
  return 1;
}


System_String_o *FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28E01 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28E01 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28E00 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19509/*"follower/setup"*/);
    byte_4C28E00 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19509/*"follower/setup"*/, 0);
}


void FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28E06 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28E06 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(51, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}