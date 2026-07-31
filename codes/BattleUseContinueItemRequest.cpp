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
  __int64 v11; // x1

  if ( (byte_593A16E & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25781/*"useItemId"*/);
    sub_21FFC50(&StringLiteral_19030/*"continueNum"*/);
    sub_21FFC50(&StringLiteral_17769/*"battleId"*/);
    sub_21FFC50(&StringLiteral_25782/*"useItemNum"*/);
    byte_593A16E = 1;
  }
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_17769/*"battleId"*/, battleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19030/*"continueNum"*/, continueNum, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25781/*"useItemId"*/, useItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25782/*"useItemNum"*/, useItemNum, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *BattleUseContinueItemRequest__getMockData(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_593A16D & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9500/*"MockBattleUseContinueItemRequest"*/);
    byte_593A16D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9500/*"MockBattleUseContinueItemRequest"*/, 0);
}


System_String_o *BattleUseContinueItemRequest__getParameterFileName(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_593A16F & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593A16F = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(29, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *BattleUseContinueItemRequest__getURL(BattleUseContinueItemRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A16C & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17755/*"battle/useContinueItem"*/);
    byte_593A16C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17755/*"battle/useContinueItem"*/, 0);
}


void BattleUseContinueItemRequest__requestCompleted(
        BattleUseContinueItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A170 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A170 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(105, responseList, 0);
  if ( v5 && v5->fields.success )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}