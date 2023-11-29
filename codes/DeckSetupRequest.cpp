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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  MiniMessagePack_MiniMessagePacker_o *v23; // x20
  System_Byte_array *v24; // x20
  System_String_o *v25; // x0

  if ( (byte_40F5A91 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, activeDeckId);
    sub_B16FFC(&JsonManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v10);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_16176, v12);
    sub_B16FFC(&StringLiteral_22910, v13);
    byte_40F5A91 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson((Il2CppObject *)userDeck, 0, 0, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_16176, activeDeckId, 0LL);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserDeckEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( !v18
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)userDeck,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__),
        v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                       MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21,
                                                       v22),
        MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL),
        !v23) )
  {
    sub_B170D4();
  }
  v24 = MiniMessagePack_MiniMessagePacker__PackClass(v23, (Il2CppObject *)v18, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v25 = System_Convert__ToBase64String(v24, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_22910, v25, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckSetupRequest__getMockData(DeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_40F5A90 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F5A90 = 1;
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall DeckSetupRequest__getURL(DeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F5A8F & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_17855, v2);
    byte_40F5A8F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_17855, 0LL);
}


void __fastcall DeckSetupRequest__requestCompleted(
        DeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40F5A92 & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40F5A92 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(7, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129;
  else
    v8 = (System_String_o **)&StringLiteral_20980;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}