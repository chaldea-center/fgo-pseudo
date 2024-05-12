void __fastcall WarBoardStartRequest___ctor(WarBoardStartRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardStartRequest__beginRequest(
        WarBoardStartRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_438D2E5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22071/*"questPhase"*/);
    sub_B775C4(&StringLiteral_22069/*"questId"*/);
    byte_438D2E5 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22069/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22071/*"questPhase"*/, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardStartRequest__getURL(WarBoardStartRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438D2E4 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23693/*"warBoard/start"*/);
    byte_438D2E4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_23693/*"warBoard/start"*/, 0LL);
}


void __fastcall WarBoardStartRequest__requestCompleted(
        WarBoardStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_438D2E6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_23698/*"warBoardData"*/);
    byte_438D2E6 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(90, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23698/*"warBoardData"*/,
                             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23698/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v9,
      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}