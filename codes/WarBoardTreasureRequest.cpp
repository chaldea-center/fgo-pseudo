void __fastcall WarBoardTreasureRequest___ctor(WarBoardTreasureRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureRequest__beginRequest(
        WarBoardTreasureRequest_o *this,
        int32_t treasureId,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t id; // w0

  if ( (byte_40FA903 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22171/*"stageId"*/, *(_QWORD *)&treasureId);
    sub_B16FFC(&StringLiteral_22696/*"treasureId"*/, v7);
    byte_40FA903 = 1;
  }
  if ( !warBoardData )
    sub_B170D4();
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22171/*"stageId"*/, id, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22696/*"treasureId"*/, treasureId, 0LL);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardTreasureRequest__getURL(WarBoardTreasureRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FA902 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23117/*"warBoard/treasure"*/, v2);
    byte_40FA902 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_23117/*"warBoard/treasure"*/, 0LL);
}


void __fastcall WarBoardTreasureRequest__requestCompleted(
        WarBoardTreasureRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_40FA904 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40FA904 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(93, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_30924960(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_20980/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}