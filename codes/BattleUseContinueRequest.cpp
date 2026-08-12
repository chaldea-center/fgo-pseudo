void BattleUseContinueRequest___ctor(BattleUseContinueRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleUseContinueRequest__DeleteSaveData(const MethodInfo *method)
{
  RequestBase__DeleteSaveData(2, 0);
}


void BattleUseContinueRequest__beginRequest(
        BattleUseContinueRequest_o *this,
        int64_t battleId,
        System_Int32_array *usedTurnArray,
        int32_t continueCount,
        const MethodInfo *method)
{
  __int64 v9; // x1

  if ( (byte_5972350 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_25845/*"usedTurnList"*/);
    sub_2213A60(&StringLiteral_19070/*"continueNum"*/);
    sub_2213A60(&StringLiteral_17807/*"battleId"*/);
    byte_5972350 = 1;
  }
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_17807/*"battleId"*/, battleId, 0);
  RequestBase__addField_51259092((RequestBase_o *)this, (System_String_o *)StringLiteral_25845/*"usedTurnList"*/, &usedTurnArray->obj, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19070/*"continueNum"*/, continueCount, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *BattleUseContinueRequest__getMockData(BattleUseContinueRequest_o *this, const MethodInfo *method)
{
  if ( (byte_597234F & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_9514/*"MockBattleUseContinueRequest"*/);
    byte_597234F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9514/*"MockBattleUseContinueRequest"*/, 0);
}


System_String_o *BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5972351 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5972351 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(2, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *BattleUseContinueRequest__getURL(BattleUseContinueRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597234E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17791/*"battle/useContinue"*/);
    byte_597234E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_17791/*"battle/useContinue"*/, 0);
}


void BattleUseContinueRequest__requestCompleted(
        BattleUseContinueRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_5972352 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972352 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(24, responseList, 0);
  if ( v5 && v5->fields.success )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}