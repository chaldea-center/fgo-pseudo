void BattleCommandSpellRequest___ctor(BattleCommandSpellRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleCommandSpellRequest__DeleteSaveData(const MethodInfo *method)
{
  RequestBase__DeleteSaveData(3, 0);
}


void BattleCommandSpellRequest__beginRequest(
        BattleCommandSpellRequest_o *this,
        int64_t battleId,
        int32_t commandSpellId,
        System_Int32_array *usedTurnArray,
        int32_t continueCount,
        bool bt_continue,
        const MethodInfo *method)
{
  __int64 v13; // x1

  if ( (byte_593A142 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25797/*"usedTurnList"*/);
    sub_21FFC50(&StringLiteral_19030/*"continueNum"*/);
    sub_21FFC50(&StringLiteral_18932/*"commandSpellId"*/);
    sub_21FFC50(&StringLiteral_17769/*"battleId"*/);
    byte_593A142 = 1;
  }
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_17769/*"battleId"*/, battleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18932/*"commandSpellId"*/, commandSpellId, 0);
  RequestBase__addField_51191900((RequestBase_o *)this, (System_String_o *)StringLiteral_25797/*"usedTurnList"*/, &usedTurnArray->obj, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19030/*"continueNum"*/, continueCount, 0);
  if ( bt_continue )
  {
    RequestBase__addBaseField((RequestBase_o *)this, 0);
    RequestBase__WriteParameter((RequestBase_o *)this, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    NetworkManager__RequestStart((RequestBase_o *)this, 0);
  }
  else
  {
    RequestBase__beginRequest((RequestBase_o *)this, 0);
  }
}


System_String_o *BattleCommandSpellRequest__getMockData(BattleCommandSpellRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A141 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9496/*"MockBattleCommandSpellRequest"*/);
    byte_593A141 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9496/*"MockBattleCommandSpellRequest"*/, 0);
}


System_String_o *BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_593A143 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593A143 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(3, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *BattleCommandSpellRequest__getURL(BattleCommandSpellRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A140 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17743/*"battle/commandSpell"*/);
    byte_593A140 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17743/*"battle/commandSpell"*/, 0);
}


void BattleCommandSpellRequest__requestCompleted(
        BattleCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 *v7; // x8

  if ( (byte_593A144 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A144 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(23, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) && v6->fields.success )
    v7 = &StringLiteral_23468/*"ok"*/;
  else
    v7 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0);
}