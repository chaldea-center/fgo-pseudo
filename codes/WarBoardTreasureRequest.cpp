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
  RequestBase_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t id; // w0

  v6 = (RequestBase_o *)this;
  if ( (byte_42E933D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22565/*"stageId"*/, treasureId, (_DWORD)warBoardData, method);
    this = (WarBoardTreasureRequest_o *)sub_B5D5C4(&StringLiteral_23094/*"treasureId"*/, v7, v8, v9);
    byte_42E933D = 1;
  }
  if ( !warBoardData )
    sub_B5D69C(this, *(_QWORD *)&treasureId);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_22565/*"stageId"*/, id, 0LL);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_23094/*"treasureId"*/, treasureId, 0LL);
  WarBoardData__SetRequest(warBoardData, v6, 0LL);
}


System_String_o *__fastcall WarBoardTreasureRequest__getURL(WarBoardTreasureRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E933C & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23520/*"warBoard/treasure"*/, v4, v5, v6);
    byte_42E933C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_23520/*"warBoard/treasure"*/, 0LL);
}


void __fastcall WarBoardTreasureRequest__requestCompleted(
        WarBoardTreasureRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42E933E & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E933E = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(94, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_29500464(v12, 0LL))
    && (success = (Il2CppObject *)v13->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}