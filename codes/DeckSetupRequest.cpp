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
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  MiniMessagePack_MiniMessagePacker_o *v23; // x20
  System_Byte_array *v24; // x20
  System_String_o *v25; // x0

  if ( (byte_4A0A3EF & 1) == 0 )
  {
    sub_1B686D4(&System_Convert_TypeInfo, activeDeckId);
    sub_1B686D4(&JsonManager_TypeInfo, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v10);
    sub_1B686D4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11);
    sub_1B686D4(&StringLiteral_16587/*"activeDeckId"*/, v12);
    sub_1B686D4(&StringLiteral_24299/*"userDeck"*/, v13);
    byte_4A0A3EF = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_40919284((RequestBase_o *)this, (System_String_o *)StringLiteral_16587/*"activeDeckId"*/, activeDeckId, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v14 )
    goto LABEL_14;
  items = v14->fields._items;
  v20 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v22[4] = (Il2CppClass *)userDeck;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)userDeck, v17, v18);
  }
  v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B68920(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL);
  if ( !v23 )
LABEL_14:
    sub_1B68930(v15, v16);
  v24 = MiniMessagePack_MiniMessagePacker__PackClass(v23, (Il2CppObject *)v14, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v25 = System_Convert__ToBase64String(v24, 0LL);
  RequestBase__addField_40920848((RequestBase_o *)this, (System_String_o *)StringLiteral_24299/*"userDeck"*/, v25, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A0A3EE & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0A3EE = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A3ED & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_18453/*"deck/setup"*/, v2);
    byte_4A0A3ED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_18453/*"deck/setup"*/, 0LL);
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

  if ( (byte_4A0A3F0 & 1) == 0 )
  {
    sub_1B686D4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v5);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v6);
    byte_4A0A3F0 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40916448(v7, 0LL) )
    v8 = &StringLiteral_22150/*"ok"*/;
  else
    v8 = &StringLiteral_21981/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}