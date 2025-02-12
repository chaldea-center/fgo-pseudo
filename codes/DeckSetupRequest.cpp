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
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  MiniMessagePack_MiniMessagePacker_o *v28; // x20
  System_Byte_array *v29; // x20
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1

  if ( (byte_4BC93CB & 1) == 0 )
  {
    sub_1C1ABD4(&System_Convert_TypeInfo, activeDeckId);
    sub_1C1ABD4(&JsonManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v10);
    sub_1C1ABD4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_16922/*"activeDeckId"*/, v12);
    sub_1C1ABD4(&StringLiteral_24801/*"userDeck"*/, v13);
    byte_4BC93CB = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_42368496((RequestBase_o *)this, (System_String_o *)StringLiteral_16922/*"activeDeckId"*/, activeDeckId, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v15 )
    goto LABEL_14;
  items = v15->fields._items;
  v25 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v27[4] = (Il2CppClass *)userDeck;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)userDeck, v18, v19, v20, v21, v22, v23);
  }
  v28 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C1AE20(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v28, 0LL);
  if ( !v28 )
LABEL_14:
    sub_1C1AE30(v16, v17);
  v29 = MiniMessagePack_MiniMessagePacker__PackClass(v28, (Il2CppObject *)v15, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v30 = System_Convert__ToBase64String(v29, 0LL);
  RequestBase__addField_42362156((RequestBase_o *)this, (System_String_o *)StringLiteral_24801/*"userDeck"*/, v30, v31);
  RequestBase__beginRequest((RequestBase_o *)this, v32);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BC93CA & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC93CA = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC93C9 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_18819/*"deck/setup"*/, v2);
    byte_4BC93C9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_18819/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BC93CC & 1) == 0 )
  {
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC93CC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42452820(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22613/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22437/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}