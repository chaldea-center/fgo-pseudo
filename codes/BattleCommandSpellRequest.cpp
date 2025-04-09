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
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_49BC75D & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, battleId);
    sub_1B4CF90(&StringLiteral_24080/*"usedTurnList"*/, v13);
    sub_1B4CF90(&StringLiteral_17938/*"continueNum"*/, v14);
    sub_1B4CF90(&StringLiteral_17852/*"commandSpellId"*/, v15);
    sub_1B4CF90(&StringLiteral_16795/*"battleId"*/, v16);
    byte_49BC75D = 1;
  }
  RequestBase__addField_41754736(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16795/*"battleId"*/,
    battleId,
    (const MethodInfo *)usedTurnArray);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17852/*"commandSpellId"*/, commandSpellId, v17);
  RequestBase__addField_41756888(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24080/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17938/*"continueNum"*/, continueCount, v19);
  if ( bt_continue )
  {
    RequestBase__addBaseField((RequestBase_o *)this, v20);
    RequestBase__WriteParameter((RequestBase_o *)this, v21);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
  }
  else
  {
    RequestBase__beginRequest((RequestBase_o *)this, v20);
  }
}


System_String_o *__fastcall BattleCommandSpellRequest__getMockData(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_49BC75C & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_8934/*"MockBattleCommandSpellRequest"*/, v2);
    byte_49BC75C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_8934/*"MockBattleCommandSpellRequest"*/, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getParameterFileName(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49BC75E & 1) == 0 )
  {
    sub_1B4CF90(&AndroidUtil_TypeInfo, method);
    sub_1B4CF90(&DatFileName_TypeInfo, v2);
    sub_1B4CF90(&StringLiteral_1057/*"/"*/, v3);
    byte_49BC75E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(3, 0LL);
  return System_String__Concat_61131716(DatFileSavePath, (System_String_o *)StringLiteral_1057/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleCommandSpellRequest__getURL(
        BattleCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC75B & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_16772/*"battle/commandSpell"*/, v2);
    byte_49BC75B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_16772/*"battle/commandSpell"*/, 0LL);
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
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_49BC75F & 1) == 0 )
  {
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v6);
    byte_49BC75F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(23, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_41839176(v7, 0LL)) && v8->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_21947/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_21779/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}