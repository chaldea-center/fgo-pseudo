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
  if ( (byte_4E790EE & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25007/*"usedTurnList"*/);
    sub_1D0F0B4(&StringLiteral_18540/*"continueNum"*/);
    sub_1D0F0B4(&StringLiteral_18445/*"commandSpellId"*/);
    sub_1D0F0B4(&StringLiteral_17327/*"battleId"*/);
    byte_4E790EE = 1;
  }
  RequestBase__addField_45612144((RequestBase_o *)this, (System_String_o *)StringLiteral_17327/*"battleId"*/, battleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18445/*"commandSpellId"*/, commandSpellId, 0);
  RequestBase__addField_45601344((RequestBase_o *)this, (System_String_o *)StringLiteral_25007/*"usedTurnList"*/, &usedTurnArray->obj, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18540/*"continueNum"*/, continueCount, 0);
  if ( bt_continue )
  {
    RequestBase__addBaseField((RequestBase_o *)this, 0);
    RequestBase__WriteParameter((RequestBase_o *)this, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__RequestStart((RequestBase_o *)this, 0);
  }
  else
  {
    RequestBase__beginRequest((RequestBase_o *)this, 0);
  }
}


System_String_o *BattleCommandSpellRequest__getMockData(BattleCommandSpellRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E790ED & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_9239/*"MockBattleCommandSpellRequest"*/);
    byte_4E790ED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9239/*"MockBattleCommandSpellRequest"*/, 0);
}


System_String_o *BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4E790EF & 1) == 0 )
  {
    sub_1D0F0B4(&AndroidUtil_TypeInfo);
    sub_1D0F0B4(&DatFileName_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1043/*"/"*/);
    byte_4E790EF = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0);
  return System_String__Concat_65601036(DatFileSavePath, (System_String_o *)StringLiteral_1043/*"/"*/, FileName, 0);
}


System_String_o *BattleCommandSpellRequest__getURL(BattleCommandSpellRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E790EC & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17301/*"battle/commandSpell"*/);
    byte_4E790EC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_17301/*"battle/commandSpell"*/, 0);
}


void BattleCommandSpellRequest__requestCompleted(
        BattleCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 *v7; // x8

  if ( (byte_4E790F0 & 1) == 0 )
  {
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    byte_4E790F0 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(23, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45600864(v5, 0)) && v6->fields.success )
    v7 = &StringLiteral_22821/*"ok"*/;
  else
    v7 = &StringLiteral_22648/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0);
}