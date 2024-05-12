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
  if ( (byte_4387D7C & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23467/*"usedTurnList"*/);
    sub_B775C4(&StringLiteral_18036/*"continueNum"*/);
    sub_B775C4(&StringLiteral_17955/*"commandSpellId"*/);
    sub_B775C4(&StringLiteral_16979/*"battleId"*/);
    byte_4387D7C = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16979/*"battleId"*/, battleId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17955/*"commandSpellId"*/, commandSpellId, 0LL);
  RequestBase__addField_32565500(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23467/*"usedTurnList"*/,
    &usedTurnArray->obj,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18036/*"continueNum"*/, continueCount, 0LL);
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
  if ( (byte_4387D7B & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_9323/*"MockBattleCommandSpellRequest"*/);
    byte_4387D7B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9323/*"MockBattleCommandSpellRequest"*/, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4387D7D & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4387D7D = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getURL(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4387D7A & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16957/*"battle/commandSpell"*/);
    byte_4387D7A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16957/*"battle/commandSpell"*/, 0LL);
}


void __fastcall BattleCommandSpellRequest__requestCompleted(
        BattleCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 *v7; // x8

  if ( (byte_4387D7E & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_4387D7E = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(23, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) && v6->fields.success )
    v7 = &StringLiteral_21657/*"ok"*/;
  else
    v7 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0LL);
}