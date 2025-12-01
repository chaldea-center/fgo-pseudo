void WarBoardReinforcementsRequest__beginRequest(
        WarBoardReinforcementsRequest_o *this,
        WarBoardData_o *warBoardData,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIds,
        System_Int32_array *squareIds,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x20
  int32_t id; // w0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_4CC9090 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23762/*"stageId"*/);
    sub_1C713B0(&StringLiteral_23763/*"stageReinforcementId"*/);
    sub_1C713B0(&StringLiteral_23129/*"reinforcementsIdx"*/);
    this = (WarBoardReinforcementsRequest_o *)sub_1C713B0(&StringLiteral_23737/*"squareIds"*/);
    byte_4CC9090 = 1;
  }
  if ( !warBoardData )
    sub_1C71608(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23762/*"stageId"*/, id, v12);
  WarBoardData__SetRequest(warBoardData, v10, 0);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23763/*"stageReinforcementId"*/, stageReinforcementId, v13);
  RequestBase__addField_44516316(v10, (System_String_o *)StringLiteral_23129/*"reinforcementsIdx"*/, &reinforcementsIds->obj, v14);
  RequestBase__addField_44516316(v10, (System_String_o *)StringLiteral_23737/*"squareIds"*/, &squareIds->obj, v15);
  RequestBase__beginRequest(v10, v16);
}


System_String_o *WarBoardReinforcementsRequest__getURL(WarBoardReinforcementsRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC908F & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_24867/*"warBoard/reinforcements"*/);
    byte_4CC908F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_24867/*"warBoard/reinforcements"*/, 0);
}


void WarBoardReinforcementsRequest__requestCompleted(
        WarBoardReinforcementsRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v14; // x8

  if ( (byte_4CC9091 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_24875/*"warBoardData"*/);
    byte_4CC9091 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(103, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24875/*"warBoardData"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24875/*"warBoardData"*/,
      v11,
      (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v12,
        CallBack->fields.method);
  }
  else
  {
    v14 = this->fields.CallBack;
    if ( v14 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v14->fields.invoke_impl)(
        v14->fields.method_code,
        StringLiteral_22316/*"ng"*/,
        v14->fields.method);
  }
}