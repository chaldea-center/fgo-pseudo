void __fastcall WarBoardResumeRequest__beginRequest(
        WarBoardResumeRequest_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  int32_t id; // w0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4B46653 & 1) == 0 )
  {
    this = (WarBoardResumeRequest_o *)sub_1BDB878(&StringLiteral_23679/*"stageId"*/, warBoardData);
    byte_4B46653 = 1;
  }
  if ( !warBoardData )
    sub_1BDBAD4(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v4, (System_String_o *)StringLiteral_23679/*"stageId"*/, id, v6);
  WarBoardData__SetRequest(warBoardData, v4, 0LL);
  RequestBase__beginRequest(v4, v7);
}


System_String_o *__fastcall WarBoardResumeRequest__getURL(WarBoardResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B46652 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_24813/*"warBoard/resume"*/, v2);
    byte_4B46652 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_24813/*"warBoard/resume"*/, 0LL);
}


void __fastcall WarBoardResumeRequest__requestCompleted(
        WarBoardResumeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8

  if ( (byte_4B46654 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1BDB878(&JsonManager_TypeInfo, v6);
    sub_1BDB878(&ResponseCommandKind_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v8);
    sub_1BDB878(&StringLiteral_24820/*"warBoardData"*/, v9);
    byte_4B46654 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(101, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24820/*"warBoardData"*/,
             (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v15);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24820/*"warBoardData"*/,
      v16,
      (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        StringLiteral_22233/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}