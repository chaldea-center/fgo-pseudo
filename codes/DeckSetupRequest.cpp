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

  if ( (byte_4386E20 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_B775C4(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B775C4(&StringLiteral_16557/*"activeDeckId"*/);
    sub_B775C4(&StringLiteral_23482/*"userDeck"*/);
    byte_4386E20 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16557/*"activeDeckId"*/, activeDeckId, 0LL);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)userDeck,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__),
        v10 = (MiniMessagePack_MiniMessagePacker_o *)sub_B77694(MiniMessagePack_MiniMessagePacker_TypeInfo),
        MiniMessagePack_MiniMessagePacker___ctor(v10, 0LL),
        !v10) )
  {
    sub_B7769C(v8, v9);
  }
  v11 = MiniMessagePack_MiniMessagePacker__PackClass(v10, (Il2CppObject *)v7, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v12 = System_Convert__ToBase64String(v11, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23482/*"userDeck"*/, v12, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4386E1F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4386E1F = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4386E1E & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18280/*"deck/setup"*/);
    byte_4386E1E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18280/*"deck/setup"*/, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4386E21 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_4386E21 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}