// local variable allocation has failed, the output may be wrong!
void WarBoardTreasureRequest__beginRequest(
        WarBoardTreasureRequest_o *this,
        int32_t treasureId,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  RequestBase_o *v6; // x20
  int32_t id; // w0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  v6 = (RequestBase_o *)this;
  if ( (byte_593A381 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24856/*"stageId"*/);
    this = (WarBoardTreasureRequest_o *)sub_21FFC50(&StringLiteral_25459/*"treasureId"*/);
    byte_593A381 = 1;
  }
  if ( !warBoardData )
    sub_21FFECC(this, *(_QWORD *)&treasureId);
  id = WarBoardData__get_id(warBoardData, 0);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_24856/*"stageId"*/, id, v8);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_25459/*"treasureId"*/, treasureId, v9);
  WarBoardData__SetRequest(warBoardData, v6, 0);
}


System_String_o *WarBoardTreasureRequest__getURL(WarBoardTreasureRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A380 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26063/*"warBoard/treasure"*/);
    byte_593A380 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_26063/*"warBoard/treasure"*/, 0);
}


void WarBoardTreasureRequest__requestCompleted(
        WarBoardTreasureRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_593A382 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A382 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(94, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (Il2CppObject *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}