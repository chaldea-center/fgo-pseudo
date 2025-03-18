// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseRequest__beginRequest(
        PurchaseRequest_o *this,
        int32_t id,
        int32_t num,
        int32_t anotherPayFlag,
        int32_t anotherPayUsedItem,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_4C23987 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22636/*"root"*/, *(_QWORD *)&id);
    sub_1C3B764(&StringLiteral_17119/*"btn_bg_08"*/, v11);
    sub_1C3B764(&StringLiteral_20601/*"java/lang/Boolean"*/, v12);
    sub_1C3B764(&StringLiteral_17116/*"btn_bg_04"*/, v13);
    byte_4C23987 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20601/*"java/lang/Boolean"*/,
    id,
    *(const MethodInfo **)&anotherPayFlag);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22636/*"root"*/, num, v14);
  if ( anotherPayFlag >= 1 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17116/*"btn_bg_04"*/, anotherPayFlag, v16);
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17119/*"btn_bg_08"*/, anotherPayUsedItem, v17);
  }
  RequestBase__beginRequest((RequestBase_o *)this, v15);
}


System_String_o *__fastcall PurchaseRequest__getURL(PurchaseRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23986 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_23757/*"turnPageOn"*/, v2);
    byte_4C23986 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_23757/*"turnPageOn"*/, 0LL);
}


void __fastcall PurchaseRequest__requestCompleted(
        PurchaseRequest_o *this,
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

  if ( (byte_4C23988 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, responseList);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C23988 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(9, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_42712632(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
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
        StringLiteral_22507/*"referrerMapId"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}