// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaDrawRequest__beginRequest(
        BoxGachaDrawRequest_o *this,
        int32_t gachaId,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( (byte_4B17A1D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22418/*"num"*/, *(_QWORD *)&gachaId, *(_QWORD *)&num);
    sub_1BCA7E0(&StringLiteral_17568/*"boxGachaId"*/, v7, v8);
    byte_4B17A1D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17568/*"boxGachaId"*/, gachaId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22418/*"num"*/, num, v9);
  RequestBase__beginRequest((RequestBase_o *)this, v10);
}


System_String_o *__fastcall BoxGachaDrawRequest__getURL(BoxGachaDrawRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A1C & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17565/*"boxGacha/draw"*/, v3, v4);
    byte_4B17A1C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17565/*"boxGacha/draw"*/, 0LL);
}


void __fastcall BoxGachaDrawRequest__requestCompleted(
        BoxGachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *success; // x20
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4B17A1E & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A1E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(47, responseList, 0LL);
  if ( v9
    && (v10 = v9, ResponseData__checkError_41952396(v9, 0LL))
    && (success = (Il2CppObject *)v10->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v13 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v13,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}