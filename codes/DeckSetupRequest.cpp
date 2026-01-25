void DeckSetupRequest___ctor(DeckSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void DeckSetupRequest__beginRequest(
        DeckSetupRequest_o *this,
        int64_t activeDeckId,
        UserDeckEntity_o *userDeck,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  MiniMessagePack_MiniMessagePacker_o *v20; // x20
  System_Byte_array *v21; // x20
  System_String_o *v22; // x0

  if ( (byte_4CF012D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_1C7BAE8(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16724/*"activeDeckId"*/);
    sub_1C7BAE8(&StringLiteral_24757/*"userDeck"*/);
    byte_4CF012D = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0);
  RequestBase__addField_44745468((RequestBase_o *)this, (System_String_o *)StringLiteral_16724/*"activeDeckId"*/, activeDeckId, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v7 )
    goto LABEL_14;
  items = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)userDeck;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)userDeck, v10, v11, v12, v13, v14, v15);
  }
  v20 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C7BD34(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v20, 0);
  if ( !v20 )
LABEL_14:
    sub_1C7BD40(v8, v9);
  v21 = MiniMessagePack_MiniMessagePacker__PackClass(v20, (Il2CppObject *)v7, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v22 = System_Convert__ToBase64String(v21, 0);
  RequestBase__addField_44748720((RequestBase_o *)this, (System_String_o *)StringLiteral_24757/*"userDeck"*/, v22, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CF012C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF012C = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF012B & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18631/*"deck/setup"*/);
    byte_4CF012B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_18631/*"deck/setup"*/, 0);
}


void DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CF012E & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF012E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(7, responseList, 0);
  if ( v5 && ResponseData__checkError_44743216(v5, 0) )
    v6 = &StringLiteral_22590/*"ok"*/;
  else
    v6 = &StringLiteral_22419/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}