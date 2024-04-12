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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  MiniMessagePack_MiniMessagePacker_o *v10; // x20
  System_Byte_array *v11; // x20
  System_String_o *v12; // x0

  if ( (byte_42ABC7C & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_B52984(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B52984(&StringLiteral_16350/*"activeDeckId"*/);
    sub_B52984(&StringLiteral_23193/*"userDeck"*/);
    byte_42ABC7C = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_16350/*"activeDeckId"*/, activeDeckId, 0LL);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)userDeck,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__),
        v10 = (MiniMessagePack_MiniMessagePacker_o *)sub_B52A54(MiniMessagePack_MiniMessagePacker_TypeInfo),
        MiniMessagePack_MiniMessagePacker___ctor(v10, 0LL),
        !v10) )
  {
    sub_B52A5C(v8, v9);
  }
  v11 = MiniMessagePack_MiniMessagePacker__PackClass(v10, (Il2CppObject *)v7, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v12 = System_Convert__ToBase64String(v11, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_23193/*"userDeck"*/, v12, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42ABC7B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ABC7B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42ABC7A & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_18051/*"deck/setup"*/);
    byte_42ABC7A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_18051/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42ABC7D & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42ABC7D = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}