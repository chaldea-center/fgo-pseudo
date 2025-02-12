void __fastcall UserPresentReceiveRequest___ctor(UserPresentReceiveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall UserPresentReceiveRequest__beginRequest(
        UserPresentReceiveRequest_o *this,
        System_Int64_array *presentIds,
        int32_t itemSelectIdx,
        int32_t itemSelectNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  MiniMessagePack_MiniMessagePacker_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_Byte_array *v16; // x22
  System_String_o *v17; // x0

  if ( (byte_4BB6130 & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, presentIds);
    sub_1C13D24(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_21231/*"iso_8859-1:1987"*/, v10);
    sub_1C13D24(&StringLiteral_22965/*"positiveInteger"*/, v11);
    sub_1C13D24(&StringLiteral_21232/*"iso_8859-2"*/, v12);
    byte_4BB6130 = 1;
  }
  v13 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C13F70(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v13, 0LL);
  if ( !v13 )
    sub_1C13F80(v14, v15);
  v16 = MiniMessagePack_MiniMessagePacker__PackClass(v13, &presentIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v17 = System_Convert__ToBase64String(v16, 0LL);
  RequestBase__addField_42303556((RequestBase_o *)this, (System_String_o *)StringLiteral_22965/*"positiveInteger"*/, v17, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21231/*"iso_8859-1:1987"*/, itemSelectIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21232/*"iso_8859-2"*/, itemSelectNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getMockData(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB612F & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_9288/*"MockMultiGachaResponse"*/, v2);
    byte_4BB612F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9288/*"MockMultiGachaResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getURL(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB612E & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_22963/*"pos"*/, v2);
    byte_4BB612E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_22963/*"pos"*/, 0LL);
}


void __fastcall UserPresentReceiveRequest__requestCompleted(
        UserPresentReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_4BB6131 & 1) == 0 )
  {
    sub_1C13D24(&JsonManager_TypeInfo, responseList);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB6131 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(29, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22421/*"newAttributes"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}