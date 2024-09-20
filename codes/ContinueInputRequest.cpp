void __fastcall ContinueInputRequest__beginRequest(
        ContinueInputRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4A5C9B8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18243/*"continueKey"*/);
    sub_1B885B0(&StringLiteral_18245/*"continuePass"*/);
    byte_4A5C9B8 = 1;
  }
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_18243/*"continueKey"*/, continueKey, method);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_18245/*"continuePass"*/, continuePass, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *__fastcall ContinueInputRequest__getMockData(ContinueInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C9B7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C9B7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueInputRequest__getURL(ContinueInputRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9B6 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18241/*"continue/input"*/);
    byte_4A5C9B6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18241/*"continue/input"*/, 0LL);
}


void __fastcall ContinueInputRequest__requestCompleted(
        ContinueInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *Item; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v13; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  if ( (byte_4A5C9B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_24421/*"userGame"*/);
    byte_4A5C9B9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(32, responseList, 0LL);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
    if ( !success )
      sub_1B8880C(0LL, v8);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24421/*"userGame"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(Item, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v13 = (__int64)v11;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v13,
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
      v13 = StringLiteral_22055/*"ng"*/;
      goto LABEL_14;
    }
  }
}