// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUseItemRequest__beginRequest(
        BattleUseItemRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4BC9348 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, *(_QWORD *)&itemId);
    sub_1C1ABD4(&StringLiteral_22566/*"num"*/, v9);
    sub_1C1ABD4(&StringLiteral_19445/*"eventId"*/, v10);
    sub_1C1ABD4(&StringLiteral_24773/*"useItemId"*/, v11);
    byte_4BC9348 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19445/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&eventId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24773/*"useItemId"*/, itemId, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22566/*"num"*/, num, v13);
  RequestBase__addBaseField((RequestBase_o *)this, v14);
  RequestBase__WriteParameter((RequestBase_o *)this, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getParameterFileName(
        BattleUseItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BC9347 & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, method);
    sub_1C1ABD4(&DatFileName_TypeInfo, v2);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v3);
    byte_4BC9347 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(30, 0LL);
  return System_String__Concat_63051628(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getURL(BattleUseItemRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC9346 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17377/*"battle/useItem"*/, v2);
    byte_4BC9346 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_17377/*"battle/useItem"*/, 0LL);
}


void __fastcall BattleUseItemRequest__requestCompleted(
        BattleUseItemRequest_o *this,
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

  if ( (byte_4BC9349 & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, responseList);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC9349 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(107, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_42452820(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( success )
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
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22437/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}