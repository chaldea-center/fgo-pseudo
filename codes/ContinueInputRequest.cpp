void __fastcall ContinueInputRequest__beginRequest(
        ContinueInputRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( (byte_4B17A76 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18427/*"continueKey"*/, continueKey, continuePass);
    sub_1BCA7E0(&StringLiteral_18429/*"continuePass"*/, v7, v8);
    byte_4B17A76 = 1;
  }
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_18427/*"continueKey"*/, continueKey, method);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_18429/*"continuePass"*/, continuePass, v9);
  RequestBase__beginRequest((RequestBase_o *)this, v10);
}


System_String_o *__fastcall ContinueInputRequest__getMockData(ContinueInputRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17A75 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17A75 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueInputRequest__getURL(ContinueInputRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A74 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18425/*"continue/input"*/, v3, v4);
    byte_4B17A74 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_18425/*"continue/input"*/, 0LL);
}


void __fastcall ContinueInputRequest__requestCompleted(
        ContinueInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ResponseData_o *v13; // x0
  ResponseData_o *v14; // x20
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  __int64 v17; // x1
  Il2CppObject *Item; // x20
  System_String_o *v19; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v21; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  if ( (byte_4B17A77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24675/*"userGame"*/, v11, v12);
    byte_4B17A77 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v13 = ResponseCommandKind__SearchData(32, responseList, 0LL);
  if ( v13 && (v14 = v13, ResponseData__checkError_41952396(v13, 0LL)) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v14->fields.success;
    if ( !success )
      sub_1BCAA3C(0LL, v15);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24675/*"userGame"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v17);
    v19 = JsonManager__toJson(Item, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v21 = (__int64)v19;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v21,
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
      v21 = StringLiteral_22292/*"ng"*/;
      goto LABEL_14;
    }
  }
}