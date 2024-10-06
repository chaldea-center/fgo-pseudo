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

  if ( (byte_4A71857 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_22725/*"questPhase"*/, *(_QWORD *)&questId);
    sub_1B90010(&StringLiteral_22723/*"questId"*/, v7);
    byte_4A71857 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22723/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22725/*"questPhase"*/, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardStartRequest__getURL(WarBoardStartRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A71856 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_24660/*"warBoard/start"*/, v2);
    byte_4A71856 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_24660/*"warBoard/start"*/, 0LL);
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
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_4A71858 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B90010(&JsonManager_TypeInfo, v6);
    sub_1B90010(&ResponseCommandKind_TypeInfo, v7);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v8);
    sub_1B90010(&StringLiteral_24665/*"warBoardData"*/, v9);
    byte_4A71858 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(90, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_41180636(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24665/*"warBoardData"*/,
             (const MethodInfo_31D8D34 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24665/*"warBoardData"*/,
      v14,
      (const MethodInfo_31D8DA0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_22088/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}