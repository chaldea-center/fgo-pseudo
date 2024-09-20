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
  int32_t id; // w0

  v6 = (RequestBase_o *)this;
  if ( (byte_4A5CB43 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    this = (WarBoardTreasureRequest_o *)sub_1B885B0(&StringLiteral_24061/*"treasureId"*/);
    byte_4A5CB43 = 1;
  }
  if ( !warBoardData )
    sub_1B8880C(this, *(_QWORD *)&treasureId);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_23477/*"stageId"*/, id, 0LL);
  RequestBase__addField(v6, (System_String_o *)StringLiteral_24061/*"treasureId"*/, treasureId, 0LL);
  WarBoardData__SetRequest(warBoardData, v6, 0LL);
}


System_String_o *__fastcall WarBoardTreasureRequest__getURL(WarBoardTreasureRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB42 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24622/*"warBoard/treasure"*/);
    byte_4A5CB42 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24622/*"warBoard/treasure"*/, 0LL);
}


void __fastcall WarBoardTreasureRequest__requestCompleted(
        WarBoardTreasureRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4A5CB44 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CB44 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(94, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}