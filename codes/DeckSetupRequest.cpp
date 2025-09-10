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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  MiniMessagePack_MiniMessagePacker_o *v16; // x20
  System_Byte_array *v17; // x20
  System_String_o *v18; // x0

  if ( (byte_4C28DAC & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_1C2D490(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C2D490(&StringLiteral_16657/*"activeDeckId"*/);
    sub_1C2D490(&StringLiteral_24488/*"userDeck"*/);
    byte_4C28DAC = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0);
  RequestBase__addField_44008608((RequestBase_o *)this, (System_String_o *)StringLiteral_16657/*"activeDeckId"*/, activeDeckId, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v7 )
    goto LABEL_14;
  items = v7->fields._items;
  v13 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v15[4] = (Il2CppClass *)userDeck;
    sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)userDeck, v10, v11);
  }
  v16 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2D6DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v16, 0);
  if ( !v16 )
LABEL_14:
    sub_1C2D6EC(v8, v9);
  v17 = MiniMessagePack_MiniMessagePacker__PackClass(v16, (Il2CppObject *)v7, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v18 = System_Convert__ToBase64String(v17, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_24488/*"userDeck"*/, v18, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28DAB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28DAB = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28DAA & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18517/*"deck/setup"*/);
    byte_4C28DAA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_18517/*"deck/setup"*/, 0);
}


void DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28DAD & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28DAD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(7, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}