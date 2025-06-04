void __fastcall BattleUseContinueRequest___ctor(BattleUseContinueRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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

  if ( (byte_4B03A07 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, battleId);
    sub_1BC3008(&StringLiteral_24257/*"usedTurnList"*/, v9);
    sub_1BC3008(&StringLiteral_18085/*"continueNum"*/, v10);
    sub_1BC3008(&StringLiteral_16927/*"battleId"*/, v11);
    byte_4B03A07 = 1;
  }
  RequestBase__addField_43183652((RequestBase_o *)this, (System_String_o *)StringLiteral_16927/*"battleId"*/, battleId, 0LL);
  RequestBase__addField_43193604(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24257/*"usedTurnList"*/,
    &usedTurnArray->obj,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18085/*"continueNum"*/, continueCount, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getMockData(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B03A06 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_9053/*"MockBattleUseContinueRequest"*/, v2);
    byte_4B03A06 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9053/*"MockBattleUseContinueRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B03A08 & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, method);
    sub_1BC3008(&DatFileName_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v3);
    byte_4B03A08 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(2, 0LL);
  return System_String__Concat_62386896(DatFileSavePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getURL(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03A05 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_16914/*"battle/useContinue"*/, v2);
    byte_4B03A05 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_16914/*"battle/useContinue"*/, 0LL);
}


void __fastcall BattleUseContinueRequest__requestCompleted(
        BattleUseContinueRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B03A09 & 1) == 0 )
  {
    sub_1BC3008(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03A09 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(24, responseList, 0LL);
  if ( v7 && v7->fields.success )
    v8 = &StringLiteral_22163/*"ok"*/;
  else
    v8 = &StringLiteral_21997/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}