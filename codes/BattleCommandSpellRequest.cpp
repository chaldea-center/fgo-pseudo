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

  if ( (byte_4A5C922 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24367/*"usedTurnList"*/);
    sub_1B885B0(&StringLiteral_18244/*"continueNum"*/);
    sub_1B885B0(&StringLiteral_18156/*"commandSpellId"*/);
    sub_1B885B0(&StringLiteral_17113/*"battleId"*/);
    byte_4A5C922 = 1;
  }
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17113/*"battleId"*/,
    battleId,
    (const MethodInfo *)usedTurnArray);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18156/*"commandSpellId"*/, commandSpellId, v13);
  RequestBase__addField_41136012(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24367/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18244/*"continueNum"*/, continueCount, v15);
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
  if ( (byte_4A5C921 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9099/*"MockBattleCommandSpellRequest"*/);
    byte_4A5C921 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9099/*"MockBattleCommandSpellRequest"*/, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5C923 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C923 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getURL(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C920 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17091/*"battle/commandSpell"*/);
    byte_4A5C920 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17091/*"battle/commandSpell"*/, 0LL);
}


void __fastcall BattleCommandSpellRequest__requestCompleted(
        BattleCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4A5C924 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C924 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(23, responseList, 0LL);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) && v7->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}