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

  if ( (byte_4BB6041 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, supportServantData);
    sub_1C13D24(&StringLiteral_866/*","*/, v4);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB6041 = 1;
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
      sub_1C13F88(v9, supportServantData);
    v9 = supportServantData->m_Items[v7];
    if ( !v9 )
LABEL_16:
      sub_1C13F80(v9, supportServantData);
    v10 = SupportServantData__updateNameCheck(v9, 0LL);
    if ( v10 )
    {
      v11 = v10;
      if ( v8 >= 1 )
        v6 = System_String__Concat_62967944(v6, (System_String_o *)StringLiteral_866/*","*/, 0LL);
      v6 = System_String__Concat_62967944(v6, v11, 0LL);
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

  if ( (byte_4BB6040 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, supportServantData);
    sub_1C13D24(&StringLiteral_866/*","*/, v4);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB6040 = 1;
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
        sub_1C13F88(v7, supportServantData);
      v7 = *v11;
      if ( !*v11 )
LABEL_21:
        sub_1C13F80(v7, supportServantData);
      v12 = SupportServantData__updateCheck((SupportServantData_o *)v7, v10, 0LL);
      if ( v12 )
      {
        v13 = v12;
        if ( v9 >= 1 )
          v6 = System_String__Concat_62967944(v6, (System_String_o *)StringLiteral_866/*","*/, 0LL);
        v6 = System_String__Concat_62967944(v6, v13, 0LL);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int64_t v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4BB603F & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, supportServantData);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo, v6);
    byte_4BB603F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
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
        sub_1C13F88(FollowerDataIfUpdated, v8);
      FollowerDataIfUpdated = (SupportServantData_o *)*v12;
      if ( !*v12 )
LABEL_23:
        sub_1C13F80(FollowerDataIfUpdated, v8);
      FollowerDataIfUpdated = (SupportServantData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                        FollowerDataIfUpdated,
                                                        v11,
                                                        0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v7 )
          goto LABEL_23;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v7->fields._size;
        v22 = (int64_t)FollowerDataIfUpdated;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)FollowerDataIfUpdated,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), v22, v13, v14, v15, v16, v17, v18);
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
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  MiniMessagePack_MiniMessagePacker_o *v28; // x21
  FollowerSetupRequest_o *v29; // x0
  const MethodInfo *v30; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v32; // x1
  System_Byte_array *v33; // x20
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_4BB6042 & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, supportServantData);
    sub_1C13D24(&JsonManager_TypeInfo, v11);
    sub_1C13D24(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_24077/*"summed_events"*/, v13);
    sub_1C13D24(&StringLiteral_19749/*"finalDefault"*/, v14);
    sub_1C13D24(&StringLiteral_18808/*"debug_delete_servant"*/, v15);
    sub_1C13D24(&StringLiteral_16061/*"You must call the Bind method before performing this operation."*/, v16);
    sub_1C13D24(&StringLiteral_19750/*"finally"*/, v17);
    sub_1C13D24(&StringLiteral_16320/*"\\p{_xmlI}"*/, v18);
    this = (FollowerSetupRequest_o *)sub_1C13D24(&StringLiteral_19810/*"focusIndex"*/, v19);
    byte_4BB6042 = 1;
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
  RequestBase__addField(v10, (System_String_o *)StringLiteral_24077/*"summed_events"*/, supportDeckId, v25);
  v26 = System_String__Concat_62979204(
          (System_String_o *)StringLiteral_16061/*"You must call the Bind method before performing this operation."*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16320/*"\\p{_xmlI}"*/,
          0LL);
  RequestBase__addField_42303556(v10, (System_String_o *)StringLiteral_18808/*"debug_delete_servant"*/, v26, v27);
  v28 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C13F70(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v28, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v29, supportServantData, v30);
  if ( !v28 )
    sub_1C13F80(FollowerDataList, v32);
  v33 = MiniMessagePack_MiniMessagePacker__PackClass(v28, FollowerDataList, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v34 = System_Convert__ToBase64String(v33, 0LL);
  RequestBase__addField_42303556(v10, (System_String_o *)StringLiteral_19810/*"focusIndex"*/, v34, v35);
  RequestBase__addField_42303556(v10, (System_String_o *)StringLiteral_19750/*"finally"*/, v23, v36);
  RequestBase__addField_42303556(v10, (System_String_o *)StringLiteral_19749/*"finalDefault"*/, v24, v37);
  RequestBase__beginRequest(v10, v38);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BB603E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB603E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB603D & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_19807/*"fo-FO"*/, v2);
    byte_4BB603D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_19807/*"fo-FO"*/, 0LL);
}


void __fastcall FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BB6043 & 1) == 0 )
  {
    sub_1C13D24(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB6043 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(51, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42394144(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22595/*"offline"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22421/*"newAttributes"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}