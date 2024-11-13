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
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t id; // w0

  v6 = (RequestBase_o *)this;
  if ( (byte_4B17C08 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23725/*"stageId"*/, *(_QWORD *)&treasureId, warBoardData);
    this = (WarBoardTreasureRequest_o *)sub_1BCA7E0(&StringLiteral_24313/*"treasureId"*/, v7, v8);
    byte_4B17C08 = 1;
  }
  if ( !warBoardData )
    sub_1BCAA3C(this, *(_QWORD *)&treasureId);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_23725/*"stageId"*/, id, 0LL);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_24313/*"treasureId"*/, treasureId, 0LL);
  WarBoardData__SetRequest(warBoardData, v6, 0LL);
}


System_String_o *__fastcall WarBoardTreasureRequest__getURL(WarBoardTreasureRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17C07 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24876/*"warBoard/treasure"*/, v3, v4);
    byte_4B17C07 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24876/*"warBoard/treasure"*/, 0LL);
}


void __fastcall WarBoardTreasureRequest__requestCompleted(
        WarBoardTreasureRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *success; // x20
  System_String_o *v14; // x1

  if ( (byte_4B17C09 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17C09 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(94, responseList, 0LL);
  if ( v9
    && (v11 = v9, ResponseData__checkError(v9, v9->fields.resCode, v10))
    && (success = (Il2CppObject *)v11->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
    v14 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}