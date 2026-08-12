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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  MiniMessagePack_MiniMessagePacker_o *v20; // x20
  __int64 v21; // x1
  System_Byte_array *v22; // x20
  System_String_o *v23; // x0

  if ( (byte_59723DB & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_2213A60(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_2213A60(&StringLiteral_17338/*"activeDeckId"*/);
    sub_2213A60(&StringLiteral_25862/*"userDeck"*/);
    byte_59723DB = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, activeDeckId);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0);
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_17338/*"activeDeckId"*/, activeDeckId, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)userDeck;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)userDeck, v10, v11, v12, v13, v14, v15);
  }
  v20 = (MiniMessagePack_MiniMessagePacker_o *)sub_2213CCC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v20, 0);
  if ( !v20 )
LABEL_14:
    sub_2213CDC(v8, v9);
  v22 = MiniMessagePack_MiniMessagePacker__PackClass(v20, (Il2CppObject *)v7, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v21);
  v23 = System_Convert__ToBase64String(v22, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_25862/*"userDeck"*/, v23, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59723DA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59723DA = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723D9 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_19359/*"deck/setup"*/);
    byte_59723D9 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_19359/*"deck/setup"*/, 0);
}


void DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_59723DC & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723DC = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(7, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}