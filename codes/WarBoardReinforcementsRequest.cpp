void __fastcall WarBoardReinforcementsRequest___ctor(WarBoardReinforcementsRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardReinforcementsRequest__beginRequest(
        WarBoardReinforcementsRequest_o *this,
        WarBoardData_o *warBoardData,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIds,
        System_Int32_array *squareIds,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t id; // w0

  v10 = (RequestBase_o *)this;
  if ( (byte_4189254 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22263/*"stageId"*/, warBoardData);
    sub_B2C35C(&StringLiteral_22264/*"stageReinforcementId"*/, v11);
    sub_B2C35C(&StringLiteral_21752/*"reinforcementsIdx"*/, v12);
    this = (WarBoardReinforcementsRequest_o *)sub_B2C35C(&StringLiteral_22237/*"squareIds"*/, v13);
    byte_4189254 = 1;
  }
  if ( !warBoardData )
    sub_B2C434(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_22263/*"stageId"*/, id, 0LL);
  WarBoardData__SetRequest(warBoardData, v10, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_22264/*"stageReinforcementId"*/, stageReinforcementId, 0LL);
  RequestBase__addField_31052036(v10, (System_String_o *)StringLiteral_21752/*"reinforcementsIdx"*/, &reinforcementsIds->obj, 0LL);
  RequestBase__addField_31052036(v10, (System_String_o *)StringLiteral_22237/*"squareIds"*/, &squareIds->obj, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall WarBoardReinforcementsRequest__getURL(
        WarBoardReinforcementsRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4189253 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23207/*"warBoard/reinforcements"*/, v2);
    byte_4189253 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23207/*"warBoard/reinforcements"*/, 0LL);
}


void __fastcall WarBoardReinforcementsRequest__requestCompleted(
        WarBoardReinforcementsRequest_o *this,
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

  if ( (byte_4189255 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B2C35C(&JsonManager_TypeInfo, v6);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_23215/*"warBoardData"*/, v9);
    byte_4189255 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(102, responseList, 0LL);
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