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

  if ( (byte_41842CD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, battleId);
    sub_B2C35C(&StringLiteral_22989/*"usedTurnList"*/, v13);
    sub_B2C35C(&StringLiteral_17682/*"continueNum"*/, v14);
    sub_B2C35C(&StringLiteral_17601/*"commandSpellId"*/, v15);
    sub_B2C35C(&StringLiteral_16649/*"battleId"*/, v16);
    byte_41842CD = 1;
  }
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16649/*"battleId"*/, battleId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17601/*"commandSpellId"*/, commandSpellId, 0LL);
  RequestBase__addField_31052036(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22989/*"usedTurnList"*/,
    &usedTurnArray->obj,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17682/*"continueNum"*/, continueCount, 0LL);
  if ( bt_continue )
  {
    RequestBase__addBaseField((RequestBase_o *)this, 0LL);
    RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
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

  if ( (byte_41842CC & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9156/*"MockBattleCommandSpellRequest"*/, v2);
    byte_41842CC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9156/*"MockBattleCommandSpellRequest"*/, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_41842CE & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41842CE = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getURL(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41842CB & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16631/*"battle/commandSpell"*/, v2);
    byte_41842CB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_16631/*"battle/commandSpell"*/, 0LL);
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

  if ( (byte_41842CF & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_41842CF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(23, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL)) && v8->fields.success )
    v9 = &StringLiteral_21218/*"ok"*/;
  else
    v9 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}