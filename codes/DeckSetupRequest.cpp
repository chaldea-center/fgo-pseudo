void __fastcall DeckSetupRequest__beginRequest(
        DeckSetupRequest_o *this,
        int64_t activeDeckId,
        UserDeckEntity_o *userDeck,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  MiniMessagePack_MiniMessagePacker_o *v41; // x20
  __int64 v42; // x1
  System_Byte_array *v43; // x20
  System_String_o *v44; // x0
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x1

  if ( (byte_4B17A92 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, activeDeckId, userDeck);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_16822/*"activeDeckId"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_24636/*"userDeck"*/, v19, v20);
    byte_4B17A92 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, activeDeckId);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_16822/*"activeDeckId"*/, activeDeckId, v21);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserDeckEntity__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v25 )
    goto LABEL_14;
  items = v25->fields._items;
  v35 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v25->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v25->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    v25->fields._size = size + 1;
    v37[4] = (Il2CppClass *)userDeck;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)userDeck, v28, v29, v30, v31, v32, v33);
  }
  v41 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, v38, v39, v40);
  MiniMessagePack_MiniMessagePacker___ctor(v41, 0LL);
  if ( !v41 )
LABEL_14:
    sub_1BCAA3C(v26, v27);
  v43 = MiniMessagePack_MiniMessagePacker__PackClass(v41, (Il2CppObject *)v25, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v42);
  v44 = System_Convert__ToBase64String(v43, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_24636/*"userDeck"*/, v44, v45);
  RequestBase__beginRequest((RequestBase_o *)this, v46);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17A91 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17A91 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A90 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18708/*"deck/setup"*/, v3, v4);
    byte_4B17A90 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_18708/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
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

  if ( (byte_4B17A93 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A93 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(7, responseList, 0LL);
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