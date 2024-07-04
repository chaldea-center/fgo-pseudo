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
  if ( (byte_48E4101 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_23130/*"stageId"*/, warBoardData);
    sub_1B00CCC(&StringLiteral_23131/*"stageReinforcementId"*/, v11);
    sub_1B00CCC(&StringLiteral_22529/*"reinforcementsIdx"*/, v12);
    this = (WarBoardReinforcementsRequest_o *)sub_1B00CCC(&StringLiteral_23104/*"squareIds"*/, v13);
    byte_48E4101 = 1;
  }
  if ( !warBoardData )
    sub_1B00F28(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23130/*"stageId"*/, id, 0LL);
  WarBoardData__SetRequest(warBoardData, v10, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23131/*"stageReinforcementId"*/, stageReinforcementId, 0LL);
  RequestBase__addField_39761928(v10, (System_String_o *)StringLiteral_22529/*"reinforcementsIdx"*/, &reinforcementsIds->obj, 0LL);
  RequestBase__addField_39761928(v10, (System_String_o *)StringLiteral_23104/*"squareIds"*/, &squareIds->obj, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall WarBoardReinforcementsRequest__getURL(
        WarBoardReinforcementsRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E4100 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_24255/*"warBoard/reinforcements"*/, v2);
    byte_48E4100 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_24255/*"warBoard/reinforcements"*/, 0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_48E4102 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B00CCC(&JsonManager_TypeInfo, v6);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v8);
    sub_1B00CCC(&StringLiteral_24263/*"warBoardData"*/, v9);
    byte_48E4102 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(103, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_39752340(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24263/*"warBoardData"*/,
             (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24263/*"warBoardData"*/,
      v14,
      (const MethodInfo_308DA34 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21754/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}