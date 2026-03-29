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
  if ( (byte_4D32401 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_24810/*"usedTurnList"*/);
    sub_1C93AD4(&StringLiteral_18402/*"continueNum"*/);
    sub_1C93AD4(&StringLiteral_18308/*"commandSpellId"*/);
    sub_1C93AD4(&StringLiteral_17203/*"battleId"*/);
    byte_4D32401 = 1;
  }
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_17203/*"battleId"*/, battleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18308/*"commandSpellId"*/, commandSpellId, 0);
  RequestBase__addField_44913028((RequestBase_o *)this, (System_String_o *)StringLiteral_24810/*"usedTurnList"*/, &usedTurnArray->obj, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18402/*"continueNum"*/, continueCount, 0);
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
  if ( (byte_4D32400 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9181/*"MockBattleCommandSpellRequest"*/);
    byte_4D32400 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9181/*"MockBattleCommandSpellRequest"*/, 0);
}


System_String_o *BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D32402 & 1) == 0 )
  {
    sub_1C93AD4(&AndroidUtil_TypeInfo);
    sub_1C93AD4(&DatFileName_TypeInfo);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D32402 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0);
  return System_String__Concat_64463988(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


System_String_o *BattleCommandSpellRequest__getURL(BattleCommandSpellRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D323FF & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17177/*"battle/commandSpell"*/);
    byte_4D323FF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_17177/*"battle/commandSpell"*/, 0);
}


void BattleCommandSpellRequest__requestCompleted(
        BattleCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 *v7; // x8

  if ( (byte_4D32403 & 1) == 0 )
  {
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D32403 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(23, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44908744(v5, 0)) && v6->fields.success )
    v7 = &StringLiteral_22655/*"ok"*/;
  else
    v7 = &StringLiteral_22483/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0);
}