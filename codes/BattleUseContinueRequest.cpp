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
  if ( (byte_438A8AD & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23467/*"usedTurnList"*/);
    sub_B775C4(&StringLiteral_18036/*"continueNum"*/);
    sub_B775C4(&StringLiteral_16979/*"battleId"*/);
    byte_438A8AD = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16979/*"battleId"*/, battleId, 0LL);
  RequestBase__addField_32565500(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23467/*"usedTurnList"*/,
    &usedTurnArray->obj,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18036/*"continueNum"*/, continueCount, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getMockData(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_438A8AC & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_9328/*"MockBattleUseContinueRequest"*/);
    byte_438A8AC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9328/*"MockBattleUseContinueRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_438A8AE & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438A8AE = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(2, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getURL(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438A8AB & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16966/*"battle/useContinue"*/);
    byte_438A8AB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16966/*"battle/useContinue"*/, 0LL);
}


void __fastcall BattleUseContinueRequest__requestCompleted(
        BattleUseContinueRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438A8AF & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438A8AF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(24, responseList, 0LL);
  if ( v5 && v5->fields.success )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}