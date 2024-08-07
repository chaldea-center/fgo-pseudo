void __fastcall BattleCommandSpellRequest___ctor(BattleCommandSpellRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BattleCommandSpellRequest__beginRequest(
        BattleCommandSpellRequest_o *this,
        int64_t battleId,
        int32_t commandSpellId,
        System_Int32_array *usedTurnArray,
        int32_t continueCount,
        bool bt_continue,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1

  if ( (byte_4A001EE & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, battleId);
    sub_1B64A00(&StringLiteral_24272/*"usedTurnList"*/, v13);
    sub_1B64A00(&StringLiteral_18176/*"continueNum"*/, v14);
    sub_1B64A00(&StringLiteral_18089/*"commandSpellId"*/, v15);
    sub_1B64A00(&StringLiteral_17048/*"battleId"*/, v16);
    byte_4A001EE = 1;
  }
  RequestBase__addField_40855016((RequestBase_o *)this, (System_String_o *)StringLiteral_17048/*"battleId"*/, battleId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18089/*"commandSpellId"*/, commandSpellId, 0LL);
  RequestBase__addField_40854420(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24272/*"usedTurnList"*/,
    &usedTurnArray->obj,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18176/*"continueNum"*/, continueCount, 0LL);
  if ( bt_continue )
  {
    RequestBase__addBaseField((RequestBase_o *)this, 0LL);
    RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
  }
  else
  {
    RequestBase__beginRequest((RequestBase_o *)this, 0LL);
  }
}


System_String_o *__fastcall BattleCommandSpellRequest__getMockData(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A001ED & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_9060/*"MockBattleCommandSpellRequest"*/, v2);
    byte_4A001ED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9060/*"MockBattleCommandSpellRequest"*/, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A001EF & 1) == 0 )
  {
    sub_1B64A00(&AndroidUtil_TypeInfo, method);
    sub_1B64A00(&DatFileName_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v3);
    byte_4A001EF = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0LL);
  return System_String__Concat_61396396(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getURL(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A001EC & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17026/*"battle/commandSpell"*/, v2);
    byte_4A001EC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_17026/*"battle/commandSpell"*/, 0LL);
}


void __fastcall BattleCommandSpellRequest__requestCompleted(
        BattleCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  __int64 *v9; // x8

  if ( (byte_4A001F0 & 1) == 0 )
  {
    sub_1B64A00(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64A00(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A001F0 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(23, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_40851660(v7, 0LL)) && v8->fields.success )
    v9 = &StringLiteral_22140/*"ok"*/;
  else
    v9 = &StringLiteral_21971/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}