void __fastcall CodeInputRequest__beginRequest(
        CodeInputRequest_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4BB5FA5 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18311/*"closeBtn"*/, code);
    byte_4BB5FA5 = 1;
  }
  RequestBase__addField_42303556((RequestBase_o *)this, (System_String_o *)StringLiteral_18311/*"closeBtn"*/, code, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall CodeInputRequest__getMockData(CodeInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5FA4 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB5FA4 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CodeInputRequest__getURL(CodeInputRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB5FA3 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_18312/*"closeMenuStateImg"*/, v2);
    byte_4BB5FA3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_18312/*"closeMenuStateImg"*/, 0LL);
}


void __fastcall CodeInputRequest__requestCompleted(
        CodeInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4BB5FA6 & 1) == 0 )
  {
    sub_1C13D24(&JsonManager_TypeInfo, responseList);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB5FA6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(30, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_42394144(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22421/*"newAttributes"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}