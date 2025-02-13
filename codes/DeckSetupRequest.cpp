void __fastcall DeckSetupRequest__beginRequest(
        DeckSetupRequest_o *this,
        int64_t activeDeckId,
        UserDeckEntity_o *userDeck,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  MiniMessagePack_MiniMessagePacker_o *v21; // x20
  System_Byte_array *v22; // x20
  System_String_o *v23; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1

  if ( (byte_4BDDE75 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_1C21E38(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C21E38(&StringLiteral_16934/*"activeDeckId"*/);
    sub_1C21E38(&StringLiteral_24821/*"userDeck"*/);
    byte_4BDDE75 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_42421084((RequestBase_o *)this, (System_String_o *)StringLiteral_16934/*"activeDeckId"*/, activeDeckId, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v8 )
    goto LABEL_14;
  items = v8->fields._items;
  v18 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v20[4] = (Il2CppClass *)userDeck;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)userDeck, v11, v12, v13, v14, v15, v16);
  }
  v21 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C22084(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v21, 0LL);
  if ( !v21 )
LABEL_14:
    sub_1C22094(v9, v10);
  v22 = MiniMessagePack_MiniMessagePacker__PackClass(v21, (Il2CppObject *)v8, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v23 = System_Convert__ToBase64String(v22, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_24821/*"userDeck"*/, v23, v24);
  RequestBase__beginRequest((RequestBase_o *)this, v25);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDE74 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDE74 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE73 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18834/*"deck/setup"*/);
    byte_4BDDE73 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_18834/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v7; // x9

  if ( (byte_4BDDE76 & 1) == 0 )
  {
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDE76 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v5 && ResponseData__checkError_42505456(v5, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22632/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22456/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v7,
    *(_QWORD *)&CallBack->fields.extra_arg);
}