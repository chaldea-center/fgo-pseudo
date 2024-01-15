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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t id; // w0

  if ( (byte_40FBA67 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22171/*"stageId"*/, warBoardData);
    sub_B16FFC(&StringLiteral_22172/*"stageReinforcementId"*/, v11);
    sub_B16FFC(&StringLiteral_21660/*"reinforcementsIdx"*/, v12);
    sub_B16FFC(&StringLiteral_22145/*"squareIds"*/, v13);
    byte_40FBA67 = 1;
  }
  if ( !warBoardData )
    sub_B170D4();
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22171/*"stageId"*/, id, 0LL);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22172/*"stageReinforcementId"*/, stageReinforcementId, 0LL);
  RequestBase__addField_30957272(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_21660/*"reinforcementsIdx"*/,
    &reinforcementsIds->obj,
    0LL);
  RequestBase__addField_30957272((RequestBase_o *)this, (System_String_o *)StringLiteral_22145/*"squareIds"*/, &squareIds->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardReinforcementsRequest__getURL(
        WarBoardReinforcementsRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FBA66 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23113/*"warBoard/reinforcements"*/, v2);
    byte_40FBA66 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_23113/*"warBoard/reinforcements"*/, 0LL);
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

  if ( (byte_40FBA68 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v8);
    sub_B16FFC(&StringLiteral_23121/*"warBoardData"*/, v9);
    byte_40FBA68 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(102, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_30924960(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23121/*"warBoardData"*/,
                             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23121/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_20980/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}