void __fastcall BattleCommandSpellRequest__beginRequest(
        BattleCommandSpellRequest_o *this,
        int64_t battleId,
        int32_t commandSpellId,
        System_Int32_array *usedTurnArray,
        int32_t continueCount,
        bool bt_continue,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_4BDDDC0 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_24806/*"usedTurnList"*/);
    sub_1C21E38(&StringLiteral_18553/*"continueNum"*/);
    sub_1C21E38(&StringLiteral_18465/*"commandSpellId"*/);
    sub_1C21E38(&StringLiteral_17401/*"battleId"*/);
    byte_4BDDDC0 = 1;
  }
  RequestBase__addField_42421084(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17401/*"battleId"*/,
    battleId,
    (const MethodInfo *)usedTurnArray);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18465/*"commandSpellId"*/, commandSpellId, v13);
  RequestBase__addField_42423236(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24806/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18553/*"continueNum"*/, continueCount, v15);
  if ( bt_continue )
  {
    RequestBase__addBaseField((RequestBase_o *)this, v16);
    RequestBase__WriteParameter((RequestBase_o *)this, v17);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
  }
  else
  {
    RequestBase__beginRequest((RequestBase_o *)this, v16);
  }
}


System_String_o *__fastcall BattleCommandSpellRequest__getMockData(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDDDBF & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9290/*"MockBattleCommandSpellRequest"*/);
    byte_4BDDDBF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9290/*"MockBattleCommandSpellRequest"*/, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDDDC1 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDDDC1 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0LL);
  return System_String__Concat_63126736(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getURL(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDBE & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17378/*"battle/commandSpell"*/);
    byte_4BDDDBE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_17378/*"battle/commandSpell"*/, 0LL);
}


void __fastcall BattleCommandSpellRequest__requestCompleted(
        BattleCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4BDDDC2 & 1) == 0 )
  {
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDDC2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(23, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_42505456(v5, 0LL)) && v6->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22632/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22456/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}