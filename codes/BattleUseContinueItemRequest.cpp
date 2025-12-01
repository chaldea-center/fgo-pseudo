void BattleUseContinueItemRequest___ctor(BattleUseContinueItemRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleUseContinueItemRequest__DeleteSaveData(const MethodInfo *method)
{
  RequestBase__DeleteSaveData(29, 0);
}


void BattleUseContinueItemRequest__beginRequest(
        BattleUseContinueItemRequest_o *this,
        int64_t battleId,
        int32_t continueNum,
        int32_t useItemId,
        int32_t useItemNum,
        const MethodInfo *method)
{
  if ( (byte_4CC8E90 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_24604/*"useItemId"*/);
    sub_1C713B0(&StringLiteral_18286/*"continueNum"*/);
    sub_1C713B0(&StringLiteral_17097/*"battleId"*/);
    sub_1C713B0(&StringLiteral_24605/*"useItemNum"*/);
    byte_4CC8E90 = 1;
  }
  RequestBase__addField_44514616((RequestBase_o *)this, (System_String_o *)StringLiteral_17097/*"battleId"*/, battleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18286/*"continueNum"*/, continueNum, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24604/*"useItemId"*/, useItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24605/*"useItemNum"*/, useItemNum, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *BattleUseContinueItemRequest__getMockData(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC8E8F & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_9135/*"MockBattleUseContinueItemRequest"*/);
    byte_4CC8E8F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9135/*"MockBattleUseContinueItemRequest"*/, 0);
}


System_String_o *BattleUseContinueItemRequest__getParameterFileName(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CC8E91 & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&DatFileName_TypeInfo);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC8E91 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(29, 0);
  return System_String__Concat_64069988(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


System_String_o *BattleUseContinueItemRequest__getURL(BattleUseContinueItemRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8E8E & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17084/*"battle/useContinueItem"*/);
    byte_4CC8E8E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_17084/*"battle/useContinueItem"*/, 0);
}


void BattleUseContinueItemRequest__requestCompleted(
        BattleUseContinueItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CC8E92 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8E92 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(105, responseList, 0);
  if ( v5 && v5->fields.success )
    v6 = &StringLiteral_22486/*"ok"*/;
  else
    v6 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}