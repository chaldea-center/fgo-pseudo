void __fastcall ContinueInputRequest__beginRequest(
        ContinueInputRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4A2F784 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_18237/*"continueKey"*/, continueKey);
    sub_1B761C0(&StringLiteral_18239/*"continuePass"*/, v7);
    byte_4A2F784 = 1;
  }
  RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_18237/*"continueKey"*/, continueKey, method);
  RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_18239/*"continuePass"*/, continuePass, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall ContinueInputRequest__getMockData(ContinueInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A2F783 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    byte_4A2F783 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueInputRequest__getURL(ContinueInputRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F782 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_18235/*"continue/input"*/, v2);
    byte_4A2F782 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_18235/*"continue/input"*/, 0LL);
}


void __fastcall ContinueInputRequest__requestCompleted(
        ContinueInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *Item; // x20
  System_String_o *v15; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v17; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  if ( (byte_4A2F785 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B761C0(&JsonManager_TypeInfo, v5);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v7);
    sub_1B761C0(&StringLiteral_24408/*"userGame"*/, v8);
    byte_4A2F785 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v9 = ResponseCommandKind__SearchData(32, responseList, 0LL);
  if ( v9 && (v11 = v9, ResponseData__checkError(v9, v9->fields.resCode, v10)) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success;
    if ( !success )
      sub_1B7641C(0LL, v12);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24408/*"userGame"*/,
             (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(Item, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v17 = (__int64)v15;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v17 = StringLiteral_22046/*"ng"*/;
      goto LABEL_14;
    }
  }
}