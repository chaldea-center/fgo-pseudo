System_String_o *__fastcall FollowerSetupRequest__GetDeckNameData(
        FollowerSetupRequest_o *this,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  il2cpp_array_size_t v5; // w22
  int v6; // w23
  SupportServantData_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x21

  if ( (byte_4A5CA29 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA29 = 1;
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
    if ( (signed int)v5 >= SLODWORD(v7[1].fields.oldEquipIdList->m_Items[15]) )
      return v4;
    if ( !supportServantData )
      goto LABEL_16;
    if ( v5 >= supportServantData->max_length )
      sub_1B88814(v7, supportServantData);
    v7 = supportServantData->m_Items[v5];
    if ( !v7 )
LABEL_16:
      sub_1B8880C(v7, supportServantData);
    v8 = SupportServantData__updateNameCheck(v7, 0LL);
    if ( v8 )
    {
      v9 = v8;
      if ( v6 >= 1 )
        v4 = System_String__Concat_61707032(v4, (System_String_o *)StringLiteral_868/*","*/, 0LL);
      v4 = System_String__Concat_61707032(v4, v9, 0LL);
      ++v6;
    }
    ++v5;
  }
}


System_String_o *__fastcall FollowerSetupRequest__GetFollowerData(
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

  if ( (byte_4A5CA28 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA28 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  v5 = BalanceConfig_TypeInfo;
  v6 = 0LL;
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
      if ( v6 >= supportServantData->max_length )
        sub_1B88814(v5, supportServantData);
      v5 = *v9;
      if ( !*v9 )
LABEL_21:
        sub_1B8880C(v5, supportServantData);
      v10 = SupportServantData__updateCheck((SupportServantData_o *)v5, v8, 0LL);
      if ( v10 )
      {
        v11 = v10;
        if ( v7 >= 1 )
          v4 = System_String__Concat_61707032(v4, (System_String_o *)StringLiteral_868/*","*/, 0LL);
        v4 = System_String__Concat_61707032(v4, v11, 0LL);
        ++v7;
      }
      v5 = BalanceConfig_TypeInfo;
      ++v8;
    }
    ++v6;
  }
}


System_Collections_Generic_List_SupportServantData_FollowerData__o *__fastcall FollowerSetupRequest__GetFollowerDataList(
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  SupportServantData_o *v15; // x1
  Il2CppClass **v16; // x0

  if ( (byte_4A5CA27 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantData_FollowerData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
    byte_4A5CA27 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SupportServantData_FollowerData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SupportServantData_FollowerData___ctor__);
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
    v8 = 0;
    v9 = (void **)&supportServantData->m_Items[i];
    while ( 1 )
    {
      if ( !LODWORD(FollowerDataIfUpdated[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(FollowerDataIfUpdated);
        FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( v8 >= SHIDWORD(FollowerDataIfUpdated[1].fields.oldEquipIdList->m_Items[16]) )
        break;
      if ( !supportServantData )
        goto LABEL_23;
      if ( i >= supportServantData->max_length )
        sub_1B88814(FollowerDataIfUpdated, v5);
      FollowerDataIfUpdated = (SupportServantData_o *)*v9;
      if ( !*v9 )
LABEL_23:
        sub_1B8880C(FollowerDataIfUpdated, v5);
      FollowerDataIfUpdated = (SupportServantData_o *)SupportServantData__GetFollowerDataIfUpdated(
                                                        FollowerDataIfUpdated,
                                                        v8,
                                                        0LL);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            (Il2CppObject *)FollowerDataIfUpdated,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
        }
      }
      FollowerDataIfUpdated = (SupportServantData_o *)BalanceConfig_TypeInfo;
      ++v8;
    }
  }
  return (System_Collections_Generic_List_SupportServantData_FollowerData__o *)v4;
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
  if ( (byte_4A5CA2A & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&StringLiteral_23688/*"supportDeckId"*/);
    sub_1B885B0(&StringLiteral_19444/*"fixEventSupportDeckIds"*/);
    sub_1B885B0(&StringLiteral_18523/*"deckName"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_19445/*"fixMainSupportDeckIds"*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    this = (FollowerSetupRequest_o *)sub_1B885B0(&StringLiteral_19505/*"followerData"*/);
    byte_4A5CA2A = 1;
  }
  FollowerData = (FollowerSetupRequest_o *)FollowerSetupRequest__GetFollowerData(
                                             this,
                                             supportServantData,
                                             *(const MethodInfo **)&supportDeckId);
  DeckNameData = FollowerSetupRequest__GetDeckNameData(FollowerData, supportServantData, v12);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson(&fixMainSupportDeckIds->obj, 0, 0, 0LL);
  v15 = JsonManager__toJson(&fixEventSupportDeckIds->obj, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23688/*"supportDeckId"*/, supportDeckId, v16);
  v17 = System_String__Concat_61718292(
          (System_String_o *)StringLiteral_15812/*"["*/,
          DeckNameData,
          (System_String_o *)StringLiteral_16069/*"]"*/,
          0LL);
  RequestBase__addField_41126952(v10, (System_String_o *)StringLiteral_18523/*"deckName"*/, v17, v18);
  v19 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v19, 0LL);
  FollowerDataList = (Il2CppObject *)FollowerSetupRequest__GetFollowerDataList(v20, supportServantData, v21);
  if ( !v19 )
    sub_1B8880C(FollowerDataList, v23);
  v24 = MiniMessagePack_MiniMessagePacker__PackClass(v19, FollowerDataList, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v25 = System_Convert__ToBase64String(v24, 0LL);
  RequestBase__addField_41126952(v10, (System_String_o *)StringLiteral_19505/*"followerData"*/, v25, v26);
  RequestBase__addField_41126952(v10, (System_String_o *)StringLiteral_19445/*"fixMainSupportDeckIds"*/, v14, v27);
  RequestBase__addField_41126952(v10, (System_String_o *)StringLiteral_19444/*"fixEventSupportDeckIds"*/, v15, v28);
  RequestBase__beginRequest(v10, v29);
  return 1;
}


System_String_o *__fastcall FollowerSetupRequest__getMockData(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CA26 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA26 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerSetupRequest__getURL(FollowerSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA25 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19502/*"follower/setup"*/);
    byte_4A5CA25 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19502/*"follower/setup"*/, 0LL);
}


void __fastcall FollowerSetupRequest__requestCompleted(
        FollowerSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5CA2B & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CA2B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(51, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}