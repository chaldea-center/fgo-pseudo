void __fastcall TreasureBoxDrawRequest___ctor(TreasureBoxDrawRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxDrawRequest__beginRequest(
        TreasureBoxDrawRequest_o *this,
        int32_t treasureBoxId,
        int32_t drawNum,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4BC94F5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22566/*"num"*/, *(_QWORD *)&treasureBoxId);
    sub_1C1ABD4(&StringLiteral_24468/*"treasureBoxId"*/, v7);
    byte_4BC94F5 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24468/*"treasureBoxId"*/, treasureBoxId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22566/*"num"*/, drawNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TreasureBoxDrawRequest__getURL(TreasureBoxDrawRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC94F4 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_24467/*"treasureBox/draw"*/, v2);
    byte_4BC94F4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_24467/*"treasureBox/draw"*/, 0LL);
}


void __fastcall TreasureBoxDrawRequest__requestCompleted(
        TreasureBoxDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_4BC94F6 & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, responseList);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC94F6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(109, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22437/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}