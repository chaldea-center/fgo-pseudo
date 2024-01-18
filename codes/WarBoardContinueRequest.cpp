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
  const MethodInfo *v13; // x2

  if ( (byte_4186630 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&stageId);
    sub_B2C35C(&StringLiteral_22263/*"stageId"*/, v9);
    sub_B2C35C(&StringLiteral_17662/*"consumeType"*/, v10);
    byte_4186630 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22263/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17662/*"consumeType"*/, consumeType, 0LL);
  if ( !warBoardData )
    sub_B2C434(v11, v12);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, v13);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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

  if ( (byte_4186632 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4186632 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(41, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall WarBoardContinueRequest__getURL(WarBoardContinueRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418662F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23204/*"warBoard/continue"*/, v2);
    byte_418662F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23204/*"warBoard/continue"*/, 0LL);
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
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_4186631 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B2C35C(&JsonManager_TypeInfo, v6);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_23215/*"warBoardData"*/, v9);
    byte_4186631 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(101, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_31019724(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23215/*"warBoardData"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23215/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}