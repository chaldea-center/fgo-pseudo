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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  MiniMessagePack_MiniMessagePacker_o *v17; // x20
  System_Byte_array *v18; // x20
  System_String_o *v19; // x0

  if ( (byte_418368F & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, activeDeckId);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v10);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_16241/*"activeDeckId"*/, v12);
    sub_B2C35C(&StringLiteral_23003/*"userDeck"*/, v13);
    byte_418368F = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16241/*"activeDeckId"*/, activeDeckId, 0LL);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v14
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)userDeck,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__),
        v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo),
        MiniMessagePack_MiniMessagePacker___ctor(v17, 0LL),
        !v17) )
  {
    sub_B2C434(v15, v16);
  }
  v18 = MiniMessagePack_MiniMessagePacker__PackClass(v17, (Il2CppObject *)v14, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v19 = System_Convert__ToBase64String(v18, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_23003/*"userDeck"*/, v19, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_418368E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418368E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418368D & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17923/*"deck/setup"*/, v2);
    byte_418368D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17923/*"deck/setup"*/, 0LL);
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

  if ( (byte_4183690 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4183690 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}