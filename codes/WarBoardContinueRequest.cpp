// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardContinueRequest__beginRequest(
        WarBoardContinueRequest_o *this,
        int32_t stageId,
        int32_t consumeType,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B03BF4 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&stageId);
    sub_1BC3008(&StringLiteral_23415/*"stageId"*/, v9);
    sub_1BC3008(&StringLiteral_18060/*"consumeType"*/, v10);
    byte_4B03BF4 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23415/*"stageId"*/,
    stageId,
    (const MethodInfo *)warBoardData);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18060/*"consumeType"*/, consumeType, v11);
  if ( !warBoardData )
    sub_1BC3264(v12, v13);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, v14);
  RequestBase__WriteParameter((RequestBase_o *)this, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardContinueRequest__getParameterFileName(
        WarBoardContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B03BF6 & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, method);
    sub_1BC3008(&DatFileName_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v3);
    byte_4B03BF6 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(41, 0LL);
  return System_String__Concat_62386896(DatFileSavePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall WarBoardContinueRequest__getURL(WarBoardContinueRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03BF3 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_24495/*"warBoard/continue"*/, v2);
    byte_4B03BF3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_24495/*"warBoard/continue"*/, 0LL);
}


void __fastcall WarBoardContinueRequest__requestCompleted(
        WarBoardContinueRequest_o *this,
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

  if ( (byte_4B03BF5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1BC3008(&JsonManager_TypeInfo, v6);
    sub_1BC3008(&ResponseCommandKind_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v8);
    sub_1BC3008(&StringLiteral_24506/*"warBoardData"*/, v9);
    byte_4B03BF5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(102, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24506/*"warBoardData"*/,
             (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v15);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24506/*"warBoardData"*/,
      v16,
      (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
        StringLiteral_21997/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}