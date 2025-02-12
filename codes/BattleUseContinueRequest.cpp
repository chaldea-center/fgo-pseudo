// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUseContinueRequest__beginRequest(
        BattleUseContinueRequest_o *this,
        int64_t battleId,
        System_Int32_array *usedTurnArray,
        int32_t continueCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4BC9343 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, battleId);
    sub_1C1ABD4(&StringLiteral_24786/*"usedTurnList"*/, v9);
    sub_1C1ABD4(&StringLiteral_18539/*"continueNum"*/, v10);
    sub_1C1ABD4(&StringLiteral_17388/*"battleId"*/, v11);
    byte_4BC9343 = 1;
  }
  RequestBase__addField_42368496(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17388/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&continueCount);
  RequestBase__addField_42370648(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24786/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18539/*"continueNum"*/, continueCount, v13);
  RequestBase__addBaseField((RequestBase_o *)this, v14);
  RequestBase__WriteParameter((RequestBase_o *)this, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getMockData(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BC9342 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_9285/*"MockBattleUseContinueRequest"*/, v2);
    byte_4BC9342 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9285/*"MockBattleUseContinueRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BC9344 & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, method);
    sub_1C1ABD4(&DatFileName_TypeInfo, v2);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v3);
    byte_4BC9344 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(2, 0LL);
  return System_String__Concat_63051628(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getURL(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC9341 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17375/*"battle/useContinue"*/, v2);
    byte_4BC9341 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_17375/*"battle/useContinue"*/, 0LL);
}


void __fastcall BattleUseContinueRequest__requestCompleted(
        BattleUseContinueRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4BC9345 & 1) == 0 )
  {
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC9345 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(24, responseList, 0LL);
  if ( v7 && v7->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22613/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22437/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}