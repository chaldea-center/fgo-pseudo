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
  if ( (byte_438A8A8 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23459/*"useItemId"*/);
    sub_B775C4(&StringLiteral_18036/*"continueNum"*/);
    sub_B775C4(&StringLiteral_16979/*"battleId"*/);
    sub_B775C4(&StringLiteral_23460/*"useItemNum"*/);
    byte_438A8A8 = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16979/*"battleId"*/, battleId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18036/*"continueNum"*/, continueNum, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23459/*"useItemId"*/, useItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23460/*"useItemNum"*/, useItemNum, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getMockData(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_438A8A7 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_9327/*"MockBattleUseContinueItemRequest"*/);
    byte_438A8A7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9327/*"MockBattleUseContinueItemRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getParameterFileName(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_438A8A9 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438A8A9 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(29, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getURL(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438A8A6 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16967/*"battle/useContinueItem"*/);
    byte_438A8A6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16967/*"battle/useContinueItem"*/, 0LL);
}


void __fastcall BattleUseContinueItemRequest__requestCompleted(
        BattleUseContinueItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438A8AA & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438A8AA = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(105, responseList, 0LL);
  if ( v5 && v5->fields.success )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}