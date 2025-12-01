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
  if ( (byte_4CC8E95 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_24619/*"usedTurnList"*/);
    sub_1C713B0(&StringLiteral_18286/*"continueNum"*/);
    sub_1C713B0(&StringLiteral_17097/*"battleId"*/);
    byte_4CC8E95 = 1;
  }
  RequestBase__addField_44514616((RequestBase_o *)this, (System_String_o *)StringLiteral_17097/*"battleId"*/, battleId, 0);
  RequestBase__addField_44516316((RequestBase_o *)this, (System_String_o *)StringLiteral_24619/*"usedTurnList"*/, &usedTurnArray->obj, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18286/*"continueNum"*/, continueCount, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *BattleUseContinueRequest__getMockData(BattleUseContinueRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8E94 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_9136/*"MockBattleUseContinueRequest"*/);
    byte_4CC8E94 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9136/*"MockBattleUseContinueRequest"*/, 0);
}


System_String_o *BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CC8E96 & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&DatFileName_TypeInfo);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC8E96 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(2, 0);
  return System_String__Concat_64069988(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


System_String_o *BattleUseContinueRequest__getURL(BattleUseContinueRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8E93 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17083/*"battle/useContinue"*/);
    byte_4CC8E93 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_17083/*"battle/useContinue"*/, 0);
}


void BattleUseContinueRequest__requestCompleted(
        BattleUseContinueRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CC8E97 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8E97 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(24, responseList, 0);
  if ( v5 && v5->fields.success )
    v6 = &StringLiteral_22486/*"ok"*/;
  else
    v6 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}