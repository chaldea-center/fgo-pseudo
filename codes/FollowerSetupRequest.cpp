System_String_o *__fastcall FollowerSetupRequest__GetDeckNameData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  il2cpp_array_size_t v9; // w22
  int v10; // w23
  SupportServantData_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x21

  if ( (byte_4B17AEA & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, supportServantData, method);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17AEA = 1;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, supportServantData);
      v11 = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v9 >= SLODWORD(v11[1].fields.oldEquipIdList->m_Items[15]) )
      return v8;
    if ( !supportServantData )
      goto LABEL_16;
    if ( v9 >= supportServantData->max_length )
      sub_1BCAA44(v11, supportServantData);
    v11 = supportServantData->m_Items[v9];
    if ( !v11 )
LABEL_16:
      sub_1BCAA3C(v11, supportServantData);
    v12 = SupportServantData__updateNameCheck(v11, 0LL);
    if ( v12 )
    {
      v13 = v12;
      if ( v10 >= 1 )
        v8 = System_String__Concat_62401220(v8, (System_String_o *)StringLiteral_863/*","*/, 0LL);
      v8 = System_String__Concat_62401220(v8, v13, 0LL);
      ++v10;
    }
    ++v9;
  }
}


System_String_o *__fastcall FollowerSetupRequest__GetFollowerData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  BalanceConfig_c *v9; // x0
  unsigned __int64 v10; // x24
  int v11; // w25
  int32_t v12; // w21
  BalanceConfig_c **v13; // x27
  System_String_o *v14; // x0
  System_String_o *v15; // x22

  if ( (byte_4B17AE9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, supportServantData, method);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17AE9 = 1;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  v9 = BalanceConfig_TypeInfo;
  v10 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9, supportServantData);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= v9->static_fields->SupportDeckMax )
      return v8;
    v12 = 0;
    v13 = (BalanceConfig_c **)&supportServantData->m_Items[v10];
    while ( 1 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9, supportServantData);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v12 >= v9->static_fields->SupportDeckMemberMax )
        break;
      if ( !supportServantData )
        goto LABEL_21;
      if ( v10 >= supportServantData->max_length )
        sub_1BCAA44(v9, supportServantData);
      v9 = *v13;
      if ( !*v13 )
LABEL_21:
        sub_1BCAA3C(v9, supportServantData);
      v14 = SupportServantData__updateCheck((SupportServantData_o *)v9, v12, 0LL);
      if ( v14 )
      {
        v15 = v14;
        if ( v11 >= 1 )
          v8 = System_String__Concat_62401220(v8, (System_String_o *)StringLiteral_863/*","*/, 0LL);
        v8 = System_String__Concat_62401220(v8, v15, 0LL);
        ++v11;
      }
      v9 = BalanceConfig_TypeInfo;
      ++v12;
    }
    ++v10;
  }
}


System_Collections_Generic_List_SupportServantData_FollowerData__o *__fastcall FollowerSetupRequest__GetFollowerDataList(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  SupportServantData_o *FollowerDataIfUpdated; // x0
  unsigned __int64 i; // x24
  int32_t v15; // w21
  void **v16; // x25
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  int64_t v26; // x1
  Il2CppClass **v27; // x0

  if ( (byte_4B17AE8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, supportServantData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo, v9, v10);
    byte_4B17AE8 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo,
                                                       supportServantData,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
  FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated, v12);
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SLODWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[15]) )
      break;
    v15 = 0;
    v16 = (void **)&supportServantData->m_Items[i];
    while ( 1 )
    {
      if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated, v12);
        FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( v15 >= SHIDWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[16]) )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( i >= supportServantData->max_length )
        sub_1BCAA44(FollowerDataIfUpdated, v12);
      FollowerDataIfUpdated = (SupportServantData_o *)*v16;
      if ( !*v16 )
LABEL_23:
        sub_1BCAA3C(FollowerDataIfUpdated, v12);
      FollowerDataIfUpdated = (SupportServantData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                        FollowerDataIfUpdated,
                                                        v15,
                                                        0LL);
      if ( FollowerDataIfUpdated )
      {
        if ( !v11 )
          goto LABEL_23;
        items = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v11->fields._size;
        v26 = (int64_t)FollowerDataIfUpdated;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)FollowerDataIfUpdated,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), v26, v17, v18, v19, v20, v21, v22);
        }
      }
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      ++v15;
    }
  }
  return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v11;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  FollowerSetupRequest_o *FollowerData; // x0
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  System_String_o *DeckNameData; // x24
  System_String_o *v33; // x23
  System_String_o *v34; // x22
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  MiniMessagePack_MiniMessagePacker_o *v41; // x21
  FollowerSetupRequest_o *v42; // x0
  const MethodInfo *v43; // x2
  Il2CppObject *FollowerDataList; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  System_Byte_array *v47; // x20
  System_String_o *v48; // x0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_4B17AEB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, supportServantData, *(_QWORD *)&supportDeckId);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_23936/*"supportDeckId"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_19646/*"fixEventSupportDeckIds"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_18711/*"deckName"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19647/*"fixMainSupportDeckIds"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v25, v26);
    this = (FollowerSetupRequest_o *)sub_1BCA7E0(&StringLiteral_19707/*"followerData"*/, v27, v28);
    byte_4B17AEB = 1;
  }
  FollowerData = (FollowerSetupRequest_o *)FollowerSetupRequest__GetFollowerData(
                                             this,
                                             supportServantData,
                                             *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData(FollowerData, supportServantData, v30);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v31);
  v33 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v34 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23936/*"supportDeckId"*/, supportDeckId, v35);
  v36 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_15978/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16236/*"]"*/,
          0LL);
  RequestBase__addField_41862348(v10, (System_String_o *)StringLiteral_18711/*"deckName"*/, v36, v37);
  v41 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, v38, v39, v40);
  MiniMessagePack_MiniMessagePacker___ctor(v41, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v42, supportServantData, v43);
  if ( !v41 )
    sub_1BCAA3C(FollowerDataList, v45);
  v47 = MiniMessagePack_MiniMessagePacker__PackClass(v41, FollowerDataList, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v46);
  v48 = System_Convert__ToBase64String(v47, 0LL);
  RequestBase__addField_41862348(v10, (System_String_o *)StringLiteral_19707/*"followerData"*/, v48, v49);
  RequestBase__addField_41862348(v10, (System_String_o *)StringLiteral_19647/*"fixMainSupportDeckIds"*/, v33, v50);
  RequestBase__addField_41862348(v10, (System_String_o *)StringLiteral_19646/*"fixEventSupportDeckIds"*/, v34, v51);
  RequestBase__beginRequest(v10, v52);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17AE7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17AE7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17AE6 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19704/*"follower/setup"*/, v3, v4);
    byte_4B17AE6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19704/*"follower/setup"*/, 0LL);
}


void __fastcall FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17AEC & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17AEC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(51, responseList, 0LL);
  if ( v9 && ResponseData__checkError_41952396(v9, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}