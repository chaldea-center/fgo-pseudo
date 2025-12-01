void ClassBoardReleaseSquareRequest___ctor(ClassBoardReleaseSquareRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ClassBoardReleaseSquareRequest__beginRequest(
        ClassBoardReleaseSquareRequest_o *this,
        ClassBoardReleaseRequestData_o data,
        const MethodInfo *method)
{
  if ( (byte_4CC8ECD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18012/*"classBoardBaseId"*/);
    sub_1C713B0(&StringLiteral_23736/*"squareId"*/);
    byte_4CC8ECD = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18012/*"classBoardBaseId"*/, data.fields.ClassBoardId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23736/*"squareId"*/, data.fields.SquareId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ClassBoardReleaseSquareRequest__getURL(
        ClassBoardReleaseSquareRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8ECC & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_18011/*"classBoard/releaseSquare"*/);
    byte_4CC8ECC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_18011/*"classBoard/releaseSquare"*/, 0);
}


void ClassBoardReleaseSquareRequest__requestCompleted(
        ClassBoardReleaseSquareRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4CC8ECE & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8ECE = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(122, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44515240(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22316/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}