void __fastcall BattleUseContinueItemRequest___ctor(BattleUseContinueItemRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BattleUseContinueItemRequest__beginRequest(
        BattleUseContinueItemRequest_o *this,
        int64_t battleId,
        int32_t continueNum,
        int32_t useItemId,
        int32_t useItemNum,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1

  if ( (byte_4A00213 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, battleId);
    sub_1B64A00(&StringLiteral_24263/*"useItemId"*/, v11);
    sub_1B64A00(&StringLiteral_18176/*"continueNum"*/, v12);
    sub_1B64A00(&StringLiteral_17048/*"battleId"*/, v13);
    sub_1B64A00(&StringLiteral_24264/*"useItemNum"*/, v14);
    byte_4A00213 = 1;
  }
  RequestBase__addField_40855016((RequestBase_o *)this, (System_String_o *)StringLiteral_17048/*"battleId"*/, battleId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18176/*"continueNum"*/, continueNum, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24263/*"useItemId"*/, useItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24264/*"useItemNum"*/, useItemNum, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getMockData(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A00212 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_9064/*"MockBattleUseContinueItemRequest"*/, v2);
    byte_4A00212 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9064/*"MockBattleUseContinueItemRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getParameterFileName(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A00214 & 1) == 0 )
  {
    sub_1B64A00(&AndroidUtil_TypeInfo, method);
    sub_1B64A00(&DatFileName_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v3);
    byte_4A00214 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(29, 0LL);
  return System_String__Concat_61396396(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getURL(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A00211 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17036/*"battle/useContinueItem"*/, v2);
    byte_4A00211 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_17036/*"battle/useContinueItem"*/, 0LL);
}


void __fastcall BattleUseContinueItemRequest__requestCompleted(
        BattleUseContinueItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4A00215 & 1) == 0 )
  {
    sub_1B64A00(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64A00(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A00215 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(105, responseList, 0LL);
  if ( v7 && v7->fields.success )
    v8 = &StringLiteral_22140/*"ok"*/;
  else
    v8 = &StringLiteral_21971/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}