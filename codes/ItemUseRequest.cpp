// local variable allocation has failed, the output may be wrong!
void __fastcall ItemUseRequest__beginRequest(
        ItemUseRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4BDDEF3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22585/*"num"*/);
    sub_1C21E38(&StringLiteral_19460/*"eventId"*/);
    sub_1C21E38(&StringLiteral_24793/*"useItemId"*/);
    byte_4BDDEF3 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19460/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&eventId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24793/*"useItemId"*/, itemId, v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22585/*"num"*/, num, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *__fastcall ItemUseRequest__getURL(ItemUseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDEF2 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_21258/*"item/use"*/);
    byte_4BDDEF2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_21258/*"item/use"*/, 0LL);
}


void __fastcall ItemUseRequest__requestCompleted(
        ItemUseRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8

  if ( (byte_4BDDEF4 & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDEF4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(44, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_42505456(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( success )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v8 = JsonManager__toJson(success, 0, 0, 0LL);
      CallBack = this->fields.CallBack;
      if ( CallBack )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
          CallBack->fields.original_method_info,
          v8,
          *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    v10 = this->fields.CallBack;
    if ( v10 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v10->fields.m_target)(
        v10->fields.original_method_info,
        StringLiteral_22456/*"ng"*/,
        *(_QWORD *)&v10->fields.extra_arg);
  }
}