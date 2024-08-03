void __fastcall DeckSetupRequest___ctor(DeckSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall DeckSetupRequest__beginRequest(
        DeckSetupRequest_o *this,
        int64_t activeDeckId,
        UserDeckEntity_o *userDeck,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  MiniMessagePack_MiniMessagePacker_o *v26; // x20
  System_Byte_array *v27; // x20
  System_String_o *v28; // x0

  if ( (byte_49FDB84 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, activeDeckId);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v10);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_16584/*"activeDeckId"*/, v12);
    sub_1B640C8(&StringLiteral_24283/*"userDeck"*/, v13);
    byte_49FDB84 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_40849372((RequestBase_o *)this, (System_String_o *)StringLiteral_16584/*"activeDeckId"*/, activeDeckId, 0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserDeckEntity__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v16 )
    goto LABEL_14;
  items = v16->fields._items;
  v21 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v23[4] = (Il2CppClass *)userDeck;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)userDeck, v18, v19);
  }
  v26 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v24, v25);
  MiniMessagePack_MiniMessagePacker___ctor(v26, 0LL);
  if ( !v26 )
LABEL_14:
    sub_1B64324(v17);
  v27 = MiniMessagePack_MiniMessagePacker__PackClass(v26, (Il2CppObject *)v16, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v28 = System_Convert__ToBase64String(v27, 0LL);
  RequestBase__addField_40850936((RequestBase_o *)this, (System_String_o *)StringLiteral_24283/*"userDeck"*/, v28, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_49FDB83 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FDB83 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDB82 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_18448/*"deck/setup"*/, v2);
    byte_49FDB82 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_18448/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_49FDB85 & 1) == 0 )
  {
    sub_1B640C8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_49FDB85 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40846016(v7, 0LL) )
    v8 = &StringLiteral_22137/*"ok"*/;
  else
    v8 = &StringLiteral_21968/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}