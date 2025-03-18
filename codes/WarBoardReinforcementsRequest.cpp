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
  if ( (byte_4C23A4D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23970/*"updateDamageGauge"*/, warBoardData);
    sub_1C3B764(&StringLiteral_23971/*"updateDeadEffect"*/, v11);
    sub_1C3B764(&StringLiteral_23320/*"subscriptionUrl"*/, v12);
    this = (WarBoardReinforcementsRequest_o *)sub_1C3B764(&StringLiteral_23944/*"unity_GUIZTestMode"*/, v13);
    byte_4C23A4D = 1;
  }
  if ( !warBoardData )
    sub_1C3B9C0(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23970/*"updateDamageGauge"*/, id, 0LL);
  WarBoardData__SetRequest(warBoardData, v10, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23971/*"updateDeadEffect"*/, stageReinforcementId, 0LL);
  RequestBase__addField_42630344(v10, (System_String_o *)StringLiteral_23320/*"subscriptionUrl"*/, &reinforcementsIds->obj, 0LL);
  RequestBase__addField_42630344(v10, (System_String_o *)StringLiteral_23944/*"unity_GUIZTestMode"*/, &squareIds->obj, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall WarBoardReinforcementsRequest__getURL(
        WarBoardReinforcementsRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23A4C & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_25128/*"ﾜ"*/, v2);
    byte_4C23A4C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_25128/*"ﾜ"*/, 0LL);
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
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_4C23A4E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1C3B764(&JsonManager_TypeInfo, v6);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v8);
    sub_1C3B764(&StringLiteral_25136, v9);
    byte_4C23A4E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(103, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25136,
             (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25136,
      v15,
      (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22507/*"referrerMapId"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}