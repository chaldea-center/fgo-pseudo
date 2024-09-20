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
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  MiniMessagePack_MiniMessagePacker_o *v17; // x20
  System_Byte_array *v18; // x20
  System_String_o *v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4A5C9D4 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&StringLiteral_16653/*"activeDeckId"*/);
    sub_1B885B0(&StringLiteral_24382/*"userDeck"*/);
    byte_4A5C9D4 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_16653/*"activeDeckId"*/, activeDeckId, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v8 )
    goto LABEL_14;
  items = v8->fields._items;
  v14 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v16[4] = (Il2CppClass *)userDeck;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)userDeck, v11, v12);
  }
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0LL);
  if ( !v17 )
LABEL_14:
    sub_1B8880C(v9, v10);
  v18 = MiniMessagePack_MiniMessagePacker__PackClass(v17, (Il2CppObject *)v8, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v19 = System_Convert__ToBase64String(v18, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_24382/*"userDeck"*/, v19, v20);
  RequestBase__beginRequest((RequestBase_o *)this, v21);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C9D3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C9D3 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9D2 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18520/*"deck/setup"*/);
    byte_4A5C9D2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18520/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C9D5 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C9D5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(7, responseList, 0LL);
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