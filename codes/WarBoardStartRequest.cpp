void __fastcall WarBoardStartRequest___ctor(WarBoardStartRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardStartRequest__beginRequest(
        WarBoardStartRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4BB615D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23066/*"qop"*/, *(_QWORD *)&questId);
    sub_1C13D24(&StringLiteral_23064/*"q"*/, v7);
    byte_4BB615D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23064/*"q"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23066/*"qop"*/, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardStartRequest__getURL(WarBoardStartRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB615C & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_25019/*"w"*/, v2);
    byte_4BB615C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_25019/*"w"*/, 0LL);
}


void __fastcall WarBoardStartRequest__requestCompleted(
        WarBoardStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_4BB615E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1C13D24(&JsonManager_TypeInfo, v6);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v8);
    sub_1C13D24(&StringLiteral_25024/*"wait_tuto"*/, v9);
    byte_4BB615E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(90, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25024/*"wait_tuto"*/,
             (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25024/*"wait_tuto"*/,
      v15,
      (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22421/*"newAttributes"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}