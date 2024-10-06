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

  if ( (byte_4A71660 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, battleId);
    sub_1B90010(&StringLiteral_24406/*"usedTurnList"*/, v9);
    sub_1B90010(&StringLiteral_18270/*"continueNum"*/, v10);
    sub_1B90010(&StringLiteral_17138/*"battleId"*/, v11);
    byte_4A71660 = 1;
  }
  RequestBase__addField_41187492(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17138/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&continueCount);
  RequestBase__addField_41190224(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24406/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18270/*"continueNum"*/, continueCount, v13);
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

  if ( (byte_4A7165F & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_9108/*"MockBattleUseContinueRequest"*/, v2);
    byte_4A7165F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9108/*"MockBattleUseContinueRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A71661 & 1) == 0 )
  {
    sub_1B90010(&AndroidUtil_TypeInfo, method);
    sub_1B90010(&DatFileName_TypeInfo, v2);
    sub_1B90010(&StringLiteral_1123/*"/"*/, v3);
    byte_4A71661 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(2, 0LL);
  return System_String__Concat_61798352(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getURL(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A7165E & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_17125/*"battle/useContinue"*/, v2);
    byte_4A7165E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_17125/*"battle/useContinue"*/, 0LL);
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

  if ( (byte_4A71662 & 1) == 0 )
  {
    sub_1B90010(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B90010(&StringLiteral_22258/*"ok"*/, v5);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v6);
    byte_4A71662 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(24, responseList, 0LL);
  if ( v7 && v7->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22258/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22088/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}