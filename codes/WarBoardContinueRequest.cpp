void __fastcall WarBoardContinueRequest___ctor(WarBoardContinueRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardContinueRequest__ClearRetryParameter(WarBoardContinueRequest_o *this, const MethodInfo *method)
{
  RequestBase__ClearParameter((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardContinueRequest__beginRequest(
        WarBoardContinueRequest_o *this,
        int32_t stageId,
        int32_t consumeType,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4BC952A & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, *(_QWORD *)&stageId);
    sub_1C1ABD4(&StringLiteral_23885/*"stageId"*/, v9);
    sub_1C1ABD4(&StringLiteral_18512/*"consumeType"*/, v10);
    byte_4BC952A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23885/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18512/*"consumeType"*/, consumeType, 0LL);
  if ( !warBoardData )
    sub_1C1AE30(v11, v12);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardContinueRequest__getParameterFileName(
        WarBoardContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BC952C & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, method);
    sub_1C1ABD4(&DatFileName_TypeInfo, v2);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v3);
    byte_4BC952C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(41, 0LL);
  return System_String__Concat_63051628(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall WarBoardContinueRequest__getURL(WarBoardContinueRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC9529 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_25035/*"warBoard/continue"*/, v2);
    byte_4BC9529 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_25035/*"warBoard/continue"*/, 0LL);
}


void __fastcall WarBoardContinueRequest__requestCompleted(
        WarBoardContinueRequest_o *this,
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

  if ( (byte_4BC952B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1C1ABD4(&JsonManager_TypeInfo, v6);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v8);
    sub_1C1ABD4(&StringLiteral_25046/*"warBoardData"*/, v9);
    byte_4BC952B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(102, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25046/*"warBoardData"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25046/*"warBoardData"*/,
      v15,
      (const MethodInfo_3302CDC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22437/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}