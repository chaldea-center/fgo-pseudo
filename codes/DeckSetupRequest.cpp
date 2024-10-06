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
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  MiniMessagePack_MiniMessagePacker_o *v24; // x20
  System_Byte_array *v25; // x20
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1

  if ( (byte_4A716E8 & 1) == 0 )
  {
    sub_1B90010(&System_Convert_TypeInfo, activeDeckId);
    sub_1B90010(&JsonManager_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v10);
    sub_1B90010(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11);
    sub_1B90010(&StringLiteral_16678/*"activeDeckId"*/, v12);
    sub_1B90010(&StringLiteral_24421/*"userDeck"*/, v13);
    byte_4A716E8 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_41187492((RequestBase_o *)this, (System_String_o *)StringLiteral_16678/*"activeDeckId"*/, activeDeckId, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v15 )
    goto LABEL_14;
  items = v15->fields._items;
  v21 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)userDeck,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v23[4] = (Il2CppClass *)userDeck;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)userDeck, v18, v19);
  }
  v24 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B9025C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v24, 0LL);
  if ( !v24 )
LABEL_14:
    sub_1B9026C(v16, v17);
  v25 = MiniMessagePack_MiniMessagePacker__PackClass(v24, (Il2CppObject *)v15, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v26 = System_Convert__ToBase64String(v25, 0LL);
  RequestBase__addField_41181164((RequestBase_o *)this, (System_String_o *)StringLiteral_24421/*"userDeck"*/, v26, v27);
  RequestBase__beginRequest((RequestBase_o *)this, v28);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A716E7 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A716E7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A716E6 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_18545/*"deck/setup"*/, v2);
    byte_4A716E6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_18545/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4A716E9 & 1) == 0 )
  {
    sub_1B90010(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B90010(&StringLiteral_22258/*"ok"*/, v5);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v6);
    byte_4A716E9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22258/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22088/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}